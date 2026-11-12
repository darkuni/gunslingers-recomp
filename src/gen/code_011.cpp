#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// wcscpy
void f_800CE4D0(Ctx* __restrict c) {
  trace_call(0x800CE4D0u);
  c->r[4]=c->r[4]+0xFFFFFFFEu; // 800CE4D0
  c->r[5]=c->r[3]+0xFFFFFFFEu; // 800CE4D4
L_800CE4D8:;
  {uint32_t ea=c->r[4]+0x00000002u; c->r[0]=R16(ea); c->r[4]=ea;} // 800CE4D8
  {uint32_t ea=c->r[5]+0x00000002u; W16(ea,c->r[0]); c->r[5]=ea;} // 800CE4DC
  cmps(c,0,(int32_t)c->r[0],0); // 800CE4E0
  if (!crb(c,2)) { IRQCHK(c); goto L_800CE4D8; } // 800CE4E4
  return; // 800CE4E8
}

// fn_800CE4EC
void f_800CE4EC(Ctx* __restrict c) {
  trace_call(0x800CE4ECu);
  c->r[4]=c->r[4]+0xFFFFFFFEu; // 800CE4EC
  c->r[6]=c->r[3]+0xFFFFFFFEu; // 800CE4F0
  c->r[5]=c->r[5]+0x00000001u; // 800CE4F4
  goto L_800CE524; // 800CE4F8
L_800CE4FC:;
  {uint32_t ea=c->r[4]+0x00000002u; c->r[0]=R16(ea); c->r[4]=ea;} // 800CE4FC
  {uint32_t ea=c->r[6]+0x00000002u; W16(ea,c->r[0]); c->r[6]=ea;} // 800CE500
  cmps(c,0,(int32_t)c->r[0],0); // 800CE504
  if (!crb(c,2)) { goto L_800CE524; } // 800CE508
  c->r[0]=0u+0x00000000u; // 800CE50C
  goto L_800CE518; // 800CE510
L_800CE514:;
  {uint32_t ea=c->r[6]+0x00000002u; W16(ea,c->r[0]); c->r[6]=ea;} // 800CE514
L_800CE518:;
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 800CE518
  if (!crb(c,2)) { IRQCHK(c); goto L_800CE514; } // 800CE51C
  return; // 800CE520
L_800CE524:;
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 800CE524
  if (!crb(c,2)) { IRQCHK(c); goto L_800CE4FC; } // 800CE528
  return; // 800CE52C
}

// fn_800CE530
void f_800CE530(Ctx* __restrict c) {
  trace_call(0x800CE530u);
  c->r[5]=c->r[3]+0xFFFFFFFEu; // 800CE530
  c->r[4]=c->r[4]+0xFFFFFFFEu; // 800CE534
  goto L_800CE54C; // 800CE538
L_800CE53C:;
  cmps(c,0,(int32_t)c->r[3],0); // 800CE53C
  if (!crb(c,2)) { goto L_800CE54C; } // 800CE540
  c->r[3]=0u+0x00000000u; // 800CE544
  return; // 800CE548
L_800CE54C:;
  {uint32_t ea=c->r[5]+0x00000002u; c->r[3]=R16(ea); c->r[5]=ea;} // 800CE54C
  {uint32_t ea=c->r[4]+0x00000002u; c->r[0]=R16(ea); c->r[4]=ea;} // 800CE550
  cmpu(c,0,c->r[3],c->r[0]); // 800CE554
  if (crb(c,2)) { IRQCHK(c); goto L_800CE53C; } // 800CE558
  c->r[3]=c->r[3]-c->r[0]; // 800CE55C
  return; // 800CE560
}

// wcschr
void f_800CE564(Ctx* __restrict c) {
  trace_call(0x800CE564u);
  c->r[3]=c->r[3]+0xFFFFFFFEu; // 800CE564
  goto L_800CE574; // 800CE568
L_800CE56C:;
  cmpu(c,0,c->r[0],c->r[4]); // 800CE56C
  if (crb(c,2)) return; // 800CE570
L_800CE574:;
  {uint32_t ea=c->r[3]+0x00000002u; c->r[0]=R16(ea); c->r[3]=ea;} // 800CE574
  cmps(c,0,(int32_t)c->r[0],0); // 800CE578
  if (!crb(c,2)) { IRQCHK(c); goto L_800CE56C; } // 800CE57C
  cmps(c,0,(int32_t)c->r[4],0); // 800CE580
  if (crb(c,2)) return; // 800CE584
  c->r[3]=0u+0x00000000u; // 800CE588
  return; // 800CE58C
}

// fwide
void f_800CE590(Ctx* __restrict c) {
  trace_call(0x800CE590u);
  cmps(c,0,(int32_t)c->r[3],0); // 800CE590
  if (crb(c,2)) { goto L_800CE5A4; } // 800CE594
  c->r[5]=R32(c->r[3]+0x00000004u); // 800CE598
  c->r[0]=rotl(c->r[5],10)&0x00000007u; cr0(c,c->r[0]); // 800CE59C
  if (!crb(c,2)) { goto L_800CE5AC; } // 800CE5A0
L_800CE5A4:;
  c->r[3]=0u+0x00000000u; // 800CE5A4
  return; // 800CE5A8
L_800CE5AC:;
  c->r[0]=rotl(c->r[5],12)&0x00000003u; cr0(c,c->r[0]); // 800CE5AC
  if (crb(c,2)) { goto L_800CE5C8; } // 800CE5B0
  cmps(c,0,(int32_t)c->r[0],2); // 800CE5B4
  if (crb(c,2)) { goto L_800CE5F4; } // 800CE5B8
  cmps(c,0,(int32_t)c->r[0],1); // 800CE5BC
  if (crb(c,2)) { goto L_800CE5FC; } // 800CE5C0
  goto L_800CE600; // 800CE5C4
L_800CE5C8:;
  cmps(c,0,(int32_t)c->r[4],0); // 800CE5C8
  if (!crb(c,1)) { goto L_800CE5E0; } // 800CE5CC
  c->r[0]=0u+0x00000002u; // 800CE5D0
  c->r[5]=(rotl(c->r[0],20)&0x00300000u)|(c->r[5]&~0x00300000u); // 800CE5D4
  W32(c->r[3]+0x00000004u,c->r[5]); // 800CE5D8
  goto L_800CE600; // 800CE5DC
L_800CE5E0:;
  if (!crb(c,0)) { goto L_800CE600; } // 800CE5E0
  c->r[0]=0u+0x00000001u; // 800CE5E4
  c->r[5]=(rotl(c->r[0],20)&0x00300000u)|(c->r[5]&~0x00300000u); // 800CE5E8
  W32(c->r[3]+0x00000004u,c->r[5]); // 800CE5EC
  goto L_800CE600; // 800CE5F0
L_800CE5F4:;
  c->r[4]=0u+0x00000001u; // 800CE5F4
  goto L_800CE600; // 800CE5F8
L_800CE5FC:;
  c->r[4]=0u+0xFFFFFFFFu; // 800CE5FC
L_800CE600:;
  c->r[3]=c->r[4]|c->r[4]; // 800CE600
  return; // 800CE604
}

// __write_console
void f_800CE608(Ctx* __restrict c) {
  trace_call(0x800CE608u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE608
  c->r[0]=c->lr; // 800CE60C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CE610
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CE614
  c->r[31]=c->r[6]|c->r[6]; // 800CE618
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CE61C
  c->r[30]=c->r[5]|c->r[5]; // 800CE620
  W32(c->r[1]+0x00000014u,c->r[29]); // 800CE624
  c->r[29]=c->r[4]|c->r[4]; // 800CE628
  W32(c->r[1]+0x00000010u,c->r[28]); // 800CE62C
  c->r[28]=c->r[3]|c->r[3]; // 800CE630
  c->lr=0x800CE638u; f_80242910(c); // 800CE634
  c->r[0]=rotl(c->r[3],0)&0x20000000u; cr0(c,c->r[0]); // 800CE638
  if (!crb(c,2)) { goto L_800CE6A0; } // 800CE63C
  c->r[0]=R32(c->r[13]+0xFFFF97B8u); // 800CE640
  c->r[3]=0u+0x00000000u; // 800CE644
  cmps(c,0,(int32_t)c->r[0],0); // 800CE648
  if (!crb(c,2)) { goto L_800CE66C; } // 800CE64C
  c->r[3]=0u+0x00010000u; // 800CE650
  c->r[3]=c->r[3]+0xFFFFE100u; // 800CE654
  c->lr=0x800CE65Cu; f_80202130(c); // 800CE658
  cmps(c,0,(int32_t)c->r[3],0); // 800CE65C
  if (!crb(c,2)) { goto L_800CE66C; } // 800CE660
  c->r[0]=0u+0x00000001u; // 800CE664
  W32(c->r[13]+0xFFFF97B8u,c->r[0]); // 800CE668
L_800CE66C:;
  cmps(c,0,(int32_t)c->r[3],0); // 800CE66C
  if (crb(c,2)) { goto L_800CE67C; } // 800CE670
  c->r[3]=0u+0x00000001u; // 800CE674
  goto L_800CE6B8; // 800CE678
L_800CE67C:;
  c->r[4]=R32(c->r[30]+0x00000000u); // 800CE67C
  c->r[3]=c->r[29]|c->r[29]; // 800CE680
  c->lr=0x800CE688u; f_80202180(c); // 800CE684
  cmps(c,0,(int32_t)c->r[3],0); // 800CE688
  if (crb(c,2)) { goto L_800CE6A0; } // 800CE68C
  c->r[0]=0u+0x00000000u; // 800CE690
  W32(c->r[30]+0x00000000u,c->r[0]); // 800CE694
  c->r[3]=0u+0x00000001u; // 800CE698
  goto L_800CE6B8; // 800CE69C
L_800CE6A0:;
  c->r[3]=c->r[28]|c->r[28]; // 800CE6A0
  c->r[4]=c->r[29]|c->r[29]; // 800CE6A4
  c->r[5]=c->r[30]|c->r[30]; // 800CE6A8
  c->r[6]=c->r[31]|c->r[31]; // 800CE6AC
  c->lr=0x800CE6B4u; f_800D642C(c); // 800CE6B0
  c->r[3]=0u+0x00000000u; // 800CE6B4
L_800CE6B8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CE6B8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CE6BC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CE6C0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800CE6C4
  c->r[28]=R32(c->r[1]+0x00000010u); // 800CE6C8
  c->lr=c->r[0]; // 800CE6CC
  c->r[1]=c->r[1]+0x00000020u; // 800CE6D0
  return; // 800CE6D4
}

// __close_console
void f_800CE6D8(Ctx* __restrict c) {
  trace_call(0x800CE6D8u);
  c->r[3]=0u+0x00000000u; // 800CE6D8
  return; // 800CE6DC
}

// __msl_runtime_constraint_violation_s
void f_800CE6E0(Ctx* __restrict c) {
  trace_call(0x800CE6E0u);
  c->r[12]=R32(c->r[13]+0xFFFF97C8u); // 800CE6E0
  cmps(c,0,(int32_t)c->r[12],0); // 800CE6E4
  if (crb(c,2)) return; // 800CE6E8
  c->ctr=c->r[12]; // 800CE6EC
  if (true) { dispatch(c,c->ctr); return; } // 800CE6F0
}

// fn_800CE6F4
void f_800CE6F4(Ctx* __restrict c) {
  trace_call(0x800CE6F4u);
  return; // 800CE6F4
}

// scalbn
void f_800CE6F8(Ctx* __restrict c) {
  trace_call(0x800CE6F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE6F8
  c->r[0]=c->lr; // 800CE6FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CE700
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CE704
  c->r[31]=c->r[3]|c->r[3]; // 800CE708
  c->r[3]=c->r[1]+0x00000008u; // 800CE70C
  c->lr=0x800CE714u; f_800D2508(c); // 800CE710
  c->r[0]=R32(c->r[1]+0x00000008u); // 800CE714
  c->r[3]=c->r[0]+c->r[31]; // 800CE718
  W32(c->r[1]+0x00000008u,c->r[3]); // 800CE71C
  c->lr=0x800CE724u; f_800D2590(c); // 800CE720
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CE724
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CE728
  c->lr=c->r[0]; // 800CE72C
  c->r[1]=c->r[1]+0x00000020u; // 800CE730
  return; // 800CE734
}

// __ieee754_acos
void f_800CE738(Ctx* __restrict c) {
  trace_call(0x800CE738u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CE738
  c->r[0]=c->lr; // 800CE73C
  W32(c->r[1]+0x00000044u,c->r[0]); // 800CE740
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 800CE744
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 800CE748
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 800CE74C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 800CE750
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800CE754
  c->r[0]=0u+0x3FF00000u; // 800CE758
  c->r[4]=R32(c->r[1]+0x00000008u); // 800CE75C
  c->r[3]=rotl(c->r[4],0)&0x7FFFFFFFu; // 800CE760
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800CE764
  if (crb(c,0)) { goto L_800CE7A8; } // 800CE768
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800CE76C
  c->r[3]=c->r[3]+0xC0100000u; // 800CE770
  c->r[0]=c->r[3]|c->r[0]; cr0(c,c->r[0]); // 800CE774
  if (!crb(c,2)) { goto L_800CE794; } // 800CE778
  cmps(c,0,(int32_t)c->r[4],0); // 800CE77C
  if (!crb(c,1)) { goto L_800CE78C; } // 800CE780
  {uint32_t ea=c->r[2]+0xFFFF98A8u; c->f[1]=RF64(ea);} // 800CE784
  goto L_800CE9E4; // 800CE788
L_800CE78C:;
  {uint32_t ea=c->r[2]+0xFFFF98B0u; c->f[1]=RF64(ea);} // 800CE78C
  goto L_800CE9E4; // 800CE790
L_800CE794:;
  c->r[3]=0u+0x804D0000u; // 800CE794
  c->r[0]=0u+0x00000021u; // 800CE798
  W32(c->r[13]+0xFFFF97B0u,c->r[0]); // 800CE79C
  {uint32_t ea=c->r[3]+0x000038A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CE7A0
  goto L_800CE9E4; // 800CE7A4
L_800CE7A8:;
  c->r[0]=0u+0x3FE00000u; // 800CE7A8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800CE7AC
  if (!crb(c,0)) { goto L_800CE864; } // 800CE7B0
  c->r[0]=0u+0x3C600000u; // 800CE7B4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800CE7B8
  if (crb(c,1)) { goto L_800CE7C8; } // 800CE7BC
  {uint32_t ea=c->r[2]+0xFFFF98B8u; c->f[1]=RF64(ea);} // 800CE7C0
  goto L_800CE9E4; // 800CE7C4
L_800CE7C8:;
  c->f[12]=c->f[1]*c->f[1]; // 800CE7C8
  {uint32_t ea=c->r[2]+0xFFFF98E8u; c->f[0]=RF64(ea);} // 800CE7CC
  {uint32_t ea=c->r[2]+0xFFFF9910u; c->f[2]=RF64(ea);} // 800CE7D0
  {uint32_t ea=c->r[2]+0xFFFF98E0u; c->f[3]=RF64(ea);} // 800CE7D4
  {uint32_t ea=c->r[2]+0xFFFF98D8u; c->f[10]=RF64(ea);} // 800CE7D8
  c->f[4]=c->f[0]*c->f[12]; // 800CE7DC
  {uint32_t ea=c->r[2]+0xFFFF9908u; c->f[0]=RF64(ea);} // 800CE7E0
  c->f[2]=c->f[2]*c->f[12]; // 800CE7E4
  {uint32_t ea=c->r[2]+0xFFFF9900u; c->f[5]=RF64(ea);} // 800CE7E8
  {uint32_t ea=c->r[2]+0xFFFF98D0u; c->f[9]=RF64(ea);} // 800CE7EC
  c->f[3]=c->f[3]+c->f[4]; // 800CE7F0
  {uint32_t ea=c->r[2]+0xFFFF98F8u; c->f[4]=RF64(ea);} // 800CE7F4
  c->f[0]=c->f[0]+c->f[2]; // 800CE7F8
  c->f[11]=c->f[12]*c->f[3]; // 800CE7FC
  {uint32_t ea=c->r[2]+0xFFFF98C8u; c->f[8]=RF64(ea);} // 800CE800
  {uint32_t ea=c->r[2]+0xFFFF98F0u; c->f[3]=RF64(ea);} // 800CE804
  c->f[6]=c->f[12]*c->f[0]; // 800CE808
  {uint32_t ea=c->r[2]+0xFFFF98C0u; c->f[7]=RF64(ea);} // 800CE80C
  {uint32_t ea=c->r[2]+0xFFFF9918u; c->f[2]=RF64(ea);} // 800CE810
  c->f[10]=c->f[10]+c->f[11]; // 800CE814
  {uint32_t ea=c->r[2]+0xFFFF98B8u; c->f[0]=RF64(ea);} // 800CE818
  c->f[5]=c->f[5]+c->f[6]; // 800CE81C
  c->f[6]=c->f[12]*c->f[10]; // 800CE820
  c->f[5]=c->f[12]*c->f[5]; // 800CE824
  c->f[6]=c->f[9]+c->f[6]; // 800CE828
  c->f[4]=c->f[4]+c->f[5]; // 800CE82C
  c->f[5]=c->f[12]*c->f[6]; // 800CE830
  c->f[4]=c->f[12]*c->f[4]; // 800CE834
  c->f[5]=c->f[8]+c->f[5]; // 800CE838
  c->f[4]=c->f[3]+c->f[4]; // 800CE83C
  c->f[3]=c->f[12]*c->f[5]; // 800CE840
  c->f[3]=c->f[7]+c->f[3]; // 800CE844
  c->f[3]=c->f[12]*c->f[3]; // 800CE848
  c->f[3]=c->f[3]/c->f[4]; // 800CE84C
  c->f[3]=c->f[1]*c->f[3]; // 800CE850
  c->f[2]=c->f[2]-c->f[3]; // 800CE854
  c->f[1]=c->f[1]-c->f[2]; // 800CE858
  c->f[1]=c->f[0]-c->f[1]; // 800CE85C
  goto L_800CE9E4; // 800CE860
L_800CE864:;
  cmps(c,0,(int32_t)c->r[4],0); // 800CE864
  if (!crb(c,0)) { goto L_800CE91C; } // 800CE868
  {uint32_t ea=c->r[2]+0xFFFF98F0u; c->f[11]=RF64(ea);} // 800CE86C
  {uint32_t ea=c->r[2]+0xFFFF9920u; c->f[0]=RF64(ea);} // 800CE870
  c->f[1]=c->f[11]+c->f[1]; // 800CE874
  {uint32_t ea=c->r[2]+0xFFFF98E8u; c->f[4]=RF64(ea);} // 800CE878
  {uint32_t ea=c->r[2]+0xFFFF98E0u; c->f[9]=RF64(ea);} // 800CE87C
  {uint32_t ea=c->r[2]+0xFFFF9908u; c->f[3]=RF64(ea);} // 800CE880
  c->f[1]=c->f[0]*c->f[1]; // 800CE884
  {uint32_t ea=c->r[2]+0xFFFF9910u; c->f[0]=RF64(ea);} // 800CE888
  {uint32_t ea=c->r[2]+0xFFFF98D8u; c->f[8]=RF64(ea);} // 800CE88C
  {uint32_t ea=c->r[2]+0xFFFF9900u; c->f[2]=RF64(ea);} // 800CE890
  {uint32_t ea=c->r[2]+0xFFFF98D0u; c->f[7]=RF64(ea);} // 800CE894
  c->f[10]=c->f[4]*c->f[1]; // 800CE898
  {uint32_t ea=c->r[2]+0xFFFF98C8u; c->f[6]=RF64(ea);} // 800CE89C
  c->f[4]=c->f[0]*c->f[1]; // 800CE8A0
  {uint32_t ea=c->r[2]+0xFFFF98F8u; c->f[0]=RF64(ea);} // 800CE8A4
  {uint32_t ea=c->r[2]+0xFFFF98C0u; c->f[5]=RF64(ea);} // 800CE8A8
  c->f[9]=c->f[9]+c->f[10]; // 800CE8AC
  c->f[3]=c->f[3]+c->f[4]; // 800CE8B0
  c->f[4]=c->f[1]*c->f[9]; // 800CE8B4
  c->f[3]=c->f[1]*c->f[3]; // 800CE8B8
  c->f[4]=c->f[8]+c->f[4]; // 800CE8BC
  c->f[2]=c->f[2]+c->f[3]; // 800CE8C0
  c->f[3]=c->f[1]*c->f[4]; // 800CE8C4
  c->f[2]=c->f[1]*c->f[2]; // 800CE8C8
  c->f[3]=c->f[7]+c->f[3]; // 800CE8CC
  c->f[0]=c->f[0]+c->f[2]; // 800CE8D0
  c->f[2]=c->f[1]*c->f[3]; // 800CE8D4
  c->f[0]=c->f[1]*c->f[0]; // 800CE8D8
  c->f[2]=c->f[6]+c->f[2]; // 800CE8DC
  c->f[30]=c->f[11]+c->f[0]; // 800CE8E0
  c->f[0]=c->f[1]*c->f[2]; // 800CE8E4
  c->f[0]=c->f[5]+c->f[0]; // 800CE8E8
  c->f[31]=c->f[1]*c->f[0]; // 800CE8EC
  c->lr=0x800CE8F4u; f_800D2C14(c); // 800CE8F0
  c->f[4]=c->f[31]/c->f[30]; // 800CE8F4
  {uint32_t ea=c->r[2]+0xFFFF9918u; c->f[3]=RF64(ea);} // 800CE8F8
  {uint32_t ea=c->r[2]+0xFFFF9928u; c->f[2]=RF64(ea);} // 800CE8FC
  {uint32_t ea=c->r[2]+0xFFFF98B0u; c->f[0]=RF64(ea);} // 800CE900
  c->f[4]=c->f[4]*c->f[1]; // 800CE904
  c->f[3]=c->f[4]-c->f[3]; // 800CE908
  c->f[1]=c->f[1]+c->f[3]; // 800CE90C
  c->f[1]=c->f[2]*c->f[1]; // 800CE910
  c->f[1]=c->f[0]-c->f[1]; // 800CE914
  goto L_800CE9E4; // 800CE918
L_800CE91C:;
  {uint32_t ea=c->r[2]+0xFFFF98F0u; c->f[2]=RF64(ea);} // 800CE91C
  {uint32_t ea=c->r[2]+0xFFFF9920u; c->f[0]=RF64(ea);} // 800CE920
  c->f[1]=c->f[2]-c->f[1]; // 800CE924
  c->f[31]=c->f[0]*c->f[1]; // 800CE928
  c->f[1]=c->f[31]; // 800CE92C
  c->lr=0x800CE934u; f_800D2C14(c); // 800CE930
  {uint32_t ea=c->r[2]+0xFFFF98E8u; c->f[2]=RF64(ea);} // 800CE934
  c->r[0]=0u+0x00000000u; // 800CE938
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[1]);} // 800CE93C
  c->f[4]=c->f[2]*c->f[31]; // 800CE940
  {uint32_t ea=c->r[2]+0xFFFF9910u; c->f[0]=RF64(ea);} // 800CE944
  {uint32_t ea=c->r[2]+0xFFFF98E0u; c->f[3]=RF64(ea);} // 800CE948
  c->f[2]=c->f[0]*c->f[31]; // 800CE94C
  {uint32_t ea=c->r[2]+0xFFFF9908u; c->f[0]=RF64(ea);} // 800CE950
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CE954
  c->f[3]=c->f[3]+c->f[4]; // 800CE958
  {uint32_t ea=c->r[1]+0x00000010u; c->f[11]=RF64(ea);} // 800CE95C
  c->f[0]=c->f[0]+c->f[2]; // 800CE960
  c->f[10]=c->f[11]*c->f[11]; // 800CE964
  {uint32_t ea=c->r[2]+0xFFFF98D8u; c->f[6]=RF64(ea);} // 800CE968
  {uint32_t ea=c->r[2]+0xFFFF98D0u; c->f[8]=RF64(ea);} // 800CE96C
  c->f[2]=c->f[31]*c->f[3]; // 800CE970
  {uint32_t ea=c->r[2]+0xFFFF9900u; c->f[4]=RF64(ea);} // 800CE974
  {uint32_t ea=c->r[2]+0xFFFF98C8u; c->f[7]=RF64(ea);} // 800CE978
  c->f[5]=c->f[31]*c->f[0]; // 800CE97C
  {uint32_t ea=c->r[2]+0xFFFF98F8u; c->f[3]=RF64(ea);} // 800CE980
  c->f[0]=c->f[6]+c->f[2]; // 800CE984
  {uint32_t ea=c->r[2]+0xFFFF98C0u; c->f[6]=RF64(ea);} // 800CE988
  {uint32_t ea=c->r[2]+0xFFFF98F0u; c->f[2]=RF64(ea);} // 800CE98C
  c->f[10]=c->f[31]-c->f[10]; // 800CE990
  c->f[9]=c->f[31]*c->f[0]; // 800CE994
  {uint32_t ea=c->r[2]+0xFFFF9928u; c->f[0]=RF64(ea);} // 800CE998
  c->f[4]=c->f[4]+c->f[5]; // 800CE99C
  c->f[5]=c->f[8]+c->f[9]; // 800CE9A0
  c->f[4]=c->f[31]*c->f[4]; // 800CE9A4
  c->f[5]=c->f[31]*c->f[5]; // 800CE9A8
  c->f[3]=c->f[3]+c->f[4]; // 800CE9AC
  c->f[8]=c->f[1]+c->f[11]; // 800CE9B0
  c->f[4]=c->f[7]+c->f[5]; // 800CE9B4
  c->f[3]=c->f[31]*c->f[3]; // 800CE9B8
  c->f[4]=c->f[31]*c->f[4]; // 800CE9BC
  c->f[3]=c->f[2]+c->f[3]; // 800CE9C0
  c->f[5]=c->f[10]/c->f[8]; // 800CE9C4
  c->f[2]=c->f[6]+c->f[4]; // 800CE9C8
  c->f[2]=c->f[31]*c->f[2]; // 800CE9CC
  c->f[2]=c->f[2]/c->f[3]; // 800CE9D0
  c->f[1]=c->f[2]*c->f[1]; // 800CE9D4
  c->f[1]=c->f[5]+c->f[1]; // 800CE9D8
  c->f[1]=c->f[11]+c->f[1]; // 800CE9DC
  c->f[1]=c->f[0]*c->f[1]; // 800CE9E0
L_800CE9E4:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800CE9E4
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 800CE9E8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 800CE9EC
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 800CE9F0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 800CE9F4
  c->lr=c->r[0]; // 800CE9F8
  c->r[1]=c->r[1]+0x00000040u; // 800CE9FC
  return; // 800CEA00
}

// __ieee754_asin
void f_800CEA04(Ctx* __restrict c) {
  trace_call(0x800CEA04u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CEA04
  c->r[0]=c->lr; // 800CEA08
  W32(c->r[1]+0x00000054u,c->r[0]); // 800CEA0C
  c->r[0]=0u+0x3FF00000u; // 800CEA10
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 800CEA14
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 800CEA18
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 800CEA1C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 800CEA20
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[29]);} // 800CEA24
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,29,ea,0,0);} // 800CEA28
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800CEA2C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800CEA30
  c->r[31]=R32(c->r[1]+0x00000008u); // 800CEA34
  W32(c->r[1]+0x00000018u,c->r[30]); // 800CEA38
  c->r[30]=rotl(c->r[31],0)&0x7FFFFFFFu; // 800CEA3C
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 800CEA40
  if (crb(c,0)) { goto L_800CEA84; } // 800CEA44
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800CEA48
  c->r[3]=c->r[30]+0xC0100000u; // 800CEA4C
  c->r[0]=c->r[3]|c->r[0]; cr0(c,c->r[0]); // 800CEA50
  if (!crb(c,2)) { goto L_800CEA70; } // 800CEA54
  {uint32_t ea=c->r[2]+0xFFFF9930u; c->f[2]=RF64(ea);} // 800CEA58
  {uint32_t ea=c->r[2]+0xFFFF9938u; c->f[0]=RF64(ea);} // 800CEA5C
  c->f[2]=c->f[2]*c->f[1]; // 800CEA60
  c->f[0]=c->f[0]*c->f[1]; // 800CEA64
  c->f[1]=c->f[2]+c->f[0]; // 800CEA68
  goto L_800CEC6C; // 800CEA6C
L_800CEA70:;
  c->r[3]=0u+0x804D0000u; // 800CEA70
  c->r[0]=0u+0x00000021u; // 800CEA74
  W32(c->r[13]+0xFFFF97B0u,c->r[0]); // 800CEA78
  {uint32_t ea=c->r[3]+0x000038A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CEA7C
  goto L_800CEC6C; // 800CEA80
L_800CEA84:;
  c->r[0]=0u+0x3FE00000u; // 800CEA84
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 800CEA88
  if (!crb(c,0)) { goto L_800CEB40; } // 800CEA8C
  c->r[0]=0u+0x3E400000u; // 800CEA90
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 800CEA94
  if (!crb(c,0)) { goto L_800CEAB4; } // 800CEA98
  {uint32_t ea=c->r[2]+0xFFFF9940u; c->f[2]=RF64(ea);} // 800CEA9C
  {uint32_t ea=c->r[2]+0xFFFF9948u; c->f[0]=RF64(ea);} // 800CEAA0
  c->f[2]=c->f[2]+c->f[1]; // 800CEAA4
  fcmp(c,0,c->f[2],c->f[0]); // 800CEAA8
  if (!crb(c,1)) { goto L_800CEAB8; } // 800CEAAC
  goto L_800CEC6C; // 800CEAB0
L_800CEAB4:;
  c->f[31]=c->f[1]*c->f[1]; // 800CEAB4
L_800CEAB8:;
  {uint32_t ea=c->r[2]+0xFFFF9978u; c->f[2]=RF64(ea);} // 800CEAB8
  {uint32_t ea=c->r[2]+0xFFFF9998u; c->f[0]=RF64(ea);} // 800CEABC
  c->f[4]=c->f[2]*c->f[31]; // 800CEAC0
  {uint32_t ea=c->r[2]+0xFFFF9970u; c->f[3]=RF64(ea);} // 800CEAC4
  {uint32_t ea=c->r[2]+0xFFFF9968u; c->f[8]=RF64(ea);} // 800CEAC8
  c->f[2]=c->f[0]*c->f[31]; // 800CEACC
  {uint32_t ea=c->r[2]+0xFFFF9990u; c->f[0]=RF64(ea);} // 800CEAD0
  {uint32_t ea=c->r[2]+0xFFFF9960u; c->f[7]=RF64(ea);} // 800CEAD4
  c->f[4]=c->f[3]+c->f[4]; // 800CEAD8
  {uint32_t ea=c->r[2]+0xFFFF9988u; c->f[3]=RF64(ea);} // 800CEADC
  c->f[0]=c->f[0]+c->f[2]; // 800CEAE0
  {uint32_t ea=c->r[2]+0xFFFF9980u; c->f[2]=RF64(ea);} // 800CEAE4
  c->f[9]=c->f[31]*c->f[4]; // 800CEAE8
  {uint32_t ea=c->r[2]+0xFFFF9958u; c->f[6]=RF64(ea);} // 800CEAEC
  {uint32_t ea=c->r[2]+0xFFFF9950u; c->f[5]=RF64(ea);} // 800CEAF0
  c->f[4]=c->f[31]*c->f[0]; // 800CEAF4
  {uint32_t ea=c->r[2]+0xFFFF9948u; c->f[0]=RF64(ea);} // 800CEAF8
  c->f[8]=c->f[8]+c->f[9]; // 800CEAFC
  c->f[3]=c->f[3]+c->f[4]; // 800CEB00
  c->f[4]=c->f[31]*c->f[8]; // 800CEB04
  c->f[3]=c->f[31]*c->f[3]; // 800CEB08
  c->f[4]=c->f[7]+c->f[4]; // 800CEB0C
  c->f[2]=c->f[2]+c->f[3]; // 800CEB10
  c->f[3]=c->f[31]*c->f[4]; // 800CEB14
  c->f[2]=c->f[31]*c->f[2]; // 800CEB18
  c->f[3]=c->f[6]+c->f[3]; // 800CEB1C
  c->f[2]=c->f[0]+c->f[2]; // 800CEB20
  c->f[0]=c->f[31]*c->f[3]; // 800CEB24
  c->f[0]=c->f[5]+c->f[0]; // 800CEB28
  c->f[0]=c->f[31]*c->f[0]; // 800CEB2C
  c->f[0]=c->f[0]/c->f[2]; // 800CEB30
  c->f[0]=c->f[1]*c->f[0]; // 800CEB34
  c->f[1]=c->f[1]+c->f[0]; // 800CEB38
  goto L_800CEC6C; // 800CEB3C
L_800CEB40:;
  c->f[1]=std::fabs(c->f[1]); // 800CEB40
  {uint32_t ea=c->r[2]+0xFFFF9948u; c->f[11]=RF64(ea);} // 800CEB44
  {uint32_t ea=c->r[2]+0xFFFF99A0u; c->f[2]=RF64(ea);} // 800CEB48
  {uint32_t ea=c->r[2]+0xFFFF9978u; c->f[0]=RF64(ea);} // 800CEB4C
  c->f[3]=c->f[11]-c->f[1]; // 800CEB50
  {uint32_t ea=c->r[2]+0xFFFF9998u; c->f[1]=RF64(ea);} // 800CEB54
  {uint32_t ea=c->r[2]+0xFFFF9970u; c->f[9]=RF64(ea);} // 800CEB58
  {uint32_t ea=c->r[2]+0xFFFF9968u; c->f[8]=RF64(ea);} // 800CEB5C
  c->f[31]=c->f[2]*c->f[3]; // 800CEB60
  {uint32_t ea=c->r[2]+0xFFFF9990u; c->f[3]=RF64(ea);} // 800CEB64
  {uint32_t ea=c->r[2]+0xFFFF9988u; c->f[2]=RF64(ea);} // 800CEB68
  {uint32_t ea=c->r[2]+0xFFFF9960u; c->f[7]=RF64(ea);} // 800CEB6C
  {uint32_t ea=c->r[2]+0xFFFF9958u; c->f[6]=RF64(ea);} // 800CEB70
  c->f[10]=c->f[0]*c->f[31]; // 800CEB74
  {uint32_t ea=c->r[2]+0xFFFF9980u; c->f[0]=RF64(ea);} // 800CEB78
  c->f[4]=c->f[1]*c->f[31]; // 800CEB7C
  {uint32_t ea=c->r[2]+0xFFFF9950u; c->f[5]=RF64(ea);} // 800CEB80
  c->f[9]=c->f[9]+c->f[10]; // 800CEB84
  c->f[1]=c->f[31]; // 800CEB88
  c->f[3]=c->f[3]+c->f[4]; // 800CEB8C
  c->f[4]=c->f[31]*c->f[9]; // 800CEB90
  c->f[3]=c->f[31]*c->f[3]; // 800CEB94
  c->f[4]=c->f[8]+c->f[4]; // 800CEB98
  c->f[2]=c->f[2]+c->f[3]; // 800CEB9C
  c->f[3]=c->f[31]*c->f[4]; // 800CEBA0
  c->f[2]=c->f[31]*c->f[2]; // 800CEBA4
  c->f[3]=c->f[7]+c->f[3]; // 800CEBA8
  c->f[0]=c->f[0]+c->f[2]; // 800CEBAC
  c->f[2]=c->f[31]*c->f[3]; // 800CEBB0
  c->f[0]=c->f[31]*c->f[0]; // 800CEBB4
  c->f[2]=c->f[6]+c->f[2]; // 800CEBB8
  c->f[29]=c->f[11]+c->f[0]; // 800CEBBC
  c->f[0]=c->f[31]*c->f[2]; // 800CEBC0
  c->f[0]=c->f[5]+c->f[0]; // 800CEBC4
  c->f[30]=c->f[31]*c->f[0]; // 800CEBC8
  c->lr=0x800CEBD0u; f_800D2C14(c); // 800CEBCC
  c->r[3]=0u+0x3FEF0000u; // 800CEBD0
  c->r[0]=c->r[3]+0x00003333u; // 800CEBD4
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 800CEBD8
  if (crb(c,0)) { goto L_800CEC08; } // 800CEBDC
  c->f[4]=c->f[30]/c->f[29]; // 800CEBE0
  {uint32_t ea=c->r[2]+0xFFFF99A8u; c->f[3]=RF64(ea);} // 800CEBE4
  {uint32_t ea=c->r[2]+0xFFFF9938u; c->f[2]=RF64(ea);} // 800CEBE8
  {uint32_t ea=c->r[2]+0xFFFF9930u; c->f[0]=RF64(ea);} // 800CEBEC
  c->f[4]=c->f[1]*c->f[4]; // 800CEBF0
  c->f[1]=c->f[1]+c->f[4]; // 800CEBF4
  c->f[1]=c->f[3]*c->f[1]; // 800CEBF8
  c->f[1]=c->f[1]-c->f[2]; // 800CEBFC
  c->f[1]=c->f[0]-c->f[1]; // 800CEC00
  goto L_800CEC5C; // 800CEC04
L_800CEC08:;
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[1]);} // 800CEC08
  c->r[0]=0u+0x00000000u; // 800CEC0C
  {uint32_t ea=c->r[2]+0xFFFF99A8u; c->f[5]=RF64(ea);} // 800CEC10
  c->f[8]=c->f[30]/c->f[29]; // 800CEC14
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CEC18
  {uint32_t ea=c->r[2]+0xFFFF9938u; c->f[3]=RF64(ea);} // 800CEC1C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[7]=RF64(ea);} // 800CEC20
  {uint32_t ea=c->r[2]+0xFFFF99B0u; c->f[2]=RF64(ea);} // 800CEC24
  c->f[4]=c->f[5]*c->f[1]; // 800CEC28
  c->f[0]=c->f[7]*c->f[7]; // 800CEC2C
  c->f[6]=c->f[1]+c->f[7]; // 800CEC30
  c->f[4]=c->f[4]*c->f[8]; // 800CEC34
  c->f[1]=c->f[31]-c->f[0]; // 800CEC38
  c->f[0]=c->f[5]*c->f[7]; // 800CEC3C
  c->f[1]=c->f[1]/c->f[6]; // 800CEC40
  c->f[1]=c->f[5]*c->f[1]; // 800CEC44
  c->f[1]=c->f[3]-c->f[1]; // 800CEC48
  c->f[3]=c->f[2]-c->f[0]; // 800CEC4C
  c->f[0]=c->f[4]-c->f[1]; // 800CEC50
  c->f[0]=c->f[0]-c->f[3]; // 800CEC54
  c->f[1]=c->f[2]-c->f[0]; // 800CEC58
L_800CEC5C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800CEC5C
  if (!crb(c,1)) { goto L_800CEC68; } // 800CEC60
  goto L_800CEC6C; // 800CEC64
L_800CEC68:;
  c->f[1]=-c->f[1]; // 800CEC68
L_800CEC6C:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 800CEC6C
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 800CEC70
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 800CEC74
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 800CEC78
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 800CEC7C
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,29,ea,0,0);} // 800CEC80
  {uint32_t ea=c->r[1]+0x00000020u; c->f[29]=RF64(ea);} // 800CEC84
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800CEC88
  c->r[30]=R32(c->r[1]+0x00000018u); // 800CEC8C
  c->lr=c->r[0]; // 800CEC90
  c->r[1]=c->r[1]+0x00000050u; // 800CEC94
  return; // 800CEC98
}

// __ieee754_atan2
void f_800CEC9C(Ctx* __restrict c) {
  trace_call(0x800CEC9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CEC9C
  c->r[0]=c->lr; // 800CECA0
  c->r[3]=0u+0x7FF00000u; // 800CECA4
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[2]);} // 800CECA8
  c->r[8]=R32(c->r[1]+0x00000014u); // 800CECAC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800CECB0
  c->r[0]=0u-c->r[8]; // 800CECB4
  c->r[4]=R32(c->r[1]+0x00000010u); // 800CECB8
  c->r[0]=c->r[8]|c->r[0]; // 800CECBC
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800CECC0
  c->r[6]=rotl(c->r[4],0)&0x7FFFFFFFu; // 800CECC4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800CECC8
  c->r[5]=R32(c->r[1]+0x00000008u); // 800CECCC
  c->r[0]=c->r[6]|c->r[0]; // 800CECD0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800CECD4
  cmpu(c,0,c->r[0],c->r[3]); // 800CECD8
  c->r[9]=R32(c->r[1]+0x0000000Cu); // 800CECDC
  c->r[7]=rotl(c->r[5],0)&0x7FFFFFFFu; // 800CECE0
  if (crb(c,1)) { goto L_800CED00; } // 800CECE4
  c->r[0]=0u-c->r[9]; // 800CECE8
  c->r[0]=c->r[9]|c->r[0]; // 800CECEC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800CECF0
  c->r[0]=c->r[7]|c->r[0]; // 800CECF4
  cmpu(c,0,c->r[0],c->r[3]); // 800CECF8
  if (!crb(c,1)) { goto L_800CED08; } // 800CECFC
L_800CED00:;
  c->f[1]=c->f[2]+c->f[1]; // 800CED00
  goto L_800CEEE0; // 800CED04
L_800CED08:;
  c->r[0]=c->r[4]+0xC0100000u; // 800CED08
  c->r[0]=c->r[0]|c->r[8]; cr0(c,c->r[0]); // 800CED0C
  if (!crb(c,2)) { goto L_800CED1C; } // 800CED10
  c->lr=0x800CED18u; f_800D1F48(c); // 800CED14
  goto L_800CEEE0; // 800CED18
L_800CED1C:;
  c->r[0]=c->r[7]|c->r[9]; cr0(c,c->r[0]); // 800CED1C
  c->r[31]=rotl(c->r[4],2)&0x00000002u; // 800CED20
  c->r[31]=(rotl(c->r[5],1)&0x00000001u)|(c->r[31]&~0x00000001u); // 800CED24
  if (!crb(c,2)) { goto L_800CED5C; } // 800CED28
  cmpu(c,0,c->r[31],0x00000001u); // 800CED2C
  if (!crb(c,1)) { goto L_800CEEE0; } // 800CED30
  cmps(c,0,(int32_t)c->r[31],2); // 800CED34
  if (crb(c,2)) { goto L_800CED4C; } // 800CED38
  cmps(c,0,(int32_t)c->r[31],3); // 800CED3C
  if (crb(c,2)) { goto L_800CED54; } // 800CED40
  goto L_800CED5C; // 800CED44
  goto L_800CEEE0; // 800CED48
L_800CED4C:;
  {uint32_t ea=c->r[2]+0xFFFF99B8u; c->f[1]=RF64(ea);} // 800CED4C
  goto L_800CEEE0; // 800CED50
L_800CED54:;
  {uint32_t ea=c->r[2]+0xFFFF99C0u; c->f[1]=RF64(ea);} // 800CED54
  goto L_800CEEE0; // 800CED58
L_800CED5C:;
  c->r[0]=c->r[6]|c->r[8]; cr0(c,c->r[0]); // 800CED5C
  if (!crb(c,2)) { goto L_800CED7C; } // 800CED60
  cmps(c,0,(int32_t)c->r[5],0); // 800CED64
  if (!crb(c,0)) { goto L_800CED74; } // 800CED68
  {uint32_t ea=c->r[2]+0xFFFF99C8u; c->f[1]=RF64(ea);} // 800CED6C
  goto L_800CEEE0; // 800CED70
L_800CED74:;
  {uint32_t ea=c->r[2]+0xFFFF99D0u; c->f[1]=RF64(ea);} // 800CED74
  goto L_800CEEE0; // 800CED78
L_800CED7C:;
  c->r[0]=c->r[6]+0x80100000u; // 800CED7C
  cmpu(c,0,c->r[0],0x00000000u); // 800CED80
  if (!crb(c,2)) { goto L_800CEE1C; } // 800CED84
  c->r[0]=c->r[7]+0x80100000u; // 800CED88
  cmpu(c,0,c->r[0],0x00000000u); // 800CED8C
  if (!crb(c,2)) { goto L_800CEDD8; } // 800CED90
  cmps(c,0,(int32_t)c->r[31],0); // 800CED94
  if (crb(c,2)) { goto L_800CEDB8; } // 800CED98
  cmps(c,0,(int32_t)c->r[31],1); // 800CED9C
  if (crb(c,2)) { goto L_800CEDC0; } // 800CEDA0
  cmps(c,0,(int32_t)c->r[31],2); // 800CEDA4
  if (crb(c,2)) { goto L_800CEDC8; } // 800CEDA8
  cmps(c,0,(int32_t)c->r[31],3); // 800CEDAC
  if (crb(c,2)) { goto L_800CEDD0; } // 800CEDB0
  goto L_800CEE1C; // 800CEDB4
L_800CEDB8:;
  {uint32_t ea=c->r[2]+0xFFFF99D8u; c->f[1]=RF64(ea);} // 800CEDB8
  goto L_800CEEE0; // 800CEDBC
L_800CEDC0:;
  {uint32_t ea=c->r[2]+0xFFFF99E0u; c->f[1]=RF64(ea);} // 800CEDC0
  goto L_800CEEE0; // 800CEDC4
L_800CEDC8:;
  {uint32_t ea=c->r[2]+0xFFFF99E8u; c->f[1]=RF64(ea);} // 800CEDC8
  goto L_800CEEE0; // 800CEDCC
L_800CEDD0:;
  {uint32_t ea=c->r[2]+0xFFFF99F0u; c->f[1]=RF64(ea);} // 800CEDD0
  goto L_800CEEE0; // 800CEDD4
L_800CEDD8:;
  cmps(c,0,(int32_t)c->r[31],0); // 800CEDD8
  if (crb(c,2)) { goto L_800CEDFC; } // 800CEDDC
  cmps(c,0,(int32_t)c->r[31],1); // 800CEDE0
  if (crb(c,2)) { goto L_800CEE04; } // 800CEDE4
  cmps(c,0,(int32_t)c->r[31],2); // 800CEDE8
  if (crb(c,2)) { goto L_800CEE0C; } // 800CEDEC
  cmps(c,0,(int32_t)c->r[31],3); // 800CEDF0
  if (crb(c,2)) { goto L_800CEE14; } // 800CEDF4
  goto L_800CEE1C; // 800CEDF8
L_800CEDFC:;
  {uint32_t ea=c->r[2]+0xFFFF99F8u; c->f[1]=RF64(ea);} // 800CEDFC
  goto L_800CEEE0; // 800CEE00
L_800CEE04:;
  {uint32_t ea=c->r[2]+0xFFFF9A00u; c->f[1]=RF64(ea);} // 800CEE04
  goto L_800CEEE0; // 800CEE08
L_800CEE0C:;
  {uint32_t ea=c->r[2]+0xFFFF99B8u; c->f[1]=RF64(ea);} // 800CEE0C
  goto L_800CEEE0; // 800CEE10
L_800CEE14:;
  {uint32_t ea=c->r[2]+0xFFFF99C0u; c->f[1]=RF64(ea);} // 800CEE14
  goto L_800CEEE0; // 800CEE18
L_800CEE1C:;
  c->r[0]=c->r[7]+0x80100000u; // 800CEE1C
  cmpu(c,0,c->r[0],0x00000000u); // 800CEE20
  if (!crb(c,2)) { goto L_800CEE40; } // 800CEE24
  cmps(c,0,(int32_t)c->r[5],0); // 800CEE28
  if (!crb(c,0)) { goto L_800CEE38; } // 800CEE2C
  {uint32_t ea=c->r[2]+0xFFFF99C8u; c->f[1]=RF64(ea);} // 800CEE30
  goto L_800CEEE0; // 800CEE34
L_800CEE38:;
  {uint32_t ea=c->r[2]+0xFFFF99D0u; c->f[1]=RF64(ea);} // 800CEE38
  goto L_800CEEE0; // 800CEE3C
L_800CEE40:;
  c->r[0]=c->r[7]-c->r[6]; // 800CEE40
  c->r[0]=sraw(c,c->r[0],20); // 800CEE44
  cmps(c,0,(int32_t)c->r[0],60); // 800CEE48
  if (!crb(c,1)) { goto L_800CEE5C; } // 800CEE4C
  {uint32_t ea=c->r[2]+0xFFFF99D0u; c->f[1]=RF64(ea);} // 800CEE50
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[1]);} // 800CEE54
  goto L_800CEE88; // 800CEE58
L_800CEE5C:;
  cmps(c,0,(int32_t)c->r[4],0); // 800CEE5C
  if (!crb(c,0)) { goto L_800CEE78; } // 800CEE60
  cmps(c,0,(int32_t)c->r[0],-60); // 800CEE64
  if (!crb(c,0)) { goto L_800CEE78; } // 800CEE68
  {uint32_t ea=c->r[2]+0xFFFF99F8u; c->f[1]=RF64(ea);} // 800CEE6C
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[1]);} // 800CEE70
  goto L_800CEE88; // 800CEE74
L_800CEE78:;
  c->f[0]=c->f[1]/c->f[2]; // 800CEE78
  c->f[1]=std::fabs(c->f[0]); // 800CEE7C
  c->lr=0x800CEE84u; f_800D1F48(c); // 800CEE80
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[1]);} // 800CEE84
L_800CEE88:;
  cmps(c,0,(int32_t)c->r[31],0); // 800CEE88
  if (crb(c,2)) { goto L_800CEEE0; } // 800CEE8C
  cmps(c,0,(int32_t)c->r[31],1); // 800CEE90
  if (crb(c,2)) { goto L_800CEEA8; } // 800CEE94
  cmps(c,0,(int32_t)c->r[31],2); // 800CEE98
  if (crb(c,2)) { goto L_800CEEBC; } // 800CEE9C
  goto L_800CEED0; // 800CEEA0
  goto L_800CEEE0; // 800CEEA4
L_800CEEA8:;
  c->r[0]=R32(c->r[1]+0x00000018u); // 800CEEA8
  c->r[0]=c->r[0]^0x80000000u; // 800CEEAC
  W32(c->r[1]+0x00000018u,c->r[0]); // 800CEEB0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 800CEEB4
  goto L_800CEEE0; // 800CEEB8
L_800CEEBC:;
  {uint32_t ea=c->r[2]+0xFFFF9A08u; c->f[2]=RF64(ea);} // 800CEEBC
  {uint32_t ea=c->r[2]+0xFFFF99B8u; c->f[0]=RF64(ea);} // 800CEEC0
  c->f[1]=c->f[1]-c->f[2]; // 800CEEC4
  c->f[1]=c->f[0]-c->f[1]; // 800CEEC8
  goto L_800CEEE0; // 800CEECC
L_800CEED0:;
  {uint32_t ea=c->r[2]+0xFFFF9A08u; c->f[2]=RF64(ea);} // 800CEED0
  {uint32_t ea=c->r[2]+0xFFFF99B8u; c->f[0]=RF64(ea);} // 800CEED4
  c->f[1]=c->f[1]-c->f[2]; // 800CEED8
  c->f[1]=c->f[1]-c->f[0]; // 800CEEDC
L_800CEEE0:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800CEEE0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800CEEE4
  c->lr=c->r[0]; // 800CEEE8
  c->r[1]=c->r[1]+0x00000030u; // 800CEEEC
  return; // 800CEEF0
}

// fn_800CEEF4
void f_800CEEF4(Ctx* __restrict c) {
  trace_call(0x800CEEF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CEEF4
  c->r[3]=0u+0x40860000u; // 800CEEF8
  c->r[5]=0u+0x80380000u; // 800CEEFC
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800CEF00
  c->r[0]=c->r[3]+0x00002E42u; // 800CEF04
  c->r[5]=c->r[5]+0xFFFFDC68u; // 800CEF08
  c->r[4]=R32(c->r[1]+0x00000008u); // 800CEF0C
  c->r[6]=rotl(c->r[4],1)&0x00000001u; // 800CEF10
  c->r[4]=rotl(c->r[4],0)&0x7FFFFFFFu; // 800CEF14
  cmpu(c,0,c->r[4],c->r[0]); // 800CEF18
  if (crb(c,0)) { goto L_800CEF80; } // 800CEF1C
  c->r[0]=0u+0x7FF00000u; // 800CEF20
  cmpu(c,0,c->r[4],c->r[0]); // 800CEF24
  if (crb(c,0)) { goto L_800CEF58; } // 800CEF28
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800CEF2C
  c->r[3]=rotl(c->r[4],0)&0x000FFFFFu; // 800CEF30
  c->r[0]=c->r[3]|c->r[0]; cr0(c,c->r[0]); // 800CEF34
  if (crb(c,2)) { goto L_800CEF44; } // 800CEF38
  c->f[1]=c->f[1]+c->f[1]; // 800CEF3C
  goto L_800CF11C; // 800CEF40
L_800CEF44:;
  cmps(c,0,(int32_t)c->r[6],0); // 800CEF44
  if (!crb(c,2)) { goto L_800CEF50; } // 800CEF48
  goto L_800CF11C; // 800CEF4C
L_800CEF50:;
  {uint32_t ea=c->r[2]+0xFFFF9A10u; c->f[1]=RF64(ea);} // 800CEF50
  goto L_800CF11C; // 800CEF54
L_800CEF58:;
  {uint32_t ea=c->r[2]+0xFFFF9A18u; c->f[0]=RF64(ea);} // 800CEF58
  fcmp(c,0,c->f[1],c->f[0]); // 800CEF5C
  if (!crb(c,1)) { goto L_800CEF6C; } // 800CEF60
  {uint32_t ea=c->r[2]+0xFFFF9A20u; c->f[1]=RF64(ea);} // 800CEF64
  goto L_800CF11C; // 800CEF68
L_800CEF6C:;
  {uint32_t ea=c->r[2]+0xFFFF9A28u; c->f[0]=RF64(ea);} // 800CEF6C
  fcmp(c,0,c->f[1],c->f[0]); // 800CEF70
  if (!crb(c,0)) { goto L_800CEF80; } // 800CEF74
  {uint32_t ea=c->r[2]+0xFFFF9A10u; c->f[1]=RF64(ea);} // 800CEF78
  goto L_800CF11C; // 800CEF7C
L_800CEF80:;
  c->r[3]=0u+0x3FD60000u; // 800CEF80
  c->r[0]=c->r[3]+0x00002E42u; // 800CEF84
  cmpu(c,0,c->r[4],c->r[0]); // 800CEF88
  if (!crb(c,1)) { goto L_800CF024; } // 800CEF8C
  c->r[3]=0u+0x3FF10000u; // 800CEF90
  c->r[0]=c->r[3]+0xFFFFA2B2u; // 800CEF94
  cmpu(c,0,c->r[4],c->r[0]); // 800CEF98
  if (!crb(c,0)) { goto L_800CEFC8; } // 800CEF9C
  c->r[4]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800CEFA0
  c->r[3]=c->r[5]+0x00000010u; // 800CEFA4
  {uint32_t ea=c->r[3]+c->r[4]; c->f[0]=RF64(ea);} // 800CEFA8
  c->r[3]=c->r[5]+0x00000020u; // 800CEFAC
  c->r[0]=rotl(c->r[6],1)&0xFFFFFFFEu; // 800CEFB0
  {uint32_t ea=c->r[3]+c->r[4]; c->f[8]=RF64(ea);} // 800CEFB4
  c->f[7]=c->f[1]-c->f[0]; // 800CEFB8
  c->r[3]=0u-c->r[0]; // 800CEFBC
  c->r[4]=c->r[3]+0x00000001u; // 800CEFC0
  goto L_800CF01C; // 800CEFC4
L_800CEFC8:;
  {uint32_t ea=c->r[2]+0xFFFF9A30u; c->f[0]=RF64(ea);} // 800CEFC8
  c->r[0]=0u+0x43300000u; // 800CEFCC
  c->r[4]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800CEFD0
  c->r[3]=c->r[5]+0x00000000u; // 800CEFD4
  c->f[3]=c->f[0]*c->f[1]; // 800CEFD8
  {uint32_t ea=c->r[3]+c->r[4]; c->f[0]=RF64(ea);} // 800CEFDC
  W32(c->r[1]+0x00000020u,c->r[0]); // 800CEFE0
  {uint32_t ea=c->r[2]+0xFFFF9A80u; c->f[4]=RF64(ea);} // 800CEFE4
  {uint32_t ea=c->r[5]+0x00000010u; c->f[2]=RF64(ea);} // 800CEFE8
  c->f[3]=c->f[3]+c->f[0]; // 800CEFEC
  {uint32_t ea=c->r[5]+0x00000020u; c->f[0]=RF64(ea);} // 800CEFF0
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800CEFF4
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[3]);} // 800CEFF8
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 800CEFFC
  c->r[0]=c->r[4]^0x80000000u; // 800CF000
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CF004
  {uint32_t ea=c->r[1]+0x00000020u; c->f[3]=RF64(ea);} // 800CF008
  c->f[3]=c->f[3]-c->f[4]; // 800CF00C
  c->f[2]=c->f[3]*c->f[2]; // 800CF010
  c->f[8]=c->f[3]*c->f[0]; // 800CF014
  c->f[7]=c->f[1]-c->f[2]; // 800CF018
L_800CF01C:;
  c->f[1]=c->f[7]-c->f[8]; // 800CF01C
  goto L_800CF050; // 800CF020
L_800CF024:;
  c->r[0]=0u+0x3E300000u; // 800CF024
  cmpu(c,0,c->r[4],c->r[0]); // 800CF028
  if (!crb(c,0)) { goto L_800CF04C; } // 800CF02C
  {uint32_t ea=c->r[2]+0xFFFF9A38u; c->f[2]=RF64(ea);} // 800CF030
  {uint32_t ea=c->r[2]+0xFFFF9A40u; c->f[0]=RF64(ea);} // 800CF034
  c->f[2]=c->f[2]+c->f[1]; // 800CF038
  fcmp(c,0,c->f[2],c->f[0]); // 800CF03C
  if (!crb(c,1)) { goto L_800CF050; } // 800CF040
  c->f[1]=c->f[0]+c->f[1]; // 800CF044
  goto L_800CF11C; // 800CF048
L_800CF04C:;
  c->r[4]=0u+0x00000000u; // 800CF04C
L_800CF050:;
  c->f[6]=c->f[1]*c->f[1]; // 800CF050
  {uint32_t ea=c->r[2]+0xFFFF9A68u; c->f[0]=RF64(ea);} // 800CF054
  {uint32_t ea=c->r[2]+0xFFFF9A60u; c->f[4]=RF64(ea);} // 800CF058
  cmps(c,0,(int32_t)c->r[4],0); // 800CF05C
  {uint32_t ea=c->r[2]+0xFFFF9A58u; c->f[3]=RF64(ea);} // 800CF060
  {uint32_t ea=c->r[2]+0xFFFF9A50u; c->f[2]=RF64(ea);} // 800CF064
  c->f[5]=c->f[0]*c->f[6]; // 800CF068
  {uint32_t ea=c->r[2]+0xFFFF9A48u; c->f[0]=RF64(ea);} // 800CF06C
  c->f[4]=c->f[4]+c->f[5]; // 800CF070
  c->f[4]=c->f[6]*c->f[4]; // 800CF074
  c->f[3]=c->f[3]+c->f[4]; // 800CF078
  c->f[3]=c->f[6]*c->f[3]; // 800CF07C
  c->f[2]=c->f[2]+c->f[3]; // 800CF080
  c->f[2]=c->f[6]*c->f[2]; // 800CF084
  c->f[0]=c->f[0]+c->f[2]; // 800CF088
  c->f[0]=c->f[6]*c->f[0]; // 800CF08C
  c->f[4]=c->f[1]-c->f[0]; // 800CF090
  if (!crb(c,2)) { goto L_800CF0B8; } // 800CF094
  {uint32_t ea=c->r[2]+0xFFFF9A70u; c->f[2]=RF64(ea);} // 800CF098
  c->f[3]=c->f[1]*c->f[4]; // 800CF09C
  {uint32_t ea=c->r[2]+0xFFFF9A40u; c->f[0]=RF64(ea);} // 800CF0A0
  c->f[2]=c->f[4]-c->f[2]; // 800CF0A4
  c->f[2]=c->f[3]/c->f[2]; // 800CF0A8
  c->f[1]=c->f[2]-c->f[1]; // 800CF0AC
  c->f[1]=c->f[0]-c->f[1]; // 800CF0B0
  goto L_800CF11C; // 800CF0B4
L_800CF0B8:;
  {uint32_t ea=c->r[2]+0xFFFF9A70u; c->f[2]=RF64(ea);} // 800CF0B8
  c->f[3]=c->f[1]*c->f[4]; // 800CF0BC
  {uint32_t ea=c->r[2]+0xFFFF9A40u; c->f[0]=RF64(ea);} // 800CF0C0
  cmps(c,0,(int32_t)c->r[4],-1021); // 800CF0C4
  c->f[1]=c->f[2]-c->f[4]; // 800CF0C8
  c->f[1]=c->f[3]/c->f[1]; // 800CF0CC
  c->f[1]=c->f[8]-c->f[1]; // 800CF0D0
  c->f[1]=c->f[1]-c->f[7]; // 800CF0D4
  c->f[0]=c->f[0]-c->f[1]; // 800CF0D8
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 800CF0DC
  if (crb(c,0)) { goto L_800CF0FC; } // 800CF0E0
  c->r[3]=R32(c->r[1]+0x00000010u); // 800CF0E4
  c->r[0]=rotl(c->r[4],20)&0xFFF00000u; // 800CF0E8
  c->r[0]=c->r[3]+c->r[0]; // 800CF0EC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800CF0F0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 800CF0F4
  goto L_800CF11C; // 800CF0F8
L_800CF0FC:;
  c->r[0]=c->r[4]+0x000003E8u; // 800CF0FC
  c->r[3]=R32(c->r[1]+0x00000010u); // 800CF100
  c->r[0]=rotl(c->r[0],20)&0xFFF00000u; // 800CF104
  {uint32_t ea=c->r[2]+0xFFFF9A78u; c->f[1]=RF64(ea);} // 800CF108
  c->r[0]=c->r[3]+c->r[0]; // 800CF10C
  W32(c->r[1]+0x00000010u,c->r[0]); // 800CF110
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800CF114
  c->f[1]=c->f[1]*c->f[0]; // 800CF118
L_800CF11C:;
  c->r[1]=c->r[1]+0x00000030u; // 800CF11C
  return; // 800CF120
}

// __ieee754_fmod
void f_800CF124(Ctx* __restrict c) {
  trace_call(0x800CF124u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF124
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[2]);} // 800CF128
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800CF12C
  c->r[0]=R32(c->r[1]+0x00000010u); // 800CF130
  c->r[7]=R32(c->r[1]+0x00000008u); // 800CF134
  c->r[6]=R32(c->r[1]+0x00000014u); // 800CF138
  c->r[0]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800CF13C
  c->r[4]=rotl(c->r[7],0)&0x80000000u; // 800CF140
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 800CF144
  c->r[3]=c->r[0]|c->r[6]; cr0(c,c->r[3]); // 800CF148
  c->r[8]=c->r[7]^c->r[4]; // 800CF14C
  if (crb(c,2)) { goto L_800CF178; } // 800CF150
  c->r[7]=0u+0x7FF00000u; // 800CF154
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[7]); // 800CF158
  if (!crb(c,0)) { goto L_800CF178; } // 800CF15C
  c->r[3]=0u-c->r[6]; // 800CF160
  c->r[3]=c->r[6]|c->r[3]; // 800CF164
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 800CF168
  c->r[3]=c->r[0]|c->r[3]; // 800CF16C
  cmpu(c,0,c->r[3],c->r[7]); // 800CF170
  if (!crb(c,1)) { goto L_800CF184; } // 800CF174
L_800CF178:;
  c->f[0]=c->f[1]*c->f[2]; // 800CF178
  c->f[1]=c->f[0]/c->f[0]; // 800CF17C
  goto L_800CF49C; // 800CF180
L_800CF184:;
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 800CF184
  if (crb(c,1)) { goto L_800CF1B4; } // 800CF188
  if (crb(c,0)) { goto L_800CF49C; } // 800CF18C
  cmpu(c,0,c->r[5],c->r[6]); // 800CF190
  if (!crb(c,0)) { goto L_800CF19C; } // 800CF194
  goto L_800CF49C; // 800CF198
L_800CF19C:;
  if (!crb(c,2)) { goto L_800CF1B4; } // 800CF19C
  c->r[3]=0u+0x80380000u; // 800CF1A0
  c->r[0]=rotl(c->r[4],4)&0x00000008u; // 800CF1A4
  c->r[3]=c->r[3]+0xFFFFDC98u; // 800CF1A8
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=RF64(ea);} // 800CF1AC
  goto L_800CF49C; // 800CF1B0
L_800CF1B4:;
  c->r[3]=0u+0x00100000u; // 800CF1B4
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[3]); // 800CF1B8
  if (!crb(c,0)) { goto L_800CF208; } // 800CF1BC
  cmps(c,0,(int32_t)c->r[8],0); // 800CF1C0
  if (!crb(c,2)) { goto L_800CF1E8; } // 800CF1C4
  c->r[3]=c->r[5]|c->r[5]; // 800CF1C8
  c->r[11]=0u+0xFFFFFBEDu; // 800CF1CC
  goto L_800CF1DC; // 800CF1D0
L_800CF1D4:;
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 800CF1D4
  c->r[11]=c->r[11]+0xFFFFFFFFu; // 800CF1D8
L_800CF1DC:;
  cmps(c,0,(int32_t)c->r[3],0); // 800CF1DC
  if (crb(c,1)) { IRQCHK(c); goto L_800CF1D4; } // 800CF1E0
  goto L_800CF210; // 800CF1E4
L_800CF1E8:;
  c->r[3]=rotl(c->r[8],11)&0xFFFFF800u; // 800CF1E8
  c->r[11]=0u+0xFFFFFC02u; // 800CF1EC
  goto L_800CF1FC; // 800CF1F0
L_800CF1F4:;
  c->r[3]=rotl(c->r[3],1)&0xFFFFFFFEu; // 800CF1F4
  c->r[11]=c->r[11]+0xFFFFFFFFu; // 800CF1F8
L_800CF1FC:;
  cmps(c,0,(int32_t)c->r[3],0); // 800CF1FC
  if (crb(c,1)) { IRQCHK(c); goto L_800CF1F4; } // 800CF200
  goto L_800CF210; // 800CF204
L_800CF208:;
  c->r[3]=sraw(c,c->r[8],20); // 800CF208
  c->r[11]=c->r[3]+0xFFFFFC01u; // 800CF20C
L_800CF210:;
  c->r[3]=0u+0x00100000u; // 800CF210
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 800CF214
  if (!crb(c,0)) { goto L_800CF264; } // 800CF218
  cmps(c,0,(int32_t)c->r[0],0); // 800CF21C
  if (!crb(c,2)) { goto L_800CF244; } // 800CF220
  c->r[7]=c->r[6]|c->r[6]; // 800CF224
  c->r[3]=0u+0xFFFFFBEDu; // 800CF228
  goto L_800CF238; // 800CF22C
L_800CF230:;
  c->r[7]=rotl(c->r[7],1)&0xFFFFFFFEu; // 800CF230
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800CF234
L_800CF238:;
  cmps(c,0,(int32_t)c->r[7],0); // 800CF238
  if (crb(c,1)) { IRQCHK(c); goto L_800CF230; } // 800CF23C
  goto L_800CF26C; // 800CF240
L_800CF244:;
  c->r[7]=rotl(c->r[0],11)&0xFFFFF800u; // 800CF244
  c->r[3]=0u+0xFFFFFC02u; // 800CF248
  goto L_800CF258; // 800CF24C
L_800CF250:;
  c->r[7]=rotl(c->r[7],1)&0xFFFFFFFEu; // 800CF250
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800CF254
L_800CF258:;
  cmps(c,0,(int32_t)c->r[7],0); // 800CF258
  if (crb(c,1)) { IRQCHK(c); goto L_800CF250; } // 800CF25C
  goto L_800CF26C; // 800CF260
L_800CF264:;
  c->r[3]=sraw(c,c->r[0],20); // 800CF264
  c->r[3]=c->r[3]+0xFFFFFC01u; // 800CF268
L_800CF26C:;
  cmps(c,0,(int32_t)c->r[11],-1022); // 800CF26C
  if (crb(c,0)) { goto L_800CF280; } // 800CF270
  c->r[7]=rotl(c->r[8],0)&0x000FFFFFu; // 800CF274
  c->r[9]=c->r[7]|0x00100000u; // 800CF278
  goto L_800CF2B0; // 800CF27C
L_800CF280:;
  c->r[9]=addc(c,~c->r[11],0xFFFFFC02u,1); // 800CF280
  cmps(c,0,(int32_t)c->r[9],31); // 800CF284
  if (crb(c,1)) { goto L_800CF2A4; } // 800CF288
  c->r[7]=addc(c,~c->r[9],0x00000020u,1); // 800CF28C
  c->r[8]=((c->r[9])&0x20)?0u:(c->r[8]<<((c->r[9])&31)); // 800CF290
  c->r[7]=((c->r[7])&0x20)?0u:(c->r[5]>>((c->r[7])&31)); // 800CF294
  c->r[5]=((c->r[9])&0x20)?0u:(c->r[5]<<((c->r[9])&31)); // 800CF298
  c->r[9]=c->r[8]|c->r[7]; // 800CF29C
  goto L_800CF2B0; // 800CF2A0
L_800CF2A4:;
  c->r[7]=c->r[9]+0xFFFFFFE0u; // 800CF2A4
  c->r[9]=((c->r[7])&0x20)?0u:(c->r[5]<<((c->r[7])&31)); // 800CF2A8
  c->r[5]=0u+0x00000000u; // 800CF2AC
L_800CF2B0:;
  cmps(c,0,(int32_t)c->r[3],-1022); // 800CF2B0
  if (crb(c,0)) { goto L_800CF2C4; } // 800CF2B4
  c->r[0]=rotl(c->r[0],0)&0x000FFFFFu; // 800CF2B8
  c->r[10]=c->r[0]|0x00100000u; // 800CF2BC
  goto L_800CF2F4; // 800CF2C0
L_800CF2C4:;
  c->r[10]=addc(c,~c->r[3],0xFFFFFC02u,1); // 800CF2C4
  cmps(c,0,(int32_t)c->r[10],31); // 800CF2C8
  if (crb(c,1)) { goto L_800CF2E8; } // 800CF2CC
  c->r[7]=addc(c,~c->r[10],0x00000020u,1); // 800CF2D0
  c->r[8]=((c->r[10])&0x20)?0u:(c->r[0]<<((c->r[10])&31)); // 800CF2D4
  c->r[0]=((c->r[7])&0x20)?0u:(c->r[6]>>((c->r[7])&31)); // 800CF2D8
  c->r[6]=((c->r[10])&0x20)?0u:(c->r[6]<<((c->r[10])&31)); // 800CF2DC
  c->r[10]=c->r[8]|c->r[0]; // 800CF2E0
  goto L_800CF2F4; // 800CF2E4
L_800CF2E8:;
  c->r[0]=c->r[10]+0xFFFFFFE0u; // 800CF2E8
  c->r[10]=((c->r[0])&0x20)?0u:(c->r[6]<<((c->r[0])&31)); // 800CF2EC
  c->r[6]=0u+0x00000000u; // 800CF2F0
L_800CF2F4:;
  c->r[7]=c->r[11]-c->r[3]; cr0(c,c->r[7]); // 800CF2F4
  c->r[11]=c->r[7]+0x00000002u; // 800CF2F8
  c->r[8]=((c->r[11])&0x20)?0u:(c->r[6]>>((c->r[11])&31)); // 800CF2FC
  c->ctr=c->r[7]; // 800CF300
  if (crb(c,2)) { goto L_800CF38C; } // 800CF304
L_800CF308:;
  c->r[7]=c->r[9]-c->r[10]; cr0(c,c->r[7]); // 800CF308
  c->r[12]=c->r[5]-c->r[6]; // 800CF30C
  if (!crb(c,2)) { goto L_800CF334; } // 800CF310
  c->r[0]=((c->r[11])&0x20)?0u:(c->r[5]>>((c->r[11])&31)); // 800CF314
  cmpu(c,0,c->r[0],c->r[8]); // 800CF318
  if (!crb(c,2)) { goto L_800CF334; } // 800CF31C
  c->r[3]=0u+0x80380000u; // 800CF320
  c->r[0]=rotl(c->r[4],4)&0x00000008u; // 800CF324
  c->r[3]=c->r[3]+0xFFFFDC98u; // 800CF328
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=RF64(ea);} // 800CF32C
  goto L_800CF49C; // 800CF330
L_800CF334:;
  cmpu(c,0,c->r[5],c->r[6]); // 800CF334
  if (!crb(c,0)) { goto L_800CF340; } // 800CF338
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 800CF33C
L_800CF340:;
  cmps(c,0,(int32_t)c->r[7],0); // 800CF340
  if (!crb(c,0)) { goto L_800CF35C; } // 800CF344
  c->r[7]=rotl(c->r[5],1)&0x00000001u; // 800CF348
  c->r[0]=rotl(c->r[9],1)&0xFFFFFFFEu; // 800CF34C
  c->r[9]=c->r[7]+c->r[0]; // 800CF350
  c->r[5]=c->r[5]+c->r[5]; // 800CF354
  goto L_800CF388; // 800CF358
L_800CF35C:;
  c->r[0]=c->r[7]|c->r[12]; cr0(c,c->r[0]); // 800CF35C
  if (!crb(c,2)) { goto L_800CF378; } // 800CF360
  c->r[3]=0u+0x80380000u; // 800CF364
  c->r[0]=rotl(c->r[4],4)&0x00000008u; // 800CF368
  c->r[3]=c->r[3]+0xFFFFDC98u; // 800CF36C
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=RF64(ea);} // 800CF370
  goto L_800CF49C; // 800CF374
L_800CF378:;
  c->r[5]=rotl(c->r[12],1)&0x00000001u; // 800CF378
  c->r[0]=rotl(c->r[7],1)&0xFFFFFFFEu; // 800CF37C
  c->r[9]=c->r[5]+c->r[0]; // 800CF380
  c->r[5]=rotl(c->r[12],1)&0xFFFFFFFEu; // 800CF384
L_800CF388:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800CF308; } // 800CF388
L_800CF38C:;
  c->r[7]=c->r[9]-c->r[10]; cr0(c,c->r[7]); // 800CF38C
  c->r[10]=c->r[5]-c->r[6]; // 800CF390
  if (!crb(c,2)) { goto L_800CF3B8; } // 800CF394
  c->r[0]=((c->r[11])&0x20)?0u:(c->r[5]>>((c->r[11])&31)); // 800CF398
  cmpu(c,0,c->r[0],c->r[8]); // 800CF39C
  if (!crb(c,2)) { goto L_800CF3B8; } // 800CF3A0
  c->r[3]=0u+0x80380000u; // 800CF3A4
  c->r[0]=rotl(c->r[4],4)&0x00000008u; // 800CF3A8
  c->r[3]=c->r[3]+0xFFFFDC98u; // 800CF3AC
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=RF64(ea);} // 800CF3B0
  goto L_800CF49C; // 800CF3B4
L_800CF3B8:;
  cmpu(c,0,c->r[5],c->r[6]); // 800CF3B8
  if (!crb(c,0)) { goto L_800CF3C4; } // 800CF3BC
  c->r[7]=c->r[7]+0xFFFFFFFFu; // 800CF3C0
L_800CF3C4:;
  cmps(c,0,(int32_t)c->r[7],0); // 800CF3C4
  if (crb(c,0)) { goto L_800CF3D4; } // 800CF3C8
  c->r[9]=c->r[7]|c->r[7]; // 800CF3CC
  c->r[5]=c->r[10]|c->r[10]; // 800CF3D0
L_800CF3D4:;
  c->r[0]=c->r[9]|c->r[5]; cr0(c,c->r[0]); // 800CF3D4
  if (!crb(c,2)) { goto L_800CF3F0; } // 800CF3D8
  c->r[3]=0u+0x80380000u; // 800CF3DC
  c->r[0]=rotl(c->r[4],4)&0x00000008u; // 800CF3E0
  c->r[3]=c->r[3]+0xFFFFDC98u; // 800CF3E4
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=RF64(ea);} // 800CF3E8
  goto L_800CF49C; // 800CF3EC
L_800CF3F0:;
  c->r[0]=0u+0x00100000u; // 800CF3F0
  goto L_800CF40C; // 800CF3F4
L_800CF3F8:;
  c->r[7]=rotl(c->r[5],1)&0x00000001u; // 800CF3F8
  c->r[6]=rotl(c->r[9],1)&0xFFFFFFFEu; // 800CF3FC
  c->r[9]=c->r[7]+c->r[6]; // 800CF400
  c->r[5]=c->r[5]+c->r[5]; // 800CF404
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800CF408
L_800CF40C:;
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[0]); // 800CF40C
  if (crb(c,0)) { IRQCHK(c); goto L_800CF3F8; } // 800CF410
  cmps(c,0,(int32_t)c->r[3],-1022); // 800CF414
  if (crb(c,0)) { goto L_800CF43C; } // 800CF418
  c->r[0]=c->r[3]+0x000003FFu; // 800CF41C
  c->r[3]=c->r[9]+0xFFF00000u; // 800CF420
  c->r[0]=rotl(c->r[0],20)&0xFFF00000u; // 800CF424
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800CF428
  c->r[0]=c->r[3]|c->r[0]; // 800CF42C
  c->r[0]=c->r[0]|c->r[4]; // 800CF430
  W32(c->r[1]+0x00000008u,c->r[0]); // 800CF434
  goto L_800CF498; // 800CF438
L_800CF43C:;
  c->r[6]=addc(c,~c->r[3],0xFFFFFC02u,1); // 800CF43C
  cmps(c,0,(int32_t)c->r[6],20); // 800CF440
  if (crb(c,1)) { goto L_800CF460; } // 800CF444
  c->r[0]=addc(c,~c->r[6],0x00000020u,1); // 800CF448
  c->r[3]=((c->r[6])&0x20)?0u:(c->r[5]>>((c->r[6])&31)); // 800CF44C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[9]<<((c->r[0])&31)); // 800CF450
  c->r[9]=sraw(c,c->r[9],(c->r[6])&63); // 800CF454
  c->r[3]=c->r[3]|c->r[0]; // 800CF458
  goto L_800CF48C; // 800CF45C
L_800CF460:;
  cmps(c,0,(int32_t)c->r[6],31); // 800CF460
  if (crb(c,1)) { goto L_800CF480; } // 800CF464
  c->r[3]=addc(c,~c->r[6],0x00000020u,1); // 800CF468
  c->r[0]=((c->r[6])&0x20)?0u:(c->r[5]>>((c->r[6])&31)); // 800CF46C
  c->r[3]=((c->r[3])&0x20)?0u:(c->r[9]<<((c->r[3])&31)); // 800CF470
  c->r[9]=c->r[4]|c->r[4]; // 800CF474
  c->r[3]=c->r[3]|c->r[0]; // 800CF478
  goto L_800CF48C; // 800CF47C
L_800CF480:;
  c->r[0]=c->r[6]+0xFFFFFFE0u; // 800CF480
  c->r[3]=sraw(c,c->r[9],(c->r[0])&63); // 800CF484
  c->r[9]=c->r[4]|c->r[4]; // 800CF488
L_800CF48C:;
  c->r[0]=c->r[9]|c->r[4]; // 800CF48C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800CF490
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800CF494
L_800CF498:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800CF498
L_800CF49C:;
  c->r[1]=c->r[1]+0x00000020u; // 800CF49C
  return; // 800CF4A0
}

// __ieee754_log
void f_800CF4A4(Ctx* __restrict c) {
  trace_call(0x800CF4A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF4A4
  c->r[0]=0u+0x00100000u; // 800CF4A8
  c->r[7]=0u+0x00000000u; // 800CF4AC
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800CF4B0
  c->r[8]=R32(c->r[1]+0x00000008u); // 800CF4B4
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800CF4B8
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 800CF4BC
  if (!crb(c,0)) { goto L_800CF514; } // 800CF4C0
  c->r[0]=rotl(c->r[8],0)&0x7FFFFFFFu; // 800CF4C4
  c->r[0]=c->r[0]|c->r[3]; cr0(c,c->r[0]); // 800CF4C8
  if (!crb(c,2)) { goto L_800CF4E0; } // 800CF4CC
  {uint32_t ea=c->r[2]+0xFFFF9A88u; c->f[1]=RF64(ea);} // 800CF4D0
  {uint32_t ea=c->r[13]+0xFFFF97D0u; c->f[0]=RF64(ea);} // 800CF4D4
  c->f[1]=c->f[1]/c->f[0]; // 800CF4D8
  goto L_800CF750; // 800CF4DC
L_800CF4E0:;
  cmps(c,0,(int32_t)c->r[8],0); // 800CF4E0
  if (!crb(c,0)) { goto L_800CF500; } // 800CF4E4
  c->f[1]=c->f[1]-c->f[1]; // 800CF4E8
  {uint32_t ea=c->r[13]+0xFFFF97D0u; c->f[0]=RF64(ea);} // 800CF4EC
  c->r[0]=0u+0x00000021u; // 800CF4F0
  W32(c->r[13]+0xFFFF97B0u,c->r[0]); // 800CF4F4
  c->f[1]=c->f[1]/c->f[0]; // 800CF4F8
  goto L_800CF750; // 800CF4FC
L_800CF500:;
  {uint32_t ea=c->r[2]+0xFFFF9A90u; c->f[0]=RF64(ea);} // 800CF500
  c->r[7]=0u+0xFFFFFFCAu; // 800CF504
  c->f[1]=c->f[1]*c->f[0]; // 800CF508
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800CF50C
  c->r[8]=R32(c->r[1]+0x00000008u); // 800CF510
L_800CF514:;
  c->r[0]=0u+0x7FF00000u; // 800CF514
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 800CF518
  if (crb(c,0)) { goto L_800CF528; } // 800CF51C
  c->f[1]=c->f[1]+c->f[1]; // 800CF520
  goto L_800CF750; // 800CF524
L_800CF528:;
  c->r[5]=sraw(c,c->r[8],20); // 800CF528
  c->r[8]=rotl(c->r[8],0)&0x000FFFFFu; // 800CF52C
  c->r[3]=c->r[8]+0x00090000u; // 800CF530
  {uint32_t ea=c->r[2]+0xFFFF9A98u; c->f[0]=RF64(ea);} // 800CF534
  c->r[4]=c->r[3]+0x00005F64u; // 800CF538
  c->r[0]=c->r[8]+0x00000002u; // 800CF53C
  c->r[3]=rotl(c->r[4],0)&0x00100000u; // 800CF540
  c->r[5]=c->r[7]+c->r[5]; // 800CF544
  c->r[3]=c->r[3]^0x3FF00000u; // 800CF548
  c->r[0]=rotl(c->r[0],0)&0x000FFFFFu; // 800CF54C
  c->r[3]=c->r[8]|c->r[3]; // 800CF550
  W32(c->r[1]+0x00000008u,c->r[3]); // 800CF554
  cmps(c,0,(int32_t)c->r[0],3); // 800CF558
  c->r[7]=c->r[5]+0xFFFFFC01u; // 800CF55C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800CF560
  c->r[0]=rotl(c->r[4],12)&0x00000001u; // 800CF564
  c->r[7]=c->r[7]+c->r[0]; // 800CF568
  c->f[0]=c->f[1]-c->f[0]; // 800CF56C
  if (!crb(c,0)) { goto L_800CF624; } // 800CF570
  {uint32_t ea=c->r[13]+0xFFFF97D0u; c->f[1]=RF64(ea);} // 800CF574
  fcmp(c,0,c->f[0],c->f[1]); // 800CF578
  if (!crb(c,2)) { goto L_800CF5C0; } // 800CF57C
  cmps(c,0,(int32_t)c->r[7],0); // 800CF580
  if (!crb(c,2)) { goto L_800CF58C; } // 800CF584
  goto L_800CF750; // 800CF588
L_800CF58C:;
  c->r[3]=c->r[7]^0x80000000u; // 800CF58C
  c->r[0]=0u+0x43300000u; // 800CF590
  W32(c->r[1]+0x00000014u,c->r[3]); // 800CF594
  {uint32_t ea=c->r[2]+0xFFFF9B00u; c->f[3]=RF64(ea);} // 800CF598
  W32(c->r[1]+0x00000010u,c->r[0]); // 800CF59C
  {uint32_t ea=c->r[2]+0xFFFF9AA0u; c->f[1]=RF64(ea);} // 800CF5A0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800CF5A4
  {uint32_t ea=c->r[2]+0xFFFF9AA8u; c->f[0]=RF64(ea);} // 800CF5A8
  c->f[2]=c->f[2]-c->f[3]; // 800CF5AC
  c->f[1]=c->f[1]*c->f[2]; // 800CF5B0
  c->f[0]=c->f[0]*c->f[2]; // 800CF5B4
  c->f[1]=c->f[1]+c->f[0]; // 800CF5B8
  goto L_800CF750; // 800CF5BC
L_800CF5C0:;
  {uint32_t ea=c->r[2]+0xFFFF9AB8u; c->f[3]=RF64(ea);} // 800CF5C0
  c->f[1]=c->f[0]*c->f[0]; // 800CF5C4
  {uint32_t ea=c->r[2]+0xFFFF9AB0u; c->f[2]=RF64(ea);} // 800CF5C8
  cmps(c,0,(int32_t)c->r[7],0); // 800CF5CC
  c->f[3]=c->f[3]*c->f[0]; // 800CF5D0
  c->f[2]=c->f[2]-c->f[3]; // 800CF5D4
  c->f[5]=c->f[2]*c->f[1]; // 800CF5D8
  if (!crb(c,2)) { goto L_800CF5E8; } // 800CF5DC
  c->f[1]=c->f[0]-c->f[5]; // 800CF5E0
  goto L_800CF750; // 800CF5E4
L_800CF5E8:;
  c->r[3]=c->r[7]^0x80000000u; // 800CF5E8
  c->r[0]=0u+0x43300000u; // 800CF5EC
  W32(c->r[1]+0x00000014u,c->r[3]); // 800CF5F0
  {uint32_t ea=c->r[2]+0xFFFF9B00u; c->f[4]=RF64(ea);} // 800CF5F4
  W32(c->r[1]+0x00000010u,c->r[0]); // 800CF5F8
  {uint32_t ea=c->r[2]+0xFFFF9AA8u; c->f[1]=RF64(ea);} // 800CF5FC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 800CF600
  {uint32_t ea=c->r[2]+0xFFFF9AA0u; c->f[2]=RF64(ea);} // 800CF604
  c->f[3]=c->f[3]-c->f[4]; // 800CF608
  c->f[1]=c->f[1]*c->f[3]; // 800CF60C
  c->f[2]=c->f[2]*c->f[3]; // 800CF610
  c->f[1]=c->f[5]-c->f[1]; // 800CF614
  c->f[0]=c->f[1]-c->f[0]; // 800CF618
  c->f[1]=c->f[2]-c->f[0]; // 800CF61C
  goto L_800CF750; // 800CF620
L_800CF624:;
  {uint32_t ea=c->r[2]+0xFFFF9AC0u; c->f[1]=RF64(ea);} // 800CF624
  c->r[5]=c->r[7]^0x80000000u; // 800CF628
  c->r[4]=0u+0x43300000u; // 800CF62C
  c->r[3]=0u+0x00070000u; // 800CF630
  c->f[1]=c->f[1]+c->f[0]; // 800CF634
  c->r[6]=c->r[8]+0xFFFA0000u; // 800CF638
  c->r[0]=c->r[3]+0xFFFFB851u; // 800CF63C
  {uint32_t ea=c->r[2]+0xFFFF9AF8u; c->f[5]=RF64(ea);} // 800CF640
  {uint32_t ea=c->r[2]+0xFFFF9AF0u; c->f[4]=RF64(ea);} // 800CF644
  c->r[0]=c->r[0]-c->r[8]; // 800CF648
  c->f[1]=c->f[0]/c->f[1]; // 800CF64C
  c->r[6]=c->r[6]+0xFFFFEB86u; // 800CF650
  {uint32_t ea=c->r[2]+0xFFFF9AD8u; c->f[8]=RF64(ea);} // 800CF654
  c->r[6]=c->r[6]|c->r[0]; cr0(c,c->r[6]); // 800CF658
  {uint32_t ea=c->r[2]+0xFFFF9AD0u; c->f[7]=RF64(ea);} // 800CF65C
  {uint32_t ea=c->r[2]+0xFFFF9AE8u; c->f[3]=RF64(ea);} // 800CF660
  c->f[11]=c->f[1]*c->f[1]; // 800CF664
  {uint32_t ea=c->r[2]+0xFFFF9AC8u; c->f[6]=RF64(ea);} // 800CF668
  {uint32_t ea=c->r[2]+0xFFFF9AE0u; c->f[2]=RF64(ea);} // 800CF66C
  W32(c->r[1]+0x00000014u,c->r[5]); // 800CF670
  {uint32_t ea=c->r[2]+0xFFFF9B00u; c->f[10]=RF64(ea);} // 800CF674
  c->f[12]=c->f[11]*c->f[11]; // 800CF678
  W32(c->r[1]+0x00000010u,c->r[4]); // 800CF67C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[9]=RF64(ea);} // 800CF680
  c->f[5]=c->f[5]*c->f[12]; // 800CF684
  c->f[8]=c->f[8]*c->f[12]; // 800CF688
  c->f[4]=c->f[4]+c->f[5]; // 800CF68C
  c->f[9]=c->f[9]-c->f[10]; // 800CF690
  c->f[5]=c->f[7]+c->f[8]; // 800CF694
  c->f[4]=c->f[12]*c->f[4]; // 800CF698
  c->f[5]=c->f[12]*c->f[5]; // 800CF69C
  c->f[3]=c->f[3]+c->f[4]; // 800CF6A0
  c->f[4]=c->f[6]+c->f[5]; // 800CF6A4
  c->f[3]=c->f[12]*c->f[3]; // 800CF6A8
  c->f[4]=c->f[12]*c->f[4]; // 800CF6AC
  c->f[2]=c->f[2]+c->f[3]; // 800CF6B0
  c->f[2]=c->f[11]*c->f[2]; // 800CF6B4
  c->f[3]=c->f[2]+c->f[4]; // 800CF6B8
  if (!crb(c,1)) { goto L_800CF714; } // 800CF6BC
  {uint32_t ea=c->r[2]+0xFFFF9AB0u; c->f[2]=RF64(ea);} // 800CF6C0
  cmps(c,0,(int32_t)c->r[7],0); // 800CF6C4
  c->f[2]=c->f[2]*c->f[0]; // 800CF6C8
  c->f[5]=c->f[2]*c->f[0]; // 800CF6CC
  if (!crb(c,2)) { goto L_800CF6E8; } // 800CF6D0
  c->f[2]=c->f[5]+c->f[3]; // 800CF6D4
  c->f[1]=c->f[1]*c->f[2]; // 800CF6D8
  c->f[1]=c->f[5]-c->f[1]; // 800CF6DC
  c->f[1]=c->f[0]-c->f[1]; // 800CF6E0
  goto L_800CF750; // 800CF6E4
L_800CF6E8:;
  c->f[3]=c->f[5]+c->f[3]; // 800CF6E8
  {uint32_t ea=c->r[2]+0xFFFF9AA8u; c->f[2]=RF64(ea);} // 800CF6EC
  {uint32_t ea=c->r[2]+0xFFFF9AA0u; c->f[4]=RF64(ea);} // 800CF6F0
  c->f[2]=c->f[2]*c->f[9]; // 800CF6F4
  c->f[1]=c->f[1]*c->f[3]; // 800CF6F8
  c->f[3]=c->f[4]*c->f[9]; // 800CF6FC
  c->f[1]=c->f[1]+c->f[2]; // 800CF700
  c->f[1]=c->f[5]-c->f[1]; // 800CF704
  c->f[0]=c->f[1]-c->f[0]; // 800CF708
  c->f[1]=c->f[3]-c->f[0]; // 800CF70C
  goto L_800CF750; // 800CF710
L_800CF714:;
  cmps(c,0,(int32_t)c->r[7],0); // 800CF714
  if (!crb(c,2)) { goto L_800CF72C; } // 800CF718
  c->f[2]=c->f[0]-c->f[3]; // 800CF71C
  c->f[1]=c->f[1]*c->f[2]; // 800CF720
  c->f[1]=c->f[0]-c->f[1]; // 800CF724
  goto L_800CF750; // 800CF728
L_800CF72C:;
  c->f[3]=c->f[0]-c->f[3]; // 800CF72C
  {uint32_t ea=c->r[2]+0xFFFF9AA8u; c->f[2]=RF64(ea);} // 800CF730
  {uint32_t ea=c->r[2]+0xFFFF9AA0u; c->f[4]=RF64(ea);} // 800CF734
  c->f[2]=c->f[2]*c->f[9]; // 800CF738
  c->f[1]=c->f[1]*c->f[3]; // 800CF73C
  c->f[3]=c->f[4]*c->f[9]; // 800CF740
  c->f[1]=c->f[1]-c->f[2]; // 800CF744
  c->f[0]=c->f[1]-c->f[0]; // 800CF748
  c->f[1]=c->f[3]-c->f[0]; // 800CF74C
L_800CF750:;
  c->r[1]=c->r[1]+0x00000020u; // 800CF750
  return; // 800CF754
}

// __ieee754_log10
void f_800CF758(Ctx* __restrict c) {
  trace_call(0x800CF758u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF758
  c->r[0]=c->lr; // 800CF75C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800CF760
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 800CF764
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800CF768
  c->r[0]=0u+0x00100000u; // 800CF76C
  c->r[4]=0u+0x00000000u; // 800CF770
  c->r[5]=R32(c->r[1]+0x00000008u); // 800CF774
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800CF778
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800CF77C
  if (!crb(c,0)) { goto L_800CF7DC; } // 800CF780
  c->r[0]=rotl(c->r[5],0)&0x7FFFFFFFu; // 800CF784
  c->r[0]=c->r[0]|c->r[3]; cr0(c,c->r[0]); // 800CF788
  if (!crb(c,2)) { goto L_800CF7A8; } // 800CF78C
  {uint32_t ea=c->r[2]+0xFFFF9B08u; c->f[1]=RF64(ea);} // 800CF790
  c->r[0]=0u+0x00000021u; // 800CF794
  {uint32_t ea=c->r[13]+0xFFFF97D8u; c->f[0]=RF64(ea);} // 800CF798
  W32(c->r[13]+0xFFFF97B0u,c->r[0]); // 800CF79C
  c->f[1]=c->f[1]/c->f[0]; // 800CF7A0
  goto L_800CF858; // 800CF7A4
L_800CF7A8:;
  cmps(c,0,(int32_t)c->r[5],0); // 800CF7A8
  if (!crb(c,0)) { goto L_800CF7C8; } // 800CF7AC
  c->f[1]=c->f[1]-c->f[1]; // 800CF7B0
  {uint32_t ea=c->r[13]+0xFFFF97D8u; c->f[0]=RF64(ea);} // 800CF7B4
  c->r[0]=0u+0x00000021u; // 800CF7B8
  W32(c->r[13]+0xFFFF97B0u,c->r[0]); // 800CF7BC
  c->f[1]=c->f[1]/c->f[0]; // 800CF7C0
  goto L_800CF858; // 800CF7C4
L_800CF7C8:;
  {uint32_t ea=c->r[2]+0xFFFF9B10u; c->f[0]=RF64(ea);} // 800CF7C8
  c->r[4]=0u+0xFFFFFFCAu; // 800CF7CC
  c->f[1]=c->f[1]*c->f[0]; // 800CF7D0
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800CF7D4
  c->r[5]=R32(c->r[1]+0x00000008u); // 800CF7D8
L_800CF7DC:;
  c->r[0]=0u+0x7FF00000u; // 800CF7DC
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800CF7E0
  if (crb(c,0)) { goto L_800CF7F0; } // 800CF7E4
  c->f[1]=c->f[1]+c->f[1]; // 800CF7E8
  goto L_800CF858; // 800CF7EC
L_800CF7F0:;
  c->r[3]=sraw(c,c->r[5],20); // 800CF7F0
  c->r[0]=0u+0x43300000u; // 800CF7F4
  c->r[3]=c->r[4]+c->r[3]; // 800CF7F8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800CF7FC
  c->r[4]=c->r[3]+0xFFFFFC01u; // 800CF800
  {uint32_t ea=c->r[2]+0xFFFF9B30u; c->f[1]=RF64(ea);} // 800CF804
  c->r[3]=rotl(c->r[4],1)&0x00000001u; // 800CF808
  c->r[0]=c->r[4]+c->r[3]; // 800CF80C
  c->r[0]=c->r[0]^0x80000000u; // 800CF810
  W32(c->r[1]+0x00000014u,c->r[0]); // 800CF814
  c->r[0]=addc(c,~c->r[3],0x000003FFu,1); // 800CF818
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800CF81C
  c->r[0]=rotl(c->r[0],20)&0xFFF00000u; // 800CF820
  c->r[0]=(rotl(c->r[5],0)&0x000FFFFFu)|(c->r[0]&~0x000FFFFFu); // 800CF824
  W32(c->r[1]+0x00000008u,c->r[0]); // 800CF828
  c->f[31]=c->f[0]-c->f[1]; // 800CF82C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800CF830
  c->lr=0x800CF838u; f_800CF4A4(c); // 800CF834
  {uint32_t ea=c->r[2]+0xFFFF9B20u; c->f[0]=RF64(ea);} // 800CF838
  {uint32_t ea=c->r[2]+0xFFFF9B18u; c->f[2]=RF64(ea);} // 800CF83C
  c->f[3]=c->f[0]*c->f[1]; // 800CF840
  {uint32_t ea=c->r[2]+0xFFFF9B28u; c->f[0]=RF64(ea);} // 800CF844
  c->f[1]=c->f[2]*c->f[31]; // 800CF848
  c->f[0]=c->f[0]*c->f[31]; // 800CF84C
  c->f[1]=c->f[1]+c->f[3]; // 800CF850
  c->f[1]=c->f[1]+c->f[0]; // 800CF854
L_800CF858:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800CF858
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 800CF85C
  c->lr=c->r[0]; // 800CF860
  c->r[1]=c->r[1]+0x00000020u; // 800CF864
  return; // 800CF868
}

// __ieee754_pow
void f_800CF86C(Ctx* __restrict c) {
  trace_call(0x800CF86Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 800CF86C
  c->r[0]=c->lr; // 800CF870
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800CF874
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[31]);} // 800CF878
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,31,ea,0,0);} // 800CF87C
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[30]);} // 800CF880
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,30,ea,0,0);} // 800CF884
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[29]);} // 800CF888
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,29,ea,0,0);} // 800CF88C
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[28]);} // 800CF890
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,28,ea,0,0);} // 800CF894
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[27]);} // 800CF898
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,27,ea,0,0);} // 800CF89C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[26]);} // 800CF8A0
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,26,ea,0,0);} // 800CF8A4
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[2]);} // 800CF8A8
  c->r[3]=0u+0x80380000u; // 800CF8AC
  c->r[3]=c->r[3]+0xFFFFDCA8u; // 800CF8B0
  c->r[5]=R32(c->r[1]+0x00000010u); // 800CF8B4
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800CF8B8
  c->r[11]=R32(c->r[1]+0x00000014u); // 800CF8BC
  c->r[7]=rotl(c->r[5],0)&0x7FFFFFFFu; // 800CF8C0
  c->r[9]=R32(c->r[1]+0x00000008u); // 800CF8C4
  c->r[0]=c->r[7]|c->r[11]; cr0(c,c->r[0]); // 800CF8C8
  c->r[10]=R32(c->r[1]+0x0000000Cu); // 800CF8CC
  c->r[6]=rotl(c->r[9],0)&0x7FFFFFFFu; // 800CF8D0
  if (!crb(c,2)) { goto L_800CF8E0; } // 800CF8D4
  {uint32_t ea=c->r[2]+0xFFFF9B38u; c->f[1]=RF64(ea);} // 800CF8D8
  goto L_800D0040; // 800CF8DC
L_800CF8E0:;
  c->r[0]=0u+0x7FF00000u; // 800CF8E0
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 800CF8E4
  if (crb(c,1)) { goto L_800CF920; } // 800CF8E8
  c->r[0]=c->r[6]+0x80100000u; // 800CF8EC
  cmpu(c,0,c->r[0],0x00000000u); // 800CF8F0
  if (!crb(c,2)) { goto L_800CF900; } // 800CF8F4
  cmps(c,0,(int32_t)c->r[10],0); // 800CF8F8
  if (!crb(c,2)) { goto L_800CF920; } // 800CF8FC
L_800CF900:;
  c->r[0]=0u+0x7FF00000u; // 800CF900
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 800CF904
  if (crb(c,1)) { goto L_800CF920; } // 800CF908
  c->r[0]=c->r[7]+0x80100000u; // 800CF90C
  cmpu(c,0,c->r[0],0x00000000u); // 800CF910
  if (!crb(c,2)) { goto L_800CF928; } // 800CF914
  cmps(c,0,(int32_t)c->r[11],0); // 800CF918
  if (crb(c,2)) { goto L_800CF928; } // 800CF91C
L_800CF920:;
  c->f[1]=c->f[1]+c->f[2]; // 800CF920
  goto L_800D0040; // 800CF924
L_800CF928:;
  cmps(c,0,(int32_t)c->r[9],0); // 800CF928
  c->r[4]=0u+0x00000000u; // 800CF92C
  if (!crb(c,0)) { goto L_800CF9A8; } // 800CF930
  c->r[0]=0u+0x43400000u; // 800CF934
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 800CF938
  if (crb(c,0)) { goto L_800CF948; } // 800CF93C
  c->r[4]=0u+0x00000002u; // 800CF940
  goto L_800CF9A8; // 800CF944
L_800CF948:;
  c->r[0]=0u+0x3FF00000u; // 800CF948
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 800CF94C
  if (crb(c,0)) { goto L_800CF9A8; } // 800CF950
  c->r[8]=sraw(c,c->r[7],20); // 800CF954
  c->r[0]=c->r[8]+0xFFFFFC01u; // 800CF958
  cmps(c,0,(int32_t)c->r[0],20); // 800CF95C
  if (!crb(c,1)) { goto L_800CF984; } // 800CF960
  c->r[0]=addc(c,~c->r[0],0x00000034u,1); // 800CF964
  c->r[8]=((c->r[0])&0x20)?0u:(c->r[11]>>((c->r[0])&31)); // 800CF968
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[8]<<((c->r[0])&31)); // 800CF96C
  cmpu(c,0,c->r[11],c->r[0]); // 800CF970
  if (!crb(c,2)) { goto L_800CF9A8; } // 800CF974
  c->r[0]=rotl(c->r[8],0)&0x00000001u; // 800CF978
  c->r[4]=addc(c,~c->r[0],0x00000002u,1); // 800CF97C
  goto L_800CF9A8; // 800CF980
L_800CF984:;
  cmps(c,0,(int32_t)c->r[11],0); // 800CF984
  if (!crb(c,2)) { goto L_800CF9A8; } // 800CF988
  c->r[0]=addc(c,~c->r[0],0x00000014u,1); // 800CF98C
  c->r[8]=sraw(c,c->r[7],(c->r[0])&63); // 800CF990
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[8]<<((c->r[0])&31)); // 800CF994
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 800CF998
  if (!crb(c,2)) { goto L_800CF9A8; } // 800CF99C
  c->r[0]=rotl(c->r[8],0)&0x00000001u; // 800CF9A0
  c->r[4]=addc(c,~c->r[0],0x00000002u,1); // 800CF9A4
L_800CF9A8:;
  cmps(c,0,(int32_t)c->r[11],0); // 800CF9A8
  if (!crb(c,2)) { goto L_800CFA5C; } // 800CF9AC
  c->r[0]=c->r[7]+0x80100000u; // 800CF9B0
  cmpu(c,0,c->r[0],0x00000000u); // 800CF9B4
  if (!crb(c,2)) { goto L_800CFA0C; } // 800CF9B8
  c->r[0]=c->r[6]+0xC0100000u; // 800CF9BC
  c->r[0]=c->r[0]|c->r[10]; cr0(c,c->r[0]); // 800CF9C0
  if (!crb(c,2)) { goto L_800CF9D0; } // 800CF9C4
  c->f[1]=c->f[2]-c->f[2]; // 800CF9C8
  goto L_800D0040; // 800CF9CC
L_800CF9D0:;
  c->r[0]=0u+0x3FF00000u; // 800CF9D0
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 800CF9D4
  if (crb(c,0)) { goto L_800CF9F4; } // 800CF9D8
  cmps(c,0,(int32_t)c->r[5],0); // 800CF9DC
  if (crb(c,0)) { goto L_800CF9EC; } // 800CF9E0
  c->f[1]=c->f[2]; // 800CF9E4
  goto L_800D0040; // 800CF9E8
L_800CF9EC:;
  {uint32_t ea=c->r[2]+0xFFFF9B40u; c->f[1]=RF64(ea);} // 800CF9EC
  goto L_800D0040; // 800CF9F0
L_800CF9F4:;
  cmps(c,0,(int32_t)c->r[5],0); // 800CF9F4
  if (!crb(c,0)) { goto L_800CFA04; } // 800CF9F8
  c->f[1]=-c->f[2]; // 800CF9FC
  goto L_800D0040; // 800CFA00
L_800CFA04:;
  {uint32_t ea=c->r[2]+0xFFFF9B40u; c->f[1]=RF64(ea);} // 800CFA04
  goto L_800D0040; // 800CFA08
L_800CFA0C:;
  c->r[0]=c->r[7]+0xC0100000u; // 800CFA0C
  cmpu(c,0,c->r[0],0x00000000u); // 800CFA10
  if (!crb(c,2)) { goto L_800CFA2C; } // 800CFA14
  cmps(c,0,(int32_t)c->r[5],0); // 800CFA18
  if (!crb(c,0)) { goto L_800D0040; } // 800CFA1C
  {uint32_t ea=c->r[2]+0xFFFF9B38u; c->f[0]=RF64(ea);} // 800CFA20
  c->f[1]=c->f[0]/c->f[1]; // 800CFA24
  goto L_800D0040; // 800CFA28
L_800CFA2C:;
  c->r[0]=c->r[5]+0xC0000000u; // 800CFA2C
  cmpu(c,0,c->r[0],0x00000000u); // 800CFA30
  if (!crb(c,2)) { goto L_800CFA40; } // 800CFA34
  c->f[1]=c->f[1]*c->f[1]; // 800CFA38
  goto L_800D0040; // 800CFA3C
L_800CFA40:;
  c->r[0]=c->r[5]+0xC0200000u; // 800CFA40
  cmpu(c,0,c->r[0],0x00000000u); // 800CFA44
  if (!crb(c,2)) { goto L_800CFA5C; } // 800CFA48
  cmps(c,0,(int32_t)c->r[9],0); // 800CFA4C
  if (crb(c,0)) { goto L_800CFA5C; } // 800CFA50
  c->lr=0x800CFA58u; f_800D2C14(c); // 800CFA54
  goto L_800D0040; // 800CFA58
L_800CFA5C:;
  c->f[0]=std::fabs(c->f[1]); // 800CFA5C
  cmps(c,0,(int32_t)c->r[10],0); // 800CFA60
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 800CFA64
  if (!crb(c,2)) { goto L_800CFAD0; } // 800CFA68
  c->r[0]=c->r[6]+0x80100000u; // 800CFA6C
  cmpu(c,0,c->r[0],0x00000000u); // 800CFA70
  if (crb(c,2)) { goto L_800CFA8C; } // 800CFA74
  cmps(c,0,(int32_t)c->r[6],0); // 800CFA78
  if (crb(c,2)) { goto L_800CFA8C; } // 800CFA7C
  c->r[0]=c->r[6]+0xC0100000u; // 800CFA80
  cmpu(c,0,c->r[0],0x00000000u); // 800CFA84
  if (!crb(c,2)) { goto L_800CFAD0; } // 800CFA88
L_800CFA8C:;
  cmps(c,0,(int32_t)c->r[5],0); // 800CFA8C
  if (!crb(c,0)) { goto L_800CFA9C; } // 800CFA90
  {uint32_t ea=c->r[2]+0xFFFF9B38u; c->f[1]=RF64(ea);} // 800CFA94
  c->f[0]=c->f[1]/c->f[0]; // 800CFA98
L_800CFA9C:;
  cmps(c,0,(int32_t)c->r[9],0); // 800CFA9C
  if (!crb(c,0)) { goto L_800CFAC8; } // 800CFAA0
  c->r[0]=c->r[6]+0xC0100000u; // 800CFAA4
  c->r[0]=c->r[0]|c->r[4]; cr0(c,c->r[0]); // 800CFAA8
  if (!crb(c,2)) { goto L_800CFABC; } // 800CFAAC
  c->f[0]=c->f[0]-c->f[0]; // 800CFAB0
  c->f[0]=c->f[0]/c->f[0]; // 800CFAB4
  goto L_800CFAC8; // 800CFAB8
L_800CFABC:;
  cmps(c,0,(int32_t)c->r[4],1); // 800CFABC
  if (!crb(c,2)) { goto L_800CFAC8; } // 800CFAC0
  c->f[0]=-c->f[0]; // 800CFAC4
L_800CFAC8:;
  c->f[1]=c->f[0]; // 800CFAC8
  goto L_800D0040; // 800CFACC
L_800CFAD0:;
  c->r[8]=sraw(c,c->r[9],31); // 800CFAD0
  c->r[0]=c->r[8]+0x00000001u; // 800CFAD4
  c->r[8]=c->r[0]|c->r[4]; cr0(c,c->r[8]); // 800CFAD8
  if (!crb(c,2)) { goto L_800CFAF4; } // 800CFADC
  c->r[3]=0u+0x804D0000u; // 800CFAE0
  c->r[0]=0u+0x00000021u; // 800CFAE4
  W32(c->r[13]+0xFFFF97B0u,c->r[0]); // 800CFAE8
  {uint32_t ea=c->r[3]+0x000038A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800CFAEC
  goto L_800D0040; // 800CFAF0
L_800CFAF4:;
  c->r[8]=0u+0x41E00000u; // 800CFAF4
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[8]); // 800CFAF8
  if (!crb(c,1)) { goto L_800CFBF8; } // 800CFAFC
  c->r[3]=0u+0x43F00000u; // 800CFB00
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[3]); // 800CFB04
  if (!crb(c,1)) { goto L_800CFB48; } // 800CFB08
  c->r[0]=0u+0x3FF00000u; // 800CFB0C
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 800CFB10
  if (!crb(c,0)) { goto L_800CFB30; } // 800CFB14
  cmps(c,0,(int32_t)c->r[5],0); // 800CFB18
  if (!crb(c,0)) { goto L_800CFB28; } // 800CFB1C
  {uint32_t ea=c->r[2]+0xFFFF9B48u; c->f[1]=RF64(ea);} // 800CFB20
  goto L_800D0040; // 800CFB24
L_800CFB28:;
  {uint32_t ea=c->r[2]+0xFFFF9B40u; c->f[1]=RF64(ea);} // 800CFB28
  goto L_800D0040; // 800CFB2C
L_800CFB30:;
  cmps(c,0,(int32_t)c->r[5],0); // 800CFB30
  if (!crb(c,1)) { goto L_800CFB40; } // 800CFB34
  {uint32_t ea=c->r[2]+0xFFFF9B48u; c->f[1]=RF64(ea);} // 800CFB38
  goto L_800D0040; // 800CFB3C
L_800CFB40:;
  {uint32_t ea=c->r[2]+0xFFFF9B40u; c->f[1]=RF64(ea);} // 800CFB40
  goto L_800D0040; // 800CFB44
L_800CFB48:;
  c->r[3]=0u+0x3FF00000u; // 800CFB48
  c->r[7]=c->r[3]+0xFFFFFFFFu; // 800CFB4C
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[7]); // 800CFB50
  if (!crb(c,0)) { goto L_800CFB70; } // 800CFB54
  cmps(c,0,(int32_t)c->r[5],0); // 800CFB58
  if (!crb(c,0)) { goto L_800CFB68; } // 800CFB5C
  {uint32_t ea=c->r[2]+0xFFFF9B48u; c->f[1]=RF64(ea);} // 800CFB60
  goto L_800D0040; // 800CFB64
L_800CFB68:;
  {uint32_t ea=c->r[2]+0xFFFF9B40u; c->f[1]=RF64(ea);} // 800CFB68
  goto L_800D0040; // 800CFB6C
L_800CFB70:;
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[3]); // 800CFB70
  if (!crb(c,1)) { goto L_800CFB90; } // 800CFB74
  cmps(c,0,(int32_t)c->r[5],0); // 800CFB78
  if (!crb(c,1)) { goto L_800CFB88; } // 800CFB7C
  {uint32_t ea=c->r[2]+0xFFFF9B48u; c->f[1]=RF64(ea);} // 800CFB80
  goto L_800D0040; // 800CFB84
L_800CFB88:;
  {uint32_t ea=c->r[2]+0xFFFF9B40u; c->f[1]=RF64(ea);} // 800CFB88
  goto L_800D0040; // 800CFB8C
L_800CFB90:;
  {uint32_t ea=c->r[2]+0xFFFF9B38u; c->f[3]=RF64(ea);} // 800CFB90
  c->r[3]=0u+0x00000000u; // 800CFB94
  {uint32_t ea=c->r[2]+0xFFFF9B60u; c->f[0]=RF64(ea);} // 800CFB98
  c->f[8]=c->f[1]-c->f[3]; // 800CFB9C
  {uint32_t ea=c->r[2]+0xFFFF9B70u; c->f[1]=RF64(ea);} // 800CFBA0
  {uint32_t ea=c->r[2]+0xFFFF9B58u; c->f[5]=RF64(ea);} // 800CFBA4
  {uint32_t ea=c->r[2]+0xFFFF9B68u; c->f[3]=RF64(ea);} // 800CFBA8
  c->f[6]=c->f[0]*c->f[8]; // 800CFBAC
  {uint32_t ea=c->r[2]+0xFFFF9B50u; c->f[4]=RF64(ea);} // 800CFBB0
  {uint32_t ea=c->r[2]+0xFFFF9B78u; c->f[0]=RF64(ea);} // 800CFBB4
  c->f[7]=c->f[8]*c->f[8]; // 800CFBB8
  c->f[5]=c->f[5]-c->f[6]; // 800CFBBC
  c->f[6]=c->f[3]*c->f[8]; // 800CFBC0
  c->f[5]=c->f[8]*c->f[5]; // 800CFBC4
  c->f[1]=c->f[1]*c->f[8]; // 800CFBC8
  c->f[3]=c->f[4]-c->f[5]; // 800CFBCC
  c->f[3]=c->f[7]*c->f[3]; // 800CFBD0
  c->f[0]=c->f[0]*c->f[3]; // 800CFBD4
  c->f[1]=c->f[1]-c->f[0]; // 800CFBD8
  c->f[0]=c->f[6]+c->f[1]; // 800CFBDC
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 800CFBE0
  W32(c->r[1]+0x00000034u,c->r[3]); // 800CFBE4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 800CFBE8
  c->f[0]=c->f[0]-c->f[6]; // 800CFBEC
  c->f[0]=c->f[1]-c->f[0]; // 800CFBF0
  goto L_800CFE00; // 800CFBF4
L_800CFBF8:;
  c->r[5]=0u+0x00100000u; // 800CFBF8
  c->r[11]=0u+0x00000000u; // 800CFBFC
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[5]); // 800CFC00
  if (!crb(c,0)) { goto L_800CFC1C; } // 800CFC04
  {uint32_t ea=c->r[2]+0xFFFF9B80u; c->f[1]=RF64(ea);} // 800CFC08
  c->r[11]=0u+0xFFFFFFCBu; // 800CFC0C
  c->f[0]=c->f[0]*c->f[1]; // 800CFC10
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[0]);} // 800CFC14
  c->r[6]=R32(c->r[1]+0x00000048u); // 800CFC18
L_800CFC1C:;
  c->r[5]=0u+0x00040000u; // 800CFC1C
  c->r[8]=rotl(c->r[6],0)&0x000FFFFFu; // 800CFC20
  c->r[5]=c->r[5]+0xFFFF988Eu; // 800CFC24
  c->r[6]=sraw(c,c->r[6],20); // 800CFC28
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[5]); // 800CFC2C
  c->r[7]=c->r[8]|0x3FF00000u; // 800CFC30
  c->r[5]=c->r[11]+c->r[6]; // 800CFC34
  c->r[11]=c->r[5]+0xFFFFFC01u; // 800CFC38
  if (crb(c,1)) { goto L_800CFC48; } // 800CFC3C
  c->r[6]=0u+0x00000000u; // 800CFC40
  goto L_800CFC6C; // 800CFC44
L_800CFC48:;
  c->r[5]=0u+0x000C0000u; // 800CFC48
  c->r[5]=c->r[5]+0xFFFFB67Au; // 800CFC4C
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[5]); // 800CFC50
  if (!crb(c,0)) { goto L_800CFC60; } // 800CFC54
  c->r[6]=0u+0x00000001u; // 800CFC58
  goto L_800CFC6C; // 800CFC5C
L_800CFC60:;
  c->r[7]=c->r[7]+0xFFF00000u; // 800CFC60
  c->r[6]=0u+0x00000000u; // 800CFC64
  c->r[11]=c->r[11]+0x00000001u; // 800CFC68
L_800CFC6C:;
  W32(c->r[1]+0x00000048u,c->r[7]); // 800CFC6C
  c->r[9]=sraw(c,c->r[7],1); // 800CFC70
  c->r[10]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800CFC74
  c->r[5]=c->r[3]+0x00000000u; // 800CFC78
  {uint32_t ea=c->r[5]+c->r[10]; c->f[8]=RF64(ea);} // 800CFC7C
  c->r[8]=rotl(c->r[6],18)&0xFFFC0000u; // 800CFC80
  {uint32_t ea=c->r[1]+0x00000048u; c->f[10]=RF64(ea);} // 800CFC84
  c->r[6]=c->r[11]^0x80000000u; // 800CFC88
  {uint32_t ea=c->r[2]+0xFFFF9B40u; c->f[0]=RF64(ea);} // 800CFC8C
  c->r[5]=0u+0x43300000u; // 800CFC90
  c->f[3]=c->f[10]+c->f[8]; // 800CFC94
  {uint32_t ea=c->r[2]+0xFFFF9B38u; c->f[1]=RF64(ea);} // 800CFC98
  c->f[26]=c->f[10]-c->f[8]; // 800CFC9C
  {uint32_t ea=c->r[2]+0xFFFF9BB0u; c->f[7]=RF64(ea);} // 800CFCA0
  {uint32_t ea=c->r[2]+0xFFFF9BA0u; c->f[6]=RF64(ea);} // 800CFCA4
  c->r[9]=c->r[9]|0x20000000u; // 800CFCA8
  c->f[1]=c->f[1]/c->f[3]; // 800CFCAC
  c->r[8]=c->r[8]+0x00080000u; // 800CFCB0
  c->r[8]=c->r[9]+c->r[8]; // 800CFCB4
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 800CFCB8
  {uint32_t ea=c->r[2]+0xFFFF9BA8u; c->f[3]=RF64(ea);} // 800CFCBC
  c->r[9]=0u+0x00000000u; // 800CFCC0
  c->f[4]=c->f[26]*c->f[1]; // 800CFCC4
  W32(c->r[1]+0x00000018u,c->r[8]); // 800CFCC8
  {uint32_t ea=c->r[2]+0xFFFF9B98u; c->f[13]=RF64(ea);} // 800CFCCC
  c->r[7]=c->r[3]+0x00000020u; // 800CFCD0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[9]=RF64(ea);} // 800CFCD4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[4]);} // 800CFCD8
  c->f[5]=c->f[4]*c->f[4]; // 800CFCDC
  W32(c->r[1]+0x00000024u,c->r[9]); // 800CFCE0
  {uint32_t ea=c->r[2]+0xFFFF9B90u; c->f[30]=RF64(ea);} // 800CFCE4
  c->f[8]=c->f[9]-c->f[8]; // 800CFCE8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[0]=RF64(ea);} // 800CFCEC
  W32(c->r[1]+0x0000005Cu,c->r[6]); // 800CFCF0
  c->f[7]=c->f[7]*c->f[5]; // 800CFCF4
  W32(c->r[1]+0x00000058u,c->r[5]); // 800CFCF8
  {uint32_t ea=c->r[2]+0xFFFF9B88u; c->f[31]=RF64(ea);} // 800CFCFC
  c->f[8]=c->f[10]-c->f[8]; // 800CFD00
  {uint32_t ea=c->r[2]+0xFFFF9BB8u; c->f[12]=RF64(ea);} // 800CFD04
  c->f[28]=c->f[0]*c->f[9]; // 800CFD08
  c->f[7]=c->f[3]+c->f[7]; // 800CFD0C
  {uint32_t ea=c->r[2]+0xFFFF9BC8u; c->f[10]=RF64(ea);} // 800CFD10
  c->f[27]=c->f[0]*c->f[8]; // 800CFD14
  {uint32_t ea=c->r[2]+0xFFFF9BD0u; c->f[9]=RF64(ea);} // 800CFD18
  {uint32_t ea=c->r[2]+0xFFFF9BC0u; c->f[11]=RF64(ea);} // 800CFD1C
  c->f[7]=c->f[5]*c->f[7]; // 800CFD20
  {uint32_t ea=c->r[7]+c->r[10]; c->f[8]=RF64(ea);} // 800CFD24
  c->f[28]=c->f[26]-c->f[28]; // 800CFD28
  c->f[3]=c->f[0]*c->f[0]; // 800CFD2C
  c->f[29]=c->f[6]+c->f[7]; // 800CFD30
  {uint32_t ea=c->r[2]+0xFFFF9C40u; c->f[7]=RF64(ea);} // 800CFD34
  c->f[27]=c->f[28]-c->f[27]; // 800CFD38
  {uint32_t ea=c->r[1]+0x00000058u; c->f[6]=RF64(ea);} // 800CFD3C
  c->f[28]=c->f[5]*c->f[5]; // 800CFD40
  c->f[29]=c->f[5]*c->f[29]; // 800CFD44
  c->f[27]=c->f[1]*c->f[27]; // 800CFD48
  c->f[13]=c->f[13]+c->f[29]; // 800CFD4C
  c->f[1]=c->f[12]+c->f[3]; // 800CFD50
  c->f[29]=c->f[5]*c->f[13]; // 800CFD54
  c->f[13]=c->f[0]+c->f[4]; // 800CFD58
  c->f[30]=c->f[30]+c->f[29]; // 800CFD5C
  c->f[13]=c->f[27]*c->f[13]; // 800CFD60
  c->f[30]=c->f[5]*c->f[30]; // 800CFD64
  c->f[5]=c->f[6]-c->f[7]; // 800CFD68
  c->f[6]=c->f[31]+c->f[30]; // 800CFD6C
  c->f[26]=c->f[28]*c->f[6]; // 800CFD70
  c->f[26]=c->f[26]+c->f[13]; // 800CFD74
  c->f[1]=c->f[1]+c->f[26]; // 800CFD78
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[1]);} // 800CFD7C
  W32(c->r[1]+0x0000001Cu,c->r[9]); // 800CFD80
  {uint32_t ea=c->r[1]+0x00000018u; c->f[7]=RF64(ea);} // 800CFD84
  c->f[6]=c->f[7]-c->f[12]; // 800CFD88
  c->f[1]=c->f[27]*c->f[7]; // 800CFD8C
  c->f[3]=c->f[6]-c->f[3]; // 800CFD90
  c->f[6]=c->f[0]*c->f[7]; // 800CFD94
  c->f[0]=c->f[26]-c->f[3]; // 800CFD98
  c->f[0]=c->f[0]*c->f[4]; // 800CFD9C
  c->f[4]=c->f[1]+c->f[0]; // 800CFDA0
  c->f[3]=c->f[6]+c->f[4]; // 800CFDA4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[3]);} // 800CFDA8
  W32(c->r[1]+0x00000044u,c->r[9]); // 800CFDAC
  {uint32_t ea=c->r[1]+0x00000040u; c->f[3]=RF64(ea);} // 800CFDB0
  c->f[0]=c->f[3]-c->f[6]; // 800CFDB4
  c->f[1]=c->f[10]*c->f[3]; // 800CFDB8
  c->f[0]=c->f[4]-c->f[0]; // 800CFDBC
  c->f[3]=c->f[11]*c->f[3]; // 800CFDC0
  c->f[0]=c->f[9]*c->f[0]; // 800CFDC4
  c->f[0]=c->f[1]+c->f[0]; // 800CFDC8
  c->f[4]=c->f[8]+c->f[0]; // 800CFDCC
  c->r[3]=c->r[3]+0x00000010u; // 800CFDD0
  c->f[0]=c->f[3]+c->f[4]; // 800CFDD4
  {uint32_t ea=c->r[3]+c->r[10]; c->f[1]=RF64(ea);} // 800CFDD8
  c->f[0]=c->f[0]+c->f[1]; // 800CFDDC
  c->f[0]=c->f[5]+c->f[0]; // 800CFDE0
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[0]);} // 800CFDE4
  W32(c->r[1]+0x00000034u,c->r[9]); // 800CFDE8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 800CFDEC
  c->f[0]=c->f[0]-c->f[5]; // 800CFDF0
  c->f[0]=c->f[0]-c->f[1]; // 800CFDF4
  c->f[0]=c->f[0]-c->f[3]; // 800CFDF8
  c->f[0]=c->f[4]-c->f[0]; // 800CFDFC
L_800CFE00:;
  c->r[3]=c->r[4]+0xFFFFFFFFu; // 800CFE00
  {uint32_t ea=c->r[2]+0xFFFF9B38u; c->f[31]=RF64(ea);} // 800CFE04
  c->r[0]=c->r[0]|c->r[3]; cr0(c,c->r[0]); // 800CFE08
  if (!crb(c,2)) { goto L_800CFE14; } // 800CFE0C
  {uint32_t ea=c->r[2]+0xFFFF9BD8u; c->f[31]=RF64(ea);} // 800CFE10
L_800CFE14:;
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[2]);} // 800CFE14
  c->r[0]=0u+0x00000000u; // 800CFE18
  c->f[0]=c->f[2]*c->f[0]; // 800CFE1C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=RF64(ea);} // 800CFE20
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800CFE24
  c->r[0]=0u+0x40900000u; // 800CFE28
  {uint32_t ea=c->r[1]+0x00000038u; c->f[3]=RF64(ea);} // 800CFE2C
  c->f[2]=c->f[2]-c->f[3]; // 800CFE30
  c->f[3]=c->f[3]*c->f[1]; // 800CFE34
  c->f[1]=c->f[1]*c->f[2]; // 800CFE38
  c->f[10]=c->f[1]+c->f[0]; // 800CFE3C
  c->f[0]=c->f[10]+c->f[3]; // 800CFE40
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[0]);} // 800CFE44
  c->r[6]=R32(c->r[1]+0x00000050u); // 800CFE48
  c->r[5]=R32(c->r[1]+0x00000054u); // 800CFE4C
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 800CFE50
  if (crb(c,0)) { goto L_800CFE98; } // 800CFE54
  c->r[0]=c->r[6]+0xBF700000u; // 800CFE58
  c->r[0]=c->r[0]|c->r[5]; cr0(c,c->r[0]); // 800CFE5C
  if (crb(c,2)) { goto L_800CFE74; } // 800CFE60
  {uint32_t ea=c->r[2]+0xFFFF9BE0u; c->f[1]=RF64(ea);} // 800CFE64
  c->f[0]=c->f[1]*c->f[31]; // 800CFE68
  c->f[1]=c->f[1]*c->f[0]; // 800CFE6C
  goto L_800D0040; // 800CFE70
L_800CFE74:;
  {uint32_t ea=c->r[2]+0xFFFF9BE8u; c->f[1]=RF64(ea);} // 800CFE74
  c->f[0]=c->f[0]-c->f[3]; // 800CFE78
  c->f[1]=c->f[1]+c->f[10]; // 800CFE7C
  fcmp(c,0,c->f[1],c->f[0]); // 800CFE80
  if (!crb(c,1)) { goto L_800CFEEC; } // 800CFE84
  {uint32_t ea=c->r[2]+0xFFFF9BE0u; c->f[1]=RF64(ea);} // 800CFE88
  c->f[0]=c->f[1]*c->f[31]; // 800CFE8C
  c->f[1]=c->f[1]*c->f[0]; // 800CFE90
  goto L_800D0040; // 800CFE94
L_800CFE98:;
  c->r[3]=0u+0x40910000u; // 800CFE98
  c->r[4]=rotl(c->r[6],0)&0x7FFFFFFFu; // 800CFE9C
  c->r[0]=c->r[3]+0xFFFFCC00u; // 800CFEA0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800CFEA4
  if (crb(c,0)) { goto L_800CFEEC; } // 800CFEA8
  c->r[3]=c->r[6]+0x3F6F0000u; // 800CFEAC
  c->r[0]=c->r[3]+0x00003400u; // 800CFEB0
  c->r[0]=c->r[0]|c->r[5]; cr0(c,c->r[0]); // 800CFEB4
  if (crb(c,2)) { goto L_800CFECC; } // 800CFEB8
  {uint32_t ea=c->r[2]+0xFFFF9BF0u; c->f[1]=RF64(ea);} // 800CFEBC
  c->f[0]=c->f[1]*c->f[31]; // 800CFEC0
  c->f[1]=c->f[1]*c->f[0]; // 800CFEC4
  goto L_800D0040; // 800CFEC8
L_800CFECC:;
  c->f[0]=c->f[0]-c->f[3]; // 800CFECC
  fcmp(c,0,c->f[10],c->f[0]); // 800CFED0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800CFED4
  if (!crb(c,2)) { goto L_800CFEEC; } // 800CFED8
  {uint32_t ea=c->r[2]+0xFFFF9BF0u; c->f[1]=RF64(ea);} // 800CFEDC
  c->f[0]=c->f[1]*c->f[31]; // 800CFEE0
  c->f[1]=c->f[1]*c->f[0]; // 800CFEE4
  goto L_800D0040; // 800CFEE8
L_800CFEEC:;
  c->r[3]=rotl(c->r[6],0)&0x7FFFFFFFu; // 800CFEEC
  c->r[0]=0u+0x3FE00000u; // 800CFEF0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800CFEF4
  c->r[4]=rotl(c->r[6],12)&0x000007FFu; // 800CFEF8
  c->r[3]=0u+0x00000000u; // 800CFEFC
  if (!crb(c,1)) { goto L_800CFF5C; } // 800CFF00
  c->r[3]=0u+0x00100000u; // 800CFF04
  c->r[0]=c->r[4]+0xFFFFFC02u; // 800CFF08
  c->r[0]=sraw(c,c->r[3],(c->r[0])&63); // 800CFF0C
  {uint32_t ea=c->r[2]+0xFFFF9B40u; c->f[0]=RF64(ea);} // 800CFF10
  c->r[7]=c->r[6]+c->r[0]; // 800CFF14
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[0]);} // 800CFF18
  c->r[0]=rotl(c->r[7],0)&0x7FFFFFFFu; // 800CFF1C
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800CFF20
  c->r[4]=sraw(c,c->r[0],20); // 800CFF24
  cmps(c,0,(int32_t)c->r[6],0); // 800CFF28
  c->r[5]=c->r[4]+0xFFFFFC01u; // 800CFF2C
  c->r[0]=rotl(c->r[7],0)&0x000FFFFFu; // 800CFF30
  c->r[4]=sraw(c,c->r[3],(c->r[5])&63); // 800CFF34
  c->r[3]=c->r[0]|0x00100000u; // 800CFF38
  c->r[0]=addc(c,~c->r[5],0x00000014u,1); // 800CFF3C
  c->r[4]=c->r[7]&~c->r[4]; // 800CFF40
  W32(c->r[1]+0x00000028u,c->r[4]); // 800CFF44
  c->r[3]=sraw(c,c->r[3],(c->r[0])&63); // 800CFF48
  if (!crb(c,0)) { goto L_800CFF54; } // 800CFF4C
  c->r[3]=0u-c->r[3]; // 800CFF50
L_800CFF54:;
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 800CFF54
  c->f[3]=c->f[3]-c->f[0]; // 800CFF58
L_800CFF5C:;
  c->f[0]=c->f[10]+c->f[3]; // 800CFF5C
  c->r[0]=0u+0x00000000u; // 800CFF60
  {uint32_t ea=c->r[2]+0xFFFF9C00u; c->f[2]=RF64(ea);} // 800CFF64
  c->r[4]=rotl(c->r[3],20)&0xFFF00000u; // 800CFF68
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[0]);} // 800CFF6C
  {uint32_t ea=c->r[2]+0xFFFF9C08u; c->f[0]=RF64(ea);} // 800CFF70
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800CFF74
  {uint32_t ea=c->r[2]+0xFFFF9BF8u; c->f[9]=RF64(ea);} // 800CFF78
  {uint32_t ea=c->r[1]+0x00000028u; c->f[8]=RF64(ea);} // 800CFF7C
  {uint32_t ea=c->r[2]+0xFFFF9C30u; c->f[6]=RF64(ea);} // 800CFF80
  c->f[3]=c->f[8]-c->f[3]; // 800CFF84
  {uint32_t ea=c->r[2]+0xFFFF9C28u; c->f[1]=RF64(ea);} // 800CFF88
  c->f[7]=c->f[0]*c->f[8]; // 800CFF8C
  {uint32_t ea=c->r[2]+0xFFFF9C20u; c->f[5]=RF64(ea);} // 800CFF90
  {uint32_t ea=c->r[2]+0xFFFF9C18u; c->f[4]=RF64(ea);} // 800CFF94
  c->f[0]=c->f[10]-c->f[3]; // 800CFF98
  c->f[10]=c->f[9]*c->f[8]; // 800CFF9C
  {uint32_t ea=c->r[2]+0xFFFF9C10u; c->f[3]=RF64(ea);} // 800CFFA0
  c->f[8]=c->f[2]*c->f[0]; // 800CFFA4
  {uint32_t ea=c->r[2]+0xFFFF9C38u; c->f[2]=RF64(ea);} // 800CFFA8
  {uint32_t ea=c->r[2]+0xFFFF9B38u; c->f[0]=RF64(ea);} // 800CFFAC
  c->f[11]=c->f[8]+c->f[7]; // 800CFFB0
  c->f[9]=c->f[10]+c->f[11]; // 800CFFB4
  c->f[7]=c->f[9]*c->f[9]; // 800CFFB8
  c->f[8]=c->f[9]-c->f[10]; // 800CFFBC
  c->f[6]=c->f[6]*c->f[7]; // 800CFFC0
  c->f[8]=c->f[11]-c->f[8]; // 800CFFC4
  c->f[6]=c->f[1]+c->f[6]; // 800CFFC8
  c->f[1]=c->f[9]*c->f[8]; // 800CFFCC
  c->f[6]=c->f[7]*c->f[6]; // 800CFFD0
  c->f[1]=c->f[8]+c->f[1]; // 800CFFD4
  c->f[5]=c->f[5]+c->f[6]; // 800CFFD8
  c->f[5]=c->f[7]*c->f[5]; // 800CFFDC
  c->f[4]=c->f[4]+c->f[5]; // 800CFFE0
  c->f[4]=c->f[7]*c->f[4]; // 800CFFE4
  c->f[3]=c->f[3]+c->f[4]; // 800CFFE8
  c->f[3]=c->f[7]*c->f[3]; // 800CFFEC
  c->f[4]=c->f[9]-c->f[3]; // 800CFFF0
  c->f[3]=c->f[9]*c->f[4]; // 800CFFF4
  c->f[2]=c->f[4]-c->f[2]; // 800CFFF8
  c->f[2]=c->f[3]/c->f[2]; // 800CFFFC
  c->f[1]=c->f[2]-c->f[1]; // 800D0000
  c->f[1]=c->f[1]-c->f[9]; // 800D0004
  c->f[1]=c->f[0]-c->f[1]; // 800D0008
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[1]);} // 800D000C
  c->r[0]=R32(c->r[1]+0x00000050u); // 800D0010
  c->r[0]=c->r[0]+c->r[4]; // 800D0014
  c->r[0]=sraw(c,c->r[0],20); cr0(c,c->r[0]); // 800D0018
  if (crb(c,1)) { goto L_800D002C; } // 800D001C
  c->lr=0x800D0024u; f_800CE6F8(c); // 800D0020
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[1]);} // 800D0024
  goto L_800D0038; // 800D0028
L_800D002C:;
  c->r[0]=R32(c->r[1]+0x00000050u); // 800D002C
  c->r[0]=c->r[0]+c->r[4]; // 800D0030
  W32(c->r[1]+0x00000050u,c->r[0]); // 800D0034
L_800D0038:;
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=RF64(ea);} // 800D0038
  c->f[1]=c->f[31]*c->f[0]; // 800D003C
L_800D0040:;
  c->r[0]=R32(c->r[1]+0x000000C4u); // 800D0040
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,31,ea,0,0);} // 800D0044
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[31]=RF64(ea);} // 800D0048
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,30,ea,0,0);} // 800D004C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[30]=RF64(ea);} // 800D0050
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,29,ea,0,0);} // 800D0054
  {uint32_t ea=c->r[1]+0x00000090u; c->f[29]=RF64(ea);} // 800D0058
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,28,ea,0,0);} // 800D005C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[28]=RF64(ea);} // 800D0060
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,27,ea,0,0);} // 800D0064
  {uint32_t ea=c->r[1]+0x00000070u; c->f[27]=RF64(ea);} // 800D0068
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,26,ea,0,0);} // 800D006C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[26]=RF64(ea);} // 800D0070
  c->lr=c->r[0]; // 800D0074
  c->r[1]=c->r[1]+0x000000C0u; // 800D0078
  return; // 800D007C
}

// __ieee754_rem_pio2
void f_800D0080(Ctx* __restrict c) {
  trace_call(0x800D0080u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0080
  c->r[0]=c->lr; // 800D0084
  c->r[4]=0u+0x3FE90000u; // 800D0088
  W32(c->r[1]+0x00000064u,c->r[0]); // 800D008C
  c->r[0]=c->r[4]+0x000021FBu; // 800D0090
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800D0094
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800D0098
  c->r[31]=R32(c->r[1]+0x00000008u); // 800D009C
  W32(c->r[1]+0x00000058u,c->r[30]); // 800D00A0
  c->r[30]=c->r[3]|c->r[3]; // 800D00A4
  c->r[6]=rotl(c->r[31],0)&0x7FFFFFFFu; // 800D00A8
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 800D00AC
  if (crb(c,1)) { goto L_800D00C8; } // 800D00B0
  {uint32_t ea=c->r[2]+0xFFFF9C48u; c->f[0]=RF64(ea);} // 800D00B4
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[1]);} // 800D00B8
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[0]);} // 800D00BC
  c->r[3]=0u+0x00000000u; // 800D00C0
  goto L_800D03EC; // 800D00C4
L_800D00C8:;
  c->r[4]=0u+0x40030000u; // 800D00C8
  c->r[0]=c->r[4]+0xFFFFD97Cu; // 800D00CC
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 800D00D0
  if (!crb(c,0)) { goto L_800D0190; } // 800D00D4
  cmps(c,0,(int32_t)c->r[31],0); // 800D00D8
  if (!crb(c,1)) { goto L_800D0138; } // 800D00DC
  {uint32_t ea=c->r[2]+0xFFFF9C50u; c->f[0]=RF64(ea);} // 800D00E0
  c->r[0]=c->r[6]+0xC0070000u; // 800D00E4
  cmpu(c,0,c->r[0],0x000021FBu); // 800D00E8
  c->f[2]=c->f[1]-c->f[0]; // 800D00EC
  if (crb(c,2)) { goto L_800D0110; } // 800D00F0
  {uint32_t ea=c->r[2]+0xFFFF9C58u; c->f[1]=RF64(ea);} // 800D00F4
  c->f[0]=c->f[2]-c->f[1]; // 800D00F8
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 800D00FC
  c->f[0]=c->f[2]-c->f[0]; // 800D0100
  c->f[0]=c->f[0]-c->f[1]; // 800D0104
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[0]);} // 800D0108
  goto L_800D0130; // 800D010C
L_800D0110:;
  {uint32_t ea=c->r[2]+0xFFFF9C60u; c->f[0]=RF64(ea);} // 800D0110
  {uint32_t ea=c->r[2]+0xFFFF9C68u; c->f[1]=RF64(ea);} // 800D0114
  c->f[2]=c->f[2]-c->f[0]; // 800D0118
  c->f[0]=c->f[2]-c->f[1]; // 800D011C
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 800D0120
  c->f[0]=c->f[2]-c->f[0]; // 800D0124
  c->f[0]=c->f[0]-c->f[1]; // 800D0128
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[0]);} // 800D012C
L_800D0130:;
  c->r[3]=0u+0x00000001u; // 800D0130
  goto L_800D03EC; // 800D0134
L_800D0138:;
  {uint32_t ea=c->r[2]+0xFFFF9C50u; c->f[0]=RF64(ea);} // 800D0138
  c->r[0]=c->r[6]+0xC0070000u; // 800D013C
  cmpu(c,0,c->r[0],0x000021FBu); // 800D0140
  c->f[2]=c->f[0]+c->f[1]; // 800D0144
  if (crb(c,2)) { goto L_800D0168; } // 800D0148
  {uint32_t ea=c->r[2]+0xFFFF9C58u; c->f[1]=RF64(ea);} // 800D014C
  c->f[0]=c->f[1]+c->f[2]; // 800D0150
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 800D0154
  c->f[0]=c->f[2]-c->f[0]; // 800D0158
  c->f[0]=c->f[1]+c->f[0]; // 800D015C
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[0]);} // 800D0160
  goto L_800D0188; // 800D0164
L_800D0168:;
  {uint32_t ea=c->r[2]+0xFFFF9C60u; c->f[0]=RF64(ea);} // 800D0168
  {uint32_t ea=c->r[2]+0xFFFF9C68u; c->f[1]=RF64(ea);} // 800D016C
  c->f[2]=c->f[2]+c->f[0]; // 800D0170
  c->f[0]=c->f[1]+c->f[2]; // 800D0174
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 800D0178
  c->f[0]=c->f[2]-c->f[0]; // 800D017C
  c->f[0]=c->f[1]+c->f[0]; // 800D0180
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[0]);} // 800D0184
L_800D0188:;
  c->r[3]=0u+0xFFFFFFFFu; // 800D0188
  goto L_800D03EC; // 800D018C
L_800D0190:;
  c->r[4]=0u+0x41390000u; // 800D0190
  c->r[0]=c->r[4]+0x000021FBu; // 800D0194
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 800D0198
  if (crb(c,1)) { goto L_800D02E4; } // 800D019C
  c->f[5]=std::fabs(c->f[1]); // 800D01A0
  {uint32_t ea=c->r[2]+0xFFFF9C78u; c->f[0]=RF64(ea);} // 800D01A4
  c->r[0]=0u+0x43300000u; // 800D01A8
  {uint32_t ea=c->r[2]+0xFFFF9C70u; c->f[2]=RF64(ea);} // 800D01AC
  W32(c->r[1]+0x00000038u,c->r[0]); // 800D01B0
  c->f[4]=c->f[0]*c->f[5]; // 800D01B4
  {uint32_t ea=c->r[2]+0xFFFF9C98u; c->f[3]=RF64(ea);} // 800D01B8
  {uint32_t ea=c->r[2]+0xFFFF9C50u; c->f[1]=RF64(ea);} // 800D01BC
  {uint32_t ea=c->r[2]+0xFFFF9C58u; c->f[0]=RF64(ea);} // 800D01C0
  c->f[2]=c->f[2]+c->f[4]; // 800D01C4
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800D01C8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 800D01CC
  c->r[5]=R32(c->r[1]+0x00000034u); // 800D01D0
  c->r[0]=c->r[5]^0x80000000u; // 800D01D4
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800D01D8
  cmps(c,0,(int32_t)c->r[5],32); // 800D01DC
  {uint32_t ea=c->r[1]+0x00000038u; c->f[2]=RF64(ea);} // 800D01E0
  c->f[6]=c->f[2]-c->f[3]; // 800D01E4
  c->f[1]=c->f[1]*c->f[6]; // 800D01E8
  c->f[2]=c->f[0]*c->f[6]; // 800D01EC
  c->f[4]=c->f[5]-c->f[1]; // 800D01F0
  if (!crb(c,0)) { goto L_800D0220; } // 800D01F4
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 800D01F8
  c->r[4]=0u+0x80380000u; // 800D01FC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D0200
  c->r[4]=c->r[4]+0xFFFFDDE0u; // 800D0204
  c->r[0]=R32(c->r[4]+c->r[0]); // 800D0208
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 800D020C
  if (crb(c,2)) { goto L_800D0220; } // 800D0210
  c->f[0]=c->f[4]-c->f[2]; // 800D0214
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 800D0218
  goto L_800D02AC; // 800D021C
L_800D0220:;
  c->f[0]=c->f[4]-c->f[2]; // 800D0220
  c->r[4]=sraw(c,c->r[6],20); // 800D0224
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 800D0228
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D022C
  c->r[0]=rotl(c->r[0],12)&0x000007FFu; // 800D0230
  c->r[0]=c->r[4]-c->r[0]; // 800D0234
  cmps(c,0,(int32_t)c->r[0],16); // 800D0238
  if (!crb(c,1)) { goto L_800D02AC; } // 800D023C
  {uint32_t ea=c->r[2]+0xFFFF9C60u; c->f[1]=RF64(ea);} // 800D0240
  c->f[2]=c->f[4]; // 800D0244
  {uint32_t ea=c->r[2]+0xFFFF9C68u; c->f[0]=RF64(ea);} // 800D0248
  c->f[3]=c->f[1]*c->f[6]; // 800D024C
  c->f[1]=c->f[0]*c->f[6]; // 800D0250
  c->f[4]=c->f[4]-c->f[3]; // 800D0254
  c->f[0]=c->f[2]-c->f[4]; // 800D0258
  c->f[0]=c->f[0]-c->f[3]; // 800D025C
  c->f[2]=c->f[1]-c->f[0]; // 800D0260
  c->f[0]=c->f[4]-c->f[2]; // 800D0264
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 800D0268
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D026C
  c->r[0]=rotl(c->r[0],12)&0x000007FFu; // 800D0270
  c->r[0]=c->r[4]-c->r[0]; // 800D0274
  cmps(c,0,(int32_t)c->r[0],49); // 800D0278
  if (!crb(c,1)) { goto L_800D02AC; } // 800D027C
  {uint32_t ea=c->r[2]+0xFFFF9C80u; c->f[1]=RF64(ea);} // 800D0280
  c->f[2]=c->f[4]; // 800D0284
  {uint32_t ea=c->r[2]+0xFFFF9C88u; c->f[0]=RF64(ea);} // 800D0288
  c->f[3]=c->f[1]*c->f[6]; // 800D028C
  c->f[1]=c->f[0]*c->f[6]; // 800D0290
  c->f[4]=c->f[4]-c->f[3]; // 800D0294
  c->f[0]=c->f[2]-c->f[4]; // 800D0298
  c->f[0]=c->f[0]-c->f[3]; // 800D029C
  c->f[2]=c->f[1]-c->f[0]; // 800D02A0
  c->f[0]=c->f[4]-c->f[2]; // 800D02A4
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 800D02A8
L_800D02AC:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=RF64(ea);} // 800D02AC
  cmps(c,0,(int32_t)c->r[31],0); // 800D02B0
  c->f[0]=c->f[4]-c->f[1]; // 800D02B4
  c->f[0]=c->f[0]-c->f[2]; // 800D02B8
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[0]);} // 800D02BC
  if (!crb(c,0)) { goto L_800D02DC; } // 800D02C0
  c->f[1]=-c->f[1]; // 800D02C4
  c->f[0]=-c->f[0]; // 800D02C8
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[1]);} // 800D02CC
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[0]);} // 800D02D0
  c->r[3]=0u-c->r[5]; // 800D02D4
  goto L_800D03EC; // 800D02D8
L_800D02DC:;
  c->r[3]=c->r[5]|c->r[5]; // 800D02DC
  goto L_800D03EC; // 800D02E0
L_800D02E4:;
  c->r[0]=0u+0x7FF00000u; // 800D02E4
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 800D02E8
  if (crb(c,0)) { goto L_800D0304; } // 800D02EC
  c->f[0]=c->f[1]-c->f[1]; // 800D02F0
  {uint32_t ea=c->r[3]+0x00000008u; WF64(ea,c->f[0]);} // 800D02F4
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 800D02F8
  c->r[3]=0u+0x00000000u; // 800D02FC
  goto L_800D03EC; // 800D0300
L_800D0304:;
  c->r[3]=sraw(c,c->r[6],20); // 800D0304
  c->r[0]=0u+0x43300000u; // 800D0308
  c->r[5]=c->r[3]+0xFFFFFBEAu; // 800D030C
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800D0310
  c->r[3]=rotl(c->r[5],20)&0xFFF00000u; // 800D0314
  W32(c->r[1]+0x00000014u,c->r[4]); // 800D0318
  c->r[3]=c->r[6]-c->r[3]; // 800D031C
  {uint32_t ea=c->r[2]+0xFFFF9C98u; c->f[4]=RF64(ea);} // 800D0320
  W32(c->r[1]+0x00000010u,c->r[3]); // 800D0324
  c->r[3]=c->r[1]+0x00000030u; // 800D0328
  {uint32_t ea=c->r[2]+0xFFFF9C90u; c->f[3]=RF64(ea);} // 800D032C
  c->r[6]=0u+0x00000003u; // 800D0330
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800D0334
  W32(c->r[1]+0x00000030u,c->r[0]); // 800D0338
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800D033C
  {uint32_t ea=c->r[2]+0xFFFF9C48u; c->f[1]=RF64(ea);} // 800D0340
  W32(c->r[1]+0x00000048u,c->r[0]); // 800D0344
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[0]);} // 800D0348
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 800D034C
  c->r[0]=c->r[0]^0x80000000u; // 800D0350
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D0354
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 800D0358
  c->f[0]=c->f[0]-c->f[4]; // 800D035C
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 800D0360
  c->f[0]=c->f[2]-c->f[0]; // 800D0364
  c->f[2]=c->f[3]*c->f[0]; // 800D0368
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800D036C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[0]);} // 800D0370
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D0374
  c->r[0]=c->r[0]^0x80000000u; // 800D0378
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 800D037C
  {uint32_t ea=c->r[1]+0x00000048u; c->f[0]=RF64(ea);} // 800D0380
  c->f[0]=c->f[0]-c->f[4]; // 800D0384
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 800D0388
  c->f[0]=c->f[2]-c->f[0]; // 800D038C
  c->f[0]=c->f[3]*c->f[0]; // 800D0390
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[0]);} // 800D0394
  goto L_800D03A4; // 800D0398
L_800D039C:;
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 800D039C
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 800D03A0
L_800D03A4:;
  {uint32_t ea=c->r[3]+0xFFFFFFF8u; c->f[0]=RF64(ea);} // 800D03A4
  fcmp(c,0,c->f[1],c->f[0]); // 800D03A8
  if (crb(c,2)) { IRQCHK(c); goto L_800D039C; } // 800D03AC
  c->r[8]=0u+0x80380000u; // 800D03B0
  c->r[4]=c->r[30]|c->r[30]; // 800D03B4
  c->r[3]=c->r[1]+0x00000018u; // 800D03B8
  c->r[7]=0u+0x00000002u; // 800D03BC
  c->r[8]=c->r[8]+0xFFFFDCD8u; // 800D03C0
  c->lr=0x800D03C8u; f_800D0580(c); // 800D03C4
  cmps(c,0,(int32_t)c->r[31],0); // 800D03C8
  if (!crb(c,0)) { goto L_800D03EC; } // 800D03CC
  {uint32_t ea=c->r[30]+0x00000000u; c->f[1]=RF64(ea);} // 800D03D0
  c->r[3]=0u-c->r[3]; // 800D03D4
  {uint32_t ea=c->r[30]+0x00000008u; c->f[0]=RF64(ea);} // 800D03D8
  c->f[1]=-c->f[1]; // 800D03DC
  c->f[0]=-c->f[0]; // 800D03E0
  {uint32_t ea=c->r[30]+0x00000000u; WF64(ea,c->f[1]);} // 800D03E4
  {uint32_t ea=c->r[30]+0x00000008u; WF64(ea,c->f[0]);} // 800D03E8
L_800D03EC:;
  c->r[0]=R32(c->r[1]+0x00000064u); // 800D03EC
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800D03F0
  c->r[30]=R32(c->r[1]+0x00000058u); // 800D03F4
  c->lr=c->r[0]; // 800D03F8
  c->r[1]=c->r[1]+0x00000060u; // 800D03FC
  return; // 800D0400
}

// fn_800D0404
void f_800D0404(Ctx* __restrict c) {
  trace_call(0x800D0404u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0404
  c->r[0]=c->lr; // 800D0408
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D040C
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 800D0410
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[30]);} // 800D0414
  fcmp(c,0,c->f[1],c->f[2]); // 800D0418
  c->f[30]=c->f[1]; // 800D041C
  c->f[31]=c->f[2]; // 800D0420
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D0424
  if (!crb(c,2)) { goto L_800D0430; } // 800D0428
  goto L_800D0458; // 800D042C
L_800D0430:;
  fcmp(c,0,c->f[1],c->f[2]); // 800D0430
  if (!crb(c,0)) { goto L_800D0440; } // 800D0434
  c->f[1]=c->f[31]; // 800D0438
  goto L_800D0458; // 800D043C
L_800D0440:;
  c->lr=0x800D0444u; f_800C65BC(c); // 800D0440
  cmps(c,0,(int32_t)c->r[3],1); // 800D0444
  if (!crb(c,2)) { goto L_800D0454; } // 800D0448
  c->f[1]=c->f[31]; // 800D044C
  goto L_800D0458; // 800D0450
L_800D0454:;
  c->f[1]=c->f[30]; // 800D0454
L_800D0458:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D0458
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 800D045C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[30]=RF64(ea);} // 800D0460
  c->lr=c->r[0]; // 800D0464
  c->r[1]=c->r[1]+0x00000020u; // 800D0468
  return; // 800D046C
}

// __kernel_cos
void f_800D0470(Ctx* __restrict c) {
  trace_call(0x800D0470u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0470
  c->r[0]=0u+0x3E400000u; // 800D0474
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800D0478
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D047C
  c->r[4]=rotl(c->r[3],0)&0x7FFFFFFFu; // 800D0480
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D0484
  if (!crb(c,0)) { goto L_800D04A8; } // 800D0488
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800D048C
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[0]);} // 800D0490
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800D0494
  cmps(c,0,(int32_t)c->r[0],0); // 800D0498
  if (!crb(c,2)) { goto L_800D04A8; } // 800D049C
  {uint32_t ea=c->r[2]+0xFFFF9CA0u; c->f[1]=RF64(ea);} // 800D04A0
  goto L_800D0578; // 800D04A4
L_800D04A8:;
  c->f[8]=c->f[1]*c->f[1]; // 800D04A8
  {uint32_t ea=c->r[2]+0xFFFF9CD0u; c->f[0]=RF64(ea);} // 800D04AC
  c->r[3]=0u+0x3FD30000u; // 800D04B0
  {uint32_t ea=c->r[2]+0xFFFF9CC8u; c->f[6]=RF64(ea);} // 800D04B4
  c->r[0]=c->r[3]+0x00003333u; // 800D04B8
  {uint32_t ea=c->r[2]+0xFFFF9CC0u; c->f[5]=RF64(ea);} // 800D04BC
  c->f[7]=c->f[0]*c->f[8]; // 800D04C0
  {uint32_t ea=c->r[2]+0xFFFF9CB8u; c->f[4]=RF64(ea);} // 800D04C4
  {uint32_t ea=c->r[2]+0xFFFF9CB0u; c->f[3]=RF64(ea);} // 800D04C8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D04CC
  {uint32_t ea=c->r[2]+0xFFFF9CA8u; c->f[0]=RF64(ea);} // 800D04D0
  c->f[6]=c->f[6]+c->f[7]; // 800D04D4
  c->f[6]=c->f[8]*c->f[6]; // 800D04D8
  c->f[5]=c->f[5]+c->f[6]; // 800D04DC
  c->f[5]=c->f[8]*c->f[5]; // 800D04E0
  c->f[4]=c->f[4]+c->f[5]; // 800D04E4
  c->f[4]=c->f[8]*c->f[4]; // 800D04E8
  c->f[3]=c->f[3]+c->f[4]; // 800D04EC
  c->f[3]=c->f[8]*c->f[3]; // 800D04F0
  c->f[0]=c->f[0]+c->f[3]; // 800D04F4
  c->f[3]=c->f[8]*c->f[0]; // 800D04F8
  if (!crb(c,0)) { goto L_800D0524; } // 800D04FC
  c->f[3]=c->f[8]*c->f[3]; // 800D0500
  {uint32_t ea=c->r[2]+0xFFFF9CD8u; c->f[4]=RF64(ea);} // 800D0504
  {uint32_t ea=c->r[2]+0xFFFF9CA0u; c->f[0]=RF64(ea);} // 800D0508
  c->f[1]=c->f[1]*c->f[2]; // 800D050C
  c->f[2]=c->f[4]*c->f[8]; // 800D0510
  c->f[1]=c->f[3]-c->f[1]; // 800D0514
  c->f[1]=c->f[2]-c->f[1]; // 800D0518
  c->f[1]=c->f[0]-c->f[1]; // 800D051C
  goto L_800D0578; // 800D0520
L_800D0524:;
  c->r[0]=0u+0x3FE90000u; // 800D0524
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D0528
  if (!crb(c,1)) { goto L_800D053C; } // 800D052C
  {uint32_t ea=c->r[2]+0xFFFF9CE0u; c->f[0]=RF64(ea);} // 800D0530
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 800D0534
  goto L_800D054C; // 800D0538
L_800D053C:;
  c->r[3]=c->r[4]+0xFFE00000u; // 800D053C
  c->r[0]=0u+0x00000000u; // 800D0540
  W32(c->r[1]+0x00000010u,c->r[3]); // 800D0544
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D0548
L_800D054C:;
  {uint32_t ea=c->r[2]+0xFFFF9CD8u; c->f[0]=RF64(ea);} // 800D054C
  c->f[3]=c->f[8]*c->f[3]; // 800D0550
  {uint32_t ea=c->r[1]+0x00000010u; c->f[5]=RF64(ea);} // 800D0554
  c->f[6]=c->f[0]*c->f[8]; // 800D0558
  {uint32_t ea=c->r[2]+0xFFFF9CA0u; c->f[4]=RF64(ea);} // 800D055C
  c->f[0]=c->f[1]*c->f[2]; // 800D0560
  c->f[2]=c->f[6]-c->f[5]; // 800D0564
  c->f[1]=c->f[4]-c->f[5]; // 800D0568
  c->f[0]=c->f[3]-c->f[0]; // 800D056C
  c->f[0]=c->f[2]-c->f[0]; // 800D0570
  c->f[1]=c->f[1]-c->f[0]; // 800D0574
L_800D0578:;
  c->r[1]=c->r[1]+0x00000020u; // 800D0578
  return; // 800D057C
}

// __kernel_rem_pio2
void f_800D0580(Ctx* __restrict c) {
  trace_call(0x800D0580u);
  {uint32_t ea=c->r[1]+0xFFFFFC90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D0580
  c->r[0]=c->lr; // 800D0584
  W32(c->r[1]+0x00000374u,c->r[0]); // 800D0588
  c->r[11]=c->r[1]+0x00000370u; // 800D058C
  c->lr=0x800D0594u; f_800C2DA4(c); // 800D0590
  {uint32_t ea=c->r[1]+0x000002E0u; for(int i=14;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D0594
  c->r[9]=0u+0x2AAB0000u; // 800D0598
  c->r[12]=0u+0x43300000u; // 800D059C
  c->r[0]=c->r[5]+0xFFFFFFFDu; // 800D05A0
  c->r[10]=0u+0x80380000u; // 800D05A4
  c->r[9]=c->r[9]+0xFFFFAAABu; // 800D05A8
  c->r[11]=rotl(c->r[7],2)&0xFFFFFFFCu; // 800D05AC
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[9]*(int64_t)(int32_t)c->r[0])>>32); // 800D05B0
  c->r[10]=c->r[10]+0xFFFFDE60u; // 800D05B4
  c->r[17]=c->r[4]|c->r[4]; // 800D05B8
  c->r[21]=R32(c->r[10]+c->r[11]); // 800D05BC
  W32(c->r[1]+0x00000240u,c->r[12]); // 800D05C0
  c->r[16]=c->r[3]|c->r[3]; // 800D05C4
  c->r[0]=sraw(c,c->r[0],2); // 800D05C8
  W32(c->r[1]+0x00000248u,c->r[12]); // 800D05CC
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 800D05D0
  c->r[22]=c->r[6]+0xFFFFFFFFu; // 800D05D4
  c->r[10]=c->r[0]+c->r[4]; cr0(c,c->r[10]); // 800D05D8
  W32(c->r[1]+0x00000008u,c->r[7]); // 800D05DC
  if (!crb(c,0)) { goto L_800D05E8; } // 800D05E0
  c->r[10]=0u+0x00000000u; // 800D05E4
L_800D05E8:;
  c->r[0]=c->r[10]+0x00000001u; // 800D05E8
  c->r[9]=c->r[22]+c->r[21]; cr0(c,c->r[9]); // 800D05EC
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 800D05F0
  c->r[7]=c->r[10]-c->r[22]; // 800D05F4
  {uint32_t ea=c->r[2]+0xFFFF9D20u; c->f[1]=RF64(ea);} // 800D05F8
  c->r[4]=rotl(c->r[7],2)&0xFFFFFFFCu; // 800D05FC
  c->r[19]=c->r[5]-c->r[6]; // 800D0600
  c->r[0]=c->r[9]+0x00000001u; // 800D0604
  c->r[4]=c->r[8]+c->r[4]; // 800D0608
  c->r[5]=c->r[1]+0x000001A0u; // 800D060C
  c->ctr=c->r[0]; // 800D0610
  if (crb(c,0)) { goto L_800D0650; } // 800D0614
L_800D0618:;
  cmps(c,0,(int32_t)c->r[7],0); // 800D0618
  if (!crb(c,0)) { goto L_800D0628; } // 800D061C
  {uint32_t ea=c->r[2]+0xFFFF9CE8u; c->f[0]=RF64(ea);} // 800D0620
  goto L_800D063C; // 800D0624
L_800D0628:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 800D0628
  c->r[0]=c->r[0]^0x80000000u; // 800D062C
  W32(c->r[1]+0x00000244u,c->r[0]); // 800D0630
  {uint32_t ea=c->r[1]+0x00000240u; c->f[0]=RF64(ea);} // 800D0634
  c->f[0]=c->f[0]-c->f[1]; // 800D0638
L_800D063C:;
  {uint32_t ea=c->r[5]+0x00000000u; WF64(ea,c->f[0]);} // 800D063C
  c->r[5]=c->r[5]+0x00000008u; // 800D0640
  c->r[4]=c->r[4]+0x00000004u; // 800D0644
  c->r[7]=c->r[7]+0x00000001u; // 800D0648
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D0618; } // 800D064C
L_800D0650:;
  c->r[0]=c->r[22]+0x00000001u; // 800D0650
  c->r[5]=c->r[1]+0x00000060u; // 800D0654
  c->r[25]=rotl(c->r[22],0)&0x80000000u; // 800D0658
  c->r[12]=c->r[1]+0x000001A0u; // 800D065C
  c->r[24]=rotl(c->r[0],0)&0x80000000u; // 800D0660
  c->r[9]=0u+0x00000000u; // 800D0664
  c->r[4]=0u+0x80000000u; // 800D0668
  goto L_800D0834; // 800D066C
L_800D0670:;
  cmps(c,1,(int32_t)c->r[22],0); // 800D0670
  {uint32_t ea=c->r[2]+0xFFFF9CE8u; c->f[6]=RF64(ea);} // 800D0674
  c->r[7]=0u+0x00000000u; // 800D0678
  if (crb(c,4)) { goto L_800D0828; } // 800D067C
  c->r[0]=c->r[22]+0x00000001u; // 800D0680
  c->r[14]=c->r[22]+0xFFFFFFF8u; // 800D0684
  cmps(c,0,(int32_t)c->r[0],8); // 800D0688
  if (!crb(c,1)) { goto L_800D07E4; } // 800D068C
  c->r[6]=0u+0x00000000u; // 800D0690
  c->r[11]=0u+0x00000000u; // 800D0694
  if (crb(c,4)) { goto L_800D06AC; } // 800D0698
  c->r[0]=c->r[4]+0xFFFFFFFEu; // 800D069C
  cmps(c,0,(int32_t)c->r[22],(int32_t)c->r[0]); // 800D06A0
  if (crb(c,1)) { goto L_800D06AC; } // 800D06A4
  c->r[11]=0u+0x00000001u; // 800D06A8
L_800D06AC:;
  cmps(c,0,(int32_t)c->r[11],0); // 800D06AC
  if (crb(c,2)) { goto L_800D06D8; } // 800D06B0
  cmps(c,0,(int32_t)c->r[25],0); // 800D06B4
  c->r[0]=0u+0x00000001u; // 800D06B8
  if (!crb(c,2)) { goto L_800D06CC; } // 800D06BC
  cmps(c,0,(int32_t)c->r[24],0); // 800D06C0
  if (crb(c,2)) { goto L_800D06CC; } // 800D06C4
  c->r[0]=0u+0x00000000u; // 800D06C8
L_800D06CC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D06CC
  if (crb(c,2)) { goto L_800D06D8; } // 800D06D0
  c->r[6]=0u+0x00000001u; // 800D06D4
L_800D06D8:;
  cmps(c,0,(int32_t)c->r[6],0); // 800D06D8
  if (crb(c,2)) { goto L_800D07E4; } // 800D06DC
  c->r[11]=c->r[14]+0x00000008u; // 800D06E0
  c->r[6]=c->r[16]|c->r[16]; // 800D06E4
  c->r[11]=rotl(c->r[11],29)&0x1FFFFFFFu; // 800D06E8
  c->r[0]=c->r[22]+c->r[9]; // 800D06EC
  c->ctr=c->r[11]; // 800D06F0
  cmps(c,0,(int32_t)c->r[14],0); // 800D06F4
  if (crb(c,0)) { goto L_800D07E4; } // 800D06F8
L_800D06FC:;
  c->r[11]=c->r[0]-c->r[7]; // 800D06FC
  c->r[14]=c->r[7]+0x00000001u; // 800D0700
  c->r[15]=rotl(c->r[11],3)&0xFFFFFFF8u; // 800D0704
  {uint32_t ea=c->r[6]+0x00000000u; c->f[1]=RF64(ea);} // 800D0708
  {uint32_t ea=c->r[12]+c->r[15]; c->f[0]=RF64(ea);} // 800D070C
  c->r[14]=c->r[0]-c->r[14]; // 800D0710
  c->r[15]=rotl(c->r[14],3)&0xFFFFFFF8u; // 800D0714
  c->r[11]=c->r[7]+0x00000002u; // 800D0718
  c->f[2]=c->f[1]*c->f[0]; // 800D071C
  c->r[14]=c->r[0]-c->r[11]; // 800D0720
  {uint32_t ea=c->r[12]+c->r[15]; c->f[0]=RF64(ea);} // 800D0724
  c->r[15]=rotl(c->r[14],3)&0xFFFFFFF8u; // 800D0728
  {uint32_t ea=c->r[6]+0x00000008u; c->f[1]=RF64(ea);} // 800D072C
  c->r[11]=c->r[7]+0x00000003u; // 800D0730
  c->f[3]=c->f[1]*c->f[0]; // 800D0734
  c->r[14]=c->r[0]-c->r[11]; // 800D0738
  {uint32_t ea=c->r[6]+0x00000010u; c->f[1]=RF64(ea);} // 800D073C
  c->r[14]=rotl(c->r[14],3)&0xFFFFFFF8u; // 800D0740
  c->f[6]=c->f[6]+c->f[2]; // 800D0744
  {uint32_t ea=c->r[12]+c->r[15]; c->f[0]=RF64(ea);} // 800D0748
  c->f[2]=c->f[1]*c->f[0]; // 800D074C
  c->r[11]=c->r[7]+0x00000004u; // 800D0750
  {uint32_t ea=c->r[12]+c->r[14]; c->f[0]=RF64(ea);} // 800D0754
  c->r[11]=c->r[0]-c->r[11]; // 800D0758
  c->f[6]=c->f[6]+c->f[3]; // 800D075C
  {uint32_t ea=c->r[6]+0x00000018u; c->f[1]=RF64(ea);} // 800D0760
  c->r[18]=rotl(c->r[11],3)&0xFFFFFFF8u; // 800D0764
  c->f[1]=c->f[1]*c->f[0]; // 800D0768
  c->r[11]=c->r[7]+0x00000005u; // 800D076C
  c->r[14]=c->r[7]+0x00000006u; // 800D0770
  c->f[6]=c->f[6]+c->f[2]; // 800D0774
  c->r[11]=c->r[0]-c->r[11]; // 800D0778
  c->r[15]=rotl(c->r[11],3)&0xFFFFFFF8u; // 800D077C
  c->r[11]=c->r[7]+0x00000007u; // 800D0780
  c->f[6]=c->f[6]+c->f[1]; // 800D0784
  c->r[14]=c->r[0]-c->r[14]; // 800D0788
  {uint32_t ea=c->r[6]+0x00000020u; c->f[2]=RF64(ea);} // 800D078C
  {uint32_t ea=c->r[12]+c->r[18]; c->f[0]=RF64(ea);} // 800D0790
  c->r[11]=c->r[0]-c->r[11]; // 800D0794
  {uint32_t ea=c->r[6]+0x00000028u; c->f[1]=RF64(ea);} // 800D0798
  c->f[5]=c->f[2]*c->f[0]; // 800D079C
  {uint32_t ea=c->r[12]+c->r[15]; c->f[0]=RF64(ea);} // 800D07A0
  c->r[14]=rotl(c->r[14],3)&0xFFFFFFF8u; // 800D07A4
  {uint32_t ea=c->r[6]+0x00000030u; c->f[3]=RF64(ea);} // 800D07A8
  c->f[4]=c->f[1]*c->f[0]; // 800D07AC
  {uint32_t ea=c->r[12]+c->r[14]; c->f[2]=RF64(ea);} // 800D07B0
  c->f[6]=c->f[6]+c->f[5]; // 800D07B4
  c->r[11]=rotl(c->r[11],3)&0xFFFFFFF8u; // 800D07B8
  {uint32_t ea=c->r[6]+0x00000038u; c->f[1]=RF64(ea);} // 800D07BC
  c->f[2]=c->f[3]*c->f[2]; // 800D07C0
  {uint32_t ea=c->r[12]+c->r[11]; c->f[0]=RF64(ea);} // 800D07C4
  c->r[7]=c->r[7]+0x00000008u; // 800D07C8
  c->f[6]=c->f[6]+c->f[4]; // 800D07CC
  c->r[6]=c->r[6]+0x00000040u; // 800D07D0
  c->f[0]=c->f[1]*c->f[0]; // 800D07D4
  c->f[6]=c->f[6]+c->f[2]; // 800D07D8
  c->f[6]=c->f[6]+c->f[0]; // 800D07DC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D06FC; } // 800D07E0
L_800D07E4:;
  c->r[0]=c->r[22]+0x00000001u; // 800D07E4
  c->r[6]=rotl(c->r[7],3)&0xFFFFFFF8u; // 800D07E8
  c->r[0]=c->r[0]-c->r[7]; // 800D07EC
  c->r[11]=c->r[22]+c->r[9]; // 800D07F0
  c->r[6]=c->r[3]+c->r[6]; // 800D07F4
  c->ctr=c->r[0]; // 800D07F8
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[22]); // 800D07FC
  if (crb(c,1)) { goto L_800D0828; } // 800D0800
L_800D0804:;
  c->r[0]=c->r[11]-c->r[7]; // 800D0804
  {uint32_t ea=c->r[6]+0x00000000u; c->f[1]=RF64(ea);} // 800D0808
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D080C
  c->r[6]=c->r[6]+0x00000008u; // 800D0810
  {uint32_t ea=c->r[12]+c->r[0]; c->f[0]=RF64(ea);} // 800D0814
  c->r[7]=c->r[7]+0x00000001u; // 800D0818
  c->f[0]=c->f[1]*c->f[0]; // 800D081C
  c->f[6]=c->f[6]+c->f[0]; // 800D0820
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D0804; } // 800D0824
L_800D0828:;
  {uint32_t ea=c->r[5]+0x00000000u; WF64(ea,c->f[6]);} // 800D0828
  c->r[5]=c->r[5]+0x00000008u; // 800D082C
  c->r[9]=c->r[9]+0x00000001u; // 800D0830
L_800D0834:;
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[21]); // 800D0834
  if (!crb(c,1)) { IRQCHK(c); goto L_800D0670; } // 800D0838
  c->r[28]=addc(c,~c->r[19],0x00000018u,1); // 800D083C
  c->r[5]=0u-c->r[21]; // 800D0840
  c->r[4]=rotl(c->r[10],2)&0xFFFFFFFCu; // 800D0844
  c->r[0]=addc(c,~c->r[19],0x00000017u,1); // 800D0848
  c->r[3]=rotl(c->r[22],3)&0xFFFFFFF8u; // 800D084C
  c->r[26]=c->r[1]+0x000001A0u; // 800D0850
  {uint32_t ea=c->r[2]+0xFFFF9CF0u; c->f[24]=RF64(ea);} // 800D0854
  c->r[23]=c->r[21]|c->r[21]; // 800D0858
  {uint32_t ea=c->r[2]+0xFFFF9D20u; c->f[25]=RF64(ea);} // 800D085C
  c->r[14]=rotl(c->r[5],0)&0x80000000u; // 800D0860
  {uint32_t ea=c->r[2]+0xFFFF9CF8u; c->f[26]=RF64(ea);} // 800D0864
  c->r[27]=c->r[8]+c->r[4]; // 800D0868
  W32(c->r[1]+0x000002D0u,c->r[0]); // 800D086C
  c->r[26]=c->r[26]+c->r[3]; // 800D0870
  {uint32_t ea=c->r[2]+0xFFFF9D08u; c->f[27]=RF64(ea);} // 800D0874
  c->r[29]=c->r[1]+0x00000010u; // 800D0878
  {uint32_t ea=c->r[2]+0xFFFF9D00u; c->f[28]=RF64(ea);} // 800D087C
  c->r[15]=c->r[1]+0x000001A0u; // 800D0880
  {uint32_t ea=c->r[2]+0xFFFF9D10u; c->f[29]=RF64(ea);} // 800D0884
  c->r[30]=0u+0x01000000u; // 800D0888
  {uint32_t ea=c->r[2]+0xFFFF9D18u; c->f[30]=RF64(ea);} // 800D088C
  c->r[31]=0u+0x80000000u; // 800D0890
  {uint32_t ea=c->r[2]+0xFFFF9CE8u; c->f[31]=RF64(ea);} // 800D0894
L_800D0898:;
  c->r[0]=rotl(c->r[23],3)&0xFFFFFFF8u; // 800D0898
  c->r[3]=c->r[1]+0x00000060u; // 800D089C
  cmps(c,0,(int32_t)c->r[23],0); // 800D08A0
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=RF64(ea);} // 800D08A4
  c->r[4]=c->r[23]|c->r[23]; // 800D08A8
  c->r[5]=0u+0x00000000u; // 800D08AC
  c->r[6]=0u+0x00000000u; // 800D08B0
  if (!crb(c,1)) { goto L_800D0BB0; } // 800D08B4
  cmps(c,0,(int32_t)c->r[23],8); // 800D08B8
  if (!crb(c,1)) { goto L_800D0B40; } // 800D08BC
  cmps(c,0,(int32_t)c->r[23],-1); // 800D08C0
  c->r[0]=0u+0x00000000u; // 800D08C4
  if (!crb(c,1)) { goto L_800D08D0; } // 800D08C8
  c->r[0]=0u+0x00000001u; // 800D08CC
L_800D08D0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D08D0
  if (crb(c,2)) { goto L_800D0B40; } // 800D08D4
  c->r[0]=c->r[23]+0xFFFFFFFFu; // 800D08D8
  c->r[7]=rotl(c->r[23],3)&0xFFFFFFF8u; // 800D08DC
  c->r[3]=c->r[1]+0x00000060u; // 800D08E0
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800D08E4
  c->r[3]=c->r[3]+c->r[7]; // 800D08E8
  c->ctr=c->r[0]; // 800D08EC
  cmps(c,0,(int32_t)c->r[23],8); // 800D08F0
  if (!crb(c,1)) { goto L_800D0B40; } // 800D08F4
L_800D08F8:;
  c->f[0]=c->f[24]*c->f[1]; // 800D08F8
  c->r[0]=c->r[5]+0x00000001u; // 800D08FC
  c->r[9]=c->r[5]+0x00000002u; // 800D0900
  c->r[8]=c->r[5]+0x00000003u; // 800D0904
  c->r[7]=c->r[5]+0x00000004u; // 800D0908
  {uint32_t ea=c->r[3]+0xFFFFFFF8u; c->f[4]=RF64(ea);} // 800D090C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800D0910
  {uint32_t ea=c->r[3]+0xFFFFFFF0u; c->f[3]=RF64(ea);} // 800D0914
  {uint32_t ea=c->r[3]+0xFFFFFFE8u; c->f[2]=RF64(ea);} // 800D0918
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D091C
  {uint32_t ea=c->r[1]+0x00000250u; WF64(ea,c->f[0]);} // 800D0920
  c->r[9]=rotl(c->r[9],2)&0xFFFFFFFCu; // 800D0924
  c->r[10]=R32(c->r[1]+0x00000254u); // 800D0928
  c->r[8]=rotl(c->r[8],2)&0xFFFFFFFCu; // 800D092C
  {uint32_t ea=c->r[3]+0xFFFFFFE0u; c->f[0]=RF64(ea);} // 800D0930
  c->r[7]=rotl(c->r[7],2)&0xFFFFFFFCu; // 800D0934
  c->r[10]=c->r[10]^0x80000000u; // 800D0938
  W32(c->r[1]+0x0000024Cu,c->r[10]); // 800D093C
  {uint32_t ea=c->r[1]+0x00000248u; c->f[5]=RF64(ea);} // 800D0940
  c->f[5]=c->f[5]-c->f[25]; // 800D0944
  c->f[6]=c->f[5]+c->f[4]; // 800D0948
  c->f[5]=c->f[26]*c->f[5]; // 800D094C
  c->f[4]=c->f[24]*c->f[6]; // 800D0950
  c->f[5]=c->f[1]-c->f[5]; // 800D0954
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[4],true)); // 800D0958
  c->f[4]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[5],true)); // 800D095C
  {uint32_t ea=c->r[1]+0x00000260u; WF64(ea,c->f[1]);} // 800D0960
  c->r[10]=R32(c->r[1]+0x00000264u); // 800D0964
  {uint32_t ea=c->r[1]+0x00000258u; WF64(ea,c->f[4]);} // 800D0968
  c->r[10]=c->r[10]^0x80000000u; // 800D096C
  W32(c->r[1]+0x00000244u,c->r[10]); // 800D0970
  c->r[10]=R32(c->r[1]+0x0000025Cu); // 800D0974
  {uint32_t ea=c->r[1]+0x00000240u; c->f[1]=RF64(ea);} // 800D0978
  W32(c->r[29]+c->r[6],c->r[10]); // 800D097C
  c->f[1]=c->f[1]-c->f[25]; // 800D0980
  c->f[4]=c->f[1]+c->f[3]; // 800D0984
  c->f[3]=c->f[26]*c->f[1]; // 800D0988
  c->f[1]=c->f[24]*c->f[4]; // 800D098C
  c->f[3]=c->f[6]-c->f[3]; // 800D0990
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800D0994
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800D0998
  {uint32_t ea=c->r[1]+0x00000270u; WF64(ea,c->f[1]);} // 800D099C
  c->r[10]=R32(c->r[1]+0x00000274u); // 800D09A0
  {uint32_t ea=c->r[1]+0x00000268u; WF64(ea,c->f[3]);} // 800D09A4
  c->r[10]=c->r[10]^0x80000000u; // 800D09A8
  W32(c->r[1]+0x0000024Cu,c->r[10]); // 800D09AC
  c->r[10]=R32(c->r[1]+0x0000026Cu); // 800D09B0
  {uint32_t ea=c->r[1]+0x00000248u; c->f[1]=RF64(ea);} // 800D09B4
  W32(c->r[29]+c->r[0],c->r[10]); // 800D09B8
  c->f[1]=c->f[1]-c->f[25]; // 800D09BC
  c->f[3]=c->f[1]+c->f[2]; // 800D09C0
  c->f[2]=c->f[26]*c->f[1]; // 800D09C4
  c->f[1]=c->f[24]*c->f[3]; // 800D09C8
  c->f[2]=c->f[4]-c->f[2]; // 800D09CC
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800D09D0
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800D09D4
  {uint32_t ea=c->r[1]+0x00000280u; WF64(ea,c->f[1]);} // 800D09D8
  c->r[0]=R32(c->r[1]+0x00000284u); // 800D09DC
  {uint32_t ea=c->r[1]+0x00000278u; WF64(ea,c->f[2]);} // 800D09E0
  c->r[0]=c->r[0]^0x80000000u; // 800D09E4
  W32(c->r[1]+0x00000244u,c->r[0]); // 800D09E8
  c->r[0]=R32(c->r[1]+0x0000027Cu); // 800D09EC
  {uint32_t ea=c->r[1]+0x00000240u; c->f[1]=RF64(ea);} // 800D09F0
  W32(c->r[29]+c->r[9],c->r[0]); // 800D09F4
  c->f[1]=c->f[1]-c->f[25]; // 800D09F8
  c->f[2]=c->f[1]+c->f[0]; // 800D09FC
  c->f[1]=c->f[26]*c->f[1]; // 800D0A00
  c->f[0]=c->f[24]*c->f[2]; // 800D0A04
  c->f[1]=c->f[3]-c->f[1]; // 800D0A08
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800D0A0C
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800D0A10
  {uint32_t ea=c->r[1]+0x00000290u; WF64(ea,c->f[0]);} // 800D0A14
  c->r[0]=R32(c->r[1]+0x00000294u); // 800D0A18
  {uint32_t ea=c->r[1]+0x00000288u; WF64(ea,c->f[1]);} // 800D0A1C
  c->r[0]=c->r[0]^0x80000000u; // 800D0A20
  W32(c->r[1]+0x0000024Cu,c->r[0]); // 800D0A24
  c->r[0]=R32(c->r[1]+0x0000028Cu); // 800D0A28
  {uint32_t ea=c->r[1]+0x00000248u; c->f[0]=RF64(ea);} // 800D0A2C
  W32(c->r[29]+c->r[8],c->r[0]); // 800D0A30
  c->f[1]=c->f[0]-c->f[25]; // 800D0A34
  c->f[0]=c->f[26]*c->f[1]; // 800D0A38
  c->f[0]=c->f[2]-c->f[0]; // 800D0A3C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800D0A40
  {uint32_t ea=c->r[1]+0x00000298u; WF64(ea,c->f[0]);} // 800D0A44
  c->r[0]=R32(c->r[1]+0x0000029Cu); // 800D0A48
  W32(c->r[29]+c->r[7],c->r[0]); // 800D0A4C
  {uint32_t ea=c->r[3]+0xFFFFFFD8u; c->f[0]=RF64(ea);} // 800D0A50
  c->r[8]=c->r[5]+0x00000005u; // 800D0A54
  c->r[0]=c->r[5]+0x00000007u; // 800D0A58
  c->r[7]=c->r[5]+0x00000006u; // 800D0A5C
  c->f[5]=c->f[1]+c->f[0]; // 800D0A60
  c->r[9]=rotl(c->r[8],2)&0xFFFFFFFCu; // 800D0A64
  c->r[8]=rotl(c->r[7],2)&0xFFFFFFFCu; // 800D0A68
  {uint32_t ea=c->r[3]+0xFFFFFFD0u; c->f[2]=RF64(ea);} // 800D0A6C
  {uint32_t ea=c->r[3]+0xFFFFFFC8u; c->f[1]=RF64(ea);} // 800D0A70
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D0A74
  c->f[3]=c->f[24]*c->f[5]; // 800D0A78
  {uint32_t ea=c->r[3]+0xFFFFFFC0u; c->f[0]=RF64(ea); c->r[3]=ea;} // 800D0A7C
  c->r[5]=c->r[5]+0x00000008u; // 800D0A80
  c->r[6]=c->r[6]+0x00000020u; // 800D0A84
  c->r[4]=c->r[4]+0xFFFFFFF8u; // 800D0A88
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800D0A8C
  {uint32_t ea=c->r[1]+0x000002A0u; WF64(ea,c->f[3]);} // 800D0A90
  c->r[7]=R32(c->r[1]+0x000002A4u); // 800D0A94
  c->r[7]=c->r[7]^0x80000000u; // 800D0A98
  W32(c->r[1]+0x00000244u,c->r[7]); // 800D0A9C
  {uint32_t ea=c->r[1]+0x00000240u; c->f[3]=RF64(ea);} // 800D0AA0
  c->f[3]=c->f[3]-c->f[25]; // 800D0AA4
  c->f[4]=c->f[3]+c->f[2]; // 800D0AA8
  c->f[3]=c->f[26]*c->f[3]; // 800D0AAC
  c->f[2]=c->f[24]*c->f[4]; // 800D0AB0
  c->f[3]=c->f[5]-c->f[3]; // 800D0AB4
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800D0AB8
  c->f[3]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[3],true)); // 800D0ABC
  {uint32_t ea=c->r[1]+0x000002B0u; WF64(ea,c->f[2]);} // 800D0AC0
  c->r[7]=R32(c->r[1]+0x000002B4u); // 800D0AC4
  {uint32_t ea=c->r[1]+0x000002A8u; WF64(ea,c->f[3]);} // 800D0AC8
  c->r[7]=c->r[7]^0x80000000u; // 800D0ACC
  W32(c->r[1]+0x0000024Cu,c->r[7]); // 800D0AD0
  c->r[7]=R32(c->r[1]+0x000002ACu); // 800D0AD4
  {uint32_t ea=c->r[1]+0x00000248u; c->f[2]=RF64(ea);} // 800D0AD8
  W32(c->r[29]+c->r[9],c->r[7]); // 800D0ADC
  c->f[2]=c->f[2]-c->f[25]; // 800D0AE0
  c->f[3]=c->f[2]+c->f[1]; // 800D0AE4
  c->f[2]=c->f[26]*c->f[2]; // 800D0AE8
  c->f[1]=c->f[24]*c->f[3]; // 800D0AEC
  c->f[2]=c->f[4]-c->f[2]; // 800D0AF0
  c->f[1]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800D0AF4
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800D0AF8
  {uint32_t ea=c->r[1]+0x000002C0u; WF64(ea,c->f[1]);} // 800D0AFC
  c->r[7]=R32(c->r[1]+0x000002C4u); // 800D0B00
  {uint32_t ea=c->r[1]+0x000002B8u; WF64(ea,c->f[2]);} // 800D0B04
  c->r[7]=c->r[7]^0x80000000u; // 800D0B08
  W32(c->r[1]+0x00000244u,c->r[7]); // 800D0B0C
  c->r[7]=R32(c->r[1]+0x000002BCu); // 800D0B10
  {uint32_t ea=c->r[1]+0x00000240u; c->f[1]=RF64(ea);} // 800D0B14
  W32(c->r[29]+c->r[8],c->r[7]); // 800D0B18
  c->f[1]=c->f[1]-c->f[25]; // 800D0B1C
  c->f[2]=c->f[26]*c->f[1]; // 800D0B20
  c->f[1]=c->f[1]+c->f[0]; // 800D0B24
  c->f[0]=c->f[3]-c->f[2]; // 800D0B28
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800D0B2C
  {uint32_t ea=c->r[1]+0x000002C8u; WF64(ea,c->f[0]);} // 800D0B30
  c->r[7]=R32(c->r[1]+0x000002CCu); // 800D0B34
  W32(c->r[29]+c->r[0],c->r[7]); // 800D0B38
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D08F8; } // 800D0B3C
L_800D0B40:;
  c->r[3]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800D0B40
  c->r[5]=c->r[1]+0x00000010u; // 800D0B44
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 800D0B48
  c->r[6]=c->r[1]+0x00000060u; // 800D0B4C
  c->r[5]=c->r[5]+c->r[3]; // 800D0B50
  c->r[6]=c->r[6]+c->r[0]; // 800D0B54
  c->ctr=c->r[4]; // 800D0B58
  cmps(c,0,(int32_t)c->r[4],0); // 800D0B5C
  if (!crb(c,1)) { goto L_800D0BB0; } // 800D0B60
L_800D0B64:;
  c->f[2]=c->f[24]*c->f[1]; // 800D0B64
  {uint32_t ea=c->r[6]+0xFFFFFFF8u; c->f[0]=RF64(ea); c->r[6]=ea;} // 800D0B68
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800D0B6C
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800D0B70
  {uint32_t ea=c->r[1]+0x000002C8u; WF64(ea,c->f[2]);} // 800D0B74
  c->r[0]=R32(c->r[1]+0x000002CCu); // 800D0B78
  c->r[0]=c->r[0]^0x80000000u; // 800D0B7C
  W32(c->r[1]+0x0000024Cu,c->r[0]); // 800D0B80
  {uint32_t ea=c->r[1]+0x00000248u; c->f[2]=RF64(ea);} // 800D0B84
  c->f[3]=c->f[2]-c->f[25]; // 800D0B88
  c->f[2]=c->f[26]*c->f[3]; // 800D0B8C
  c->f[2]=c->f[1]-c->f[2]; // 800D0B90
  c->f[1]=c->f[3]+c->f[0]; // 800D0B94
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 800D0B98
  {uint32_t ea=c->r[1]+0x000002C0u; WF64(ea,c->f[0]);} // 800D0B9C
  c->r[0]=R32(c->r[1]+0x000002C4u); // 800D0BA0
  W32(c->r[5]+0x00000000u,c->r[0]); // 800D0BA4
  c->r[5]=c->r[5]+0x00000004u; // 800D0BA8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D0B64; } // 800D0BAC
L_800D0BB0:;
  c->r[3]=c->r[19]|c->r[19]; // 800D0BB0
  c->lr=0x800D0BB8u; f_800CE6F8(c); // 800D0BB4
  c->f[23]=c->f[1]; // 800D0BB8
  c->f[1]=c->f[27]*c->f[1]; // 800D0BBC
  c->lr=0x800D0BC4u; f_800D23B8(c); // 800D0BC0
  c->f[0]=c->f[28]*c->f[1]; // 800D0BC4
  cmps(c,0,(int32_t)c->r[19],0); // 800D0BC8
  c->r[18]=0u+0x00000000u; // 800D0BCC
  c->f[23]=c->f[23]-c->f[0]; // 800D0BD0
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[23],true)); // 800D0BD4
  {uint32_t ea=c->r[1]+0x000002C8u; WF64(ea,c->f[0]);} // 800D0BD8
  c->r[20]=R32(c->r[1]+0x000002CCu); // 800D0BDC
  c->r[0]=c->r[20]^0x80000000u; // 800D0BE0
  W32(c->r[1]+0x00000244u,c->r[0]); // 800D0BE4
  {uint32_t ea=c->r[1]+0x00000240u; c->f[0]=RF64(ea);} // 800D0BE8
  c->f[0]=c->f[0]-c->f[25]; // 800D0BEC
  c->f[23]=c->f[23]-c->f[0]; // 800D0BF0
  if (!crb(c,1)) { goto L_800D0C24; } // 800D0BF4
  c->r[0]=rotl(c->r[23],2)&0xFFFFFFFCu; // 800D0BF8
  c->r[4]=c->r[29]+c->r[0]; // 800D0BFC
  c->r[3]=R32(c->r[4]+0xFFFFFFFCu); // 800D0C00
  c->r[5]=sraw(c,c->r[3],(c->r[28])&63); // 800D0C04
  c->r[0]=((c->r[28])&0x20)?0u:(c->r[5]<<((c->r[28])&31)); // 800D0C08
  c->r[3]=c->r[3]-c->r[0]; // 800D0C0C
  c->r[0]=R32(c->r[1]+0x000002D0u); // 800D0C10
  W32(c->r[4]+0xFFFFFFFCu,c->r[3]); // 800D0C14
  c->r[20]=c->r[20]+c->r[5]; // 800D0C18
  c->r[18]=sraw(c,c->r[3],(c->r[0])&63); // 800D0C1C
  goto L_800D0C4C; // 800D0C20
L_800D0C24:;
  if (!crb(c,2)) { goto L_800D0C3C; } // 800D0C24
  c->r[0]=rotl(c->r[23],2)&0xFFFFFFFCu; // 800D0C28
  c->r[3]=c->r[29]+c->r[0]; // 800D0C2C
  c->r[0]=R32(c->r[3]+0xFFFFFFFCu); // 800D0C30
  c->r[18]=sraw(c,c->r[0],23); // 800D0C34
  goto L_800D0C4C; // 800D0C38
L_800D0C3C:;
  fcmp(c,0,c->f[23],c->f[29]); // 800D0C3C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D0C40
  if (!crb(c,2)) { goto L_800D0C4C; } // 800D0C44
  c->r[18]=0u+0x00000002u; // 800D0C48
L_800D0C4C:;
  cmps(c,0,(int32_t)c->r[18],0); // 800D0C4C
  if (!crb(c,1)) { goto L_800D0D08; } // 800D0C50
  c->r[5]=c->r[1]+0x00000010u; // 800D0C54
  c->r[4]=c->r[30]+0xFFFFFFFFu; // 800D0C58
  c->r[0]=0u+0x00000000u; // 800D0C5C
  c->ctr=c->r[23]; // 800D0C60
  cmps(c,0,(int32_t)c->r[23],0); // 800D0C64
  c->r[20]=c->r[20]+0x00000001u; // 800D0C68
  if (!crb(c,1)) { goto L_800D0CA4; } // 800D0C6C
L_800D0C70:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D0C70
  c->r[3]=R32(c->r[5]+0x00000000u); // 800D0C74
  if (!crb(c,2)) { goto L_800D0C94; } // 800D0C78
  cmps(c,0,(int32_t)c->r[3],0); // 800D0C7C
  if (crb(c,2)) { goto L_800D0C9C; } // 800D0C80
  c->r[0]=c->r[30]-c->r[3]; // 800D0C84
  W32(c->r[5]+0x00000000u,c->r[0]); // 800D0C88
  c->r[0]=0u+0x00000001u; // 800D0C8C
  goto L_800D0C9C; // 800D0C90
L_800D0C94:;
  c->r[3]=c->r[4]-c->r[3]; // 800D0C94
  W32(c->r[5]+0x00000000u,c->r[3]); // 800D0C98
L_800D0C9C:;
  c->r[5]=c->r[5]+0x00000004u; // 800D0C9C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D0C70; } // 800D0CA0
L_800D0CA4:;
  cmps(c,0,(int32_t)c->r[19],1); // 800D0CA4
  if (crb(c,2)) { goto L_800D0CB8; } // 800D0CA8
  cmps(c,0,(int32_t)c->r[19],2); // 800D0CAC
  if (crb(c,2)) { goto L_800D0CD0; } // 800D0CB0
  goto L_800D0CE4; // 800D0CB4
L_800D0CB8:;
  c->r[3]=rotl(c->r[23],2)&0xFFFFFFFCu; // 800D0CB8
  c->r[4]=c->r[29]+c->r[3]; // 800D0CBC
  c->r[3]=R32(c->r[4]+0xFFFFFFFCu); // 800D0CC0
  c->r[3]=rotl(c->r[3],0)&0x007FFFFFu; // 800D0CC4
  W32(c->r[4]+0xFFFFFFFCu,c->r[3]); // 800D0CC8
  goto L_800D0CE4; // 800D0CCC
L_800D0CD0:;
  c->r[3]=rotl(c->r[23],2)&0xFFFFFFFCu; // 800D0CD0
  c->r[4]=c->r[29]+c->r[3]; // 800D0CD4
  c->r[3]=R32(c->r[4]+0xFFFFFFFCu); // 800D0CD8
  c->r[3]=rotl(c->r[3],0)&0x003FFFFFu; // 800D0CDC
  W32(c->r[4]+0xFFFFFFFCu,c->r[3]); // 800D0CE0
L_800D0CE4:;
  cmps(c,0,(int32_t)c->r[18],2); // 800D0CE4
  if (!crb(c,2)) { goto L_800D0D08; } // 800D0CE8
  cmps(c,0,(int32_t)c->r[0],0); // 800D0CEC
  c->f[23]=c->f[30]-c->f[23]; // 800D0CF0
  if (crb(c,2)) { goto L_800D0D08; } // 800D0CF4
  c->f[1]=c->f[30]; // 800D0CF8
  c->r[3]=c->r[19]|c->r[19]; // 800D0CFC
  c->lr=0x800D0D04u; f_800CE6F8(c); // 800D0D00
  c->f[23]=c->f[23]-c->f[1]; // 800D0D04
L_800D0D08:;
  fcmp(c,0,c->f[31],c->f[23]); // 800D0D08
  if (!crb(c,2)) { goto L_800D10E0; } // 800D0D0C
  c->r[10]=c->r[23]+0xFFFFFFFFu; // 800D0D10
  c->r[9]=0u+0x00000000u; // 800D0D14
  cmps(c,1,(int32_t)c->r[10],(int32_t)c->r[21]); // 800D0D18
  if (crb(c,4)) { goto L_800D0EA0; } // 800D0D1C
  c->r[7]=c->r[10]-c->r[21]; // 800D0D20
  c->r[0]=c->r[21]+0x00000008u; // 800D0D24
  c->r[8]=c->r[7]+0x00000001u; // 800D0D28
  cmps(c,0,(int32_t)c->r[8],8); // 800D0D2C
  if (!crb(c,1)) { goto L_800D0E6C; } // 800D0D30
  c->r[3]=0u+0x00000000u; // 800D0D34
  c->r[4]=0u+0x00000000u; // 800D0D38
  c->r[5]=0u+0x00000000u; // 800D0D3C
  c->r[6]=0u+0x00000000u; // 800D0D40
  c->r[12]=0u+0x00000000u; // 800D0D44
  if (crb(c,4)) { goto L_800D0D5C; } // 800D0D48
  c->r[11]=c->r[31]+0x00000001u; // 800D0D4C
  cmps(c,0,(int32_t)c->r[21],(int32_t)c->r[11]); // 800D0D50
  if (crb(c,0)) { goto L_800D0D5C; } // 800D0D54
  c->r[12]=0u+0x00000001u; // 800D0D58
L_800D0D5C:;
  cmps(c,0,(int32_t)c->r[12],0); // 800D0D5C
  if (crb(c,2)) { goto L_800D0D78; } // 800D0D60
  c->r[12]=c->r[23]+0xFFFFFFFFu; // 800D0D64
  c->r[11]=c->r[31]+0x00000001u; // 800D0D68
  cmps(c,0,(int32_t)c->r[12],(int32_t)c->r[11]); // 800D0D6C
  if (crb(c,0)) { goto L_800D0D78; } // 800D0D70
  c->r[6]=0u+0x00000001u; // 800D0D74
L_800D0D78:;
  cmps(c,0,(int32_t)c->r[6],0); // 800D0D78
  if (crb(c,2)) { goto L_800D0D90; } // 800D0D7C
  c->r[6]=c->r[21]+0x80000000u; // 800D0D80
  cmpu(c,0,c->r[6],0x00000000u); // 800D0D84
  if (crb(c,2)) { goto L_800D0D90; } // 800D0D88
  c->r[5]=0u+0x00000001u; // 800D0D8C
L_800D0D90:;
  cmps(c,0,(int32_t)c->r[5],0); // 800D0D90
  if (crb(c,2)) { goto L_800D0DC8; } // 800D0D94
  c->r[5]=c->r[23]+0xFFFFFFFFu; // 800D0D98
  c->r[6]=0u+0x00000001u; // 800D0D9C
  c->r[11]=rotl(c->r[5],0)&0x80000000u; // 800D0DA0
  cmps(c,0,(int32_t)c->r[11],(int32_t)c->r[14]); // 800D0DA4
  if (!crb(c,2)) { goto L_800D0DBC; } // 800D0DA8
  c->r[5]=rotl(c->r[7],0)&0x80000000u; // 800D0DAC
  cmps(c,0,(int32_t)c->r[11],(int32_t)c->r[5]); // 800D0DB0
  if (crb(c,2)) { goto L_800D0DBC; } // 800D0DB4
  c->r[6]=0u+0x00000000u; // 800D0DB8
L_800D0DBC:;
  cmps(c,0,(int32_t)c->r[6],0); // 800D0DBC
  if (crb(c,2)) { goto L_800D0DC8; } // 800D0DC0
  c->r[4]=0u+0x00000001u; // 800D0DC4
L_800D0DC8:;
  cmps(c,0,(int32_t)c->r[4],0); // 800D0DC8
  if (crb(c,2)) { goto L_800D0DF4; } // 800D0DCC
  c->r[4]=rotl(c->r[7],0)&0x80000000u; cr0(c,c->r[4]); // 800D0DD0
  c->r[5]=0u+0x00000001u; // 800D0DD4
  if (!crb(c,2)) { goto L_800D0DE8; } // 800D0DD8
  c->r[4]=rotl(c->r[8],0)&0x80000000u; cr0(c,c->r[4]); // 800D0DDC
  if (crb(c,2)) { goto L_800D0DE8; } // 800D0DE0
  c->r[5]=0u+0x00000000u; // 800D0DE4
L_800D0DE8:;
  cmps(c,0,(int32_t)c->r[5],0); // 800D0DE8
  if (crb(c,2)) { goto L_800D0DF4; } // 800D0DEC
  c->r[3]=0u+0x00000001u; // 800D0DF0
L_800D0DF4:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D0DF4
  if (crb(c,2)) { goto L_800D0E6C; } // 800D0DF8
  c->r[4]=c->r[10]+0x00000008u; // 800D0DFC
  c->r[5]=rotl(c->r[10],2)&0xFFFFFFFCu; // 800D0E00
  c->r[4]=c->r[4]-c->r[0]; // 800D0E04
  c->r[3]=c->r[1]+0x00000010u; // 800D0E08
  c->r[4]=rotl(c->r[4],29)&0x1FFFFFFFu; // 800D0E0C
  c->r[3]=c->r[3]+c->r[5]; // 800D0E10
  c->ctr=c->r[4]; // 800D0E14
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[0]); // 800D0E18
  if (crb(c,0)) { goto L_800D0E6C; } // 800D0E1C
L_800D0E20:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 800D0E20
  c->r[10]=c->r[10]+0xFFFFFFF8u; // 800D0E24
  c->r[0]=R32(c->r[3]+0xFFFFFFFCu); // 800D0E28
  c->r[9]=c->r[9]|c->r[4]; // 800D0E2C
  c->r[4]=R32(c->r[3]+0xFFFFFFF8u); // 800D0E30
  c->r[9]=c->r[9]|c->r[0]; // 800D0E34
  c->r[0]=R32(c->r[3]+0xFFFFFFF4u); // 800D0E38
  c->r[9]=c->r[9]|c->r[4]; // 800D0E3C
  c->r[4]=R32(c->r[3]+0xFFFFFFF0u); // 800D0E40
  c->r[9]=c->r[9]|c->r[0]; // 800D0E44
  c->r[0]=R32(c->r[3]+0xFFFFFFECu); // 800D0E48
  c->r[9]=c->r[9]|c->r[4]; // 800D0E4C
  c->r[4]=R32(c->r[3]+0xFFFFFFE8u); // 800D0E50
  c->r[9]=c->r[9]|c->r[0]; // 800D0E54
  c->r[0]=R32(c->r[3]+0xFFFFFFE4u); // 800D0E58
  c->r[9]=c->r[9]|c->r[4]; // 800D0E5C
  c->r[3]=c->r[3]+0xFFFFFFE0u; // 800D0E60
  c->r[9]=c->r[9]|c->r[0]; // 800D0E64
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D0E20; } // 800D0E68
L_800D0E6C:;
  c->r[0]=c->r[10]+0x00000001u; // 800D0E6C
  c->r[3]=rotl(c->r[10],2)&0xFFFFFFFCu; // 800D0E70
  c->r[4]=c->r[1]+0x00000010u; // 800D0E74
  c->r[0]=c->r[0]-c->r[21]; // 800D0E78
  c->r[4]=c->r[4]+c->r[3]; // 800D0E7C
  c->ctr=c->r[0]; // 800D0E80
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[21]); // 800D0E84
  if (crb(c,0)) { goto L_800D0EA0; } // 800D0E88
L_800D0E8C:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 800D0E8C
  c->r[4]=c->r[4]+0xFFFFFFFCu; // 800D0E90
  c->r[10]=c->r[10]+0xFFFFFFFFu; // 800D0E94
  c->r[9]=c->r[9]|c->r[0]; // 800D0E98
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D0E8C; } // 800D0E9C
L_800D0EA0:;
  cmps(c,0,(int32_t)c->r[9],0); // 800D0EA0
  if (!crb(c,2)) { goto L_800D10E0; } // 800D0EA4
  c->r[18]=0u+0x00000001u; // 800D0EA8
  goto L_800D0EB4; // 800D0EAC
L_800D0EB0:;
  c->r[18]=c->r[18]+0x00000001u; // 800D0EB0
L_800D0EB4:;
  c->r[0]=c->r[21]-c->r[18]; // 800D0EB4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D0EB8
  c->r[0]=R32(c->r[29]+c->r[0]); // 800D0EBC
  cmps(c,0,(int32_t)c->r[0],0); // 800D0EC0
  if (crb(c,2)) { IRQCHK(c); goto L_800D0EB0; } // 800D0EC4
  c->r[12]=c->r[23]+0x00000001u; // 800D0EC8
  c->r[7]=c->r[1]+0x00000060u; // 800D0ECC
  c->r[3]=rotl(c->r[12],3)&0xFFFFFFF8u; // 800D0ED0
  c->r[8]=c->r[23]+c->r[18]; // 800D0ED4
  c->r[0]=rotl(c->r[12],2)&0xFFFFFFFCu; // 800D0ED8
  c->r[5]=c->r[27]+c->r[0]; // 800D0EDC
  c->r[6]=c->r[26]+c->r[3]; // 800D0EE0
  c->r[7]=c->r[7]+c->r[3]; // 800D0EE4
  goto L_800D10D0; // 800D0EE8
L_800D0EEC:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 800D0EEC
  cmps(c,1,(int32_t)c->r[22],0); // 800D0EF0
  {uint32_t ea=c->r[2]+0xFFFF9CE8u; c->f[0]=RF64(ea);} // 800D0EF4
  c->r[11]=0u+0x00000000u; // 800D0EF8
  c->r[0]=c->r[0]^0x80000000u; // 800D0EFC
  W32(c->r[1]+0x0000024Cu,c->r[0]); // 800D0F00
  {uint32_t ea=c->r[1]+0x00000248u; c->f[1]=RF64(ea);} // 800D0F04
  c->f[1]=c->f[1]-c->f[25]; // 800D0F08
  {uint32_t ea=c->r[6]+0x00000000u; WF64(ea,c->f[1]);} // 800D0F0C
  if (crb(c,4)) { goto L_800D10BC; } // 800D0F10
  c->r[0]=c->r[22]+0x00000001u; // 800D0F14
  c->r[3]=c->r[22]+0xFFFFFFF8u; // 800D0F18
  cmps(c,0,(int32_t)c->r[0],8); // 800D0F1C
  if (!crb(c,1)) { goto L_800D1078; } // 800D0F20
  c->r[4]=0u+0x00000000u; // 800D0F24
  c->r[9]=0u+0x00000000u; // 800D0F28
  if (crb(c,4)) { goto L_800D0F40; } // 800D0F2C
  c->r[0]=c->r[31]+0xFFFFFFFEu; // 800D0F30
  cmps(c,0,(int32_t)c->r[22],(int32_t)c->r[0]); // 800D0F34
  if (crb(c,1)) { goto L_800D0F40; } // 800D0F38
  c->r[9]=0u+0x00000001u; // 800D0F3C
L_800D0F40:;
  cmps(c,0,(int32_t)c->r[9],0); // 800D0F40
  if (crb(c,2)) { goto L_800D0F6C; } // 800D0F44
  cmps(c,0,(int32_t)c->r[25],0); // 800D0F48
  c->r[0]=0u+0x00000001u; // 800D0F4C
  if (!crb(c,2)) { goto L_800D0F60; } // 800D0F50
  cmps(c,0,(int32_t)c->r[24],0); // 800D0F54
  if (crb(c,2)) { goto L_800D0F60; } // 800D0F58
  c->r[0]=0u+0x00000000u; // 800D0F5C
L_800D0F60:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D0F60
  if (crb(c,2)) { goto L_800D0F6C; } // 800D0F64
  c->r[4]=0u+0x00000001u; // 800D0F68
L_800D0F6C:;
  cmps(c,0,(int32_t)c->r[4],0); // 800D0F6C
  if (crb(c,2)) { goto L_800D1078; } // 800D0F70
  c->r[0]=c->r[3]+0x00000008u; // 800D0F74
  c->r[9]=c->r[16]|c->r[16]; // 800D0F78
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800D0F7C
  c->r[10]=c->r[22]+c->r[12]; // 800D0F80
  c->ctr=c->r[0]; // 800D0F84
  cmps(c,0,(int32_t)c->r[3],0); // 800D0F88
  if (crb(c,0)) { goto L_800D1078; } // 800D0F8C
L_800D0F90:;
  c->r[0]=c->r[10]-c->r[11]; // 800D0F90
  c->r[4]=c->r[11]+0x00000001u; // 800D0F94
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D0F98
  c->r[3]=c->r[11]+0x00000002u; // 800D0F9C
  {uint32_t ea=c->r[9]+0x00000000u; c->f[2]=RF64(ea);} // 800D0FA0
  c->r[3]=c->r[10]-c->r[3]; // 800D0FA4
  {uint32_t ea=c->r[15]+c->r[0]; c->f[1]=RF64(ea);} // 800D0FA8
  c->r[4]=c->r[10]-c->r[4]; // 800D0FAC
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 800D0FB0
  c->r[20]=c->r[11]+0x00000007u; // 800D0FB4
  c->f[3]=c->f[2]*c->f[1]; // 800D0FB8
  {uint32_t ea=c->r[9]+0x00000008u; c->f[2]=RF64(ea);} // 800D0FBC
  {uint32_t ea=c->r[15]+c->r[0]; c->f[1]=RF64(ea);} // 800D0FC0
  c->r[4]=c->r[11]+0x00000003u; // 800D0FC4
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 800D0FC8
  c->r[20]=c->r[10]-c->r[20]; // 800D0FCC
  c->f[4]=c->f[2]*c->f[1]; // 800D0FD0
  c->r[0]=c->r[10]-c->r[4]; // 800D0FD4
  {uint32_t ea=c->r[15]+c->r[3]; c->f[1]=RF64(ea);} // 800D0FD8
  c->r[4]=c->r[11]+0x00000004u; // 800D0FDC
  c->f[0]=c->f[0]+c->f[3]; // 800D0FE0
  {uint32_t ea=c->r[9]+0x00000010u; c->f[2]=RF64(ea);} // 800D0FE4
  c->f[3]=c->f[2]*c->f[1]; // 800D0FE8
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D0FEC
  {uint32_t ea=c->r[15]+c->r[0]; c->f[1]=RF64(ea);} // 800D0FF0
  c->r[4]=c->r[10]-c->r[4]; // 800D0FF4
  c->f[0]=c->f[0]+c->f[4]; // 800D0FF8
  {uint32_t ea=c->r[9]+0x00000018u; c->f[2]=RF64(ea);} // 800D0FFC
  c->r[3]=c->r[11]+0x00000005u; // 800D1000
  c->r[0]=c->r[11]+0x00000006u; // 800D1004
  c->f[0]=c->f[0]+c->f[3]; // 800D1008
  c->r[3]=c->r[10]-c->r[3]; // 800D100C
  c->f[2]=c->f[2]*c->f[1]; // 800D1010
  c->r[4]=rotl(c->r[4],3)&0xFFFFFFF8u; // 800D1014
  c->r[0]=c->r[10]-c->r[0]; // 800D1018
  {uint32_t ea=c->r[9]+0x00000020u; c->f[3]=RF64(ea);} // 800D101C
  {uint32_t ea=c->r[15]+c->r[4]; c->f[1]=RF64(ea);} // 800D1020
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 800D1024
  c->f[6]=c->f[3]*c->f[1]; // 800D1028
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D102C
  {uint32_t ea=c->r[15]+c->r[3]; c->f[1]=RF64(ea);} // 800D1030
  c->r[20]=rotl(c->r[20],3)&0xFFFFFFF8u; // 800D1034
  c->f[0]=c->f[0]+c->f[2]; // 800D1038
  {uint32_t ea=c->r[9]+0x00000028u; c->f[2]=RF64(ea);} // 800D103C
  c->f[5]=c->f[2]*c->f[1]; // 800D1040
  {uint32_t ea=c->r[9]+0x00000030u; c->f[4]=RF64(ea);} // 800D1044
  {uint32_t ea=c->r[15]+c->r[0]; c->f[3]=RF64(ea);} // 800D1048
  c->r[11]=c->r[11]+0x00000008u; // 800D104C
  c->f[0]=c->f[0]+c->f[6]; // 800D1050
  {uint32_t ea=c->r[9]+0x00000038u; c->f[2]=RF64(ea);} // 800D1054
  {uint32_t ea=c->r[15]+c->r[20]; c->f[1]=RF64(ea);} // 800D1058
  c->f[3]=c->f[4]*c->f[3]; // 800D105C
  c->r[9]=c->r[9]+0x00000040u; // 800D1060
  c->f[0]=c->f[0]+c->f[5]; // 800D1064
  c->f[1]=c->f[2]*c->f[1]; // 800D1068
  c->f[0]=c->f[0]+c->f[3]; // 800D106C
  c->f[0]=c->f[0]+c->f[1]; // 800D1070
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D0F90; } // 800D1074
L_800D1078:;
  c->r[4]=c->r[22]+0x00000001u; // 800D1078
  c->r[3]=rotl(c->r[11],3)&0xFFFFFFF8u; // 800D107C
  c->r[4]=c->r[4]-c->r[11]; // 800D1080
  c->r[0]=c->r[22]+c->r[12]; // 800D1084
  c->r[3]=c->r[16]+c->r[3]; // 800D1088
  c->ctr=c->r[4]; // 800D108C
  cmps(c,0,(int32_t)c->r[11],(int32_t)c->r[22]); // 800D1090
  if (crb(c,1)) { goto L_800D10BC; } // 800D1094
L_800D1098:;
  c->r[4]=c->r[0]-c->r[11]; // 800D1098
  {uint32_t ea=c->r[3]+0x00000000u; c->f[2]=RF64(ea);} // 800D109C
  c->r[4]=rotl(c->r[4],3)&0xFFFFFFF8u; // 800D10A0
  c->r[3]=c->r[3]+0x00000008u; // 800D10A4
  {uint32_t ea=c->r[15]+c->r[4]; c->f[1]=RF64(ea);} // 800D10A8
  c->r[11]=c->r[11]+0x00000001u; // 800D10AC
  c->f[1]=c->f[2]*c->f[1]; // 800D10B0
  c->f[0]=c->f[0]+c->f[1]; // 800D10B4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D1098; } // 800D10B8
L_800D10BC:;
  {uint32_t ea=c->r[7]+0x00000000u; WF64(ea,c->f[0]);} // 800D10BC
  c->r[5]=c->r[5]+0x00000004u; // 800D10C0
  c->r[6]=c->r[6]+0x00000008u; // 800D10C4
  c->r[7]=c->r[7]+0x00000008u; // 800D10C8
  c->r[12]=c->r[12]+0x00000001u; // 800D10CC
L_800D10D0:;
  cmps(c,0,(int32_t)c->r[12],(int32_t)c->r[8]); // 800D10D0
  if (!crb(c,1)) { IRQCHK(c); goto L_800D0EEC; } // 800D10D4
  c->r[23]=c->r[23]+c->r[18]; // 800D10D8
  IRQCHK(c); goto L_800D0898; // 800D10DC
L_800D10E0:;
  {uint32_t ea=c->r[2]+0xFFFF9CE8u; c->f[0]=RF64(ea);} // 800D10E0
  fcmp(c,0,c->f[0],c->f[23]); // 800D10E4
  if (!crb(c,2)) { goto L_800D1120; } // 800D10E8
  c->r[23]=c->r[23]+0xFFFFFFFFu; // 800D10EC
  c->r[3]=c->r[1]+0x00000010u; // 800D10F0
  c->r[0]=rotl(c->r[23],2)&0xFFFFFFFCu; // 800D10F4
  c->r[19]=c->r[19]+0xFFFFFFE8u; // 800D10F8
  c->r[3]=c->r[3]+c->r[0]; // 800D10FC
  goto L_800D1110; // 800D1100
L_800D1104:;
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800D1104
  c->r[23]=c->r[23]+0xFFFFFFFFu; // 800D1108
  c->r[19]=c->r[19]+0xFFFFFFE8u; // 800D110C
L_800D1110:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D1110
  cmps(c,0,(int32_t)c->r[0],0); // 800D1114
  if (crb(c,2)) { IRQCHK(c); goto L_800D1104; } // 800D1118
  goto L_800D11BC; // 800D111C
L_800D1120:;
  c->f[1]=c->f[23]; // 800D1120
  c->r[3]=0u-c->r[19]; // 800D1124
  c->lr=0x800D112Cu; f_800CE6F8(c); // 800D1128
  {uint32_t ea=c->r[2]+0xFFFF9CF8u; c->f[3]=RF64(ea);} // 800D112C
  fcmp(c,0,c->f[1],c->f[3]); // 800D1130
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D1134
  if (!crb(c,2)) { goto L_800D11A4; } // 800D1138
  {uint32_t ea=c->r[2]+0xFFFF9CF0u; c->f[0]=RF64(ea);} // 800D113C
  c->r[5]=rotl(c->r[23],2)&0xFFFFFFFCu; // 800D1140
  c->r[23]=c->r[23]+0x00000001u; // 800D1144
  {uint32_t ea=c->r[2]+0xFFFF9D20u; c->f[2]=RF64(ea);} // 800D1148
  c->f[0]=c->f[0]*c->f[1]; // 800D114C
  c->r[4]=c->r[1]+0x00000010u; // 800D1150
  c->r[0]=rotl(c->r[23],2)&0xFFFFFFFCu; // 800D1154
  c->r[19]=c->r[19]+0x00000018u; // 800D1158
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800D115C
  {uint32_t ea=c->r[1]+0x000002C8u; WF64(ea,c->f[0]);} // 800D1160
  c->r[3]=R32(c->r[1]+0x000002CCu); // 800D1164
  c->r[3]=c->r[3]^0x80000000u; // 800D1168
  W32(c->r[1]+0x00000244u,c->r[3]); // 800D116C
  {uint32_t ea=c->r[1]+0x00000240u; c->f[0]=RF64(ea);} // 800D1170
  c->f[0]=c->f[0]-c->f[2]; // 800D1174
  c->f[2]=c->f[3]*c->f[0]; // 800D1178
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800D117C
  c->f[1]=c->f[1]-c->f[2]; // 800D1180
  {uint32_t ea=c->r[1]+0x000002B8u; WF64(ea,c->f[0]);} // 800D1184
  c->r[3]=R32(c->r[1]+0x000002BCu); // 800D1188
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800D118C
  {uint32_t ea=c->r[1]+0x000002C0u; WF64(ea,c->f[0]);} // 800D1190
  c->r[6]=R32(c->r[1]+0x000002C4u); // 800D1194
  W32(c->r[4]+c->r[5],c->r[6]); // 800D1198
  W32(c->r[4]+c->r[0],c->r[3]); // 800D119C
  goto L_800D11BC; // 800D11A0
L_800D11A4:;
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800D11A4
  c->r[0]=rotl(c->r[23],2)&0xFFFFFFFCu; // 800D11A8
  c->r[3]=c->r[1]+0x00000010u; // 800D11AC
  {uint32_t ea=c->r[1]+0x000002C8u; WF64(ea,c->f[0]);} // 800D11B0
  c->r[4]=R32(c->r[1]+0x000002CCu); // 800D11B4
  W32(c->r[3]+c->r[0],c->r[4]); // 800D11B8
L_800D11BC:;
  {uint32_t ea=c->r[2]+0xFFFF9D18u; c->f[1]=RF64(ea);} // 800D11BC
  c->r[3]=c->r[19]|c->r[19]; // 800D11C0
  c->lr=0x800D11C8u; f_800CE6F8(c); // 800D11C4
  cmps(c,0,(int32_t)c->r[23],0); // 800D11C8
  c->r[3]=c->r[23]|c->r[23]; // 800D11CC
  if (crb(c,0)) { goto L_800D13C8; } // 800D11D0
  c->r[0]=c->r[23]+0x00000001u; // 800D11D4
  cmps(c,0,(int32_t)c->r[0],8); // 800D11D8
  if (!crb(c,1)) { goto L_800D136C; } // 800D11DC
  cmps(c,0,(int32_t)c->r[23],-1); // 800D11E0
  c->r[4]=0u+0x00000000u; // 800D11E4
  c->r[0]=0u+0x00000000u; // 800D11E8
  if (!crb(c,1)) { goto L_800D11F4; } // 800D11EC
  c->r[0]=0u+0x00000001u; // 800D11F0
L_800D11F4:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D11F4
  if (crb(c,2)) { goto L_800D1224; } // 800D11F8
  c->r[0]=rotl(c->r[23],0)&0x80000000u; cr0(c,c->r[0]); // 800D11FC
  c->r[5]=0u+0x00000001u; // 800D1200
  if (!crb(c,2)) { goto L_800D1218; } // 800D1204
  c->r[0]=c->r[23]+0x00000001u; // 800D1208
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 800D120C
  if (crb(c,2)) { goto L_800D1218; } // 800D1210
  c->r[5]=0u+0x00000000u; // 800D1214
L_800D1218:;
  cmps(c,0,(int32_t)c->r[5],0); // 800D1218
  if (crb(c,2)) { goto L_800D1224; } // 800D121C
  c->r[4]=0u+0x00000001u; // 800D1220
L_800D1224:;
  cmps(c,0,(int32_t)c->r[4],0); // 800D1224
  if (crb(c,2)) { goto L_800D136C; } // 800D1228
  c->r[5]=rotl(c->r[23],2)&0xFFFFFFFCu; // 800D122C
  c->r[6]=c->r[1]+0x00000010u; // 800D1230
  c->r[4]=rotl(c->r[23],3)&0xFFFFFFF8u; // 800D1234
  c->r[7]=c->r[1]+0x00000060u; // 800D1238
  c->r[0]=rotl(c->r[23],29)&0x1FFFFFFFu; // 800D123C
  c->r[6]=c->r[6]+c->r[5]; // 800D1240
  c->r[7]=c->r[7]+c->r[4]; // 800D1244
  {uint32_t ea=c->r[2]+0xFFFF9D20u; c->f[9]=RF64(ea);} // 800D1248
  {uint32_t ea=c->r[2]+0xFFFF9CF0u; c->f[8]=RF64(ea);} // 800D124C
  c->ctr=c->r[0]; // 800D1250
  cmps(c,0,(int32_t)c->r[23],8); // 800D1254
  if (crb(c,0)) { goto L_800D136C; } // 800D1258
L_800D125C:;
  c->r[4]=R32(c->r[6]+0x00000000u); // 800D125C
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 800D1260
  c->r[0]=R32(c->r[6]+0xFFFFFFFCu); // 800D1264
  c->r[4]=c->r[4]^0x80000000u; // 800D1268
  W32(c->r[1]+0x0000024Cu,c->r[4]); // 800D126C
  c->r[4]=c->r[0]^0x80000000u; // 800D1270
  c->r[0]=R32(c->r[6]+0xFFFFFFF8u); // 800D1274
  {uint32_t ea=c->r[1]+0x00000248u; c->f[0]=RF64(ea);} // 800D1278
  W32(c->r[1]+0x00000244u,c->r[4]); // 800D127C
  c->r[4]=c->r[0]^0x80000000u; // 800D1280
  c->f[0]=c->f[0]-c->f[9]; // 800D1284
  c->r[0]=R32(c->r[6]+0xFFFFFFF4u); // 800D1288
  {uint32_t ea=c->r[1]+0x00000240u; c->f[2]=RF64(ea);} // 800D128C
  c->r[0]=c->r[0]^0x80000000u; // 800D1290
  W32(c->r[1]+0x0000024Cu,c->r[4]); // 800D1294
  c->f[5]=c->f[1]*c->f[0]; // 800D1298
  {uint32_t ea=c->r[1]+0x00000248u; c->f[0]=RF64(ea);} // 800D129C
  c->f[1]=c->f[1]*c->f[8]; // 800D12A0
  W32(c->r[1]+0x00000244u,c->r[0]); // 800D12A4
  c->r[0]=R32(c->r[6]+0xFFFFFFF0u); // 800D12A8
  c->f[3]=c->f[2]-c->f[9]; // 800D12AC
  c->f[4]=c->f[0]-c->f[9]; // 800D12B0
  c->r[0]=c->r[0]^0x80000000u; // 800D12B4
  c->f[7]=c->f[1]*c->f[3]; // 800D12B8
  {uint32_t ea=c->r[1]+0x00000240u; c->f[2]=RF64(ea);} // 800D12BC
  W32(c->r[1]+0x0000024Cu,c->r[0]); // 800D12C0
  c->f[1]=c->f[1]*c->f[8]; // 800D12C4
  c->r[0]=R32(c->r[6]+0xFFFFFFECu); // 800D12C8
  {uint32_t ea=c->r[7]+0x00000000u; WF64(ea,c->f[5]);} // 800D12CC
  c->f[3]=c->f[2]-c->f[9]; // 800D12D0
  {uint32_t ea=c->r[1]+0x00000248u; c->f[0]=RF64(ea);} // 800D12D4
  c->f[6]=c->f[1]*c->f[4]; // 800D12D8
  c->r[0]=c->r[0]^0x80000000u; // 800D12DC
  W32(c->r[1]+0x00000244u,c->r[0]); // 800D12E0
  c->f[1]=c->f[1]*c->f[8]; // 800D12E4
  c->r[0]=R32(c->r[6]+0xFFFFFFE8u); // 800D12E8
  c->f[4]=c->f[0]-c->f[9]; // 800D12EC
  c->r[4]=c->r[0]^0x80000000u; // 800D12F0
  W32(c->r[1]+0x0000024Cu,c->r[4]); // 800D12F4
  c->r[0]=R32(c->r[6]+0xFFFFFFE4u); // 800D12F8
  c->f[5]=c->f[1]*c->f[3]; // 800D12FC
  {uint32_t ea=c->r[1]+0x00000240u; c->f[2]=RF64(ea);} // 800D1300
  {uint32_t ea=c->r[7]+0xFFFFFFF8u; WF64(ea,c->f[7]);} // 800D1304
  c->r[0]=c->r[0]^0x80000000u; // 800D1308
  c->f[1]=c->f[1]*c->f[8]; // 800D130C
  {uint32_t ea=c->r[1]+0x00000248u; c->f[0]=RF64(ea);} // 800D1310
  c->f[3]=c->f[2]-c->f[9]; // 800D1314
  {uint32_t ea=c->r[7]+0xFFFFFFF0u; WF64(ea,c->f[6]);} // 800D1318
  c->f[4]=c->f[1]*c->f[4]; // 800D131C
  c->r[6]=c->r[6]+0xFFFFFFE0u; // 800D1320
  {uint32_t ea=c->r[7]+0xFFFFFFE8u; WF64(ea,c->f[5]);} // 800D1324
  c->f[1]=c->f[1]*c->f[8]; // 800D1328
  W32(c->r[1]+0x00000244u,c->r[0]); // 800D132C
  c->f[2]=c->f[0]-c->f[9]; // 800D1330
  {uint32_t ea=c->r[1]+0x00000240u; c->f[0]=RF64(ea);} // 800D1334
  c->f[3]=c->f[1]*c->f[3]; // 800D1338
  {uint32_t ea=c->r[7]+0xFFFFFFE0u; WF64(ea,c->f[4]);} // 800D133C
  c->f[1]=c->f[1]*c->f[8]; // 800D1340
  {uint32_t ea=c->r[7]+0xFFFFFFD8u; WF64(ea,c->f[3]);} // 800D1344
  c->f[0]=c->f[0]-c->f[9]; // 800D1348
  c->f[2]=c->f[1]*c->f[2]; // 800D134C
  c->f[1]=c->f[1]*c->f[8]; // 800D1350
  {uint32_t ea=c->r[7]+0xFFFFFFD0u; WF64(ea,c->f[2]);} // 800D1354
  c->f[0]=c->f[1]*c->f[0]; // 800D1358
  c->f[1]=c->f[1]*c->f[8]; // 800D135C
  {uint32_t ea=c->r[7]+0xFFFFFFC8u; WF64(ea,c->f[0]);} // 800D1360
  c->r[7]=c->r[7]+0xFFFFFFC0u; // 800D1364
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D125C; } // 800D1368
L_800D136C:;
  c->r[5]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D136C
  c->r[6]=c->r[1]+0x00000010u; // 800D1370
  c->r[4]=rotl(c->r[3],3)&0xFFFFFFF8u; // 800D1374
  c->r[7]=c->r[1]+0x00000060u; // 800D1378
  c->r[0]=c->r[3]+0x00000001u; // 800D137C
  c->r[6]=c->r[6]+c->r[5]; // 800D1380
  c->r[7]=c->r[7]+c->r[4]; // 800D1384
  {uint32_t ea=c->r[2]+0xFFFF9D20u; c->f[3]=RF64(ea);} // 800D1388
  {uint32_t ea=c->r[2]+0xFFFF9CF0u; c->f[0]=RF64(ea);} // 800D138C
  c->ctr=c->r[0]; // 800D1390
  cmps(c,0,(int32_t)c->r[3],0); // 800D1394
  if (crb(c,0)) { goto L_800D13C8; } // 800D1398
L_800D139C:;
  c->r[0]=R32(c->r[6]+0x00000000u); // 800D139C
  c->r[6]=c->r[6]+0xFFFFFFFCu; // 800D13A0
  c->r[0]=c->r[0]^0x80000000u; // 800D13A4
  W32(c->r[1]+0x0000024Cu,c->r[0]); // 800D13A8
  {uint32_t ea=c->r[1]+0x00000248u; c->f[2]=RF64(ea);} // 800D13AC
  c->f[2]=c->f[2]-c->f[3]; // 800D13B0
  c->f[2]=c->f[1]*c->f[2]; // 800D13B4
  c->f[1]=c->f[1]*c->f[0]; // 800D13B8
  {uint32_t ea=c->r[7]+0x00000000u; WF64(ea,c->f[2]);} // 800D13BC
  c->r[7]=c->r[7]+0xFFFFFFF8u; // 800D13C0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D139C; } // 800D13C4
L_800D13C8:;
  c->r[0]=c->r[23]+0x00000001u; // 800D13C8
  c->r[8]=c->r[23]|c->r[23]; // 800D13CC
  c->r[4]=c->r[1]+0x00000100u; // 800D13D0
  c->r[3]=rotl(c->r[23],3)&0xFFFFFFF8u; // 800D13D4
  c->r[5]=0u+0x80380000u; // 800D13D8
  c->ctr=c->r[0]; // 800D13DC
  cmps(c,0,(int32_t)c->r[23],0); // 800D13E0
  if (crb(c,0)) { goto L_800D1444; } // 800D13E4
L_800D13E8:;
  c->r[6]=c->r[1]+0x00000060u; // 800D13E8
  {uint32_t ea=c->r[2]+0xFFFF9CE8u; c->f[2]=RF64(ea);} // 800D13EC
  c->r[6]=c->r[6]+c->r[3]; // 800D13F0
  c->r[7]=c->r[5]+0xFFFFDE70u; // 800D13F4
  c->r[0]=c->r[23]-c->r[8]; // 800D13F8
  c->r[9]=0u+0x00000000u; // 800D13FC
  goto L_800D1420; // 800D1400
L_800D1404:;
  {uint32_t ea=c->r[7]+0x00000000u; c->f[1]=RF64(ea);} // 800D1404
  c->r[7]=c->r[7]+0x00000008u; // 800D1408
  {uint32_t ea=c->r[6]+0x00000000u; c->f[0]=RF64(ea);} // 800D140C
  c->r[6]=c->r[6]+0x00000008u; // 800D1410
  c->r[9]=c->r[9]+0x00000001u; // 800D1414
  c->f[0]=c->f[1]*c->f[0]; // 800D1418
  c->f[2]=c->f[2]+c->f[0]; // 800D141C
L_800D1420:;
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[21]); // 800D1420
  if (crb(c,1)) { goto L_800D1430; } // 800D1424
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[0]); // 800D1428
  if (!crb(c,1)) { IRQCHK(c); goto L_800D1404; } // 800D142C
L_800D1430:;
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D1430
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 800D1434
  {uint32_t ea=c->r[4]+c->r[0]; WF64(ea,c->f[2]);} // 800D1438
  c->r[8]=c->r[8]+0xFFFFFFFFu; // 800D143C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D13E8; } // 800D1440
L_800D1444:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D1444
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800D1448
  cmpu(c,0,c->r[0],0x00000001u); // 800D144C
  if (!crb(c,1)) { goto L_800D1578; } // 800D1450
  c->r[0]=c->r[3]|c->r[3]; cr0(c,c->r[0]); // 800D1454
  if (crb(c,2)) { goto L_800D1468; } // 800D1458
  cmps(c,0,(int32_t)c->r[0],3); // 800D145C
  if (crb(c,2)) { goto L_800D17F0; } // 800D1460
  goto L_800D1C18; // 800D1464
L_800D1468:;
  cmps(c,0,(int32_t)c->r[23],0); // 800D1468
  {uint32_t ea=c->r[2]+0xFFFF9CE8u; c->f[6]=RF64(ea);} // 800D146C
  if (crb(c,0)) { goto L_800D1560; } // 800D1470
  c->r[0]=c->r[23]+0x00000001u; // 800D1474
  cmps(c,0,(int32_t)c->r[0],8); // 800D1478
  if (!crb(c,1)) { goto L_800D1534; } // 800D147C
  cmps(c,0,(int32_t)c->r[23],-1); // 800D1480
  c->r[3]=0u+0x00000000u; // 800D1484
  c->r[0]=0u+0x00000000u; // 800D1488
  if (!crb(c,1)) { goto L_800D1494; } // 800D148C
  c->r[0]=0u+0x00000001u; // 800D1490
L_800D1494:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D1494
  if (crb(c,2)) { goto L_800D14C4; } // 800D1498
  c->r[0]=rotl(c->r[23],0)&0x80000000u; cr0(c,c->r[0]); // 800D149C
  c->r[4]=0u+0x00000001u; // 800D14A0
  if (!crb(c,2)) { goto L_800D14B8; } // 800D14A4
  c->r[0]=c->r[23]+0x00000001u; // 800D14A8
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 800D14AC
  if (crb(c,2)) { goto L_800D14B8; } // 800D14B0
  c->r[4]=0u+0x00000000u; // 800D14B4
L_800D14B8:;
  cmps(c,0,(int32_t)c->r[4],0); // 800D14B8
  if (crb(c,2)) { goto L_800D14C4; } // 800D14BC
  c->r[3]=0u+0x00000001u; // 800D14C0
L_800D14C4:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D14C4
  if (crb(c,2)) { goto L_800D1534; } // 800D14C8
  c->r[3]=rotl(c->r[23],3)&0xFFFFFFF8u; // 800D14CC
  c->r[4]=c->r[1]+0x00000100u; // 800D14D0
  c->r[0]=rotl(c->r[23],29)&0x1FFFFFFFu; // 800D14D4
  c->r[4]=c->r[4]+c->r[3]; // 800D14D8
  c->ctr=c->r[0]; // 800D14DC
  cmps(c,0,(int32_t)c->r[23],8); // 800D14E0
  if (crb(c,0)) { goto L_800D1534; } // 800D14E4
L_800D14E8:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=RF64(ea);} // 800D14E8
  c->r[23]=c->r[23]+0xFFFFFFF8u; // 800D14EC
  {uint32_t ea=c->r[4]+0xFFFFFFF8u; c->f[0]=RF64(ea);} // 800D14F0
  c->f[6]=c->f[6]+c->f[1]; // 800D14F4
  {uint32_t ea=c->r[4]+0xFFFFFFF0u; c->f[5]=RF64(ea);} // 800D14F8
  {uint32_t ea=c->r[4]+0xFFFFFFE8u; c->f[4]=RF64(ea);} // 800D14FC
  {uint32_t ea=c->r[4]+0xFFFFFFE0u; c->f[3]=RF64(ea);} // 800D1500
  c->f[6]=c->f[6]+c->f[0]; // 800D1504
  {uint32_t ea=c->r[4]+0xFFFFFFD8u; c->f[2]=RF64(ea);} // 800D1508
  {uint32_t ea=c->r[4]+0xFFFFFFD0u; c->f[1]=RF64(ea);} // 800D150C
  {uint32_t ea=c->r[4]+0xFFFFFFC8u; c->f[0]=RF64(ea);} // 800D1510
  c->r[4]=c->r[4]+0xFFFFFFC0u; // 800D1514
  c->f[6]=c->f[6]+c->f[5]; // 800D1518
  c->f[6]=c->f[6]+c->f[4]; // 800D151C
  c->f[6]=c->f[6]+c->f[3]; // 800D1520
  c->f[6]=c->f[6]+c->f[2]; // 800D1524
  c->f[6]=c->f[6]+c->f[1]; // 800D1528
  c->f[6]=c->f[6]+c->f[0]; // 800D152C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D14E8; } // 800D1530
L_800D1534:;
  c->r[3]=rotl(c->r[23],3)&0xFFFFFFF8u; // 800D1534
  c->r[4]=c->r[1]+0x00000100u; // 800D1538
  c->r[0]=c->r[23]+0x00000001u; // 800D153C
  c->r[4]=c->r[4]+c->r[3]; // 800D1540
  c->ctr=c->r[0]; // 800D1544
  cmps(c,0,(int32_t)c->r[23],0); // 800D1548
  if (crb(c,0)) { goto L_800D1560; } // 800D154C
L_800D1550:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=RF64(ea);} // 800D1550
  c->r[4]=c->r[4]+0xFFFFFFF8u; // 800D1554
  c->f[6]=c->f[6]+c->f[0]; // 800D1558
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D1550; } // 800D155C
L_800D1560:;
  cmps(c,0,(int32_t)c->r[18],0); // 800D1560
  if (!crb(c,2)) { goto L_800D156C; } // 800D1564
  goto L_800D1570; // 800D1568
L_800D156C:;
  c->f[6]=-c->f[6]; // 800D156C
L_800D1570:;
  {uint32_t ea=c->r[17]+0x00000000u; WF64(ea,c->f[6]);} // 800D1570
  goto L_800D1C18; // 800D1574
L_800D1578:;
  cmps(c,0,(int32_t)c->r[23],0); // 800D1578
  {uint32_t ea=c->r[2]+0xFFFF9CE8u; c->f[6]=RF64(ea);} // 800D157C
  c->r[5]=c->r[23]|c->r[23]; // 800D1580
  if (crb(c,0)) { goto L_800D1674; } // 800D1584
  c->r[0]=c->r[23]+0x00000001u; // 800D1588
  cmps(c,0,(int32_t)c->r[0],8); // 800D158C
  if (!crb(c,1)) { goto L_800D1648; } // 800D1590
  cmps(c,0,(int32_t)c->r[23],-1); // 800D1594
  c->r[3]=0u+0x00000000u; // 800D1598
  c->r[0]=0u+0x00000000u; // 800D159C
  if (!crb(c,1)) { goto L_800D15A8; } // 800D15A0
  c->r[0]=0u+0x00000001u; // 800D15A4
L_800D15A8:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D15A8
  if (crb(c,2)) { goto L_800D15D8; } // 800D15AC
  c->r[0]=rotl(c->r[23],0)&0x80000000u; cr0(c,c->r[0]); // 800D15B0
  c->r[4]=0u+0x00000001u; // 800D15B4
  if (!crb(c,2)) { goto L_800D15CC; } // 800D15B8
  c->r[0]=c->r[23]+0x00000001u; // 800D15BC
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 800D15C0
  if (crb(c,2)) { goto L_800D15CC; } // 800D15C4
  c->r[4]=0u+0x00000000u; // 800D15C8
L_800D15CC:;
  cmps(c,0,(int32_t)c->r[4],0); // 800D15CC
  if (crb(c,2)) { goto L_800D15D8; } // 800D15D0
  c->r[3]=0u+0x00000001u; // 800D15D4
L_800D15D8:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D15D8
  if (crb(c,2)) { goto L_800D1648; } // 800D15DC
  c->r[3]=rotl(c->r[23],3)&0xFFFFFFF8u; // 800D15E0
  c->r[4]=c->r[1]+0x00000100u; // 800D15E4
  c->r[0]=rotl(c->r[23],29)&0x1FFFFFFFu; // 800D15E8
  c->r[4]=c->r[4]+c->r[3]; // 800D15EC
  c->ctr=c->r[0]; // 800D15F0
  cmps(c,0,(int32_t)c->r[23],8); // 800D15F4
  if (crb(c,0)) { goto L_800D1648; } // 800D15F8
L_800D15FC:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=RF64(ea);} // 800D15FC
  c->r[5]=c->r[5]+0xFFFFFFF8u; // 800D1600
  {uint32_t ea=c->r[4]+0xFFFFFFF8u; c->f[0]=RF64(ea);} // 800D1604
  c->f[6]=c->f[6]+c->f[1]; // 800D1608
  {uint32_t ea=c->r[4]+0xFFFFFFF0u; c->f[5]=RF64(ea);} // 800D160C
  {uint32_t ea=c->r[4]+0xFFFFFFE8u; c->f[4]=RF64(ea);} // 800D1610
  {uint32_t ea=c->r[4]+0xFFFFFFE0u; c->f[3]=RF64(ea);} // 800D1614
  c->f[6]=c->f[6]+c->f[0]; // 800D1618
  {uint32_t ea=c->r[4]+0xFFFFFFD8u; c->f[2]=RF64(ea);} // 800D161C
  {uint32_t ea=c->r[4]+0xFFFFFFD0u; c->f[1]=RF64(ea);} // 800D1620
  {uint32_t ea=c->r[4]+0xFFFFFFC8u; c->f[0]=RF64(ea);} // 800D1624
  c->r[4]=c->r[4]+0xFFFFFFC0u; // 800D1628
  c->f[6]=c->f[6]+c->f[5]; // 800D162C
  c->f[6]=c->f[6]+c->f[4]; // 800D1630
  c->f[6]=c->f[6]+c->f[3]; // 800D1634
  c->f[6]=c->f[6]+c->f[2]; // 800D1638
  c->f[6]=c->f[6]+c->f[1]; // 800D163C
  c->f[6]=c->f[6]+c->f[0]; // 800D1640
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D15FC; } // 800D1644
L_800D1648:;
  c->r[3]=rotl(c->r[5],3)&0xFFFFFFF8u; // 800D1648
  c->r[4]=c->r[1]+0x00000100u; // 800D164C
  c->r[0]=c->r[5]+0x00000001u; // 800D1650
  c->r[4]=c->r[4]+c->r[3]; // 800D1654
  c->ctr=c->r[0]; // 800D1658
  cmps(c,0,(int32_t)c->r[5],0); // 800D165C
  if (crb(c,0)) { goto L_800D1674; } // 800D1660
L_800D1664:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=RF64(ea);} // 800D1664
  c->r[4]=c->r[4]+0xFFFFFFF8u; // 800D1668
  c->f[6]=c->f[6]+c->f[0]; // 800D166C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D1664; } // 800D1670
L_800D1674:;
  cmps(c,0,(int32_t)c->r[18],0); // 800D1674
  if (!crb(c,2)) { goto L_800D1684; } // 800D1678
  c->f[1]=c->f[6]; // 800D167C
  goto L_800D1688; // 800D1680
L_800D1684:;
  c->f[1]=-c->f[6]; // 800D1684
L_800D1688:;
  {uint32_t ea=c->r[1]+0x00000100u; c->f[0]=RF64(ea);} // 800D1688
  cmps(c,1,(int32_t)c->r[23],1); // 800D168C
  {uint32_t ea=c->r[17]+0x00000000u; WF64(ea,c->f[1]);} // 800D1690
  c->r[8]=0u+0x00000001u; // 800D1694
  c->f[6]=c->f[0]-c->f[6]; // 800D1698
  if (crb(c,4)) { goto L_800D17D8; } // 800D169C
  cmps(c,0,(int32_t)c->r[23],8); // 800D16A0
  c->r[4]=c->r[23]+0xFFFFFFF8u; // 800D16A4
  if (!crb(c,1)) { goto L_800D17A8; } // 800D16A8
  c->r[5]=0u+0x00000000u; // 800D16AC
  c->r[6]=0u+0x00000000u; // 800D16B0
  c->r[7]=0u+0x00000000u; // 800D16B4
  if (crb(c,4)) { goto L_800D16D0; } // 800D16B8
  c->r[3]=0u+0x80000000u; // 800D16BC
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 800D16C0
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[0]); // 800D16C4
  if (crb(c,1)) { goto L_800D16D0; } // 800D16C8
  c->r[7]=0u+0x00000001u; // 800D16CC
L_800D16D0:;
  cmps(c,0,(int32_t)c->r[7],0); // 800D16D0
  if (crb(c,2)) { goto L_800D170C; } // 800D16D4
  c->r[7]=rotl(c->r[23],0)&0x80000000u; // 800D16D8
  c->r[3]=0u+0x00000001u; // 800D16DC
  c->r[0]=c->r[7]+0x80000000u; // 800D16E0
  cmpu(c,0,c->r[0],0x00000000u); // 800D16E4
  if (!crb(c,2)) { goto L_800D1700; } // 800D16E8
  c->r[0]=c->r[23]+0xFFFFFFFFu; // 800D16EC
  c->r[0]=rotl(c->r[0],0)&0x80000000u; // 800D16F0
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 800D16F4
  if (crb(c,2)) { goto L_800D1700; } // 800D16F8
  c->r[3]=0u+0x00000000u; // 800D16FC
L_800D1700:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D1700
  if (crb(c,2)) { goto L_800D170C; } // 800D1704
  c->r[6]=0u+0x00000001u; // 800D1708
L_800D170C:;
  cmps(c,0,(int32_t)c->r[6],0); // 800D170C
  if (crb(c,2)) { goto L_800D173C; } // 800D1710
  c->r[0]=c->r[23]+0xFFFFFFFFu; // 800D1714
  c->r[3]=0u+0x00000001u; // 800D1718
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 800D171C
  if (!crb(c,2)) { goto L_800D1730; } // 800D1720
  c->r[0]=rotl(c->r[23],0)&0x80000000u; cr0(c,c->r[0]); // 800D1724
  if (crb(c,2)) { goto L_800D1730; } // 800D1728
  c->r[3]=0u+0x00000000u; // 800D172C
L_800D1730:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D1730
  if (crb(c,2)) { goto L_800D173C; } // 800D1734
  c->r[5]=0u+0x00000001u; // 800D1738
L_800D173C:;
  cmps(c,0,(int32_t)c->r[5],0); // 800D173C
  if (crb(c,2)) { goto L_800D17A8; } // 800D1740
  c->r[0]=c->r[4]+0x00000007u; // 800D1744
  c->r[3]=c->r[1]+0x00000108u; // 800D1748
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800D174C
  c->ctr=c->r[0]; // 800D1750
  cmps(c,0,(int32_t)c->r[4],1); // 800D1754
  if (crb(c,0)) { goto L_800D17A8; } // 800D1758
L_800D175C:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=RF64(ea);} // 800D175C
  c->r[8]=c->r[8]+0x00000008u; // 800D1760
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=RF64(ea);} // 800D1764
  c->f[6]=c->f[6]+c->f[1]; // 800D1768
  {uint32_t ea=c->r[3]+0x00000010u; c->f[5]=RF64(ea);} // 800D176C
  {uint32_t ea=c->r[3]+0x00000018u; c->f[4]=RF64(ea);} // 800D1770
  {uint32_t ea=c->r[3]+0x00000020u; c->f[3]=RF64(ea);} // 800D1774
  c->f[6]=c->f[6]+c->f[0]; // 800D1778
  {uint32_t ea=c->r[3]+0x00000028u; c->f[2]=RF64(ea);} // 800D177C
  {uint32_t ea=c->r[3]+0x00000030u; c->f[1]=RF64(ea);} // 800D1780
  {uint32_t ea=c->r[3]+0x00000038u; c->f[0]=RF64(ea);} // 800D1784
  c->r[3]=c->r[3]+0x00000040u; // 800D1788
  c->f[6]=c->f[6]+c->f[5]; // 800D178C
  c->f[6]=c->f[6]+c->f[4]; // 800D1790
  c->f[6]=c->f[6]+c->f[3]; // 800D1794
  c->f[6]=c->f[6]+c->f[2]; // 800D1798
  c->f[6]=c->f[6]+c->f[1]; // 800D179C
  c->f[6]=c->f[6]+c->f[0]; // 800D17A0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D175C; } // 800D17A4
L_800D17A8:;
  c->r[0]=c->r[23]+0x00000001u; // 800D17A8
  c->r[3]=rotl(c->r[8],3)&0xFFFFFFF8u; // 800D17AC
  c->r[4]=c->r[1]+0x00000100u; // 800D17B0
  c->r[0]=c->r[0]-c->r[8]; // 800D17B4
  c->r[4]=c->r[4]+c->r[3]; // 800D17B8
  c->ctr=c->r[0]; // 800D17BC
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[23]); // 800D17C0
  if (crb(c,1)) { goto L_800D17D8; } // 800D17C4
L_800D17C8:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=RF64(ea);} // 800D17C8
  c->r[4]=c->r[4]+0x00000008u; // 800D17CC
  c->f[6]=c->f[6]+c->f[0]; // 800D17D0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D17C8; } // 800D17D4
L_800D17D8:;
  cmps(c,0,(int32_t)c->r[18],0); // 800D17D8
  if (!crb(c,2)) { goto L_800D17E4; } // 800D17DC
  goto L_800D17E8; // 800D17E0
L_800D17E4:;
  c->f[6]=-c->f[6]; // 800D17E4
L_800D17E8:;
  {uint32_t ea=c->r[17]+0x00000008u; WF64(ea,c->f[6]);} // 800D17E8
  goto L_800D1C18; // 800D17EC
L_800D17F0:;
  cmps(c,0,(int32_t)c->r[23],0); // 800D17F0
  c->r[5]=c->r[23]|c->r[23]; // 800D17F4
  if (!crb(c,1)) { goto L_800D1924; } // 800D17F8
  cmps(c,0,(int32_t)c->r[23],8); // 800D17FC
  if (!crb(c,1)) { goto L_800D18EC; } // 800D1800
  cmps(c,0,(int32_t)c->r[23],-1); // 800D1804
  c->r[0]=0u+0x00000000u; // 800D1808
  if (!crb(c,1)) { goto L_800D1814; } // 800D180C
  c->r[0]=0u+0x00000001u; // 800D1810
L_800D1814:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D1814
  if (crb(c,2)) { goto L_800D18EC; } // 800D1818
  c->r[0]=c->r[23]+0xFFFFFFFFu; // 800D181C
  c->r[3]=rotl(c->r[23],3)&0xFFFFFFF8u; // 800D1820
  c->r[4]=c->r[1]+0x00000100u; // 800D1824
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800D1828
  c->r[4]=c->r[4]+c->r[3]; // 800D182C
  c->ctr=c->r[0]; // 800D1830
  cmps(c,0,(int32_t)c->r[23],8); // 800D1834
  if (!crb(c,1)) { goto L_800D18EC; } // 800D1838
L_800D183C:;
  {uint32_t ea=c->r[4]+0xFFFFFFF8u; c->f[0]=RF64(ea);} // 800D183C
  c->r[5]=c->r[5]+0xFFFFFFF8u; // 800D1840
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=RF64(ea);} // 800D1844
  c->f[2]=c->f[0]+c->f[1]; // 800D1848
  c->f[0]=c->f[0]-c->f[2]; // 800D184C
  c->f[0]=c->f[1]+c->f[0]; // 800D1850
  {uint32_t ea=c->r[4]+0x00000000u; WF64(ea,c->f[0]);} // 800D1854
  {uint32_t ea=c->r[4]+0xFFFFFFF0u; c->f[0]=RF64(ea);} // 800D1858
  c->f[1]=c->f[0]+c->f[2]; // 800D185C
  c->f[0]=c->f[0]-c->f[1]; // 800D1860
  c->f[0]=c->f[2]+c->f[0]; // 800D1864
  {uint32_t ea=c->r[4]+0xFFFFFFF8u; WF64(ea,c->f[0]);} // 800D1868
  {uint32_t ea=c->r[4]+0xFFFFFFE8u; c->f[0]=RF64(ea);} // 800D186C
  c->f[2]=c->f[0]+c->f[1]; // 800D1870
  c->f[0]=c->f[0]-c->f[2]; // 800D1874
  c->f[0]=c->f[1]+c->f[0]; // 800D1878
  {uint32_t ea=c->r[4]+0xFFFFFFF0u; WF64(ea,c->f[0]);} // 800D187C
  {uint32_t ea=c->r[4]+0xFFFFFFE0u; c->f[0]=RF64(ea);} // 800D1880
  c->f[1]=c->f[0]+c->f[2]; // 800D1884
  c->f[0]=c->f[0]-c->f[1]; // 800D1888
  c->f[0]=c->f[2]+c->f[0]; // 800D188C
  {uint32_t ea=c->r[4]+0xFFFFFFE8u; WF64(ea,c->f[0]);} // 800D1890
  {uint32_t ea=c->r[4]+0xFFFFFFD8u; c->f[0]=RF64(ea);} // 800D1894
  c->f[2]=c->f[0]+c->f[1]; // 800D1898
  c->f[0]=c->f[0]-c->f[2]; // 800D189C
  c->f[0]=c->f[1]+c->f[0]; // 800D18A0
  {uint32_t ea=c->r[4]+0xFFFFFFE0u; WF64(ea,c->f[0]);} // 800D18A4
  {uint32_t ea=c->r[4]+0xFFFFFFD0u; c->f[0]=RF64(ea);} // 800D18A8
  c->f[1]=c->f[0]+c->f[2]; // 800D18AC
  c->f[0]=c->f[0]-c->f[1]; // 800D18B0
  c->f[0]=c->f[2]+c->f[0]; // 800D18B4
  {uint32_t ea=c->r[4]+0xFFFFFFD8u; WF64(ea,c->f[0]);} // 800D18B8
  {uint32_t ea=c->r[4]+0xFFFFFFC8u; c->f[0]=RF64(ea);} // 800D18BC
  c->f[2]=c->f[0]+c->f[1]; // 800D18C0
  c->f[0]=c->f[0]-c->f[2]; // 800D18C4
  c->f[0]=c->f[1]+c->f[0]; // 800D18C8
  {uint32_t ea=c->r[4]+0xFFFFFFD0u; WF64(ea,c->f[0]);} // 800D18CC
  {uint32_t ea=c->r[4]+0xFFFFFFC0u; c->f[0]=RF64(ea);} // 800D18D0
  c->f[1]=c->f[0]+c->f[2]; // 800D18D4
  c->f[0]=c->f[0]-c->f[1]; // 800D18D8
  c->f[0]=c->f[2]+c->f[0]; // 800D18DC
  {uint32_t ea=c->r[4]+0xFFFFFFC8u; WF64(ea,c->f[0]);} // 800D18E0
  {uint32_t ea=c->r[4]+0xFFFFFFC0u; WF64(ea,c->f[1]); c->r[4]=ea;} // 800D18E4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D183C; } // 800D18E8
L_800D18EC:;
  c->r[0]=rotl(c->r[5],3)&0xFFFFFFF8u; // 800D18EC
  c->r[3]=c->r[1]+0x00000100u; // 800D18F0
  c->r[3]=c->r[3]+c->r[0]; // 800D18F4
  c->ctr=c->r[5]; // 800D18F8
  cmps(c,0,(int32_t)c->r[5],0); // 800D18FC
  if (!crb(c,1)) { goto L_800D1924; } // 800D1900
L_800D1904:;
  {uint32_t ea=c->r[3]+0xFFFFFFF8u; c->f[0]=RF64(ea);} // 800D1904
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=RF64(ea);} // 800D1908
  c->f[2]=c->f[0]+c->f[1]; // 800D190C
  c->f[0]=c->f[0]-c->f[2]; // 800D1910
  c->f[0]=c->f[1]+c->f[0]; // 800D1914
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[0]);} // 800D1918
  {uint32_t ea=c->r[3]+0xFFFFFFF8u; WF64(ea,c->f[2]); c->r[3]=ea;} // 800D191C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D1904; } // 800D1920
L_800D1924:;
  cmps(c,1,(int32_t)c->r[23],1); // 800D1924
  c->r[6]=c->r[23]|c->r[23]; // 800D1928
  if (!crb(c,5)) { goto L_800D1A9C; } // 800D192C
  c->r[0]=c->r[23]+0xFFFFFFFFu; // 800D1930
  cmps(c,0,(int32_t)c->r[0],8); // 800D1934
  if (!crb(c,1)) { goto L_800D1A60; } // 800D1938
  c->r[3]=0u+0x00000000u; // 800D193C
  c->r[0]=0u+0x00000000u; // 800D1940
  if (crb(c,4)) { goto L_800D194C; } // 800D1944
  c->r[0]=0u+0x00000001u; // 800D1948
L_800D194C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D194C
  if (crb(c,2)) { goto L_800D1988; } // 800D1950
  c->r[5]=rotl(c->r[23],0)&0x80000000u; // 800D1954
  c->r[4]=0u+0x00000001u; // 800D1958
  c->r[0]=c->r[5]+0x80000000u; // 800D195C
  cmpu(c,0,c->r[0],0x00000000u); // 800D1960
  if (!crb(c,2)) { goto L_800D197C; } // 800D1964
  c->r[0]=c->r[23]+0xFFFFFFFFu; // 800D1968
  c->r[0]=rotl(c->r[0],0)&0x80000000u; // 800D196C
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800D1970
  if (crb(c,2)) { goto L_800D197C; } // 800D1974
  c->r[4]=0u+0x00000000u; // 800D1978
L_800D197C:;
  cmps(c,0,(int32_t)c->r[4],0); // 800D197C
  if (crb(c,2)) { goto L_800D1988; } // 800D1980
  c->r[3]=0u+0x00000001u; // 800D1984
L_800D1988:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D1988
  if (crb(c,2)) { goto L_800D1A60; } // 800D198C
  c->r[0]=c->r[23]+0xFFFFFFFEu; // 800D1990
  c->r[3]=rotl(c->r[23],3)&0xFFFFFFF8u; // 800D1994
  c->r[4]=c->r[1]+0x00000100u; // 800D1998
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800D199C
  c->r[4]=c->r[4]+c->r[3]; // 800D19A0
  c->ctr=c->r[0]; // 800D19A4
  cmps(c,0,(int32_t)c->r[23],9); // 800D19A8
  if (!crb(c,1)) { goto L_800D1A60; } // 800D19AC
L_800D19B0:;
  {uint32_t ea=c->r[4]+0xFFFFFFF8u; c->f[0]=RF64(ea);} // 800D19B0
  c->r[6]=c->r[6]+0xFFFFFFF8u; // 800D19B4
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=RF64(ea);} // 800D19B8
  c->f[2]=c->f[0]+c->f[1]; // 800D19BC
  c->f[0]=c->f[0]-c->f[2]; // 800D19C0
  c->f[0]=c->f[1]+c->f[0]; // 800D19C4
  {uint32_t ea=c->r[4]+0x00000000u; WF64(ea,c->f[0]);} // 800D19C8
  {uint32_t ea=c->r[4]+0xFFFFFFF0u; c->f[0]=RF64(ea);} // 800D19CC
  c->f[1]=c->f[0]+c->f[2]; // 800D19D0
  c->f[0]=c->f[0]-c->f[1]; // 800D19D4
  c->f[0]=c->f[2]+c->f[0]; // 800D19D8
  {uint32_t ea=c->r[4]+0xFFFFFFF8u; WF64(ea,c->f[0]);} // 800D19DC
  {uint32_t ea=c->r[4]+0xFFFFFFE8u; c->f[0]=RF64(ea);} // 800D19E0
  c->f[2]=c->f[0]+c->f[1]; // 800D19E4
  c->f[0]=c->f[0]-c->f[2]; // 800D19E8
  c->f[0]=c->f[1]+c->f[0]; // 800D19EC
  {uint32_t ea=c->r[4]+0xFFFFFFF0u; WF64(ea,c->f[0]);} // 800D19F0
  {uint32_t ea=c->r[4]+0xFFFFFFE0u; c->f[0]=RF64(ea);} // 800D19F4
  c->f[1]=c->f[0]+c->f[2]; // 800D19F8
  c->f[0]=c->f[0]-c->f[1]; // 800D19FC
  c->f[0]=c->f[2]+c->f[0]; // 800D1A00
  {uint32_t ea=c->r[4]+0xFFFFFFE8u; WF64(ea,c->f[0]);} // 800D1A04
  {uint32_t ea=c->r[4]+0xFFFFFFD8u; c->f[0]=RF64(ea);} // 800D1A08
  c->f[2]=c->f[0]+c->f[1]; // 800D1A0C
  c->f[0]=c->f[0]-c->f[2]; // 800D1A10
  c->f[0]=c->f[1]+c->f[0]; // 800D1A14
  {uint32_t ea=c->r[4]+0xFFFFFFE0u; WF64(ea,c->f[0]);} // 800D1A18
  {uint32_t ea=c->r[4]+0xFFFFFFD0u; c->f[0]=RF64(ea);} // 800D1A1C
  c->f[1]=c->f[0]+c->f[2]; // 800D1A20
  c->f[0]=c->f[0]-c->f[1]; // 800D1A24
  c->f[0]=c->f[2]+c->f[0]; // 800D1A28
  {uint32_t ea=c->r[4]+0xFFFFFFD8u; WF64(ea,c->f[0]);} // 800D1A2C
  {uint32_t ea=c->r[4]+0xFFFFFFC8u; c->f[0]=RF64(ea);} // 800D1A30
  c->f[2]=c->f[0]+c->f[1]; // 800D1A34
  c->f[0]=c->f[0]-c->f[2]; // 800D1A38
  c->f[0]=c->f[1]+c->f[0]; // 800D1A3C
  {uint32_t ea=c->r[4]+0xFFFFFFD0u; WF64(ea,c->f[0]);} // 800D1A40
  {uint32_t ea=c->r[4]+0xFFFFFFC0u; c->f[0]=RF64(ea);} // 800D1A44
  c->f[1]=c->f[0]+c->f[2]; // 800D1A48
  c->f[0]=c->f[0]-c->f[1]; // 800D1A4C
  c->f[0]=c->f[2]+c->f[0]; // 800D1A50
  {uint32_t ea=c->r[4]+0xFFFFFFC8u; WF64(ea,c->f[0]);} // 800D1A54
  {uint32_t ea=c->r[4]+0xFFFFFFC0u; WF64(ea,c->f[1]); c->r[4]=ea;} // 800D1A58
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D19B0; } // 800D1A5C
L_800D1A60:;
  c->r[3]=rotl(c->r[6],3)&0xFFFFFFF8u; // 800D1A60
  c->r[4]=c->r[1]+0x00000100u; // 800D1A64
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 800D1A68
  c->r[4]=c->r[4]+c->r[3]; // 800D1A6C
  c->ctr=c->r[0]; // 800D1A70
  cmps(c,0,(int32_t)c->r[6],1); // 800D1A74
  if (!crb(c,1)) { goto L_800D1A9C; } // 800D1A78
L_800D1A7C:;
  {uint32_t ea=c->r[4]+0xFFFFFFF8u; c->f[0]=RF64(ea);} // 800D1A7C
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=RF64(ea);} // 800D1A80
  c->f[2]=c->f[0]+c->f[1]; // 800D1A84
  c->f[0]=c->f[0]-c->f[2]; // 800D1A88
  c->f[0]=c->f[1]+c->f[0]; // 800D1A8C
  {uint32_t ea=c->r[4]+0x00000000u; WF64(ea,c->f[0]);} // 800D1A90
  {uint32_t ea=c->r[4]+0xFFFFFFF8u; WF64(ea,c->f[2]); c->r[4]=ea;} // 800D1A94
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D1A7C; } // 800D1A98
L_800D1A9C:;
  cmps(c,1,(int32_t)c->r[23],2); // 800D1A9C
  {uint32_t ea=c->r[2]+0xFFFF9CE8u; c->f[6]=RF64(ea);} // 800D1AA0
  if (crb(c,4)) { goto L_800D1BD8; } // 800D1AA4
  c->r[0]=c->r[23]+0xFFFFFFFFu; // 800D1AA8
  cmps(c,0,(int32_t)c->r[0],8); // 800D1AAC
  if (!crb(c,1)) { goto L_800D1BAC; } // 800D1AB0
  c->r[3]=0u+0x00000000u; // 800D1AB4
  c->r[4]=0u+0x00000000u; // 800D1AB8
  c->r[0]=0u+0x00000000u; // 800D1ABC
  if (crb(c,4)) { goto L_800D1AC8; } // 800D1AC0
  c->r[0]=0u+0x00000001u; // 800D1AC4
L_800D1AC8:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D1AC8
  if (crb(c,2)) { goto L_800D1B04; } // 800D1ACC
  c->r[6]=rotl(c->r[23],0)&0x80000000u; // 800D1AD0
  c->r[5]=0u+0x00000001u; // 800D1AD4
  c->r[0]=c->r[6]+0x80000000u; // 800D1AD8
  cmpu(c,0,c->r[0],0x00000000u); // 800D1ADC
  if (!crb(c,2)) { goto L_800D1AF8; } // 800D1AE0
  c->r[0]=c->r[23]+0xFFFFFFFEu; // 800D1AE4
  c->r[0]=rotl(c->r[0],0)&0x80000000u; // 800D1AE8
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 800D1AEC
  if (crb(c,2)) { goto L_800D1AF8; } // 800D1AF0
  c->r[5]=0u+0x00000000u; // 800D1AF4
L_800D1AF8:;
  cmps(c,0,(int32_t)c->r[5],0); // 800D1AF8
  if (crb(c,2)) { goto L_800D1B04; } // 800D1AFC
  c->r[4]=0u+0x00000001u; // 800D1B00
L_800D1B04:;
  cmps(c,0,(int32_t)c->r[4],0); // 800D1B04
  if (crb(c,2)) { goto L_800D1B38; } // 800D1B08
  c->r[0]=c->r[23]+0xFFFFFFFEu; // 800D1B0C
  c->r[4]=0u+0x00000001u; // 800D1B10
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 800D1B14
  if (!crb(c,2)) { goto L_800D1B2C; } // 800D1B18
  c->r[0]=c->r[23]+0xFFFFFFFFu; // 800D1B1C
  c->r[0]=rotl(c->r[0],0)&0x80000000u; cr0(c,c->r[0]); // 800D1B20
  if (crb(c,2)) { goto L_800D1B2C; } // 800D1B24
  c->r[4]=0u+0x00000000u; // 800D1B28
L_800D1B2C:;
  cmps(c,0,(int32_t)c->r[4],0); // 800D1B2C
  if (crb(c,2)) { goto L_800D1B38; } // 800D1B30
  c->r[3]=0u+0x00000001u; // 800D1B34
L_800D1B38:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D1B38
  if (crb(c,2)) { goto L_800D1BAC; } // 800D1B3C
  c->r[0]=c->r[23]+0xFFFFFFFEu; // 800D1B40
  c->r[3]=rotl(c->r[23],3)&0xFFFFFFF8u; // 800D1B44
  c->r[4]=c->r[1]+0x00000100u; // 800D1B48
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800D1B4C
  c->r[4]=c->r[4]+c->r[3]; // 800D1B50
  c->ctr=c->r[0]; // 800D1B54
  cmps(c,0,(int32_t)c->r[23],10); // 800D1B58
  if (crb(c,0)) { goto L_800D1BAC; } // 800D1B5C
L_800D1B60:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[1]=RF64(ea);} // 800D1B60
  c->r[23]=c->r[23]+0xFFFFFFF8u; // 800D1B64
  {uint32_t ea=c->r[4]+0xFFFFFFF8u; c->f[0]=RF64(ea);} // 800D1B68
  c->f[6]=c->f[6]+c->f[1]; // 800D1B6C
  {uint32_t ea=c->r[4]+0xFFFFFFF0u; c->f[5]=RF64(ea);} // 800D1B70
  {uint32_t ea=c->r[4]+0xFFFFFFE8u; c->f[4]=RF64(ea);} // 800D1B74
  {uint32_t ea=c->r[4]+0xFFFFFFE0u; c->f[3]=RF64(ea);} // 800D1B78
  c->f[6]=c->f[6]+c->f[0]; // 800D1B7C
  {uint32_t ea=c->r[4]+0xFFFFFFD8u; c->f[2]=RF64(ea);} // 800D1B80
  {uint32_t ea=c->r[4]+0xFFFFFFD0u; c->f[1]=RF64(ea);} // 800D1B84
  {uint32_t ea=c->r[4]+0xFFFFFFC8u; c->f[0]=RF64(ea);} // 800D1B88
  c->r[4]=c->r[4]+0xFFFFFFC0u; // 800D1B8C
  c->f[6]=c->f[6]+c->f[5]; // 800D1B90
  c->f[6]=c->f[6]+c->f[4]; // 800D1B94
  c->f[6]=c->f[6]+c->f[3]; // 800D1B98
  c->f[6]=c->f[6]+c->f[2]; // 800D1B9C
  c->f[6]=c->f[6]+c->f[1]; // 800D1BA0
  c->f[6]=c->f[6]+c->f[0]; // 800D1BA4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D1B60; } // 800D1BA8
L_800D1BAC:;
  c->r[3]=rotl(c->r[23],3)&0xFFFFFFF8u; // 800D1BAC
  c->r[4]=c->r[1]+0x00000100u; // 800D1BB0
  c->r[0]=c->r[23]+0xFFFFFFFFu; // 800D1BB4
  c->r[4]=c->r[4]+c->r[3]; // 800D1BB8
  c->ctr=c->r[0]; // 800D1BBC
  cmps(c,0,(int32_t)c->r[23],2); // 800D1BC0
  if (crb(c,0)) { goto L_800D1BD8; } // 800D1BC4
L_800D1BC8:;
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=RF64(ea);} // 800D1BC8
  c->r[4]=c->r[4]+0xFFFFFFF8u; // 800D1BCC
  c->f[6]=c->f[6]+c->f[0]; // 800D1BD0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D1BC8; } // 800D1BD4
L_800D1BD8:;
  cmps(c,0,(int32_t)c->r[18],0); // 800D1BD8
  if (!crb(c,2)) { goto L_800D1BF8; } // 800D1BDC
  {uint32_t ea=c->r[1]+0x00000100u; c->f[1]=RF64(ea);} // 800D1BE0
  {uint32_t ea=c->r[1]+0x00000108u; c->f[0]=RF64(ea);} // 800D1BE4
  {uint32_t ea=c->r[17]+0x00000000u; WF64(ea,c->f[1]);} // 800D1BE8
  {uint32_t ea=c->r[17]+0x00000008u; WF64(ea,c->f[0]);} // 800D1BEC
  {uint32_t ea=c->r[17]+0x00000010u; WF64(ea,c->f[6]);} // 800D1BF0
  goto L_800D1C18; // 800D1BF4
L_800D1BF8:;
  {uint32_t ea=c->r[1]+0x00000100u; c->f[2]=RF64(ea);} // 800D1BF8
  c->f[0]=-c->f[6]; // 800D1BFC
  {uint32_t ea=c->r[1]+0x00000108u; c->f[1]=RF64(ea);} // 800D1C00
  c->f[2]=-c->f[2]; // 800D1C04
  {uint32_t ea=c->r[17]+0x00000010u; WF64(ea,c->f[0]);} // 800D1C08
  c->f[0]=-c->f[1]; // 800D1C0C
  {uint32_t ea=c->r[17]+0x00000000u; WF64(ea,c->f[2]);} // 800D1C10
  {uint32_t ea=c->r[17]+0x00000008u; WF64(ea,c->f[0]);} // 800D1C14
L_800D1C18:;
  c->r[11]=c->r[1]+0x00000370u; // 800D1C18
  c->r[3]=rotl(c->r[20],0)&0x00000007u; // 800D1C1C
  c->lr=0x800D1C24u; f_800C2DF0(c); // 800D1C20
  {uint32_t ea=c->r[1]+0x000002E0u; for(int i=14;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D1C24
  c->r[0]=R32(c->r[1]+0x00000374u); // 800D1C28
  c->lr=c->r[0]; // 800D1C2C
  c->r[1]=c->r[1]+0x00000370u; // 800D1C30
  return; // 800D1C34
}

// __kernel_sin
void f_800D1C38(Ctx* __restrict c) {
  trace_call(0x800D1C38u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1C38
  c->r[0]=0u+0x3E400000u; // 800D1C3C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800D1C40
  c->r[4]=R32(c->r[1]+0x00000008u); // 800D1C44
  c->r[4]=rotl(c->r[4],0)&0x7FFFFFFFu; // 800D1C48
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D1C4C
  if (!crb(c,0)) { goto L_800D1C6C; } // 800D1C50
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800D1C54
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 800D1C58
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D1C5C
  cmps(c,0,(int32_t)c->r[0],0); // 800D1C60
  if (!crb(c,2)) { goto L_800D1C6C; } // 800D1C64
  goto L_800D1CF0; // 800D1C68
L_800D1C6C:;
  c->f[7]=c->f[1]*c->f[1]; // 800D1C6C
  {uint32_t ea=c->r[2]+0xFFFF9D48u; c->f[0]=RF64(ea);} // 800D1C70
  {uint32_t ea=c->r[2]+0xFFFF9D40u; c->f[5]=RF64(ea);} // 800D1C74
  cmps(c,0,(int32_t)c->r[3],0); // 800D1C78
  {uint32_t ea=c->r[2]+0xFFFF9D38u; c->f[4]=RF64(ea);} // 800D1C7C
  {uint32_t ea=c->r[2]+0xFFFF9D30u; c->f[3]=RF64(ea);} // 800D1C80
  c->f[6]=c->f[0]*c->f[7]; // 800D1C84
  {uint32_t ea=c->r[2]+0xFFFF9D28u; c->f[0]=RF64(ea);} // 800D1C88
  c->f[8]=c->f[7]*c->f[1]; // 800D1C8C
  c->f[5]=c->f[5]+c->f[6]; // 800D1C90
  c->f[5]=c->f[7]*c->f[5]; // 800D1C94
  c->f[4]=c->f[4]+c->f[5]; // 800D1C98
  c->f[4]=c->f[7]*c->f[4]; // 800D1C9C
  c->f[3]=c->f[3]+c->f[4]; // 800D1CA0
  c->f[3]=c->f[7]*c->f[3]; // 800D1CA4
  c->f[0]=c->f[0]+c->f[3]; // 800D1CA8
  if (!crb(c,2)) { goto L_800D1CC8; } // 800D1CAC
  c->f[2]=c->f[7]*c->f[0]; // 800D1CB0
  {uint32_t ea=c->r[2]+0xFFFF9D50u; c->f[0]=RF64(ea);} // 800D1CB4
  c->f[0]=c->f[0]+c->f[2]; // 800D1CB8
  c->f[0]=c->f[8]*c->f[0]; // 800D1CBC
  c->f[1]=c->f[1]+c->f[0]; // 800D1CC0
  goto L_800D1CF0; // 800D1CC4
L_800D1CC8:;
  {uint32_t ea=c->r[2]+0xFFFF9D58u; c->f[4]=RF64(ea);} // 800D1CC8
  c->f[3]=c->f[8]*c->f[0]; // 800D1CCC
  {uint32_t ea=c->r[2]+0xFFFF9D50u; c->f[0]=RF64(ea);} // 800D1CD0
  c->f[4]=c->f[4]*c->f[2]; // 800D1CD4
  c->f[0]=c->f[0]*c->f[8]; // 800D1CD8
  c->f[3]=c->f[4]-c->f[3]; // 800D1CDC
  c->f[3]=c->f[7]*c->f[3]; // 800D1CE0
  c->f[2]=c->f[3]-c->f[2]; // 800D1CE4
  c->f[0]=c->f[2]-c->f[0]; // 800D1CE8
  c->f[1]=c->f[1]-c->f[0]; // 800D1CEC
L_800D1CF0:;
  c->r[1]=c->r[1]+0x00000020u; // 800D1CF0
  return; // 800D1CF4
}

// __kernel_tan
void f_800D1CF8(Ctx* __restrict c) {
  trace_call(0x800D1CF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1CF8
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 800D1CFC
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 800D1D00
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 800D1D04
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 800D1D08
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800D1D0C
  c->r[0]=0u+0x3E300000u; // 800D1D10
  c->r[8]=R32(c->r[1]+0x00000008u); // 800D1D14
  c->r[7]=rotl(c->r[8],0)&0x7FFFFFFFu; // 800D1D18
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 800D1D1C
  if (!crb(c,0)) { goto L_800D1D74; } // 800D1D20
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[1],true)); // 800D1D24
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 800D1D28
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D1D2C
  cmps(c,0,(int32_t)c->r[0],0); // 800D1D30
  if (!crb(c,2)) { goto L_800D1D74; } // 800D1D34
  c->r[4]=c->r[3]+0x00000001u; // 800D1D38
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800D1D3C
  c->r[4]=c->r[4]|c->r[7]; // 800D1D40
  c->r[0]=c->r[4]|c->r[0]; cr0(c,c->r[0]); // 800D1D44
  if (!crb(c,2)) { goto L_800D1D5C; } // 800D1D48
  c->f[1]=std::fabs(c->f[1]); // 800D1D4C
  {uint32_t ea=c->r[2]+0xFFFF9D60u; c->f[0]=RF64(ea);} // 800D1D50
  c->f[1]=c->f[0]/c->f[1]; // 800D1D54
  goto L_800D1F30; // 800D1D58
L_800D1D5C:;
  cmps(c,0,(int32_t)c->r[3],1); // 800D1D5C
  if (!crb(c,2)) { goto L_800D1D68; } // 800D1D60
  goto L_800D1F30; // 800D1D64
L_800D1D68:;
  {uint32_t ea=c->r[2]+0xFFFF9D68u; c->f[0]=RF64(ea);} // 800D1D68
  c->f[1]=c->f[0]/c->f[1]; // 800D1D6C
  goto L_800D1F30; // 800D1D70
L_800D1D74:;
  c->r[4]=0u+0x3FE60000u; // 800D1D74
  c->r[0]=c->r[4]+0xFFFF9428u; // 800D1D78
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 800D1D7C
  if (crb(c,0)) { goto L_800D1DAC; } // 800D1D80
  cmps(c,0,(int32_t)c->r[8],0); // 800D1D84
  if (!crb(c,0)) { goto L_800D1D94; } // 800D1D88
  c->f[1]=-c->f[1]; // 800D1D8C
  c->f[2]=-c->f[2]; // 800D1D90
L_800D1D94:;
  {uint32_t ea=c->r[2]+0xFFFF9D70u; c->f[3]=RF64(ea);} // 800D1D94
  {uint32_t ea=c->r[2]+0xFFFF9D78u; c->f[0]=RF64(ea);} // 800D1D98
  c->f[1]=c->f[3]-c->f[1]; // 800D1D9C
  c->f[0]=c->f[0]-c->f[2]; // 800D1DA0
  {uint32_t ea=c->r[2]+0xFFFF9D80u; c->f[2]=RF64(ea);} // 800D1DA4
  c->f[1]=c->f[1]+c->f[0]; // 800D1DA8
L_800D1DAC:;
  c->f[0]=c->f[1]*c->f[1]; // 800D1DAC
  c->r[6]=0u+0x80380000u; // 800D1DB0
  c->r[5]=c->r[6]+0xFFFFDEB0u; // 800D1DB4
  c->r[4]=0u+0x3FE60000u; // 800D1DB8
  c->r[0]=c->r[4]+0xFFFF9428u; // 800D1DBC
  {uint32_t ea=c->r[5]+0x00000060u; c->f[5]=RF64(ea);} // 800D1DC0
  c->f[3]=c->f[0]*c->f[0]; // 800D1DC4
  {uint32_t ea=c->r[5]+0x00000058u; c->f[8]=RF64(ea);} // 800D1DC8
  {uint32_t ea=c->r[5]+0x00000050u; c->f[6]=RF64(ea);} // 800D1DCC
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 800D1DD0
  {uint32_t ea=c->r[5]+0x00000048u; c->f[10]=RF64(ea);} // 800D1DD4
  c->f[4]=c->f[0]*c->f[1]; // 800D1DD8
  c->f[7]=c->f[3]*c->f[5]; // 800D1DDC
  {uint32_t ea=c->r[6]+0xFFFFDEB0u; c->f[5]=RF64(ea);} // 800D1DE0
  {uint32_t ea=c->r[5]+0x00000040u; c->f[9]=RF64(ea);} // 800D1DE4
  c->f[11]=c->f[3]*c->f[8]; // 800D1DE8
  {uint32_t ea=c->r[5]+0x00000038u; c->f[31]=RF64(ea);} // 800D1DEC
  {uint32_t ea=c->r[5]+0x00000030u; c->f[8]=RF64(ea);} // 800D1DF0
  c->f[6]=c->f[6]+c->f[7]; // 800D1DF4
  {uint32_t ea=c->r[5]+0x00000028u; c->f[13]=RF64(ea);} // 800D1DF8
  c->f[30]=c->f[10]+c->f[11]; // 800D1DFC
  {uint32_t ea=c->r[5]+0x00000020u; c->f[7]=RF64(ea);} // 800D1E00
  c->f[5]=c->f[5]*c->f[4]; // 800D1E04
  {uint32_t ea=c->r[5]+0x00000018u; c->f[12]=RF64(ea);} // 800D1E08
  c->f[10]=c->f[3]*c->f[6]; // 800D1E0C
  {uint32_t ea=c->r[5]+0x00000010u; c->f[6]=RF64(ea);} // 800D1E10
  {uint32_t ea=c->r[5]+0x00000008u; c->f[11]=RF64(ea);} // 800D1E14
  c->f[30]=c->f[3]*c->f[30]; // 800D1E18
  c->f[9]=c->f[9]+c->f[10]; // 800D1E1C
  c->f[10]=c->f[31]+c->f[30]; // 800D1E20
  c->f[9]=c->f[3]*c->f[9]; // 800D1E24
  c->f[10]=c->f[3]*c->f[10]; // 800D1E28
  c->f[8]=c->f[8]+c->f[9]; // 800D1E2C
  c->f[9]=c->f[13]+c->f[10]; // 800D1E30
  c->f[8]=c->f[3]*c->f[8]; // 800D1E34
  c->f[9]=c->f[3]*c->f[9]; // 800D1E38
  c->f[7]=c->f[7]+c->f[8]; // 800D1E3C
  c->f[8]=c->f[12]+c->f[9]; // 800D1E40
  c->f[7]=c->f[3]*c->f[7]; // 800D1E44
  c->f[8]=c->f[3]*c->f[8]; // 800D1E48
  c->f[3]=c->f[6]+c->f[7]; // 800D1E4C
  c->f[6]=c->f[11]+c->f[8]; // 800D1E50
  c->f[3]=c->f[0]*c->f[3]; // 800D1E54
  c->f[3]=c->f[6]+c->f[3]; // 800D1E58
  c->f[3]=c->f[4]*c->f[3]; // 800D1E5C
  c->f[3]=c->f[2]+c->f[3]; // 800D1E60
  c->f[0]=c->f[0]*c->f[3]; // 800D1E64
  c->f[6]=c->f[2]+c->f[0]; // 800D1E68
  c->f[6]=c->f[6]+c->f[5]; // 800D1E6C
  c->f[4]=c->f[1]+c->f[6]; // 800D1E70
  if (crb(c,0)) { goto L_800D1ED8; } // 800D1E74
  c->r[4]=0u+0x43300000u; // 800D1E78
  c->r[0]=c->r[3]^0x80000000u; // 800D1E7C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D1E80
  c->r[0]=rotl(c->r[8],2)&0x00000002u; // 800D1E84
  {uint32_t ea=c->r[2]+0xFFFF9D90u; c->f[5]=RF64(ea);} // 800D1E88
  c->r[0]=addc(c,~c->r[0],0x00000001u,1); // 800D1E8C
  W32(c->r[1]+0x00000020u,c->r[4]); // 800D1E90
  c->r[0]=c->r[0]^0x80000000u; // 800D1E94
  c->f[3]=c->f[4]*c->f[4]; // 800D1E98
  {uint32_t ea=c->r[2]+0xFFFF9D88u; c->f[0]=RF64(ea);} // 800D1E9C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[2]=RF64(ea);} // 800D1EA0
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800D1EA4
  c->f[7]=c->f[2]-c->f[5]; // 800D1EA8
  W32(c->r[1]+0x00000028u,c->r[4]); // 800D1EAC
  c->f[2]=c->f[4]+c->f[7]; // 800D1EB0
  {uint32_t ea=c->r[1]+0x00000028u; c->f[4]=RF64(ea);} // 800D1EB4
  c->f[4]=c->f[4]-c->f[5]; // 800D1EB8
  c->f[2]=c->f[3]/c->f[2]; // 800D1EBC
  c->f[2]=c->f[2]-c->f[6]; // 800D1EC0
  c->f[1]=c->f[1]-c->f[2]; // 800D1EC4
  c->f[0]=c->f[0]*c->f[1]; // 800D1EC8
  c->f[0]=c->f[7]-c->f[0]; // 800D1ECC
  c->f[1]=c->f[4]*c->f[0]; // 800D1ED0
  goto L_800D1F30; // 800D1ED4
L_800D1ED8:;
  cmps(c,0,(int32_t)c->r[3],1); // 800D1ED8
  if (!crb(c,2)) { goto L_800D1EE8; } // 800D1EDC
  c->f[1]=c->f[4]; // 800D1EE0
  goto L_800D1F30; // 800D1EE4
L_800D1EE8:;
  {uint32_t ea=c->r[2]+0xFFFF9D68u; c->f[0]=RF64(ea);} // 800D1EE8
  c->r[0]=0u+0x00000000u; // 800D1EEC
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[4]);} // 800D1EF0
  c->f[5]=c->f[0]/c->f[4]; // 800D1EF4
  {uint32_t ea=c->r[2]+0xFFFF9D60u; c->f[2]=RF64(ea);} // 800D1EF8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800D1EFC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[4]=RF64(ea);} // 800D1F00
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[5]);} // 800D1F04
  c->f[0]=c->f[4]-c->f[1]; // 800D1F08
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D1F0C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[3]=RF64(ea);} // 800D1F10
  c->f[0]=c->f[6]-c->f[0]; // 800D1F14
  c->f[1]=c->f[3]*c->f[4]; // 800D1F18
  c->f[0]=c->f[3]*c->f[0]; // 800D1F1C
  c->f[1]=c->f[2]+c->f[1]; // 800D1F20
  c->f[0]=c->f[1]+c->f[0]; // 800D1F24
  c->f[0]=c->f[5]*c->f[0]; // 800D1F28
  c->f[1]=c->f[3]+c->f[0]; // 800D1F2C
L_800D1F30:;
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 800D1F30
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 800D1F34
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 800D1F38
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 800D1F3C
  c->r[1]=c->r[1]+0x00000050u; // 800D1F40
  return; // 800D1F44
}

// atan
void f_800D1F48(Ctx* __restrict c) {
  trace_call(0x800D1F48u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D1F48
  c->r[5]=0u+0x80380000u; // 800D1F4C
  c->r[0]=0u+0x44100000u; // 800D1F50
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800D1F54
  c->r[5]=c->r[5]+0xFFFFDF18u; // 800D1F58
  c->r[6]=R32(c->r[1]+0x00000008u); // 800D1F5C
  c->r[4]=rotl(c->r[6],0)&0x7FFFFFFFu; // 800D1F60
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D1F64
  if (!crb(c,0)) { goto L_800D1F88; } // 800D1F68
  c->r[0]=0u+0x3FDC0000u; // 800D1F6C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D1F70
  if (!crb(c,0)) { goto L_800D200C; } // 800D1F74
  c->r[0]=0u+0x3E200000u; // 800D1F78
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D1F7C
  if (!crb(c,0)) { goto L_800D2004; } // 800D1F80
  goto L_800D1FEC; // 800D1F84
L_800D1F88:;
  c->r[0]=0u+0x7FF00000u; // 800D1F88
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D1F8C
  if (crb(c,2)) { goto L_800D1F9C; } // 800D1F90
  if (!crb(c,0)) { goto L_800D1FA8; } // 800D1F94
  goto L_800D1FB0; // 800D1F98
L_800D1F9C:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800D1F9C
  cmps(c,0,(int32_t)c->r[0],0); // 800D1FA0
  if (crb(c,2)) { goto L_800D1FB0; } // 800D1FA4
L_800D1FA8:;
  c->f[1]=c->f[1]+c->f[1]; // 800D1FA8
  goto L_800D2170; // 800D1FAC
L_800D1FB0:;
  cmps(c,0,(int32_t)c->r[6],0); // 800D1FB0
  if (!crb(c,1)) { goto L_800D1FD0; } // 800D1FB4
  c->r[4]=c->r[5]+0x00000000u; // 800D1FB8
  c->r[3]=c->r[5]+0x00000020u; // 800D1FBC
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=RF64(ea);} // 800D1FC0
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=RF64(ea);} // 800D1FC4
  c->f[1]=c->f[1]+c->f[0]; // 800D1FC8
  goto L_800D2170; // 800D1FCC
L_800D1FD0:;
  c->r[4]=c->r[5]+0x00000000u; // 800D1FD0
  c->r[3]=c->r[5]+0x00000020u; // 800D1FD4
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=RF64(ea);} // 800D1FD8
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=RF64(ea);} // 800D1FDC
  c->f[1]=-c->f[1]; // 800D1FE0
  c->f[1]=c->f[1]-c->f[0]; // 800D1FE4
  goto L_800D2170; // 800D1FE8
L_800D1FEC:;
  {uint32_t ea=c->r[2]+0xFFFF9D98u; c->f[2]=RF64(ea);} // 800D1FEC
  {uint32_t ea=c->r[2]+0xFFFF9DA0u; c->f[0]=RF64(ea);} // 800D1FF0
  c->f[2]=c->f[2]+c->f[1]; // 800D1FF4
  fcmp(c,0,c->f[2],c->f[0]); // 800D1FF8
  if (!crb(c,1)) { goto L_800D2004; } // 800D1FFC
  goto L_800D2170; // 800D2000
L_800D2004:;
  c->r[0]=0u+0xFFFFFFFFu; // 800D2004
  goto L_800D209C; // 800D2008
L_800D200C:;
  c->r[0]=0u+0x3FF30000u; // 800D200C
  c->f[3]=std::fabs(c->f[1]); // 800D2010
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D2014
  if (!crb(c,0)) { goto L_800D2060; } // 800D2018
  c->r[0]=0u+0x3FE60000u; // 800D201C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D2020
  if (!crb(c,0)) { goto L_800D2048; } // 800D2024
  {uint32_t ea=c->r[2]+0xFFFF9DA8u; c->f[0]=RF64(ea);} // 800D2028
  c->r[0]=0u+0x00000000u; // 800D202C
  {uint32_t ea=c->r[2]+0xFFFF9DA0u; c->f[1]=RF64(ea);} // 800D2030
  c->f[2]=c->f[0]*c->f[3]; // 800D2034
  c->f[0]=c->f[0]+c->f[3]; // 800D2038
  c->f[1]=c->f[2]-c->f[1]; // 800D203C
  c->f[1]=c->f[1]/c->f[0]; // 800D2040
  goto L_800D209C; // 800D2044
L_800D2048:;
  {uint32_t ea=c->r[2]+0xFFFF9DA0u; c->f[0]=RF64(ea);} // 800D2048
  c->r[0]=0u+0x00000001u; // 800D204C
  c->f[1]=c->f[3]-c->f[0]; // 800D2050
  c->f[0]=c->f[0]+c->f[3]; // 800D2054
  c->f[1]=c->f[1]/c->f[0]; // 800D2058
  goto L_800D209C; // 800D205C
L_800D2060:;
  c->r[3]=0u+0x40040000u; // 800D2060
  c->r[0]=c->r[3]+0xFFFF8000u; // 800D2064
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D2068
  if (!crb(c,0)) { goto L_800D2090; } // 800D206C
  {uint32_t ea=c->r[2]+0xFFFF9DB0u; c->f[2]=RF64(ea);} // 800D2070
  c->r[0]=0u+0x00000002u; // 800D2074
  {uint32_t ea=c->r[2]+0xFFFF9DA0u; c->f[0]=RF64(ea);} // 800D2078
  c->f[1]=c->f[2]*c->f[3]; // 800D207C
  c->f[2]=c->f[3]-c->f[2]; // 800D2080
  c->f[0]=c->f[0]+c->f[1]; // 800D2084
  c->f[1]=c->f[2]/c->f[0]; // 800D2088
  goto L_800D209C; // 800D208C
L_800D2090:;
  {uint32_t ea=c->r[2]+0xFFFF9DB8u; c->f[0]=RF64(ea);} // 800D2090
  c->r[0]=0u+0x00000003u; // 800D2094
  c->f[1]=c->f[0]/c->f[3]; // 800D2098
L_800D209C:;
  c->f[0]=c->f[1]*c->f[1]; // 800D209C
  c->r[3]=c->r[5]+0x00000040u; // 800D20A0
  {uint32_t ea=c->r[3]+0x00000050u; c->f[3]=RF64(ea);} // 800D20A4
  cmps(c,0,(int32_t)c->r[0],0); // 800D20A8
  {uint32_t ea=c->r[3]+0x00000048u; c->f[2]=RF64(ea);} // 800D20AC
  {uint32_t ea=c->r[3]+0x00000040u; c->f[11]=RF64(ea);} // 800D20B0
  c->f[13]=c->f[0]*c->f[0]; // 800D20B4
  {uint32_t ea=c->r[3]+0x00000038u; c->f[5]=RF64(ea);} // 800D20B8
  {uint32_t ea=c->r[3]+0x00000030u; c->f[10]=RF64(ea);} // 800D20BC
  {uint32_t ea=c->r[3]+0x00000028u; c->f[4]=RF64(ea);} // 800D20C0
  {uint32_t ea=c->r[3]+0x00000020u; c->f[9]=RF64(ea);} // 800D20C4
  c->f[12]=c->f[13]*c->f[3]; // 800D20C8
  {uint32_t ea=c->r[3]+0x00000018u; c->f[3]=RF64(ea);} // 800D20CC
  c->f[6]=c->f[13]*c->f[2]; // 800D20D0
  {uint32_t ea=c->r[3]+0x00000010u; c->f[8]=RF64(ea);} // 800D20D4
  {uint32_t ea=c->r[3]+0x00000008u; c->f[2]=RF64(ea);} // 800D20D8
  c->f[11]=c->f[11]+c->f[12]; // 800D20DC
  {uint32_t ea=c->r[5]+0x00000040u; c->f[7]=RF64(ea);} // 800D20E0
  c->f[5]=c->f[5]+c->f[6]; // 800D20E4
  c->f[6]=c->f[13]*c->f[11]; // 800D20E8
  c->f[5]=c->f[13]*c->f[5]; // 800D20EC
  c->f[6]=c->f[10]+c->f[6]; // 800D20F0
  c->f[4]=c->f[4]+c->f[5]; // 800D20F4
  c->f[5]=c->f[13]*c->f[6]; // 800D20F8
  c->f[4]=c->f[13]*c->f[4]; // 800D20FC
  c->f[5]=c->f[9]+c->f[5]; // 800D2100
  c->f[3]=c->f[3]+c->f[4]; // 800D2104
  c->f[4]=c->f[13]*c->f[5]; // 800D2108
  c->f[3]=c->f[13]*c->f[3]; // 800D210C
  c->f[4]=c->f[8]+c->f[4]; // 800D2110
  c->f[2]=c->f[2]+c->f[3]; // 800D2114
  c->f[3]=c->f[13]*c->f[4]; // 800D2118
  c->f[4]=c->f[13]*c->f[2]; // 800D211C
  c->f[2]=c->f[7]+c->f[3]; // 800D2120
  c->f[0]=c->f[0]*c->f[2]; // 800D2124
  if (!crb(c,0)) { goto L_800D213C; } // 800D2128
  c->f[0]=c->f[0]+c->f[4]; // 800D212C
  c->f[0]=c->f[1]*c->f[0]; // 800D2130
  c->f[1]=c->f[1]-c->f[0]; // 800D2134
  goto L_800D2170; // 800D2138
L_800D213C:;
  c->f[0]=c->f[0]+c->f[4]; // 800D213C
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D2140
  c->r[3]=c->r[5]+0x00000020u; // 800D2144
  c->r[4]=c->r[5]+0x00000000u; // 800D2148
  {uint32_t ea=c->r[3]+c->r[0]; c->f[2]=RF64(ea);} // 800D214C
  cmps(c,0,(int32_t)c->r[6],0); // 800D2150
  c->f[3]=c->f[1]*c->f[0]; // 800D2154
  {uint32_t ea=c->r[4]+c->r[0]; c->f[0]=RF64(ea);} // 800D2158
  c->f[2]=c->f[3]-c->f[2]; // 800D215C
  c->f[1]=c->f[2]-c->f[1]; // 800D2160
  c->f[1]=c->f[0]-c->f[1]; // 800D2164
  if (!crb(c,0)) { goto L_800D2170; } // 800D2168
  c->f[1]=-c->f[1]; // 800D216C
L_800D2170:;
  c->r[1]=c->r[1]+0x00000010u; // 800D2170
  return; // 800D2174
}

// ceil
void f_800D2178(Ctx* __restrict c) {
  trace_call(0x800D2178u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2178
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800D217C
  c->r[5]=R32(c->r[1]+0x00000008u); // 800D2180
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 800D2184
  c->r[3]=rotl(c->r[5],12)&0x000007FFu; // 800D2188
  c->r[7]=c->r[3]+0xFFFFFC01u; // 800D218C
  cmps(c,0,(int32_t)c->r[7],52); // 800D2190
  if (!crb(c,0)) { goto L_800D21AC; } // 800D2194
  cmps(c,1,(int32_t)c->r[7],20); // 800D2198
  if (!crb(c,4)) { goto L_800D224C; } // 800D219C
  cmps(c,0,(int32_t)c->r[7],0); // 800D21A0
  if (!crb(c,0)) { goto L_800D21F4; } // 800D21A4
  goto L_800D21B8; // 800D21A8
L_800D21AC:;
  cmps(c,0,(int32_t)c->r[7],1024); // 800D21AC
  if (crb(c,2)) { goto L_800D2240; } // 800D21B0
  goto L_800D22BC; // 800D21B4
L_800D21B8:;
  {uint32_t ea=c->r[2]+0xFFFF9DC0u; c->f[2]=RF64(ea);} // 800D21B8
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[0]=RF64(ea);} // 800D21BC
  c->f[1]=c->f[2]+c->f[1]; // 800D21C0
  fcmp(c,0,c->f[1],c->f[0]); // 800D21C4
  if (!crb(c,1)) { goto L_800D22B0; } // 800D21C8
  cmps(c,0,(int32_t)c->r[5],0); // 800D21CC
  if (!crb(c,0)) { goto L_800D21E0; } // 800D21D0
  c->r[5]=0u+0x80000000u; // 800D21D4
  c->r[6]=0u+0x00000000u; // 800D21D8
  goto L_800D22B0; // 800D21DC
L_800D21E0:;
  c->r[0]=c->r[5]|c->r[6]; cr0(c,c->r[0]); // 800D21E0
  if (crb(c,2)) { goto L_800D22B0; } // 800D21E4
  c->r[5]=0u+0x3FF00000u; // 800D21E8
  c->r[6]=0u+0x00000000u; // 800D21EC
  goto L_800D22B0; // 800D21F0
L_800D21F4:;
  c->r[3]=0u+0x00100000u; // 800D21F4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800D21F8
  c->r[4]=sraw(c,c->r[0],(c->r[7])&63); // 800D21FC
  c->r[0]=c->r[5]&c->r[4]; // 800D2200
  c->r[0]=c->r[6]|c->r[0]; cr0(c,c->r[0]); // 800D2204
  if (!crb(c,2)) { goto L_800D2210; } // 800D2208
  goto L_800D22BC; // 800D220C
L_800D2210:;
  {uint32_t ea=c->r[2]+0xFFFF9DC0u; c->f[2]=RF64(ea);} // 800D2210
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[0]=RF64(ea);} // 800D2214
  c->f[1]=c->f[2]+c->f[1]; // 800D2218
  fcmp(c,0,c->f[1],c->f[0]); // 800D221C
  if (!crb(c,1)) { goto L_800D22B0; } // 800D2220
  cmps(c,0,(int32_t)c->r[5],0); // 800D2224
  if (!crb(c,1)) { goto L_800D2234; } // 800D2228
  c->r[0]=sraw(c,c->r[3],(c->r[7])&63); // 800D222C
  c->r[5]=c->r[5]+c->r[0]; // 800D2230
L_800D2234:;
  c->r[5]=c->r[5]&~c->r[4]; // 800D2234
  c->r[6]=0u+0x00000000u; // 800D2238
  goto L_800D22B0; // 800D223C
L_800D2240:;
  c->f[1]=c->f[1]+c->f[1]; // 800D2240
  goto L_800D22BC; // 800D2244
  goto L_800D22BC; // 800D2248
L_800D224C:;
  c->r[0]=c->r[7]+0xFFFFFFECu; // 800D224C
  c->r[3]=0u+0xFFFFFFFFu; // 800D2250
  c->r[4]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 800D2254
  c->r[0]=c->r[6]&c->r[4]; cr0(c,c->r[0]); // 800D2258
  if (!crb(c,2)) { goto L_800D2264; } // 800D225C
  goto L_800D22BC; // 800D2260
L_800D2264:;
  {uint32_t ea=c->r[2]+0xFFFF9DC0u; c->f[2]=RF64(ea);} // 800D2264
  {uint32_t ea=c->r[2]+0xFFFF9DC8u; c->f[0]=RF64(ea);} // 800D2268
  c->f[1]=c->f[2]+c->f[1]; // 800D226C
  fcmp(c,0,c->f[1],c->f[0]); // 800D2270
  if (!crb(c,1)) { goto L_800D22B0; } // 800D2274
  cmps(c,0,(int32_t)c->r[5],0); // 800D2278
  if (!crb(c,1)) { goto L_800D22AC; } // 800D227C
  if (!crb(c,6)) { goto L_800D228C; } // 800D2280
  c->r[5]=c->r[5]+0x00000001u; // 800D2284
  goto L_800D22AC; // 800D2288
L_800D228C:;
  c->r[0]=addc(c,~c->r[7],0x00000034u,1); // 800D228C
  c->r[3]=0u+0x00000001u; // 800D2290
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 800D2294
  c->r[0]=c->r[6]+c->r[0]; // 800D2298
  cmpu(c,0,c->r[0],c->r[6]); // 800D229C
  if (!crb(c,0)) { goto L_800D22A8; } // 800D22A0
  c->r[5]=c->r[5]+0x00000001u; // 800D22A4
L_800D22A8:;
  c->r[6]=c->r[0]|c->r[0]; // 800D22A8
L_800D22AC:;
  c->r[6]=c->r[6]&~c->r[4]; // 800D22AC
L_800D22B0:;
  W32(c->r[1]+0x00000008u,c->r[5]); // 800D22B0
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800D22B4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800D22B8
L_800D22BC:;
  c->r[1]=c->r[1]+0x00000010u; // 800D22BC
  return; // 800D22C0
}

// copysign
void f_800D22C4(Ctx* __restrict c) {
  trace_call(0x800D22C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D22C4
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800D22C8
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[2]);} // 800D22CC
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D22D0
  c->r[0]=R32(c->r[1]+0x00000010u); // 800D22D4
  c->r[0]=rotl(c->r[0],0)&0x80000000u; // 800D22D8
  c->r[0]=(rotl(c->r[3],0)&0x7FFFFFFFu)|(c->r[0]&~0x7FFFFFFFu); // 800D22DC
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D22E0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800D22E4
  c->r[1]=c->r[1]+0x00000020u; // 800D22E8
  return; // 800D22EC
}

// cos
void f_800D22F0(Ctx* __restrict c) {
  trace_call(0x800D22F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D22F0
  c->r[0]=c->lr; // 800D22F4
  c->r[3]=0u+0x3FE90000u; // 800D22F8
  {uint32_t ea=c->r[2]+0xFFFF9DD0u; c->f[2]=RF64(ea);} // 800D22FC
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800D2300
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D2304
  c->r[0]=c->r[3]+0x000021FBu; // 800D2308
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D230C
  c->r[3]=rotl(c->r[3],0)&0x7FFFFFFFu; // 800D2310
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800D2314
  if (crb(c,1)) { goto L_800D2324; } // 800D2318
  c->lr=0x800D2320u; f_800D0470(c); // 800D231C
  goto L_800D23A8; // 800D2320
L_800D2324:;
  c->r[0]=0u+0x7FF00000u; // 800D2324
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800D2328
  if (crb(c,0)) { goto L_800D2338; } // 800D232C
  c->f[1]=c->f[1]-c->f[1]; // 800D2330
  goto L_800D23A8; // 800D2334
L_800D2338:;
  c->r[3]=c->r[1]+0x00000010u; // 800D2338
  c->lr=0x800D2340u; f_800D0080(c); // 800D233C
  c->r[0]=rotl(c->r[3],0)&0x00000003u; cr0(c,c->r[0]); // 800D2340
  if (crb(c,2)) { goto L_800D235C; } // 800D2344
  cmps(c,0,(int32_t)c->r[0],1); // 800D2348
  if (crb(c,2)) { goto L_800D236C; } // 800D234C
  cmps(c,0,(int32_t)c->r[0],2); // 800D2350
  if (crb(c,2)) { goto L_800D2384; } // 800D2354
  goto L_800D2398; // 800D2358
L_800D235C:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 800D235C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 800D2360
  c->lr=0x800D2368u; f_800D0470(c); // 800D2364
  goto L_800D23A8; // 800D2368
L_800D236C:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 800D236C
  c->r[3]=0u+0x00000001u; // 800D2370
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 800D2374
  c->lr=0x800D237Cu; f_800D1C38(c); // 800D2378
  c->f[1]=-c->f[1]; // 800D237C
  goto L_800D23A8; // 800D2380
L_800D2384:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 800D2384
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 800D2388
  c->lr=0x800D2390u; f_800D0470(c); // 800D238C
  c->f[1]=-c->f[1]; // 800D2390
  goto L_800D23A8; // 800D2394
L_800D2398:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 800D2398
  c->r[3]=0u+0x00000001u; // 800D239C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 800D23A0
  c->lr=0x800D23A8u; f_800D1C38(c); // 800D23A4
L_800D23A8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D23A8
  c->lr=c->r[0]; // 800D23AC
  c->r[1]=c->r[1]+0x00000020u; // 800D23B0
  return; // 800D23B4
}

// floor
void f_800D23B8(Ctx* __restrict c) {
  trace_call(0x800D23B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D23B8
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800D23BC
  c->r[5]=R32(c->r[1]+0x00000008u); // 800D23C0
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 800D23C4
  c->r[3]=rotl(c->r[5],12)&0x000007FFu; // 800D23C8
  c->r[7]=c->r[3]+0xFFFFFC01u; // 800D23CC
  cmps(c,0,(int32_t)c->r[7],52); // 800D23D0
  if (!crb(c,0)) { goto L_800D23EC; } // 800D23D4
  cmps(c,1,(int32_t)c->r[7],20); // 800D23D8
  if (!crb(c,4)) { goto L_800D2490; } // 800D23DC
  cmps(c,0,(int32_t)c->r[7],0); // 800D23E0
  if (!crb(c,0)) { goto L_800D2438; } // 800D23E4
  goto L_800D23F8; // 800D23E8
L_800D23EC:;
  cmps(c,0,(int32_t)c->r[7],1024); // 800D23EC
  if (crb(c,2)) { goto L_800D2484; } // 800D23F0
  goto L_800D2500; // 800D23F4
L_800D23F8:;
  {uint32_t ea=c->r[2]+0xFFFF9DD8u; c->f[2]=RF64(ea);} // 800D23F8
  {uint32_t ea=c->r[2]+0xFFFF9DE0u; c->f[0]=RF64(ea);} // 800D23FC
  c->f[1]=c->f[2]+c->f[1]; // 800D2400
  fcmp(c,0,c->f[1],c->f[0]); // 800D2404
  if (!crb(c,1)) { goto L_800D24F4; } // 800D2408
  cmps(c,0,(int32_t)c->r[5],0); // 800D240C
  if (crb(c,0)) { goto L_800D2420; } // 800D2410
  c->r[6]=0u+0x00000000u; // 800D2414
  c->r[5]=0u+0x00000000u; // 800D2418
  goto L_800D24F4; // 800D241C
L_800D2420:;
  c->r[0]=rotl(c->r[5],0)&0x7FFFFFFFu; // 800D2420
  c->r[0]=c->r[0]|c->r[6]; cr0(c,c->r[0]); // 800D2424
  if (crb(c,2)) { goto L_800D24F4; } // 800D2428
  c->r[5]=0u+0xBFF00000u; // 800D242C
  c->r[6]=0u+0x00000000u; // 800D2430
  goto L_800D24F4; // 800D2434
L_800D2438:;
  c->r[3]=0u+0x00100000u; // 800D2438
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800D243C
  c->r[4]=sraw(c,c->r[0],(c->r[7])&63); // 800D2440
  c->r[0]=c->r[5]&c->r[4]; // 800D2444
  c->r[0]=c->r[6]|c->r[0]; cr0(c,c->r[0]); // 800D2448
  if (!crb(c,2)) { goto L_800D2454; } // 800D244C
  goto L_800D2500; // 800D2450
L_800D2454:;
  {uint32_t ea=c->r[2]+0xFFFF9DD8u; c->f[2]=RF64(ea);} // 800D2454
  {uint32_t ea=c->r[2]+0xFFFF9DE0u; c->f[0]=RF64(ea);} // 800D2458
  c->f[1]=c->f[2]+c->f[1]; // 800D245C
  fcmp(c,0,c->f[1],c->f[0]); // 800D2460
  if (!crb(c,1)) { goto L_800D24F4; } // 800D2464
  cmps(c,0,(int32_t)c->r[5],0); // 800D2468
  if (!crb(c,0)) { goto L_800D2478; } // 800D246C
  c->r[0]=sraw(c,c->r[3],(c->r[7])&63); // 800D2470
  c->r[5]=c->r[5]+c->r[0]; // 800D2474
L_800D2478:;
  c->r[5]=c->r[5]&~c->r[4]; // 800D2478
  c->r[6]=0u+0x00000000u; // 800D247C
  goto L_800D24F4; // 800D2480
L_800D2484:;
  c->f[1]=c->f[1]+c->f[1]; // 800D2484
  goto L_800D2500; // 800D2488
  goto L_800D2500; // 800D248C
L_800D2490:;
  c->r[0]=c->r[7]+0xFFFFFFECu; // 800D2490
  c->r[3]=0u+0xFFFFFFFFu; // 800D2494
  c->r[4]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 800D2498
  c->r[0]=c->r[6]&c->r[4]; cr0(c,c->r[0]); // 800D249C
  if (!crb(c,2)) { goto L_800D24A8; } // 800D24A0
  goto L_800D2500; // 800D24A4
L_800D24A8:;
  {uint32_t ea=c->r[2]+0xFFFF9DD8u; c->f[2]=RF64(ea);} // 800D24A8
  {uint32_t ea=c->r[2]+0xFFFF9DE0u; c->f[0]=RF64(ea);} // 800D24AC
  c->f[1]=c->f[2]+c->f[1]; // 800D24B0
  fcmp(c,0,c->f[1],c->f[0]); // 800D24B4
  if (!crb(c,1)) { goto L_800D24F4; } // 800D24B8
  cmps(c,0,(int32_t)c->r[5],0); // 800D24BC
  if (!crb(c,0)) { goto L_800D24F0; } // 800D24C0
  if (!crb(c,6)) { goto L_800D24D0; } // 800D24C4
  c->r[5]=c->r[5]+0x00000001u; // 800D24C8
  goto L_800D24F0; // 800D24CC
L_800D24D0:;
  c->r[0]=addc(c,~c->r[7],0x00000034u,1); // 800D24D0
  c->r[3]=0u+0x00000001u; // 800D24D4
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 800D24D8
  c->r[0]=c->r[6]+c->r[0]; // 800D24DC
  cmpu(c,0,c->r[0],c->r[6]); // 800D24E0
  if (!crb(c,0)) { goto L_800D24EC; } // 800D24E4
  c->r[5]=c->r[5]+0x00000001u; // 800D24E8
L_800D24EC:;
  c->r[6]=c->r[0]|c->r[0]; // 800D24EC
L_800D24F0:;
  c->r[6]=c->r[6]&~c->r[4]; // 800D24F0
L_800D24F4:;
  W32(c->r[1]+0x00000008u,c->r[5]); // 800D24F4
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800D24F8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800D24FC
L_800D2500:;
  c->r[1]=c->r[1]+0x00000010u; // 800D2500
  return; // 800D2504
}

// frexp
void f_800D2508(Ctx* __restrict c) {
  trace_call(0x800D2508u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2508
  c->r[4]=0u+0x00000000u; // 800D250C
  c->r[0]=0u+0x7FF00000u; // 800D2510
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800D2514
  c->r[5]=R32(c->r[1]+0x00000008u); // 800D2518
  W32(c->r[3]+0x00000000u,c->r[4]); // 800D251C
  c->r[4]=rotl(c->r[5],0)&0x7FFFFFFFu; // 800D2520
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 800D2524
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D2528
  if (!crb(c,0)) { goto L_800D2588; } // 800D252C
  c->r[0]=c->r[4]|c->r[6]; cr0(c,c->r[0]); // 800D2530
  if (!crb(c,2)) { goto L_800D253C; } // 800D2534
  goto L_800D2588; // 800D2538
L_800D253C:;
  c->r[0]=0u+0x00100000u; // 800D253C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D2540
  if (!crb(c,0)) { goto L_800D2564; } // 800D2544
  {uint32_t ea=c->r[2]+0xFFFF9DE8u; c->f[0]=RF64(ea);} // 800D2548
  c->r[0]=0u+0xFFFFFFCAu; // 800D254C
  W32(c->r[3]+0x00000000u,c->r[0]); // 800D2550
  c->f[1]=c->f[1]*c->f[0]; // 800D2554
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800D2558
  c->r[5]=R32(c->r[1]+0x00000008u); // 800D255C
  c->r[4]=rotl(c->r[5],0)&0x7FFFFFFFu; // 800D2560
L_800D2564:;
  c->r[0]=rotl(c->r[5],0)&0x800FFFFFu; // 800D2564
  c->r[5]=R32(c->r[3]+0x00000000u); // 800D2568
  c->r[4]=sraw(c,c->r[4],20); // 800D256C
  c->r[0]=c->r[0]|0x3FE00000u; // 800D2570
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D2574
  c->r[4]=c->r[4]+c->r[5]; // 800D2578
  c->r[0]=c->r[4]+0xFFFFFC02u; // 800D257C
  W32(c->r[3]+0x00000000u,c->r[0]); // 800D2580
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800D2584
L_800D2588:;
  c->r[1]=c->r[1]+0x00000010u; // 800D2588
  return; // 800D258C
}

// ldexp
void f_800D2590(Ctx* __restrict c) {
  trace_call(0x800D2590u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2590
  c->r[0]=c->lr; // 800D2594
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D2598
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 800D259C
  c->f[31]=c->f[1]; // 800D25A0
  W32(c->r[1]+0x00000014u,c->r[31]); // 800D25A4
  c->r[31]=c->r[3]|c->r[3]; // 800D25A8
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800D25AC
  c->lr=0x800D25B4u; f_800C65BC(c); // 800D25B0
  cmps(c,0,(int32_t)c->r[3],2); // 800D25B4
  if (!crb(c,1)) { goto L_800D25C8; } // 800D25B8
  {uint32_t ea=c->r[2]+0xFFFF9DF0u; c->f[0]=RF64(ea);} // 800D25BC
  fcmp(c,0,c->f[0],c->f[31]); // 800D25C0
  if (!crb(c,2)) { goto L_800D25D0; } // 800D25C4
L_800D25C8:;
  c->f[1]=c->f[31]; // 800D25C8
  goto L_800D26E4; // 800D25CC
L_800D25D0:;
  c->r[5]=R32(c->r[1]+0x00000008u); // 800D25D0
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800D25D4
  c->r[4]=rotl(c->r[5],12)&0x000007FFu; cr0(c,c->r[4]); // 800D25D8
  if (!crb(c,2)) { goto L_800D2628; } // 800D25DC
  c->r[0]=rotl(c->r[5],0)&0x7FFFFFFFu; // 800D25E0
  c->r[0]=c->r[3]|c->r[0]; cr0(c,c->r[0]); // 800D25E4
  if (!crb(c,2)) { goto L_800D25F4; } // 800D25E8
  c->f[1]=c->f[31]; // 800D25EC
  goto L_800D26E4; // 800D25F0
L_800D25F4:;
  {uint32_t ea=c->r[2]+0xFFFF9DF8u; c->f[0]=RF64(ea);} // 800D25F4
  c->r[3]=0u+0xFFFF0000u; // 800D25F8
  c->r[0]=c->r[3]+0x00003CB0u; // 800D25FC
  c->f[31]=c->f[31]*c->f[0]; // 800D2600
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 800D2604
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 800D2608
  c->r[5]=R32(c->r[1]+0x00000008u); // 800D260C
  c->r[3]=rotl(c->r[5],12)&0x000007FFu; // 800D2610
  c->r[4]=c->r[3]+0xFFFFFFCAu; // 800D2614
  if (!crb(c,0)) { goto L_800D2628; } // 800D2618
  {uint32_t ea=c->r[2]+0xFFFF9E00u; c->f[0]=RF64(ea);} // 800D261C
  c->f[1]=c->f[0]*c->f[31]; // 800D2620
  goto L_800D26E4; // 800D2624
L_800D2628:;
  cmps(c,0,(int32_t)c->r[4],2047); // 800D2628
  if (!crb(c,2)) { goto L_800D2638; } // 800D262C
  c->f[1]=c->f[31]+c->f[31]; // 800D2630
  goto L_800D26E4; // 800D2634
L_800D2638:;
  c->r[4]=c->r[4]+c->r[31]; // 800D2638
  cmps(c,0,(int32_t)c->r[4],2046); // 800D263C
  if (!crb(c,1)) { goto L_800D265C; } // 800D2640
  c->f[2]=c->f[31]; // 800D2644
  {uint32_t ea=c->r[2]+0xFFFF9E08u; c->f[1]=RF64(ea);} // 800D2648
  c->lr=0x800D2650u; f_800D22C4(c); // 800D264C
  {uint32_t ea=c->r[2]+0xFFFF9E08u; c->f[0]=RF64(ea);} // 800D2650
  c->f[1]=c->f[0]*c->f[1]; // 800D2654
  goto L_800D26E4; // 800D2658
L_800D265C:;
  cmps(c,0,(int32_t)c->r[4],0); // 800D265C
  if (!crb(c,1)) { goto L_800D267C; } // 800D2660
  c->r[3]=rotl(c->r[5],0)&0x800FFFFFu; // 800D2664
  c->r[0]=rotl(c->r[4],20)&0xFFF00000u; // 800D2668
  c->r[0]=c->r[3]|c->r[0]; // 800D266C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D2670
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800D2674
  goto L_800D26E4; // 800D2678
L_800D267C:;
  cmps(c,0,(int32_t)c->r[4],-54); // 800D267C
  if (crb(c,1)) { goto L_800D26C4; } // 800D2680
  c->r[3]=0u+0x00010000u; // 800D2684
  c->r[0]=c->r[3]+0xFFFFC350u; // 800D2688
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 800D268C
  if (!crb(c,1)) { goto L_800D26AC; } // 800D2690
  c->f[2]=c->f[31]; // 800D2694
  {uint32_t ea=c->r[2]+0xFFFF9E08u; c->f[1]=RF64(ea);} // 800D2698
  c->lr=0x800D26A0u; f_800D22C4(c); // 800D269C
  {uint32_t ea=c->r[2]+0xFFFF9E08u; c->f[0]=RF64(ea);} // 800D26A0
  c->f[1]=c->f[0]*c->f[1]; // 800D26A4
  goto L_800D26E4; // 800D26A8
L_800D26AC:;
  c->f[2]=c->f[31]; // 800D26AC
  {uint32_t ea=c->r[2]+0xFFFF9E00u; c->f[1]=RF64(ea);} // 800D26B0
  c->lr=0x800D26B8u; f_800D22C4(c); // 800D26B4
  {uint32_t ea=c->r[2]+0xFFFF9E00u; c->f[0]=RF64(ea);} // 800D26B8
  c->f[1]=c->f[0]*c->f[1]; // 800D26BC
  goto L_800D26E4; // 800D26C0
L_800D26C4:;
  c->r[0]=c->r[4]+0x00000036u; // 800D26C4
  c->r[3]=rotl(c->r[5],0)&0x800FFFFFu; // 800D26C8
  c->r[0]=rotl(c->r[0],20)&0xFFF00000u; // 800D26CC
  {uint32_t ea=c->r[2]+0xFFFF9E10u; c->f[1]=RF64(ea);} // 800D26D0
  c->r[0]=c->r[3]|c->r[0]; // 800D26D4
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D26D8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800D26DC
  c->f[1]=c->f[1]*c->f[0]; // 800D26E0
L_800D26E4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D26E4
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 800D26E8
  c->r[31]=R32(c->r[1]+0x00000014u); // 800D26EC
  c->lr=c->r[0]; // 800D26F0
  c->r[1]=c->r[1]+0x00000020u; // 800D26F4
  return; // 800D26F8
}

// fn_800D26FC
void f_800D26FC(Ctx* __restrict c) {
  trace_call(0x800D26FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D26FC
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800D2700
  c->r[0]=R32(c->r[1]+0x00000008u); // 800D2704
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800D2708
  c->r[5]=rotl(c->r[0],12)&0x000007FFu; // 800D270C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800D2710
  c->r[7]=c->r[5]+0xFFFFFC01u; // 800D2714
  cmps(c,0,(int32_t)c->r[7],52); // 800D2718
  if (!crb(c,0)) { goto L_800D2734; } // 800D271C
  cmps(c,0,(int32_t)c->r[7],20); // 800D2720
  if (!crb(c,0)) { goto L_800D2804; } // 800D2724
  cmps(c,0,(int32_t)c->r[7],0); // 800D2728
  if (!crb(c,0)) { goto L_800D27A8; } // 800D272C
  goto L_800D2740; // 800D2730
L_800D2734:;
  cmps(c,0,(int32_t)c->r[7],1024); // 800D2734
  if (crb(c,2)) { goto L_800D27F8; } // 800D2738
  goto L_800D285C; // 800D273C
L_800D2740:;
  c->r[5]=rotl(c->r[0],0)&0x7FFFFFFFu; // 800D2740
  c->r[5]=c->r[5]|c->r[4]; cr0(c,c->r[5]); // 800D2744
  if (!crb(c,2)) { goto L_800D2750; } // 800D2748
  goto L_800D285C; // 800D274C
L_800D2750:;
  c->r[6]=rotl(c->r[0],0)&0x000FFFFFu; // 800D2750
  c->r[5]=0u+0x80380000u; // 800D2754
  c->r[4]=c->r[4]|c->r[6]; // 800D2758
  c->r[0]=rotl(c->r[0],0)&0xFFFE0000u; // 800D275C
  c->r[7]=0u-c->r[4]; // 800D2760
  c->r[6]=rotl(c->r[3],3)&0xFFFFFFF8u; // 800D2764
  c->r[4]=c->r[4]|c->r[7]; // 800D2768
  c->r[5]=c->r[5]+0xFFFFDFB0u; // 800D276C
  c->r[4]=rotl(c->r[4],20)&0x00080000u; // 800D2770
  {uint32_t ea=c->r[5]+c->r[6]; c->f[0]=RF64(ea);} // 800D2774
  c->r[0]=c->r[0]|c->r[4]; // 800D2778
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D277C
  c->r[0]=rotl(c->r[3],31)&0x80000000u; // 800D2780
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800D2784
  c->f[1]=c->f[1]+c->f[0]; // 800D2788
  c->f[0]=c->f[1]-c->f[0]; // 800D278C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 800D2790
  c->r[3]=R32(c->r[1]+0x00000010u); // 800D2794
  c->r[0]=(rotl(c->r[3],0)&0x7FFFFFFFu)|(c->r[0]&~0x7FFFFFFFu); // 800D2798
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D279C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 800D27A0
  goto L_800D285C; // 800D27A4
L_800D27A8:;
  c->r[5]=0u+0x00100000u; // 800D27A8
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 800D27AC
  c->r[6]=sraw(c,c->r[5],(c->r[7])&63); // 800D27B0
  c->r[5]=c->r[0]&c->r[6]; // 800D27B4
  c->r[5]=c->r[4]|c->r[5]; cr0(c,c->r[5]); // 800D27B8
  if (!crb(c,2)) { goto L_800D27C4; } // 800D27BC
  goto L_800D285C; // 800D27C0
L_800D27C4:;
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 800D27C4
  c->r[5]=c->r[0]&c->r[6]; // 800D27C8
  c->r[5]=c->r[4]|c->r[5]; cr0(c,c->r[5]); // 800D27CC
  if (crb(c,2)) { goto L_800D2838; } // 800D27D0
  cmps(c,0,(int32_t)c->r[7],19); // 800D27D4
  if (!crb(c,2)) { goto L_800D27E4; } // 800D27D8
  c->r[4]=0u+0x40000000u; // 800D27DC
  goto L_800D2838; // 800D27E0
L_800D27E4:;
  c->r[5]=0u+0x00020000u; // 800D27E4
  c->r[0]=c->r[0]&~c->r[6]; // 800D27E8
  c->r[5]=sraw(c,c->r[5],(c->r[7])&63); // 800D27EC
  c->r[0]=c->r[5]|c->r[0]; // 800D27F0
  goto L_800D2838; // 800D27F4
L_800D27F8:;
  c->f[1]=c->f[1]+c->f[1]; // 800D27F8
  goto L_800D285C; // 800D27FC
  goto L_800D285C; // 800D2800
L_800D2804:;
  c->r[6]=c->r[7]+0xFFFFFFECu; // 800D2804
  c->r[5]=0u+0xFFFFFFFFu; // 800D2808
  c->r[7]=((c->r[6])&0x20)?0u:(c->r[5]>>((c->r[6])&31)); // 800D280C
  c->r[5]=c->r[4]&c->r[7]; cr0(c,c->r[5]); // 800D2810
  if (!crb(c,2)) { goto L_800D281C; } // 800D2814
  goto L_800D285C; // 800D2818
L_800D281C:;
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800D281C
  c->r[5]=c->r[4]&c->r[7]; cr0(c,c->r[5]); // 800D2820
  if (crb(c,2)) { goto L_800D2838; } // 800D2824
  c->r[5]=0u+0x40000000u; // 800D2828
  c->r[4]=c->r[4]&~c->r[7]; // 800D282C
  c->r[5]=sraw(c,c->r[5],(c->r[6])&63); // 800D2830
  c->r[4]=c->r[5]|c->r[4]; // 800D2834
L_800D2838:;
  c->r[5]=0u+0x80380000u; // 800D2838
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D283C
  c->r[0]=rotl(c->r[3],3)&0xFFFFFFF8u; // 800D2840
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800D2844
  c->r[5]=c->r[5]+0xFFFFDFB0u; // 800D2848
  {uint32_t ea=c->r[5]+c->r[0]; c->f[0]=RF64(ea);} // 800D284C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800D2850
  c->f[1]=c->f[1]+c->f[0]; // 800D2854
  c->f[1]=c->f[1]-c->f[0]; // 800D2858
L_800D285C:;
  c->r[1]=c->r[1]+0x00000020u; // 800D285C
  return; // 800D2860
}

// sin
void f_800D2864(Ctx* __restrict c) {
  trace_call(0x800D2864u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2864
  c->r[0]=c->lr; // 800D2868
  c->r[3]=0u+0x3FE90000u; // 800D286C
  {uint32_t ea=c->r[2]+0xFFFF9E18u; c->f[2]=RF64(ea);} // 800D2870
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800D2874
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D2878
  c->r[0]=c->r[3]+0x000021FBu; // 800D287C
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D2880
  c->r[3]=rotl(c->r[3],0)&0x7FFFFFFFu; // 800D2884
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800D2888
  if (crb(c,1)) { goto L_800D289C; } // 800D288C
  c->r[3]=0u+0x00000000u; // 800D2890
  c->lr=0x800D2898u; f_800D1C38(c); // 800D2894
  goto L_800D2920; // 800D2898
L_800D289C:;
  c->r[0]=0u+0x7FF00000u; // 800D289C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800D28A0
  if (crb(c,0)) { goto L_800D28B0; } // 800D28A4
  c->f[1]=c->f[1]-c->f[1]; // 800D28A8
  goto L_800D2920; // 800D28AC
L_800D28B0:;
  c->r[3]=c->r[1]+0x00000010u; // 800D28B0
  c->lr=0x800D28B8u; f_800D0080(c); // 800D28B4
  c->r[0]=rotl(c->r[3],0)&0x00000003u; cr0(c,c->r[0]); // 800D28B8
  if (crb(c,2)) { goto L_800D28D4; } // 800D28BC
  cmps(c,0,(int32_t)c->r[0],1); // 800D28C0
  if (crb(c,2)) { goto L_800D28E8; } // 800D28C4
  cmps(c,0,(int32_t)c->r[0],2); // 800D28C8
  if (crb(c,2)) { goto L_800D28F8; } // 800D28CC
  goto L_800D2910; // 800D28D0
L_800D28D4:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 800D28D4
  c->r[3]=0u+0x00000001u; // 800D28D8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 800D28DC
  c->lr=0x800D28E4u; f_800D1C38(c); // 800D28E0
  goto L_800D2920; // 800D28E4
L_800D28E8:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 800D28E8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 800D28EC
  c->lr=0x800D28F4u; f_800D0470(c); // 800D28F0
  goto L_800D2920; // 800D28F4
L_800D28F8:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 800D28F8
  c->r[3]=0u+0x00000001u; // 800D28FC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 800D2900
  c->lr=0x800D2908u; f_800D1C38(c); // 800D2904
  c->f[1]=-c->f[1]; // 800D2908
  goto L_800D2920; // 800D290C
L_800D2910:;
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 800D2910
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 800D2914
  c->lr=0x800D291Cu; f_800D0470(c); // 800D2918
  c->f[1]=-c->f[1]; // 800D291C
L_800D2920:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D2920
  c->lr=c->r[0]; // 800D2924
  c->r[1]=c->r[1]+0x00000020u; // 800D2928
  return; // 800D292C
}

// tan
void f_800D2930(Ctx* __restrict c) {
  trace_call(0x800D2930u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2930
  c->r[0]=c->lr; // 800D2934
  c->r[3]=0u+0x3FE90000u; // 800D2938
  {uint32_t ea=c->r[2]+0xFFFF9E20u; c->f[2]=RF64(ea);} // 800D293C
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800D2940
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D2944
  c->r[0]=c->r[3]+0x000021FBu; // 800D2948
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D294C
  c->r[3]=rotl(c->r[3],0)&0x7FFFFFFFu; // 800D2950
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800D2954
  if (crb(c,1)) { goto L_800D2968; } // 800D2958
  c->r[3]=0u+0x00000001u; // 800D295C
  c->lr=0x800D2964u; f_800D1CF8(c); // 800D2960
  goto L_800D2998; // 800D2964
L_800D2968:;
  c->r[0]=0u+0x7FF00000u; // 800D2968
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800D296C
  if (crb(c,0)) { goto L_800D297C; } // 800D2970
  c->f[1]=c->f[1]-c->f[1]; // 800D2974
  goto L_800D2998; // 800D2978
L_800D297C:;
  c->r[3]=c->r[1]+0x00000010u; // 800D297C
  c->lr=0x800D2984u; f_800D0080(c); // 800D2980
  c->r[0]=rotl(c->r[3],1)&0x00000002u; // 800D2984
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 800D2988
  {uint32_t ea=c->r[1]+0x00000018u; c->f[2]=RF64(ea);} // 800D298C
  c->r[3]=addc(c,~c->r[0],0x00000001u,1); // 800D2990
  c->lr=0x800D2998u; f_800D1CF8(c); // 800D2994
L_800D2998:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D2998
  c->lr=c->r[0]; // 800D299C
  c->r[1]=c->r[1]+0x00000020u; // 800D29A0
  return; // 800D29A4
}

// acos
void f_800D29A8(Ctx* __restrict c) {
  trace_call(0x800D29A8u);
  f_800CE738(c); return; // 800D29A8
}

// asin
void f_800D29AC(Ctx* __restrict c) {
  trace_call(0x800D29ACu);
  f_800CEA04(c); return; // 800D29AC
}

// atan2
void f_800D29B0(Ctx* __restrict c) {
  trace_call(0x800D29B0u);
  f_800CEC9C(c); return; // 800D29B0
}

// fmod
void f_800D29B4(Ctx* __restrict c) {
  trace_call(0x800D29B4u);
  f_800CEEF4(c); return; // 800D29B4
}

// fn_800D29B8
void f_800D29B8(Ctx* __restrict c) {
  trace_call(0x800D29B8u);
  f_800CF124(c); return; // 800D29B8
}

// fn_800D29BC
void f_800D29BC(Ctx* __restrict c) {
  trace_call(0x800D29BCu);
  f_800CF4A4(c); return; // 800D29BC
}

// log10
void f_800D29C0(Ctx* __restrict c) {
  trace_call(0x800D29C0u);
  f_800CF758(c); return; // 800D29C0
}

// pow
void f_800D29C4(Ctx* __restrict c) {
  trace_call(0x800D29C4u);
  f_800CF86C(c); return; // 800D29C4
}

// __ieee754_sqrt
void f_800D29C8(Ctx* __restrict c) {
  trace_call(0x800D29C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D29C8
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[1]);} // 800D29CC
  c->r[6]=R32(c->r[1]+0x00000008u); // 800D29D0
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800D29D4
  c->r[3]=rotl(c->r[6],0)&0x7FF00000u; // 800D29D8
  c->r[3]=c->r[3]+0x80100000u; // 800D29DC
  cmpu(c,0,c->r[3],0x00000000u); // 800D29E0
  if (!crb(c,2)) { goto L_800D29FC; } // 800D29E4
  c->f[0]=c->f[1]*c->f[1]; // 800D29E8
  c->r[0]=0u+0x00000021u; // 800D29EC
  W32(c->r[13]+0xFFFF97B0u,c->r[0]); // 800D29F0
  c->f[1]=c->f[1]+c->f[0]; // 800D29F4
  goto L_800D2C08; // 800D29F8
L_800D29FC:;
  cmps(c,1,(int32_t)c->r[6],0); // 800D29FC
  if (crb(c,5)) { goto L_800D2A2C; } // 800D2A00
  c->r[3]=rotl(c->r[6],0)&0x7FFFFFFFu; // 800D2A04
  c->r[3]=c->r[0]|c->r[3]; cr0(c,c->r[3]); // 800D2A08
  if (!crb(c,2)) { goto L_800D2A14; } // 800D2A0C
  goto L_800D2C08; // 800D2A10
L_800D2A14:;
  if (!crb(c,4)) { goto L_800D2A2C; } // 800D2A14
  c->r[3]=0u+0x804D0000u; // 800D2A18
  c->r[0]=0u+0x00000021u; // 800D2A1C
  W32(c->r[13]+0xFFFF97B0u,c->r[0]); // 800D2A20
  {uint32_t ea=c->r[3]+0x000038A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D2A24
  goto L_800D2C08; // 800D2A28
L_800D2A2C:;
  c->r[3]=sraw(c,c->r[6],20); cr0(c,c->r[3]); // 800D2A2C
  if (!crb(c,2)) { goto L_800D2A80; } // 800D2A30
  goto L_800D2A48; // 800D2A34
L_800D2A38:;
  c->r[4]=rotl(c->r[0],21)&0x001FFFFFu; // 800D2A38
  c->r[0]=rotl(c->r[0],21)&0xFFE00000u; // 800D2A3C
  c->r[6]=c->r[6]|c->r[4]; // 800D2A40
  c->r[3]=c->r[3]+0xFFFFFFEBu; // 800D2A44
L_800D2A48:;
  cmps(c,0,(int32_t)c->r[6],0); // 800D2A48
  if (crb(c,2)) { IRQCHK(c); goto L_800D2A38; } // 800D2A4C
  c->r[7]=0u+0x00000000u; // 800D2A50
  goto L_800D2A60; // 800D2A54
L_800D2A58:;
  c->r[6]=rotl(c->r[6],1)&0xFFFFFFFEu; // 800D2A58
  c->r[7]=c->r[7]+0x00000001u; // 800D2A5C
L_800D2A60:;
  c->r[4]=rotl(c->r[6],0)&0x00100000u; cr0(c,c->r[4]); // 800D2A60
  if (crb(c,2)) { IRQCHK(c); goto L_800D2A58; } // 800D2A64
  c->r[4]=addc(c,~c->r[7],0x00000020u,1); // 800D2A68
  c->r[5]=c->r[7]+0xFFFFFFFFu; // 800D2A6C
  c->r[4]=((c->r[4])&0x20)?0u:(c->r[0]>>((c->r[4])&31)); // 800D2A70
  c->r[0]=((c->r[7])&0x20)?0u:(c->r[0]<<((c->r[7])&31)); // 800D2A74
  c->r[3]=c->r[3]-c->r[5]; // 800D2A78
  c->r[6]=c->r[6]|c->r[4]; // 800D2A7C
L_800D2A80:;
  c->r[4]=c->r[3]+0xFFFFFC01u; // 800D2A80
  c->r[5]=rotl(c->r[6],0)&0x000FFFFFu; // 800D2A84
  c->r[4]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[4]); // 800D2A88
  c->r[6]=c->r[5]|0x00100000u; // 800D2A8C
  if (crb(c,2)) { goto L_800D2AA4; } // 800D2A90
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 800D2A94
  c->r[4]=c->r[6]+c->r[6]; // 800D2A98
  c->r[6]=c->r[5]+c->r[4]; // 800D2A9C
  c->r[0]=c->r[0]+c->r[0]; // 800D2AA0
L_800D2AA4:;
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 800D2AA4
  c->r[4]=c->r[6]+c->r[6]; // 800D2AA8
  c->r[6]=c->r[5]+c->r[4]; // 800D2AAC
  c->r[0]=c->r[0]+c->r[0]; // 800D2AB0
  c->r[9]=0u+0x00000000u; // 800D2AB4
  c->r[11]=0u+0x00000000u; // 800D2AB8
  c->r[10]=0u+0x00000000u; // 800D2ABC
  c->r[12]=0u+0x00000000u; // 800D2AC0
  c->r[7]=0u+0x00200000u; // 800D2AC4
  goto L_800D2AF8; // 800D2AC8
L_800D2ACC:;
  c->r[4]=c->r[11]+c->r[7]; // 800D2ACC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[6]); // 800D2AD0
  if (crb(c,1)) { goto L_800D2AE4; } // 800D2AD4
  c->r[11]=c->r[4]+c->r[7]; // 800D2AD8
  c->r[6]=c->r[6]-c->r[4]; // 800D2ADC
  c->r[12]=c->r[12]+c->r[7]; // 800D2AE0
L_800D2AE4:;
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 800D2AE4
  c->r[4]=c->r[6]+c->r[6]; // 800D2AE8
  c->r[6]=c->r[5]+c->r[4]; // 800D2AEC
  c->r[0]=c->r[0]+c->r[0]; // 800D2AF0
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800D2AF4
L_800D2AF8:;
  cmps(c,0,(int32_t)c->r[7],0); // 800D2AF8
  if (!crb(c,2)) { IRQCHK(c); goto L_800D2ACC; } // 800D2AFC
  c->r[7]=0u+0x80000000u; // 800D2B00
  goto L_800D2B70; // 800D2B04
L_800D2B08:;
  cmps(c,0,(int32_t)c->r[11],(int32_t)c->r[6]); // 800D2B08
  c->r[5]=c->r[11]|c->r[11]; // 800D2B0C
  c->r[8]=c->r[9]+c->r[7]; // 800D2B10
  if (crb(c,0)) { goto L_800D2B24; } // 800D2B14
  if (!crb(c,2)) { goto L_800D2B5C; } // 800D2B18
  cmpu(c,0,c->r[8],c->r[0]); // 800D2B1C
  if (crb(c,1)) { goto L_800D2B5C; } // 800D2B20
L_800D2B24:;
  c->r[4]=rotl(c->r[8],0)&0x80000000u; // 800D2B24
  c->r[9]=c->r[8]+c->r[7]; // 800D2B28
  c->r[4]=c->r[4]+0x80000000u; // 800D2B2C
  cmpu(c,0,c->r[4],0x00000000u); // 800D2B30
  if (!crb(c,2)) { goto L_800D2B44; } // 800D2B34
  c->r[4]=rotl(c->r[9],0)&0x80000000u; cr0(c,c->r[4]); // 800D2B38
  if (!crb(c,2)) { goto L_800D2B44; } // 800D2B3C
  c->r[11]=c->r[11]+0x00000001u; // 800D2B40
L_800D2B44:;
  cmpu(c,0,c->r[0],c->r[8]); // 800D2B44
  c->r[6]=c->r[6]-c->r[5]; // 800D2B48
  if (!crb(c,0)) { goto L_800D2B54; } // 800D2B4C
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 800D2B50
L_800D2B54:;
  c->r[0]=c->r[0]-c->r[8]; // 800D2B54
  c->r[10]=c->r[10]+c->r[7]; // 800D2B58
L_800D2B5C:;
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 800D2B5C
  c->r[4]=c->r[6]+c->r[6]; // 800D2B60
  c->r[6]=c->r[5]+c->r[4]; // 800D2B64
  c->r[0]=c->r[0]+c->r[0]; // 800D2B68
  c->r[7]=rotl(c->r[7],31)&0x7FFFFFFFu; // 800D2B6C
L_800D2B70:;
  cmps(c,0,(int32_t)c->r[7],0); // 800D2B70
  if (!crb(c,2)) { IRQCHK(c); goto L_800D2B08; } // 800D2B74
  c->r[0]=c->r[6]|c->r[0]; cr0(c,c->r[0]); // 800D2B78
  if (crb(c,2)) { goto L_800D2BD4; } // 800D2B7C
  {uint32_t ea=c->r[2]+0xFFFF9E28u; c->f[0]=RF64(ea);} // 800D2B80
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 800D2B84
  fcmp(c,0,c->f[0],c->f[0]); // 800D2B88
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D2B8C
  if (!crb(c,2)) { goto L_800D2BD4; } // 800D2B90
  c->r[0]=c->r[10]+0x00010000u; // 800D2B94
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 800D2B98
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800D2B9C
  if (!crb(c,2)) { goto L_800D2BB0; } // 800D2BA0
  c->r[10]=0u+0x00000000u; // 800D2BA4
  c->r[12]=c->r[12]+0x00000001u; // 800D2BA8
  goto L_800D2BD4; // 800D2BAC
L_800D2BB0:;
  fcmp(c,0,c->f[0],c->f[0]); // 800D2BB0
  if (!crb(c,1)) { goto L_800D2BCC; } // 800D2BB4
  cmpu(c,0,c->r[0],0x0000FFFEu); // 800D2BB8
  if (!crb(c,2)) { goto L_800D2BC4; } // 800D2BBC
  c->r[12]=c->r[12]+0x00000001u; // 800D2BC0
L_800D2BC4:;
  c->r[10]=c->r[10]+0x00000002u; // 800D2BC4
  goto L_800D2BD4; // 800D2BC8
L_800D2BCC:;
  c->r[0]=rotl(c->r[10],0)&0x00000001u; // 800D2BCC
  c->r[10]=c->r[10]+c->r[0]; // 800D2BD0
L_800D2BD4:;
  c->r[0]=rotl(c->r[12],0)&0x00000001u; // 800D2BD4
  c->r[4]=sraw(c,c->r[12],1); // 800D2BD8
  cmps(c,0,(int32_t)c->r[0],1); // 800D2BDC
  c->r[5]=rotl(c->r[10],31)&0x7FFFFFFFu; // 800D2BE0
  c->r[4]=c->r[4]+0x3FE00000u; // 800D2BE4
  if (!crb(c,2)) { goto L_800D2BF0; } // 800D2BE8
  c->r[5]=c->r[5]|0x80000000u; // 800D2BEC
L_800D2BF0:;
  c->r[0]=c->r[3]+0xFFFFFC01u; // 800D2BF0
  W32(c->r[1]+0x00000014u,c->r[5]); // 800D2BF4
  c->r[0]=rotl(c->r[0],19)&0xFFF00000u; // 800D2BF8
  c->r[4]=c->r[4]+c->r[0]; // 800D2BFC
  W32(c->r[1]+0x00000010u,c->r[4]); // 800D2C00
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 800D2C04
L_800D2C08:;
  c->r[1]=c->r[1]+0x00000020u; // 800D2C08
  return; // 800D2C0C
}

// nan
void f_800D2C10(Ctx* __restrict c) {
  trace_call(0x800D2C10u);
  return; // 800D2C10
}

// sqrt
void f_800D2C14(Ctx* __restrict c) {
  trace_call(0x800D2C14u);
  f_800D29C8(c); return; // 800D2C14
}

// stricmp
void f_800D2C18(Ctx* __restrict c) {
  trace_call(0x800D2C18u);
  c->r[5]=0u+0x80390000u; // 800D2C18
  c->r[5]=c->r[5]+0xFFFFC268u; // 800D2C1C
  c->r[6]=R32(c->r[5]+0x00000038u); // 800D2C20
L_800D2C24:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 800D2C24
  c->r[5]=0u+0x00000001u; // 800D2C28
  c->r[3]=c->r[3]+0x00000001u; // 800D2C2C
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800D2C30
  cmpu(c,0,c->r[7],0x000000FFu); // 800D2C34
  if (crb(c,1)) { goto L_800D2C40; } // 800D2C38
  c->r[5]=0u+0x00000000u; // 800D2C3C
L_800D2C40:;
  cmps(c,0,(int32_t)c->r[5],0); // 800D2C40
  if (crb(c,2)) { goto L_800D2C4C; } // 800D2C44
  goto L_800D2C54; // 800D2C48
L_800D2C4C:;
  c->r[5]=R32(c->r[6]+0x00000010u); // 800D2C4C
  c->r[7]=R8(c->r[5]+c->r[7]); // 800D2C50
L_800D2C54:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 800D2C54
  c->r[7]=(uint32_t)(int32_t)(int8_t)c->r[7]; // 800D2C58
  c->r[5]=0u+0x00000001u; // 800D2C5C
  c->r[4]=c->r[4]+0x00000001u; // 800D2C60
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800D2C64
  cmpu(c,0,c->r[0],0x000000FFu); // 800D2C68
  if (crb(c,1)) { goto L_800D2C74; } // 800D2C6C
  c->r[5]=0u+0x00000000u; // 800D2C70
L_800D2C74:;
  cmps(c,0,(int32_t)c->r[5],0); // 800D2C74
  if (crb(c,2)) { goto L_800D2C80; } // 800D2C78
  goto L_800D2C88; // 800D2C7C
L_800D2C80:;
  c->r[5]=R32(c->r[6]+0x00000010u); // 800D2C80
  c->r[0]=R8(c->r[5]+c->r[0]); // 800D2C84
L_800D2C88:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800D2C88
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 800D2C8C
  if (!crb(c,0)) { goto L_800D2C9C; } // 800D2C90
  c->r[3]=0u+0xFFFFFFFFu; // 800D2C94
  return; // 800D2C98
L_800D2C9C:;
  if (!crb(c,1)) { goto L_800D2CA8; } // 800D2C9C
  c->r[3]=0u+0x00000001u; // 800D2CA0
  return; // 800D2CA4
L_800D2CA8:;
  cmps(c,0,(int32_t)c->r[7],0); // 800D2CA8
  if (!crb(c,2)) { IRQCHK(c); goto L_800D2C24; } // 800D2CAC
  c->r[3]=0u+0x00000000u; // 800D2CB0
  return; // 800D2CB4
}

// fn_800D2CB8
void f_800D2CB8(Ctx* __restrict c) {
  trace_call(0x800D2CB8u);
  f_800C5BE4(c); return; // 800D2CB8
}

// fn_800D2CBC
void f_800D2CBC(Ctx* __restrict c) {
  trace_call(0x800D2CBCu);
  /* twi */ // 800D2CBC
  return; // 800D2CC0
}

// fn_800D2CC4
void f_800D2CC4(Ctx* __restrict c) {
  trace_call(0x800D2CC4u);
  /* twi */ // 800D2CC4
  return; // 800D2CC8
}

// fn_800D2CCC
void f_800D2CCC(Ctx* __restrict c) {
  trace_call(0x800D2CCCu);
  /* twi */ // 800D2CCC
  return; // 800D2CD0
}

// fn_800D2CD4
void f_800D2CD4(Ctx* __restrict c) {
  trace_call(0x800D2CD4u);
  /* twi */ // 800D2CD4
  return; // 800D2CD8
}

// gdev_cc_initialize
void f_800D2CDC(Ctx* __restrict c) {
  trace_call(0x800D2CDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2CDC
  c->r[0]=c->lr; // 800D2CE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2CE4
  c->lr=0x800D2CECu; f_801C268C(c); // 800D2CE8
  c->r[3]=0u+0x803D0000u; // 800D2CEC
  c->r[4]=0u+0x803D0000u; // 800D2CF0
  c->r[3]=c->r[3]+0x00004C30u; // 800D2CF4
  c->r[5]=0u+0x00000500u; // 800D2CF8
  c->r[4]=c->r[4]+0x00004730u; // 800D2CFC
  c->lr=0x800D2D04u; f_800D2F98(c); // 800D2D00
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D2D04
  c->r[3]=0u+0x00000000u; // 800D2D08
  c->lr=c->r[0]; // 800D2D0C
  c->r[1]=c->r[1]+0x00000010u; // 800D2D10
  return; // 800D2D14
}

// gdev_cc_shutdown
void f_800D2D18(Ctx* __restrict c) {
  trace_call(0x800D2D18u);
  c->r[3]=0u+0x00000000u; // 800D2D18
  return; // 800D2D1C
}

// gdev_cc_open
void f_800D2D20(Ctx* __restrict c) {
  trace_call(0x800D2D20u);
  c->r[0]=R32(c->r[13]+0xFFFF97E0u); // 800D2D20
  cmps(c,0,(int32_t)c->r[0],0); // 800D2D24
  if (crb(c,2)) { goto L_800D2D34; } // 800D2D28
  c->r[3]=0u+0xFFFFD8EBu; // 800D2D2C
  return; // 800D2D30
L_800D2D34:;
  c->r[0]=0u+0x00000001u; // 800D2D34
  W32(c->r[13]+0xFFFF97E0u,c->r[0]); // 800D2D38
  c->r[3]=0u+0x00000000u; // 800D2D3C
  return; // 800D2D40
}

// gdev_cc_close
void f_800D2D44(Ctx* __restrict c) {
  trace_call(0x800D2D44u);
  c->r[3]=0u+0x00000000u; // 800D2D44
  return; // 800D2D48
}

// gdev_cc_read
void f_800D2D4C(Ctx* __restrict c) {
  trace_call(0x800D2D4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFAE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2D4C
  c->r[0]=c->lr; // 800D2D50
  W32(c->r[1]+0x00000524u,c->r[0]); // 800D2D54
  {uint32_t ea=c->r[1]+0x0000050Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D2D58
  c->r[27]=c->r[3]|c->r[3]; // 800D2D5C
  c->r[28]=c->r[4]|c->r[4]; // 800D2D60
  c->r[30]=0u+0x00000000u; // 800D2D64
  c->r[0]=R32(c->r[13]+0xFFFF97E0u); // 800D2D68
  cmps(c,0,(int32_t)c->r[0],0); // 800D2D6C
  if (!crb(c,2)) { goto L_800D2D7C; } // 800D2D70
  c->r[3]=0u+0xFFFFD8EFu; // 800D2D74
  goto L_800D2DEC; // 800D2D78
L_800D2D7C:;
  c->r[31]=0u+0x803D0000u; // 800D2D7C
  goto L_800D2DC0; // 800D2D80
L_800D2D84:;
  c->r[30]=0u+0x00000000u; // 800D2D84
  c->lr=0x800D2D8Cu; f_801C273C(c); // 800D2D88
  cmps(c,0,(int32_t)c->r[3],0); // 800D2D8C
  c->r[29]=c->r[3]|c->r[3]; // 800D2D90
  if (crb(c,2)) { goto L_800D2DC0; } // 800D2D94
  c->r[4]=c->r[28]|c->r[28]; // 800D2D98
  c->r[3]=c->r[1]+0x00000008u; // 800D2D9C
  c->lr=0x800D2DA4u; f_801C27E0(c); // 800D2DA0
  cmps(c,0,(int32_t)c->r[3],0); // 800D2DA4
  c->r[30]=c->r[3]|c->r[3]; // 800D2DA8
  if (!crb(c,2)) { goto L_800D2DC0; } // 800D2DAC
  c->r[5]=c->r[29]|c->r[29]; // 800D2DB0
  c->r[3]=c->r[31]+0x00004C30u; // 800D2DB4
  c->r[4]=c->r[1]+0x00000008u; // 800D2DB8
  c->lr=0x800D2DC0u; f_800D2FBC(c); // 800D2DBC
L_800D2DC0:;
  c->r[3]=c->r[31]+0x00004C30u; // 800D2DC0
  c->lr=0x800D2DC8u; f_800D2F90(c); // 800D2DC4
  cmpu(c,0,c->r[3],c->r[28]); // 800D2DC8
  if (crb(c,0)) { IRQCHK(c); goto L_800D2D84; } // 800D2DCC
  cmps(c,0,(int32_t)c->r[30],0); // 800D2DD0
  if (!crb(c,2)) { goto L_800D2DE8; } // 800D2DD4
  c->r[4]=c->r[27]|c->r[27]; // 800D2DD8
  c->r[5]=c->r[28]|c->r[28]; // 800D2DDC
  c->r[3]=c->r[31]+0x00004C30u; // 800D2DE0
  c->lr=0x800D2DE8u; f_800D30C4(c); // 800D2DE4
L_800D2DE8:;
  c->r[3]=c->r[30]|c->r[30]; // 800D2DE8
L_800D2DEC:;
  {uint32_t ea=c->r[1]+0x0000050Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D2DEC
  c->r[0]=R32(c->r[1]+0x00000524u); // 800D2DF0
  c->lr=c->r[0]; // 800D2DF4
  c->r[1]=c->r[1]+0x00000520u; // 800D2DF8
  return; // 800D2DFC
}

// gdev_cc_write
void f_800D2E00(Ctx* __restrict c) {
  trace_call(0x800D2E00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2E00
  c->r[0]=c->lr; // 800D2E04
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2E08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D2E0C
  c->r[31]=c->r[4]|c->r[4]; // 800D2E10
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D2E14
  c->r[30]=c->r[3]|c->r[3]; // 800D2E18
  c->r[0]=R32(c->r[13]+0xFFFF97E0u); // 800D2E1C
  cmps(c,0,(int32_t)c->r[0],0); // 800D2E20
  if (!crb(c,2)) { goto L_800D2E50; } // 800D2E24
  c->r[3]=0u+0xFFFFD8EFu; // 800D2E28
  goto L_800D2E5C; // 800D2E2C
  goto L_800D2E50; // 800D2E30
L_800D2E34:;
  c->r[3]=c->r[30]|c->r[30]; // 800D2E34
  c->r[4]=c->r[31]|c->r[31]; // 800D2E38
  c->lr=0x800D2E40u; f_801C2860(c); // 800D2E3C
  cmps(c,0,(int32_t)c->r[3],0); // 800D2E40
  if (crb(c,2)) { goto L_800D2E58; } // 800D2E44
  c->r[30]=c->r[30]+c->r[3]; // 800D2E48
  c->r[31]=c->r[31]-c->r[3]; // 800D2E4C
L_800D2E50:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D2E50
  if (crb(c,1)) { IRQCHK(c); goto L_800D2E34; } // 800D2E54
L_800D2E58:;
  c->r[3]=0u+0x00000000u; // 800D2E58
L_800D2E5C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D2E5C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D2E60
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D2E64
  c->lr=c->r[0]; // 800D2E68
  c->r[1]=c->r[1]+0x00000010u; // 800D2E6C
  return; // 800D2E70
}

// gdev_cc_pre_continue
void f_800D2E74(Ctx* __restrict c) {
  trace_call(0x800D2E74u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2E74
  c->r[0]=c->lr; // 800D2E78
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2E7C
  c->lr=0x800D2E84u; f_801C2974(c); // 800D2E80
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D2E84
  c->r[3]=0u+0x00000000u; // 800D2E88
  c->lr=c->r[0]; // 800D2E8C
  c->r[1]=c->r[1]+0x00000010u; // 800D2E90
  return; // 800D2E94
}

// gdev_cc_post_stop
void f_800D2E98(Ctx* __restrict c) {
  trace_call(0x800D2E98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2E98
  c->r[0]=c->lr; // 800D2E9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2EA0
  c->lr=0x800D2EA8u; f_801C2970(c); // 800D2EA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D2EA8
  c->r[3]=0u+0x00000000u; // 800D2EAC
  c->lr=c->r[0]; // 800D2EB0
  c->r[1]=c->r[1]+0x00000010u; // 800D2EB4
  return; // 800D2EB8
}

// gdev_cc_peek
void f_800D2EBC(Ctx* __restrict c) {
  trace_call(0x800D2EBCu);
  {uint32_t ea=c->r[1]+0xFFFFFAF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2EBC
  c->r[0]=c->lr; // 800D2EC0
  W32(c->r[1]+0x00000514u,c->r[0]); // 800D2EC4
  W32(c->r[1]+0x0000050Cu,c->r[31]); // 800D2EC8
  c->lr=0x800D2ED0u; f_801C273C(c); // 800D2ECC
  cmps(c,0,(int32_t)c->r[3],0); // 800D2ED0
  c->r[31]=c->r[3]|c->r[3]; // 800D2ED4
  if (crb(c,1)) { goto L_800D2EE4; } // 800D2ED8
  c->r[3]=0u+0x00000000u; // 800D2EDC
  goto L_800D2F1C; // 800D2EE0
L_800D2EE4:;
  c->r[4]=c->r[31]|c->r[31]; // 800D2EE4
  c->r[3]=c->r[1]+0x00000008u; // 800D2EE8
  c->lr=0x800D2EF0u; f_801C27E0(c); // 800D2EEC
  cmps(c,0,(int32_t)c->r[3],0); // 800D2EF0
  if (!crb(c,2)) { goto L_800D2F10; } // 800D2EF4
  c->r[3]=0u+0x803D0000u; // 800D2EF8
  c->r[5]=c->r[31]|c->r[31]; // 800D2EFC
  c->r[3]=c->r[3]+0x00004C30u; // 800D2F00
  c->r[4]=c->r[1]+0x00000008u; // 800D2F04
  c->lr=0x800D2F0Cu; f_800D2FBC(c); // 800D2F08
  goto L_800D2F18; // 800D2F0C
L_800D2F10:;
  c->r[3]=0u+0xFFFFD8E7u; // 800D2F10
  goto L_800D2F1C; // 800D2F14
L_800D2F18:;
  c->r[3]=c->r[31]|c->r[31]; // 800D2F18
L_800D2F1C:;
  c->r[0]=R32(c->r[1]+0x00000514u); // 800D2F1C
  c->r[31]=R32(c->r[1]+0x0000050Cu); // 800D2F20
  c->lr=c->r[0]; // 800D2F24
  c->r[1]=c->r[1]+0x00000510u; // 800D2F28
  return; // 800D2F2C
}

// gdev_cc_initinterrupts
void f_800D2F30(Ctx* __restrict c) {
  trace_call(0x800D2F30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2F30
  c->r[0]=c->lr; // 800D2F34
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2F38
  c->lr=0x800D2F40u; f_801C26E8(c); // 800D2F3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D2F40
  c->r[3]=0u+0x00000000u; // 800D2F44
  c->lr=c->r[0]; // 800D2F48
  c->r[1]=c->r[1]+0x00000010u; // 800D2F4C
  return; // 800D2F50
}

// MWInitializeCriticalSection
void f_800D2F54(Ctx* __restrict c) {
  trace_call(0x800D2F54u);
  return; // 800D2F54
}

// MWEnterCriticalSection
void f_800D2F58(Ctx* __restrict c) {
  trace_call(0x800D2F58u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2F58
  c->r[0]=c->lr; // 800D2F5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D2F60
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D2F64
  c->r[31]=c->r[3]|c->r[3]; // 800D2F68
  c->lr=0x800D2F70u; f_802494C0(c); // 800D2F6C
  W32(c->r[31]+0x00000000u,c->r[3]); // 800D2F70
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D2F74
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D2F78
  c->lr=c->r[0]; // 800D2F7C
  c->r[1]=c->r[1]+0x00000010u; // 800D2F80
  return; // 800D2F84
}

// MWExitCriticalSection
void f_800D2F88(Ctx* __restrict c) {
  trace_call(0x800D2F88u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 800D2F88
  f_80249500(c); return; // 800D2F8C
}

// CBGetBytesAvailableForRead
void f_800D2F90(Ctx* __restrict c) {
  trace_call(0x800D2F90u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 800D2F90
  return; // 800D2F94
}

// CircleBufferInitialize
void f_800D2F98(Ctx* __restrict c) {
  trace_call(0x800D2F98u);
  c->r[0]=0u+0x00000000u; // 800D2F98
  W32(c->r[3]+0x00000008u,c->r[4]); // 800D2F9C
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 800D2FA0
  W32(c->r[3]+0x00000000u,c->r[4]); // 800D2FA4
  W32(c->r[3]+0x00000004u,c->r[4]); // 800D2FA8
  W32(c->r[3]+0x00000010u,c->r[0]); // 800D2FAC
  W32(c->r[3]+0x00000014u,c->r[5]); // 800D2FB0
  c->r[3]=c->r[3]+0x00000018u; // 800D2FB4
  f_800D2F54(c); return; // 800D2FB8
}

// CircleBufferWriteBytes
void f_800D2FBC(Ctx* __restrict c) {
  trace_call(0x800D2FBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D2FBC
  c->r[0]=c->lr; // 800D2FC0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D2FC4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D2FC8
  c->r[31]=c->r[5]|c->r[5]; // 800D2FCC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D2FD0
  c->r[30]=c->r[3]|c->r[3]; // 800D2FD4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D2FD8
  W32(c->r[1]+0x00000010u,c->r[28]); // 800D2FDC
  c->r[28]=c->r[4]|c->r[4]; // 800D2FE0
  c->r[0]=R32(c->r[3]+0x00000014u); // 800D2FE4
  cmpu(c,0,c->r[5],c->r[0]); // 800D2FE8
  if (!crb(c,1)) { goto L_800D2FF8; } // 800D2FEC
  c->r[3]=0u+0xFFFFFFFFu; // 800D2FF0
  goto L_800D30A4; // 800D2FF4
L_800D2FF8:;
  c->r[3]=c->r[3]+0x00000018u; // 800D2FF8
  c->lr=0x800D3000u; f_800D2F58(c); // 800D2FFC
  c->r[3]=R32(c->r[30]+0x00000004u); // 800D3000
  c->r[4]=R32(c->r[30]+0x00000008u); // 800D3004
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800D3008
  c->r[4]=c->r[3]-c->r[4]; // 800D300C
  c->r[29]=c->r[0]-c->r[4]; // 800D3010
  cmpu(c,0,c->r[29],c->r[31]); // 800D3014
  if (crb(c,0)) { goto L_800D3038; } // 800D3018
  c->r[4]=c->r[28]|c->r[28]; // 800D301C
  c->r[5]=c->r[31]|c->r[31]; // 800D3020
  c->lr=0x800D3028u; f_80004000(c); // 800D3024
  c->r[0]=R32(c->r[30]+0x00000004u); // 800D3028
  c->r[0]=c->r[0]+c->r[31]; // 800D302C
  W32(c->r[30]+0x00000004u,c->r[0]); // 800D3030
  goto L_800D3064; // 800D3034
L_800D3038:;
  c->r[4]=c->r[28]|c->r[28]; // 800D3038
  c->r[5]=c->r[29]|c->r[29]; // 800D303C
  c->lr=0x800D3044u; f_80004000(c); // 800D3040
  c->r[3]=R32(c->r[30]+0x00000008u); // 800D3044
  c->r[4]=c->r[28]+c->r[29]; // 800D3048
  c->r[5]=c->r[31]-c->r[29]; // 800D304C
  c->lr=0x800D3054u; f_80004000(c); // 800D3050
  c->r[0]=R32(c->r[30]+0x00000008u); // 800D3054
  c->r[0]=c->r[0]+c->r[31]; // 800D3058
  c->r[0]=c->r[0]-c->r[29]; // 800D305C
  W32(c->r[30]+0x00000004u,c->r[0]); // 800D3060
L_800D3064:;
  c->r[4]=R32(c->r[30]+0x00000008u); // 800D3064
  c->r[0]=R32(c->r[30]+0x00000004u); // 800D3068
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 800D306C
  c->r[0]=c->r[0]-c->r[4]; // 800D3070
  cmpu(c,0,c->r[3],c->r[0]); // 800D3074
  if (!crb(c,2)) { goto L_800D3080; } // 800D3078
  W32(c->r[30]+0x00000004u,c->r[4]); // 800D307C
L_800D3080:;
  c->r[4]=R32(c->r[30]+0x00000014u); // 800D3080
  c->r[3]=c->r[30]+0x00000018u; // 800D3084
  c->r[0]=R32(c->r[30]+0x00000010u); // 800D3088
  c->r[4]=c->r[4]-c->r[31]; // 800D308C
  W32(c->r[30]+0x00000014u,c->r[4]); // 800D3090
  c->r[0]=c->r[0]+c->r[31]; // 800D3094
  W32(c->r[30]+0x00000010u,c->r[0]); // 800D3098
  c->lr=0x800D30A0u; f_800D2F88(c); // 800D309C
  c->r[3]=0u+0x00000000u; // 800D30A0
L_800D30A4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D30A4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D30A8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D30AC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D30B0
  c->r[28]=R32(c->r[1]+0x00000010u); // 800D30B4
  c->lr=c->r[0]; // 800D30B8
  c->r[1]=c->r[1]+0x00000020u; // 800D30BC
  return; // 800D30C0
}

// CircleBufferReadBytes
void f_800D30C4(Ctx* __restrict c) {
  trace_call(0x800D30C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D30C4
  c->r[0]=c->lr; // 800D30C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D30CC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D30D0
  c->r[31]=c->r[5]|c->r[5]; // 800D30D4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D30D8
  c->r[30]=c->r[3]|c->r[3]; // 800D30DC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D30E0
  W32(c->r[1]+0x00000010u,c->r[28]); // 800D30E4
  c->r[28]=c->r[4]|c->r[4]; // 800D30E8
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D30EC
  cmpu(c,0,c->r[5],c->r[0]); // 800D30F0
  if (!crb(c,1)) { goto L_800D3100; } // 800D30F4
  c->r[3]=0u+0xFFFFFFFFu; // 800D30F8
  goto L_800D31AC; // 800D30FC
L_800D3100:;
  c->r[3]=c->r[3]+0x00000018u; // 800D3100
  c->lr=0x800D3108u; f_800D2F58(c); // 800D3104
  c->r[4]=R32(c->r[30]+0x00000000u); // 800D3108
  c->r[3]=R32(c->r[30]+0x00000008u); // 800D310C
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800D3110
  c->r[3]=c->r[4]-c->r[3]; // 800D3114
  c->r[29]=c->r[0]-c->r[3]; // 800D3118
  cmpu(c,0,c->r[31],c->r[29]); // 800D311C
  if (!crb(c,0)) { goto L_800D3140; } // 800D3120
  c->r[3]=c->r[28]|c->r[28]; // 800D3124
  c->r[5]=c->r[31]|c->r[31]; // 800D3128
  c->lr=0x800D3130u; f_80004000(c); // 800D312C
  c->r[0]=R32(c->r[30]+0x00000000u); // 800D3130
  c->r[0]=c->r[0]+c->r[31]; // 800D3134
  W32(c->r[30]+0x00000000u,c->r[0]); // 800D3138
  goto L_800D316C; // 800D313C
L_800D3140:;
  c->r[3]=c->r[28]|c->r[28]; // 800D3140
  c->r[5]=c->r[29]|c->r[29]; // 800D3144
  c->lr=0x800D314Cu; f_80004000(c); // 800D3148
  c->r[4]=R32(c->r[30]+0x00000008u); // 800D314C
  c->r[3]=c->r[28]+c->r[29]; // 800D3150
  c->r[5]=c->r[31]-c->r[29]; // 800D3154
  c->lr=0x800D315Cu; f_80004000(c); // 800D3158
  c->r[0]=R32(c->r[30]+0x00000008u); // 800D315C
  c->r[0]=c->r[0]+c->r[31]; // 800D3160
  c->r[0]=c->r[0]-c->r[29]; // 800D3164
  W32(c->r[30]+0x00000000u,c->r[0]); // 800D3168
L_800D316C:;
  c->r[4]=R32(c->r[30]+0x00000008u); // 800D316C
  c->r[0]=R32(c->r[30]+0x00000000u); // 800D3170
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 800D3174
  c->r[0]=c->r[0]-c->r[4]; // 800D3178
  cmpu(c,0,c->r[3],c->r[0]); // 800D317C
  if (!crb(c,2)) { goto L_800D3188; } // 800D3180
  W32(c->r[30]+0x00000000u,c->r[4]); // 800D3184
L_800D3188:;
  c->r[4]=R32(c->r[30]+0x00000014u); // 800D3188
  c->r[3]=c->r[30]+0x00000018u; // 800D318C
  c->r[0]=R32(c->r[30]+0x00000010u); // 800D3190
  c->r[4]=c->r[4]+c->r[31]; // 800D3194
  W32(c->r[30]+0x00000014u,c->r[4]); // 800D3198
  c->r[0]=c->r[0]-c->r[31]; // 800D319C
  W32(c->r[30]+0x00000010u,c->r[0]); // 800D31A0
  c->lr=0x800D31A8u; f_800D2F88(c); // 800D31A4
  c->r[3]=0u+0x00000000u; // 800D31A8
L_800D31AC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D31AC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D31B0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D31B4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D31B8
  c->r[28]=R32(c->r[1]+0x00000010u); // 800D31BC
  c->lr=c->r[0]; // 800D31C0
  c->r[1]=c->r[1]+0x00000020u; // 800D31C4
  return; // 800D31C8
}

// TRK_flush_cache
void f_800D31CC(Ctx* __restrict c) {
  trace_call(0x800D31CCu);
  c->r[5]=0u+0xFFFF0000u; // 800D31CC
  c->r[5]=c->r[5]|0x0000FFF1u; // 800D31D0
  c->r[5]=c->r[5]&c->r[3]; // 800D31D4
  c->r[3]=c->r[3]-c->r[5]; // 800D31D8
  c->r[4]=c->r[4]+c->r[3]; // 800D31DC
L_800D31E0:;
  /* dcbst */ // 800D31E0
  /* dcbf */ // 800D31E4
  /* sync */ // 800D31E8
  /* icbi */ // 800D31EC
  c->r[5]=addc(c,c->r[5],0x00000008u,0); // 800D31F0
  c->r[4]=addc(c,c->r[4],0xFFFFFFF8u,0); cr0(c,c->r[4]); // 800D31F4
  if (!crb(c,0)) { IRQCHK(c); goto L_800D31E0; } // 800D31F8
  /* isync */ // 800D31FC
  return; // 800D3200
}

// TRK_main
void f_800D3204(Ctx* __restrict c) {
  trace_call(0x800D3204u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3204
  c->r[0]=c->lr; // 800D3208
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D320C
  c->lr=0x800D3214u; f_800D3F9C(c); // 800D3210
  cmps(c,0,(int32_t)c->r[3],0); // 800D3214
  W32(c->r[13]+0xFFFF97E8u,c->r[3]); // 800D3218
  if (!crb(c,2)) { goto L_800D3228; } // 800D321C
  c->lr=0x800D3224u; f_800D406C(c); // 800D3220
  c->lr=0x800D3228u; f_800D3240(c); // 800D3224
L_800D3228:;
  c->lr=0x800D322Cu; f_800D4048(c); // 800D3228
  W32(c->r[13]+0xFFFF97E8u,c->r[3]); // 800D322C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3230
  c->lr=c->r[0]; // 800D3234
  c->r[1]=c->r[1]+0x00000010u; // 800D3238
  return; // 800D323C
}

// TRKNubMainLoop
void f_800D3240(Ctx* __restrict c) {
  trace_call(0x800D3240u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3240
  c->r[0]=c->lr; // 800D3244
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D3248
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D324C
  c->r[31]=0u+0x00000000u; // 800D3250
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D3254
  c->r[30]=0u+0x00000000u; // 800D3258
  goto L_800D330C; // 800D325C
L_800D3260:;
  c->r[3]=c->r[1]+0x00000008u; // 800D3260
  c->lr=0x800D3268u; f_800D3E24(c); // 800D3264
  cmps(c,0,(int32_t)c->r[3],0); // 800D3268
  if (crb(c,2)) { goto L_800D32D4; } // 800D326C
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D3270
  c->r[30]=0u+0x00000000u; // 800D3274
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 800D3278
  cmpu(c,0,c->r[0],0x00000001u); // 800D327C
  if (!crb(c,1)) { goto L_800D32B8; } // 800D3280
  cmps(c,0,(int32_t)c->r[3],2); // 800D3284
  if (crb(c,2)) { goto L_800D32A0; } // 800D3288
  cmps(c,0,(int32_t)c->r[3],1); // 800D328C
  if (crb(c,2)) { goto L_800D32B0; } // 800D3290
  cmps(c,0,(int32_t)c->r[3],5); // 800D3294
  if (crb(c,2)) { goto L_800D32C4; } // 800D3298
  goto L_800D32C8; // 800D329C
L_800D32A0:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 800D32A0
  c->lr=0x800D32A8u; f_800D4CF0(c); // 800D32A4
  c->lr=0x800D32ACu; f_800D3590(c); // 800D32A8
  goto L_800D32C8; // 800D32AC
L_800D32B0:;
  c->r[31]=0u+0x00000001u; // 800D32B0
  goto L_800D32C8; // 800D32B4
L_800D32B8:;
  c->r[3]=c->r[1]+0x00000008u; // 800D32B8
  c->lr=0x800D32C0u; f_800D717C(c); // 800D32BC
  goto L_800D32C8; // 800D32C0
L_800D32C4:;
  c->lr=0x800D32C8u; f_800D76A4(c); // 800D32C4
L_800D32C8:;
  c->r[3]=c->r[1]+0x00000008u; // 800D32C8
  c->lr=0x800D32D0u; f_800D3F94(c); // 800D32CC
  goto L_800D330C; // 800D32D0
L_800D32D4:;
  cmps(c,0,(int32_t)c->r[30],0); // 800D32D4
  if (crb(c,2)) { goto L_800D32EC; } // 800D32D8
  c->r[3]=R32(c->r[13]+0xFFFF9808u); // 800D32DC
  c->r[0]=R8(c->r[3]+0x00000000u); // 800D32E0
  cmps(c,0,(int32_t)c->r[0],0); // 800D32E4
  if (crb(c,2)) { goto L_800D32F8; } // 800D32E8
L_800D32EC:;
  c->r[30]=0u+0x00000001u; // 800D32EC
  c->lr=0x800D32F4u; f_800D41B8(c); // 800D32F0
  goto L_800D330C; // 800D32F4
L_800D32F8:;
  c->lr=0x800D32FCu; f_800D7898(c); // 800D32F8
  cmps(c,0,(int32_t)c->r[3],0); // 800D32FC
  if (!crb(c,2)) { goto L_800D3308; } // 800D3300
  c->lr=0x800D3308u; f_800D4874(c); // 800D3304
L_800D3308:;
  c->r[30]=0u+0x00000000u; // 800D3308
L_800D330C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D330C
  if (crb(c,2)) { IRQCHK(c); goto L_800D3260; } // 800D3310
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D3314
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D3318
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D331C
  c->lr=c->r[0]; // 800D3320
  c->r[1]=c->r[1]+0x00000020u; // 800D3324
  return; // 800D3328
}

// TRK_memcpy
void f_800D332C(Ctx* __restrict c) {
  trace_call(0x800D332Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D332C
  cmps(c,0,(int32_t)c->r[5],0); // 800D3330
  c->r[9]=0u+0x000000FFu; // 800D3334
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D3338
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D333C
  c->r[30]=c->r[3]|c->r[3]; // 800D3340
  if (crb(c,2)) { goto L_800D3458; } // 800D3344
  c->r[0]=rotl(c->r[5],31)&0x7FFFFFFFu; cr0(c,c->r[0]); // 800D3348
  c->ctr=c->r[0]; // 800D334C
  if (crb(c,2)) { goto L_800D3400; } // 800D3350
L_800D3354:;
  c->r[12]=rotl(c->r[30],0)&0xFFFFFFFCu; // 800D3354
  c->r[11]=rotl(c->r[4],0)&0xFFFFFFFCu; // 800D3358
  c->r[0]=c->r[30]-c->r[12]; // 800D335C
  c->r[7]=R32(c->r[11]+0x00000000u); // 800D3360
  c->r[10]=addc(c,~c->r[0],0x00000003u,1); // 800D3364
  c->r[6]=c->r[4]-c->r[11]; // 800D3368
  c->r[0]=addc(c,~c->r[6],0x00000003u,1); // 800D336C
  c->r[4]=c->r[4]+0x00000001u; // 800D3370
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D3374
  c->r[31]=rotl(c->r[10],3)&0xFFFFFFF8u; // 800D3378
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[7]>>((c->r[0])&31)); // 800D337C
  c->r[11]=rotl(c->r[4],0)&0xFFFFFFFCu; // 800D3380
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800D3384
  c->r[8]=R32(c->r[12]+0x00000000u); // 800D3388
  c->r[10]=((c->r[31])&0x20)?0u:(c->r[9]<<((c->r[31])&31)); // 800D338C
  c->r[6]=c->r[4]-c->r[11]; // 800D3390
  c->r[0]=((c->r[31])&0x20)?0u:(c->r[0]<<((c->r[31])&31)); // 800D3394
  c->r[30]=c->r[30]+0x00000001u; // 800D3398
  c->r[7]=c->r[8]&~c->r[10]; // 800D339C
  c->r[4]=c->r[4]+0x00000001u; // 800D33A0
  c->r[0]=c->r[10]&c->r[0]; // 800D33A4
  c->r[0]=c->r[7]|c->r[0]; // 800D33A8
  W32(c->r[12]+0x00000000u,c->r[0]); // 800D33AC
  c->r[12]=rotl(c->r[30],0)&0xFFFFFFFCu; // 800D33B0
  c->r[0]=c->r[30]-c->r[12]; // 800D33B4
  c->r[7]=R32(c->r[11]+0x00000000u); // 800D33B8
  c->r[10]=addc(c,~c->r[0],0x00000003u,1); // 800D33BC
  c->r[8]=R32(c->r[12]+0x00000000u); // 800D33C0
  c->r[0]=addc(c,~c->r[6],0x00000003u,1); // 800D33C4
  c->r[30]=c->r[30]+0x00000001u; // 800D33C8
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D33CC
  c->r[31]=rotl(c->r[10],3)&0xFFFFFFF8u; // 800D33D0
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[7]>>((c->r[0])&31)); // 800D33D4
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800D33D8
  c->r[10]=((c->r[31])&0x20)?0u:(c->r[9]<<((c->r[31])&31)); // 800D33DC
  c->r[0]=((c->r[31])&0x20)?0u:(c->r[0]<<((c->r[31])&31)); // 800D33E0
  c->r[7]=c->r[8]&~c->r[10]; // 800D33E4
  c->r[0]=c->r[10]&c->r[0]; // 800D33E8
  c->r[0]=c->r[7]|c->r[0]; // 800D33EC
  W32(c->r[12]+0x00000000u,c->r[0]); // 800D33F0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D3354; } // 800D33F4
  c->r[5]=c->r[5]&0x00000001u; cr0(c,c->r[5]); // 800D33F8
  if (crb(c,2)) { goto L_800D3458; } // 800D33FC
L_800D3400:;
  c->ctr=c->r[5]; // 800D3400
L_800D3404:;
  c->r[12]=rotl(c->r[30],0)&0xFFFFFFFCu; // 800D3404
  c->r[11]=rotl(c->r[4],0)&0xFFFFFFFCu; // 800D3408
  c->r[0]=c->r[30]-c->r[12]; // 800D340C
  c->r[7]=R32(c->r[11]+0x00000000u); // 800D3410
  c->r[10]=addc(c,~c->r[0],0x00000003u,1); // 800D3414
  c->r[6]=c->r[4]-c->r[11]; // 800D3418
  c->r[0]=addc(c,~c->r[6],0x00000003u,1); // 800D341C
  c->r[8]=R32(c->r[12]+0x00000000u); // 800D3420
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D3424
  c->r[31]=rotl(c->r[10],3)&0xFFFFFFF8u; // 800D3428
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[7]>>((c->r[0])&31)); // 800D342C
  c->r[4]=c->r[4]+0x00000001u; // 800D3430
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800D3434
  c->r[10]=((c->r[31])&0x20)?0u:(c->r[9]<<((c->r[31])&31)); // 800D3438
  c->r[0]=((c->r[31])&0x20)?0u:(c->r[0]<<((c->r[31])&31)); // 800D343C
  c->r[30]=c->r[30]+0x00000001u; // 800D3440
  c->r[7]=c->r[8]&~c->r[10]; // 800D3444
  c->r[0]=c->r[10]&c->r[0]; // 800D3448
  c->r[0]=c->r[7]|c->r[0]; // 800D344C
  W32(c->r[12]+0x00000000u,c->r[0]); // 800D3450
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D3404; } // 800D3454
L_800D3458:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D3458
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D345C
  c->r[1]=c->r[1]+0x00000010u; // 800D3460
  return; // 800D3464
}

// TRK_memset
void f_800D3468(Ctx* __restrict c) {
  trace_call(0x800D3468u);
  cmps(c,0,(int32_t)c->r[5],0); // 800D3468
  c->r[8]=rotl(c->r[4],0)&0x000000FFu; // 800D346C
  c->r[7]=c->r[3]|c->r[3]; // 800D3470
  c->r[6]=0u+0x000000FFu; // 800D3474
  if (crb(c,2)) return; // 800D3478
  c->r[0]=rotl(c->r[5],30)&0x3FFFFFFFu; cr0(c,c->r[0]); // 800D347C
  c->ctr=c->r[0]; // 800D3480
  if (crb(c,2)) { goto L_800D3554; } // 800D3484
L_800D3488:;
  c->r[10]=rotl(c->r[7],0)&0xFFFFFFFCu; // 800D3488
  c->r[0]=c->r[7]-c->r[10]; // 800D348C
  c->r[4]=R32(c->r[10]+0x00000000u); // 800D3490
  c->r[0]=addc(c,~c->r[0],0x00000003u,1); // 800D3494
  c->r[7]=c->r[7]+0x00000001u; // 800D3498
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D349C
  c->r[9]=((c->r[0])&0x20)?0u:(c->r[6]<<((c->r[0])&31)); // 800D34A0
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[8]<<((c->r[0])&31)); // 800D34A4
  c->r[4]=c->r[4]&~c->r[9]; // 800D34A8
  c->r[0]=c->r[9]&c->r[0]; // 800D34AC
  c->r[0]=c->r[4]|c->r[0]; // 800D34B0
  W32(c->r[10]+0x00000000u,c->r[0]); // 800D34B4
  c->r[10]=rotl(c->r[7],0)&0xFFFFFFFCu; // 800D34B8
  c->r[0]=c->r[7]-c->r[10]; // 800D34BC
  c->r[4]=R32(c->r[10]+0x00000000u); // 800D34C0
  c->r[0]=addc(c,~c->r[0],0x00000003u,1); // 800D34C4
  c->r[7]=c->r[7]+0x00000001u; // 800D34C8
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D34CC
  c->r[9]=((c->r[0])&0x20)?0u:(c->r[6]<<((c->r[0])&31)); // 800D34D0
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[8]<<((c->r[0])&31)); // 800D34D4
  c->r[4]=c->r[4]&~c->r[9]; // 800D34D8
  c->r[0]=c->r[9]&c->r[0]; // 800D34DC
  c->r[0]=c->r[4]|c->r[0]; // 800D34E0
  W32(c->r[10]+0x00000000u,c->r[0]); // 800D34E4
  c->r[10]=rotl(c->r[7],0)&0xFFFFFFFCu; // 800D34E8
  c->r[0]=c->r[7]-c->r[10]; // 800D34EC
  c->r[4]=R32(c->r[10]+0x00000000u); // 800D34F0
  c->r[0]=addc(c,~c->r[0],0x00000003u,1); // 800D34F4
  c->r[7]=c->r[7]+0x00000001u; // 800D34F8
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D34FC
  c->r[9]=((c->r[0])&0x20)?0u:(c->r[6]<<((c->r[0])&31)); // 800D3500
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[8]<<((c->r[0])&31)); // 800D3504
  c->r[4]=c->r[4]&~c->r[9]; // 800D3508
  c->r[0]=c->r[9]&c->r[0]; // 800D350C
  c->r[0]=c->r[4]|c->r[0]; // 800D3510
  W32(c->r[10]+0x00000000u,c->r[0]); // 800D3514
  c->r[10]=rotl(c->r[7],0)&0xFFFFFFFCu; // 800D3518
  c->r[0]=c->r[7]-c->r[10]; // 800D351C
  c->r[4]=R32(c->r[10]+0x00000000u); // 800D3520
  c->r[0]=addc(c,~c->r[0],0x00000003u,1); // 800D3524
  c->r[7]=c->r[7]+0x00000001u; // 800D3528
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D352C
  c->r[9]=((c->r[0])&0x20)?0u:(c->r[6]<<((c->r[0])&31)); // 800D3530
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[8]<<((c->r[0])&31)); // 800D3534
  c->r[4]=c->r[4]&~c->r[9]; // 800D3538
  c->r[0]=c->r[9]&c->r[0]; // 800D353C
  c->r[0]=c->r[4]|c->r[0]; // 800D3540
  W32(c->r[10]+0x00000000u,c->r[0]); // 800D3544
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D3488; } // 800D3548
  c->r[5]=c->r[5]&0x00000003u; cr0(c,c->r[5]); // 800D354C
  if (crb(c,2)) return; // 800D3550
L_800D3554:;
  c->ctr=c->r[5]; // 800D3554
L_800D3558:;
  c->r[10]=rotl(c->r[7],0)&0xFFFFFFFCu; // 800D3558
  c->r[0]=c->r[7]-c->r[10]; // 800D355C
  c->r[4]=R32(c->r[10]+0x00000000u); // 800D3560
  c->r[0]=addc(c,~c->r[0],0x00000003u,1); // 800D3564
  c->r[7]=c->r[7]+0x00000001u; // 800D3568
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D356C
  c->r[9]=((c->r[0])&0x20)?0u:(c->r[6]<<((c->r[0])&31)); // 800D3570
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[8]<<((c->r[0])&31)); // 800D3574
  c->r[4]=c->r[4]&~c->r[9]; // 800D3578
  c->r[0]=c->r[9]&c->r[0]; // 800D357C
  c->r[0]=c->r[4]|c->r[0]; // 800D3580
  W32(c->r[10]+0x00000000u,c->r[0]); // 800D3584
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D3558; } // 800D3588
  return; // 800D358C
}

// TRKDispatchMessage
void f_800D3590(Ctx* __restrict c) {
  trace_call(0x800D3590u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3590
  c->r[0]=c->lr; // 800D3594
  c->r[4]=0u+0x00000000u; // 800D3598
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D359C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D35A0
  c->r[31]=0u+0x00000500u; // 800D35A4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D35A8
  c->r[30]=c->r[3]|c->r[3]; // 800D35AC
  c->lr=0x800D35B4u; f_800D4D64(c); // 800D35B0
  c->r[0]=R8(c->r[30]+0x00000010u); // 800D35B4
  cmpu(c,0,c->r[0],0x0000001Au); // 800D35B8
  if (crb(c,1)) { goto L_800D3694; } // 800D35BC
  c->r[3]=0u+0x80390000u; // 800D35C0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D35C4
  c->r[3]=c->r[3]+0xFFFFC9F0u; // 800D35C8
  c->r[3]=R32(c->r[3]+c->r[0]); // 800D35CC
  c->ctr=c->r[3]; // 800D35D0
  if (true) { switch (c->ctr) { case 0x800D35D8u: goto L_800D35D8; case 0x800D35E8u: goto L_800D35E8; case 0x800D35F8u: goto L_800D35F8; case 0x800D3608u: goto L_800D3608; case 0x800D3618u: goto L_800D3618; case 0x800D3628u: goto L_800D3628; case 0x800D3638u: goto L_800D3638; case 0x800D3648u: goto L_800D3648; case 0x800D3658u: goto L_800D3658; case 0x800D3668u: goto L_800D3668; case 0x800D3678u: goto L_800D3678; case 0x800D3688u: goto L_800D3688; case 0x800D3694u: goto L_800D3694; default: break; } dispatch(c,c->ctr); return; } // 800D35D4
L_800D35D8:;
  c->r[3]=c->r[30]|c->r[30]; // 800D35D8
  c->lr=0x800D35E0u; f_800D5448(c); // 800D35DC
  c->r[31]=c->r[3]|c->r[3]; // 800D35E0
  goto L_800D3694; // 800D35E4
L_800D35E8:;
  c->r[3]=c->r[30]|c->r[30]; // 800D35E8
  c->lr=0x800D35F0u; f_800D54B8(c); // 800D35EC
  c->r[31]=c->r[3]|c->r[3]; // 800D35F0
  goto L_800D3694; // 800D35F4
L_800D35F8:;
  c->r[3]=c->r[30]|c->r[30]; // 800D35F8
  c->lr=0x800D3600u; f_800D5540(c); // 800D35FC
  c->r[31]=c->r[3]|c->r[3]; // 800D3600
  goto L_800D3694; // 800D3604
L_800D3608:;
  c->r[3]=c->r[30]|c->r[30]; // 800D3608
  c->lr=0x800D3610u; f_800D55AC(c); // 800D360C
  c->r[31]=c->r[3]|c->r[3]; // 800D3610
  goto L_800D3694; // 800D3614
L_800D3618:;
  c->r[3]=c->r[30]|c->r[30]; // 800D3618
  c->lr=0x800D3620u; f_800D5618(c); // 800D361C
  c->r[31]=c->r[3]|c->r[3]; // 800D3620
  goto L_800D3694; // 800D3624
L_800D3628:;
  c->r[3]=c->r[30]|c->r[30]; // 800D3628
  c->lr=0x800D3630u; f_800D584C(c); // 800D362C
  c->r[31]=c->r[3]|c->r[3]; // 800D3630
  goto L_800D3694; // 800D3634
L_800D3638:;
  c->r[3]=c->r[30]|c->r[30]; // 800D3638
  c->lr=0x800D3640u; f_800D5A5C(c); // 800D363C
  c->r[31]=c->r[3]|c->r[3]; // 800D3640
  goto L_800D3694; // 800D3644
L_800D3648:;
  c->r[3]=c->r[30]|c->r[30]; // 800D3648
  c->lr=0x800D3650u; f_800D5C58(c); // 800D364C
  c->r[31]=c->r[3]|c->r[3]; // 800D3650
  goto L_800D3694; // 800D3654
L_800D3658:;
  c->r[3]=c->r[30]|c->r[30]; // 800D3658
  c->lr=0x800D3660u; f_800D5EF8(c); // 800D365C
  c->r[31]=c->r[3]|c->r[3]; // 800D3660
  goto L_800D3694; // 800D3664
L_800D3668:;
  c->r[3]=c->r[30]|c->r[30]; // 800D3668
  c->lr=0x800D3670u; f_800D5FBC(c); // 800D366C
  c->r[31]=c->r[3]|c->r[3]; // 800D3670
  goto L_800D3694; // 800D3674
L_800D3678:;
  c->r[3]=c->r[30]|c->r[30]; // 800D3678
  c->lr=0x800D3680u; f_800D6240(c); // 800D367C
  c->r[31]=c->r[3]|c->r[3]; // 800D3680
  goto L_800D3694; // 800D3684
L_800D3688:;
  c->r[3]=c->r[30]|c->r[30]; // 800D3688
  c->lr=0x800D3690u; f_800D62F8(c); // 800D368C
  c->r[31]=c->r[3]|c->r[3]; // 800D3690
L_800D3694:;
  c->r[3]=c->r[31]|c->r[31]; // 800D3694
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D3698
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D369C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D36A0
  c->lr=c->r[0]; // 800D36A4
  c->r[1]=c->r[1]+0x00000010u; // 800D36A8
  return; // 800D36AC
}

// InitMetroTRK
void f_800D36B0(Ctx* __restrict c) {
  trace_call(0x800D36B0u);
  c->r[1]=c->r[1]+0xFFFFFFFCu; // 800D36B0
  W32(c->r[1]+0x00000000u,c->r[3]); // 800D36B4
  c->r[3]=0u+0x803D0000u; // 800D36B8
  c->r[3]=c->r[3]|0x000067C0u; // 800D36BC
  {uint32_t ea=c->r[3]+0x00000000u; for(int i=0;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D36C0
  c->r[4]=R32(c->r[1]+0x00000000u); // 800D36C4
  c->r[1]=c->r[1]+0x00000004u; // 800D36C8
  W32(c->r[3]+0x00000004u,c->r[1]); // 800D36CC
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 800D36D0
  c->r[4]=c->lr; // 800D36D4
  W32(c->r[3]+0x00000084u,c->r[4]); // 800D36D8
  W32(c->r[3]+0x00000080u,c->r[4]); // 800D36DC
  c->r[4]=c->cr; // 800D36E0
  W32(c->r[3]+0x00000088u,c->r[4]); // 800D36E4
  c->r[4]=c->msr; // 800D36E8
  c->r[3]=c->r[4]|0x00008000u; // 800D36EC
  c->r[3]=c->r[3]^0x00008000u; // 800D36F0
  c->msr=c->r[3]; // 800D36F4
  mtspr(c,27,c->r[4]); // 800D36F8
  c->lr=0x800D3700u; f_800D48A8(c); // 800D36FC
  c->r[3]=0u+0x803D0000u; // 800D3700
  c->r[3]=c->r[3]|0x000067C0u; // 800D3704
  {uint32_t ea=c->r[3]+0x00000000u; for(int i=0;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D3708
  c->r[0]=0u+0x00000000u; // 800D370C
  mtspr(c,1010,c->r[0]); // 800D3710
  mtspr(c,1013,c->r[0]); // 800D3714
  c->r[1]=0u+0x804E0000u; // 800D3718
  c->r[1]=c->r[1]|0x0000C4E0u; // 800D371C
  c->r[3]=c->r[5]|c->r[5]; // 800D3720
  c->lr=0x800D3728u; f_800D3A94(c); // 800D3724
  cmps(c,0,(int32_t)c->r[3],1); // 800D3728
  if (!crb(c,2)) { goto L_800D3740; } // 800D372C
  c->r[4]=R32(c->r[3]+0x00000084u); // 800D3730
  c->lr=c->r[4]; // 800D3734
  {uint32_t ea=c->r[3]+0x00000000u; for(int i=0;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D3738
  return; // 800D373C
L_800D3740:;
  f_800D3204(c); return; // 800D3740
}

// fn_800D3744
void f_800D3744(Ctx* __restrict c) {
  trace_call(0x800D3744u);
  return; // 800D3744
}

// InitMetroTRK_BBA
void f_800D3748(Ctx* __restrict c) {
  trace_call(0x800D3748u);
  c->r[1]=c->r[1]+0xFFFFFFFCu; // 800D3748
  W32(c->r[1]+0x00000000u,c->r[3]); // 800D374C
  c->r[3]=0u+0x803D0000u; // 800D3750
  c->r[3]=c->r[3]|0x000067C0u; // 800D3754
  {uint32_t ea=c->r[3]+0x00000000u; for(int i=0;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D3758
  c->r[4]=R32(c->r[1]+0x00000000u); // 800D375C
  c->r[1]=c->r[1]+0x00000004u; // 800D3760
  W32(c->r[3]+0x00000004u,c->r[1]); // 800D3764
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 800D3768
  c->r[4]=c->lr; // 800D376C
  W32(c->r[3]+0x00000084u,c->r[4]); // 800D3770
  W32(c->r[3]+0x00000080u,c->r[4]); // 800D3774
  c->r[4]=c->cr; // 800D3778
  W32(c->r[3]+0x00000088u,c->r[4]); // 800D377C
  c->r[4]=c->msr; // 800D3780
  c->r[3]=c->r[4]|0x00008000u; // 800D3784
  c->msr=c->r[3]; // 800D3788
  mtspr(c,27,c->r[4]); // 800D378C
  c->lr=0x800D3794u; f_800D48A8(c); // 800D3790
  c->r[3]=0u+0x803D0000u; // 800D3794
  c->r[3]=c->r[3]|0x000067C0u; // 800D3798
  {uint32_t ea=c->r[3]+0x00000000u; for(int i=0;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D379C
  c->r[0]=0u+0x00000000u; // 800D37A0
  mtspr(c,1010,c->r[0]); // 800D37A4
  mtspr(c,1013,c->r[0]); // 800D37A8
  c->r[1]=0u+0x804E0000u; // 800D37AC
  c->r[1]=c->r[1]|0x0000C4E0u; // 800D37B0
  c->r[3]=0u+0x00000002u; // 800D37B4
  c->lr=0x800D37BCu; f_800D3A94(c); // 800D37B8
  cmps(c,0,(int32_t)c->r[3],1); // 800D37BC
  if (!crb(c,2)) { goto L_800D37D4; } // 800D37C0
  c->r[4]=R32(c->r[3]+0x00000084u); // 800D37C4
  c->lr=c->r[4]; // 800D37C8
  {uint32_t ea=c->r[3]+0x00000000u; for(int i=0;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D37CC
  return; // 800D37D0
L_800D37D4:;
  f_800D3204(c); return; // 800D37D4
}

// fn_800D37D8
void f_800D37D8(Ctx* __restrict c) {
  trace_call(0x800D37D8u);
  return; // 800D37D8
}

// EnableMetroTRKInterrupts
void f_800D37DC(Ctx* __restrict c) {
  trace_call(0x800D37DCu);
  f_800D3C24(c); return; // 800D37DC
}

// TRKTargetTranslate
void f_800D37E0(Ctx* __restrict c) {
  trace_call(0x800D37E0u);
  c->r[4]=R32(c->r[13]+0xFFFF97F0u); // 800D37E0
  cmpu(c,0,c->r[3],c->r[4]); // 800D37E4
  if (crb(c,0)) { goto L_800D380C; } // 800D37E8
  c->r[0]=c->r[4]+0x00004000u; // 800D37EC
  cmpu(c,0,c->r[3],c->r[0]); // 800D37F0
  if (!crb(c,0)) { goto L_800D380C; } // 800D37F4
  c->r[4]=0u+0x803D0000u; // 800D37F8
  c->r[4]=c->r[4]+0x000067C0u; // 800D37FC
  c->r[0]=R32(c->r[4]+0x00000238u); // 800D3800
  c->r[0]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[0]); // 800D3804
  if (!crb(c,2)) return; // 800D3808
L_800D380C:;
  c->r[0]=0u+0x03000000u; // 800D380C
  cmpu(c,0,c->r[3],c->r[0]); // 800D3810
  if (!crb(c,0)) { goto L_800D3824; } // 800D3814
  c->r[0]=rotl(c->r[3],0)&0x3FFFFFFFu; // 800D3818
  c->r[3]=c->r[0]|0x80000000u; // 800D381C
  return; // 800D3820
L_800D3824:;
  c->r[0]=0u+0x10000000u; // 800D3824
  cmpu(c,0,c->r[3],c->r[0]); // 800D3828
  if (crb(c,0)) return; // 800D382C
  c->r[0]=0u+0x1C000000u; // 800D3830
  cmpu(c,0,c->r[3],c->r[0]); // 800D3834
  if (!crb(c,0)) return; // 800D3838
  c->r[0]=rotl(c->r[3],0)&0x3FFFFFFFu; // 800D383C
  c->r[3]=c->r[0]|0x90000000u; // 800D3840
  return; // 800D3844
}

// __TRK_copy_vectors
void f_800D3848(Ctx* __restrict c) {
  trace_call(0x800D3848u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3848
  c->r[0]=c->lr; // 800D384C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D3850
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=22;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D3854
  c->r[3]=R32(c->r[13]+0xFFFF97F0u); // 800D3858
  cmpu(c,0,c->r[3],0x00000044u); // 800D385C
  if (crb(c,1)) { goto L_800D388C; } // 800D3860
  c->r[0]=c->r[3]+0x00004000u; // 800D3864
  cmpu(c,0,c->r[0],0x00000044u); // 800D3868
  if (!crb(c,1)) { goto L_800D388C; } // 800D386C
  c->r[3]=0u+0x803D0000u; // 800D3870
  c->r[3]=c->r[3]+0x000067C0u; // 800D3874
  c->r[0]=R32(c->r[3]+0x00000238u); // 800D3878
  c->r[0]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[0]); // 800D387C
  if (crb(c,2)) { goto L_800D388C; } // 800D3880
  c->r[3]=0u+0x00000044u; // 800D3884
  goto L_800D3894; // 800D3888
L_800D388C:;
  c->r[3]=0u+0x80000000u; // 800D388C
  c->r[3]=c->r[3]+0x00000044u; // 800D3890
L_800D3894:;
  c->r[31]=0u+0x80390000u; // 800D3894
  c->r[24]=0u+0x803D0000u; // 800D3898
  c->r[28]=0u+0x80000000u; // 800D389C
  c->r[29]=R32(c->r[3]+0x00000000u); // 800D38A0
  c->r[31]=c->r[31]+0xFFFFCA60u; // 800D38A4
  c->r[24]=c->r[24]+0x000067C0u; // 800D38A8
  c->r[28]=c->r[28]+0x00004380u; // 800D38AC
  c->r[30]=0u+0x00000000u; // 800D38B0
  c->r[25]=0u+0x03000000u; // 800D38B4
  c->r[27]=0u+0x1C000000u; // 800D38B8
  c->r[26]=0u+0x10000000u; // 800D38BC
  c->r[23]=0u+0x00000001u; // 800D38C0
L_800D38C4:;
  c->r[0]=((c->r[30])&0x20)?0u:(c->r[23]<<((c->r[30])&31)); // 800D38C4
  c->r[0]=c->r[29]&c->r[0]; cr0(c,c->r[0]); // 800D38C8
  if (crb(c,2)) { goto L_800D3958; } // 800D38CC
  cmps(c,0,(int32_t)c->r[30],4); // 800D38D0
  if (crb(c,2)) { goto L_800D3958; } // 800D38D4
  c->r[4]=R32(c->r[31]+0x00000000u); // 800D38D8
  c->r[3]=R32(c->r[13]+0xFFFF97F0u); // 800D38DC
  cmpu(c,0,c->r[4],c->r[3]); // 800D38E0
  if (crb(c,0)) { goto L_800D3908; } // 800D38E4
  c->r[0]=c->r[3]+0x00004000u; // 800D38E8
  cmpu(c,0,c->r[4],c->r[0]); // 800D38EC
  if (!crb(c,0)) { goto L_800D3908; } // 800D38F0
  c->r[0]=R32(c->r[24]+0x00000238u); // 800D38F4
  c->r[0]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[0]); // 800D38F8
  if (crb(c,2)) { goto L_800D3908; } // 800D38FC
  c->r[22]=c->r[4]|c->r[4]; // 800D3900
  goto L_800D393C; // 800D3904
L_800D3908:;
  cmpu(c,0,c->r[4],c->r[25]); // 800D3908
  if (!crb(c,0)) { goto L_800D391C; } // 800D390C
  c->r[0]=rotl(c->r[4],0)&0x3FFFFFFFu; // 800D3910
  c->r[22]=c->r[0]|0x80000000u; // 800D3914
  goto L_800D393C; // 800D3918
L_800D391C:;
  cmpu(c,0,c->r[4],c->r[26]); // 800D391C
  if (crb(c,0)) { goto L_800D3938; } // 800D3920
  cmpu(c,0,c->r[4],c->r[27]); // 800D3924
  if (!crb(c,0)) { goto L_800D3938; } // 800D3928
  c->r[0]=rotl(c->r[4],0)&0x3FFFFFFFu; // 800D392C
  c->r[22]=c->r[0]|0x90000000u; // 800D3930
  goto L_800D393C; // 800D3934
L_800D3938:;
  c->r[22]=c->r[4]|c->r[4]; // 800D3938
L_800D393C:;
  c->r[3]=c->r[22]|c->r[22]; // 800D393C
  c->r[4]=c->r[28]+c->r[4]; // 800D3940
  c->r[5]=0u+0x00000100u; // 800D3944
  c->lr=0x800D394Cu; f_800D332C(c); // 800D3948
  c->r[3]=c->r[22]|c->r[22]; // 800D394C
  c->r[4]=0u+0x00000100u; // 800D3950
  c->lr=0x800D3958u; f_800D31CC(c); // 800D3954
L_800D3958:;
  c->r[30]=c->r[30]+0x00000001u; // 800D3958
  c->r[31]=c->r[31]+0x00000004u; // 800D395C
  cmps(c,0,(int32_t)c->r[30],14); // 800D3960
  if (!crb(c,1)) { IRQCHK(c); goto L_800D38C4; } // 800D3964
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=22;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D3968
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D396C
  c->lr=c->r[0]; // 800D3970
  c->r[1]=c->r[1]+0x00000030u; // 800D3974
  return; // 800D3978
}

// TRKInitializeTarget
void f_800D397C(Ctx* __restrict c) {
  trace_call(0x800D397Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D397C
  c->r[0]=c->lr; // 800D3980
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3984
  c->r[0]=0u+0x00000001u; // 800D3988
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D398C
  c->r[31]=0u+0x803D0000u; // 800D3990
  c->r[31]=c->r[31]+0x00006718u; // 800D3994
  W32(c->r[31]+0x00000098u,c->r[0]); // 800D3998
  c->lr=0x800D39A0u; f_800D6550(c); // 800D399C
  W32(c->r[31]+0x0000008Cu,c->r[3]); // 800D39A0
  c->r[0]=0u+0xE0000000u; // 800D39A4
  c->r[3]=0u+0x00000000u; // 800D39A8
  W32(c->r[13]+0xFFFF97F0u,c->r[0]); // 800D39AC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D39B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D39B4
  c->lr=c->r[0]; // 800D39B8
  c->r[1]=c->r[1]+0x00000010u; // 800D39BC
  return; // 800D39C0
}

// __TRKreset
void f_800D39C4(Ctx* __restrict c) {
  trace_call(0x800D39C4u);
  c->r[3]=0u+0x00000000u; // 800D39C4
  c->r[4]=0u+0x00000000u; // 800D39C8
  c->r[5]=0u+0x00000000u; // 800D39CC
  f_8024BED0(c); return; // 800D39D0
}

// TRKLoadContext
void f_800D39D4(Ctx* __restrict c) {
  trace_call(0x800D39D4u);
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D39D4
  c->r[1]=R32(c->r[3]+0x00000004u); // 800D39D8
  c->r[2]=R32(c->r[3]+0x00000008u); // 800D39DC
  c->r[5]=R16(c->r[3]+0x000001A2u); // 800D39E0
  c->r[6]=rotl(c->r[5],0)&0x00000002u; cr0(c,c->r[6]); // 800D39E4
  if (crb(c,2)) { goto L_800D39FC; } // 800D39E8
  c->r[5]=rotl(c->r[5],0)&0xFFFFFFFDu; // 800D39EC
  W16(c->r[3]+0x000001A2u,c->r[5]); // 800D39F0
  {uint32_t ea=c->r[3]+0x00000014u; for(int i=5;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D39F4
  goto L_800D3A00; // 800D39F8
L_800D39FC:;
  {uint32_t ea=c->r[3]+0x00000034u; for(int i=13;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D39FC
L_800D3A00:;
  c->r[31]=c->r[3]|c->r[3]; // 800D3A00
  c->r[3]=c->r[4]|c->r[4]; // 800D3A04
  c->r[4]=R32(c->r[31]+0x00000080u); // 800D3A08
  c->cr=(c->cr&~0xFFFFFFFFu)|(c->r[4]&0xFFFFFFFFu); // 800D3A0C
  c->r[4]=R32(c->r[31]+0x00000084u); // 800D3A10
  c->lr=c->r[4]; // 800D3A14
  c->r[4]=R32(c->r[31]+0x00000088u); // 800D3A18
  c->ctr=c->r[4]; // 800D3A1C
  c->r[4]=R32(c->r[31]+0x0000008Cu); // 800D3A20
  mtspr(c,1,c->r[4]); // 800D3A24
  c->r[4]=c->msr; // 800D3A28
  c->r[4]=rotl(c->r[4],0)&0xFFFF7FFFu; // 800D3A2C
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFFDu; // 800D3A30
  c->msr=c->r[4]; // 800D3A34
  mtspr(c,273,c->r[2]); // 800D3A38
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 800D3A3C
  mtspr(c,274,c->r[4]); // 800D3A40
  c->r[4]=R32(c->r[31]+0x00000010u); // 800D3A44
  mtspr(c,275,c->r[4]); // 800D3A48
  c->r[2]=R32(c->r[31]+0x00000198u); // 800D3A4C
  c->r[4]=R32(c->r[31]+0x0000019Cu); // 800D3A50
  c->r[31]=R32(c->r[31]+0x0000007Cu); // 800D3A54
  f_800D6D7C(c); return; // 800D3A58
}

// TRKEXICallBack
void f_800D3A5C(Ctx* __restrict c) {
  trace_call(0x800D3A5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3A5C
  c->r[0]=c->lr; // 800D3A60
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3A64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D3A68
  c->r[31]=c->r[4]|c->r[4]; // 800D3A6C
  c->lr=0x800D3A74u; f_8024CE80(c); // 800D3A70
  c->r[3]=c->r[31]|c->r[31]; // 800D3A74
  c->r[4]=0u+0x00000500u; // 800D3A78
  c->lr=0x800D3A80u; f_800D39D4(c); // 800D3A7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3A80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D3A84
  c->lr=c->r[0]; // 800D3A88
  c->r[1]=c->r[1]+0x00000010u; // 800D3A8C
  return; // 800D3A90
}

// InitMetroTRKCommTable
void f_800D3A94(Ctx* __restrict c) {
  trace_call(0x800D3A94u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3A94
  c->r[0]=c->lr; // 800D3A98
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3A9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D3AA0
  c->r[31]=c->r[3]|c->r[3]; // 800D3AA4
  c->r[4]=c->r[31]|c->r[31]; // 800D3AA8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D3AAC
  c->r[30]=0u+0x80390000u; // 800D3AB0
  c->r[3]=c->r[30]+0xFFFFCAA0u; // 800D3AB4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D3AB8
  c->lr=0x800D3AC0u; f_80245CC0(c); // 800D3ABC
  c->r[30]=c->r[30]+0xFFFFCAA0u; // 800D3AC0
  c->r[4]=0u+0x00000040u; // 800D3AC4
  c->r[3]=c->r[30]+0x00000015u; // 800D3AC8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D3ACC
  c->lr=0x800D3AD4u; f_80245CC0(c); // 800D3AD0
  cmps(c,0,(int32_t)c->r[31],2); // 800D3AD4
  c->r[0]=0u+0x00000000u; // 800D3AD8
  W8(c->r[13]+0xFFFF97F8u,c->r[0]); // 800D3ADC
  if (!crb(c,2)) { goto L_800D3AEC; } // 800D3AE0
  c->r[3]=0u+0x00000000u; // 800D3AE4
  goto L_800D3BB4; // 800D3AE8
L_800D3AEC:;
  cmps(c,0,(int32_t)c->r[31],1); // 800D3AEC
  if (!crb(c,2)) { goto L_800D3B88; } // 800D3AF0
  c->r[3]=c->r[30]+0x0000003Au; // 800D3AF4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D3AF8
  c->lr=0x800D3B00u; f_80245CC0(c); // 800D3AFC
  c->r[3]=0u+0x803D0000u; // 800D3B00
  c->r[30]=0u+0x800D0000u; // 800D3B04
  c->r[31]=0u+0x800D0000u; // 800D3B08
  c->r[11]=0u+0x800D0000u; // 800D3B0C
  c->r[10]=0u+0x800D0000u; // 800D3B10
  c->r[9]=0u+0x800D0000u; // 800D3B14
  c->r[8]=0u+0x800D0000u; // 800D3B18
  c->r[7]=0u+0x800D0000u; // 800D3B1C
  c->r[6]=0u+0x800D0000u; // 800D3B20
  c->r[5]=0u+0x800D0000u; // 800D3B24
  c->r[4]=0u+0x800D0000u; // 800D3B28
  c->r[30]=c->r[30]+0x00002CDCu; // 800D3B2C
  c->r[12]=c->r[3]+0x00004C50u; // 800D3B30
  c->r[31]=c->r[31]+0x00002D20u; // 800D3B34
  c->r[11]=c->r[11]+0x00002D44u; // 800D3B38
  c->r[10]=c->r[10]+0x00002D4Cu; // 800D3B3C
  c->r[9]=c->r[9]+0x00002E00u; // 800D3B40
  c->r[8]=c->r[8]+0x00002D18u; // 800D3B44
  c->r[7]=c->r[7]+0x00002EBCu; // 800D3B48
  c->r[6]=c->r[6]+0x00002E74u; // 800D3B4C
  c->r[5]=c->r[5]+0x00002E98u; // 800D3B50
  c->r[4]=c->r[4]+0x00002F30u; // 800D3B54
  W32(c->r[3]+0x00004C50u,c->r[30]); // 800D3B58
  c->r[3]=0u+0x00000000u; // 800D3B5C
  W32(c->r[12]+0x00000018u,c->r[31]); // 800D3B60
  W32(c->r[12]+0x0000001Cu,c->r[11]); // 800D3B64
  W32(c->r[12]+0x00000010u,c->r[10]); // 800D3B68
  W32(c->r[12]+0x00000014u,c->r[9]); // 800D3B6C
  W32(c->r[12]+0x00000008u,c->r[8]); // 800D3B70
  W32(c->r[12]+0x0000000Cu,c->r[7]); // 800D3B74
  W32(c->r[12]+0x00000020u,c->r[6]); // 800D3B78
  W32(c->r[12]+0x00000024u,c->r[5]); // 800D3B7C
  W32(c->r[12]+0x00000004u,c->r[4]); // 800D3B80
  goto L_800D3BB4; // 800D3B84
L_800D3B88:;
  c->r[4]=c->r[31]|c->r[31]; // 800D3B88
  c->r[3]=c->r[30]+0x0000005Bu; // 800D3B8C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D3B90
  c->lr=0x800D3B98u; f_80245CC0(c); // 800D3B94
  c->r[3]=c->r[30]+0x00000086u; // 800D3B98
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D3B9C
  c->lr=0x800D3BA4u; f_80245CC0(c); // 800D3BA0
  c->r[3]=c->r[30]+0x000000B5u; // 800D3BA4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D3BA8
  c->lr=0x800D3BB0u; f_80245CC0(c); // 800D3BAC
  c->r[3]=0u+0x00000001u; // 800D3BB0
L_800D3BB4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3BB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D3BB8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D3BBC
  c->lr=c->r[0]; // 800D3BC0
  c->r[1]=c->r[1]+0x00000010u; // 800D3BC4
  return; // 800D3BC8
}

// TRKUARTInterruptHandler
void f_800D3BCC(Ctx* __restrict c) {
  trace_call(0x800D3BCCu);
  return; // 800D3BCC
}

// TRKInitializeIntDrivenUART
void f_800D3BD0(Ctx* __restrict c) {
  trace_call(0x800D3BD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3BD0
  c->r[0]=c->lr; // 800D3BD4
  c->r[4]=0u+0x800D0000u; // 800D3BD8
  c->r[3]=c->r[5]|c->r[5]; // 800D3BDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3BE0
  c->r[4]=c->r[4]+0x00003A5Cu; // 800D3BE4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D3BE8
  c->r[31]=0u+0x803D0000u; // 800D3BEC
  c->r[12]=R32(c->r[31]+0x00004C50u); // 800D3BF0
  c->ctr=c->r[12]; // 800D3BF4
  if (true) { c->lr=0x800D3BFCu; dispatch(c,c->ctr); } // 800D3BF8
  c->r[3]=c->r[31]+0x00004C50u; // 800D3BFC
  c->r[12]=R32(c->r[3]+0x00000018u); // 800D3C00
  c->ctr=c->r[12]; // 800D3C04
  if (true) { c->lr=0x800D3C0Cu; dispatch(c,c->ctr); } // 800D3C08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D3C0C
  c->r[3]=0u+0x00000000u; // 800D3C10
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3C14
  c->lr=c->r[0]; // 800D3C18
  c->r[1]=c->r[1]+0x00000010u; // 800D3C1C
  return; // 800D3C20
}

// fn_800D3C24
void f_800D3C24(Ctx* __restrict c) {
  trace_call(0x800D3C24u);
  c->r[0]=R8(c->r[13]+0xFFFF97F8u); // 800D3C24
  cmps(c,0,(int32_t)c->r[0],0); // 800D3C28
  if (!crb(c,2)) return; // 800D3C2C
  c->r[3]=0u+0x803D0000u; // 800D3C30
  c->r[3]=c->r[3]+0x00004C50u; // 800D3C34
  c->r[12]=R32(c->r[3]+0x00000004u); // 800D3C38
  cmps(c,0,(int32_t)c->r[12],0); // 800D3C3C
  if (crb(c,2)) return; // 800D3C40
  c->ctr=c->r[12]; // 800D3C44
  if (true) { dispatch(c,c->ctr); return; } // 800D3C48
}

// fn_800D3C4C
void f_800D3C4C(Ctx* __restrict c) {
  trace_call(0x800D3C4Cu);
  return; // 800D3C4C
}

// TRKPollUART
void f_800D3C50(Ctx* __restrict c) {
  trace_call(0x800D3C50u);
  c->r[3]=0u+0x803D0000u; // 800D3C50
  c->r[3]=c->r[3]+0x00004C50u; // 800D3C54
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 800D3C58
  c->ctr=c->r[12]; // 800D3C5C
  if (true) { dispatch(c,c->ctr); return; } // 800D3C60
}

// TRKReadUARTN
void f_800D3C64(Ctx* __restrict c) {
  trace_call(0x800D3C64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3C64
  c->r[0]=c->lr; // 800D3C68
  c->r[5]=0u+0x803D0000u; // 800D3C6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3C70
  c->r[5]=c->r[5]+0x00004C50u; // 800D3C74
  c->r[12]=R32(c->r[5]+0x00000010u); // 800D3C78
  c->ctr=c->r[12]; // 800D3C7C
  if (true) { c->lr=0x800D3C84u; dispatch(c,c->ctr); } // 800D3C80
  c->r[0]=0u-c->r[3]; // 800D3C84
  c->r[0]=c->r[0]|c->r[3]; // 800D3C88
  c->r[3]=sraw(c,c->r[0],31); // 800D3C8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3C90
  c->lr=c->r[0]; // 800D3C94
  c->r[1]=c->r[1]+0x00000010u; // 800D3C98
  return; // 800D3C9C
}

// TRK_WriteUARTN
void f_800D3CA0(Ctx* __restrict c) {
  trace_call(0x800D3CA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3CA0
  c->r[0]=c->lr; // 800D3CA4
  c->r[5]=0u+0x803D0000u; // 800D3CA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3CAC
  c->r[5]=c->r[5]+0x00004C50u; // 800D3CB0
  c->r[12]=R32(c->r[5]+0x00000014u); // 800D3CB4
  c->ctr=c->r[12]; // 800D3CB8
  if (true) { c->lr=0x800D3CC0u; dispatch(c,c->ctr); } // 800D3CBC
  c->r[0]=0u-c->r[3]; // 800D3CC0
  c->r[0]=c->r[0]|c->r[3]; // 800D3CC4
  c->r[3]=sraw(c,c->r[0],31); // 800D3CC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3CCC
  c->lr=c->r[0]; // 800D3CD0
  c->r[1]=c->r[1]+0x00000010u; // 800D3CD4
  return; // 800D3CD8
}

// ReserveEXI2Port
void f_800D3CDC(Ctx* __restrict c) {
  trace_call(0x800D3CDCu);
  c->r[3]=0u+0x803D0000u; // 800D3CDC
  c->r[3]=c->r[3]+0x00004C50u; // 800D3CE0
  c->r[12]=R32(c->r[3]+0x00000024u); // 800D3CE4
  c->ctr=c->r[12]; // 800D3CE8
  if (true) { dispatch(c,c->ctr); return; } // 800D3CEC
}

// UnreserveEXI2Port
void f_800D3CF0(Ctx* __restrict c) {
  trace_call(0x800D3CF0u);
  c->r[3]=0u+0x803D0000u; // 800D3CF0
  c->r[3]=c->r[3]+0x00004C50u; // 800D3CF4
  c->r[12]=R32(c->r[3]+0x00000020u); // 800D3CF8
  c->ctr=c->r[12]; // 800D3CFC
  if (true) { dispatch(c,c->ctr); return; } // 800D3D00
}

// TRK_board_display
void f_800D3D04(Ctx* __restrict c) {
  trace_call(0x800D3D04u);
  c->r[5]=0u+0x80390000u; // 800D3D04
  c->r[4]=c->r[3]|c->r[3]; // 800D3D08
  c->r[5]=c->r[5]+0xFFFFCAA0u; // 800D3D0C
  c->r[3]=c->r[5]+0x000000DDu; // 800D3D10
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D3D14
  f_80245CC0(c); return; // 800D3D18
}

// InitializeProgramEndTrap
void f_800D3D1C(Ctx* __restrict c) {
  trace_call(0x800D3D1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3D1C
  c->r[0]=c->lr; // 800D3D20
  c->r[4]=c->r[2]+0xFFFF9E30u; // 800D3D24
  c->r[5]=0u+0x00000004u; // 800D3D28
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3D2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D3D30
  c->r[31]=0u+0x801D0000u; // 800D3D34
  c->r[31]=c->r[31]+0xFFFFA5F0u; // 800D3D38
  c->r[3]=c->r[31]+0x00000004u; // 800D3D3C
  c->lr=0x800D3D44u; f_800D332C(c); // 800D3D40
  c->r[3]=c->r[31]+0x00000004u; // 800D3D44
  c->r[4]=0u+0x00000004u; // 800D3D48
  c->lr=0x800D3D50u; f_80244F10(c); // 800D3D4C
  c->r[3]=c->r[31]+0x00000004u; // 800D3D50
  c->r[4]=0u+0x00000004u; // 800D3D54
  c->lr=0x800D3D5Cu; f_80244E50(c); // 800D3D58
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3D5C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D3D60
  c->lr=c->r[0]; // 800D3D64
  c->r[1]=c->r[1]+0x00000010u; // 800D3D68
  return; // 800D3D6C
}

// TRKDoNotifyStopped
void f_800D3D70(Ctx* __restrict c) {
  trace_call(0x800D3D70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3D70
  c->r[0]=c->lr; // 800D3D74
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D3D78
  c->r[4]=c->r[1]+0x00000008u; // 800D3D7C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D3D80
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D3D84
  c->r[30]=c->r[3]|c->r[3]; // 800D3D88
  c->r[3]=c->r[1]+0x0000000Cu; // 800D3D8C
  c->lr=0x800D3D94u; f_800D4C54(c); // 800D3D90
  cmps(c,0,(int32_t)c->r[3],0); // 800D3D94
  c->r[31]=c->r[3]|c->r[3]; // 800D3D98
  if (!crb(c,2)) { goto L_800D3DE4; } // 800D3D9C
  cmps(c,0,(int32_t)c->r[30],144); // 800D3DA0
  if (!crb(c,2)) { goto L_800D3DB4; } // 800D3DA4
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D3DA8
  c->lr=0x800D3DB0u; f_800D71D8(c); // 800D3DAC
  goto L_800D3DBC; // 800D3DB0
L_800D3DB4:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D3DB4
  c->lr=0x800D3DBCu; f_800D73D8(c); // 800D3DB8
L_800D3DBC:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D3DBC
  c->r[4]=c->r[1]+0x00000010u; // 800D3DC0
  c->lr=0x800D3DC8u; f_800D4444(c); // 800D3DC4
  cmps(c,0,(int32_t)c->r[3],0); // 800D3DC8
  c->r[31]=c->r[3]|c->r[3]; // 800D3DCC
  if (!crb(c,2)) { goto L_800D3DDC; } // 800D3DD0
  c->r[3]=R32(c->r[1]+0x00000010u); // 800D3DD4
  c->lr=0x800D3DDCu; f_800D4D14(c); // 800D3DD8
L_800D3DDC:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800D3DDC
  c->lr=0x800D3DE4u; f_800D4D14(c); // 800D3DE0
L_800D3DE4:;
  c->r[3]=c->r[31]|c->r[31]; // 800D3DE4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D3DE8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D3DEC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D3DF0
  c->lr=c->r[0]; // 800D3DF4
  c->r[1]=c->r[1]+0x00000020u; // 800D3DF8
  return; // 800D3DFC
}

// TRKInitializeEventQueue
void f_800D3E00(Ctx* __restrict c) {
  trace_call(0x800D3E00u);
  c->r[3]=0u+0x803D0000u; // 800D3E00
  c->r[5]=0u+0x00000000u; // 800D3E04
  c->r[4]=c->r[3]+0x00004C78u; // 800D3E08
  c->r[0]=0u+0x00000100u; // 800D3E0C
  W32(c->r[3]+0x00004C78u,c->r[5]); // 800D3E10
  c->r[3]=0u+0x00000000u; // 800D3E14
  W32(c->r[4]+0x00000004u,c->r[5]); // 800D3E18
  W32(c->r[4]+0x00000020u,c->r[0]); // 800D3E1C
  return; // 800D3E20
}

// TRKGetNextEvent
void f_800D3E24(Ctx* __restrict c) {
  trace_call(0x800D3E24u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3E24
  c->r[0]=c->lr; // 800D3E28
  c->r[4]=0u+0x00000000u; // 800D3E2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3E30
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D3E34
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D3E38
  c->r[30]=0u+0x803D0000u; // 800D3E3C
  c->r[0]=R32(c->r[30]+0x00004C78u); // 800D3E40
  cmps(c,0,(int32_t)c->r[0],0); // 800D3E44
  if (!crb(c,1)) { goto L_800D3E94; } // 800D3E48
  c->r[31]=c->r[30]+0x00004C78u; // 800D3E4C
  c->r[5]=0u+0x0000000Cu; // 800D3E50
  c->r[0]=R32(c->r[31]+0x00000004u); // 800D3E54
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800D3E58
  c->r[4]=c->r[31]+c->r[0]; // 800D3E5C
  c->r[4]=c->r[4]+0x00000008u; // 800D3E60
  c->lr=0x800D3E68u; f_800D332C(c); // 800D3E64
  c->r[3]=R32(c->r[31]+0x00000004u); // 800D3E68
  c->r[4]=R32(c->r[30]+0x00004C78u); // 800D3E6C
  c->r[0]=c->r[3]+0x00000001u; // 800D3E70
  W32(c->r[31]+0x00000004u,c->r[0]); // 800D3E74
  cmps(c,0,(int32_t)c->r[0],2); // 800D3E78
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800D3E7C
  W32(c->r[30]+0x00004C78u,c->r[0]); // 800D3E80
  if (!crb(c,2)) { goto L_800D3E90; } // 800D3E84
  c->r[0]=0u+0x00000000u; // 800D3E88
  W32(c->r[31]+0x00000004u,c->r[0]); // 800D3E8C
L_800D3E90:;
  c->r[4]=0u+0x00000001u; // 800D3E90
L_800D3E94:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D3E94
  c->r[3]=c->r[4]|c->r[4]; // 800D3E98
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D3E9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D3EA0
  c->lr=c->r[0]; // 800D3EA4
  c->r[1]=c->r[1]+0x00000010u; // 800D3EA8
  return; // 800D3EAC
}

// TRKPostEvent
void f_800D3EB0(Ctx* __restrict c) {
  trace_call(0x800D3EB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3EB0
  c->r[0]=c->lr; // 800D3EB4
  c->r[4]=0u+0x803D0000u; // 800D3EB8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D3EBC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D3EC0
  c->r[31]=0u+0x00000000u; // 800D3EC4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D3EC8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D3ECC
  c->r[6]=R32(c->r[4]+0x00004C78u); // 800D3ED0
  cmps(c,0,(int32_t)c->r[6],2); // 800D3ED4
  if (!crb(c,2)) { goto L_800D3EF0; } // 800D3ED8
  c->r[3]=0u+0x80390000u; // 800D3EDC
  c->r[31]=0u+0x00000100u; // 800D3EE0
  c->r[3]=c->r[3]+0xFFFFCB88u; // 800D3EE4
  c->lr=0x800D3EECu; f_80245CC0(c); // 800D3EE8
  goto L_800D3F5C; // 800D3EEC
L_800D3EF0:;
  c->r[30]=c->r[4]+0x00004C78u; // 800D3EF0
  c->r[4]=c->r[3]|c->r[3]; // 800D3EF4
  c->r[0]=R32(c->r[30]+0x00000004u); // 800D3EF8
  c->r[5]=0u+0x0000000Cu; // 800D3EFC
  c->r[0]=c->r[0]+c->r[6]; // 800D3F00
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 800D3F04
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 800D3F08
  c->r[0]=c->r[0]^c->r[3]; // 800D3F0C
  c->r[0]=c->r[0]-c->r[3]; // 800D3F10
  c->r[29]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800D3F14
  c->r[3]=c->r[30]+c->r[29]; // 800D3F18
  c->r[3]=c->r[3]+0x00000008u; // 800D3F1C
  c->lr=0x800D3F24u; f_800D332C(c); // 800D3F20
  c->r[3]=c->r[30]+c->r[29]; // 800D3F24
  c->r[0]=R32(c->r[30]+0x00000020u); // 800D3F28
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800D3F2C
  c->r[3]=R32(c->r[30]+0x00000020u); // 800D3F30
  c->r[0]=c->r[3]+0x00000001u; // 800D3F34
  W32(c->r[30]+0x00000020u,c->r[0]); // 800D3F38
  cmpu(c,0,c->r[0],0x00000100u); // 800D3F3C
  if (!crb(c,0)) { goto L_800D3F4C; } // 800D3F40
  c->r[0]=0u+0x00000100u; // 800D3F44
  W32(c->r[30]+0x00000020u,c->r[0]); // 800D3F48
L_800D3F4C:;
  c->r[4]=0u+0x803D0000u; // 800D3F4C
  c->r[3]=R32(c->r[4]+0x00004C78u); // 800D3F50
  c->r[0]=c->r[3]+0x00000001u; // 800D3F54
  W32(c->r[4]+0x00004C78u,c->r[0]); // 800D3F58
L_800D3F5C:;
  c->r[3]=c->r[31]|c->r[31]; // 800D3F5C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D3F60
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D3F64
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D3F68
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D3F6C
  c->lr=c->r[0]; // 800D3F70
  c->r[1]=c->r[1]+0x00000020u; // 800D3F74
  return; // 800D3F78
}

// TRKConstructEvent
void f_800D3F7C(Ctx* __restrict c) {
  trace_call(0x800D3F7Cu);
  c->r[5]=0u+0x00000000u; // 800D3F7C
  c->r[0]=0u+0xFFFFFFFFu; // 800D3F80
  W32(c->r[3]+0x00000000u,c->r[4]); // 800D3F84
  W32(c->r[3]+0x00000004u,c->r[5]); // 800D3F88
  W32(c->r[3]+0x00000008u,c->r[0]); // 800D3F8C
  return; // 800D3F90
}

// TRKDestructEvent
void f_800D3F94(Ctx* __restrict c) {
  trace_call(0x800D3F94u);
  c->r[3]=R32(c->r[3]+0x00000008u); // 800D3F94
  f_800D4D14(c); return; // 800D3F98
}

// TRKInitializeNub
void f_800D3F9C(Ctx* __restrict c) {
  trace_call(0x800D3F9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D3F9C
  c->r[0]=c->lr; // 800D3FA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D3FA4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D3FA8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D3FAC
  c->lr=0x800D3FB4u; f_800D4078(c); // 800D3FB0
  cmps(c,0,(int32_t)c->r[3],0); // 800D3FB4
  c->r[31]=c->r[3]|c->r[3]; // 800D3FB8
  if (!crb(c,2)) { goto L_800D3FC8; } // 800D3FBC
  c->lr=0x800D3FC4u; f_800D3E00(c); // 800D3FC0
  c->r[31]=c->r[3]|c->r[3]; // 800D3FC4
L_800D3FC8:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D3FC8
  if (!crb(c,2)) { goto L_800D3FD8; } // 800D3FCC
  c->lr=0x800D3FD4u; f_800D4C34(c); // 800D3FD0
  c->r[31]=c->r[3]|c->r[3]; // 800D3FD4
L_800D3FD8:;
  c->lr=0x800D3FDCu; f_800D3D1C(c); // 800D3FD8
  cmps(c,0,(int32_t)c->r[31],0); // 800D3FDC
  if (!crb(c,2)) { goto L_800D3FEC; } // 800D3FE0
  c->lr=0x800D3FE8u; f_800D4224(c); // 800D3FE4
  c->r[31]=c->r[3]|c->r[3]; // 800D3FE8
L_800D3FEC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D3FEC
  if (!crb(c,2)) { goto L_800D3FFC; } // 800D3FF0
  c->lr=0x800D3FF8u; f_800D397C(c); // 800D3FF4
  c->r[31]=c->r[3]|c->r[3]; // 800D3FF8
L_800D3FFC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D3FFC
  if (!crb(c,2)) { goto L_800D402C; } // 800D4000
  c->r[3]=0u+0x00000001u; // 800D4004
  c->r[4]=0u+0x00000000u; // 800D4008
  c->r[5]=c->r[13]+0xFFFF9808u; // 800D400C
  c->lr=0x800D4014u; f_800D3BD0(c); // 800D4010
  c->r[30]=c->r[3]|c->r[3]; // 800D4014
  c->r[3]=R32(c->r[13]+0xFFFF9808u); // 800D4018
  c->lr=0x800D4020u; f_800D7CCC(c); // 800D401C
  cmps(c,0,(int32_t)c->r[30],0); // 800D4020
  if (crb(c,2)) { goto L_800D402C; } // 800D4024
  c->r[31]=c->r[30]|c->r[30]; // 800D4028
L_800D402C:;
  c->r[3]=c->r[31]|c->r[31]; // 800D402C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D4030
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D4034
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4038
  c->lr=c->r[0]; // 800D403C
  c->r[1]=c->r[1]+0x00000010u; // 800D4040
  return; // 800D4044
}

// TRKTerminateNub
void f_800D4048(Ctx* __restrict c) {
  trace_call(0x800D4048u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4048
  c->r[0]=c->lr; // 800D404C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4050
  c->lr=0x800D4058u; f_800D422C(c); // 800D4054
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4058
  c->r[3]=0u+0x00000000u; // 800D405C
  c->lr=c->r[0]; // 800D4060
  c->r[1]=c->r[1]+0x00000010u; // 800D4064
  return; // 800D4068
}

// TRKNubWelcome
void f_800D406C(Ctx* __restrict c) {
  trace_call(0x800D406Cu);
  c->r[3]=0u+0x80390000u; // 800D406C
  c->r[3]=c->r[3]+0xFFFFCBA8u; // 800D4070
  f_800D3D04(c); return; // 800D4074
}

// TRKInitializeEndian
void f_800D4078(Ctx* __restrict c) {
  trace_call(0x800D4078u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4078
  c->r[3]=0u+0x00000012u; // 800D407C
  c->r[5]=0u+0x00000034u; // 800D4080
  c->r[4]=0u+0x00000056u; // 800D4084
  c->r[0]=0u+0x00000078u; // 800D4088
  W8(c->r[1]+0x00000008u,c->r[3]); // 800D408C
  c->r[6]=0u+0x00000001u; // 800D4090
  c->r[3]=0u+0x00000000u; // 800D4094
  W8(c->r[1]+0x00000009u,c->r[5]); // 800D4098
  W8(c->r[1]+0x0000000Au,c->r[4]); // 800D409C
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 800D40A0
  c->r[4]=R32(c->r[1]+0x00000008u); // 800D40A4
  W32(c->r[13]+0xFFFF9800u,c->r[6]); // 800D40A8
  c->r[0]=c->r[4]+0xEDCC0000u; // 800D40AC
  cmpu(c,0,c->r[0],0x00005678u); // 800D40B0
  if (!crb(c,2)) { goto L_800D40C0; } // 800D40B4
  W32(c->r[13]+0xFFFF9800u,c->r[6]); // 800D40B8
  goto L_800D40E4; // 800D40BC
L_800D40C0:;
  c->r[0]=c->r[4]+0x87AA0000u; // 800D40C0
  cmpu(c,0,c->r[0],0x00003412u); // 800D40C4
  if (!crb(c,2)) { goto L_800D40D4; } // 800D40C8
  c->r[0]=0u+0x00000000u; // 800D40CC
  W32(c->r[13]+0xFFFF9800u,c->r[0]); // 800D40D0
L_800D40D4:;
  c->r[0]=c->r[4]+0x87AA0000u; // 800D40D4
  cmpu(c,0,c->r[0],0x00003412u); // 800D40D8
  if (crb(c,2)) { goto L_800D40E4; } // 800D40DC
  c->r[3]=0u+0x00000001u; // 800D40E0
L_800D40E4:;
  c->r[1]=c->r[1]+0x00000010u; // 800D40E4
  return; // 800D40E8
}

// TRKTestForPacket
void f_800D40EC(Ctx* __restrict c) {
  trace_call(0x800D40ECu);
  {uint32_t ea=c->r[1]+0xFFFFF720u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D40EC
  c->r[0]=c->lr; // 800D40F0
  W32(c->r[1]+0x000008E4u,c->r[0]); // 800D40F4
  W32(c->r[1]+0x000008DCu,c->r[31]); // 800D40F8
  c->lr=0x800D4100u; f_800D3C50(c); // 800D40FC
  cmps(c,0,(int32_t)c->r[3],0); // 800D4100
  if (crb(c,1)) { goto L_800D4110; } // 800D4104
  c->r[3]=0u+0xFFFFFFFFu; // 800D4108
  goto L_800D41A4; // 800D410C
L_800D4110:;
  c->r[3]=c->r[1]+0x0000000Cu; // 800D4110
  c->r[4]=c->r[1]+0x00000008u; // 800D4114
  c->lr=0x800D411Cu; f_800D4C54(c); // 800D4118
  c->r[31]=c->r[3]|c->r[3]; // 800D411C
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D4120
  c->r[4]=0u+0x00000000u; // 800D4124
  c->lr=0x800D412Cu; f_800D4D64(c); // 800D4128
  c->r[3]=c->r[1]+0x00000010u; // 800D412C
  c->r[4]=0u+0x00000040u; // 800D4130
  c->lr=0x800D4138u; f_800D3C64(c); // 800D4134
  cmps(c,0,(int32_t)c->r[3],0); // 800D4138
  if (!crb(c,2)) { goto L_800D4194; } // 800D413C
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D4140
  c->r[4]=c->r[1]+0x00000010u; // 800D4144
  c->r[5]=0u+0x00000040u; // 800D4148
  c->lr=0x800D4150u; f_800D508C(c); // 800D414C
  c->r[3]=R32(c->r[1]+0x00000010u); // 800D4150
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D4154
  c->r[4]=addc(c,c->r[3],0xFFFFFFC0u,0); cr0(c,c->r[4]); // 800D4158
  if (!crb(c,1)) { goto L_800D41A0; } // 800D415C
  c->r[3]=c->r[1]+0x00000050u; // 800D4160
  c->lr=0x800D4168u; f_800D3C64(c); // 800D4164
  cmps(c,0,(int32_t)c->r[3],0); // 800D4168
  if (!crb(c,2)) { goto L_800D4184; } // 800D416C
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D4170
  c->r[4]=c->r[1]+0x00000050u; // 800D4174
  c->r[5]=R32(c->r[1]+0x00000010u); // 800D4178
  c->lr=0x800D4180u; f_800D508C(c); // 800D417C
  goto L_800D41A0; // 800D4180
L_800D4184:;
  c->r[3]=c->r[31]|c->r[31]; // 800D4184
  c->lr=0x800D418Cu; f_800D4D14(c); // 800D4188
  c->r[31]=0u+0xFFFFFFFFu; // 800D418C
  goto L_800D41A0; // 800D4190
L_800D4194:;
  c->r[3]=c->r[31]|c->r[31]; // 800D4194
  c->lr=0x800D419Cu; f_800D4D14(c); // 800D4198
  c->r[31]=0u+0xFFFFFFFFu; // 800D419C
L_800D41A0:;
  c->r[3]=c->r[31]|c->r[31]; // 800D41A0
L_800D41A4:;
  c->r[0]=R32(c->r[1]+0x000008E4u); // 800D41A4
  c->r[31]=R32(c->r[1]+0x000008DCu); // 800D41A8
  c->lr=c->r[0]; // 800D41AC
  c->r[1]=c->r[1]+0x000008E0u; // 800D41B0
  return; // 800D41B4
}

// TRKGetInput
void f_800D41B8(Ctx* __restrict c) {
  trace_call(0x800D41B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D41B8
  c->r[0]=c->lr; // 800D41BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D41C0
  c->lr=0x800D41C8u; f_800D40EC(c); // 800D41C4
  cmps(c,0,(int32_t)c->r[3],-1); // 800D41C8
  if (crb(c,2)) { goto L_800D41D4; } // 800D41CC
  c->lr=0x800D41D4u; f_800D41E4(c); // 800D41D0
L_800D41D4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D41D4
  c->lr=c->r[0]; // 800D41D8
  c->r[1]=c->r[1]+0x00000010u; // 800D41DC
  return; // 800D41E0
}

// TRKProcessInput
void f_800D41E4(Ctx* __restrict c) {
  trace_call(0x800D41E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D41E4
  c->r[0]=c->lr; // 800D41E8
  c->r[4]=0u+0x00000002u; // 800D41EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D41F0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D41F4
  c->r[31]=c->r[3]|c->r[3]; // 800D41F8
  c->r[3]=c->r[1]+0x00000008u; // 800D41FC
  c->lr=0x800D4204u; f_800D3F7C(c); // 800D4200
  W32(c->r[1]+0x00000010u,c->r[31]); // 800D4204
  c->r[3]=c->r[1]+0x00000008u; // 800D4208
  c->lr=0x800D4210u; f_800D3EB0(c); // 800D420C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D4210
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D4214
  c->lr=c->r[0]; // 800D4218
  c->r[1]=c->r[1]+0x00000020u; // 800D421C
  return; // 800D4220
}

// TRKInitializeSerialHandler
void f_800D4224(Ctx* __restrict c) {
  trace_call(0x800D4224u);
  c->r[3]=0u+0x00000000u; // 800D4224
  return; // 800D4228
}

// TRKTerminateSerialHandler
void f_800D422C(Ctx* __restrict c) {
  trace_call(0x800D422Cu);
  c->r[3]=0u+0x00000000u; // 800D422C
  return; // 800D4230
}

// TRK_strlen
void f_800D4234(Ctx* __restrict c) {
  trace_call(0x800D4234u);
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 800D4234
  c->r[3]=0u+0xFFFFFFFFu; // 800D4238
L_800D423C:;
  {uint32_t ea=c->r[4]+0x00000001u; c->r[0]=R8(ea); c->r[4]=ea;} // 800D423C
  c->r[3]=c->r[3]+0x00000001u; // 800D4240
  cmps(c,0,(int32_t)c->r[0],0); // 800D4244
  if (!crb(c,2)) { IRQCHK(c); goto L_800D423C; } // 800D4248
  return; // 800D424C
}

// TRK_SuppAccessFile
void f_800D4250(Ctx* __restrict c) {
  trace_call(0x800D4250u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4250
  c->r[0]=c->lr; // 800D4254
  cmps(c,0,(int32_t)c->r[4],0); // 800D4258
  W32(c->r[1]+0x00000094u,c->r[0]); // 800D425C
  {uint32_t ea=c->r[1]+0x0000005Cu; for(int i=19;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D4260
  c->r[24]=c->r[3]|c->r[3]; // 800D4264
  c->r[25]=c->r[4]|c->r[4]; // 800D4268
  c->r[26]=c->r[5]|c->r[5]; // 800D426C
  c->r[27]=c->r[6]|c->r[6]; // 800D4270
  c->r[28]=c->r[7]|c->r[7]; // 800D4274
  c->r[29]=c->r[8]|c->r[8]; // 800D4278
  if (crb(c,2)) { goto L_800D428C; } // 800D427C
  c->r[0]=R32(c->r[5]+0x00000000u); // 800D4280
  cmps(c,0,(int32_t)c->r[0],0); // 800D4284
  if (!crb(c,2)) { goto L_800D4294; } // 800D4288
L_800D428C:;
  c->r[3]=0u+0x00000002u; // 800D428C
  goto L_800D4430; // 800D4290
L_800D4294:;
  c->r[30]=0u+0x00000000u; // 800D4294
  W32(c->r[6]+0x00000000u,c->r[30]); // 800D4298
  c->r[31]=0u+0x00000000u; // 800D429C
  c->r[23]=0u+0x00000000u; // 800D42A0
  goto L_800D4400; // 800D42A4
L_800D42A8:;
  c->r[3]=c->r[1]+0x00000018u; // 800D42A8
  c->r[4]=0u+0x00000000u; // 800D42AC
  c->r[5]=0u+0x00000040u; // 800D42B0
  c->lr=0x800D42B8u; f_800D3468(c); // 800D42B4
  c->r[0]=R32(c->r[26]+0x00000000u); // 800D42B8
  c->r[21]=0u+0x00000800u; // 800D42BC
  c->r[0]=c->r[0]-c->r[31]; // 800D42C0
  cmpu(c,0,c->r[0],0x00000800u); // 800D42C4
  if (crb(c,1)) { goto L_800D42D0; } // 800D42C8
  c->r[21]=c->r[0]|c->r[0]; // 800D42CC
L_800D42D0:;
  cmps(c,0,(int32_t)c->r[29],0); // 800D42D0
  c->r[0]=0u+0x000000D0u; // 800D42D4
  if (crb(c,2)) { goto L_800D42E0; } // 800D42D8
  c->r[0]=0u+0x000000D1u; // 800D42DC
L_800D42E0:;
  cmps(c,0,(int32_t)c->r[29],0); // 800D42E0
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 800D42E4
  c->r[0]=0u+0x00000040u; // 800D42E8
  if (!crb(c,2)) { goto L_800D42F4; } // 800D42EC
  c->r[0]=c->r[21]+0x00000040u; // 800D42F0
L_800D42F4:;
  W32(c->r[1]+0x00000018u,c->r[0]); // 800D42F4
  c->r[3]=c->r[1]+0x0000000Cu; // 800D42F8
  c->r[4]=c->r[1]+0x00000008u; // 800D42FC
  W32(c->r[1]+0x00000020u,c->r[24]); // 800D4300
  W16(c->r[1]+0x00000024u,c->r[21]); // 800D4304
  c->lr=0x800D430Cu; f_800D4C54(c); // 800D4308
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D430C
  c->r[4]=c->r[1]+0x00000018u; // 800D4310
  c->r[5]=0u+0x00000040u; // 800D4314
  c->lr=0x800D431Cu; f_800D508C(c); // 800D4318
  cmps(c,0,(int32_t)c->r[29],0); // 800D431C
  c->r[23]=c->r[3]|c->r[3]; // 800D4320
  if (!crb(c,2)) { goto L_800D4344; } // 800D4324
  cmps(c,0,(int32_t)c->r[3],0); // 800D4328
  if (!crb(c,2)) { goto L_800D4344; } // 800D432C
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D4330
  c->r[5]=c->r[21]|c->r[21]; // 800D4334
  c->r[4]=c->r[25]+c->r[31]; // 800D4338
  c->lr=0x800D4340u; f_800D508C(c); // 800D433C
  c->r[23]=c->r[3]|c->r[3]; // 800D4340
L_800D4344:;
  cmps(c,0,(int32_t)c->r[23],0); // 800D4344
  if (!crb(c,2)) { goto L_800D43F4; } // 800D4348
  cmps(c,0,(int32_t)c->r[28],0); // 800D434C
  if (crb(c,2)) { goto L_800D43E8; } // 800D4350
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D4354
  c->r[4]=c->r[1]+0x00000010u; // 800D4358
  c->lr=0x800D4360u; f_800D4444(c); // 800D435C
  cmps(c,0,(int32_t)c->r[3],0); // 800D4360
  c->r[23]=c->r[3]|c->r[3]; // 800D4364
  if (!crb(c,2)) { goto L_800D4378; } // 800D4368
  c->r[3]=R32(c->r[1]+0x00000010u); // 800D436C
  c->lr=0x800D4374u; f_800D4CF0(c); // 800D4370
  c->r[22]=c->r[3]|c->r[3]; // 800D4374
L_800D4378:;
  c->r[0]=R32(c->r[22]+0x0000001Cu); // 800D4378
  cmps(c,0,(int32_t)c->r[29],0); // 800D437C
  c->r[19]=R16(c->r[22]+0x00000020u); // 800D4380
  c->r[20]=rotl(c->r[0],0)&0x000000FFu; // 800D4384
  if (crb(c,2)) { goto L_800D43C8; } // 800D4388
  cmps(c,0,(int32_t)c->r[23],0); // 800D438C
  if (!crb(c,2)) { goto L_800D43C8; } // 800D4390
  cmpu(c,0,c->r[19],c->r[21]); // 800D4394
  if (crb(c,1)) { goto L_800D43C8; } // 800D4398
  c->r[3]=c->r[22]|c->r[22]; // 800D439C
  c->r[4]=0u+0x00000040u; // 800D43A0
  c->lr=0x800D43A8u; f_800D4D64(c); // 800D43A4
  c->r[3]=c->r[22]|c->r[22]; // 800D43A8
  c->r[5]=c->r[19]|c->r[19]; // 800D43AC
  c->r[4]=c->r[25]+c->r[31]; // 800D43B0
  c->lr=0x800D43B8u; f_800D52C0(c); // 800D43B4
  cmps(c,0,(int32_t)c->r[3],770); // 800D43B8
  c->r[23]=c->r[3]|c->r[3]; // 800D43BC
  if (!crb(c,2)) { goto L_800D43C8; } // 800D43C0
  c->r[23]=0u+0x00000000u; // 800D43C4
L_800D43C8:;
  cmpu(c,0,c->r[19],c->r[21]); // 800D43C8
  if (crb(c,2)) { goto L_800D43D8; } // 800D43CC
  c->r[21]=c->r[19]|c->r[19]; // 800D43D0
  c->r[30]=0u+0x00000001u; // 800D43D4
L_800D43D8:;
  W32(c->r[27]+0x00000000u,c->r[20]); // 800D43D8
  c->r[3]=R32(c->r[1]+0x00000010u); // 800D43DC
  c->lr=0x800D43E4u; f_800D4D14(c); // 800D43E0
  goto L_800D43F4; // 800D43E4
L_800D43E8:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D43E8
  c->lr=0x800D43F0u; f_800D4BD0(c); // 800D43EC
  c->r[23]=c->r[3]|c->r[3]; // 800D43F0
L_800D43F4:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800D43F4
  c->lr=0x800D43FCu; f_800D4D14(c); // 800D43F8
  c->r[31]=c->r[31]+c->r[21]; // 800D43FC
L_800D4400:;
  cmps(c,0,(int32_t)c->r[30],0); // 800D4400
  if (!crb(c,2)) { goto L_800D4428; } // 800D4404
  c->r[0]=R32(c->r[26]+0x00000000u); // 800D4408
  cmpu(c,0,c->r[31],c->r[0]); // 800D440C
  if (!crb(c,0)) { goto L_800D4428; } // 800D4410
  cmps(c,0,(int32_t)c->r[23],0); // 800D4414
  if (!crb(c,2)) { goto L_800D4428; } // 800D4418
  c->r[0]=R32(c->r[27]+0x00000000u); // 800D441C
  cmps(c,0,(int32_t)c->r[0],0); // 800D4420
  if (crb(c,2)) { IRQCHK(c); goto L_800D42A8; } // 800D4424
L_800D4428:;
  W32(c->r[26]+0x00000000u,c->r[31]); // 800D4428
  c->r[3]=c->r[23]|c->r[23]; // 800D442C
L_800D4430:;
  {uint32_t ea=c->r[1]+0x0000005Cu; for(int i=19;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D4430
  c->r[0]=R32(c->r[1]+0x00000094u); // 800D4434
  c->lr=c->r[0]; // 800D4438
  c->r[1]=c->r[1]+0x00000090u; // 800D443C
  return; // 800D4440
}

// TRK_RequestSend
void f_800D4444(Ctx* __restrict c) {
  trace_call(0x800D4444u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4444
  c->r[0]=c->lr; // 800D4448
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D444C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D4450
  c->r[26]=c->r[4]|c->r[4]; // 800D4454
  c->lr=0x800D445Cu; f_800D4BD0(c); // 800D4458
  cmps(c,0,(int32_t)c->r[3],0); // 800D445C
  c->r[30]=c->r[3]|c->r[3]; // 800D4460
  if (!crb(c,2)) { goto L_800D4530; } // 800D4464
  c->r[27]=0u+0x00000000u; // 800D4468
  c->r[31]=0u+0xFFFFFFFFu; // 800D446C
L_800D4470:;
  c->lr=0x800D4474u; f_800D40EC(c); // 800D4470
  cmps(c,0,(int32_t)c->r[3],-1); // 800D4474
  W32(c->r[26]+0x00000000u,c->r[3]); // 800D4478
  if (crb(c,2)) { IRQCHK(c); goto L_800D4470; } // 800D447C
  c->lr=0x800D4484u; f_800D4CF0(c); // 800D4480
  c->r[29]=c->r[3]|c->r[3]; // 800D4484
  c->r[4]=0u+0x00000000u; // 800D4488
  c->lr=0x800D4490u; f_800D4D64(c); // 800D448C
  c->r[28]=R8(c->r[29]+0x00000010u); // 800D4490
  cmpu(c,0,c->r[28],0x00000080u); // 800D4494
  if (!crb(c,0)) { goto L_800D44AC; } // 800D4498
  c->r[3]=R32(c->r[26]+0x00000000u); // 800D449C
  c->lr=0x800D44A4u; f_800D41E4(c); // 800D44A0
  W32(c->r[26]+0x00000000u,c->r[31]); // 800D44A4
  IRQCHK(c); goto L_800D4470; // 800D44A8
L_800D44AC:;
  c->r[0]=R32(c->r[26]+0x00000000u); // 800D44AC
  cmps(c,0,(int32_t)c->r[0],-1); // 800D44B0
  if (crb(c,2)) { goto L_800D4530; } // 800D44B4
  c->r[4]=R32(c->r[29]+0x00000004u); // 800D44B8
  cmpu(c,0,c->r[4],0x00000040u); // 800D44BC
  if (!crb(c,0)) { goto L_800D44D8; } // 800D44C0
  c->r[3]=0u+0x80390000u; // 800D44C4
  c->r[3]=c->r[3]+0xFFFFCBC8u; // 800D44C8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D44CC
  c->lr=0x800D44D4u; f_80245CC0(c); // 800D44D0
  c->r[27]=0u+0x00000001u; // 800D44D4
L_800D44D8:;
  cmps(c,0,(int32_t)c->r[30],0); // 800D44D8
  if (!crb(c,2)) { goto L_800D44EC; } // 800D44DC
  cmps(c,0,(int32_t)c->r[27],0); // 800D44E0
  if (!crb(c,2)) { goto L_800D44EC; } // 800D44E4
  c->r[31]=R8(c->r[29]+0x00000014u); // 800D44E8
L_800D44EC:;
  cmps(c,0,(int32_t)c->r[30],0); // 800D44EC
  if (!crb(c,2)) { goto L_800D4510; } // 800D44F0
  cmps(c,0,(int32_t)c->r[27],0); // 800D44F4
  if (!crb(c,2)) { goto L_800D4510; } // 800D44F8
  cmps(c,0,(int32_t)c->r[28],128); // 800D44FC
  if (!crb(c,2)) { goto L_800D450C; } // 800D4500
  cmps(c,0,(int32_t)c->r[31],0); // 800D4504
  if (crb(c,2)) { goto L_800D4510; } // 800D4508
L_800D450C:;
  c->r[27]=0u+0x00000001u; // 800D450C
L_800D4510:;
  cmps(c,0,(int32_t)c->r[30],0); // 800D4510
  if (!crb(c,2)) { goto L_800D4520; } // 800D4514
  cmps(c,0,(int32_t)c->r[27],0); // 800D4518
  if (crb(c,2)) { goto L_800D4530; } // 800D451C
L_800D4520:;
  c->r[3]=R32(c->r[26]+0x00000000u); // 800D4520
  c->lr=0x800D4528u; f_800D4D14(c); // 800D4524
  c->r[0]=0u+0xFFFFFFFFu; // 800D4528
  W32(c->r[26]+0x00000000u,c->r[0]); // 800D452C
L_800D4530:;
  c->r[0]=R32(c->r[26]+0x00000000u); // 800D4530
  cmps(c,0,(int32_t)c->r[0],-1); // 800D4534
  if (!crb(c,2)) { goto L_800D4554; } // 800D4538
  c->r[3]=0u+0x80390000u; // 800D453C
  c->r[3]=c->r[3]+0xFFFFCBC8u; // 800D4540
  c->r[3]=c->r[3]+0x0000001Fu; // 800D4544
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D4548
  c->lr=0x800D4550u; f_80245CC0(c); // 800D454C
  c->r[30]=0u+0x00000800u; // 800D4550
L_800D4554:;
  c->r[3]=c->r[30]|c->r[30]; // 800D4554
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D4558
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D455C
  c->lr=c->r[0]; // 800D4560
  c->r[1]=c->r[1]+0x00000020u; // 800D4564
  return; // 800D4568
}

// HandleOpenFileSupportRequest
void f_800D456C(Ctx* __restrict c) {
  trace_call(0x800D456Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D456C
  c->r[0]=c->lr; // 800D4570
  W32(c->r[1]+0x00000074u,c->r[0]); // 800D4574
  {uint32_t ea=c->r[1]+0x0000005Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D4578
  c->r[27]=c->r[3]|c->r[3]; // 800D457C
  c->r[30]=c->r[4]|c->r[4]; // 800D4580
  c->r[28]=c->r[5]|c->r[5]; // 800D4584
  c->r[29]=c->r[6]|c->r[6]; // 800D4588
  c->r[3]=c->r[1]+0x00000018u; // 800D458C
  c->r[4]=0u+0x00000000u; // 800D4590
  c->r[5]=0u+0x00000040u; // 800D4594
  c->lr=0x800D459Cu; f_800D3468(c); // 800D4598
  c->r[0]=0u+0x00000000u; // 800D459C
  W32(c->r[28]+0x00000000u,c->r[0]); // 800D45A0
  c->r[0]=0u+0x000000D2u; // 800D45A4
  c->r[3]=c->r[27]|c->r[27]; // 800D45A8
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 800D45AC
  c->lr=0x800D45B4u; f_800D4234(c); // 800D45B0
  c->r[0]=c->r[3]+0x00000041u; // 800D45B4
  W32(c->r[1]+0x00000018u,c->r[0]); // 800D45B8
  c->r[3]=c->r[27]|c->r[27]; // 800D45BC
  W8(c->r[1]+0x00000020u,c->r[30]); // 800D45C0
  c->lr=0x800D45C8u; f_800D4234(c); // 800D45C4
  c->r[0]=c->r[3]+0x00000001u; // 800D45C8
  W16(c->r[1]+0x00000024u,c->r[0]); // 800D45CC
  c->r[3]=c->r[1]+0x0000000Cu; // 800D45D0
  c->r[4]=c->r[1]+0x00000008u; // 800D45D4
  c->lr=0x800D45DCu; f_800D4C54(c); // 800D45D8
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D45DC
  c->r[4]=c->r[1]+0x00000018u; // 800D45E0
  c->r[5]=0u+0x00000040u; // 800D45E4
  c->lr=0x800D45ECu; f_800D508C(c); // 800D45E8
  cmps(c,0,(int32_t)c->r[3],0); // 800D45EC
  c->r[31]=c->r[3]|c->r[3]; // 800D45F0
  if (!crb(c,2)) { goto L_800D4618; } // 800D45F4
  c->r[3]=c->r[27]|c->r[27]; // 800D45F8
  c->lr=0x800D4600u; f_800D4234(c); // 800D45FC
  c->r[5]=c->r[3]|c->r[3]; // 800D4600
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D4604
  c->r[4]=c->r[27]|c->r[27]; // 800D4608
  c->r[5]=c->r[5]+0x00000001u; // 800D460C
  c->lr=0x800D4614u; f_800D508C(c); // 800D4610
  c->r[31]=c->r[3]|c->r[3]; // 800D4614
L_800D4618:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D4618
  if (!crb(c,2)) { goto L_800D4664; } // 800D461C
  c->r[0]=0u+0x00000000u; // 800D4620
  W32(c->r[29]+0x00000000u,c->r[0]); // 800D4624
  c->r[4]=c->r[1]+0x00000010u; // 800D4628
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D462C
  c->lr=0x800D4634u; f_800D4444(c); // 800D4630
  cmps(c,0,(int32_t)c->r[3],0); // 800D4634
  c->r[31]=c->r[3]|c->r[3]; // 800D4638
  if (!crb(c,2)) { goto L_800D464C; } // 800D463C
  c->r[3]=R32(c->r[1]+0x00000010u); // 800D4640
  c->lr=0x800D4648u; f_800D4CF0(c); // 800D4644
  c->r[30]=c->r[3]|c->r[3]; // 800D4648
L_800D464C:;
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800D464C
  W32(c->r[29]+0x00000000u,c->r[0]); // 800D4650
  c->r[0]=R32(c->r[30]+0x00000014u); // 800D4654
  W32(c->r[28]+0x00000000u,c->r[0]); // 800D4658
  c->r[3]=R32(c->r[1]+0x00000010u); // 800D465C
  c->lr=0x800D4664u; f_800D4D14(c); // 800D4660
L_800D4664:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800D4664
  c->lr=0x800D466Cu; f_800D4D14(c); // 800D4668
  c->r[3]=c->r[31]|c->r[31]; // 800D466C
  {uint32_t ea=c->r[1]+0x0000005Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D4670
  c->r[0]=R32(c->r[1]+0x00000074u); // 800D4674
  c->lr=c->r[0]; // 800D4678
  c->r[1]=c->r[1]+0x00000070u; // 800D467C
  return; // 800D4680
}

// HandleCloseFileSupportRequest
void f_800D4684(Ctx* __restrict c) {
  trace_call(0x800D4684u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4684
  c->r[0]=c->lr; // 800D4688
  c->r[5]=0u+0x00000040u; // 800D468C
  W32(c->r[1]+0x00000074u,c->r[0]); // 800D4690
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800D4694
  W32(c->r[1]+0x00000068u,c->r[30]); // 800D4698
  c->r[30]=c->r[3]|c->r[3]; // 800D469C
  c->r[3]=c->r[1]+0x00000018u; // 800D46A0
  W32(c->r[1]+0x00000064u,c->r[29]); // 800D46A4
  c->r[29]=c->r[4]|c->r[4]; // 800D46A8
  c->r[4]=0u+0x00000000u; // 800D46AC
  c->lr=0x800D46B4u; f_800D3468(c); // 800D46B0
  c->r[3]=0u+0x000000D3u; // 800D46B4
  c->r[0]=0u+0x00000040u; // 800D46B8
  W8(c->r[1]+0x0000001Cu,c->r[3]); // 800D46BC
  c->r[3]=c->r[1]+0x0000000Cu; // 800D46C0
  c->r[4]=c->r[1]+0x00000008u; // 800D46C4
  W32(c->r[1]+0x00000018u,c->r[0]); // 800D46C8
  W32(c->r[1]+0x00000020u,c->r[30]); // 800D46CC
  c->lr=0x800D46D4u; f_800D4C54(c); // 800D46D0
  cmps(c,0,(int32_t)c->r[3],0); // 800D46D4
  c->r[31]=c->r[3]|c->r[3]; // 800D46D8
  if (!crb(c,2)) { goto L_800D46F4; } // 800D46DC
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D46E0
  c->r[4]=c->r[1]+0x00000018u; // 800D46E4
  c->r[5]=0u+0x00000040u; // 800D46E8
  c->lr=0x800D46F0u; f_800D508C(c); // 800D46EC
  c->r[31]=c->r[3]|c->r[3]; // 800D46F0
L_800D46F4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D46F4
  if (!crb(c,2)) { goto L_800D4740; } // 800D46F8
  c->r[0]=0u+0x00000000u; // 800D46FC
  W32(c->r[29]+0x00000000u,c->r[0]); // 800D4700
  c->r[4]=c->r[1]+0x00000010u; // 800D4704
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D4708
  c->lr=0x800D4710u; f_800D4444(c); // 800D470C
  cmps(c,0,(int32_t)c->r[3],0); // 800D4710
  c->r[31]=c->r[3]|c->r[3]; // 800D4714
  if (!crb(c,2)) { goto L_800D4728; } // 800D4718
  c->r[3]=R32(c->r[1]+0x00000010u); // 800D471C
  c->lr=0x800D4724u; f_800D4CF0(c); // 800D4720
  c->r[30]=c->r[3]|c->r[3]; // 800D4724
L_800D4728:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D4728
  if (!crb(c,2)) { goto L_800D4738; } // 800D472C
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 800D4730
  W32(c->r[29]+0x00000000u,c->r[0]); // 800D4734
L_800D4738:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 800D4738
  c->lr=0x800D4740u; f_800D4D14(c); // 800D473C
L_800D4740:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800D4740
  c->lr=0x800D4748u; f_800D4D14(c); // 800D4744
  c->r[3]=c->r[31]|c->r[31]; // 800D4748
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800D474C
  c->r[30]=R32(c->r[1]+0x00000068u); // 800D4750
  c->r[29]=R32(c->r[1]+0x00000064u); // 800D4754
  c->r[0]=R32(c->r[1]+0x00000074u); // 800D4758
  c->lr=c->r[0]; // 800D475C
  c->r[1]=c->r[1]+0x00000070u; // 800D4760
  return; // 800D4764
}

// HandlePositionFileSupportRequest
void f_800D4768(Ctx* __restrict c) {
  trace_call(0x800D4768u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4768
  c->r[0]=c->lr; // 800D476C
  W32(c->r[1]+0x00000074u,c->r[0]); // 800D4770
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 800D4774
  c->r[31]=c->r[5]|c->r[5]; // 800D4778
  c->r[5]=0u+0x00000040u; // 800D477C
  W32(c->r[1]+0x00000068u,c->r[30]); // 800D4780
  c->r[30]=c->r[6]|c->r[6]; // 800D4784
  W32(c->r[1]+0x00000064u,c->r[29]); // 800D4788
  c->r[29]=c->r[4]|c->r[4]; // 800D478C
  c->r[4]=0u+0x00000000u; // 800D4790
  W32(c->r[1]+0x00000060u,c->r[28]); // 800D4794
  c->r[28]=c->r[3]|c->r[3]; // 800D4798
  c->r[3]=c->r[1]+0x00000018u; // 800D479C
  c->lr=0x800D47A4u; f_800D3468(c); // 800D47A0
  c->r[3]=0u+0x000000D4u; // 800D47A4
  c->r[0]=0u+0x00000040u; // 800D47A8
  W8(c->r[1]+0x0000001Cu,c->r[3]); // 800D47AC
  c->r[3]=c->r[1]+0x0000000Cu; // 800D47B0
  c->r[4]=c->r[1]+0x00000008u; // 800D47B4
  W32(c->r[1]+0x00000018u,c->r[0]); // 800D47B8
  W32(c->r[1]+0x00000020u,c->r[28]); // 800D47BC
  c->r[0]=R32(c->r[29]+0x00000000u); // 800D47C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D47C4
  W8(c->r[1]+0x00000028u,c->r[31]); // 800D47C8
  c->lr=0x800D47D0u; f_800D4C54(c); // 800D47CC
  cmps(c,0,(int32_t)c->r[3],0); // 800D47D0
  c->r[31]=c->r[3]|c->r[3]; // 800D47D4
  if (!crb(c,2)) { goto L_800D47F0; } // 800D47D8
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D47DC
  c->r[4]=c->r[1]+0x00000018u; // 800D47E0
  c->r[5]=0u+0x00000040u; // 800D47E4
  c->lr=0x800D47ECu; f_800D508C(c); // 800D47E8
  c->r[31]=c->r[3]|c->r[3]; // 800D47EC
L_800D47F0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D47F0
  if (!crb(c,2)) { goto L_800D4848; } // 800D47F4
  c->r[0]=0u+0x00000000u; // 800D47F8
  W32(c->r[30]+0x00000000u,c->r[0]); // 800D47FC
  c->r[0]=0u+0xFFFFFFFFu; // 800D4800
  c->r[4]=c->r[1]+0x00000010u; // 800D4804
  W32(c->r[29]+0x00000000u,c->r[0]); // 800D4808
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D480C
  c->lr=0x800D4814u; f_800D4444(c); // 800D4810
  cmps(c,0,(int32_t)c->r[3],0); // 800D4814
  c->r[31]=c->r[3]|c->r[3]; // 800D4818
  if (!crb(c,2)) { goto L_800D4840; } // 800D481C
  c->r[3]=R32(c->r[1]+0x00000010u); // 800D4820
  c->lr=0x800D4828u; f_800D4CF0(c); // 800D4824
  cmps(c,0,(int32_t)c->r[3],0); // 800D4828
  if (crb(c,2)) { goto L_800D4840; } // 800D482C
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800D4830
  W32(c->r[30]+0x00000000u,c->r[0]); // 800D4834
  c->r[0]=R32(c->r[3]+0x00000024u); // 800D4838
  W32(c->r[29]+0x00000000u,c->r[0]); // 800D483C
L_800D4840:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 800D4840
  c->lr=0x800D4848u; f_800D4D14(c); // 800D4844
L_800D4848:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800D4848
  c->lr=0x800D4850u; f_800D4D14(c); // 800D484C
  c->r[3]=c->r[31]|c->r[31]; // 800D4850
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 800D4854
  c->r[30]=R32(c->r[1]+0x00000068u); // 800D4858
  c->r[29]=R32(c->r[1]+0x00000064u); // 800D485C
  c->r[28]=R32(c->r[1]+0x00000060u); // 800D4860
  c->r[0]=R32(c->r[1]+0x00000074u); // 800D4864
  c->lr=c->r[0]; // 800D4868
  c->r[1]=c->r[1]+0x00000070u; // 800D486C
  return; // 800D4870
}

// TRKTargetContinue
void f_800D4874(Ctx* __restrict c) {
  trace_call(0x800D4874u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4874
  c->r[0]=c->lr; // 800D4878
  c->r[3]=0u+0x00000000u; // 800D487C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4880
  c->lr=0x800D4888u; f_800D78A8(c); // 800D4884
  c->lr=0x800D488Cu; f_800D3CF0(c); // 800D4888
  c->lr=0x800D4890u; f_800D7064(c); // 800D488C
  c->lr=0x800D4894u; f_800D3CDC(c); // 800D4890
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4894
  c->r[3]=0u+0x00000000u; // 800D4898
  c->lr=c->r[0]; // 800D489C
  c->r[1]=c->r[1]+0x00000010u; // 800D48A0
  return; // 800D48A4
}

// TRKSaveExtended1Block
void f_800D48A8(Ctx* __restrict c) {
  trace_call(0x800D48A8u);
  c->r[2]=0u+0x803D0000u; // 800D48A8
  c->r[2]=c->r[2]|0x000067C0u; // 800D48AC
  /* mfsr */ // 800D48B0
  /* mfsr */ // 800D48B4
  /* mfsr */ // 800D48B8
  /* mfsr */ // 800D48BC
  /* mfsr */ // 800D48C0
  /* mfsr */ // 800D48C4
  /* mfsr */ // 800D48C8
  /* mfsr */ // 800D48CC
  /* mfsr */ // 800D48D0
  /* mfsr */ // 800D48D4
  /* mfsr */ // 800D48D8
  /* mfsr */ // 800D48DC
  /* mfsr */ // 800D48E0
  /* mfsr */ // 800D48E4
  /* mfsr */ // 800D48E8
  /* mfsr */ // 800D48EC
  {uint32_t ea=c->r[2]+0x000001A8u; for(int i=16;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D48F0
  c->r[27]=mftb(c,268); // 800D48F4
  c->r[28]=mftb(c,269); // 800D48F8
  c->r[29]=mfspr(c,1008); // 800D48FC
  c->r[30]=mfspr(c,1009); // 800D4900
  c->r[31]=mfspr(c,27); // 800D4904
  {uint32_t ea=c->r[2]+0x000001E8u; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D4908
  c->r[15]=mfspr(c,287); // 800D490C
  c->r[16]=mfspr(c,528); // 800D4910
  c->r[17]=mfspr(c,529); // 800D4914
  c->r[18]=mfspr(c,530); // 800D4918
  c->r[19]=mfspr(c,531); // 800D491C
  c->r[20]=mfspr(c,532); // 800D4920
  c->r[21]=mfspr(c,533); // 800D4924
  c->r[22]=mfspr(c,534); // 800D4928
  c->r[23]=mfspr(c,535); // 800D492C
  c->r[24]=mfspr(c,536); // 800D4930
  c->r[25]=mfspr(c,537); // 800D4934
  c->r[26]=mfspr(c,538); // 800D4938
  c->r[27]=mfspr(c,539); // 800D493C
  c->r[28]=mfspr(c,540); // 800D4940
  c->r[29]=mfspr(c,541); // 800D4944
  c->r[30]=mfspr(c,542); // 800D4948
  c->r[31]=mfspr(c,543); // 800D494C
  {uint32_t ea=c->r[2]+0x000001FCu; for(int i=15;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D4950
  c->r[24]=mfspr(c,560); // 800D4954
  c->r[25]=mfspr(c,561); // 800D4958
  c->r[26]=mfspr(c,562); // 800D495C
  c->r[27]=mfspr(c,563); // 800D4960
  c->r[28]=mfspr(c,564); // 800D4964
  c->r[29]=mfspr(c,565); // 800D4968
  c->r[30]=mfspr(c,566); // 800D496C
  c->r[31]=mfspr(c,567); // 800D4970
  {uint32_t ea=c->r[2]+0x00000240u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D4974
  c->r[22]=mfspr(c,25); // 800D4978
  c->r[23]=mfspr(c,19); // 800D497C
  c->r[24]=mfspr(c,18); // 800D4980
  c->r[25]=mfspr(c,272); // 800D4984
  c->r[26]=mfspr(c,273); // 800D4988
  c->r[27]=mfspr(c,274); // 800D498C
  c->r[28]=mfspr(c,275); // 800D4990
  c->r[29]=mfspr(c,22); // 800D4994
  c->r[30]=mfspr(c,1010); // 800D4998
  c->r[31]=mfspr(c,282); // 800D499C
  {uint32_t ea=c->r[2]+0x0000025Cu; for(int i=22;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D49A0
  c->r[24]=mfspr(c,1013); // 800D49A4
  c->r[25]=mfspr(c,953); // 800D49A8
  c->r[26]=mfspr(c,954); // 800D49AC
  c->r[27]=mfspr(c,957); // 800D49B0
  c->r[28]=mfspr(c,958); // 800D49B4
  c->r[29]=mfspr(c,955); // 800D49B8
  c->r[30]=mfspr(c,952); // 800D49BC
  c->r[31]=mfspr(c,956); // 800D49C0
  {uint32_t ea=c->r[2]+0x00000284u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D49C4
  c->r[29]=mfspr(c,567); // 800D49C8
  c->r[30]=mfspr(c,568); // 800D49CC
  c->r[31]=mfspr(c,569); // 800D49D0
  {uint32_t ea=c->r[2]+0x000002A4u; for(int i=29;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D49D4
  c->r[30]=mfspr(c,1019); // 800D49D8
  c->r[31]=mfspr(c,1017); // 800D49DC
  {uint32_t ea=c->r[2]+0x000002B0u; for(int i=30;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D49E0
  c->r[16]=mfspr(c,26); // 800D49E4
  W32(c->r[2]+0x000002B8u,c->r[16]); // 800D49E8
  c->r[17]=mfspr(c,570); // 800D49EC
  W32(c->r[2]+0x000002BCu,c->r[17]); // 800D49F0
  c->r[25]=mfspr(c,936); // 800D49F4
  c->r[26]=mfspr(c,937); // 800D49F8
  c->r[27]=mfspr(c,938); // 800D49FC
  c->r[28]=mfspr(c,939); // 800D4A00
  c->r[29]=mfspr(c,940); // 800D4A04
  c->r[30]=mfspr(c,941); // 800D4A08
  c->r[31]=mfspr(c,942); // 800D4A0C
  {uint32_t ea=c->r[2]+0x000002C0u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D4A10
  c->r[25]=mfspr(c,571); // 800D4A14
  c->r[26]=mfspr(c,572); // 800D4A18
  c->r[27]=mfspr(c,573); // 800D4A1C
  c->r[28]=mfspr(c,574); // 800D4A20
  c->r[29]=mfspr(c,575); // 800D4A24
  c->r[30]=mfspr(c,920); // 800D4A28
  c->r[31]=mfspr(c,1011); // 800D4A2C
  {uint32_t ea=c->r[2]+0x000002DCu; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D4A30
  c->r[20]=mfspr(c,912); // 800D4A34
  c->r[21]=mfspr(c,913); // 800D4A38
  c->r[22]=mfspr(c,914); // 800D4A3C
  c->r[23]=mfspr(c,915); // 800D4A40
  c->r[24]=mfspr(c,916); // 800D4A44
  c->r[25]=mfspr(c,917); // 800D4A48
  c->r[26]=mfspr(c,918); // 800D4A4C
  c->r[27]=mfspr(c,919); // 800D4A50
  c->r[28]=mfspr(c,920); // 800D4A54
  c->r[29]=mfspr(c,921); // 800D4A58
  c->r[30]=mfspr(c,922); // 800D4A5C
  c->r[31]=mfspr(c,923); // 800D4A60
  {uint32_t ea=c->r[2]+0x000002FCu; for(int i=20;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D4A64
  return; // 800D4A68
}

// TRKRestoreExtended1Block
void f_800D4A6C(Ctx* __restrict c) {
  trace_call(0x800D4A6Cu);
  c->r[2]=0u+0x803D0000u; // 800D4A6C
  c->r[2]=c->r[2]|0x000067C0u; // 800D4A70
  c->r[5]=0u+0x803D0000u; // 800D4A74
  c->r[5]=c->r[5]|0x00006648u; // 800D4A78
  c->r[3]=R8(c->r[5]+0x00000000u); // 800D4A7C
  c->r[6]=R8(c->r[5]+0x00000001u); // 800D4A80
  c->r[0]=0u+0x00000000u; // 800D4A84
  W8(c->r[5]+0x00000000u,c->r[0]); // 800D4A88
  W8(c->r[5]+0x00000001u,c->r[0]); // 800D4A8C
  cmps(c,0,(int32_t)c->r[3],0); // 800D4A90
  if (crb(c,2)) { goto L_800D4AA8; } // 800D4A94
  c->r[24]=R32(c->r[2]+0x000001E8u); // 800D4A98
  c->r[25]=R32(c->r[2]+0x000001ECu); // 800D4A9C
  mtspr(c,284,c->r[24]); // 800D4AA0
  mtspr(c,285,c->r[25]); // 800D4AA4
L_800D4AA8:;
  {uint32_t ea=c->r[2]+0x000002FCu; for(int i=20;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D4AA8
  mtspr(c,912,c->r[20]); // 800D4AAC
  mtspr(c,913,c->r[21]); // 800D4AB0
  mtspr(c,914,c->r[22]); // 800D4AB4
  mtspr(c,915,c->r[23]); // 800D4AB8
  mtspr(c,916,c->r[24]); // 800D4ABC
  mtspr(c,917,c->r[25]); // 800D4AC0
  mtspr(c,918,c->r[26]); // 800D4AC4
  mtspr(c,919,c->r[27]); // 800D4AC8
  mtspr(c,920,c->r[28]); // 800D4ACC
  mtspr(c,922,c->r[30]); // 800D4AD0
  mtspr(c,923,c->r[31]); // 800D4AD4
  goto L_800D4ADC; // 800D4AD8
L_800D4ADC:;
  {uint32_t ea=c->r[2]+0x00000284u; for(int i=19;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D4ADC
  mtspr(c,1013,c->r[19]); // 800D4AE0
  mtspr(c,953,c->r[20]); // 800D4AE4
  mtspr(c,954,c->r[21]); // 800D4AE8
  mtspr(c,957,c->r[22]); // 800D4AEC
  mtspr(c,958,c->r[23]); // 800D4AF0
  mtspr(c,955,c->r[24]); // 800D4AF4
  mtspr(c,952,c->r[25]); // 800D4AF8
  mtspr(c,956,c->r[26]); // 800D4AFC
  mtspr(c,1019,c->r[30]); // 800D4B00
  mtspr(c,1017,c->r[31]); // 800D4B04
  goto L_800D4B0C; // 800D4B08
L_800D4B0C:;
  {uint32_t ea=c->r[2]+0x000001A8u; for(int i=16;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D4B0C
  /* mtsr */ // 800D4B10
  /* mtsr */ // 800D4B14
  /* mtsr */ // 800D4B18
  /* mtsr */ // 800D4B1C
  /* mtsr */ // 800D4B20
  /* mtsr */ // 800D4B24
  /* mtsr */ // 800D4B28
  /* mtsr */ // 800D4B2C
  /* mtsr */ // 800D4B30
  /* mtsr */ // 800D4B34
  /* mtsr */ // 800D4B38
  /* mtsr */ // 800D4B3C
  /* mtsr */ // 800D4B40
  /* mtsr */ // 800D4B44
  /* mtsr */ // 800D4B48
  /* mtsr */ // 800D4B4C
  {uint32_t ea=c->r[2]+0x000001F0u; for(int i=12;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D4B50
  mtspr(c,1008,c->r[12]); // 800D4B54
  mtspr(c,1009,c->r[13]); // 800D4B58
  mtspr(c,27,c->r[14]); // 800D4B5C
  mtspr(c,287,c->r[15]); // 800D4B60
  mtspr(c,528,c->r[16]); // 800D4B64
  mtspr(c,529,c->r[17]); // 800D4B68
  mtspr(c,530,c->r[18]); // 800D4B6C
  mtspr(c,531,c->r[19]); // 800D4B70
  mtspr(c,532,c->r[20]); // 800D4B74
  mtspr(c,533,c->r[21]); // 800D4B78
  mtspr(c,534,c->r[22]); // 800D4B7C
  mtspr(c,535,c->r[23]); // 800D4B80
  mtspr(c,536,c->r[24]); // 800D4B84
  mtspr(c,537,c->r[25]); // 800D4B88
  mtspr(c,538,c->r[26]); // 800D4B8C
  mtspr(c,539,c->r[27]); // 800D4B90
  mtspr(c,540,c->r[28]); // 800D4B94
  mtspr(c,541,c->r[29]); // 800D4B98
  mtspr(c,542,c->r[30]); // 800D4B9C
  mtspr(c,543,c->r[31]); // 800D4BA0
  {uint32_t ea=c->r[2]+0x0000025Cu; for(int i=22;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D4BA4
  mtspr(c,25,c->r[22]); // 800D4BA8
  mtspr(c,19,c->r[23]); // 800D4BAC
  mtspr(c,18,c->r[24]); // 800D4BB0
  mtspr(c,272,c->r[25]); // 800D4BB4
  mtspr(c,273,c->r[26]); // 800D4BB8
  mtspr(c,274,c->r[27]); // 800D4BBC
  mtspr(c,275,c->r[28]); // 800D4BC0
  mtspr(c,1010,c->r[30]); // 800D4BC4
  mtspr(c,282,c->r[31]); // 800D4BC8
  return; // 800D4BCC
}

// TRK_MessageSend
void f_800D4BD0(Ctx* __restrict c) {
  trace_call(0x800D4BD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4BD0
  c->r[0]=c->lr; // 800D4BD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D4BD8
  c->r[0]=R16(c->r[13]+0xFFFF9810u); // 800D4BDC
  cmps(c,0,(int32_t)c->r[0],0); // 800D4BE0
  if (!crb(c,2)) { goto L_800D4BEC; } // 800D4BE4
  c->r[0]=0u+0x00000001u; // 800D4BE8
L_800D4BEC:;
  W16(c->r[3]+0x00000012u,c->r[0]); // 800D4BEC
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 800D4BF0
  c->r[0]=c->r[4]+0x00000001u; // 800D4BF4
  W16(c->r[13]+0xFFFF9810u,c->r[0]); // 800D4BF8
  c->r[4]=R32(c->r[3]+0x00000004u); // 800D4BFC
  c->r[3]=c->r[3]+0x0000000Cu; // 800D4C00
  c->lr=0x800D4C08u; f_800D3CA0(c); // 800D4C04
  cmps(c,0,(int32_t)c->r[3],0); // 800D4C08
  c->r[4]=c->r[3]|c->r[3]; // 800D4C0C
  if (crb(c,2)) { goto L_800D4C20; } // 800D4C10
  c->r[3]=0u+0x80390000u; // 800D4C14
  c->r[3]=c->r[3]+0xFFFFCC10u; // 800D4C18
  c->lr=0x800D4C20u; f_80245CC0(c); // 800D4C1C
L_800D4C20:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D4C20
  c->r[3]=0u+0x00000000u; // 800D4C24
  c->lr=c->r[0]; // 800D4C28
  c->r[1]=c->r[1]+0x00000010u; // 800D4C2C
  return; // 800D4C30
}

// TRKInitializeMessageBuffers
void f_800D4C34(Ctx* __restrict c) {
  trace_call(0x800D4C34u);
  c->r[3]=0u+0x803D0000u; // 800D4C34
  c->r[0]=0u+0x00000000u; // 800D4C38
  c->r[4]=c->r[3]+0x00004CA0u; // 800D4C3C
  W32(c->r[3]+0x00004CA0u,c->r[0]); // 800D4C40
  c->r[3]=0u+0x00000000u; // 800D4C44
  W32(c->r[4]+0x0000088Cu,c->r[0]); // 800D4C48
  W32(c->r[4]+0x00001118u,c->r[0]); // 800D4C4C
  return; // 800D4C50
}

// TRK_GetFreeBuffer
void f_800D4C54(Ctx* __restrict c) {
  trace_call(0x800D4C54u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4C54
  c->r[0]=c->lr; // 800D4C58
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D4C5C
  c->r[0]=0u+0x00000000u; // 800D4C60
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D4C64
  c->r[26]=c->r[3]|c->r[3]; // 800D4C68
  c->r[27]=c->r[4]|c->r[4]; // 800D4C6C
  c->r[30]=0u+0x00000300u; // 800D4C70
  c->r[29]=0u+0x00000000u; // 800D4C74
  c->r[31]=0u+0x00000001u; // 800D4C78
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D4C7C
  goto L_800D4CBC; // 800D4C80
L_800D4C84:;
  c->r[3]=c->r[29]|c->r[29]; // 800D4C84
  c->lr=0x800D4C8Cu; f_800D4CF0(c); // 800D4C88
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D4C8C
  c->r[28]=c->r[3]|c->r[3]; // 800D4C90
  cmps(c,0,(int32_t)c->r[0],0); // 800D4C94
  if (!crb(c,2)) { goto L_800D4CB8; } // 800D4C98
  c->r[4]=0u+0x00000001u; // 800D4C9C
  c->lr=0x800D4CA4u; f_800D4D3C(c); // 800D4CA0
  W32(c->r[28]+0x00000000u,c->r[31]); // 800D4CA4
  c->r[30]=0u+0x00000000u; // 800D4CA8
  W32(c->r[27]+0x00000000u,c->r[28]); // 800D4CAC
  W32(c->r[26]+0x00000000u,c->r[29]); // 800D4CB0
  c->r[29]=0u+0x00000003u; // 800D4CB4
L_800D4CB8:;
  c->r[29]=c->r[29]+0x00000001u; // 800D4CB8
L_800D4CBC:;
  cmps(c,0,(int32_t)c->r[29],3); // 800D4CBC
  if (crb(c,0)) { IRQCHK(c); goto L_800D4C84; } // 800D4CC0
  cmps(c,0,(int32_t)c->r[30],768); // 800D4CC4
  if (!crb(c,2)) { goto L_800D4CD8; } // 800D4CC8
  c->r[3]=0u+0x80390000u; // 800D4CCC
  c->r[3]=c->r[3]+0xFFFFCC38u; // 800D4CD0
  c->lr=0x800D4CD8u; f_80245CC0(c); // 800D4CD4
L_800D4CD8:;
  c->r[3]=c->r[30]|c->r[30]; // 800D4CD8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D4CDC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D4CE0
  c->lr=c->r[0]; // 800D4CE4
  c->r[1]=c->r[1]+0x00000020u; // 800D4CE8
  return; // 800D4CEC
}

// TRKGetBuffer
void f_800D4CF0(Ctx* __restrict c) {
  trace_call(0x800D4CF0u);
  cmpu(c,0,c->r[3],0x00000002u); // 800D4CF0
  c->r[0]=0u+0x00000000u; // 800D4CF4
  if (crb(c,1)) { goto L_800D4D0C; } // 800D4CF8
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)2188); // 800D4CFC
  c->r[3]=0u+0x803D0000u; // 800D4D00
  c->r[3]=c->r[3]+0x00004CA0u; // 800D4D04
  c->r[0]=c->r[3]+c->r[0]; // 800D4D08
L_800D4D0C:;
  c->r[3]=c->r[0]|c->r[0]; // 800D4D0C
  return; // 800D4D10
}

// TRK_ReleaseBuffer
void f_800D4D14(Ctx* __restrict c) {
  trace_call(0x800D4D14u);
  cmps(c,0,(int32_t)c->r[3],-1); // 800D4D14
  if (crb(c,2)) return; // 800D4D18
  cmpu(c,0,c->r[3],0x00000002u); // 800D4D1C
  if (crb(c,1)) return; // 800D4D20
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)2188); // 800D4D24
  c->r[3]=0u+0x803D0000u; // 800D4D28
  c->r[4]=0u+0x00000000u; // 800D4D2C
  c->r[3]=c->r[3]+0x00004CA0u; // 800D4D30
  W32(c->r[3]+c->r[0],c->r[4]); // 800D4D34
  return; // 800D4D38
}

// TRKResetBuffer
void f_800D4D3C(Ctx* __restrict c) {
  trace_call(0x800D4D3Cu);
  cmps(c,0,(int32_t)c->r[4],0); // 800D4D3C
  c->r[0]=0u+0x00000000u; // 800D4D40
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D4D44
  W32(c->r[3]+0x00000008u,c->r[0]); // 800D4D48
  if (!crb(c,2)) return; // 800D4D4C
  c->r[4]=0u+0x00000000u; // 800D4D50
  c->r[5]=0u+0x00000880u; // 800D4D54
  c->r[3]=c->r[3]+0x0000000Cu; // 800D4D58
  f_800D3468(c); return; // 800D4D5C
}

// fn_800D4D60
void f_800D4D60(Ctx* __restrict c) {
  trace_call(0x800D4D60u);
  return; // 800D4D60
}

// TRK_SetBufferPosition
void f_800D4D64(Ctx* __restrict c) {
  trace_call(0x800D4D64u);
  cmpu(c,0,c->r[4],0x00000880u); // 800D4D64
  c->r[5]=0u+0x00000000u; // 800D4D68
  if (!crb(c,1)) { goto L_800D4D78; } // 800D4D6C
  c->r[5]=0u+0x00000301u; // 800D4D70
  goto L_800D4D8C; // 800D4D74
L_800D4D78:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D4D78
  W32(c->r[3]+0x00000008u,c->r[4]); // 800D4D7C
  cmpu(c,0,c->r[4],c->r[0]); // 800D4D80
  if (!crb(c,1)) { goto L_800D4D8C; } // 800D4D84
  W32(c->r[3]+0x00000004u,c->r[4]); // 800D4D88
L_800D4D8C:;
  c->r[3]=c->r[5]|c->r[5]; // 800D4D8C
  return; // 800D4D90
}

// TRK_AppendBuffer
void f_800D4D94(Ctx* __restrict c) {
  trace_call(0x800D4D94u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4D94
  c->r[0]=c->lr; // 800D4D98
  cmps(c,0,(int32_t)c->r[5],0); // 800D4D9C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D4DA0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D4DA4
  c->r[31]=0u+0x00000000u; // 800D4DA8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D4DAC
  c->r[30]=c->r[5]|c->r[5]; // 800D4DB0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D4DB4
  c->r[29]=c->r[3]|c->r[3]; // 800D4DB8
  if (!crb(c,2)) { goto L_800D4DC8; } // 800D4DBC
  c->r[3]=0u+0x00000000u; // 800D4DC0
  goto L_800D4E1C; // 800D4DC4
L_800D4DC8:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 800D4DC8
  c->r[6]=addc(c,~c->r[0],0x00000880u,1); // 800D4DCC
  cmpu(c,0,c->r[6],c->r[5]); // 800D4DD0
  if (!crb(c,0)) { goto L_800D4DE0; } // 800D4DD4
  c->r[31]=0u+0x00000301u; // 800D4DD8
  c->r[30]=c->r[6]|c->r[6]; // 800D4DDC
L_800D4DE0:;
  cmpu(c,0,c->r[30],0x00000001u); // 800D4DE0
  if (!crb(c,2)) { goto L_800D4DF8; } // 800D4DE4
  c->r[3]=c->r[3]+c->r[0]; // 800D4DE8
  c->r[0]=R8(c->r[4]+0x00000000u); // 800D4DEC
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 800D4DF0
  goto L_800D4E08; // 800D4DF4
L_800D4DF8:;
  c->r[3]=c->r[3]+c->r[0]; // 800D4DF8
  c->r[5]=c->r[30]|c->r[30]; // 800D4DFC
  c->r[3]=c->r[3]+0x0000000Cu; // 800D4E00
  c->lr=0x800D4E08u; f_800D332C(c); // 800D4E04
L_800D4E08:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 800D4E08
  c->r[3]=c->r[31]|c->r[31]; // 800D4E0C
  c->r[0]=c->r[0]+c->r[30]; // 800D4E10
  W32(c->r[29]+0x00000008u,c->r[0]); // 800D4E14
  W32(c->r[29]+0x00000004u,c->r[0]); // 800D4E18
L_800D4E1C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D4E1C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D4E20
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D4E24
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D4E28
  c->lr=c->r[0]; // 800D4E2C
  c->r[1]=c->r[1]+0x00000020u; // 800D4E30
  return; // 800D4E34
}

// TRK_ReadBuffer
void f_800D4E38(Ctx* __restrict c) {
  trace_call(0x800D4E38u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4E38
  c->r[0]=c->lr; // 800D4E3C
  cmps(c,0,(int32_t)c->r[5],0); // 800D4E40
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D4E44
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D4E48
  c->r[31]=0u+0x00000000u; // 800D4E4C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D4E50
  c->r[30]=c->r[5]|c->r[5]; // 800D4E54
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D4E58
  c->r[29]=c->r[3]|c->r[3]; // 800D4E5C
  if (!crb(c,2)) { goto L_800D4E6C; } // 800D4E60
  c->r[3]=0u+0x00000000u; // 800D4E64
  goto L_800D4EAC; // 800D4E68
L_800D4E6C:;
  c->r[6]=R32(c->r[3]+0x00000008u); // 800D4E6C
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D4E70
  c->r[0]=c->r[0]-c->r[6]; // 800D4E74
  cmpu(c,0,c->r[5],c->r[0]); // 800D4E78
  if (!crb(c,1)) { goto L_800D4E88; } // 800D4E7C
  c->r[31]=0u+0x00000302u; // 800D4E80
  c->r[30]=c->r[0]|c->r[0]; // 800D4E84
L_800D4E88:;
  c->r[6]=c->r[29]+c->r[6]; // 800D4E88
  c->r[3]=c->r[4]|c->r[4]; // 800D4E8C
  c->r[5]=c->r[30]|c->r[30]; // 800D4E90
  c->r[4]=c->r[6]+0x0000000Cu; // 800D4E94
  c->lr=0x800D4E9Cu; f_800D332C(c); // 800D4E98
  c->r[0]=R32(c->r[29]+0x00000008u); // 800D4E9C
  c->r[3]=c->r[31]|c->r[31]; // 800D4EA0
  c->r[0]=c->r[0]+c->r[30]; // 800D4EA4
  W32(c->r[29]+0x00000008u,c->r[0]); // 800D4EA8
L_800D4EAC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D4EAC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D4EB0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D4EB4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D4EB8
  c->lr=c->r[0]; // 800D4EBC
  c->r[1]=c->r[1]+0x00000020u; // 800D4EC0
  return; // 800D4EC4
}

// TRKAppendBuffer1_ui32
void f_800D4EC8(Ctx* __restrict c) {
  trace_call(0x800D4EC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4EC8
  c->r[0]=c->lr; // 800D4ECC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D4ED0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D4ED4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D4ED8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D4EDC
  c->r[29]=c->r[3]|c->r[3]; // 800D4EE0
  c->r[0]=R32(c->r[13]+0xFFFF9800u); // 800D4EE4
  W32(c->r[1]+0x00000008u,c->r[4]); // 800D4EE8
  cmps(c,0,(int32_t)c->r[0],0); // 800D4EEC
  if (crb(c,2)) { goto L_800D4EFC; } // 800D4EF0
  c->r[4]=c->r[1]+0x00000008u; // 800D4EF4
  goto L_800D4F20; // 800D4EF8
L_800D4EFC:;
  c->r[7]=R8(c->r[1]+0x0000000Bu); // 800D4EFC
  c->r[4]=c->r[1]+0x0000000Cu; // 800D4F00
  c->r[6]=R8(c->r[1]+0x0000000Au); // 800D4F04
  c->r[5]=R8(c->r[1]+0x00000009u); // 800D4F08
  c->r[0]=R8(c->r[1]+0x00000008u); // 800D4F0C
  W8(c->r[1]+0x0000000Cu,c->r[7]); // 800D4F10
  W8(c->r[1]+0x0000000Du,c->r[6]); // 800D4F14
  W8(c->r[1]+0x0000000Eu,c->r[5]); // 800D4F18
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 800D4F1C
L_800D4F20:;
  c->r[5]=R32(c->r[3]+0x00000008u); // 800D4F20
  c->r[31]=0u+0x00000004u; // 800D4F24
  c->r[30]=0u+0x00000000u; // 800D4F28
  c->r[0]=addc(c,~c->r[5],0x00000880u,1); // 800D4F2C
  cmpu(c,0,c->r[0],0x00000004u); // 800D4F30
  if (!crb(c,0)) { goto L_800D4F40; } // 800D4F34
  c->r[30]=0u+0x00000301u; // 800D4F38
  c->r[31]=c->r[0]|c->r[0]; // 800D4F3C
L_800D4F40:;
  cmpu(c,0,c->r[31],0x00000001u); // 800D4F40
  if (!crb(c,2)) { goto L_800D4F58; } // 800D4F44
  c->r[3]=c->r[3]+c->r[5]; // 800D4F48
  c->r[0]=R8(c->r[4]+0x00000000u); // 800D4F4C
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 800D4F50
  goto L_800D4F68; // 800D4F54
L_800D4F58:;
  c->r[3]=c->r[3]+c->r[5]; // 800D4F58
  c->r[5]=c->r[31]|c->r[31]; // 800D4F5C
  c->r[3]=c->r[3]+0x0000000Cu; // 800D4F60
  c->lr=0x800D4F68u; f_800D332C(c); // 800D4F64
L_800D4F68:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 800D4F68
  c->r[3]=c->r[30]|c->r[30]; // 800D4F6C
  c->r[0]=c->r[0]+c->r[31]; // 800D4F70
  W32(c->r[29]+0x00000008u,c->r[0]); // 800D4F74
  W32(c->r[29]+0x00000004u,c->r[0]); // 800D4F78
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D4F7C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D4F80
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D4F84
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D4F88
  c->lr=c->r[0]; // 800D4F8C
  c->r[1]=c->r[1]+0x00000020u; // 800D4F90
  return; // 800D4F94
}

// TRKAppendBuffer1_ui64
void f_800D4F98(Ctx* __restrict c) {
  trace_call(0x800D4F98u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D4F98
  c->r[0]=c->lr; // 800D4F9C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D4FA0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800D4FA4
  c->r[31]=c->r[3]|c->r[3]; // 800D4FA8
  W32(c->r[1]+0x00000028u,c->r[30]); // 800D4FAC
  W32(c->r[1]+0x00000024u,c->r[29]); // 800D4FB0
  c->r[0]=R32(c->r[13]+0xFFFF9800u); // 800D4FB4
  W32(c->r[1]+0x00000008u,c->r[5]); // 800D4FB8
  cmps(c,0,(int32_t)c->r[0],0); // 800D4FBC
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 800D4FC0
  if (crb(c,2)) { goto L_800D4FD0; } // 800D4FC4
  c->r[4]=c->r[1]+0x00000008u; // 800D4FC8
  goto L_800D5014; // 800D4FCC
L_800D4FD0:;
  c->r[11]=R8(c->r[1]+0x0000000Fu); // 800D4FD0
  c->r[4]=c->r[1]+0x00000010u; // 800D4FD4
  c->r[10]=R8(c->r[1]+0x0000000Eu); // 800D4FD8
  c->r[9]=R8(c->r[1]+0x0000000Du); // 800D4FDC
  c->r[8]=R8(c->r[1]+0x0000000Cu); // 800D4FE0
  c->r[7]=R8(c->r[1]+0x0000000Bu); // 800D4FE4
  c->r[6]=R8(c->r[1]+0x0000000Au); // 800D4FE8
  c->r[5]=R8(c->r[1]+0x00000009u); // 800D4FEC
  c->r[0]=R8(c->r[1]+0x00000008u); // 800D4FF0
  W8(c->r[1]+0x00000010u,c->r[11]); // 800D4FF4
  W8(c->r[1]+0x00000011u,c->r[10]); // 800D4FF8
  W8(c->r[1]+0x00000012u,c->r[9]); // 800D4FFC
  W8(c->r[1]+0x00000013u,c->r[8]); // 800D5000
  W8(c->r[1]+0x00000014u,c->r[7]); // 800D5004
  W8(c->r[1]+0x00000015u,c->r[6]); // 800D5008
  W8(c->r[1]+0x00000016u,c->r[5]); // 800D500C
  W8(c->r[1]+0x00000017u,c->r[0]); // 800D5010
L_800D5014:;
  c->r[5]=R32(c->r[3]+0x00000008u); // 800D5014
  c->r[30]=0u+0x00000008u; // 800D5018
  c->r[29]=0u+0x00000000u; // 800D501C
  c->r[0]=addc(c,~c->r[5],0x00000880u,1); // 800D5020
  cmpu(c,0,c->r[0],0x00000008u); // 800D5024
  if (!crb(c,0)) { goto L_800D5034; } // 800D5028
  c->r[29]=0u+0x00000301u; // 800D502C
  c->r[30]=c->r[0]|c->r[0]; // 800D5030
L_800D5034:;
  cmpu(c,0,c->r[30],0x00000001u); // 800D5034
  if (!crb(c,2)) { goto L_800D504C; } // 800D5038
  c->r[3]=c->r[3]+c->r[5]; // 800D503C
  c->r[0]=R8(c->r[4]+0x00000000u); // 800D5040
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 800D5044
  goto L_800D505C; // 800D5048
L_800D504C:;
  c->r[3]=c->r[3]+c->r[5]; // 800D504C
  c->r[5]=c->r[30]|c->r[30]; // 800D5050
  c->r[3]=c->r[3]+0x0000000Cu; // 800D5054
  c->lr=0x800D505Cu; f_800D332C(c); // 800D5058
L_800D505C:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 800D505C
  c->r[3]=c->r[29]|c->r[29]; // 800D5060
  c->r[0]=c->r[0]+c->r[30]; // 800D5064
  W32(c->r[31]+0x00000008u,c->r[0]); // 800D5068
  W32(c->r[31]+0x00000004u,c->r[0]); // 800D506C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800D5070
  c->r[30]=R32(c->r[1]+0x00000028u); // 800D5074
  c->r[29]=R32(c->r[1]+0x00000024u); // 800D5078
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D507C
  c->lr=c->r[0]; // 800D5080
  c->r[1]=c->r[1]+0x00000030u; // 800D5084
  return; // 800D5088
}

// TRKAppendBuffer_ui8
void f_800D508C(Ctx* __restrict c) {
  trace_call(0x800D508Cu);
  c->r[9]=0u+0x00000000u; // 800D508C
  c->r[7]=0u+0x00000000u; // 800D5090
  goto L_800D50D8; // 800D5094
L_800D5098:;
  c->r[7]=R32(c->r[3]+0x00000008u); // 800D5098
  c->r[8]=R8(c->r[4]+0x00000000u); // 800D509C
  cmpu(c,0,c->r[7],0x00000880u); // 800D50A0
  if (crb(c,0)) { goto L_800D50B0; } // 800D50A4
  c->r[7]=0u+0x00000301u; // 800D50A8
  goto L_800D50D0; // 800D50AC
L_800D50B0:;
  c->r[6]=c->r[3]+c->r[7]; // 800D50B0
  c->r[0]=c->r[7]+0x00000001u; // 800D50B4
  W8(c->r[6]+0x0000000Cu,c->r[8]); // 800D50B8
  c->r[7]=0u+0x00000000u; // 800D50BC
  c->r[6]=R32(c->r[3]+0x00000004u); // 800D50C0
  W32(c->r[3]+0x00000008u,c->r[0]); // 800D50C4
  c->r[0]=c->r[6]+0x00000001u; // 800D50C8
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D50CC
L_800D50D0:;
  c->r[9]=c->r[9]+0x00000001u; // 800D50D0
  c->r[4]=c->r[4]+0x00000001u; // 800D50D4
L_800D50D8:;
  cmps(c,0,(int32_t)c->r[7],0); // 800D50D8
  if (!crb(c,2)) { goto L_800D50E8; } // 800D50DC
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[5]); // 800D50E0
  if (crb(c,0)) { IRQCHK(c); goto L_800D5098; } // 800D50E4
L_800D50E8:;
  c->r[3]=c->r[7]|c->r[7]; // 800D50E8
  return; // 800D50EC
}

// TRKAppendBuffer_ui32
void f_800D50F0(Ctx* __restrict c) {
  trace_call(0x800D50F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D50F0
  c->r[0]=c->lr; // 800D50F4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D50F8
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D50FC
  c->r[29]=c->r[3]|c->r[3]; // 800D5100
  c->r[27]=c->r[4]|c->r[4]; // 800D5104
  c->r[30]=c->r[5]|c->r[5]; // 800D5108
  c->r[31]=0u+0x00000000u; // 800D510C
  c->r[26]=0u+0x00000000u; // 800D5110
  goto L_800D51B8; // 800D5114
L_800D5118:;
  c->r[0]=R32(c->r[13]+0xFFFF9800u); // 800D5118
  c->r[3]=R32(c->r[27]+0x00000000u); // 800D511C
  cmps(c,0,(int32_t)c->r[0],0); // 800D5120
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800D5124
  if (crb(c,2)) { goto L_800D5134; } // 800D5128
  c->r[4]=c->r[1]+0x0000000Cu; // 800D512C
  goto L_800D5158; // 800D5130
L_800D5134:;
  c->r[6]=R8(c->r[1]+0x0000000Fu); // 800D5134
  c->r[4]=c->r[1]+0x00000008u; // 800D5138
  c->r[5]=R8(c->r[1]+0x0000000Eu); // 800D513C
  c->r[3]=R8(c->r[1]+0x0000000Du); // 800D5140
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800D5144
  W8(c->r[1]+0x00000008u,c->r[6]); // 800D5148
  W8(c->r[1]+0x00000009u,c->r[5]); // 800D514C
  W8(c->r[1]+0x0000000Au,c->r[3]); // 800D5150
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 800D5154
L_800D5158:;
  c->r[3]=R32(c->r[29]+0x00000008u); // 800D5158
  c->r[28]=0u+0x00000004u; // 800D515C
  c->r[26]=0u+0x00000000u; // 800D5160
  c->r[0]=addc(c,~c->r[3],0x00000880u,1); // 800D5164
  cmpu(c,0,c->r[0],0x00000004u); // 800D5168
  if (!crb(c,0)) { goto L_800D5178; } // 800D516C
  c->r[26]=0u+0x00000301u; // 800D5170
  c->r[28]=c->r[0]|c->r[0]; // 800D5174
L_800D5178:;
  cmpu(c,0,c->r[28],0x00000001u); // 800D5178
  if (!crb(c,2)) { goto L_800D5190; } // 800D517C
  c->r[3]=c->r[29]+c->r[3]; // 800D5180
  c->r[0]=R8(c->r[4]+0x00000000u); // 800D5184
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 800D5188
  goto L_800D51A0; // 800D518C
L_800D5190:;
  c->r[3]=c->r[29]+c->r[3]; // 800D5190
  c->r[5]=c->r[28]|c->r[28]; // 800D5194
  c->r[3]=c->r[3]+0x0000000Cu; // 800D5198
  c->lr=0x800D51A0u; f_800D332C(c); // 800D519C
L_800D51A0:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 800D51A0
  c->r[27]=c->r[27]+0x00000004u; // 800D51A4
  c->r[31]=c->r[31]+0x00000001u; // 800D51A8
  c->r[0]=c->r[0]+c->r[28]; // 800D51AC
  W32(c->r[29]+0x00000008u,c->r[0]); // 800D51B0
  W32(c->r[29]+0x00000004u,c->r[0]); // 800D51B4
L_800D51B8:;
  cmps(c,0,(int32_t)c->r[26],0); // 800D51B8
  if (!crb(c,2)) { goto L_800D51C8; } // 800D51BC
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[30]); // 800D51C0
  if (crb(c,0)) { IRQCHK(c); goto L_800D5118; } // 800D51C4
L_800D51C8:;
  c->r[3]=c->r[26]|c->r[26]; // 800D51C8
  {uint32_t ea=c->r[1]+0x00000018u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D51CC
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D51D0
  c->lr=c->r[0]; // 800D51D4
  c->r[1]=c->r[1]+0x00000030u; // 800D51D8
  return; // 800D51DC
}

// TRKReadBuffer1_ui64
void f_800D51E0(Ctx* __restrict c) {
  trace_call(0x800D51E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D51E0
  c->r[0]=c->lr; // 800D51E4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D51E8
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D51EC
  c->r[27]=c->r[3]|c->r[3]; // 800D51F0
  c->r[29]=c->r[4]|c->r[4]; // 800D51F4
  c->r[0]=R32(c->r[13]+0xFFFF9800u); // 800D51F8
  cmps(c,0,(int32_t)c->r[0],0); // 800D51FC
  if (crb(c,2)) { goto L_800D520C; } // 800D5200
  c->r[30]=c->r[29]|c->r[29]; // 800D5204
  goto L_800D5210; // 800D5208
L_800D520C:;
  c->r[30]=c->r[1]+0x00000008u; // 800D520C
L_800D5210:;
  c->r[4]=R32(c->r[3]+0x00000008u); // 800D5210
  c->r[28]=0u+0x00000008u; // 800D5214
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D5218
  c->r[31]=0u+0x00000000u; // 800D521C
  c->r[0]=c->r[0]-c->r[4]; // 800D5220
  cmpu(c,0,c->r[0],0x00000008u); // 800D5224
  if (!crb(c,0)) { goto L_800D5234; } // 800D5228
  c->r[31]=0u+0x00000302u; // 800D522C
  c->r[28]=c->r[0]|c->r[0]; // 800D5230
L_800D5234:;
  c->r[4]=c->r[27]+c->r[4]; // 800D5234
  c->r[3]=c->r[30]|c->r[30]; // 800D5238
  c->r[5]=c->r[28]|c->r[28]; // 800D523C
  c->r[4]=c->r[4]+0x0000000Cu; // 800D5240
  c->lr=0x800D5248u; f_800D332C(c); // 800D5244
  c->r[0]=R32(c->r[27]+0x00000008u); // 800D5248
  c->r[0]=c->r[0]+c->r[28]; // 800D524C
  W32(c->r[27]+0x00000008u,c->r[0]); // 800D5250
  c->r[0]=R32(c->r[13]+0xFFFF9800u); // 800D5254
  cmps(c,0,(int32_t)c->r[0],0); // 800D5258
  if (!crb(c,2)) { goto L_800D52A8; } // 800D525C
  cmps(c,0,(int32_t)c->r[31],0); // 800D5260
  if (!crb(c,2)) { goto L_800D52A8; } // 800D5264
  c->r[0]=R8(c->r[30]+0x00000007u); // 800D5268
  W8(c->r[29]+0x00000000u,c->r[0]); // 800D526C
  c->r[0]=R8(c->r[30]+0x00000006u); // 800D5270
  W8(c->r[29]+0x00000001u,c->r[0]); // 800D5274
  c->r[0]=R8(c->r[30]+0x00000005u); // 800D5278
  W8(c->r[29]+0x00000002u,c->r[0]); // 800D527C
  c->r[0]=R8(c->r[30]+0x00000004u); // 800D5280
  W8(c->r[29]+0x00000003u,c->r[0]); // 800D5284
  c->r[0]=R8(c->r[30]+0x00000003u); // 800D5288
  W8(c->r[29]+0x00000004u,c->r[0]); // 800D528C
  c->r[0]=R8(c->r[30]+0x00000002u); // 800D5290
  W8(c->r[29]+0x00000005u,c->r[0]); // 800D5294
  c->r[0]=R8(c->r[30]+0x00000001u); // 800D5298
  W8(c->r[29]+0x00000006u,c->r[0]); // 800D529C
  c->r[0]=R8(c->r[30]+0x00000000u); // 800D52A0
  W8(c->r[29]+0x00000007u,c->r[0]); // 800D52A4
L_800D52A8:;
  c->r[3]=c->r[31]|c->r[31]; // 800D52A8
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D52AC
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D52B0
  c->lr=c->r[0]; // 800D52B4
  c->r[1]=c->r[1]+0x00000030u; // 800D52B8
  return; // 800D52BC
}

// TRKReadBuffer_ui8
void f_800D52C0(Ctx* __restrict c) {
  trace_call(0x800D52C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D52C0
  c->r[0]=c->lr; // 800D52C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D52C8
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D52CC
  c->r[26]=c->r[3]|c->r[3]; // 800D52D0
  c->r[27]=c->r[4]|c->r[4]; // 800D52D4
  c->r[28]=c->r[5]|c->r[5]; // 800D52D8
  c->r[29]=0u+0x00000000u; // 800D52DC
  c->r[30]=0u+0x00000000u; // 800D52E0
  goto L_800D5330; // 800D52E4
L_800D52E8:;
  c->r[3]=R32(c->r[26]+0x00000008u); // 800D52E8
  c->r[31]=0u+0x00000001u; // 800D52EC
  c->r[0]=R32(c->r[26]+0x00000004u); // 800D52F0
  c->r[30]=0u+0x00000000u; // 800D52F4
  c->r[0]=c->r[0]-c->r[3]; // 800D52F8
  cmpu(c,0,c->r[0],0x00000001u); // 800D52FC
  if (!crb(c,0)) { goto L_800D530C; } // 800D5300
  c->r[30]=0u+0x00000302u; // 800D5304
  c->r[31]=c->r[0]|c->r[0]; // 800D5308
L_800D530C:;
  c->r[4]=c->r[26]+c->r[3]; // 800D530C
  c->r[5]=c->r[31]|c->r[31]; // 800D5310
  c->r[3]=c->r[27]+c->r[29]; // 800D5314
  c->r[4]=c->r[4]+0x0000000Cu; // 800D5318
  c->lr=0x800D5320u; f_800D332C(c); // 800D531C
  c->r[0]=R32(c->r[26]+0x00000008u); // 800D5320
  c->r[29]=c->r[29]+0x00000001u; // 800D5324
  c->r[0]=c->r[0]+c->r[31]; // 800D5328
  W32(c->r[26]+0x00000008u,c->r[0]); // 800D532C
L_800D5330:;
  cmps(c,0,(int32_t)c->r[30],0); // 800D5330
  if (!crb(c,2)) { goto L_800D5340; } // 800D5334
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[28]); // 800D5338
  if (crb(c,0)) { IRQCHK(c); goto L_800D52E8; } // 800D533C
L_800D5340:;
  c->r[3]=c->r[30]|c->r[30]; // 800D5340
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D5344
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D5348
  c->lr=c->r[0]; // 800D534C
  c->r[1]=c->r[1]+0x00000020u; // 800D5350
  return; // 800D5354
}

// TRKReadBuffer_ui32
void f_800D5358(Ctx* __restrict c) {
  trace_call(0x800D5358u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5358
  c->r[0]=c->lr; // 800D535C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D5360
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D5364
  c->r[27]=c->r[3]|c->r[3]; // 800D5368
  c->r[31]=c->r[4]|c->r[4]; // 800D536C
  c->r[28]=c->r[5]|c->r[5]; // 800D5370
  c->r[29]=0u+0x00000000u; // 800D5374
  c->r[30]=0u+0x00000000u; // 800D5378
  goto L_800D5418; // 800D537C
L_800D5380:;
  c->r[0]=R32(c->r[13]+0xFFFF9800u); // 800D5380
  cmps(c,0,(int32_t)c->r[0],0); // 800D5384
  if (crb(c,2)) { goto L_800D5394; } // 800D5388
  c->r[26]=c->r[31]|c->r[31]; // 800D538C
  goto L_800D5398; // 800D5390
L_800D5394:;
  c->r[26]=c->r[1]+0x00000008u; // 800D5394
L_800D5398:;
  c->r[3]=R32(c->r[27]+0x00000008u); // 800D5398
  c->r[25]=0u+0x00000004u; // 800D539C
  c->r[0]=R32(c->r[27]+0x00000004u); // 800D53A0
  c->r[30]=0u+0x00000000u; // 800D53A4
  c->r[0]=c->r[0]-c->r[3]; // 800D53A8
  cmpu(c,0,c->r[0],0x00000004u); // 800D53AC
  if (!crb(c,0)) { goto L_800D53BC; } // 800D53B0
  c->r[30]=0u+0x00000302u; // 800D53B4
  c->r[25]=c->r[0]|c->r[0]; // 800D53B8
L_800D53BC:;
  c->r[4]=c->r[27]+c->r[3]; // 800D53BC
  c->r[3]=c->r[26]|c->r[26]; // 800D53C0
  c->r[5]=c->r[25]|c->r[25]; // 800D53C4
  c->r[4]=c->r[4]+0x0000000Cu; // 800D53C8
  c->lr=0x800D53D0u; f_800D332C(c); // 800D53CC
  c->r[0]=R32(c->r[27]+0x00000008u); // 800D53D0
  c->r[0]=c->r[0]+c->r[25]; // 800D53D4
  W32(c->r[27]+0x00000008u,c->r[0]); // 800D53D8
  c->r[0]=R32(c->r[13]+0xFFFF9800u); // 800D53DC
  cmps(c,0,(int32_t)c->r[0],0); // 800D53E0
  if (!crb(c,2)) { goto L_800D5410; } // 800D53E4
  cmps(c,0,(int32_t)c->r[30],0); // 800D53E8
  if (!crb(c,2)) { goto L_800D5410; } // 800D53EC
  c->r[0]=R8(c->r[26]+0x00000003u); // 800D53F0
  W8(c->r[31]+0x00000000u,c->r[0]); // 800D53F4
  c->r[0]=R8(c->r[26]+0x00000002u); // 800D53F8
  W8(c->r[31]+0x00000001u,c->r[0]); // 800D53FC
  c->r[0]=R8(c->r[26]+0x00000001u); // 800D5400
  W8(c->r[31]+0x00000002u,c->r[0]); // 800D5404
  c->r[0]=R8(c->r[26]+0x00000000u); // 800D5408
  W8(c->r[31]+0x00000003u,c->r[0]); // 800D540C
L_800D5410:;
  c->r[31]=c->r[31]+0x00000004u; // 800D5410
  c->r[29]=c->r[29]+0x00000001u; // 800D5414
L_800D5418:;
  cmps(c,0,(int32_t)c->r[30],0); // 800D5418
  if (!crb(c,2)) { goto L_800D5428; } // 800D541C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[28]); // 800D5420
  if (crb(c,0)) { IRQCHK(c); goto L_800D5380; } // 800D5424
L_800D5428:;
  c->r[3]=c->r[30]|c->r[30]; // 800D5428
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D542C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D5430
  c->lr=c->r[0]; // 800D5434
  c->r[1]=c->r[1]+0x00000030u; // 800D5438
  return; // 800D543C
}

// GetTRKConnected
void f_800D5440(Ctx* __restrict c) {
  trace_call(0x800D5440u);
  c->r[3]=R32(c->r[13]+0xFFFF981Cu); // 800D5440
  return; // 800D5444
}

// TRK_DoConnect
void f_800D5448(Ctx* __restrict c) {
  trace_call(0x800D5448u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5448
  c->r[0]=c->lr; // 800D544C
  c->r[4]=0u+0x00000000u; // 800D5450
  c->r[5]=0u+0x00000040u; // 800D5454
  W32(c->r[1]+0x00000054u,c->r[0]); // 800D5458
  c->r[0]=0u+0x00000001u; // 800D545C
  c->r[3]=c->r[1]+0x00000008u; // 800D5460
  W32(c->r[13]+0xFFFF981Cu,c->r[0]); // 800D5464
  c->lr=0x800D546Cu; f_800D3468(c); // 800D5468
  c->r[3]=R32(c->r[13]+0xFFFF9818u); // 800D546C
  c->r[0]=0u+0x00000080u; // 800D5470
  c->r[4]=0u+0x00000040u; // 800D5474
  c->r[5]=0u+0x00000000u; // 800D5478
  c->r[6]=c->r[3]+0x00000001u; // 800D547C
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800D5480
  c->r[0]=c->r[6]+0x00000001u; // 800D5484
  c->r[3]=c->r[1]+0x00000008u; // 800D5488
  W32(c->r[1]+0x00000008u,c->r[4]); // 800D548C
  c->r[4]=0u+0x00000040u; // 800D5490
  W8(c->r[1]+0x00000010u,c->r[5]); // 800D5494
  W32(c->r[1]+0x00000014u,c->r[6]); // 800D5498
  W32(c->r[13]+0xFFFF9818u,c->r[0]); // 800D549C
  c->lr=0x800D54A4u; f_800D3CA0(c); // 800D54A0
  c->r[0]=R32(c->r[1]+0x00000054u); // 800D54A4
  c->r[3]=0u+0x00000000u; // 800D54A8
  c->lr=c->r[0]; // 800D54AC
  c->r[1]=c->r[1]+0x00000050u; // 800D54B0
  return; // 800D54B4
}

// TRKDoDisconnect
void f_800D54B8(Ctx* __restrict c) {
  trace_call(0x800D54B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D54B8
  c->r[0]=c->lr; // 800D54BC
  c->r[4]=0u+0x00000000u; // 800D54C0
  c->r[5]=0u+0x00000040u; // 800D54C4
  W32(c->r[1]+0x00000064u,c->r[0]); // 800D54C8
  c->r[3]=c->r[1]+0x00000018u; // 800D54CC
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800D54D0
  c->r[31]=0u+0x00000000u; // 800D54D4
  W32(c->r[13]+0xFFFF981Cu,c->r[31]); // 800D54D8
  c->lr=0x800D54E0u; f_800D3468(c); // 800D54DC
  c->r[4]=R32(c->r[13]+0xFFFF9818u); // 800D54E0
  c->r[0]=0u+0x00000080u; // 800D54E4
  c->r[3]=0u+0x00000040u; // 800D54E8
  W32(c->r[1]+0x00000018u,c->r[3]); // 800D54EC
  c->r[5]=c->r[4]+0x00000001u; // 800D54F0
  c->r[4]=0u+0x00000040u; // 800D54F4
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 800D54F8
  c->r[0]=c->r[5]+0x00000001u; // 800D54FC
  c->r[3]=c->r[1]+0x00000018u; // 800D5500
  W8(c->r[1]+0x00000020u,c->r[31]); // 800D5504
  W32(c->r[1]+0x00000024u,c->r[5]); // 800D5508
  W32(c->r[13]+0xFFFF9818u,c->r[0]); // 800D550C
  c->lr=0x800D5514u; f_800D3CA0(c); // 800D5510
  c->r[3]=c->r[1]+0x00000008u; // 800D5514
  c->r[4]=0u+0x00000001u; // 800D5518
  c->lr=0x800D5520u; f_800D3F7C(c); // 800D551C
  c->r[3]=c->r[1]+0x00000008u; // 800D5520
  c->lr=0x800D5528u; f_800D3EB0(c); // 800D5524
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800D5528
  c->r[3]=0u+0x00000000u; // 800D552C
  c->r[0]=R32(c->r[1]+0x00000064u); // 800D5530
  c->lr=c->r[0]; // 800D5534
  c->r[1]=c->r[1]+0x00000060u; // 800D5538
  return; // 800D553C
}

// TRKDoReset
void f_800D5540(Ctx* __restrict c) {
  trace_call(0x800D5540u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5540
  c->r[0]=c->lr; // 800D5544
  c->r[4]=0u+0x00000000u; // 800D5548
  c->r[5]=0u+0x00000040u; // 800D554C
  W32(c->r[1]+0x00000054u,c->r[0]); // 800D5550
  c->r[3]=c->r[1]+0x00000008u; // 800D5554
  c->lr=0x800D555Cu; f_800D3468(c); // 800D5558
  c->r[3]=R32(c->r[13]+0xFFFF9818u); // 800D555C
  c->r[0]=0u+0x00000080u; // 800D5560
  c->r[4]=0u+0x00000040u; // 800D5564
  c->r[5]=0u+0x00000000u; // 800D5568
  c->r[6]=c->r[3]+0x00000001u; // 800D556C
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800D5570
  c->r[0]=c->r[6]+0x00000001u; // 800D5574
  c->r[3]=c->r[1]+0x00000008u; // 800D5578
  W32(c->r[1]+0x00000008u,c->r[4]); // 800D557C
  c->r[4]=0u+0x00000040u; // 800D5580
  W8(c->r[1]+0x00000010u,c->r[5]); // 800D5584
  W32(c->r[1]+0x00000014u,c->r[6]); // 800D5588
  W32(c->r[13]+0xFFFF9818u,c->r[0]); // 800D558C
  c->lr=0x800D5594u; f_800D3CA0(c); // 800D5590
  c->lr=0x800D5598u; f_800D39C4(c); // 800D5594
  c->r[0]=R32(c->r[1]+0x00000054u); // 800D5598
  c->r[3]=0u+0x00000000u; // 800D559C
  c->lr=c->r[0]; // 800D55A0
  c->r[1]=c->r[1]+0x00000050u; // 800D55A4
  return; // 800D55A8
}

// TRKDoOverride
void f_800D55AC(Ctx* __restrict c) {
  trace_call(0x800D55ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D55AC
  c->r[0]=c->lr; // 800D55B0
  c->r[4]=0u+0x00000000u; // 800D55B4
  c->r[5]=0u+0x00000040u; // 800D55B8
  W32(c->r[1]+0x00000054u,c->r[0]); // 800D55BC
  c->r[3]=c->r[1]+0x00000008u; // 800D55C0
  c->lr=0x800D55C8u; f_800D3468(c); // 800D55C4
  c->r[3]=R32(c->r[13]+0xFFFF9818u); // 800D55C8
  c->r[0]=0u+0x00000080u; // 800D55CC
  c->r[4]=0u+0x00000040u; // 800D55D0
  c->r[5]=0u+0x00000000u; // 800D55D4
  c->r[6]=c->r[3]+0x00000001u; // 800D55D8
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800D55DC
  c->r[0]=c->r[6]+0x00000001u; // 800D55E0
  c->r[3]=c->r[1]+0x00000008u; // 800D55E4
  W32(c->r[1]+0x00000008u,c->r[4]); // 800D55E8
  c->r[4]=0u+0x00000040u; // 800D55EC
  W8(c->r[1]+0x00000010u,c->r[5]); // 800D55F0
  W32(c->r[1]+0x00000014u,c->r[6]); // 800D55F4
  W32(c->r[13]+0xFFFF9818u,c->r[0]); // 800D55F8
  c->lr=0x800D5600u; f_800D3CA0(c); // 800D55FC
  c->lr=0x800D5604u; f_800D3848(c); // 800D5600
  c->r[0]=R32(c->r[1]+0x00000054u); // 800D5604
  c->r[3]=0u+0x00000000u; // 800D5608
  c->lr=c->r[0]; // 800D560C
  c->r[1]=c->r[1]+0x00000050u; // 800D5610
  return; // 800D5614
}

// TRKDoReadMemory
void f_800D5618(Ctx* __restrict c) {
  trace_call(0x800D5618u);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 800D5618
  c->r[12]=c->r[1]|c->r[1]; // 800D561C
  c->r[11]=addc(c,~c->r[11],0xFFFFF6C0u,1); // 800D5620
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5624
  c->r[0]=c->lr; // 800D5628
  W32(c->r[12]+0x00000004u,c->r[0]); // 800D562C
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 800D5630
  c->r[31]=0u+0x00000000u; // 800D5634
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 800D5638
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 800D563C
  W32(c->r[12]+0xFFFFFFF0u,c->r[28]); // 800D5640
  c->r[28]=c->r[3]|c->r[3]; // 800D5644
  c->r[30]=R8(c->r[3]+0x00000014u); // 800D5648
  c->r[29]=R32(c->r[3]+0x0000001Cu); // 800D564C
  c->r[0]=rotl(c->r[30],0)&0x00000002u; cr0(c,c->r[0]); // 800D5650
  c->r[3]=R16(c->r[3]+0x00000018u); // 800D5654
  if (crb(c,2)) { goto L_800D56AC; } // 800D5658
  c->r[3]=c->r[1]+0x00000068u; // 800D565C
  c->r[4]=0u+0x00000000u; // 800D5660
  c->r[5]=0u+0x00000040u; // 800D5664
  c->lr=0x800D566Cu; f_800D3468(c); // 800D5668
  c->r[3]=R32(c->r[13]+0xFFFF9818u); // 800D566C
  c->r[0]=0u+0x00000080u; // 800D5670
  c->r[4]=0u+0x00000040u; // 800D5674
  c->r[5]=0u+0x00000012u; // 800D5678
  c->r[6]=c->r[3]+0x00000001u; // 800D567C
  W8(c->r[1]+0x0000006Cu,c->r[0]); // 800D5680
  c->r[0]=c->r[6]+0x00000001u; // 800D5684
  c->r[3]=c->r[1]+0x00000068u; // 800D5688
  W32(c->r[1]+0x00000068u,c->r[4]); // 800D568C
  c->r[4]=0u+0x00000040u; // 800D5690
  W8(c->r[1]+0x00000070u,c->r[5]); // 800D5694
  W32(c->r[1]+0x00000074u,c->r[6]); // 800D5698
  W32(c->r[13]+0xFFFF9818u,c->r[0]); // 800D569C
  c->lr=0x800D56A4u; f_800D3CA0(c); // 800D56A0
  c->r[3]=0u+0x00000000u; // 800D56A4
  goto L_800D5828; // 800D56A8
L_800D56AC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D56AC
  if (!crb(c,2)) { goto L_800D577C; } // 800D56B0
  c->r[0]=rotl(c->r[30],0)&0x00000008u; cr0(c,c->r[0]); // 800D56B4
  W32(c->r[1]+0x00000020u,c->r[3]); // 800D56B8
  if (crb(c,2)) { goto L_800D56C8; } // 800D56BC
  c->r[6]=0u+0x00000000u; // 800D56C0
  goto L_800D56CC; // 800D56C4
L_800D56C8:;
  c->r[6]=0u+0x00000001u; // 800D56C8
L_800D56CC:;
  c->r[4]=c->r[29]|c->r[29]; // 800D56CC
  c->r[3]=c->r[1]+0x00000100u; // 800D56D0
  c->r[5]=c->r[1]+0x00000020u; // 800D56D4
  c->r[7]=0u+0x00000001u; // 800D56D8
  c->lr=0x800D56E0u; f_800D6724(c); // 800D56DC
  c->r[31]=c->r[3]|c->r[3]; // 800D56E0
  c->r[3]=c->r[28]|c->r[28]; // 800D56E4
  c->r[4]=0u+0x00000000u; // 800D56E8
  c->lr=0x800D56F0u; f_800D4D3C(c); // 800D56EC
  cmps(c,0,(int32_t)c->r[31],0); // 800D56F0
  if (!crb(c,2)) { goto L_800D577C; } // 800D56F4
  c->r[3]=c->r[1]+0x000000A8u; // 800D56F8
  c->r[4]=0u+0x00000000u; // 800D56FC
  c->r[5]=0u+0x00000040u; // 800D5700
  c->lr=0x800D5708u; f_800D3468(c); // 800D5704
  c->r[6]=R32(c->r[13]+0xFFFF9818u); // 800D5708
  c->r[7]=0u+0x00000080u; // 800D570C
  c->r[4]=R32(c->r[1]+0x00000020u); // 800D5710
  c->r[3]=c->r[28]|c->r[28]; // 800D5714
  c->r[0]=c->r[6]+0x00000001u; // 800D5718
  W8(c->r[1]+0x000000B0u,c->r[31]); // 800D571C
  c->r[5]=c->r[4]+0x00000040u; // 800D5720
  c->r[4]=c->r[1]+0x000000A8u; // 800D5724
  W32(c->r[1]+0x000000A8u,c->r[5]); // 800D5728
  c->r[5]=0u+0x00000040u; // 800D572C
  W8(c->r[1]+0x000000ACu,c->r[7]); // 800D5730
  W32(c->r[1]+0x000000B4u,c->r[6]); // 800D5734
  W32(c->r[13]+0xFFFF9818u,c->r[0]); // 800D5738
  c->lr=0x800D5740u; f_800D4D94(c); // 800D573C
  c->r[0]=rotl(c->r[30],0)&0x00000040u; cr0(c,c->r[0]); // 800D5740
  if (crb(c,2)) { goto L_800D5768; } // 800D5744
  c->r[0]=rotl(c->r[29],0)&0x0000001Fu; // 800D5748
  c->r[4]=c->r[1]+0x00000100u; // 800D574C
  c->r[5]=R32(c->r[1]+0x00000020u); // 800D5750
  c->r[3]=c->r[28]|c->r[28]; // 800D5754
  c->r[4]=c->r[4]+c->r[0]; // 800D5758
  c->lr=0x800D5760u; f_800D4D94(c); // 800D575C
  c->r[31]=c->r[3]|c->r[3]; // 800D5760
  goto L_800D577C; // 800D5764
L_800D5768:;
  c->r[5]=R32(c->r[1]+0x00000020u); // 800D5768
  c->r[3]=c->r[28]|c->r[28]; // 800D576C
  c->r[4]=c->r[1]+0x00000100u; // 800D5770
  c->lr=0x800D5778u; f_800D4D94(c); // 800D5774
  c->r[31]=c->r[3]|c->r[3]; // 800D5778
L_800D577C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D577C
  if (crb(c,2)) { goto L_800D5820; } // 800D5780
  c->r[0]=c->r[31]+0xFFFFF900u; // 800D5784
  cmpu(c,0,c->r[0],0x00000006u); // 800D5788
  if (crb(c,1)) { goto L_800D57D0; } // 800D578C
  c->r[3]=0u+0x80390000u; // 800D5790
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D5794
  c->r[3]=c->r[3]+0xFFFFCC60u; // 800D5798
  c->r[3]=R32(c->r[3]+c->r[0]); // 800D579C
  c->ctr=c->r[3]; // 800D57A0
  if (true) { switch (c->ctr) { case 0x800D57A8u: goto L_800D57A8; case 0x800D57B0u: goto L_800D57B0; case 0x800D57B8u: goto L_800D57B8; case 0x800D57C0u: goto L_800D57C0; case 0x800D57C8u: goto L_800D57C8; case 0x800D57D0u: goto L_800D57D0; default: break; } dispatch(c,c->ctr); return; } // 800D57A4
L_800D57A8:;
  c->r[31]=0u+0x00000015u; // 800D57A8
  goto L_800D57D4; // 800D57AC
L_800D57B0:;
  c->r[31]=0u+0x00000013u; // 800D57B0
  goto L_800D57D4; // 800D57B4
L_800D57B8:;
  c->r[31]=0u+0x00000021u; // 800D57B8
  goto L_800D57D4; // 800D57BC
L_800D57C0:;
  c->r[31]=0u+0x00000022u; // 800D57C0
  goto L_800D57D4; // 800D57C4
L_800D57C8:;
  c->r[31]=0u+0x00000020u; // 800D57C8
  goto L_800D57D4; // 800D57CC
L_800D57D0:;
  c->r[31]=0u+0x00000003u; // 800D57D0
L_800D57D4:;
  c->r[3]=c->r[1]+0x00000028u; // 800D57D4
  c->r[4]=0u+0x00000000u; // 800D57D8
  c->r[5]=0u+0x00000040u; // 800D57DC
  c->lr=0x800D57E4u; f_800D3468(c); // 800D57E0
  c->r[3]=R32(c->r[13]+0xFFFF9818u); // 800D57E4
  c->r[0]=0u+0x00000080u; // 800D57E8
  c->r[4]=0u+0x00000040u; // 800D57EC
  W32(c->r[1]+0x00000028u,c->r[4]); // 800D57F0
  c->r[5]=c->r[3]+0x00000001u; // 800D57F4
  c->r[3]=c->r[1]+0x00000028u; // 800D57F8
  W8(c->r[1]+0x0000002Cu,c->r[0]); // 800D57FC
  c->r[0]=c->r[5]+0x00000001u; // 800D5800
  c->r[4]=0u+0x00000040u; // 800D5804
  W8(c->r[1]+0x00000030u,c->r[31]); // 800D5808
  W32(c->r[1]+0x00000034u,c->r[5]); // 800D580C
  W32(c->r[13]+0xFFFF9818u,c->r[0]); // 800D5810
  c->lr=0x800D5818u; f_800D3CA0(c); // 800D5814
  c->r[3]=0u+0x00000000u; // 800D5818
  goto L_800D5828; // 800D581C
L_800D5820:;
  c->r[3]=c->r[28]|c->r[28]; // 800D5820
  c->lr=0x800D5828u; f_800D4BD0(c); // 800D5824
L_800D5828:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 800D5828
  c->r[0]=R32(c->r[10]+0x00000004u); // 800D582C
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 800D5830
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 800D5834
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 800D5838
  c->r[28]=R32(c->r[10]+0xFFFFFFF0u); // 800D583C
  c->lr=c->r[0]; // 800D5840
  c->r[1]=c->r[10]|c->r[10]; // 800D5844
  return; // 800D5848
}

// TRKDoWriteMemory
void f_800D584C(Ctx* __restrict c) {
  trace_call(0x800D584Cu);
  c->r[11]=rotl(c->r[1],0)&0x0000001Fu; // 800D584C
  c->r[12]=c->r[1]|c->r[1]; // 800D5850
  c->r[11]=addc(c,~c->r[11],0xFFFFF6C0u,1); // 800D5854
  {uint32_t ea=c->r[1]+c->r[11]; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5858
  c->r[0]=c->lr; // 800D585C
  W32(c->r[12]+0x00000004u,c->r[0]); // 800D5860
  W32(c->r[12]+0xFFFFFFFCu,c->r[31]); // 800D5864
  c->r[31]=0u+0x00000000u; // 800D5868
  W32(c->r[12]+0xFFFFFFF8u,c->r[30]); // 800D586C
  W32(c->r[12]+0xFFFFFFF4u,c->r[29]); // 800D5870
  W32(c->r[12]+0xFFFFFFF0u,c->r[28]); // 800D5874
  c->r[28]=c->r[3]|c->r[3]; // 800D5878
  c->r[30]=R8(c->r[3]+0x00000014u); // 800D587C
  c->r[29]=R32(c->r[3]+0x0000001Cu); // 800D5880
  c->r[0]=rotl(c->r[30],0)&0x00000002u; cr0(c,c->r[0]); // 800D5884
  c->r[0]=R16(c->r[3]+0x00000018u); // 800D5888
  if (crb(c,2)) { goto L_800D58E0; } // 800D588C
  c->r[3]=c->r[1]+0x00000068u; // 800D5890
  c->r[4]=0u+0x00000000u; // 800D5894
  c->r[5]=0u+0x00000040u; // 800D5898
  c->lr=0x800D58A0u; f_800D3468(c); // 800D589C
  c->r[3]=R32(c->r[13]+0xFFFF9818u); // 800D58A0
  c->r[0]=0u+0x00000080u; // 800D58A4
  c->r[4]=0u+0x00000040u; // 800D58A8
  c->r[5]=0u+0x00000012u; // 800D58AC
  c->r[6]=c->r[3]+0x00000001u; // 800D58B0
  W8(c->r[1]+0x0000006Cu,c->r[0]); // 800D58B4
  c->r[0]=c->r[6]+0x00000001u; // 800D58B8
  c->r[3]=c->r[1]+0x00000068u; // 800D58BC
  W32(c->r[1]+0x00000068u,c->r[4]); // 800D58C0
  c->r[4]=0u+0x00000040u; // 800D58C4
  W8(c->r[1]+0x00000070u,c->r[5]); // 800D58C8
  W32(c->r[1]+0x00000074u,c->r[6]); // 800D58CC
  W32(c->r[13]+0xFFFF9818u,c->r[0]); // 800D58D0
  c->lr=0x800D58D8u; f_800D3CA0(c); // 800D58D4
  c->r[3]=0u+0x00000000u; // 800D58D8
  goto L_800D5A38; // 800D58DC
L_800D58E0:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D58E0
  if (!crb(c,2)) { goto L_800D598C; } // 800D58E4
  W32(c->r[1]+0x00000020u,c->r[0]); // 800D58E8
  c->r[4]=0u+0x00000040u; // 800D58EC
  c->lr=0x800D58F4u; f_800D4D64(c); // 800D58F0
  c->r[5]=R32(c->r[1]+0x00000020u); // 800D58F4
  c->r[3]=c->r[28]|c->r[28]; // 800D58F8
  c->r[4]=c->r[1]+0x00000100u; // 800D58FC
  c->lr=0x800D5904u; f_800D4E38(c); // 800D5900
  c->r[0]=rotl(c->r[30],0)&0x00000008u; cr0(c,c->r[0]); // 800D5904
  if (crb(c,2)) { goto L_800D5914; } // 800D5908
  c->r[6]=0u+0x00000000u; // 800D590C
  goto L_800D5918; // 800D5910
L_800D5914:;
  c->r[6]=0u+0x00000001u; // 800D5914
L_800D5918:;
  c->r[4]=c->r[29]|c->r[29]; // 800D5918
  c->r[3]=c->r[1]+0x00000100u; // 800D591C
  c->r[5]=c->r[1]+0x00000020u; // 800D5920
  c->r[7]=0u+0x00000000u; // 800D5924
  c->lr=0x800D592Cu; f_800D6724(c); // 800D5928
  c->r[31]=c->r[3]|c->r[3]; // 800D592C
  c->r[3]=c->r[28]|c->r[28]; // 800D5930
  c->r[4]=0u+0x00000000u; // 800D5934
  c->lr=0x800D593Cu; f_800D4D3C(c); // 800D5938
  cmps(c,0,(int32_t)c->r[31],0); // 800D593C
  if (!crb(c,2)) { goto L_800D598C; } // 800D5940
  c->r[3]=c->r[1]+0x000000A8u; // 800D5944
  c->r[4]=0u+0x00000000u; // 800D5948
  c->r[5]=0u+0x00000040u; // 800D594C
  c->lr=0x800D5954u; f_800D3468(c); // 800D5950
  c->r[6]=R32(c->r[13]+0xFFFF9818u); // 800D5954
  c->r[0]=0u+0x00000040u; // 800D5958
  c->r[4]=0u+0x00000080u; // 800D595C
  W32(c->r[1]+0x000000A8u,c->r[0]); // 800D5960
  c->r[0]=c->r[6]+0x00000001u; // 800D5964
  c->r[3]=c->r[28]|c->r[28]; // 800D5968
  W8(c->r[1]+0x000000ACu,c->r[4]); // 800D596C
  c->r[4]=c->r[1]+0x000000A8u; // 800D5970
  c->r[5]=0u+0x00000040u; // 800D5974
  W8(c->r[1]+0x000000B0u,c->r[31]); // 800D5978
  W32(c->r[1]+0x000000B4u,c->r[6]); // 800D597C
  W32(c->r[13]+0xFFFF9818u,c->r[0]); // 800D5980
  c->lr=0x800D5988u; f_800D4D94(c); // 800D5984
  c->r[31]=c->r[3]|c->r[3]; // 800D5988
L_800D598C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D598C
  if (crb(c,2)) { goto L_800D5A30; } // 800D5990
  c->r[0]=c->r[31]+0xFFFFF900u; // 800D5994
  cmpu(c,0,c->r[0],0x00000006u); // 800D5998
  if (crb(c,1)) { goto L_800D59E0; } // 800D599C
  c->r[3]=0u+0x80390000u; // 800D59A0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800D59A4
  c->r[3]=c->r[3]+0xFFFFCC7Cu; // 800D59A8
  c->r[3]=R32(c->r[3]+c->r[0]); // 800D59AC
  c->ctr=c->r[3]; // 800D59B0
  if (true) { switch (c->ctr) { case 0x800D59B8u: goto L_800D59B8; case 0x800D59C0u: goto L_800D59C0; case 0x800D59C8u: goto L_800D59C8; case 0x800D59D0u: goto L_800D59D0; case 0x800D59D8u: goto L_800D59D8; case 0x800D59E0u: goto L_800D59E0; default: break; } dispatch(c,c->ctr); return; } // 800D59B4
L_800D59B8:;
  c->r[31]=0u+0x00000015u; // 800D59B8
  goto L_800D59E4; // 800D59BC
L_800D59C0:;
  c->r[31]=0u+0x00000013u; // 800D59C0
  goto L_800D59E4; // 800D59C4
L_800D59C8:;
  c->r[31]=0u+0x00000021u; // 800D59C8
  goto L_800D59E4; // 800D59CC
L_800D59D0:;
  c->r[31]=0u+0x00000022u; // 800D59D0
  goto L_800D59E4; // 800D59D4
L_800D59D8:;
  c->r[31]=0u+0x00000020u; // 800D59D8
  goto L_800D59E4; // 800D59DC
L_800D59E0:;
  c->r[31]=0u+0x00000003u; // 800D59E0
L_800D59E4:;
  c->r[3]=c->r[1]+0x00000028u; // 800D59E4
  c->r[4]=0u+0x00000000u; // 800D59E8
  c->r[5]=0u+0x00000040u; // 800D59EC
  c->lr=0x800D59F4u; f_800D3468(c); // 800D59F0
  c->r[3]=R32(c->r[13]+0xFFFF9818u); // 800D59F4
  c->r[0]=0u+0x00000080u; // 800D59F8
  c->r[4]=0u+0x00000040u; // 800D59FC
  W32(c->r[1]+0x00000028u,c->r[4]); // 800D5A00
  c->r[5]=c->r[3]+0x00000001u; // 800D5A04
  c->r[3]=c->r[1]+0x00000028u; // 800D5A08
  W8(c->r[1]+0x0000002Cu,c->r[0]); // 800D5A0C
  c->r[0]=c->r[5]+0x00000001u; // 800D5A10
  c->r[4]=0u+0x00000040u; // 800D5A14
  W8(c->r[1]+0x00000030u,c->r[31]); // 800D5A18
  W32(c->r[1]+0x00000034u,c->r[5]); // 800D5A1C
  W32(c->r[13]+0xFFFF9818u,c->r[0]); // 800D5A20
  c->lr=0x800D5A28u; f_800D3CA0(c); // 800D5A24
  c->r[3]=0u+0x00000000u; // 800D5A28
  goto L_800D5A38; // 800D5A2C
L_800D5A30:;
  c->r[3]=c->r[28]|c->r[28]; // 800D5A30
  c->lr=0x800D5A38u; f_800D4BD0(c); // 800D5A34
L_800D5A38:;
  c->r[10]=R32(c->r[1]+0x00000000u); // 800D5A38
  c->r[0]=R32(c->r[10]+0x00000004u); // 800D5A3C
  c->r[31]=R32(c->r[10]+0xFFFFFFFCu); // 800D5A40
  c->r[30]=R32(c->r[10]+0xFFFFFFF8u); // 800D5A44
  c->r[29]=R32(c->r[10]+0xFFFFFFF4u); // 800D5A48
  c->r[28]=R32(c->r[10]+0xFFFFFFF0u); // 800D5A4C
  c->lr=c->r[0]; // 800D5A50
  c->r[1]=c->r[10]|c->r[10]; // 800D5A54
  return; // 800D5A58
}

// TRKDoReadRegisters
void f_800D5A5C(Ctx* __restrict c) {
  trace_call(0x800D5A5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5A5C
  c->r[0]=c->lr; // 800D5A60
  W32(c->r[1]+0x000000E4u,c->r[0]); // 800D5A64
  W32(c->r[1]+0x000000DCu,c->r[31]); // 800D5A68
  c->r[31]=c->r[3]|c->r[3]; // 800D5A6C
  c->r[4]=R16(c->r[3]+0x00000018u); // 800D5A70
  c->r[0]=R16(c->r[3]+0x0000001Cu); // 800D5A74
  cmpu(c,0,c->r[4],c->r[0]); // 800D5A78
  if (!crb(c,1)) { goto L_800D5AD0; } // 800D5A7C
  c->r[3]=c->r[1]+0x00000050u; // 800D5A80
  c->r[4]=0u+0x00000000u; // 800D5A84
  c->r[5]=0u+0x00000040u; // 800D5A88
  c->lr=0x800D5A90u; f_800D3468(c); // 800D5A8C
  c->r[3]=R32(c->r[13]+0xFFFF9818u); // 800D5A90
  c->r[0]=0u+0x00000080u; // 800D5A94
  c->r[4]=0u+0x00000040u; // 800D5A98
  c->r[5]=0u+0x00000014u; // 800D5A9C
  c->r[6]=c->r[3]+0x00000001u; // 800D5AA0
  W8(c->r[1]+0x00000054u,c->r[0]); // 800D5AA4
  c->r[0]=c->r[6]+0x00000001u; // 800D5AA8
  c->r[3]=c->r[1]+0x00000050u; // 800D5AAC
  W32(c->r[1]+0x00000050u,c->r[4]); // 800D5AB0
  c->r[4]=0u+0x00000040u; // 800D5AB4
  W8(c->r[1]+0x00000058u,c->r[5]); // 800D5AB8
  W32(c->r[1]+0x0000005Cu,c->r[6]); // 800D5ABC
  W32(c->r[13]+0xFFFF9818u,c->r[0]); // 800D5AC0
  c->lr=0x800D5AC8u; f_800D3CA0(c); // 800D5AC4
  c->r[3]=0u+0x00000000u; // 800D5AC8
  goto L_800D5C44; // 800D5ACC
L_800D5AD0:;
  c->r[5]=R32(c->r[13]+0xFFFF9818u); // 800D5AD0
  c->r[0]=0u+0x00000080u; // 800D5AD4
  c->r[6]=0u+0x00000468u; // 800D5AD8
  W8(c->r[1]+0x00000094u,c->r[0]); // 800D5ADC
  c->r[0]=c->r[5]+0x00000001u; // 800D5AE0
  c->r[4]=0u+0x00000000u; // 800D5AE4
  W32(c->r[1]+0x00000090u,c->r[6]); // 800D5AE8
  W32(c->r[1]+0x0000009Cu,c->r[5]); // 800D5AEC
  W32(c->r[13]+0xFFFF9818u,c->r[0]); // 800D5AF0
  c->lr=0x800D5AF8u; f_800D4D3C(c); // 800D5AF4
  c->r[3]=c->r[31]|c->r[31]; // 800D5AF8
  c->r[4]=c->r[1]+0x00000090u; // 800D5AFC
  c->r[5]=0u+0x00000040u; // 800D5B00
  c->lr=0x800D5B08u; f_800D508C(c); // 800D5B04
  c->r[5]=c->r[31]|c->r[31]; // 800D5B08
  c->r[6]=c->r[1]+0x00000008u; // 800D5B0C
  c->r[3]=0u+0x00000000u; // 800D5B10
  c->r[4]=0u+0x00000024u; // 800D5B14
  c->r[7]=0u+0x00000001u; // 800D5B18
  c->lr=0x800D5B20u; f_800D6874(c); // 800D5B1C
  cmps(c,0,(int32_t)c->r[3],0); // 800D5B20
  if (!crb(c,2)) { goto L_800D5B40; } // 800D5B24
  c->r[5]=c->r[31]|c->r[31]; // 800D5B28
  c->r[6]=c->r[1]+0x00000008u; // 800D5B2C
  c->r[3]=0u+0x00000000u; // 800D5B30
  c->r[4]=0u+0x00000021u; // 800D5B34
  c->r[7]=0u+0x00000001u; // 800D5B38
  c->lr=0x800D5B40u; f_800D696C(c); // 800D5B3C
L_800D5B40:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D5B40
  if (!crb(c,2)) { goto L_800D5B60; } // 800D5B44
  c->r[5]=c->r[31]|c->r[31]; // 800D5B48
  c->r[6]=c->r[1]+0x00000008u; // 800D5B4C
  c->r[3]=0u+0x00000000u; // 800D5B50
  c->r[4]=0u+0x00000060u; // 800D5B54
  c->r[7]=0u+0x00000001u; // 800D5B58
  c->lr=0x800D5B60u; f_800D6AA8(c); // 800D5B5C
L_800D5B60:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D5B60
  if (!crb(c,2)) { goto L_800D5B80; } // 800D5B64
  c->r[5]=c->r[31]|c->r[31]; // 800D5B68
  c->r[6]=c->r[1]+0x00000008u; // 800D5B6C
  c->r[3]=0u+0x00000000u; // 800D5B70
  c->r[4]=0u+0x0000001Fu; // 800D5B74
  c->r[7]=0u+0x00000001u; // 800D5B78
  c->lr=0x800D5B80u; f_800D6C0C(c); // 800D5B7C
L_800D5B80:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D5B80
  if (crb(c,2)) { goto L_800D5C3C; } // 800D5B84
  cmps(c,0,(int32_t)c->r[3],1795); // 800D5B88
  if (crb(c,2)) { goto L_800D5BBC; } // 800D5B8C
  cmps(c,0,(int32_t)c->r[3],1793); // 800D5B90
  if (crb(c,2)) { goto L_800D5BC4; } // 800D5B94
  cmps(c,0,(int32_t)c->r[3],1794); // 800D5B98
  if (crb(c,2)) { goto L_800D5BCC; } // 800D5B9C
  cmps(c,0,(int32_t)c->r[3],1796); // 800D5BA0
  if (crb(c,2)) { goto L_800D5BD4; } // 800D5BA4
  cmps(c,0,(int32_t)c->r[3],1797); // 800D5BA8
  if (crb(c,2)) { goto L_800D5BDC; } // 800D5BAC
  cmps(c,0,(int32_t)c->r[3],1798); // 800D5BB0
  if (crb(c,2)) { goto L_800D5BE4; } // 800D5BB4
  goto L_800D5BEC; // 800D5BB8
L_800D5BBC:;
  c->r[31]=0u+0x00000012u; // 800D5BBC
  goto L_800D5BF0; // 800D5BC0
L_800D5BC4:;
  c->r[31]=0u+0x00000014u; // 800D5BC4
  goto L_800D5BF0; // 800D5BC8
L_800D5BCC:;
  c->r[31]=0u+0x00000015u; // 800D5BCC
  goto L_800D5BF0; // 800D5BD0
L_800D5BD4:;
  c->r[31]=0u+0x00000021u; // 800D5BD4
  goto L_800D5BF0; // 800D5BD8
L_800D5BDC:;
  c->r[31]=0u+0x00000022u; // 800D5BDC
  goto L_800D5BF0; // 800D5BE0
L_800D5BE4:;
  c->r[31]=0u+0x00000020u; // 800D5BE4
  goto L_800D5BF0; // 800D5BE8
L_800D5BEC:;
  c->r[31]=0u+0x00000003u; // 800D5BEC
L_800D5BF0:;
  c->r[3]=c->r[1]+0x00000010u; // 800D5BF0
  c->r[4]=0u+0x00000000u; // 800D5BF4
  c->r[5]=0u+0x00000040u; // 800D5BF8
  c->lr=0x800D5C00u; f_800D3468(c); // 800D5BFC
  c->r[3]=R32(c->r[13]+0xFFFF9818u); // 800D5C00
  c->r[0]=0u+0x00000080u; // 800D5C04
  c->r[4]=0u+0x00000040u; // 800D5C08
  W32(c->r[1]+0x00000010u,c->r[4]); // 800D5C0C
  c->r[5]=c->r[3]+0x00000001u; // 800D5C10
  c->r[3]=c->r[1]+0x00000010u; // 800D5C14
  W8(c->r[1]+0x00000014u,c->r[0]); // 800D5C18
  c->r[0]=c->r[5]+0x00000001u; // 800D5C1C
  c->r[4]=0u+0x00000040u; // 800D5C20
  W8(c->r[1]+0x00000018u,c->r[31]); // 800D5C24
  W32(c->r[1]+0x0000001Cu,c->r[5]); // 800D5C28
  W32(c->r[13]+0xFFFF9818u,c->r[0]); // 800D5C2C
  c->lr=0x800D5C34u; f_800D3CA0(c); // 800D5C30
  c->r[3]=0u+0x00000000u; // 800D5C34
  goto L_800D5C44; // 800D5C38
L_800D5C3C:;
  c->r[3]=c->r[31]|c->r[31]; // 800D5C3C
  c->lr=0x800D5C44u; f_800D4BD0(c); // 800D5C40
L_800D5C44:;
  c->r[0]=R32(c->r[1]+0x000000E4u); // 800D5C44
  c->r[31]=R32(c->r[1]+0x000000DCu); // 800D5C48
  c->lr=c->r[0]; // 800D5C4C
  c->r[1]=c->r[1]+0x000000E0u; // 800D5C50
  return; // 800D5C54
}

// TRKDoWriteRegisters
void f_800D5C58(Ctx* __restrict c) {
  trace_call(0x800D5C58u);
  {uint32_t ea=c->r[1]+0xFFFFFF20u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5C58
  c->r[0]=c->lr; // 800D5C5C
  c->r[4]=0u+0x00000000u; // 800D5C60
  W32(c->r[1]+0x000000E4u,c->r[0]); // 800D5C64
  W32(c->r[1]+0x000000DCu,c->r[31]); // 800D5C68
  W32(c->r[1]+0x000000D8u,c->r[30]); // 800D5C6C
  W32(c->r[1]+0x000000D4u,c->r[29]); // 800D5C70
  W32(c->r[1]+0x000000D0u,c->r[28]); // 800D5C74
  c->r[28]=c->r[3]|c->r[3]; // 800D5C78
  c->r[31]=R8(c->r[3]+0x00000014u); // 800D5C7C
  c->r[30]=R16(c->r[3]+0x00000018u); // 800D5C80
  c->r[29]=R16(c->r[3]+0x0000001Cu); // 800D5C84
  c->lr=0x800D5C8Cu; f_800D4D64(c); // 800D5C88
  cmpu(c,0,c->r[30],c->r[29]); // 800D5C8C
  if (!crb(c,1)) { goto L_800D5CE4; } // 800D5C90
  c->r[3]=c->r[1]+0x00000050u; // 800D5C94
  c->r[4]=0u+0x00000000u; // 800D5C98
  c->r[5]=0u+0x00000040u; // 800D5C9C
  c->lr=0x800D5CA4u; f_800D3468(c); // 800D5CA0
  c->r[3]=R32(c->r[13]+0xFFFF9818u); // 800D5CA4
  c->r[0]=0u+0x00000080u; // 800D5CA8
  c->r[4]=0u+0x00000040u; // 800D5CAC
  c->r[5]=0u+0x00000014u; // 800D5CB0
  c->r[6]=c->r[3]+0x00000001u; // 800D5CB4
  W8(c->r[1]+0x00000054u,c->r[0]); // 800D5CB8
  c->r[0]=c->r[6]+0x00000001u; // 800D5CBC
  c->r[3]=c->r[1]+0x00000050u; // 800D5CC0
  W32(c->r[1]+0x00000050u,c->r[4]); // 800D5CC4
  c->r[4]=0u+0x00000040u; // 800D5CC8
  W8(c->r[1]+0x00000058u,c->r[5]); // 800D5CCC
  W32(c->r[1]+0x0000005Cu,c->r[6]); // 800D5CD0
  W32(c->r[13]+0xFFFF9818u,c->r[0]); // 800D5CD4
  c->lr=0x800D5CDCu; f_800D3CA0(c); // 800D5CD8
  c->r[3]=0u+0x00000000u; // 800D5CDC
  goto L_800D5ED8; // 800D5CE0
L_800D5CE4:;
  c->r[3]=c->r[28]|c->r[28]; // 800D5CE4
  c->r[4]=0u+0x00000040u; // 800D5CE8
  c->lr=0x800D5CF0u; f_800D4D64(c); // 800D5CEC
  cmps(c,0,(int32_t)c->r[31],0); // 800D5CF0
  if (crb(c,2)) { goto L_800D5D14; } // 800D5CF4
  cmps(c,0,(int32_t)c->r[31],1); // 800D5CF8
  if (crb(c,2)) { goto L_800D5D34; } // 800D5CFC
  cmps(c,0,(int32_t)c->r[31],2); // 800D5D00
  if (crb(c,2)) { goto L_800D5D54; } // 800D5D04
  cmps(c,0,(int32_t)c->r[31],3); // 800D5D08
  if (crb(c,2)) { goto L_800D5D74; } // 800D5D0C
  goto L_800D5D94; // 800D5D10
L_800D5D14:;
  c->r[3]=c->r[30]|c->r[30]; // 800D5D14
  c->r[4]=c->r[29]|c->r[29]; // 800D5D18
  c->r[5]=c->r[28]|c->r[28]; // 800D5D1C
  c->r[6]=c->r[1]+0x00000008u; // 800D5D20
  c->r[7]=0u+0x00000000u; // 800D5D24
  c->lr=0x800D5D2Cu; f_800D6874(c); // 800D5D28
  c->r[31]=c->r[3]|c->r[3]; // 800D5D2C
  goto L_800D5D98; // 800D5D30
L_800D5D34:;
  c->r[3]=c->r[30]|c->r[30]; // 800D5D34
  c->r[4]=c->r[29]|c->r[29]; // 800D5D38
  c->r[5]=c->r[28]|c->r[28]; // 800D5D3C
  c->r[6]=c->r[1]+0x00000008u; // 800D5D40
  c->r[7]=0u+0x00000000u; // 800D5D44
  c->lr=0x800D5D4Cu; f_800D696C(c); // 800D5D48
  c->r[31]=c->r[3]|c->r[3]; // 800D5D4C
  goto L_800D5D98; // 800D5D50
L_800D5D54:;
  c->r[3]=c->r[30]|c->r[30]; // 800D5D54
  c->r[4]=c->r[29]|c->r[29]; // 800D5D58
  c->r[5]=c->r[28]|c->r[28]; // 800D5D5C
  c->r[6]=c->r[1]+0x00000008u; // 800D5D60
  c->r[7]=0u+0x00000000u; // 800D5D64
  c->lr=0x800D5D6Cu; f_800D6AA8(c); // 800D5D68
  c->r[31]=c->r[3]|c->r[3]; // 800D5D6C
  goto L_800D5D98; // 800D5D70
L_800D5D74:;
  c->r[3]=c->r[30]|c->r[30]; // 800D5D74
  c->r[4]=c->r[29]|c->r[29]; // 800D5D78
  c->r[5]=c->r[28]|c->r[28]; // 800D5D7C
  c->r[6]=c->r[1]+0x00000008u; // 800D5D80
  c->r[7]=0u+0x00000000u; // 800D5D84
  c->lr=0x800D5D8Cu; f_800D6C0C(c); // 800D5D88
  c->r[31]=c->r[3]|c->r[3]; // 800D5D8C
  goto L_800D5D98; // 800D5D90
L_800D5D94:;
  c->r[31]=0u+0x00000703u; // 800D5D94
L_800D5D98:;
  c->r[3]=c->r[28]|c->r[28]; // 800D5D98
  c->r[4]=0u+0x00000000u; // 800D5D9C
  c->lr=0x800D5DA4u; f_800D4D3C(c); // 800D5DA0
  cmps(c,0,(int32_t)c->r[31],0); // 800D5DA4
  if (!crb(c,2)) { goto L_800D5DF4; } // 800D5DA8
  c->r[3]=c->r[1]+0x00000090u; // 800D5DAC
  c->r[4]=0u+0x00000000u; // 800D5DB0
  c->r[5]=0u+0x00000040u; // 800D5DB4
  c->lr=0x800D5DBCu; f_800D3468(c); // 800D5DB8
  c->r[6]=R32(c->r[13]+0xFFFF9818u); // 800D5DBC
  c->r[0]=0u+0x00000040u; // 800D5DC0
  c->r[4]=0u+0x00000080u; // 800D5DC4
  W32(c->r[1]+0x00000090u,c->r[0]); // 800D5DC8
  c->r[0]=c->r[6]+0x00000001u; // 800D5DCC
  c->r[3]=c->r[28]|c->r[28]; // 800D5DD0
  W8(c->r[1]+0x00000094u,c->r[4]); // 800D5DD4
  c->r[4]=c->r[1]+0x00000090u; // 800D5DD8
  c->r[5]=0u+0x00000040u; // 800D5DDC
  W8(c->r[1]+0x00000098u,c->r[31]); // 800D5DE0
  W32(c->r[1]+0x0000009Cu,c->r[6]); // 800D5DE4
  W32(c->r[13]+0xFFFF9818u,c->r[0]); // 800D5DE8
  c->lr=0x800D5DF0u; f_800D4D94(c); // 800D5DEC
  c->r[31]=c->r[3]|c->r[3]; // 800D5DF0
L_800D5DF4:;
  cmps(c,0,(int32_t)c->r[31],1794); // 800D5DF4
  if (crb(c,2)) { goto L_800D5E60; } // 800D5DF8
  if (!crb(c,0)) { goto L_800D5E24; } // 800D5DFC
  cmps(c,0,(int32_t)c->r[31],770); // 800D5E00
  if (crb(c,2)) { goto L_800D5E58; } // 800D5E04
  if (!crb(c,0)) { goto L_800D5E18; } // 800D5E08
  cmps(c,0,(int32_t)c->r[31],0); // 800D5E0C
  if (crb(c,2)) { goto L_800D5ED0; } // 800D5E10
  goto L_800D5E80; // 800D5E14
L_800D5E18:;
  cmps(c,0,(int32_t)c->r[31],1793); // 800D5E18
  if (!crb(c,0)) { goto L_800D5E50; } // 800D5E1C
  goto L_800D5E80; // 800D5E20
L_800D5E24:;
  cmps(c,0,(int32_t)c->r[31],1797); // 800D5E24
  if (crb(c,2)) { goto L_800D5E70; } // 800D5E28
  if (!crb(c,0)) { goto L_800D5E3C; } // 800D5E2C
  cmps(c,0,(int32_t)c->r[31],1796); // 800D5E30
  if (!crb(c,0)) { goto L_800D5E68; } // 800D5E34
  goto L_800D5E48; // 800D5E38
L_800D5E3C:;
  cmps(c,0,(int32_t)c->r[31],1799); // 800D5E3C
  if (!crb(c,0)) { goto L_800D5E80; } // 800D5E40
  goto L_800D5E78; // 800D5E44
L_800D5E48:;
  c->r[31]=0u+0x00000012u; // 800D5E48
  goto L_800D5E84; // 800D5E4C
L_800D5E50:;
  c->r[31]=0u+0x00000014u; // 800D5E50
  goto L_800D5E84; // 800D5E54
L_800D5E58:;
  c->r[31]=0u+0x00000002u; // 800D5E58
  goto L_800D5E84; // 800D5E5C
L_800D5E60:;
  c->r[31]=0u+0x00000015u; // 800D5E60
  goto L_800D5E84; // 800D5E64
L_800D5E68:;
  c->r[31]=0u+0x00000021u; // 800D5E68
  goto L_800D5E84; // 800D5E6C
L_800D5E70:;
  c->r[31]=0u+0x00000022u; // 800D5E70
  goto L_800D5E84; // 800D5E74
L_800D5E78:;
  c->r[31]=0u+0x00000020u; // 800D5E78
  goto L_800D5E84; // 800D5E7C
L_800D5E80:;
  c->r[31]=0u+0x00000003u; // 800D5E80
L_800D5E84:;
  c->r[3]=c->r[1]+0x00000010u; // 800D5E84
  c->r[4]=0u+0x00000000u; // 800D5E88
  c->r[5]=0u+0x00000040u; // 800D5E8C
  c->lr=0x800D5E94u; f_800D3468(c); // 800D5E90
  c->r[3]=R32(c->r[13]+0xFFFF9818u); // 800D5E94
  c->r[0]=0u+0x00000080u; // 800D5E98
  c->r[4]=0u+0x00000040u; // 800D5E9C
  W32(c->r[1]+0x00000010u,c->r[4]); // 800D5EA0
  c->r[5]=c->r[3]+0x00000001u; // 800D5EA4
  c->r[3]=c->r[1]+0x00000010u; // 800D5EA8
  W8(c->r[1]+0x00000014u,c->r[0]); // 800D5EAC
  c->r[0]=c->r[5]+0x00000001u; // 800D5EB0
  c->r[4]=0u+0x00000040u; // 800D5EB4
  W8(c->r[1]+0x00000018u,c->r[31]); // 800D5EB8
  W32(c->r[1]+0x0000001Cu,c->r[5]); // 800D5EBC
  W32(c->r[13]+0xFFFF9818u,c->r[0]); // 800D5EC0
  c->lr=0x800D5EC8u; f_800D3CA0(c); // 800D5EC4
  c->r[3]=0u+0x00000000u; // 800D5EC8
  goto L_800D5ED8; // 800D5ECC
L_800D5ED0:;
  c->r[3]=c->r[28]|c->r[28]; // 800D5ED0
  c->lr=0x800D5ED8u; f_800D4BD0(c); // 800D5ED4
L_800D5ED8:;
  c->r[0]=R32(c->r[1]+0x000000E4u); // 800D5ED8
  c->r[31]=R32(c->r[1]+0x000000DCu); // 800D5EDC
  c->r[30]=R32(c->r[1]+0x000000D8u); // 800D5EE0
  c->r[29]=R32(c->r[1]+0x000000D4u); // 800D5EE4
  c->r[28]=R32(c->r[1]+0x000000D0u); // 800D5EE8
  c->lr=c->r[0]; // 800D5EEC
  c->r[1]=c->r[1]+0x000000E0u; // 800D5EF0
  return; // 800D5EF4
}

// TRKDoContinue
void f_800D5EF8(Ctx* __restrict c) {
  trace_call(0x800D5EF8u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5EF8
  c->r[0]=c->lr; // 800D5EFC
  W32(c->r[1]+0x00000094u,c->r[0]); // 800D5F00
  c->lr=0x800D5F08u; f_800D7898(c); // 800D5F04
  cmps(c,0,(int32_t)c->r[3],0); // 800D5F08
  if (!crb(c,2)) { goto L_800D5F60; } // 800D5F0C
  c->r[3]=c->r[1]+0x00000048u; // 800D5F10
  c->r[4]=0u+0x00000000u; // 800D5F14
  c->r[5]=0u+0x00000040u; // 800D5F18
  c->lr=0x800D5F20u; f_800D3468(c); // 800D5F1C
  c->r[3]=R32(c->r[13]+0xFFFF9818u); // 800D5F20
  c->r[0]=0u+0x00000080u; // 800D5F24
  c->r[4]=0u+0x00000040u; // 800D5F28
  c->r[5]=0u+0x00000016u; // 800D5F2C
  c->r[6]=c->r[3]+0x00000001u; // 800D5F30
  W8(c->r[1]+0x0000004Cu,c->r[0]); // 800D5F34
  c->r[0]=c->r[6]+0x00000001u; // 800D5F38
  c->r[3]=c->r[1]+0x00000048u; // 800D5F3C
  W32(c->r[1]+0x00000048u,c->r[4]); // 800D5F40
  c->r[4]=0u+0x00000040u; // 800D5F44
  W8(c->r[1]+0x00000050u,c->r[5]); // 800D5F48
  W32(c->r[1]+0x00000054u,c->r[6]); // 800D5F4C
  W32(c->r[13]+0xFFFF9818u,c->r[0]); // 800D5F50
  c->lr=0x800D5F58u; f_800D3CA0(c); // 800D5F54
  c->r[3]=0u+0x00000000u; // 800D5F58
  goto L_800D5FAC; // 800D5F5C
L_800D5F60:;
  c->r[3]=c->r[1]+0x00000008u; // 800D5F60
  c->r[4]=0u+0x00000000u; // 800D5F64
  c->r[5]=0u+0x00000040u; // 800D5F68
  c->lr=0x800D5F70u; f_800D3468(c); // 800D5F6C
  c->r[3]=R32(c->r[13]+0xFFFF9818u); // 800D5F70
  c->r[0]=0u+0x00000080u; // 800D5F74
  c->r[4]=0u+0x00000040u; // 800D5F78
  c->r[5]=0u+0x00000000u; // 800D5F7C
  c->r[6]=c->r[3]+0x00000001u; // 800D5F80
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800D5F84
  c->r[0]=c->r[6]+0x00000001u; // 800D5F88
  c->r[3]=c->r[1]+0x00000008u; // 800D5F8C
  W32(c->r[1]+0x00000008u,c->r[4]); // 800D5F90
  c->r[4]=0u+0x00000040u; // 800D5F94
  W8(c->r[1]+0x00000010u,c->r[5]); // 800D5F98
  W32(c->r[1]+0x00000014u,c->r[6]); // 800D5F9C
  W32(c->r[13]+0xFFFF9818u,c->r[0]); // 800D5FA0
  c->lr=0x800D5FA8u; f_800D3CA0(c); // 800D5FA4
  c->lr=0x800D5FACu; f_800D4874(c); // 800D5FA8
L_800D5FAC:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 800D5FAC
  c->lr=c->r[0]; // 800D5FB0
  c->r[1]=c->r[1]+0x00000090u; // 800D5FB4
  return; // 800D5FB8
}

// TRKDoStep
void f_800D5FBC(Ctx* __restrict c) {
  trace_call(0x800D5FBCu);
  {uint32_t ea=c->r[1]+0xFFFFFEA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D5FBC
  c->r[0]=c->lr; // 800D5FC0
  c->r[4]=0u+0x00000000u; // 800D5FC4
  W32(c->r[1]+0x00000164u,c->r[0]); // 800D5FC8
  W32(c->r[1]+0x0000015Cu,c->r[31]); // 800D5FCC
  W32(c->r[1]+0x00000158u,c->r[30]); // 800D5FD0
  c->r[30]=c->r[3]|c->r[3]; // 800D5FD4
  W32(c->r[1]+0x00000154u,c->r[29]); // 800D5FD8
  W32(c->r[1]+0x00000150u,c->r[28]); // 800D5FDC
  c->lr=0x800D5FE4u; f_800D4D64(c); // 800D5FE0
  c->r[31]=R8(c->r[30]+0x00000014u); // 800D5FE4
  c->r[29]=R32(c->r[30]+0x0000001Cu); // 800D5FE8
  cmps(c,0,(int32_t)c->r[31],0); // 800D5FEC
  c->r[28]=R32(c->r[30]+0x00000020u); // 800D5FF0
  if (crb(c,2)) { goto L_800D6014; } // 800D5FF4
  cmps(c,0,(int32_t)c->r[31],16); // 800D5FF8
  if (crb(c,2)) { goto L_800D6014; } // 800D5FFC
  cmps(c,0,(int32_t)c->r[31],1); // 800D6000
  if (crb(c,2)) { goto L_800D6070; } // 800D6004
  cmps(c,0,(int32_t)c->r[31],17); // 800D6008
  if (crb(c,2)) { goto L_800D6070; } // 800D600C
  goto L_800D60D4; // 800D6010
L_800D6014:;
  c->r[30]=R8(c->r[30]+0x00000018u); // 800D6014
  cmpu(c,0,c->r[30],0x00000001u); // 800D6018
  if (!crb(c,0)) { goto L_800D6124; } // 800D601C
  c->r[3]=c->r[1]+0x00000108u; // 800D6020
  c->r[4]=0u+0x00000000u; // 800D6024
  c->r[5]=0u+0x00000040u; // 800D6028
  c->lr=0x800D6030u; f_800D3468(c); // 800D602C
  c->r[3]=R32(c->r[13]+0xFFFF9818u); // 800D6030
  c->r[0]=0u+0x00000080u; // 800D6034
  c->r[4]=0u+0x00000040u; // 800D6038
  c->r[5]=0u+0x00000011u; // 800D603C
  c->r[6]=c->r[3]+0x00000001u; // 800D6040
  W8(c->r[1]+0x0000010Cu,c->r[0]); // 800D6044
  c->r[0]=c->r[6]+0x00000001u; // 800D6048
  c->r[3]=c->r[1]+0x00000108u; // 800D604C
  W32(c->r[1]+0x00000108u,c->r[4]); // 800D6050
  c->r[4]=0u+0x00000040u; // 800D6054
  W8(c->r[1]+0x00000110u,c->r[5]); // 800D6058
  W32(c->r[1]+0x00000114u,c->r[6]); // 800D605C
  W32(c->r[13]+0xFFFF9818u,c->r[0]); // 800D6060
  c->lr=0x800D6068u; f_800D3CA0(c); // 800D6064
  c->r[3]=0u+0x00000000u; // 800D6068
  goto L_800D6220; // 800D606C
L_800D6070:;
  c->lr=0x800D6074u; f_800D7694(c); // 800D6070
  cmpu(c,0,c->r[3],c->r[29]); // 800D6074
  if (crb(c,0)) { goto L_800D6084; } // 800D6078
  cmpu(c,0,c->r[3],c->r[28]); // 800D607C
  if (!crb(c,1)) { goto L_800D6124; } // 800D6080
L_800D6084:;
  c->r[3]=c->r[1]+0x000000C8u; // 800D6084
  c->r[4]=0u+0x00000000u; // 800D6088
  c->r[5]=0u+0x00000040u; // 800D608C
  c->lr=0x800D6094u; f_800D3468(c); // 800D6090
  c->r[3]=R32(c->r[13]+0xFFFF9818u); // 800D6094
  c->r[0]=0u+0x00000080u; // 800D6098
  c->r[4]=0u+0x00000040u; // 800D609C
  c->r[5]=0u+0x00000011u; // 800D60A0
  c->r[6]=c->r[3]+0x00000001u; // 800D60A4
  W8(c->r[1]+0x000000CCu,c->r[0]); // 800D60A8
  c->r[0]=c->r[6]+0x00000001u; // 800D60AC
  c->r[3]=c->r[1]+0x000000C8u; // 800D60B0
  W32(c->r[1]+0x000000C8u,c->r[4]); // 800D60B4
  c->r[4]=0u+0x00000040u; // 800D60B8
  W8(c->r[1]+0x000000D0u,c->r[5]); // 800D60BC
  W32(c->r[1]+0x000000D4u,c->r[6]); // 800D60C0
  W32(c->r[13]+0xFFFF9818u,c->r[0]); // 800D60C4
  c->lr=0x800D60CCu; f_800D3CA0(c); // 800D60C8
  c->r[3]=0u+0x00000000u; // 800D60CC
  goto L_800D6220; // 800D60D0
L_800D60D4:;
  c->r[3]=c->r[1]+0x00000088u; // 800D60D4
  c->r[4]=0u+0x00000000u; // 800D60D8
  c->r[5]=0u+0x00000040u; // 800D60DC
  c->lr=0x800D60E4u; f_800D3468(c); // 800D60E0
  c->r[3]=R32(c->r[13]+0xFFFF9818u); // 800D60E4
  c->r[0]=0u+0x00000080u; // 800D60E8
  c->r[4]=0u+0x00000040u; // 800D60EC
  c->r[5]=0u+0x00000012u; // 800D60F0
  c->r[6]=c->r[3]+0x00000001u; // 800D60F4
  W8(c->r[1]+0x0000008Cu,c->r[0]); // 800D60F8
  c->r[0]=c->r[6]+0x00000001u; // 800D60FC
  c->r[3]=c->r[1]+0x00000088u; // 800D6100
  W32(c->r[1]+0x00000088u,c->r[4]); // 800D6104
  c->r[4]=0u+0x00000040u; // 800D6108
  W8(c->r[1]+0x00000090u,c->r[5]); // 800D610C
  W32(c->r[1]+0x00000094u,c->r[6]); // 800D6110
  W32(c->r[13]+0xFFFF9818u,c->r[0]); // 800D6114
  c->lr=0x800D611Cu; f_800D3CA0(c); // 800D6118
  c->r[3]=0u+0x00000000u; // 800D611C
  goto L_800D6220; // 800D6120
L_800D6124:;
  c->lr=0x800D6128u; f_800D7898(c); // 800D6124
  cmps(c,0,(int32_t)c->r[3],0); // 800D6128
  if (!crb(c,2)) { goto L_800D6180; } // 800D612C
  c->r[3]=c->r[1]+0x00000048u; // 800D6130
  c->r[4]=0u+0x00000000u; // 800D6134
  c->r[5]=0u+0x00000040u; // 800D6138
  c->lr=0x800D6140u; f_800D3468(c); // 800D613C
  c->r[3]=R32(c->r[13]+0xFFFF9818u); // 800D6140
  c->r[0]=0u+0x00000080u; // 800D6144
  c->r[4]=0u+0x00000040u; // 800D6148
  c->r[5]=0u+0x00000016u; // 800D614C
  c->r[6]=c->r[3]+0x00000001u; // 800D6150
  W8(c->r[1]+0x0000004Cu,c->r[0]); // 800D6154
  c->r[0]=c->r[6]+0x00000001u; // 800D6158
  c->r[3]=c->r[1]+0x00000048u; // 800D615C
  W32(c->r[1]+0x00000048u,c->r[4]); // 800D6160
  c->r[4]=0u+0x00000040u; // 800D6164
  W8(c->r[1]+0x00000050u,c->r[5]); // 800D6168
  W32(c->r[1]+0x00000054u,c->r[6]); // 800D616C
  W32(c->r[13]+0xFFFF9818u,c->r[0]); // 800D6170
  c->lr=0x800D6178u; f_800D3CA0(c); // 800D6174
  c->r[3]=0u+0x00000000u; // 800D6178
  goto L_800D6220; // 800D617C
L_800D6180:;
  c->r[3]=c->r[1]+0x00000008u; // 800D6180
  c->r[4]=0u+0x00000000u; // 800D6184
  c->r[5]=0u+0x00000040u; // 800D6188
  c->lr=0x800D6190u; f_800D3468(c); // 800D618C
  c->r[3]=R32(c->r[13]+0xFFFF9818u); // 800D6190
  c->r[0]=0u+0x00000080u; // 800D6194
  c->r[4]=0u+0x00000040u; // 800D6198
  c->r[5]=0u+0x00000000u; // 800D619C
  c->r[6]=c->r[3]+0x00000001u; // 800D61A0
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800D61A4
  c->r[0]=c->r[6]+0x00000001u; // 800D61A8
  c->r[3]=c->r[1]+0x00000008u; // 800D61AC
  W32(c->r[1]+0x00000008u,c->r[4]); // 800D61B0
  c->r[4]=0u+0x00000040u; // 800D61B4
  W8(c->r[1]+0x00000010u,c->r[5]); // 800D61B8
  W32(c->r[1]+0x00000014u,c->r[6]); // 800D61BC
  W32(c->r[13]+0xFFFF9818u,c->r[0]); // 800D61C0
  c->lr=0x800D61C8u; f_800D3CA0(c); // 800D61C4
  cmps(c,0,(int32_t)c->r[31],0); // 800D61C8
  c->r[3]=0u+0x00000000u; // 800D61CC
  if (crb(c,2)) { goto L_800D61F0; } // 800D61D0
  cmps(c,0,(int32_t)c->r[31],16); // 800D61D4
  if (crb(c,2)) { goto L_800D61F0; } // 800D61D8
  cmps(c,0,(int32_t)c->r[31],1); // 800D61DC
  if (crb(c,2)) { goto L_800D6208; } // 800D61E0
  cmps(c,0,(int32_t)c->r[31],17); // 800D61E4
  if (crb(c,2)) { goto L_800D6208; } // 800D61E8
  goto L_800D6220; // 800D61EC
L_800D61F0:;
  c->r[0]=c->r[31]+0xFFFFFFF0u; // 800D61F0
  c->r[3]=c->r[30]|c->r[30]; // 800D61F4
  c->r[0]=cntlz(c->r[0]); // 800D61F8
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D61FC
  c->lr=0x800D6204u; f_800D7598(c); // 800D6200
  goto L_800D6220; // 800D6204
L_800D6208:;
  c->r[0]=c->r[31]+0xFFFFFFEFu; // 800D6208
  c->r[3]=c->r[29]|c->r[29]; // 800D620C
  c->r[0]=cntlz(c->r[0]); // 800D6210
  c->r[4]=c->r[28]|c->r[28]; // 800D6214
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D6218
  c->lr=0x800D6220u; f_800D7620(c); // 800D621C
L_800D6220:;
  c->r[0]=R32(c->r[1]+0x00000164u); // 800D6220
  c->r[31]=R32(c->r[1]+0x0000015Cu); // 800D6224
  c->r[30]=R32(c->r[1]+0x00000158u); // 800D6228
  c->r[29]=R32(c->r[1]+0x00000154u); // 800D622C
  c->r[28]=R32(c->r[1]+0x00000150u); // 800D6230
  c->lr=c->r[0]; // 800D6234
  c->r[1]=c->r[1]+0x00000160u; // 800D6238
  return; // 800D623C
}

// TRKDoStop
void f_800D6240(Ctx* __restrict c) {
  trace_call(0x800D6240u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6240
  c->r[0]=c->lr; // 800D6244
  W32(c->r[1]+0x00000054u,c->r[0]); // 800D6248
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800D624C
  c->lr=0x800D6254u; f_800D78B8(c); // 800D6250
  cmps(c,0,(int32_t)c->r[3],0); // 800D6254
  if (crb(c,2)) { goto L_800D6278; } // 800D6258
  cmps(c,0,(int32_t)c->r[3],1796); // 800D625C
  if (crb(c,2)) { goto L_800D6280; } // 800D6260
  cmps(c,0,(int32_t)c->r[3],1797); // 800D6264
  if (crb(c,2)) { goto L_800D6288; } // 800D6268
  cmps(c,0,(int32_t)c->r[3],1798); // 800D626C
  if (crb(c,2)) { goto L_800D6290; } // 800D6270
  goto L_800D6298; // 800D6274
L_800D6278:;
  c->r[31]=0u+0x00000000u; // 800D6278
  goto L_800D629C; // 800D627C
L_800D6280:;
  c->r[31]=0u+0x00000021u; // 800D6280
  goto L_800D629C; // 800D6284
L_800D6288:;
  c->r[31]=0u+0x00000022u; // 800D6288
  goto L_800D629C; // 800D628C
L_800D6290:;
  c->r[31]=0u+0x00000020u; // 800D6290
  goto L_800D629C; // 800D6294
L_800D6298:;
  c->r[31]=0u+0x00000001u; // 800D6298
L_800D629C:;
  c->r[3]=c->r[1]+0x00000008u; // 800D629C
  c->r[4]=0u+0x00000000u; // 800D62A0
  c->r[5]=0u+0x00000040u; // 800D62A4
  c->lr=0x800D62ACu; f_800D3468(c); // 800D62A8
  c->r[3]=R32(c->r[13]+0xFFFF9818u); // 800D62AC
  c->r[0]=0u+0x00000080u; // 800D62B0
  c->r[4]=0u+0x00000040u; // 800D62B4
  W32(c->r[1]+0x00000008u,c->r[4]); // 800D62B8
  c->r[5]=c->r[3]+0x00000001u; // 800D62BC
  c->r[3]=c->r[1]+0x00000008u; // 800D62C0
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800D62C4
  c->r[0]=c->r[5]+0x00000001u; // 800D62C8
  c->r[4]=0u+0x00000040u; // 800D62CC
  W8(c->r[1]+0x00000010u,c->r[31]); // 800D62D0
  W32(c->r[1]+0x00000014u,c->r[5]); // 800D62D4
  W32(c->r[13]+0xFFFF9818u,c->r[0]); // 800D62D8
  c->lr=0x800D62E0u; f_800D3CA0(c); // 800D62DC
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800D62E0
  c->r[3]=0u+0x00000000u; // 800D62E4
  c->r[0]=R32(c->r[1]+0x00000054u); // 800D62E8
  c->lr=c->r[0]; // 800D62EC
  c->r[1]=c->r[1]+0x00000050u; // 800D62F0
  return; // 800D62F4
}

// TRKDoSetOption
void f_800D62F8(Ctx* __restrict c) {
  trace_call(0x800D62F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D62F8
  c->r[0]=c->lr; // 800D62FC
  W32(c->r[1]+0x00000054u,c->r[0]); // 800D6300
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800D6304
  W32(c->r[1]+0x00000048u,c->r[30]); // 800D6308
  c->r[0]=R8(c->r[3]+0x00000014u); // 800D630C
  c->r[30]=R8(c->r[3]+0x00000018u); // 800D6310
  cmpu(c,0,c->r[0],0x00000001u); // 800D6314
  if (!crb(c,2)) { goto L_800D6360; } // 800D6318
  c->r[31]=0u+0x80390000u; // 800D631C
  c->r[3]=c->r[31]+0xFFFFCC98u; // 800D6320
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D6324
  c->lr=0x800D632Cu; f_80245CC0(c); // 800D6328
  cmps(c,0,(int32_t)c->r[30],0); // 800D632C
  if (crb(c,2)) { goto L_800D6348; } // 800D6330
  c->r[3]=c->r[31]+0xFFFFCC98u; // 800D6334
  c->r[3]=c->r[3]+0x0000001Fu; // 800D6338
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D633C
  c->lr=0x800D6344u; f_80245CC0(c); // 800D6340
  goto L_800D6358; // 800D6344
L_800D6348:;
  c->r[3]=c->r[31]+0xFFFFCC98u; // 800D6348
  c->r[3]=c->r[3]+0x00000027u; // 800D634C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800D6350
  c->lr=0x800D6358u; f_80245CC0(c); // 800D6354
L_800D6358:;
  c->r[3]=c->r[30]|c->r[30]; // 800D6358
  c->lr=0x800D6360u; f_800D7D74(c); // 800D635C
L_800D6360:;
  c->r[3]=c->r[1]+0x00000008u; // 800D6360
  c->r[4]=0u+0x00000000u; // 800D6364
  c->r[5]=0u+0x00000040u; // 800D6368
  c->lr=0x800D6370u; f_800D3468(c); // 800D636C
  c->r[3]=R32(c->r[13]+0xFFFF9818u); // 800D6370
  c->r[0]=0u+0x00000080u; // 800D6374
  c->r[4]=0u+0x00000040u; // 800D6378
  c->r[5]=0u+0x00000000u; // 800D637C
  c->r[6]=c->r[3]+0x00000001u; // 800D6380
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800D6384
  c->r[0]=c->r[6]+0x00000001u; // 800D6388
  c->r[3]=c->r[1]+0x00000008u; // 800D638C
  W32(c->r[1]+0x00000008u,c->r[4]); // 800D6390
  c->r[4]=0u+0x00000040u; // 800D6394
  W8(c->r[1]+0x00000010u,c->r[5]); // 800D6398
  W32(c->r[1]+0x00000014u,c->r[6]); // 800D639C
  W32(c->r[13]+0xFFFF9818u,c->r[0]); // 800D63A0
  c->lr=0x800D63A8u; f_800D3CA0(c); // 800D63A4
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800D63A8
  c->r[3]=0u+0x00000000u; // 800D63AC
  c->r[30]=R32(c->r[1]+0x00000048u); // 800D63B0
  c->r[0]=R32(c->r[1]+0x00000054u); // 800D63B4
  c->lr=c->r[0]; // 800D63B8
  c->r[1]=c->r[1]+0x00000050u; // 800D63BC
  return; // 800D63C0
}

// __read_console
void f_800D63C4(Ctx* __restrict c) {
  trace_call(0x800D63C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D63C4
  c->r[0]=c->lr; // 800D63C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D63CC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D63D0
  c->r[31]=c->r[6]|c->r[6]; // 800D63D4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D63D8
  c->r[30]=c->r[5]|c->r[5]; // 800D63DC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D63E0
  c->r[29]=c->r[4]|c->r[4]; // 800D63E4
  c->lr=0x800D63ECu; f_800D7D7C(c); // 800D63E8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800D63EC
  if (!crb(c,2)) { goto L_800D63FC; } // 800D63F0
  c->r[3]=0u+0x00000001u; // 800D63F4
  goto L_800D6410; // 800D63F8
L_800D63FC:;
  c->r[4]=c->r[29]|c->r[29]; // 800D63FC
  c->r[5]=c->r[30]|c->r[30]; // 800D6400
  c->r[6]=c->r[31]|c->r[31]; // 800D6404
  c->r[3]=0u+0x00000000u; // 800D6408
  c->lr=0x800D6410u; f_800D6494(c); // 800D640C
L_800D6410:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D6410
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D6414
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D6418
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D641C
  c->lr=c->r[0]; // 800D6420
  c->r[1]=c->r[1]+0x00000020u; // 800D6424
  return; // 800D6428
}

// __TRK_write_console
void f_800D642C(Ctx* __restrict c) {
  trace_call(0x800D642Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D642C
  c->r[0]=c->lr; // 800D6430
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D6434
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D6438
  c->r[31]=c->r[6]|c->r[6]; // 800D643C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D6440
  c->r[30]=c->r[5]|c->r[5]; // 800D6444
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D6448
  c->r[29]=c->r[4]|c->r[4]; // 800D644C
  c->lr=0x800D6454u; f_800D7D7C(c); // 800D6450
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800D6454
  if (!crb(c,2)) { goto L_800D6464; } // 800D6458
  c->r[3]=0u+0x00000001u; // 800D645C
  goto L_800D6478; // 800D6460
L_800D6464:;
  c->r[4]=c->r[29]|c->r[29]; // 800D6464
  c->r[5]=c->r[30]|c->r[30]; // 800D6468
  c->r[6]=c->r[31]|c->r[31]; // 800D646C
  c->r[3]=0u+0x00000001u; // 800D6470
  c->lr=0x800D6478u; f_800D649C(c); // 800D6474
L_800D6478:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D6478
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D647C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D6480
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D6484
  c->lr=c->r[0]; // 800D6488
  c->r[1]=c->r[1]+0x00000020u; // 800D648C
  return; // 800D6490
}

// __read_file
void f_800D6494(Ctx* __restrict c) {
  trace_call(0x800D6494u);
  c->r[7]=0u+0x000000D1u; // 800D6494
  f_800D64A4(c); return; // 800D6498
}

// __write_file
void f_800D649C(Ctx* __restrict c) {
  trace_call(0x800D649Cu);
  c->r[7]=0u+0x000000D0u; // 800D649C
  f_800D64A4(c); return; // 800D64A0
}

// __access_file
void f_800D64A4(Ctx* __restrict c) {
  trace_call(0x800D64A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D64A4
  c->r[0]=c->lr; // 800D64A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D64AC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D64B0
  c->r[31]=c->r[7]|c->r[7]; // 800D64B4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D64B8
  c->r[30]=c->r[5]|c->r[5]; // 800D64BC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800D64C0
  c->r[29]=c->r[4]|c->r[4]; // 800D64C4
  W32(c->r[1]+0x00000010u,c->r[28]); // 800D64C8
  c->r[28]=c->r[3]|c->r[3]; // 800D64CC
  c->lr=0x800D64D4u; f_800D5440(c); // 800D64D0
  cmps(c,0,(int32_t)c->r[3],0); // 800D64D4
  if (!crb(c,2)) { goto L_800D64E4; } // 800D64D8
  c->r[3]=0u+0x00000001u; // 800D64DC
  goto L_800D6530; // 800D64E0
L_800D64E4:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 800D64E4
  c->r[3]=c->r[31]|c->r[31]; // 800D64E8
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D64EC
  c->r[4]=c->r[28]|c->r[28]; // 800D64F0
  c->r[6]=c->r[29]|c->r[29]; // 800D64F4
  c->r[5]=c->r[1]+0x00000008u; // 800D64F8
  c->lr=0x800D6500u; f_800D2CBC(c); // 800D64FC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800D6500
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D6504
  W32(c->r[30]+0x00000000u,c->r[3]); // 800D6508
  if (crb(c,2)) { goto L_800D651C; } // 800D650C
  cmps(c,0,(int32_t)c->r[0],2); // 800D6510
  if (crb(c,2)) { goto L_800D6524; } // 800D6514
  goto L_800D652C; // 800D6518
L_800D651C:;
  c->r[3]=0u+0x00000000u; // 800D651C
  goto L_800D6530; // 800D6520
L_800D6524:;
  c->r[3]=0u+0x00000002u; // 800D6524
  goto L_800D6530; // 800D6528
L_800D652C:;
  c->r[3]=0u+0x00000001u; // 800D652C
L_800D6530:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D6530
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D6534
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D6538
  c->r[29]=R32(c->r[1]+0x00000014u); // 800D653C
  c->r[28]=R32(c->r[1]+0x00000010u); // 800D6540
  c->lr=c->r[0]; // 800D6544
  c->r[1]=c->r[1]+0x00000020u; // 800D6548
  return; // 800D654C
}

// __TRK_get_MSR
void f_800D6550(Ctx* __restrict c) {
  trace_call(0x800D6550u);
  c->r[3]=c->msr; // 800D6550
  return; // 800D6554
}

// __TRK_set_MSR
void f_800D6558(Ctx* __restrict c) {
  trace_call(0x800D6558u);
  c->msr=c->r[3]; // 800D6558
  return; // 800D655C
}

// TRKValidMemory32
void f_800D6560(Ctx* __restrict c) {
  trace_call(0x800D6560u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6560
  c->r[0]=c->lr; // 800D6564
  c->r[4]=c->r[4]+c->r[3]; // 800D6568
  c->r[6]=0u+0x00000700u; // 800D656C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6570
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D6574
  c->r[31]=c->r[4]+0xFFFFFFFFu; // 800D6578
  cmpu(c,0,c->r[31],c->r[3]); // 800D657C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D6580
  c->r[30]=c->r[5]|c->r[5]; // 800D6584
  if (!crb(c,0)) { goto L_800D6594; } // 800D6588
  c->r[3]=0u+0x00000700u; // 800D658C
  goto L_800D6640; // 800D6590
L_800D6594:;
  c->r[4]=0u+0x80380000u; // 800D6594
  c->r[4]=c->r[4]+0xFFFFDFC0u; // 800D6598
  c->r[0]=R32(c->r[4]+0x00000004u); // 800D659C
  cmpu(c,0,c->r[3],c->r[0]); // 800D65A0
  if (crb(c,1)) { goto L_800D663C; } // 800D65A4
  c->r[0]=R32(c->r[4]+0x00000000u); // 800D65A8
  cmpu(c,0,c->r[31],c->r[0]); // 800D65AC
  if (crb(c,0)) { goto L_800D663C; } // 800D65B0
  cmps(c,0,(int32_t)c->r[5],0); // 800D65B4
  if (!crb(c,2)) { goto L_800D65C8; } // 800D65B8
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D65BC
  cmps(c,0,(int32_t)c->r[0],0); // 800D65C0
  if (crb(c,2)) { goto L_800D65E4; } // 800D65C4
L_800D65C8:;
  cmps(c,0,(int32_t)c->r[5],1); // 800D65C8
  if (!crb(c,2)) { goto L_800D65EC; } // 800D65CC
  c->r[4]=0u+0x80380000u; // 800D65D0
  c->r[4]=c->r[4]+0xFFFFDFC0u; // 800D65D4
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800D65D8
  cmps(c,0,(int32_t)c->r[0],0); // 800D65DC
  if (!crb(c,2)) { goto L_800D65EC; } // 800D65E0
L_800D65E4:;
  c->r[6]=0u+0x00000700u; // 800D65E4
  goto L_800D663C; // 800D65E8
L_800D65EC:;
  c->r[4]=0u+0x80380000u; // 800D65EC
  c->r[6]=0u+0x00000000u; // 800D65F0
  c->r[0]=R32(c->r[4]+0xFFFFDFC0u); // 800D65F4
  cmpu(c,0,c->r[3],c->r[0]); // 800D65F8
  if (!crb(c,0)) { goto L_800D6610; } // 800D65FC
  c->r[5]=c->r[30]|c->r[30]; // 800D6600
  c->r[4]=c->r[0]-c->r[3]; // 800D6604
  c->lr=0x800D660Cu; f_800D6560(c); // 800D6608
  c->r[6]=c->r[3]|c->r[3]; // 800D660C
L_800D6610:;
  cmps(c,0,(int32_t)c->r[6],0); // 800D6610
  if (!crb(c,2)) { goto L_800D663C; } // 800D6614
  c->r[3]=0u+0x80380000u; // 800D6618
  c->r[3]=c->r[3]+0xFFFFDFC0u; // 800D661C
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D6620
  cmpu(c,0,c->r[31],c->r[3]); // 800D6624
  if (!crb(c,1)) { goto L_800D663C; } // 800D6628
  c->r[5]=c->r[30]|c->r[30]; // 800D662C
  c->r[4]=c->r[31]-c->r[3]; // 800D6630
  c->lr=0x800D6638u; f_800D6560(c); // 800D6634
  c->r[6]=c->r[3]|c->r[3]; // 800D6638
L_800D663C:;
  c->r[3]=c->r[6]|c->r[6]; // 800D663C
L_800D6640:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6640
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D6644
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D6648
  c->lr=c->r[0]; // 800D664C
  c->r[1]=c->r[1]+0x00000010u; // 800D6650
  return; // 800D6654
}

// TRK_ppc_memcpy
void f_800D6658(Ctx* __restrict c) {
  trace_call(0x800D6658u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6658
  c->r[0]=c->lr; // 800D665C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D6660
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D6664
  c->r[29]=c->r[3]|c->r[3]; // 800D6668
  c->r[30]=c->r[4]|c->r[4]; // 800D666C
  c->r[26]=c->r[5]|c->r[5]; // 800D6670
  c->r[27]=c->r[6]|c->r[6]; // 800D6674
  c->r[28]=c->r[7]|c->r[7]; // 800D6678
  c->lr=0x800D6680u; f_800D6550(c); // 800D667C
  c->r[31]=c->r[3]|c->r[3]; // 800D6680
  c->r[25]=0u+0x000000FFu; // 800D6684
  goto L_800D6700; // 800D6688
L_800D668C:;
  c->r[3]=c->r[28]|c->r[28]; // 800D668C
  c->lr=0x800D6694u; f_800D6558(c); // 800D6690
  c->r[3]=rotl(c->r[30],0)&0xFFFFFFFCu; // 800D6694
  c->r[0]=c->r[30]-c->r[3]; // 800D6698
  c->r[3]=R32(c->r[3]+0x00000000u); // 800D669C
  c->r[0]=addc(c,~c->r[0],0x00000003u,1); // 800D66A0
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D66A4
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]>>((c->r[0])&31)); // 800D66A8
  c->r[24]=rotl(c->r[0],0)&0x000000FFu; // 800D66AC
  /* sync */ // 800D66B0
  c->r[3]=c->r[27]|c->r[27]; // 800D66B4
  c->lr=0x800D66BCu; f_800D6558(c); // 800D66B8
  c->r[6]=rotl(c->r[29],0)&0xFFFFFFFCu; // 800D66BC
  c->r[0]=c->r[29]-c->r[6]; // 800D66C0
  c->r[5]=R32(c->r[6]+0x00000000u); // 800D66C4
  c->r[3]=addc(c,~c->r[0],0x00000003u,1); // 800D66C8
  c->r[0]=addc(c,~c->r[0],0x00000003u,1); // 800D66CC
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 800D66D0
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800D66D4
  c->r[4]=((c->r[3])&0x20)?0u:(c->r[25]<<((c->r[3])&31)); // 800D66D8
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[24]<<((c->r[0])&31)); // 800D66DC
  c->r[3]=c->r[5]&~c->r[4]; // 800D66E0
  c->r[0]=c->r[4]&c->r[0]; // 800D66E4
  c->r[0]=c->r[3]|c->r[0]; // 800D66E8
  W32(c->r[6]+0x00000000u,c->r[0]); // 800D66EC
  /* sync */ // 800D66F0
  c->r[30]=c->r[30]+0x00000001u; // 800D66F4
  c->r[29]=c->r[29]+0x00000001u; // 800D66F8
  c->r[26]=c->r[26]+0xFFFFFFFFu; // 800D66FC
L_800D6700:;
  cmps(c,0,(int32_t)c->r[26],0); // 800D6700
  if (!crb(c,2)) { IRQCHK(c); goto L_800D668C; } // 800D6704
  c->r[3]=c->r[31]|c->r[31]; // 800D6708
  c->lr=0x800D6710u; f_800D6558(c); // 800D670C
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D6710
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D6714
  c->lr=c->r[0]; // 800D6718
  c->r[1]=c->r[1]+0x00000030u; // 800D671C
  return; // 800D6720
}

// TRKTargetAccessMemory
void f_800D6724(Ctx* __restrict c) {
  trace_call(0x800D6724u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6724
  c->r[0]=c->lr; // 800D6728
  c->r[8]=0u+0x80390000u; // 800D672C
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D6730
  c->r[8]=c->r[8]+0xFFFFCCC8u; // 800D6734
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D6738
  c->r[26]=c->r[4]|c->r[4]; // 800D673C
  c->r[31]=c->r[5]|c->r[5]; // 800D6740
  c->r[25]=c->r[3]|c->r[3]; // 800D6744
  c->r[30]=0u+0x00000000u; // 800D6748
  c->r[27]=c->r[7]|c->r[7]; // 800D674C
  c->r[3]=c->r[26]|c->r[26]; // 800D6750
  c->r[0]=R32(c->r[8]+0x0000000Cu); // 800D6754
  c->r[6]=R32(c->r[8]+0x00000000u); // 800D6758
  c->r[5]=R32(c->r[8]+0x00000004u); // 800D675C
  c->r[4]=R32(c->r[8]+0x00000008u); // 800D6760
  W32(c->r[1]+0x00000008u,c->r[6]); // 800D6764
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800D6768
  W32(c->r[1]+0x00000010u,c->r[4]); // 800D676C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D6770
  W8(c->r[8]+0x0000000Du,c->r[30]); // 800D6774
  c->lr=0x800D677Cu; f_800D37E0(c); // 800D6778
  c->r[0]=cntlz(c->r[27]); // 800D677C
  c->r[4]=R32(c->r[31]+0x00000000u); // 800D6780
  c->r[28]=c->r[3]|c->r[3]; // 800D6784
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D6788
  c->lr=0x800D6790u; f_800D6560(c); // 800D678C
  cmps(c,0,(int32_t)c->r[3],0); // 800D6790
  c->r[29]=c->r[3]|c->r[3]; // 800D6794
  if (crb(c,2)) { goto L_800D67A4; } // 800D6798
  W32(c->r[31]+0x00000000u,c->r[30]); // 800D679C
  goto L_800D6818; // 800D67A0
L_800D67A4:;
  c->lr=0x800D67A8u; f_800D6550(c); // 800D67A4
  c->r[4]=0u+0x803D0000u; // 800D67A8
  cmps(c,0,(int32_t)c->r[27],0); // 800D67AC
  c->r[4]=c->r[4]+0x000067C0u; // 800D67B0
  c->r[8]=c->r[3]|c->r[3]; // 800D67B4
  c->r[0]=R32(c->r[4]+0x000001F8u); // 800D67B8
  c->r[0]=rotl(c->r[0],0)&0x00000010u; // 800D67BC
  c->r[7]=c->r[3]|c->r[0]; // 800D67C0
  if (crb(c,2)) { goto L_800D67E0; } // 800D67C4
  c->r[5]=R32(c->r[31]+0x00000000u); // 800D67C8
  c->r[3]=c->r[25]|c->r[25]; // 800D67CC
  c->r[4]=c->r[28]|c->r[28]; // 800D67D0
  c->r[6]=c->r[8]|c->r[8]; // 800D67D4
  c->lr=0x800D67DCu; f_800D6658(c); // 800D67D8
  goto L_800D6818; // 800D67DC
L_800D67E0:;
  c->r[5]=R32(c->r[31]+0x00000000u); // 800D67E0
  c->r[6]=c->r[7]|c->r[7]; // 800D67E4
  c->r[3]=c->r[28]|c->r[28]; // 800D67E8
  c->r[4]=c->r[25]|c->r[25]; // 800D67EC
  c->r[7]=c->r[8]|c->r[8]; // 800D67F0
  c->lr=0x800D67F8u; f_800D6658(c); // 800D67F4
  c->r[4]=R32(c->r[31]+0x00000000u); // 800D67F8
  c->r[3]=c->r[28]|c->r[28]; // 800D67FC
  c->lr=0x800D6804u; f_800D31CC(c); // 800D6800
  cmpu(c,0,c->r[26],c->r[28]); // 800D6804
  if (crb(c,2)) { goto L_800D6818; } // 800D6808
  c->r[4]=R32(c->r[31]+0x00000000u); // 800D680C
  c->r[3]=c->r[26]|c->r[26]; // 800D6810
  c->lr=0x800D6818u; f_800D31CC(c); // 800D6814
L_800D6818:;
  c->r[3]=0u+0x80390000u; // 800D6818
  c->r[3]=c->r[3]+0xFFFFCCC8u; // 800D681C
  c->r[0]=R8(c->r[3]+0x0000000Du); // 800D6820
  cmps(c,0,(int32_t)c->r[0],0); // 800D6824
  if (crb(c,2)) { goto L_800D6838; } // 800D6828
  c->r[0]=0u+0x00000000u; // 800D682C
  W32(c->r[31]+0x00000000u,c->r[0]); // 800D6830
  c->r[29]=0u+0x00000702u; // 800D6834
L_800D6838:;
  c->r[6]=R32(c->r[1]+0x00000008u); // 800D6838
  c->r[7]=0u+0x80390000u; // 800D683C
  {uint32_t ea=c->r[7]+0xFFFFCCC8u; W32(ea,c->r[6]); c->r[7]=ea;} // 800D6840
  c->r[3]=c->r[29]|c->r[29]; // 800D6844
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 800D6848
  c->r[4]=R32(c->r[1]+0x00000010u); // 800D684C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6850
  W32(c->r[7]+0x00000004u,c->r[5]); // 800D6854
  W32(c->r[7]+0x00000008u,c->r[4]); // 800D6858
  W32(c->r[7]+0x0000000Cu,c->r[0]); // 800D685C
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D6860
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D6864
  c->lr=c->r[0]; // 800D6868
  c->r[1]=c->r[1]+0x00000040u; // 800D686C
  return; // 800D6870
}

// TRKTargetAccessDefault
void f_800D6874(Ctx* __restrict c) {
  trace_call(0x800D6874u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6874
  c->r[0]=c->lr; // 800D6878
  cmpu(c,0,c->r[4],0x00000024u); // 800D687C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D6880
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D6884
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D6888
  c->r[30]=c->r[6]|c->r[6]; // 800D688C
  if (!crb(c,1)) { goto L_800D689C; } // 800D6890
  c->r[3]=0u+0x00000701u; // 800D6894
  goto L_800D6954; // 800D6898
L_800D689C:;
  c->r[12]=0u+0x80390000u; // 800D689C
  c->r[4]=c->r[4]-c->r[3]; // 800D68A0
  c->r[12]=c->r[12]+0xFFFFCCC8u; // 800D68A4
  cmps(c,0,(int32_t)c->r[7],0); // 800D68A8
  c->r[9]=R32(c->r[12]+0x0000000Cu); // 800D68AC
  c->r[8]=0u+0x803D0000u; // 800D68B0
  c->r[11]=R32(c->r[12]+0x00000000u); // 800D68B4
  c->r[0]=0u+0x00000000u; // 800D68B8
  c->r[10]=R32(c->r[12]+0x00000004u); // 800D68BC
  c->r[31]=c->r[4]+0x00000001u; // 800D68C0
  c->r[7]=R32(c->r[12]+0x00000008u); // 800D68C4
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D68C8
  W8(c->r[12]+0x0000000Du,c->r[0]); // 800D68CC
  c->r[8]=c->r[8]+0x000067C0u; // 800D68D0
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800D68D4
  W32(c->r[1]+0x00000008u,c->r[11]); // 800D68D8
  c->r[4]=c->r[8]+c->r[3]; // 800D68DC
  W32(c->r[1]+0x0000000Cu,c->r[10]); // 800D68E0
  W32(c->r[1]+0x00000010u,c->r[7]); // 800D68E4
  W32(c->r[1]+0x00000014u,c->r[9]); // 800D68E8
  W32(c->r[6]+0x00000000u,c->r[0]); // 800D68EC
  if (crb(c,2)) { goto L_800D6904; } // 800D68F0
  c->r[3]=c->r[5]|c->r[5]; // 800D68F4
  c->r[5]=c->r[31]|c->r[31]; // 800D68F8
  c->lr=0x800D6900u; f_800D50F0(c); // 800D68FC
  goto L_800D6910; // 800D6900
L_800D6904:;
  c->r[3]=c->r[5]|c->r[5]; // 800D6904
  c->r[5]=c->r[31]|c->r[31]; // 800D6908
  c->lr=0x800D6910u; f_800D5358(c); // 800D690C
L_800D6910:;
  c->r[4]=0u+0x80390000u; // 800D6910
  c->r[4]=c->r[4]+0xFFFFCCC8u; // 800D6914
  c->r[0]=R8(c->r[4]+0x0000000Du); // 800D6918
  cmps(c,0,(int32_t)c->r[0],0); // 800D691C
  if (crb(c,2)) { goto L_800D6930; } // 800D6920
  c->r[0]=0u+0x00000000u; // 800D6924
  W32(c->r[30]+0x00000000u,c->r[0]); // 800D6928
  c->r[3]=0u+0x00000702u; // 800D692C
L_800D6930:;
  c->r[6]=R32(c->r[1]+0x00000008u); // 800D6930
  c->r[7]=0u+0x80390000u; // 800D6934
  {uint32_t ea=c->r[7]+0xFFFFCCC8u; W32(ea,c->r[6]); c->r[7]=ea;} // 800D6938
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 800D693C
  c->r[4]=R32(c->r[1]+0x00000010u); // 800D6940
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6944
  W32(c->r[7]+0x00000004u,c->r[5]); // 800D6948
  W32(c->r[7]+0x00000008u,c->r[4]); // 800D694C
  W32(c->r[7]+0x0000000Cu,c->r[0]); // 800D6950
L_800D6954:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D6954
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D6958
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D695C
  c->lr=c->r[0]; // 800D6960
  c->r[1]=c->r[1]+0x00000020u; // 800D6964
  return; // 800D6968
}

// TRKTargetAccessFP
void f_800D696C(Ctx* __restrict c) {
  trace_call(0x800D696Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D696C
  c->r[0]=c->lr; // 800D6970
  cmpu(c,0,c->r[4],0x00000021u); // 800D6974
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D6978
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D697C
  c->r[26]=c->r[3]|c->r[3]; // 800D6980
  c->r[27]=c->r[4]|c->r[4]; // 800D6984
  c->r[28]=c->r[5]|c->r[5]; // 800D6988
  c->r[29]=c->r[6]|c->r[6]; // 800D698C
  c->r[30]=c->r[7]|c->r[7]; // 800D6990
  if (!crb(c,1)) { goto L_800D69A0; } // 800D6994
  c->r[3]=0u+0x00000701u; // 800D6998
  goto L_800D6A94; // 800D699C
L_800D69A0:;
  c->r[6]=0u+0x80390000u; // 800D69A0
  c->r[31]=0u+0x00000000u; // 800D69A4
  c->r[6]=c->r[6]+0xFFFFCCC8u; // 800D69A8
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 800D69AC
  c->r[5]=R32(c->r[6]+0x00000000u); // 800D69B0
  c->r[4]=R32(c->r[6]+0x00000004u); // 800D69B4
  c->r[3]=R32(c->r[6]+0x00000008u); // 800D69B8
  W32(c->r[1]+0x00000010u,c->r[5]); // 800D69BC
  W32(c->r[1]+0x00000014u,c->r[4]); // 800D69C0
  W32(c->r[1]+0x00000018u,c->r[3]); // 800D69C4
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800D69C8
  W8(c->r[6]+0x0000000Du,c->r[31]); // 800D69CC
  c->lr=0x800D69D4u; f_800D6550(c); // 800D69D0
  c->r[3]=c->r[3]|0x00002000u; // 800D69D4
  c->lr=0x800D69DCu; f_800D6558(c); // 800D69D8
  W32(c->r[29]+0x00000000u,c->r[31]); // 800D69DC
  c->r[3]=0u+0x00000000u; // 800D69E0
  goto L_800D6A40; // 800D69E4
L_800D69E8:;
  cmps(c,0,(int32_t)c->r[30],0); // 800D69E8
  if (crb(c,2)) { goto L_800D6A14; } // 800D69EC
  c->r[4]=c->r[26]|c->r[26]; // 800D69F0
  c->r[5]=c->r[30]|c->r[30]; // 800D69F4
  c->r[3]=c->r[1]+0x00000008u; // 800D69F8
  c->lr=0x800D6A00u; f_800D7A9C(c); // 800D69FC
  c->r[5]=R32(c->r[1]+0x00000008u); // 800D6A00
  c->r[3]=c->r[28]|c->r[28]; // 800D6A04
  c->r[6]=R32(c->r[1]+0x0000000Cu); // 800D6A08
  c->lr=0x800D6A10u; f_800D4F98(c); // 800D6A0C
  goto L_800D6A30; // 800D6A10
L_800D6A14:;
  c->r[3]=c->r[28]|c->r[28]; // 800D6A14
  c->r[4]=c->r[1]+0x00000008u; // 800D6A18
  c->lr=0x800D6A20u; f_800D51E0(c); // 800D6A1C
  c->r[4]=c->r[26]|c->r[26]; // 800D6A20
  c->r[5]=c->r[30]|c->r[30]; // 800D6A24
  c->r[3]=c->r[1]+0x00000008u; // 800D6A28
  c->lr=0x800D6A30u; f_800D7A9C(c); // 800D6A2C
L_800D6A30:;
  c->r[4]=R32(c->r[29]+0x00000000u); // 800D6A30
  c->r[26]=c->r[26]+0x00000001u; // 800D6A34
  c->r[0]=c->r[4]+0x00000008u; // 800D6A38
  W32(c->r[29]+0x00000000u,c->r[0]); // 800D6A3C
L_800D6A40:;
  cmpu(c,0,c->r[26],c->r[27]); // 800D6A40
  if (crb(c,1)) { goto L_800D6A50; } // 800D6A44
  cmps(c,0,(int32_t)c->r[3],0); // 800D6A48
  if (crb(c,2)) { IRQCHK(c); goto L_800D69E8; } // 800D6A4C
L_800D6A50:;
  c->r[4]=0u+0x80390000u; // 800D6A50
  c->r[4]=c->r[4]+0xFFFFCCC8u; // 800D6A54
  c->r[0]=R8(c->r[4]+0x0000000Du); // 800D6A58
  cmps(c,0,(int32_t)c->r[0],0); // 800D6A5C
  if (crb(c,2)) { goto L_800D6A70; } // 800D6A60
  c->r[0]=0u+0x00000000u; // 800D6A64
  W32(c->r[29]+0x00000000u,c->r[0]); // 800D6A68
  c->r[3]=0u+0x00000702u; // 800D6A6C
L_800D6A70:;
  c->r[6]=R32(c->r[1]+0x00000010u); // 800D6A70
  c->r[7]=0u+0x80390000u; // 800D6A74
  {uint32_t ea=c->r[7]+0xFFFFCCC8u; W32(ea,c->r[6]); c->r[7]=ea;} // 800D6A78
  c->r[5]=R32(c->r[1]+0x00000014u); // 800D6A7C
  c->r[4]=R32(c->r[1]+0x00000018u); // 800D6A80
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800D6A84
  W32(c->r[7]+0x00000004u,c->r[5]); // 800D6A88
  W32(c->r[7]+0x00000008u,c->r[4]); // 800D6A8C
  W32(c->r[7]+0x0000000Cu,c->r[0]); // 800D6A90
L_800D6A94:;
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D6A94
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D6A98
  c->lr=c->r[0]; // 800D6A9C
  c->r[1]=c->r[1]+0x00000040u; // 800D6AA0
  return; // 800D6AA4
}

// TRKTargetAccessExtended1
void f_800D6AA8(Ctx* __restrict c) {
  trace_call(0x800D6AA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6AA8
  c->r[0]=c->lr; // 800D6AAC
  cmpu(c,0,c->r[4],0x00000060u); // 800D6AB0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D6AB4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D6AB8
  c->r[31]=c->r[6]|c->r[6]; // 800D6ABC
  if (!crb(c,1)) { goto L_800D6ACC; } // 800D6AC0
  c->r[3]=0u+0x00000701u; // 800D6AC4
  goto L_800D6BF8; // 800D6AC8
L_800D6ACC:;
  c->r[12]=0u+0x80390000u; // 800D6ACC
  cmpu(c,0,c->r[3],c->r[4]); // 800D6AD0
  c->r[12]=c->r[12]+0xFFFFCCC8u; // 800D6AD4
  c->r[0]=0u+0x00000000u; // 800D6AD8
  c->r[8]=R32(c->r[12]+0x0000000Cu); // 800D6ADC
  c->r[11]=R32(c->r[12]+0x00000000u); // 800D6AE0
  c->r[10]=R32(c->r[12]+0x00000004u); // 800D6AE4
  c->r[9]=R32(c->r[12]+0x00000008u); // 800D6AE8
  W8(c->r[12]+0x0000000Du,c->r[0]); // 800D6AEC
  W32(c->r[1]+0x00000008u,c->r[11]); // 800D6AF0
  W32(c->r[1]+0x0000000Cu,c->r[10]); // 800D6AF4
  W32(c->r[1]+0x00000010u,c->r[9]); // 800D6AF8
  W32(c->r[1]+0x00000014u,c->r[8]); // 800D6AFC
  W32(c->r[6]+0x00000000u,c->r[0]); // 800D6B00
  if (crb(c,1)) { goto L_800D6BB4; } // 800D6B04
  c->r[4]=c->r[4]-c->r[3]; // 800D6B08
  c->r[8]=0u+0x803D0000u; // 800D6B0C
  c->r[9]=c->r[4]+0x00000001u; // 800D6B10
  cmps(c,0,(int32_t)c->r[7],0); // 800D6B14
  c->r[7]=rotl(c->r[9],2)&0xFFFFFFFCu; // 800D6B18
  c->r[8]=c->r[8]+0x000067C0u; // 800D6B1C
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800D6B20
  W32(c->r[6]+0x00000000u,c->r[7]); // 800D6B24
  c->r[3]=c->r[8]+c->r[0]; // 800D6B28
  c->r[4]=c->r[3]+0x000001A8u; // 800D6B2C
  if (crb(c,2)) { goto L_800D6B44; } // 800D6B30
  c->r[3]=c->r[5]|c->r[5]; // 800D6B34
  c->r[5]=c->r[9]|c->r[9]; // 800D6B38
  c->lr=0x800D6B40u; f_800D50F0(c); // 800D6B3C
  goto L_800D6BB4; // 800D6B40
L_800D6B44:;
  c->r[0]=c->r[8]+0x000001ECu; // 800D6B44
  cmpu(c,0,c->r[4],c->r[0]); // 800D6B48
  if (crb(c,1)) { goto L_800D6B70; } // 800D6B4C
  c->r[3]=c->r[4]+c->r[7]; // 800D6B50
  c->r[0]=c->r[8]+0x000001E8u; // 800D6B54
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800D6B58
  cmpu(c,0,c->r[3],c->r[0]); // 800D6B5C
  if (crb(c,0)) { goto L_800D6B70; } // 800D6B60
  c->r[3]=0u+0x803D0000u; // 800D6B64
  c->r[0]=0u+0x00000001u; // 800D6B68
  W8(c->r[3]+0x00006648u,c->r[0]); // 800D6B6C
L_800D6B70:;
  c->r[3]=0u+0x803D0000u; // 800D6B70
  c->r[3]=c->r[3]+0x000067C0u; // 800D6B74
  c->r[6]=c->r[3]+0x00000278u; // 800D6B78
  cmpu(c,0,c->r[4],c->r[6]); // 800D6B7C
  if (crb(c,1)) { goto L_800D6BA8; } // 800D6B80
  c->r[0]=rotl(c->r[9],2)&0xFFFFFFFCu; // 800D6B84
  c->r[3]=c->r[4]+c->r[0]; // 800D6B88
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 800D6B8C
  cmpu(c,0,c->r[0],c->r[6]); // 800D6B90
  if (crb(c,0)) { goto L_800D6BA8; } // 800D6B94
  c->r[3]=0u+0x803D0000u; // 800D6B98
  c->r[0]=0u+0x00000001u; // 800D6B9C
  c->r[3]=c->r[3]+0x00006648u; // 800D6BA0
  W8(c->r[3]+0x00000001u,c->r[0]); // 800D6BA4
L_800D6BA8:;
  c->r[3]=c->r[5]|c->r[5]; // 800D6BA8
  c->r[5]=c->r[9]|c->r[9]; // 800D6BAC
  c->lr=0x800D6BB4u; f_800D5358(c); // 800D6BB0
L_800D6BB4:;
  c->r[4]=0u+0x80390000u; // 800D6BB4
  c->r[4]=c->r[4]+0xFFFFCCC8u; // 800D6BB8
  c->r[0]=R8(c->r[4]+0x0000000Du); // 800D6BBC
  cmps(c,0,(int32_t)c->r[0],0); // 800D6BC0
  if (crb(c,2)) { goto L_800D6BD4; } // 800D6BC4
  c->r[0]=0u+0x00000000u; // 800D6BC8
  W32(c->r[31]+0x00000000u,c->r[0]); // 800D6BCC
  c->r[3]=0u+0x00000702u; // 800D6BD0
L_800D6BD4:;
  c->r[6]=R32(c->r[1]+0x00000008u); // 800D6BD4
  c->r[7]=0u+0x80390000u; // 800D6BD8
  {uint32_t ea=c->r[7]+0xFFFFCCC8u; W32(ea,c->r[6]); c->r[7]=ea;} // 800D6BDC
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 800D6BE0
  c->r[4]=R32(c->r[1]+0x00000010u); // 800D6BE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D6BE8
  W32(c->r[7]+0x00000004u,c->r[5]); // 800D6BEC
  W32(c->r[7]+0x00000008u,c->r[4]); // 800D6BF0
  W32(c->r[7]+0x0000000Cu,c->r[0]); // 800D6BF4
L_800D6BF8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D6BF8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D6BFC
  c->lr=c->r[0]; // 800D6C00
  c->r[1]=c->r[1]+0x00000020u; // 800D6C04
  return; // 800D6C08
}

// TRKTargetAccessExtended2
void f_800D6C0C(Ctx* __restrict c) {
  trace_call(0x800D6C0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6C0C
  c->r[0]=c->lr; // 800D6C10
  cmpu(c,0,c->r[4],0x0000001Fu); // 800D6C14
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D6C18
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D6C1C
  c->r[26]=c->r[3]|c->r[3]; // 800D6C20
  c->r[27]=c->r[4]|c->r[4]; // 800D6C24
  c->r[28]=c->r[5]|c->r[5]; // 800D6C28
  c->r[29]=c->r[6]|c->r[6]; // 800D6C2C
  c->r[30]=c->r[7]|c->r[7]; // 800D6C30
  if (!crb(c,1)) { goto L_800D6C40; } // 800D6C34
  c->r[3]=0u+0x00000701u; // 800D6C38
  goto L_800D6D68; // 800D6C3C
L_800D6C40:;
  c->r[9]=0u+0x80390000u; // 800D6C40
  c->r[31]=0u+0x00000000u; // 800D6C44
  c->r[9]=c->r[9]+0xFFFFCCC8u; // 800D6C48
  c->r[3]=c->r[1]+0x00000008u; // 800D6C4C
  c->r[0]=R32(c->r[9]+0x0000000Cu); // 800D6C50
  c->r[4]=0u+0x00000398u; // 800D6C54
  c->r[8]=R32(c->r[9]+0x00000000u); // 800D6C58
  c->r[5]=0u+0x00000001u; // 800D6C5C
  c->r[7]=R32(c->r[9]+0x00000004u); // 800D6C60
  c->r[6]=R32(c->r[9]+0x00000008u); // 800D6C64
  W32(c->r[1]+0x00000018u,c->r[8]); // 800D6C68
  W32(c->r[1]+0x0000001Cu,c->r[7]); // 800D6C6C
  W32(c->r[1]+0x00000020u,c->r[6]); // 800D6C70
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D6C74
  W8(c->r[9]+0x0000000Du,c->r[31]); // 800D6C78
  c->lr=0x800D6C80u; f_800D78D0(c); // 800D6C7C
  c->r[0]=R32(c->r[1]+0x00000008u); // 800D6C80
  c->r[3]=c->r[1]+0x00000008u; // 800D6C84
  c->r[4]=0u+0x00000398u; // 800D6C88
  c->r[5]=0u+0x00000000u; // 800D6C8C
  c->r[0]=c->r[0]|0xA0000000u; // 800D6C90
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D6C94
  c->lr=0x800D6C9Cu; f_800D78D0(c); // 800D6C98
  W32(c->r[1]+0x00000008u,c->r[31]); // 800D6C9C
  c->r[3]=c->r[1]+0x00000008u; // 800D6CA0
  c->r[4]=0u+0x00000390u; // 800D6CA4
  c->r[5]=0u+0x00000000u; // 800D6CA8
  c->lr=0x800D6CB0u; f_800D78D0(c); // 800D6CAC
  W32(c->r[29]+0x00000000u,c->r[31]); // 800D6CB0
  c->r[3]=0u+0x00000000u; // 800D6CB4
  goto L_800D6D14; // 800D6CB8
L_800D6CBC:;
  cmps(c,0,(int32_t)c->r[30],0); // 800D6CBC
  if (crb(c,2)) { goto L_800D6CE8; } // 800D6CC0
  c->r[4]=c->r[26]|c->r[26]; // 800D6CC4
  c->r[5]=c->r[30]|c->r[30]; // 800D6CC8
  c->r[3]=c->r[1]+0x00000010u; // 800D6CCC
  c->lr=0x800D6CD4u; f_800D79AC(c); // 800D6CD0
  c->r[5]=R32(c->r[1]+0x00000010u); // 800D6CD4
  c->r[3]=c->r[28]|c->r[28]; // 800D6CD8
  c->r[6]=R32(c->r[1]+0x00000014u); // 800D6CDC
  c->lr=0x800D6CE4u; f_800D4F98(c); // 800D6CE0
  goto L_800D6D04; // 800D6CE4
L_800D6CE8:;
  c->r[3]=c->r[28]|c->r[28]; // 800D6CE8
  c->r[4]=c->r[1]+0x00000010u; // 800D6CEC
  c->lr=0x800D6CF4u; f_800D51E0(c); // 800D6CF0
  c->r[4]=c->r[26]|c->r[26]; // 800D6CF4
  c->r[5]=c->r[30]|c->r[30]; // 800D6CF8
  c->r[3]=c->r[1]+0x00000010u; // 800D6CFC
  c->lr=0x800D6D04u; f_800D79AC(c); // 800D6D00
L_800D6D04:;
  c->r[4]=R32(c->r[29]+0x00000000u); // 800D6D04
  c->r[26]=c->r[26]+0x00000001u; // 800D6D08
  c->r[0]=c->r[4]+0x00000008u; // 800D6D0C
  W32(c->r[29]+0x00000000u,c->r[0]); // 800D6D10
L_800D6D14:;
  cmpu(c,0,c->r[26],c->r[27]); // 800D6D14
  if (crb(c,1)) { goto L_800D6D24; } // 800D6D18
  cmps(c,0,(int32_t)c->r[3],0); // 800D6D1C
  if (crb(c,2)) { IRQCHK(c); goto L_800D6CBC; } // 800D6D20
L_800D6D24:;
  c->r[4]=0u+0x80390000u; // 800D6D24
  c->r[4]=c->r[4]+0xFFFFCCC8u; // 800D6D28
  c->r[0]=R8(c->r[4]+0x0000000Du); // 800D6D2C
  cmps(c,0,(int32_t)c->r[0],0); // 800D6D30
  if (crb(c,2)) { goto L_800D6D44; } // 800D6D34
  c->r[0]=0u+0x00000000u; // 800D6D38
  W32(c->r[29]+0x00000000u,c->r[0]); // 800D6D3C
  c->r[3]=0u+0x00000702u; // 800D6D40
L_800D6D44:;
  c->r[6]=R32(c->r[1]+0x00000018u); // 800D6D44
  c->r[7]=0u+0x80390000u; // 800D6D48
  {uint32_t ea=c->r[7]+0xFFFFCCC8u; W32(ea,c->r[6]); c->r[7]=ea;} // 800D6D4C
  c->r[5]=R32(c->r[1]+0x0000001Cu); // 800D6D50
  c->r[4]=R32(c->r[1]+0x00000020u); // 800D6D54
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D6D58
  W32(c->r[7]+0x00000004u,c->r[5]); // 800D6D5C
  W32(c->r[7]+0x00000008u,c->r[4]); // 800D6D60
  W32(c->r[7]+0x0000000Cu,c->r[0]); // 800D6D64
L_800D6D68:;
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D6D68
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D6D6C
  c->lr=c->r[0]; // 800D6D70
  c->r[1]=c->r[1]+0x00000040u; // 800D6D74
  return; // 800D6D78
}

// TRKInterruptHandler
void f_800D6D7C(Ctx* __restrict c) {
  trace_call(0x800D6D7Cu);
  mtspr(c,26,c->r[2]); // 800D6D7C
  mtspr(c,27,c->r[4]); // 800D6D80
  c->r[4]=mfspr(c,275); // 800D6D84
  c->r[2]=c->cr; // 800D6D88
  mtspr(c,275,c->r[2]); // 800D6D8C
  c->r[2]=0u+0x803D0000u; // 800D6D90
  c->r[2]=c->r[2]|0x00006718u; // 800D6D94
  c->r[2]=R32(c->r[2]+0x0000008Cu); // 800D6D98
  c->r[2]=c->r[2]|0x00008002u; // 800D6D9C
  c->r[2]=c->r[2]^0x00008002u; // 800D6DA0
  /* sync */ // 800D6DA4
  c->msr=c->r[2]; // 800D6DA8
  /* sync */ // 800D6DAC
  c->r[2]=0u+0x804D0000u; // 800D6DB0
  c->r[2]=c->r[2]|0x00004E60u; // 800D6DB4
  W16(c->r[2]+0x00000000u,c->r[3]); // 800D6DB8
  cmps(c,0,(int32_t)c->r[3],1280); // 800D6DBC
  if (!crb(c,2)) { goto L_800D6E44; } // 800D6DC0
  c->r[2]=0u+0x803D0000u; // 800D6DC4
  c->r[2]=c->r[2]|0x000067C0u; // 800D6DC8
  c->r[3]=c->lr; // 800D6DCC
  W32(c->r[2]+0x0000042Cu,c->r[3]); // 800D6DD0
  c->lr=0x800D6DD8u; f_800D3BCC(c); // 800D6DD4
  c->r[2]=0u+0x803D0000u; // 800D6DD8
  c->r[2]=c->r[2]|0x000067C0u; // 800D6DDC
  c->r[3]=R32(c->r[2]+0x0000042Cu); // 800D6DE0
  c->lr=c->r[3]; // 800D6DE4
  c->r[2]=0u+0x803D0000u; // 800D6DE8
  c->r[2]=c->r[2]|0x00006718u; // 800D6DEC
  c->r[2]=R32(c->r[2]+0x000000A0u); // 800D6DF0
  c->r[2]=R8(c->r[2]+0x00000000u); // 800D6DF4
  cmps(c,0,(int32_t)c->r[2],0); // 800D6DF8
  if (crb(c,2)) { goto L_800D6E28; } // 800D6DFC
  c->r[2]=0u+0x80380000u; // 800D6E00
  c->r[2]=c->r[2]|0x0000CCC8u; // 800D6E04
  c->r[2]=R8(c->r[2]+0x0000000Cu); // 800D6E08
  cmps(c,0,(int32_t)c->r[2],1); // 800D6E0C
  if (crb(c,2)) { goto L_800D6E28; } // 800D6E10
  c->r[2]=0u+0x803D0000u; // 800D6E14
  c->r[2]=c->r[2]|0x00006718u; // 800D6E18
  c->r[3]=0u+0x00000001u; // 800D6E1C
  W8(c->r[2]+0x0000009Cu,c->r[3]); // 800D6E20
  goto L_800D6E44; // 800D6E24
L_800D6E28:;
  c->r[2]=0u+0x803D0000u; // 800D6E28
  c->r[2]=c->r[2]|0x00006670u; // 800D6E2C
  c->r[3]=R32(c->r[2]+0x00000088u); // 800D6E30
  c->cr=(c->cr&~0xFFFFFFFFu)|(c->r[3]&0xFFFFFFFFu); // 800D6E34
  c->r[3]=R32(c->r[2]+0x0000000Cu); // 800D6E38
  c->r[2]=R32(c->r[2]+0x00000008u); // 800D6E3C
  return; /* rfi */ // 800D6E40
L_800D6E44:;
  c->r[2]=0u+0x804D0000u; // 800D6E44
  c->r[2]=c->r[2]|0x00004E60u; // 800D6E48
  c->r[3]=R16(c->r[2]+0x00000000u); // 800D6E4C
  c->r[2]=0u+0x80380000u; // 800D6E50
  c->r[2]=c->r[2]|0x0000CCC8u; // 800D6E54
  c->r[2]=R8(c->r[2]+0x0000000Cu); // 800D6E58
  cmps(c,0,(int32_t)c->r[2],0); // 800D6E5C
  if (!crb(c,2)) { goto L_800D6F10; } // 800D6E60
  c->r[2]=0u+0x803D0000u; // 800D6E64
  c->r[2]=c->r[2]|0x000067C0u; // 800D6E68
  W32(c->r[2]+0x00000000u,c->r[0]); // 800D6E6C
  W32(c->r[2]+0x00000004u,c->r[1]); // 800D6E70
  c->r[0]=mfspr(c,273); // 800D6E74
  W32(c->r[2]+0x00000008u,c->r[0]); // 800D6E78
  W16(c->r[2]+0x000002F8u,c->r[3]); // 800D6E7C
  W16(c->r[2]+0x000002FAu,c->r[3]); // 800D6E80
  c->r[0]=mfspr(c,274); // 800D6E84
  W32(c->r[2]+0x0000000Cu,c->r[0]); // 800D6E88
  {uint32_t ea=c->r[2]+0x00000010u; for(int i=4;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D6E8C
  c->r[27]=mfspr(c,26); // 800D6E90
  c->r[28]=c->lr; // 800D6E94
  c->r[29]=mfspr(c,275); // 800D6E98
  c->r[30]=c->ctr; // 800D6E9C
  c->r[31]=mfspr(c,1); // 800D6EA0
  {uint32_t ea=c->r[2]+0x00000080u; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D6EA4
  c->lr=0x800D6EACu; f_800D48A8(c); // 800D6EA8
  c->r[2]=0u+0x80380000u; // 800D6EAC
  c->r[2]=c->r[2]|0x0000CCC8u; // 800D6EB0
  c->r[3]=0u+0x00000001u; // 800D6EB4
  W8(c->r[2]+0x0000000Cu,c->r[3]); // 800D6EB8
  c->r[2]=0u+0x803D0000u; // 800D6EBC
  c->r[2]=c->r[2]|0x00006718u; // 800D6EC0
  c->r[0]=R32(c->r[2]+0x0000008Cu); // 800D6EC4
  /* sync */ // 800D6EC8
  c->msr=c->r[0]; // 800D6ECC
  /* sync */ // 800D6ED0
  c->r[0]=R32(c->r[2]+0x00000080u); // 800D6ED4
  c->lr=c->r[0]; // 800D6ED8
  c->r[0]=R32(c->r[2]+0x00000084u); // 800D6EDC
  c->ctr=c->r[0]; // 800D6EE0
  c->r[0]=R32(c->r[2]+0x00000088u); // 800D6EE4
  mtspr(c,1,c->r[0]); // 800D6EE8
  c->r[0]=R32(c->r[2]+0x00000094u); // 800D6EEC
  mtspr(c,18,c->r[0]); // 800D6EF0
  c->r[0]=R32(c->r[2]+0x00000090u); // 800D6EF4
  mtspr(c,19,c->r[0]); // 800D6EF8
  {uint32_t ea=c->r[2]+0x0000000Cu; for(int i=3;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D6EFC
  c->r[0]=R32(c->r[2]+0x00000000u); // 800D6F00
  c->r[1]=R32(c->r[2]+0x00000004u); // 800D6F04
  c->r[2]=R32(c->r[2]+0x00000008u); // 800D6F08
  f_800D6FAC(c); return; // 800D6F0C
L_800D6F10:;
  c->r[2]=0u+0x80380000u; // 800D6F10
  c->r[2]=c->r[2]|0x0000CCC8u; // 800D6F14
  W16(c->r[2]+0x00000008u,c->r[3]); // 800D6F18
  c->r[3]=mfspr(c,26); // 800D6F1C
  W32(c->r[2]+0x00000000u,c->r[3]); // 800D6F20
  c->r[3]=R16(c->r[2]+0x00000008u); // 800D6F24
  cmps(c,0,(int32_t)c->r[3],512); // 800D6F28
  if (crb(c,2)) { goto L_800D6F7C; } // 800D6F2C
  cmps(c,0,(int32_t)c->r[3],768); // 800D6F30
  if (crb(c,2)) { goto L_800D6F7C; } // 800D6F34
  cmps(c,0,(int32_t)c->r[3],1024); // 800D6F38
  if (crb(c,2)) { goto L_800D6F7C; } // 800D6F3C
  cmps(c,0,(int32_t)c->r[3],1536); // 800D6F40
  if (crb(c,2)) { goto L_800D6F7C; } // 800D6F44
  cmps(c,0,(int32_t)c->r[3],1792); // 800D6F48
  if (crb(c,2)) { goto L_800D6F7C; } // 800D6F4C
  cmps(c,0,(int32_t)c->r[3],2048); // 800D6F50
  if (crb(c,2)) { goto L_800D6F7C; } // 800D6F54
  cmps(c,0,(int32_t)c->r[3],4096); // 800D6F58
  if (crb(c,2)) { goto L_800D6F7C; } // 800D6F5C
  cmps(c,0,(int32_t)c->r[3],4352); // 800D6F60
  if (crb(c,2)) { goto L_800D6F7C; } // 800D6F64
  cmps(c,0,(int32_t)c->r[3],4608); // 800D6F68
  if (crb(c,2)) { goto L_800D6F7C; } // 800D6F6C
  cmps(c,0,(int32_t)c->r[3],4864); // 800D6F70
  if (crb(c,2)) { goto L_800D6F7C; } // 800D6F74
  goto L_800D6F88; // 800D6F78
L_800D6F7C:;
  c->r[3]=mfspr(c,26); // 800D6F7C
  c->r[3]=c->r[3]+0x00000004u; // 800D6F80
  mtspr(c,26,c->r[3]); // 800D6F84
L_800D6F88:;
  c->r[2]=0u+0x80380000u; // 800D6F88
  c->r[2]=c->r[2]|0x0000CCC8u; // 800D6F8C
  c->r[3]=0u+0x00000001u; // 800D6F90
  W8(c->r[2]+0x0000000Du,c->r[3]); // 800D6F94
  c->r[3]=mfspr(c,275); // 800D6F98
  c->cr=(c->cr&~0xFFFFFFFFu)|(c->r[3]&0xFFFFFFFFu); // 800D6F9C
  c->r[2]=mfspr(c,273); // 800D6FA0
  c->r[3]=mfspr(c,274); // 800D6FA4
  return; /* rfi */ // 800D6FA8
  f_800D6FAC(c);
}

// TRKPostInterruptEvent
void f_800D6FAC(Ctx* __restrict c) {
  trace_call(0x800D6FACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D6FAC
  c->r[0]=c->lr; // 800D6FB0
  c->r[3]=0u+0x803D0000u; // 800D6FB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D6FB8
  c->r[3]=c->r[3]+0x00006718u; // 800D6FBC
  c->r[0]=R32(c->r[3]+0x0000009Cu); // 800D6FC0
  cmps(c,0,(int32_t)c->r[0],0); // 800D6FC4
  if (crb(c,2)) { goto L_800D6FD8; } // 800D6FC8
  c->r[0]=0u+0x00000000u; // 800D6FCC
  W32(c->r[3]+0x0000009Cu,c->r[0]); // 800D6FD0
  goto L_800D7054; // 800D6FD4
L_800D6FD8:;
  c->r[3]=0u+0x803D0000u; // 800D6FD8
  c->r[3]=c->r[3]+0x000067C0u; // 800D6FDC
  c->r[0]=R32(c->r[3]+0x000002F8u); // 800D6FE0
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 800D6FE4
  cmps(c,0,(int32_t)c->r[0],1792); // 800D6FE8
  if (crb(c,2)) { goto L_800D6FF8; } // 800D6FEC
  cmps(c,0,(int32_t)c->r[0],3328); // 800D6FF0
  if (!crb(c,2)) { goto L_800D7040; } // 800D6FF4
L_800D6FF8:;
  c->r[3]=0u+0x803D0000u; // 800D6FF8
  c->r[0]=0u+0x00000004u; // 800D6FFC
  c->r[3]=c->r[3]+0x000067C0u; // 800D7000
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D7004
  c->r[4]=R32(c->r[3]+0x00000080u); // 800D7008
  c->r[3]=c->r[1]+0x0000000Cu; // 800D700C
  c->r[5]=c->r[1]+0x00000008u; // 800D7010
  c->r[6]=0u+0x00000000u; // 800D7014
  c->r[7]=0u+0x00000001u; // 800D7018
  c->lr=0x800D7020u; f_800D6724(c); // 800D701C
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800D7020
  c->r[0]=c->r[3]+0xF0200000u; // 800D7024
  cmpu(c,0,c->r[0],0x00000000u); // 800D7028
  if (!crb(c,2)) { goto L_800D7038; } // 800D702C
  c->r[4]=0u+0x00000005u; // 800D7030
  goto L_800D7044; // 800D7034
L_800D7038:;
  c->r[4]=0u+0x00000003u; // 800D7038
  goto L_800D7044; // 800D703C
L_800D7040:;
  c->r[4]=0u+0x00000004u; // 800D7040
L_800D7044:;
  c->r[3]=c->r[1]+0x00000010u; // 800D7044
  c->lr=0x800D704Cu; f_800D3F7C(c); // 800D7048
  c->r[3]=c->r[1]+0x00000010u; // 800D704C
  c->lr=0x800D7054u; f_800D3EB0(c); // 800D7050
L_800D7054:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D7054
  c->lr=c->r[0]; // 800D7058
  c->r[1]=c->r[1]+0x00000020u; // 800D705C
  return; // 800D7060
}

// TRKSwapAndGo
void f_800D7064(Ctx* __restrict c) {
  trace_call(0x800D7064u);
  c->r[3]=0u+0x803D0000u; // 800D7064
  c->r[3]=c->r[3]|0x00006718u; // 800D7068
  {uint32_t ea=c->r[3]+0x00000000u; for(int i=0;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D706C
  c->r[0]=c->msr; // 800D7070
  W32(c->r[3]+0x0000008Cu,c->r[0]); // 800D7074
  c->r[0]=c->lr; // 800D7078
  W32(c->r[3]+0x00000080u,c->r[0]); // 800D707C
  c->r[0]=c->ctr; // 800D7080
  W32(c->r[3]+0x00000084u,c->r[0]); // 800D7084
  c->r[0]=mfspr(c,1); // 800D7088
  W32(c->r[3]+0x00000088u,c->r[0]); // 800D708C
  c->r[0]=mfspr(c,18); // 800D7090
  W32(c->r[3]+0x00000094u,c->r[0]); // 800D7094
  c->r[0]=mfspr(c,19); // 800D7098
  W32(c->r[3]+0x00000090u,c->r[0]); // 800D709C
  c->r[1]=0u+0xFFFF8002u; // 800D70A0
  c->r[1]=~(c->r[1]|c->r[1]); // 800D70A4
  c->r[3]=c->msr; // 800D70A8
  c->r[3]=c->r[3]&c->r[1]; // 800D70AC
  c->msr=c->r[3]; // 800D70B0
  c->r[2]=0u+0x803D0000u; // 800D70B4
  c->r[2]=c->r[2]|0x00006718u; // 800D70B8
  c->r[2]=R32(c->r[2]+0x000000A0u); // 800D70BC
  c->r[2]=R8(c->r[2]+0x00000000u); // 800D70C0
  cmps(c,0,(int32_t)c->r[2],0); // 800D70C4
  if (crb(c,2)) { goto L_800D70E0; } // 800D70C8
  c->r[2]=0u+0x803D0000u; // 800D70CC
  c->r[2]=c->r[2]|0x00006718u; // 800D70D0
  c->r[3]=0u+0x00000001u; // 800D70D4
  W8(c->r[2]+0x0000009Cu,c->r[3]); // 800D70D8
  goto L_800D7128; // 800D70DC
L_800D70E0:;
  c->r[2]=0u+0x80380000u; // 800D70E0
  c->r[2]=c->r[2]|0x0000CCC8u; // 800D70E4
  c->r[3]=0u+0x00000000u; // 800D70E8
  W8(c->r[2]+0x0000000Cu,c->r[3]); // 800D70EC
  c->lr=0x800D70F4u; f_800D4A6C(c); // 800D70F0
  c->r[2]=0u+0x803D0000u; // 800D70F4
  c->r[2]=c->r[2]|0x000067C0u; // 800D70F8
  {uint32_t ea=c->r[2]+0x00000080u; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D70FC
  mtspr(c,26,c->r[27]); // 800D7100
  c->lr=c->r[28]; // 800D7104
  c->cr=(c->cr&~0xFFFFFFFFu)|(c->r[29]&0xFFFFFFFFu); // 800D7108
  c->ctr=c->r[30]; // 800D710C
  mtspr(c,1,c->r[31]); // 800D7110
  {uint32_t ea=c->r[2]+0x0000000Cu; for(int i=3;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D7114
  c->r[0]=R32(c->r[2]+0x00000000u); // 800D7118
  c->r[1]=R32(c->r[2]+0x00000004u); // 800D711C
  c->r[2]=R32(c->r[2]+0x00000008u); // 800D7120
  return; /* rfi */ // 800D7124
L_800D7128:;
  c->r[2]=0u+0x803D0000u; // 800D7128
  c->r[2]=c->r[2]|0x00006718u; // 800D712C
  c->r[0]=R32(c->r[2]+0x0000008Cu); // 800D7130
  /* sync */ // 800D7134
  c->msr=c->r[0]; // 800D7138
  /* sync */ // 800D713C
  c->r[0]=R32(c->r[2]+0x00000080u); // 800D7140
  c->lr=c->r[0]; // 800D7144
  c->r[0]=R32(c->r[2]+0x00000084u); // 800D7148
  c->ctr=c->r[0]; // 800D714C
  c->r[0]=R32(c->r[2]+0x00000088u); // 800D7150
  mtspr(c,1,c->r[0]); // 800D7154
  c->r[0]=R32(c->r[2]+0x00000094u); // 800D7158
  mtspr(c,18,c->r[0]); // 800D715C
  c->r[0]=R32(c->r[2]+0x00000090u); // 800D7160
  mtspr(c,19,c->r[0]); // 800D7164
  {uint32_t ea=c->r[2]+0x0000000Cu; for(int i=3;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D7168
  c->r[0]=R32(c->r[2]+0x00000000u); // 800D716C
  c->r[1]=R32(c->r[2]+0x00000004u); // 800D7170
  c->r[2]=R32(c->r[2]+0x00000008u); // 800D7174
  f_800D6FAC(c); return; // 800D7178
}

// TRKTargetInterrupt
void f_800D717C(Ctx* __restrict c) {
  trace_call(0x800D717Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D717C
  c->r[0]=c->lr; // 800D7180
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7184
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D7188
  c->r[31]=0u+0x00000000u; // 800D718C
  c->r[3]=R32(c->r[3]+0x00000000u); // 800D7190
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 800D7194
  cmpu(c,0,c->r[0],0x00000001u); // 800D7198
  if (crb(c,1)) { goto L_800D71C0; } // 800D719C
  c->lr=0x800D71A4u; f_800D7474(c); // 800D71A0
  cmps(c,0,(int32_t)c->r[3],0); // 800D71A4
  if (!crb(c,2)) { goto L_800D71C0; } // 800D71A8
  c->r[3]=0u+0x00000001u; // 800D71AC
  c->lr=0x800D71B4u; f_800D78A8(c); // 800D71B0
  c->r[3]=0u+0x00000090u; // 800D71B4
  c->lr=0x800D71BCu; f_800D3D70(c); // 800D71B8
  c->r[31]=c->r[3]|c->r[3]; // 800D71BC
L_800D71C0:;
  c->r[3]=c->r[31]|c->r[31]; // 800D71C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D71C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D71C8
  c->lr=c->r[0]; // 800D71CC
  c->r[1]=c->r[1]+0x00000010u; // 800D71D0
  return; // 800D71D4
}

// TRKTargetAddStopInfo
void f_800D71D8(Ctx* __restrict c) {
  trace_call(0x800D71D8u);
  {uint32_t ea=c->r[1]+0xFFFFFB90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D71D8
  c->r[0]=c->lr; // 800D71DC
  c->r[4]=0u+0x00000000u; // 800D71E0
  c->r[5]=0u+0x00000040u; // 800D71E4
  W32(c->r[1]+0x00000474u,c->r[0]); // 800D71E8
  W32(c->r[1]+0x0000046Cu,c->r[31]); // 800D71EC
  W32(c->r[1]+0x00000468u,c->r[30]); // 800D71F0
  W32(c->r[1]+0x00000464u,c->r[29]); // 800D71F4
  c->r[29]=c->r[3]|c->r[3]; // 800D71F8
  c->r[3]=c->r[1]+0x00000020u; // 800D71FC
  c->lr=0x800D7204u; f_800D3468(c); // 800D7200
  c->r[31]=0u+0x803D0000u; // 800D7204
  c->r[4]=0u+0x000004E8u; // 800D7208
  c->r[31]=c->r[31]+0x000067C0u; // 800D720C
  c->r[5]=0u+0x00000090u; // 800D7210
  c->r[0]=R32(c->r[31]+0x00000080u); // 800D7214
  c->r[3]=c->r[1]+0x00000014u; // 800D7218
  W32(c->r[1]+0x00000020u,c->r[4]); // 800D721C
  c->r[4]=c->r[1]+0x00000010u; // 800D7220
  W8(c->r[1]+0x00000024u,c->r[5]); // 800D7224
  W32(c->r[1]+0x00000028u,c->r[0]); // 800D7228
  c->lr=0x800D7230u; f_800D7CE4(c); // 800D722C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7230
  c->r[3]=0u+0x000000E4u; // 800D7234
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D7238
  c->lr=0x800D7240u; f_800D7CDC(c); // 800D723C
  c->r[3]=R32(c->r[3]+0x00000000u); // 800D7240
  c->r[0]=0u+0x00000004u; // 800D7244
  W32(c->r[1]+0x00000038u,c->r[3]); // 800D7248
  c->r[3]=c->r[1]+0x00000018u; // 800D724C
  c->r[4]=R32(c->r[31]+0x00000080u); // 800D7250
  c->r[5]=c->r[1]+0x00000008u; // 800D7254
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D7258
  c->r[6]=0u+0x00000000u; // 800D725C
  c->r[7]=0u+0x00000001u; // 800D7260
  c->lr=0x800D7268u; f_800D6724(c); // 800D7264
  c->r[0]=R32(c->r[31]+0x000002F8u); // 800D7268
  c->r[3]=c->r[29]|c->r[29]; // 800D726C
  c->r[5]=R32(c->r[1]+0x00000018u); // 800D7270
  c->r[4]=c->r[1]+0x00000020u; // 800D7274
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 800D7278
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 800D727C
  c->r[5]=0u+0x00000040u; // 800D7280
  W32(c->r[1]+0x00000030u,c->r[0]); // 800D7284
  c->lr=0x800D728Cu; f_800D508C(c); // 800D7288
  cmps(c,0,(int32_t)c->r[3],0); // 800D728C
  c->r[30]=c->r[3]|c->r[3]; // 800D7290
  if (!crb(c,2)) { goto L_800D7300; } // 800D7294
  c->r[30]=0u+0x00000000u; // 800D7298
L_800D729C:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 800D729C
  c->r[3]=c->r[29]|c->r[29]; // 800D72A0
  c->lr=0x800D72A8u; f_800D4EC8(c); // 800D72A4
  c->r[30]=c->r[30]+0x00000001u; // 800D72A8
  c->r[31]=c->r[31]+0x00000004u; // 800D72AC
  cmps(c,0,(int32_t)c->r[30],32); // 800D72B0
  if (crb(c,0)) { IRQCHK(c); goto L_800D729C; } // 800D72B4
  c->r[31]=0u+0x803D0000u; // 800D72B8
  c->r[3]=c->r[29]|c->r[29]; // 800D72BC
  c->r[31]=c->r[31]+0x000067C0u; // 800D72C0
  c->r[4]=R32(c->r[31]+0x00000080u); // 800D72C4
  c->lr=0x800D72CCu; f_800D4EC8(c); // 800D72C8
  c->r[4]=R32(c->r[31]+0x00000084u); // 800D72CC
  c->r[3]=c->r[29]|c->r[29]; // 800D72D0
  c->lr=0x800D72D8u; f_800D4EC8(c); // 800D72D4
  c->r[4]=R32(c->r[31]+0x00000088u); // 800D72D8
  c->r[3]=c->r[29]|c->r[29]; // 800D72DC
  c->lr=0x800D72E4u; f_800D4EC8(c); // 800D72E0
  c->r[4]=R32(c->r[31]+0x0000008Cu); // 800D72E4
  c->r[3]=c->r[29]|c->r[29]; // 800D72E8
  c->lr=0x800D72F0u; f_800D4EC8(c); // 800D72EC
  c->r[4]=R32(c->r[31]+0x00000090u); // 800D72F0
  c->r[3]=c->r[29]|c->r[29]; // 800D72F4
  c->lr=0x800D72FCu; f_800D4EC8(c); // 800D72F8
  c->r[30]=c->r[3]|c->r[3]; // 800D72FC
L_800D7300:;
  cmps(c,0,(int32_t)c->r[30],0); // 800D7300
  if (!crb(c,2)) { goto L_800D7370; } // 800D7304
  c->r[3]=0u+0x000000D4u; // 800D7308
  c->lr=0x800D7310u; f_800D7CDC(c); // 800D730C
  c->r[4]=R32(c->r[3]+0x00000000u); // 800D7310
  c->r[3]=c->r[29]|c->r[29]; // 800D7314
  c->lr=0x800D731Cu; f_800D4EC8(c); // 800D7318
  c->r[3]=0u+0x000000D8u; // 800D731C
  c->lr=0x800D7324u; f_800D7CDC(c); // 800D7320
  c->r[4]=R32(c->r[3]+0x00000000u); // 800D7324
  c->r[3]=c->r[29]|c->r[29]; // 800D7328
  c->lr=0x800D7330u; f_800D4EC8(c); // 800D732C
  c->r[3]=0u+0x000000DCu; // 800D7330
  c->lr=0x800D7338u; f_800D7CDC(c); // 800D7334
  c->r[4]=R32(c->r[3]+0x00000000u); // 800D7338
  c->r[3]=c->r[29]|c->r[29]; // 800D733C
  c->lr=0x800D7344u; f_800D4EC8(c); // 800D7340
  c->r[3]=0u+0x000000E0u; // 800D7344
  c->lr=0x800D734Cu; f_800D7CDC(c); // 800D7348
  c->r[4]=R32(c->r[3]+0x00000000u); // 800D734C
  c->r[3]=c->r[29]|c->r[29]; // 800D7350
  c->lr=0x800D7358u; f_800D4EC8(c); // 800D7354
  c->r[3]=0u+0x000000E4u; // 800D7358
  c->lr=0x800D7360u; f_800D7CDC(c); // 800D735C
  c->r[4]=R32(c->r[3]+0x00000000u); // 800D7360
  c->r[3]=c->r[29]|c->r[29]; // 800D7364
  c->lr=0x800D736Cu; f_800D4EC8(c); // 800D7368
  c->r[30]=c->r[3]|c->r[3]; // 800D736C
L_800D7370:;
  cmps(c,0,(int32_t)c->r[30],0); // 800D7370
  if (!crb(c,2)) { goto L_800D73B8; } // 800D7374
  c->r[3]=0u+0x803D0000u; // 800D7378
  c->r[0]=0u+0x00000400u; // 800D737C
  c->r[3]=c->r[3]+0x000067C0u; // 800D7380
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D7384
  c->r[0]=R32(c->r[3]+0x00000080u); // 800D7388
  c->r[3]=c->r[1]+0x00000060u; // 800D738C
  c->r[5]=c->r[1]+0x0000000Cu; // 800D7390
  c->r[6]=0u+0x00000000u; // 800D7394
  c->r[4]=rotl(c->r[0],0)&0xFFFFFC00u; // 800D7398
  c->r[7]=0u+0x00000001u; // 800D739C
  c->lr=0x800D73A4u; f_800D6724(c); // 800D73A0
  c->r[30]=c->r[3]|c->r[3]; // 800D73A4
  c->r[3]=c->r[29]|c->r[29]; // 800D73A8
  c->r[4]=c->r[1]+0x00000060u; // 800D73AC
  c->r[5]=0u+0x00000400u; // 800D73B0
  c->lr=0x800D73B8u; f_800D4D94(c); // 800D73B4
L_800D73B8:;
  c->r[3]=c->r[30]|c->r[30]; // 800D73B8
  c->r[31]=R32(c->r[1]+0x0000046Cu); // 800D73BC
  c->r[30]=R32(c->r[1]+0x00000468u); // 800D73C0
  c->r[29]=R32(c->r[1]+0x00000464u); // 800D73C4
  c->r[0]=R32(c->r[1]+0x00000474u); // 800D73C8
  c->lr=c->r[0]; // 800D73CC
  c->r[1]=c->r[1]+0x00000470u; // 800D73D0
  return; // 800D73D4
}

// TRKTargetAddExceptionInfo
void f_800D73D8(Ctx* __restrict c) {
  trace_call(0x800D73D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D73D8
  c->r[0]=c->lr; // 800D73DC
  c->r[4]=0u+0x00000000u; // 800D73E0
  c->r[5]=0u+0x00000040u; // 800D73E4
  W32(c->r[1]+0x00000064u,c->r[0]); // 800D73E8
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 800D73EC
  W32(c->r[1]+0x00000058u,c->r[30]); // 800D73F0
  c->r[30]=c->r[3]|c->r[3]; // 800D73F4
  c->r[3]=c->r[1]+0x00000010u; // 800D73F8
  c->lr=0x800D7400u; f_800D3468(c); // 800D73FC
  c->r[31]=0u+0x80390000u; // 800D7400
  c->r[3]=0u+0x00000040u; // 800D7404
  c->r[4]=R32(c->r[31]+0xFFFFCCC8u); // 800D7408
  c->r[5]=0u+0x00000091u; // 800D740C
  c->r[0]=0u+0x00000004u; // 800D7410
  W32(c->r[1]+0x00000010u,c->r[3]); // 800D7414
  c->r[3]=c->r[1]+0x0000000Cu; // 800D7418
  c->r[6]=0u+0x00000000u; // 800D741C
  W8(c->r[1]+0x00000014u,c->r[5]); // 800D7420
  c->r[5]=c->r[1]+0x00000008u; // 800D7424
  c->r[7]=0u+0x00000001u; // 800D7428
  W32(c->r[1]+0x00000018u,c->r[4]); // 800D742C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D7430
  c->lr=0x800D7438u; f_800D6724(c); // 800D7434
  c->r[3]=c->r[31]+0xFFFFCCC8u; // 800D7438
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800D743C
  c->r[0]=R16(c->r[3]+0x00000008u); // 800D7440
  c->r[3]=c->r[30]|c->r[30]; // 800D7444
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 800D7448
  c->r[4]=c->r[1]+0x00000010u; // 800D744C
  c->r[5]=0u+0x00000040u; // 800D7450
  W32(c->r[1]+0x00000020u,c->r[0]); // 800D7454
  c->lr=0x800D745Cu; f_800D508C(c); // 800D7458
  c->r[0]=R32(c->r[1]+0x00000064u); // 800D745C
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 800D7460
  c->r[30]=R32(c->r[1]+0x00000058u); // 800D7464
  c->lr=c->r[0]; // 800D7468
  c->r[1]=c->r[1]+0x00000060u; // 800D746C
  return; // 800D7470
}

// TRKTargetCheckStep
void f_800D7474(Ctx* __restrict c) {
  trace_call(0x800D7474u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7474
  c->r[0]=c->lr; // 800D7478
  c->r[3]=0u+0x803D0000u; // 800D747C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7480
  c->r[0]=R32(c->r[3]+0x00006658u); // 800D7484
  cmps(c,0,(int32_t)c->r[0],0); // 800D7488
  if (crb(c,2)) { goto L_800D7580; } // 800D748C
  c->r[4]=0u+0x803D0000u; // 800D7490
  c->r[5]=0u+0x00000001u; // 800D7494
  c->r[4]=c->r[4]+0x000067C0u; // 800D7498
  c->r[0]=R32(c->r[4]+0x000001F8u); // 800D749C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFBFFu; // 800D74A0
  c->r[0]=c->r[0]|0x00008000u; // 800D74A4
  W32(c->r[4]+0x000001F8u,c->r[0]); // 800D74A8
  if (crb(c,2)) { goto L_800D7510; } // 800D74AC
  c->r[0]=R32(c->r[4]+0x000002F8u); // 800D74B0
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 800D74B4
  cmpu(c,0,c->r[0],0x00000D00u); // 800D74B8
  if (!crb(c,2)) { goto L_800D7510; } // 800D74BC
  c->r[3]=c->r[3]+0x00006658u; // 800D74C0
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D74C4
  cmps(c,0,(int32_t)c->r[0],0); // 800D74C8
  if (crb(c,2)) { goto L_800D74DC; } // 800D74CC
  cmps(c,0,(int32_t)c->r[0],1); // 800D74D0
  if (crb(c,2)) { goto L_800D74F0; } // 800D74D4
  goto L_800D7510; // 800D74D8
L_800D74DC:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 800D74DC
  cmps(c,0,(int32_t)c->r[0],0); // 800D74E0
  if (crb(c,2)) { goto L_800D7510; } // 800D74E4
  c->r[5]=0u+0x00000000u; // 800D74E8
  goto L_800D7510; // 800D74EC
L_800D74F0:;
  c->r[4]=R32(c->r[4]+0x00000080u); // 800D74F0
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800D74F4
  cmpu(c,0,c->r[4],c->r[0]); // 800D74F8
  if (crb(c,0)) { goto L_800D7510; } // 800D74FC
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D7500
  cmpu(c,0,c->r[4],c->r[0]); // 800D7504
  if (crb(c,1)) { goto L_800D7510; } // 800D7508
  c->r[5]=0u+0x00000000u; // 800D750C
L_800D7510:;
  cmps(c,0,(int32_t)c->r[5],0); // 800D7510
  if (crb(c,2)) { goto L_800D7528; } // 800D7514
  c->r[3]=0u+0x803D0000u; // 800D7518
  c->r[0]=0u+0x00000000u; // 800D751C
  W32(c->r[3]+0x00006658u,c->r[0]); // 800D7520
  goto L_800D7580; // 800D7524
L_800D7528:;
  c->r[5]=0u+0x803D0000u; // 800D7528
  c->r[4]=0u+0x803D0000u; // 800D752C
  c->r[4]=c->r[4]+0x000067C0u; // 800D7530
  c->r[6]=0u+0x00000001u; // 800D7534
  c->r[3]=c->r[5]+0x00006658u; // 800D7538
  c->r[0]=R32(c->r[4]+0x000001F8u); // 800D753C
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D7540
  c->r[0]=c->r[0]|0x00000400u; // 800D7544
  W32(c->r[5]+0x00006658u,c->r[6]); // 800D7548
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 800D754C
  cmps(c,0,(int32_t)c->r[3],0); // 800D7550
  W32(c->r[4]+0x000001F8u,c->r[0]); // 800D7554
  if (crb(c,2)) { goto L_800D7564; } // 800D7558
  cmps(c,0,(int32_t)c->r[3],16); // 800D755C
  if (!crb(c,2)) { goto L_800D7578; } // 800D7560
L_800D7564:;
  c->r[4]=0u+0x803D0000u; // 800D7564
  c->r[4]=c->r[4]+0x00006658u; // 800D7568
  c->r[3]=R32(c->r[4]+0x00000008u); // 800D756C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800D7570
  W32(c->r[4]+0x00000008u,c->r[0]); // 800D7574
L_800D7578:;
  c->r[3]=0u+0x00000000u; // 800D7578
  c->lr=0x800D7580u; f_800D78A8(c); // 800D757C
L_800D7580:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7580
  c->r[3]=0u+0x803D0000u; // 800D7584
  c->r[3]=R32(c->r[3]+0x00006658u); // 800D7588
  c->lr=c->r[0]; // 800D758C
  c->r[1]=c->r[1]+0x00000010u; // 800D7590
  return; // 800D7594
}

// TRKTargetSingleStep
void f_800D7598(Ctx* __restrict c) {
  trace_call(0x800D7598u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7598
  c->r[0]=c->lr; // 800D759C
  cmps(c,0,(int32_t)c->r[4],0); // 800D75A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D75A4
  if (crb(c,2)) { goto L_800D75B4; } // 800D75A8
  c->r[3]=0u+0x00000703u; // 800D75AC
  goto L_800D7610; // 800D75B0
L_800D75B4:;
  c->r[4]=0u+0x803D0000u; // 800D75B4
  c->r[7]=0u+0x803D0000u; // 800D75B8
  c->r[4]=c->r[4]+0x000067C0u; // 800D75BC
  c->r[5]=0u+0x00000001u; // 800D75C0
  c->r[0]=R32(c->r[4]+0x000001F8u); // 800D75C4
  c->r[6]=c->r[7]+0x00006658u; // 800D75C8
  c->r[8]=0u+0x00000000u; // 800D75CC
  W32(c->r[6]+0x00000004u,c->r[8]); // 800D75D0
  c->r[0]=c->r[0]|0x00000400u; // 800D75D4
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 800D75D8
  W32(c->r[6]+0x00000008u,c->r[3]); // 800D75DC
  W32(c->r[7]+0x00006658u,c->r[5]); // 800D75E0
  W32(c->r[4]+0x000001F8u,c->r[0]); // 800D75E4
  goto L_800D75F0; // 800D75E8
  if (!crb(c,2)) { goto L_800D7604; } // 800D75EC
L_800D75F0:;
  c->r[4]=0u+0x803D0000u; // 800D75F0
  c->r[4]=c->r[4]+0x00006658u; // 800D75F4
  c->r[3]=R32(c->r[4]+0x00000008u); // 800D75F8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800D75FC
  W32(c->r[4]+0x00000008u,c->r[0]); // 800D7600
L_800D7604:;
  c->r[3]=0u+0x00000000u; // 800D7604
  c->lr=0x800D760Cu; f_800D78A8(c); // 800D7608
  c->r[3]=0u+0x00000000u; // 800D760C
L_800D7610:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7610
  c->lr=c->r[0]; // 800D7614
  c->r[1]=c->r[1]+0x00000010u; // 800D7618
  return; // 800D761C
}

// TRKTargetStepOutOfRange
void f_800D7620(Ctx* __restrict c) {
  trace_call(0x800D7620u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7620
  c->r[0]=c->lr; // 800D7624
  cmps(c,0,(int32_t)c->r[5],0); // 800D7628
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D762C
  if (crb(c,2)) { goto L_800D763C; } // 800D7630
  c->r[3]=0u+0x00000703u; // 800D7634
  goto L_800D7684; // 800D7638
L_800D763C:;
  c->r[5]=0u+0x803D0000u; // 800D763C
  c->r[7]=0u+0x803D0000u; // 800D7640
  c->r[5]=c->r[5]+0x000067C0u; // 800D7644
  c->r[8]=0u+0x00000001u; // 800D7648
  c->r[0]=R32(c->r[5]+0x000001F8u); // 800D764C
  c->r[6]=c->r[7]+0x00006658u; // 800D7650
  W32(c->r[6]+0x00000004u,c->r[8]); // 800D7654
  c->r[0]=c->r[0]|0x00000400u; // 800D7658
  c->r[0]=rotl(c->r[0],0)&0xFFFF7FFFu; // 800D765C
  W32(c->r[6]+0x0000000Cu,c->r[3]); // 800D7660
  W32(c->r[6]+0x00000010u,c->r[4]); // 800D7664
  W32(c->r[7]+0x00006658u,c->r[8]); // 800D7668
  W32(c->r[5]+0x000001F8u,c->r[0]); // 800D766C
  goto L_800D7678; // 800D7670
  W32(c->r[4]+0x00000008u,c->r[0]); // 800D7674
L_800D7678:;
  c->r[3]=0u+0x00000000u; // 800D7678
  c->lr=0x800D7680u; f_800D78A8(c); // 800D767C
  c->r[3]=0u+0x00000000u; // 800D7680
L_800D7684:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7684
  c->lr=c->r[0]; // 800D7688
  c->r[1]=c->r[1]+0x00000010u; // 800D768C
  return; // 800D7690
}

// TRKTargetGetPC
void f_800D7694(Ctx* __restrict c) {
  trace_call(0x800D7694u);
  c->r[3]=0u+0x803D0000u; // 800D7694
  c->r[3]=c->r[3]+0x000067C0u; // 800D7698
  c->r[3]=R32(c->r[3]+0x00000080u); // 800D769C
  return; // 800D76A0
}

// TRKTargetSupportRequest
void f_800D76A4(Ctx* __restrict c) {
  trace_call(0x800D76A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D76A4
  c->r[0]=c->lr; // 800D76A8
  c->r[7]=0u+0x803D0000u; // 800D76AC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D76B0
  c->r[7]=c->r[7]+0x000067C0u; // 800D76B4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800D76B8
  W32(c->r[1]+0x00000028u,c->r[30]); // 800D76BC
  W32(c->r[1]+0x00000024u,c->r[29]); // 800D76C0
  c->r[29]=R32(c->r[7]+0x0000000Cu); // 800D76C4
  c->r[0]=c->r[29]+0xFFFFFF30u; // 800D76C8
  cmpu(c,0,c->r[0],0x00000001u); // 800D76CC
  if (!crb(c,1)) { goto L_800D77F8; } // 800D76D0
  cmps(c,0,(int32_t)c->r[29],210); // 800D76D4
  if (crb(c,2)) { goto L_800D7708; } // 800D76D8
  cmps(c,0,(int32_t)c->r[29],211); // 800D76DC
  if (crb(c,2)) { goto L_800D7754; } // 800D76E0
  cmps(c,0,(int32_t)c->r[29],212); // 800D76E4
  if (crb(c,2)) { goto L_800D7794; } // 800D76E8
  c->r[3]=c->r[1]+0x00000010u; // 800D76EC
  c->r[4]=0u+0x00000004u; // 800D76F0
  c->lr=0x800D76F8u; f_800D3F7C(c); // 800D76F4
  c->r[3]=c->r[1]+0x00000010u; // 800D76F8
  c->lr=0x800D7700u; f_800D3EB0(c); // 800D76FC
  c->r[3]=0u+0x00000000u; // 800D7700
  goto L_800D787C; // 800D7704
L_800D7708:;
  c->r[0]=R32(c->r[7]+0x00000014u); // 800D7708
  c->r[6]=c->r[1]+0x0000000Cu; // 800D770C
  c->r[3]=R32(c->r[7]+0x00000010u); // 800D7710
  c->r[5]=R32(c->r[7]+0x00000018u); // 800D7714
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 800D7718
  c->lr=0x800D7720u; f_800D456C(c); // 800D771C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800D7720
  c->r[31]=c->r[3]|c->r[3]; // 800D7724
  cmps(c,0,(int32_t)c->r[0],0); // 800D7728
  if (!crb(c,2)) { goto L_800D7740; } // 800D772C
  cmps(c,0,(int32_t)c->r[3],0); // 800D7730
  if (crb(c,2)) { goto L_800D7740; } // 800D7734
  c->r[0]=0u+0x00000001u; // 800D7738
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D773C
L_800D7740:;
  c->r[3]=0u+0x803D0000u; // 800D7740
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800D7744
  c->r[3]=c->r[3]+0x000067C0u; // 800D7748
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800D774C
  goto L_800D7864; // 800D7750
L_800D7754:;
  c->r[3]=R32(c->r[7]+0x00000010u); // 800D7754
  c->r[4]=c->r[1]+0x0000000Cu; // 800D7758
  c->lr=0x800D7760u; f_800D4684(c); // 800D775C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800D7760
  c->r[31]=c->r[3]|c->r[3]; // 800D7764
  cmps(c,0,(int32_t)c->r[0],0); // 800D7768
  if (!crb(c,2)) { goto L_800D7780; } // 800D776C
  cmps(c,0,(int32_t)c->r[3],0); // 800D7770
  if (crb(c,2)) { goto L_800D7780; } // 800D7774
  c->r[0]=0u+0x00000001u; // 800D7778
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D777C
L_800D7780:;
  c->r[3]=0u+0x803D0000u; // 800D7780
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800D7784
  c->r[3]=c->r[3]+0x000067C0u; // 800D7788
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800D778C
  goto L_800D7864; // 800D7790
L_800D7794:;
  c->r[3]=R32(c->r[7]+0x00000014u); // 800D7794
  c->r[4]=c->r[1]+0x00000008u; // 800D7798
  c->r[0]=R32(c->r[7]+0x00000018u); // 800D779C
  c->r[6]=c->r[1]+0x0000000Cu; // 800D77A0
  c->r[3]=R32(c->r[3]+0x00000000u); // 800D77A4
  W32(c->r[1]+0x00000008u,c->r[3]); // 800D77A8
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 800D77AC
  c->r[3]=R32(c->r[7]+0x00000010u); // 800D77B0
  c->lr=0x800D77B8u; f_800D4768(c); // 800D77B4
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800D77B8
  c->r[31]=c->r[3]|c->r[3]; // 800D77BC
  cmps(c,0,(int32_t)c->r[0],0); // 800D77C0
  if (!crb(c,2)) { goto L_800D77D8; } // 800D77C4
  cmps(c,0,(int32_t)c->r[3],0); // 800D77C8
  if (crb(c,2)) { goto L_800D77D8; } // 800D77CC
  c->r[0]=0u+0x00000001u; // 800D77D0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D77D4
L_800D77D8:;
  c->r[3]=0u+0x803D0000u; // 800D77D8
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800D77DC
  c->r[3]=c->r[3]+0x000067C0u; // 800D77E0
  c->r[0]=R32(c->r[1]+0x00000008u); // 800D77E4
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 800D77E8
  c->r[3]=R32(c->r[3]+0x00000014u); // 800D77EC
  W32(c->r[3]+0x00000000u,c->r[0]); // 800D77F0
  goto L_800D7864; // 800D77F4
L_800D77F8:;
  c->r[0]=c->r[29]+0xFFFFFF2Fu; // 800D77F8
  c->r[30]=R32(c->r[7]+0x00000014u); // 800D77FC
  c->r[0]=cntlz(c->r[0]); // 800D7800
  c->r[3]=R32(c->r[7]+0x00000010u); // 800D7804
  c->r[4]=R32(c->r[7]+0x00000018u); // 800D7808
  c->r[5]=c->r[30]|c->r[30]; // 800D780C
  c->r[6]=c->r[1]+0x0000000Cu; // 800D7810
  c->r[8]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D7814
  c->r[7]=0u+0x00000001u; // 800D7818
  c->lr=0x800D7820u; f_800D4250(c); // 800D781C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800D7820
  c->r[31]=c->r[3]|c->r[3]; // 800D7824
  cmps(c,0,(int32_t)c->r[0],0); // 800D7828
  if (!crb(c,2)) { goto L_800D7840; } // 800D782C
  cmps(c,0,(int32_t)c->r[3],0); // 800D7830
  if (crb(c,2)) { goto L_800D7840; } // 800D7834
  c->r[0]=0u+0x00000001u; // 800D7838
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D783C
L_800D7840:;
  c->r[3]=0u+0x803D0000u; // 800D7840
  cmps(c,0,(int32_t)c->r[29],209); // 800D7844
  c->r[3]=c->r[3]+0x000067C0u; // 800D7848
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800D784C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800D7850
  if (!crb(c,2)) { goto L_800D7864; } // 800D7854
  c->r[3]=R32(c->r[3]+0x00000018u); // 800D7858
  c->r[4]=R32(c->r[30]+0x00000000u); // 800D785C
  c->lr=0x800D7864u; f_800D31CC(c); // 800D7860
L_800D7864:;
  c->r[5]=0u+0x803D0000u; // 800D7864
  c->r[3]=c->r[31]|c->r[31]; // 800D7868
  c->r[5]=c->r[5]+0x000067C0u; // 800D786C
  c->r[4]=R32(c->r[5]+0x00000080u); // 800D7870
  c->r[0]=c->r[4]+0x00000004u; // 800D7874
  W32(c->r[5]+0x00000080u,c->r[0]); // 800D7878
L_800D787C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D787C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800D7880
  c->r[30]=R32(c->r[1]+0x00000028u); // 800D7884
  c->r[29]=R32(c->r[1]+0x00000024u); // 800D7888
  c->lr=c->r[0]; // 800D788C
  c->r[1]=c->r[1]+0x00000030u; // 800D7890
  return; // 800D7894
}

// TRKTargetStopped
void f_800D7898(Ctx* __restrict c) {
  trace_call(0x800D7898u);
  c->r[3]=0u+0x803D0000u; // 800D7898
  c->r[3]=c->r[3]+0x00006718u; // 800D789C
  c->r[3]=R32(c->r[3]+0x00000098u); // 800D78A0
  return; // 800D78A4
}

// TRKTargetSetStopped
void f_800D78A8(Ctx* __restrict c) {
  trace_call(0x800D78A8u);
  c->r[4]=0u+0x803D0000u; // 800D78A8
  c->r[4]=c->r[4]+0x00006718u; // 800D78AC
  W32(c->r[4]+0x00000098u,c->r[3]); // 800D78B0
  return; // 800D78B4
}

// TRKTargetStop
void f_800D78B8(Ctx* __restrict c) {
  trace_call(0x800D78B8u);
  c->r[4]=0u+0x803D0000u; // 800D78B8
  c->r[0]=0u+0x00000001u; // 800D78BC
  c->r[4]=c->r[4]+0x00006718u; // 800D78C0
  c->r[3]=0u+0x00000000u; // 800D78C4
  W32(c->r[4]+0x00000098u,c->r[0]); // 800D78C8
  return; // 800D78CC
}

// TRKPPCAccessSPR
void f_800D78D0(Ctx* __restrict c) {
  trace_call(0x800D78D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D78D0
  c->r[0]=c->lr; // 800D78D4
  cmps(c,0,(int32_t)c->r[5],0); // 800D78D8
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D78DC
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800D78E0
  W32(c->r[1]+0x00000038u,c->r[30]); // 800D78E4
  W32(c->r[1]+0x00000034u,c->r[29]); // 800D78E8
  c->r[29]=0u+0x80380000u; // 800D78EC
  {uint32_t ea=c->r[29]+0xFFFFDFD0u; c->r[30]=R32(ea); c->r[29]=ea;} // 800D78F0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D78F4
  c->r[31]=R32(c->r[29]+0x00000004u); // 800D78F8
  c->r[12]=R32(c->r[29]+0x00000008u); // 800D78FC
  c->r[11]=R32(c->r[29]+0x0000000Cu); // 800D7900
  c->r[10]=R32(c->r[29]+0x00000010u); // 800D7904
  c->r[9]=R32(c->r[29]+0x00000014u); // 800D7908
  c->r[8]=R32(c->r[29]+0x00000018u); // 800D790C
  c->r[7]=R32(c->r[29]+0x0000001Cu); // 800D7910
  c->r[6]=R32(c->r[29]+0x00000020u); // 800D7914
  c->r[0]=R32(c->r[29]+0x00000024u); // 800D7918
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D791C
  W32(c->r[1]+0x00000010u,c->r[12]); // 800D7920
  W32(c->r[1]+0x00000014u,c->r[11]); // 800D7924
  W32(c->r[1]+0x00000018u,c->r[10]); // 800D7928
  W32(c->r[1]+0x0000001Cu,c->r[9]); // 800D792C
  W32(c->r[1]+0x00000020u,c->r[8]); // 800D7930
  W32(c->r[1]+0x00000024u,c->r[7]); // 800D7934
  W32(c->r[1]+0x00000028u,c->r[6]); // 800D7938
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800D793C
  if (crb(c,2)) { goto L_800D7968; } // 800D7940
  c->r[0]=rotl(c->r[4],6)&0x0003F800u; // 800D7944
  c->r[4]=rotl(c->r[4],16)&0x001F0000u; // 800D7948
  c->r[6]=c->r[0]|0x7C800000u; // 800D794C
  c->r[0]=0u+0x90830000u; // 800D7950
  c->r[4]=c->r[4]|0x000002A6u; // 800D7954
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D7958
  c->r[0]=c->r[6]|c->r[4]; // 800D795C
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D7960
  goto L_800D7988; // 800D7964
L_800D7968:;
  c->r[0]=rotl(c->r[4],16)&0x001F0000u; // 800D7968
  c->r[6]=rotl(c->r[4],6)&0x0003F800u; // 800D796C
  c->r[4]=c->r[6]|0x7C800000u; // 800D7970
  c->r[0]=c->r[0]|0x000003A6u; // 800D7974
  c->r[6]=0u+0x80830000u; // 800D7978
  c->r[0]=c->r[4]|c->r[0]; // 800D797C
  W32(c->r[1]+0x00000008u,c->r[6]); // 800D7980
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D7984
L_800D7988:;
  c->r[4]=c->r[1]+0x00000008u; // 800D7988
  c->lr=0x800D7990u; f_800D7C64(c); // 800D798C
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D7990
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800D7994
  c->r[30]=R32(c->r[1]+0x00000038u); // 800D7998
  c->r[29]=R32(c->r[1]+0x00000034u); // 800D799C
  c->lr=c->r[0]; // 800D79A0
  c->r[1]=c->r[1]+0x00000040u; // 800D79A4
  return; // 800D79A8
}

// TRKPPCAccessPairedSingleRegister
void f_800D79AC(Ctx* __restrict c) {
  trace_call(0x800D79ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D79AC
  c->r[0]=c->lr; // 800D79B0
  c->r[6]=0u+0x80380000u; // 800D79B4
  cmps(c,0,(int32_t)c->r[5],0); // 800D79B8
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D79BC
  c->r[0]=rotl(c->r[4],21)&0xFFE00000u; // 800D79C0
  c->r[4]=c->r[0]|0xE0030000u; // 800D79C4
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800D79C8
  W32(c->r[1]+0x00000038u,c->r[30]); // 800D79CC
  W32(c->r[1]+0x00000034u,c->r[29]); // 800D79D0
  {uint32_t ea=c->r[6]+0xFFFFDFF8u; c->r[29]=R32(ea); c->r[6]=ea;} // 800D79D4
  W32(c->r[1]+0x00000008u,c->r[29]); // 800D79D8
  c->r[30]=R32(c->r[6]+0x00000004u); // 800D79DC
  c->r[31]=R32(c->r[6]+0x00000008u); // 800D79E0
  c->r[12]=R32(c->r[6]+0x0000000Cu); // 800D79E4
  c->r[11]=R32(c->r[6]+0x00000010u); // 800D79E8
  c->r[10]=R32(c->r[6]+0x00000014u); // 800D79EC
  c->r[9]=R32(c->r[6]+0x00000018u); // 800D79F0
  c->r[8]=R32(c->r[6]+0x0000001Cu); // 800D79F4
  c->r[7]=R32(c->r[6]+0x00000020u); // 800D79F8
  c->r[6]=R32(c->r[6]+0x00000024u); // 800D79FC
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 800D7A00
  W32(c->r[1]+0x00000010u,c->r[31]); // 800D7A04
  W32(c->r[1]+0x00000014u,c->r[12]); // 800D7A08
  W32(c->r[1]+0x00000018u,c->r[11]); // 800D7A0C
  W32(c->r[1]+0x0000001Cu,c->r[10]); // 800D7A10
  W32(c->r[1]+0x00000020u,c->r[9]); // 800D7A14
  W32(c->r[1]+0x00000024u,c->r[8]); // 800D7A18
  W32(c->r[1]+0x00000028u,c->r[7]); // 800D7A1C
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 800D7A20
  if (crb(c,2)) { goto L_800D7A2C; } // 800D7A24
  c->r[4]=c->r[0]|0xF0030000u; // 800D7A28
L_800D7A2C:;
  W32(c->r[1]+0x00000008u,c->r[4]); // 800D7A2C
  c->r[4]=c->r[1]+0x00000008u; // 800D7A30
  c->lr=0x800D7A38u; f_800D7C64(c); // 800D7A34
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D7A38
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800D7A3C
  c->r[30]=R32(c->r[1]+0x00000038u); // 800D7A40
  c->r[29]=R32(c->r[1]+0x00000034u); // 800D7A44
  c->lr=c->r[0]; // 800D7A48
  c->r[1]=c->r[1]+0x00000040u; // 800D7A4C
  return; // 800D7A50
}

// ReadFPSCR
void f_800D7A54(Ctx* __restrict c) {
  trace_call(0x800D7A54u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7A54
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800D7A58
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,31,ea,0,0);} // 800D7A5C
  c->f[31]=u2d((uint64_t)c->fpscr); // 800D7A60
  {uint32_t ea=c->r[3]+0x00000000u; WF64(ea,c->f[31]);} // 800D7A64
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,31,ea,0,0);} // 800D7A68
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800D7A6C
  c->r[1]=c->r[1]+0x00000040u; // 800D7A70
  return; // 800D7A74
}

// WriteFPSCR
void f_800D7A78(Ctx* __restrict c) {
  trace_call(0x800D7A78u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7A78
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800D7A7C
  {uint32_t ea=c->r[1]+0x00000020u; psq_store(c,31,ea,0,0);} // 800D7A80
  {uint32_t ea=c->r[3]+0x00000000u; c->f[31]=RF64(ea);} // 800D7A84
  c->fpscr=(uint32_t)d2u(c->f[31]); // 800D7A88
  {uint32_t ea=c->r[1]+0x00000020u; psq_load(c,31,ea,0,0);} // 800D7A8C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800D7A90
  c->r[1]=c->r[1]+0x00000040u; // 800D7A94
  return; // 800D7A98
}

// TRKPPCAccessFPRegister
void f_800D7A9C(Ctx* __restrict c) {
  trace_call(0x800D7A9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7A9C
  c->r[0]=c->lr; // 800D7AA0
  cmpu(c,0,c->r[4],0x00000020u); // 800D7AA4
  W32(c->r[1]+0x00000074u,c->r[0]); // 800D7AA8
  {uint32_t ea=c->r[1]+0x00000058u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800D7AAC
  c->r[26]=0u+0x80380000u; // 800D7AB0
  c->r[29]=c->r[3]|c->r[3]; // 800D7AB4
  c->r[30]=c->r[5]|c->r[5]; // 800D7AB8
  c->r[31]=0u+0x00000000u; // 800D7ABC
  {uint32_t ea=c->r[26]+0xFFFFE020u; c->r[27]=R32(ea); c->r[26]=ea;} // 800D7AC0
  W32(c->r[1]+0x00000030u,c->r[27]); // 800D7AC4
  c->r[28]=R32(c->r[26]+0x00000004u); // 800D7AC8
  c->r[12]=R32(c->r[26]+0x00000008u); // 800D7ACC
  c->r[11]=R32(c->r[26]+0x0000000Cu); // 800D7AD0
  c->r[10]=R32(c->r[26]+0x00000010u); // 800D7AD4
  c->r[9]=R32(c->r[26]+0x00000014u); // 800D7AD8
  c->r[8]=R32(c->r[26]+0x00000018u); // 800D7ADC
  c->r[7]=R32(c->r[26]+0x0000001Cu); // 800D7AE0
  c->r[6]=R32(c->r[26]+0x00000020u); // 800D7AE4
  c->r[0]=R32(c->r[26]+0x00000024u); // 800D7AE8
  W32(c->r[1]+0x00000034u,c->r[28]); // 800D7AEC
  W32(c->r[1]+0x00000038u,c->r[12]); // 800D7AF0
  W32(c->r[1]+0x0000003Cu,c->r[11]); // 800D7AF4
  W32(c->r[1]+0x00000040u,c->r[10]); // 800D7AF8
  W32(c->r[1]+0x00000044u,c->r[9]); // 800D7AFC
  W32(c->r[1]+0x00000048u,c->r[8]); // 800D7B00
  W32(c->r[1]+0x0000004Cu,c->r[7]); // 800D7B04
  W32(c->r[1]+0x00000050u,c->r[6]); // 800D7B08
  W32(c->r[1]+0x00000054u,c->r[0]); // 800D7B0C
  if (!crb(c,0)) { goto L_800D7B44; } // 800D7B10
  cmps(c,0,(int32_t)c->r[5],0); // 800D7B14
  c->r[0]=rotl(c->r[4],21)&0xFFE00000u; // 800D7B18
  c->r[3]=c->r[0]|0xC8030000u; // 800D7B1C
  if (crb(c,2)) { goto L_800D7B28; } // 800D7B20
  c->r[3]=c->r[0]|0xD8030000u; // 800D7B24
L_800D7B28:;
  W32(c->r[1]+0x00000030u,c->r[3]); // 800D7B28
  c->r[3]=c->r[29]|c->r[29]; // 800D7B2C
  c->r[5]=c->r[30]|c->r[30]; // 800D7B30
  c->r[4]=c->r[1]+0x00000030u; // 800D7B34
  c->lr=0x800D7B3Cu; f_800D7C64(c); // 800D7B38
  c->r[31]=c->r[3]|c->r[3]; // 800D7B3C
  goto L_800D7C4C; // 800D7B40
L_800D7B44:;
  if (!crb(c,2)) { goto L_800D7B78; } // 800D7B44
  cmps(c,0,(int32_t)c->r[5],0); // 800D7B48
  if (crb(c,2)) { goto L_800D7B58; } // 800D7B4C
  c->lr=0x800D7B54u; f_800D7A54(c); // 800D7B50
  goto L_800D7B5C; // 800D7B54
L_800D7B58:;
  c->lr=0x800D7B5Cu; f_800D7A78(c); // 800D7B58
L_800D7B5C:;
  c->r[4]=R32(c->r[29]+0x00000004u); // 800D7B5C
  c->r[0]=0u+0x00000000u; // 800D7B60
  c->r[3]=0u+0xFFFFFFFFu; // 800D7B64
  W32(c->r[29]+0x00000000u,c->r[0]); // 800D7B68
  c->r[0]=c->r[4]&c->r[3]; // 800D7B6C
  W32(c->r[29]+0x00000004u,c->r[0]); // 800D7B70
  goto L_800D7C4C; // 800D7B74
L_800D7B78:;
  cmpu(c,0,c->r[4],0x00000021u); // 800D7B78
  if (!crb(c,2)) { goto L_800D7C4C; } // 800D7B7C
  cmps(c,0,(int32_t)c->r[5],0); // 800D7B80
  if (!crb(c,2)) { goto L_800D7B90; } // 800D7B84
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D7B88
  W32(c->r[3]+0x00000000u,c->r[0]); // 800D7B8C
L_800D7B90:;
  c->r[12]=0u+0x80380000u; // 800D7B90
  {uint32_t ea=c->r[12]+0xFFFFDFD0u; c->r[11]=R32(ea); c->r[12]=ea;} // 800D7B94
  cmps(c,0,(int32_t)c->r[5],0); // 800D7B98
  W32(c->r[1]+0x00000008u,c->r[11]); // 800D7B9C
  c->r[10]=R32(c->r[12]+0x00000004u); // 800D7BA0
  c->r[9]=R32(c->r[12]+0x00000008u); // 800D7BA4
  c->r[8]=R32(c->r[12]+0x0000000Cu); // 800D7BA8
  c->r[7]=R32(c->r[12]+0x00000010u); // 800D7BAC
  c->r[6]=R32(c->r[12]+0x00000014u); // 800D7BB0
  c->r[5]=R32(c->r[12]+0x00000018u); // 800D7BB4
  c->r[4]=R32(c->r[12]+0x0000001Cu); // 800D7BB8
  c->r[3]=R32(c->r[12]+0x00000020u); // 800D7BBC
  c->r[0]=R32(c->r[12]+0x00000024u); // 800D7BC0
  W32(c->r[1]+0x0000000Cu,c->r[10]); // 800D7BC4
  W32(c->r[1]+0x00000010u,c->r[9]); // 800D7BC8
  W32(c->r[1]+0x00000014u,c->r[8]); // 800D7BCC
  W32(c->r[1]+0x00000018u,c->r[7]); // 800D7BD0
  W32(c->r[1]+0x0000001Cu,c->r[6]); // 800D7BD4
  W32(c->r[1]+0x00000020u,c->r[5]); // 800D7BD8
  W32(c->r[1]+0x00000024u,c->r[4]); // 800D7BDC
  W32(c->r[1]+0x00000028u,c->r[3]); // 800D7BE0
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 800D7BE4
  if (crb(c,2)) { goto L_800D7C04; } // 800D7BE8
  c->r[3]=0u+0x7C9F0000u; // 800D7BEC
  c->r[0]=0u+0x90830000u; // 800D7BF0
  c->r[3]=c->r[3]+0xFFFFFAA6u; // 800D7BF4
  W32(c->r[1]+0x00000008u,c->r[3]); // 800D7BF8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D7BFC
  goto L_800D7C18; // 800D7C00
L_800D7C04:;
  c->r[3]=0u+0x7C9F0000u; // 800D7C04
  c->r[4]=0u+0x80830000u; // 800D7C08
  c->r[0]=c->r[3]+0xFFFFFBA6u; // 800D7C0C
  W32(c->r[1]+0x00000008u,c->r[4]); // 800D7C10
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D7C14
L_800D7C18:;
  c->r[3]=c->r[29]|c->r[29]; // 800D7C18
  c->r[5]=c->r[30]|c->r[30]; // 800D7C1C
  c->r[4]=c->r[1]+0x00000008u; // 800D7C20
  c->lr=0x800D7C28u; f_800D7C64(c); // 800D7C24
  cmps(c,0,(int32_t)c->r[30],0); // 800D7C28
  c->r[31]=c->r[3]|c->r[3]; // 800D7C2C
  if (crb(c,2)) { goto L_800D7C4C; } // 800D7C30
  c->r[4]=R32(c->r[29]+0x00000000u); // 800D7C34
  c->r[3]=0u+0xFFFFFFFFu; // 800D7C38
  c->r[0]=0u+0x00000000u; // 800D7C3C
  c->r[3]=c->r[4]&c->r[3]; // 800D7C40
  W32(c->r[29]+0x00000004u,c->r[3]); // 800D7C44
  W32(c->r[29]+0x00000000u,c->r[0]); // 800D7C48
L_800D7C4C:;
  c->r[3]=c->r[31]|c->r[31]; // 800D7C4C
  {uint32_t ea=c->r[1]+0x00000058u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 800D7C50
  c->r[0]=R32(c->r[1]+0x00000074u); // 800D7C54
  c->lr=c->r[0]; // 800D7C58
  c->r[1]=c->r[1]+0x00000070u; // 800D7C5C
  return; // 800D7C60
}

// TRKPPCAccessSpecialReg
void f_800D7C64(Ctx* __restrict c) {
  trace_call(0x800D7C64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7C64
  c->r[0]=c->lr; // 800D7C68
  c->r[5]=0u+0x4E800000u; // 800D7C6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D7C70
  c->r[0]=c->r[5]+0x00000020u; // 800D7C74
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D7C78
  c->r[31]=c->r[4]|c->r[4]; // 800D7C7C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D7C80
  c->r[30]=c->r[3]|c->r[3]; // 800D7C84
  c->r[3]=c->r[31]|c->r[31]; // 800D7C88
  W32(c->r[4]+0x00000024u,c->r[0]); // 800D7C8C
  c->r[4]=0u+0x00000028u; // 800D7C90
  c->lr=0x800D7C98u; f_800D31CC(c); // 800D7C94
  c->r[4]=0u+0x803D0000u; // 800D7C98
  c->r[12]=c->r[31]|c->r[31]; // 800D7C9C
  c->r[3]=c->r[30]|c->r[30]; // 800D7CA0
  c->r[4]=c->r[4]+0x00006708u; // 800D7CA4
  c->ctr=c->r[12]; // 800D7CA8
  if (true) { c->lr=0x800D7CB0u; dispatch(c,c->ctr); } // 800D7CAC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D7CB0
  c->r[3]=0u+0x00000000u; // 800D7CB4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D7CB8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D7CBC
  c->lr=c->r[0]; // 800D7CC0
  c->r[1]=c->r[1]+0x00000010u; // 800D7CC4
  return; // 800D7CC8
}

// TRKTargetSetInputPendingPtr
void f_800D7CCC(Ctx* __restrict c) {
  trace_call(0x800D7CCCu);
  c->r[4]=0u+0x803D0000u; // 800D7CCC
  c->r[4]=c->r[4]+0x00006718u; // 800D7CD0
  W32(c->r[4]+0x000000A0u,c->r[3]); // 800D7CD4
  return; // 800D7CD8
}

// ConvertAddress
void f_800D7CDC(Ctx* __restrict c) {
  trace_call(0x800D7CDCu);
  c->r[3]=c->r[3]|0x80000000u; // 800D7CDC
  return; // 800D7CE0
}

// GetThreadInfo
void f_800D7CE4(Ctx* __restrict c) {
  trace_call(0x800D7CE4u);
  c->r[0]=0u+0x00000001u; // 800D7CE4
  W32(c->r[3]+0x00000000u,c->r[0]); // 800D7CE8
  c->r[0]=0u+0x00000000u; // 800D7CEC
  c->r[5]=0u+0x80000000u; // 800D7CF0
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D7CF4
  c->r[7]=R32(c->r[5]+0x000000DCu); // 800D7CF8
  c->r[0]=c->r[7]+0x00010000u; // 800D7CFC
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800D7D00
  if (crb(c,2)) return; // 800D7D04
  cmps(c,0,(int32_t)c->r[7],0); // 800D7D08
  if (crb(c,2)) return; // 800D7D0C
  c->r[0]=c->r[7]+0x80000000u; // 800D7D10
  cmpu(c,0,c->r[0],0x00000000u); // 800D7D14
  if (!crb(c,2)) { goto L_800D7D20; } // 800D7D18
  return; // 800D7D1C
L_800D7D20:;
  c->r[6]=0u+0x00000000u; // 800D7D20
  goto L_800D7D64; // 800D7D24
L_800D7D28:;
  c->r[0]=R32(c->r[5]+0x000000E4u); // 800D7D28
  cmpu(c,0,c->r[7],c->r[0]); // 800D7D2C
  if (!crb(c,2)) { goto L_800D7D38; } // 800D7D30
  W32(c->r[4]+0x00000000u,c->r[6]); // 800D7D34
L_800D7D38:;
  c->r[0]=R32(c->r[7]+0x000002FCu); // 800D7D38
  c->r[6]=c->r[6]+0x00000001u; // 800D7D3C
  c->r[7]=c->r[0]|0x80000000u; // 800D7D40
  c->r[0]=c->r[7]+0x00010000u; // 800D7D44
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800D7D48
  if (crb(c,2)) { goto L_800D7D6C; } // 800D7D4C
  cmps(c,0,(int32_t)c->r[7],0); // 800D7D50
  if (crb(c,2)) { goto L_800D7D6C; } // 800D7D54
  c->r[0]=c->r[7]+0x80000000u; // 800D7D58
  cmpu(c,0,c->r[0],0x00000000u); // 800D7D5C
  if (crb(c,2)) { goto L_800D7D6C; } // 800D7D60
L_800D7D64:;
  cmps(c,0,(int32_t)c->r[7],0); // 800D7D64
  if (!crb(c,2)) { IRQCHK(c); goto L_800D7D28; } // 800D7D68
L_800D7D6C:;
  W32(c->r[3]+0x00000000u,c->r[6]); // 800D7D6C
  return; // 800D7D70
}

// SetUseSerialIO
void f_800D7D74(Ctx* __restrict c) {
  trace_call(0x800D7D74u);
  W8(c->r[13]+0xFFFF9828u,c->r[3]); // 800D7D74
  return; // 800D7D78
}

// GetUseSerialIO
void f_800D7D7C(Ctx* __restrict c) {
  trace_call(0x800D7D7Cu);
  c->r[3]=R8(c->r[13]+0xFFFF9828u); // 800D7D7C
  return; // 800D7D80
}

// fn_800D7D90
void f_800D7D90(Ctx* __restrict c) {
  trace_call(0x800D7D90u);
  c->r[4]=0u+0x00000000u; // 800D7D90
  f_800E0260(c); return; // 800D7D94
}

// fn_800D7DA0
void f_800D7DA0(Ctx* __restrict c) {
  trace_call(0x800D7DA0u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D7DA0
  c->r[0]=c->lr; // 800D7DA4
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800D7DA8
  c->r[11]=c->r[1]+0x00000050u; // 800D7DAC
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 800D7DB0
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 800D7DB4
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[30]);} // 800D7DB8
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,30,ea,0,0);} // 800D7DBC
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[29]);} // 800D7DC0
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,29,ea,0,0);} // 800D7DC4
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[28]);} // 800D7DC8
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,28,ea,0,0);} // 800D7DCC
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[27]);} // 800D7DD0
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,27,ea,0,0);} // 800D7DD4
  c->lr=0x800D7DDCu; f_800C2E4C(c); // 800D7DD8
  c->r[31]=0u+0x80380000u; // 800D7DDC
  c->r[28]=c->r[3]|c->r[3]; // 800D7DE0
  c->r[29]=c->r[4]|c->r[4]; // 800D7DE4
  c->r[27]=c->r[5]|c->r[5]; // 800D7DE8
  c->r[30]=c->r[6]|c->r[6]; // 800D7DEC
  c->r[31]=c->r[31]+0xFFFFE048u; // 800D7DF0
  c->r[3]=c->r[1]+0x00000008u; // 800D7DF4
  c->r[4]=0u+0x00000000u; // 800D7DF8
  c->r[5]=0u+0x00000020u; // 800D7DFC
  c->lr=0x800D7E04u; f_80004350(c); // 800D7E00
  {uint32_t ea=c->r[2]+0xFFFF9E40u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D7E04
  {uint32_t ea=c->r[28]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D7E08
  {uint32_t ea=c->r[2]+0xFFFF9E38u; c->f[0]=RF64(ea);} // 800D7E0C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800D7E10
  c->f[1]=c->f[0]+c->f[1]; // 800D7E14
  c->lr=0x800D7E1Cu; f_800D29C0(c); // 800D7E18
  {uint32_t ea=c->r[29]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D7E1C
  c->f[31]=c->ps1[31]=S(c->f[1]); // 800D7E20
  {uint32_t ea=c->r[2]+0xFFFF9E44u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7E24
  fcmp(c,0,c->f[2],c->f[0]); // 800D7E28
  if (!crb(c,0)) { goto L_800D7E38; } // 800D7E2C
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 800D7E30
  goto L_800D7E48; // 800D7E34
L_800D7E38:;
  {uint32_t ea=c->r[2]+0xFFFF9E48u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7E38
  fcmp(c,0,c->f[2],c->f[0]); // 800D7E3C
  if (!crb(c,1)) { goto L_800D7E48; } // 800D7E40
  {uint32_t ea=c->r[29]+0x00000000u; WF32(ea,c->f[0]);} // 800D7E44
L_800D7E48:;
  c->r[0]=rotl(c->r[27],2)&0xFFFFFFFCu; // 800D7E48
  c->r[3]=c->r[31]+0x00000220u; // 800D7E4C
  c->r[7]=R32(c->r[3]+c->r[0]); // 800D7E50
  c->r[3]=rotl(c->r[27],5)&0xFFFFFFE0u; // 800D7E54
  c->r[6]=c->r[31]+0x00000120u; // 800D7E58
  c->r[5]=rotl(c->r[27],6)&0xFFFFFFC0u; // 800D7E5C
  c->r[4]=c->r[31]+0x00000020u; // 800D7E60
  {uint32_t ea=c->r[2]+0xFFFF9E4Cu; c->f[30]=c->ps1[30]=RF32(ea);} // 800D7E64
  c->r[8]=c->r[6]+c->r[3]; // 800D7E68
  {uint32_t ea=c->r[29]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D7E6C
  c->r[6]=c->r[4]+c->r[5]; // 800D7E70
  c->r[4]=0u+0x00000000u; // 800D7E74
  c->ctr=c->r[7]; // 800D7E78
  cmps(c,0,(int32_t)c->r[7],0); // 800D7E7C
  if (!crb(c,1)) { goto L_800D7EC8; } // 800D7E80
L_800D7E84:;
  c->r[5]=c->r[6]+c->r[4]; // 800D7E84
  c->r[10]=R32(c->r[5]+0x00000004u); // 800D7E88
  c->r[5]=rotl(c->r[10],2)&0xFFFFFFFCu; // 800D7E8C
  {uint32_t ea=c->r[8]+c->r[5]; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7E90
  fcmp(c,0,c->f[1],c->f[0]); // 800D7E94
  if (!crb(c,0)) { goto L_800D7EC0; } // 800D7E98
  c->r[9]=R32(c->r[6]+c->r[4]); // 800D7E9C
  c->r[4]=rotl(c->r[9],2)&0xFFFFFFFCu; // 800D7EA0
  {uint32_t ea=c->r[8]+c->r[4]; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7EA4
  fcmp(c,0,c->f[1],c->f[0]); // 800D7EA8
  if (!crb(c,2)) { goto L_800D7EB8; } // 800D7EAC
  c->r[7]=0u+0x00000001u; // 800D7EB0
  goto L_800D7EEC; // 800D7EB4
L_800D7EB8:;
  c->r[7]=0u+0x00000002u; // 800D7EB8
  goto L_800D7EEC; // 800D7EBC
L_800D7EC0:;
  c->r[4]=c->r[4]+0x00000008u; // 800D7EC0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D7E84; } // 800D7EC4
L_800D7EC8:;
  c->r[9]=R32(c->r[6]+0x00000000u); // 800D7EC8
  c->r[10]=R32(c->r[6]+0x00000004u); // 800D7ECC
  c->r[4]=rotl(c->r[9],2)&0xFFFFFFFCu; // 800D7ED0
  {uint32_t ea=c->r[8]+c->r[4]; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7ED4
  fcmp(c,0,c->f[1],c->f[0]); // 800D7ED8
  if (!crb(c,2)) { goto L_800D7EE8; } // 800D7EDC
  c->r[7]=0u+0x00000001u; // 800D7EE0
  goto L_800D7EEC; // 800D7EE4
L_800D7EE8:;
  c->r[7]=0u+0x00000002u; // 800D7EE8
L_800D7EEC:;
  cmps(c,0,(int32_t)c->r[7],2); // 800D7EEC
  if (!crb(c,2)) { goto L_800D7F08; } // 800D7EF0
  c->r[5]=rotl(c->r[10],2)&0xFFFFFFFCu; // 800D7EF4
  c->r[4]=c->r[1]+0x00000008u; // 800D7EF8
  c->r[6]=0u+0x00000001u; // 800D7EFC
  W32(c->r[4]+c->r[5],c->r[6]); // 800D7F00
  {uint32_t ea=c->r[2]+0xFFFF9E50u; c->f[30]=c->ps1[30]=RF32(ea);} // 800D7F04
L_800D7F08:;
  c->r[4]=c->r[31]+0x00000120u; // 800D7F08
  c->r[6]=rotl(c->r[9],2)&0xFFFFFFFCu; // 800D7F0C
  c->r[5]=c->r[4]+c->r[3]; // 800D7F10
  c->r[8]=rotl(c->r[10],2)&0xFFFFFFFCu; // 800D7F14
  {uint32_t ea=c->r[5]+c->r[6]; c->f[3]=c->ps1[3]=RF32(ea);} // 800D7F18
  c->r[4]=c->r[1]+0x00000008u; // 800D7F1C
  {uint32_t ea=c->r[5]+c->r[8]; c->f[1]=c->ps1[1]=RF32(ea);} // 800D7F20
  c->r[5]=0u+0x00000001u; // 800D7F24
  W32(c->r[4]+c->r[6],c->r[5]); // 800D7F28
  fcmp(c,0,c->f[1],c->f[3]); // 800D7F2C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D7F30
  if (!crb(c,2)) { goto L_800D7F40; } // 800D7F34
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[3]); // 800D7F38
  goto L_800D7F4C; // 800D7F3C
L_800D7F40:;
  {uint32_t ea=c->r[2]+0xFFFF9E54u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7F40
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800D7F44
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 800D7F48
L_800D7F4C:;
  {uint32_t ea=c->r[29]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D7F4C
  fcmp(c,0,c->f[1],c->f[3]); // 800D7F50
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800D7F54
  if (!crb(c,2)) { goto L_800D7F64; } // 800D7F58
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[3]); // 800D7F5C
  goto L_800D7F70; // 800D7F60
L_800D7F64:;
  {uint32_t ea=c->r[2]+0xFFFF9E54u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7F64
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800D7F68
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 800D7F6C
L_800D7F70:;
  c->f[5]=c->ps1[5]=S(c->f[0]/c->f[2]); // 800D7F70
  {uint32_t ea=c->r[2]+0xFFFF9E38u; c->f[4]=RF64(ea);} // 800D7F74
  c->r[5]=c->r[31]+0x00000230u; // 800D7F78
  c->r[4]=0u+0x43300000u; // 800D7F7C
  c->r[5]=R32(c->r[5]+c->r[0]); // 800D7F80
  c->r[0]=c->r[31]+0x000001A0u; // 800D7F84
  c->r[5]=c->r[5]-c->r[7]; // 800D7F88
  c->f[2]=c->f[4]-c->f[5]; // 800D7F8C
  c->r[5]=c->r[5]^0x80000000u; // 800D7F90
  c->f[0]=c->f[4]-c->f[31]; // 800D7F94
  W32(c->r[1]+0x0000002Cu,c->r[5]); // 800D7F98
  c->r[28]=c->r[0]+c->r[3]; // 800D7F9C
  c->f[3]=c->ps1[3]=S(c->f[2]); // 800D7FA0
  W32(c->r[1]+0x00000028u,c->r[4]); // 800D7FA4
  c->f[2]=c->f[30]*c->f[0]; // 800D7FA8
  {uint32_t ea=c->r[2]+0xFFFF9E60u; c->f[1]=RF64(ea);} // 800D7FAC
  c->r[31]=c->r[1]+0x00000008u; // 800D7FB0
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=RF64(ea);} // 800D7FB4
  {uint32_t ea=c->r[30]+c->r[6]; WF32(ea,c->f[3]);} // 800D7FB8
  c->r[27]=0u+0x00000000u; // 800D7FBC
  c->f[0]=c->f[0]-c->f[1]; // 800D7FC0
  {uint32_t ea=c->r[2]+0xFFFF9E4Cu; c->f[28]=c->ps1[28]=RF32(ea);} // 800D7FC4
  {uint32_t ea=c->r[30]+c->r[8]; WF32(ea,c->f[5]);} // 800D7FC8
  c->r[29]=0u+0x00000000u; // 800D7FCC
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[29]=c->ps1[29]=RF32(ea);} // 800D7FD0
  c->f[0]=c->f[2]*c->f[0]; // 800D7FD4
  c->f[27]=c->f[4]+c->f[0]; // 800D7FD8
  c->f[27]=c->ps1[27]=S(c->f[27]); // 800D7FDC
L_800D7FE0:;
  cmps(c,0,(int32_t)c->r[27],3); // 800D7FE0
  if (crb(c,2)) { goto L_800D804C; } // 800D7FE4
  c->r[0]=R32(c->r[31]+c->r[29]); // 800D7FE8
  cmps(c,0,(int32_t)c->r[0],0); // 800D7FEC
  if (crb(c,2)) { goto L_800D8018; } // 800D7FF0
  {uint32_t ea=c->r[30]+c->r[29]; c->f[0]=c->ps1[0]=RF32(ea);} // 800D7FF4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 800D7FF8
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 800D7FFC
  c->f[0]=c->ps1[0]=S(c->f[30]+c->f[0]); // 800D8000
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[27]); // 800D8004
  c->lr=0x800D800Cu; f_800D2C14(c); // 800D8008
  c->f[0]=c->ps1[0]=S(c->f[1]); // 800D800C
  {uint32_t ea=c->r[30]+c->r[29]; WF32(ea,c->f[0]);} // 800D8010
  goto L_800D804C; // 800D8014
L_800D8018:;
  fcmp(c,0,c->f[28],c->f[31]); // 800D8018
  if (crb(c,2)) { goto L_800D8048; } // 800D801C
  c->r[0]=R32(c->r[28]+c->r[29]); // 800D8020
  cmps(c,0,(int32_t)c->r[0],0); // 800D8024
  if (crb(c,2)) { goto L_800D8048; } // 800D8028
  c->f[0]=c->ps1[0]=S(c->f[28]-c->f[31]); // 800D802C
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[0]); // 800D8030
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[27]); // 800D8034
  c->lr=0x800D803Cu; f_800D2C14(c); // 800D8038
  c->f[0]=c->ps1[0]=S(c->f[1]); // 800D803C
  {uint32_t ea=c->r[30]+c->r[29]; WF32(ea,c->f[0]);} // 800D8040
  goto L_800D804C; // 800D8044
L_800D8048:;
  {uint32_t ea=c->r[30]+c->r[29]; WF32(ea,c->f[29]);} // 800D8048
L_800D804C:;
  c->r[27]=c->r[27]+0x00000001u; // 800D804C
  c->r[29]=c->r[29]+0x00000004u; // 800D8050
  cmps(c,0,(int32_t)c->r[27],8); // 800D8054
  if (crb(c,0)) { IRQCHK(c); goto L_800D7FE0; } // 800D8058
  c->r[11]=c->r[1]+0x00000050u; // 800D805C
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 800D8060
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 800D8064
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,30,ea,0,0);} // 800D8068
  {uint32_t ea=c->r[1]+0x00000080u; c->f[30]=RF64(ea);} // 800D806C
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,29,ea,0,0);} // 800D8070
  {uint32_t ea=c->r[1]+0x00000070u; c->f[29]=RF64(ea);} // 800D8074
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,28,ea,0,0);} // 800D8078
  {uint32_t ea=c->r[1]+0x00000060u; c->f[28]=RF64(ea);} // 800D807C
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,27,ea,0,0);} // 800D8080
  {uint32_t ea=c->r[1]+0x00000050u; c->f[27]=RF64(ea);} // 800D8084
  c->lr=0x800D808Cu; f_800C2E98(c); // 800D8088
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800D808C
  c->lr=c->r[0]; // 800D8090
  c->r[1]=c->r[1]+0x000000A0u; // 800D8094
  return; // 800D8098
}

// fn_800D80A0
void f_800D80A0(Ctx* __restrict c) {
  trace_call(0x800D80A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D80A0
  c->r[0]=c->lr; // 800D80A4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D80A8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 800D80AC
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 800D80B0
  c->f[31]=c->f[2]; // 800D80B4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 800D80B8
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 800D80BC
  c->f[30]=-c->f[1]; // 800D80C0
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[2]); // 800D80C4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D80C8
  c->r[31]=c->r[4]|c->r[4]; // 800D80CC
  c->f[0]=c->ps1[0]=S(c->f[30]*c->f[30]); // 800D80D0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D80D4
  c->r[30]=c->r[3]|c->r[3]; // 800D80D8
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[0]); // 800D80DC
  c->lr=0x800D80E4u; f_800D2C14(c); // 800D80E0
  c->f[0]=c->ps1[0]=S(c->f[1]); // 800D80E4
  c->f[1]=c->f[30]; // 800D80E8
  c->f[2]=c->f[31]; // 800D80EC
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800D80F0
  c->lr=0x800D80F8u; f_800D29B0(c); // 800D80F4
  c->f[2]=c->ps1[2]=S(c->f[1]); // 800D80F8
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D80FC
  {uint32_t ea=c->r[2]+0xFFFF9E4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D8100
  c->f[2]=-c->f[2]; // 800D8104
  fcmp(c,0,c->f[1],c->f[0]); // 800D8108
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 800D810C
  if (!crb(c,1)) { goto L_800D8118; } // 800D8110
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800D8114
L_800D8118:;
  c->r[5]=c->r[30]|c->r[30]; // 800D8118
  c->r[6]=c->r[31]|c->r[31]; // 800D811C
  c->r[3]=c->r[1]+0x0000000Cu; // 800D8120
  c->r[4]=c->r[1]+0x00000008u; // 800D8124
  c->lr=0x800D812Cu; f_800D7DA0(c); // 800D8128
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D812C
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 800D8130
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 800D8134
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 800D8138
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 800D813C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D8140
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D8144
  c->lr=c->r[0]; // 800D8148
  c->r[1]=c->r[1]+0x00000040u; // 800D814C
  return; // 800D8150
}

// fn_800D8160
void f_800D8160(Ctx* __restrict c) {
  trace_call(0x800D8160u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8160
  {uint32_t ea=c->r[4]+0x00000010u; c->f[6]=c->ps1[6]=RF32(ea);} // 800D8164
  {uint32_t ea=c->r[4]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D8168
  {uint32_t ea=c->r[4]+0x00000008u; c->f[12]=c->ps1[12]=RF32(ea);} // 800D816C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[6]); // 800D8170
  {uint32_t ea=c->r[4]+0x00000000u; c->f[11]=c->ps1[11]=RF32(ea);} // 800D8174
  c->f[5]=c->ps1[5]=S(c->f[6]-c->f[12]); // 800D8178
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 800D817C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[9]=c->ps1[9]=RF32(ea);} // 800D8180
  c->f[8]=c->ps1[8]=S(c->f[12]-c->f[11]); // 800D8184
  {uint32_t ea=c->r[4]+0x00000014u; c->f[4]=c->ps1[4]=RF32(ea);} // 800D8188
  c->f[7]=c->ps1[7]=S(c->f[10]-c->f[9]); // 800D818C
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D8190
  c->f[8]=c->ps1[8]=S(c->f[1]*c->f[8]); // 800D8194
  c->f[3]=c->ps1[3]=S(c->f[4]-c->f[10]); // 800D8198
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 800D819C
  c->f[7]=c->ps1[7]=S(c->f[1]*c->f[7]); // 800D81A0
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800D81A4
  c->f[11]=c->ps1[11]=S(c->f[11]+c->f[8]); // 800D81A8
  c->f[5]=c->ps1[5]=S(c->f[1]*c->f[5]); // 800D81AC
  c->f[6]=c->ps1[6]=S(c->f[6]+c->f[2]); // 800D81B0
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[11]);} // 800D81B4
  c->f[9]=c->ps1[9]=S(c->f[9]+c->f[7]); // 800D81B8
  c->f[8]=c->ps1[8]=S(c->f[12]+c->f[5]); // 800D81BC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[6]);} // 800D81C0
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800D81C4
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800D81C8
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[8]);} // 800D81CC
  c->f[2]=c->ps1[2]=S(c->f[6]-c->f[8]); // 800D81D0
  c->f[7]=c->ps1[7]=S(c->f[10]+c->f[3]); // 800D81D4
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[9]);} // 800D81D8
  c->f[5]=c->ps1[5]=S(c->f[4]+c->f[0]); // 800D81DC
  c->f[4]=c->ps1[4]=S(c->f[8]-c->f[11]); // 800D81E0
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[7]);} // 800D81E4
  c->f[3]=c->ps1[3]=S(c->f[7]-c->f[9]); // 800D81E8
  c->f[0]=c->ps1[0]=S(c->f[5]-c->f[7]); // 800D81EC
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[5]);} // 800D81F0
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[4]); // 800D81F4
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800D81F8
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800D81FC
  c->f[6]=c->ps1[6]=S(c->f[11]+c->f[4]); // 800D8200
  c->f[5]=c->ps1[5]=S(c->f[9]+c->f[3]); // 800D8204
  c->f[4]=c->ps1[4]=S(c->f[8]+c->f[2]); // 800D8208
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[6]);} // 800D820C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800D8210
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[5]);} // 800D8214
  c->f[2]=c->ps1[2]=S(c->f[4]-c->f[6]); // 800D8218
  c->f[3]=c->ps1[3]=S(c->f[7]+c->f[0]); // 800D821C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[4]);} // 800D8220
  c->f[2]=c->ps1[2]=S(c->f[1]*c->f[2]); // 800D8224
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 800D8228
  c->f[0]=c->ps1[0]=S(c->f[3]-c->f[5]); // 800D822C
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800D8230
  c->f[1]=c->ps1[1]=S(c->f[6]+c->f[2]); // 800D8234
  c->f[0]=c->ps1[0]=S(c->f[5]+c->f[0]); // 800D8238
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[1]);} // 800D823C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 800D8240
  c->r[1]=c->r[1]+0x00000030u; // 800D8244
  return; // 800D8248
}

// fn_800D8250
void f_800D8250(Ctx* __restrict c) {
  trace_call(0x800D8250u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8250
  c->r[0]=c->lr; // 800D8254
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D8258
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 800D825C
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 800D8260
  c->f[31]=c->f[3]; // 800D8264
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[4]); // 800D8268
  c->lr=0x800D8270u; f_800D29C4(c); // 800D826C
  c->f[0]=c->ps1[0]=S(c->f[1]); // 800D8270
  c->f[1]=c->ps1[1]=S(c->f[31]+c->f[0]); // 800D8274
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 800D8278
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 800D827C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D8280
  c->lr=c->r[0]; // 800D8284
  c->r[1]=c->r[1]+0x00000020u; // 800D8288
  return; // 800D828C
}

// fn_800D8290
void f_800D8290(Ctx* __restrict c) {
  trace_call(0x800D8290u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8290
  c->r[0]=c->lr; // 800D8294
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D8298
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D829C
  c->r[31]=c->r[3]|c->r[3]; // 800D82A0
  c->lr=0x800D82A8u; f_800D82E0(c); // 800D82A4
  c->r[4]=0u+0x80390000u; // 800D82A8
  c->r[3]=c->r[31]+0x0000001Cu; // 800D82AC
  c->r[4]=c->r[4]+0xFFFFCEB8u; // 800D82B0
  W32(c->r[31]+0x00000010u,c->r[4]); // 800D82B4
  c->lr=0x800D82BCu; f_800D82E0(c); // 800D82B8
  c->r[0]=0u+0x00000000u; // 800D82BC
  W32(c->r[31]+0x000000A8u,c->r[0]); // 800D82C0
  c->r[3]=c->r[31]|c->r[31]; // 800D82C4
  W32(c->r[31]+0x000000ACu,c->r[0]); // 800D82C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D82CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D82D0
  c->lr=c->r[0]; // 800D82D4
  c->r[1]=c->r[1]+0x00000010u; // 800D82D8
  return; // 800D82DC
}

// fn_800D82E0
void f_800D82E0(Ctx* __restrict c) {
  trace_call(0x800D82E0u);
  c->r[0]=0u+0x00000000u; // 800D82E0
  W32(c->r[3]+0x00000000u,c->r[3]); // 800D82E4
  W32(c->r[3]+0x00000004u,c->r[3]); // 800D82E8
  W32(c->r[3]+0x00000008u,c->r[0]); // 800D82EC
  return; // 800D82F0
}

// fn_800D8300
void f_800D8300(Ctx* __restrict c) {
  trace_call(0x800D8300u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8300
  c->r[0]=c->lr; // 800D8304
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D8308
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D830C
  c->r[31]=c->r[3]|c->r[3]; // 800D8310
  W32(c->r[1]+0x00000018u,c->r[30]); // 800D8314
  c->r[4]=R32(c->r[3]+0x000000A8u); // 800D8318
  cmps(c,0,(int32_t)c->r[4],0); // 800D831C
  if (crb(c,2)) { goto L_800D83C4; } // 800D8320
  c->r[0]=0u+0x00000000u; // 800D8324
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D8328
  c->r[4]=R32(c->r[3]+0x000000A8u); // 800D832C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800D8330
  c->r[4]=R32(c->r[3]+0x000000A8u); // 800D8334
  W32(c->r[4]+0x00000008u,c->r[0]); // 800D8338
  c->r[4]=R32(c->r[3]+0x000000A8u); // 800D833C
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800D8340
  c->r[4]=R32(c->r[3]+0x000000A8u); // 800D8344
  W32(c->r[4]+0x00000010u,c->r[0]); // 800D8348
  c->r[3]=R32(c->r[3]+0x000000A8u); // 800D834C
  c->r[3]=R32(c->r[3]+0x00000014u); // 800D8350
  cmps(c,0,(int32_t)c->r[3],0); // 800D8354
  if (crb(c,2)) { goto L_800D8368; } // 800D8358
  c->r[4]=0u+0x00000000u; // 800D835C
  c->r[5]=0u+0x00000010u; // 800D8360
  c->lr=0x800D8368u; f_80004350(c); // 800D8364
L_800D8368:;
  c->r[3]=R32(c->r[31]+0x000000A8u); // 800D8368
  c->r[0]=0u+0x00000000u; // 800D836C
  W32(c->r[3]+0x00000018u,c->r[0]); // 800D8370
  c->r[3]=R32(c->r[31]+0x000000A8u); // 800D8374
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 800D8378
  c->r[3]=R32(c->r[31]+0x000000A8u); // 800D837C
  W32(c->r[3]+0x00000020u,c->r[0]); // 800D8380
  c->r[3]=R32(c->r[31]+0x000000A8u); // 800D8384
  W32(c->r[3]+0x00000028u,c->r[0]); // 800D8388
  c->r[3]=R32(c->r[31]+0x000000A8u); // 800D838C
  W32(c->r[3]+0x00000024u,c->r[0]); // 800D8390
  c->r[3]=R32(c->r[31]+0x000000A8u); // 800D8394
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 800D8398
  c->r[3]=R32(c->r[31]+0x000000A8u); // 800D839C
  W32(c->r[3]+0x00000030u,c->r[0]); // 800D83A0
  c->r[3]=R32(c->r[31]+0x000000A8u); // 800D83A4
  W32(c->r[3]+0x00000034u,c->r[0]); // 800D83A8
  c->r[3]=R32(c->r[31]+0x000000A8u); // 800D83AC
  W32(c->r[3]+0x00000038u,c->r[0]); // 800D83B0
  c->r[3]=R32(c->r[31]+0x000000A8u); // 800D83B4
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 800D83B8
  c->r[3]=R32(c->r[31]+0x000000A8u); // 800D83BC
  W32(c->r[3]+0x00000040u,c->r[0]); // 800D83C0
L_800D83C4:;
  c->r[3]=R32(c->r[31]+0x000000ACu); // 800D83C4
  cmps(c,0,(int32_t)c->r[3],0); // 800D83C8
  if (crb(c,2)) { goto L_800D8400; } // 800D83CC
  c->r[0]=0u+0x00000000u; // 800D83D0
  W32(c->r[3]+0x00000000u,c->r[0]); // 800D83D4
  c->r[3]=R32(c->r[31]+0x000000ACu); // 800D83D8
  W32(c->r[3]+0x00000010u,c->r[0]); // 800D83DC
  c->r[3]=R32(c->r[31]+0x000000ACu); // 800D83E0
  W32(c->r[3]+0x00000014u,c->r[0]); // 800D83E4
  c->r[3]=R32(c->r[31]+0x000000ACu); // 800D83E8
  W32(c->r[3]+0x00000018u,c->r[0]); // 800D83EC
  c->r[3]=R32(c->r[31]+0x000000ACu); // 800D83F0
  W16(c->r[3]+0x0000001Cu,c->r[0]); // 800D83F4
  c->r[3]=R32(c->r[31]+0x000000ACu); // 800D83F8
  W32(c->r[3]+0x00000020u,c->r[0]); // 800D83FC
L_800D8400:;
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D8400
  c->r[30]=0u+0x00000000u; // 800D8404
  {uint32_t ea=c->r[2]+0xFFFF9E4Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D8408
  c->r[0]=0u+0x00000080u; // 800D840C
  {uint32_t ea=c->r[2]+0xFFFF9E68u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D8410
  c->r[4]=0u+0x80380000u; // 800D8414
  W32(c->r[31]+0x0000006Cu,c->r[30]); // 800D8418
  c->r[3]=c->r[31]+0x00000118u; // 800D841C
  c->r[4]=c->r[4]+0xFFFFE048u; // 800D8420
  c->r[5]=0u+0x00000020u; // 800D8424
  W32(c->r[31]+0x00000018u,c->r[30]); // 800D8428
  W32(c->r[31]+0x00000028u,c->r[30]); // 800D842C
  W32(c->r[31]+0x0000002Cu,c->r[30]); // 800D8430
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[2]);} // 800D8434
  {uint32_t ea=c->r[31]+0x00000034u; WF32(ea,c->f[2]);} // 800D8438
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[1]);} // 800D843C
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 800D8440
  W32(c->r[31]+0x00000040u,c->r[30]); // 800D8444
  {uint32_t ea=c->r[31]+0x000000D4u; WF32(ea,c->f[2]);} // 800D8448
  {uint32_t ea=c->r[31]+0x000000D8u; WF32(ea,c->f[0]);} // 800D844C
  W32(c->r[31]+0x00000044u,c->r[30]); // 800D8450
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 800D8454
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D8458
  W32(c->r[31]+0x00000048u,c->r[30]); // 800D845C
  W32(c->r[31]+0x0000004Cu,c->r[30]); // 800D8460
  W32(c->r[31]+0x00000050u,c->r[30]); // 800D8464
  W32(c->r[31]+0x00000054u,c->r[30]); // 800D8468
  W32(c->r[31]+0x00000058u,c->r[30]); // 800D846C
  W32(c->r[31]+0x0000005Cu,c->r[30]); // 800D8470
  {uint32_t ea=c->r[31]+0x000000B0u; WF32(ea,c->f[1]);} // 800D8474
  {uint32_t ea=c->r[31]+0x000000B4u; WF32(ea,c->f[1]);} // 800D8478
  {uint32_t ea=c->r[31]+0x000000B8u; WF32(ea,c->f[1]);} // 800D847C
  {uint32_t ea=c->r[31]+0x000000BCu; WF32(ea,c->f[1]);} // 800D8480
  {uint32_t ea=c->r[31]+0x000000C0u; WF32(ea,c->f[1]);} // 800D8484
  {uint32_t ea=c->r[31]+0x000000C4u; WF32(ea,c->f[1]);} // 800D8488
  {uint32_t ea=c->r[31]+0x000000C8u; WF32(ea,c->f[1]);} // 800D848C
  {uint32_t ea=c->r[31]+0x000000CCu; WF32(ea,c->f[1]);} // 800D8490
  {uint32_t ea=c->r[31]+0x000000D0u; WF32(ea,c->f[2]);} // 800D8494
  c->lr=0x800D849Cu; f_80004000(c); // 800D8498
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D849C
  c->r[0]=0u+0x00002710u; // 800D84A0
  {uint32_t ea=c->r[2]+0xFFFF9E4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D84A4
  c->r[3]=0u+0x00000000u; // 800D84A8
  {uint32_t ea=c->r[2]+0xFFFF9E6Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800D84AC
  W32(c->r[31]+0x00000060u,c->r[30]); // 800D84B0
  W16(c->r[31]+0x00000064u,c->r[30]); // 800D84B4
  W32(c->r[31]+0x00000068u,c->r[30]); // 800D84B8
  W32(c->r[31]+0x00000070u,c->r[30]); // 800D84BC
  W32(c->r[31]+0x00000074u,c->r[30]); // 800D84C0
  W32(c->r[31]+0x00000078u,c->r[30]); // 800D84C4
  W32(c->r[31]+0x0000007Cu,c->r[30]); // 800D84C8
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[2]);} // 800D84CC
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[2]);} // 800D84D0
  W32(c->r[31]+0x00000088u,c->r[0]); // 800D84D4
  W32(c->r[31]+0x000000F4u,c->r[30]); // 800D84D8
  {uint32_t ea=c->r[31]+0x000000F8u; WF32(ea,c->f[1]);} // 800D84DC
  {uint32_t ea=c->r[31]+0x000000FCu; WF32(ea,c->f[1]);} // 800D84E0
  {uint32_t ea=c->r[31]+0x00000100u; WF32(ea,c->f[0]);} // 800D84E4
  {uint32_t ea=c->r[31]+0x00000104u; WF32(ea,c->f[0]);} // 800D84E8
  {uint32_t ea=c->r[31]+0x0000008Cu; WF32(ea,c->f[2]);} // 800D84EC
  {uint32_t ea=c->r[31]+0x00000090u; WF32(ea,c->f[2]);} // 800D84F0
  {uint32_t ea=c->r[31]+0x00000108u; WF32(ea,c->f[2]);} // 800D84F4
  {uint32_t ea=c->r[31]+0x0000010Cu; WF32(ea,c->f[2]);} // 800D84F8
  {uint32_t ea=c->r[31]+0x00000110u; WF32(ea,c->f[2]);} // 800D84FC
  {uint32_t ea=c->r[31]+0x00000114u; WF32(ea,c->f[0]);} // 800D8500
  {uint32_t ea=c->r[31]+0x00000094u; WF32(ea,c->f[2]);} // 800D8504
  {uint32_t ea=c->r[31]+0x00000098u; WF32(ea,c->f[0]);} // 800D8508
  {uint32_t ea=c->r[31]+0x0000009Cu; WF32(ea,c->f[2]);} // 800D850C
  {uint32_t ea=c->r[31]+0x000000A0u; WF32(ea,c->f[0]);} // 800D8510
  {uint32_t ea=c->r[31]+0x000000DCu; WF32(ea,c->f[2]);} // 800D8514
  {uint32_t ea=c->r[31]+0x000000E0u; WF32(ea,c->f[2]);} // 800D8518
  {uint32_t ea=c->r[31]+0x000000E4u; WF32(ea,c->f[2]);} // 800D851C
  W16(c->r[31]+0x000000A4u,c->r[30]); // 800D8520
  W16(c->r[31]+0x000000A6u,c->r[30]); // 800D8524
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D8528
  c->r[30]=R32(c->r[1]+0x00000018u); // 800D852C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D8530
  c->lr=c->r[0]; // 800D8534
  c->r[1]=c->r[1]+0x00000020u; // 800D8538
  return; // 800D853C
}

// fn_800D8540
void f_800D8540(Ctx* __restrict c) {
  trace_call(0x800D8540u);
  c->r[4]=R32(c->r[3]+0x000000ACu); // 800D8540
  cmps(c,0,(int32_t)c->r[4],0); // 800D8544
  if (crb(c,2)) { goto L_800D8554; } // 800D8548
  c->r[0]=R32(c->r[4]+0x00000000u); // 800D854C
  goto L_800D8558; // 800D8550
L_800D8554:;
  c->r[0]=0u+0x00000000u; // 800D8554
L_800D8558:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D8558
  if (crb(c,2)) { goto L_800D8580; } // 800D855C
  cmps(c,0,(int32_t)c->r[4],0); // 800D8560
  if (crb(c,2)) { goto L_800D8570; } // 800D8564
  c->r[3]=R32(c->r[4]+0x00000000u); // 800D8568
  goto L_800D8574; // 800D856C
L_800D8570:;
  c->r[3]=0u+0x00000000u; // 800D8570
L_800D8574:;
  c->r[3]=R32(c->r[3]+0x000000A8u); // 800D8574
  c->r[3]=R32(c->r[3]+0x00000018u); // 800D8578
  return; // 800D857C
L_800D8580:;
  c->r[3]=R32(c->r[3]+0x000000A8u); // 800D8580
  cmps(c,0,(int32_t)c->r[3],0); // 800D8584
  if (crb(c,2)) { goto L_800D8594; } // 800D8588
  c->r[3]=R32(c->r[3]+0x00000018u); // 800D858C
  return; // 800D8590
L_800D8594:;
  c->r[3]=0u+0x00000000u; // 800D8594
  return; // 800D8598
}

// fn_800D85A0
void f_800D85A0(Ctx* __restrict c) {
  trace_call(0x800D85A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D85A0
  c->r[0]=c->lr; // 800D85A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D85A8
  c->r[11]=c->r[1]+0x00000020u; // 800D85AC
  c->lr=0x800D85B4u; f_800C2E54(c); // 800D85B0
  c->r[6]=R32(c->r[3]+0x00000060u); // 800D85B4
  c->r[30]=c->r[3]|c->r[3]; // 800D85B8
  c->r[29]=c->r[4]|c->r[4]; // 800D85BC
  c->r[31]=c->r[5]|c->r[5]; // 800D85C0
  c->r[0]=rotl(c->r[6],0)&0x02000000u; cr0(c,c->r[0]); // 800D85C4
  if (crb(c,2)) { goto L_800D85D4; } // 800D85C8
  c->r[3]=0u+0x00000000u; // 800D85CC
  goto L_800D8980; // 800D85D0
L_800D85D4:;
  c->r[0]=c->r[6]|0x02000000u; // 800D85D4
  W32(c->r[3]+0x00000060u,c->r[0]); // 800D85D8
  c->r[4]=0u+0x00000001u; // 800D85DC
  c->r[12]=R32(c->r[3]+0x00000010u); // 800D85E0
  c->r[12]=R32(c->r[12]+0x00000014u); // 800D85E4
  c->ctr=c->r[12]; // 800D85E8
  if (true) { c->lr=0x800D85F0u; dispatch(c,c->ctr); } // 800D85EC
  c->r[3]=c->r[30]|c->r[30]; // 800D85F0
  c->lr=0x800D85F8u; f_800D9550(c); // 800D85F4
  cmps(c,0,(int32_t)c->r[3],0); // 800D85F8
  if (crb(c,2)) { goto L_800D8610; } // 800D85FC
  c->r[0]=R32(c->r[30]+0x00000060u); // 800D8600
  c->r[0]=rotl(c->r[0],0)&0xFDFFFFFFu; // 800D8604
  W32(c->r[30]+0x00000060u,c->r[0]); // 800D8608
  goto L_800D8980; // 800D860C
L_800D8610:;
  c->r[3]=c->r[30]|c->r[30]; // 800D8610
  c->r[4]=c->r[29]|c->r[29]; // 800D8614
  c->lr=0x800D861Cu; f_800D8DD0(c); // 800D8618
  cmps(c,0,(int32_t)c->r[3],0); // 800D861C
  if (crb(c,2)) { goto L_800D8628; } // 800D8620
  goto L_800D8980; // 800D8624
L_800D8628:;
  c->r[0]=R32(c->r[30]+0x000000A8u); // 800D8628
  cmps(c,0,(int32_t)c->r[0],0); // 800D862C
  if (crb(c,2)) { goto L_800D86B0; } // 800D8630
  c->r[3]=R32(c->r[30]+0x000000A8u); // 800D8634
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D8638
  cmps(c,0,(int32_t)c->r[0],0); // 800D863C
  if (crb(c,2)) { goto L_800D86B0; } // 800D8640
  c->r[6]=0u+0x00000000u; // 800D8644
  c->r[3]=0u+0x00000000u; // 800D8648
  c->r[5]=c->r[6]|c->r[6]; // 800D864C
  goto L_800D8680; // 800D8650
L_800D8654:;
  c->r[4]=R32(c->r[4]+0x00000004u); // 800D8654
  c->r[4]=R32(c->r[4]+c->r[3]); // 800D8658
  cmps(c,0,(int32_t)c->r[4],0); // 800D865C
  if (crb(c,2)) { goto L_800D8678; } // 800D8660
  c->r[4]=R32(c->r[4]+0x000000ACu); // 800D8664
  W32(c->r[4]+0x00000000u,c->r[5]); // 800D8668
  c->r[4]=R32(c->r[30]+0x000000A8u); // 800D866C
  c->r[4]=R32(c->r[4]+0x00000004u); // 800D8670
  W32(c->r[4]+c->r[3],c->r[5]); // 800D8674
L_800D8678:;
  c->r[6]=c->r[6]+0x00000001u; // 800D8678
  c->r[3]=c->r[3]+0x00000004u; // 800D867C
L_800D8680:;
  c->r[4]=R32(c->r[30]+0x000000A8u); // 800D8680
  c->r[0]=R32(c->r[4]+0x00000000u); // 800D8684
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 800D8688
  if (crb(c,0)) { IRQCHK(c); goto L_800D8654; } // 800D868C
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 800D8690
  c->r[5]=0u+0x80390000u; // 800D8694
  c->r[4]=R32(c->r[4]+0x00000004u); // 800D8698
  c->r[5]=c->r[5]+0xFFFFCD28u; // 800D869C
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D86A0
  c->r[6]=0u+0x00000399u; // 800D86A4
  c->r[7]=0u+0x00000000u; // 800D86A8
  c->lr=0x800D86B0u; f_8018F5F0(c); // 800D86AC
L_800D86B0:;
  c->r[3]=R32(c->r[30]+0x00000138u); // 800D86B0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800D86B4
  c->r[12]=R32(c->r[12]+0x00000014u); // 800D86B8
  c->ctr=c->r[12]; // 800D86BC
  if (true) { c->lr=0x800D86C4u; dispatch(c,c->ctr); } // 800D86C0
  cmps(c,0,(int32_t)c->r[3],0); // 800D86C4
  if (crb(c,2)) { goto L_800D86DC; } // 800D86C8
  c->r[0]=R32(c->r[30]+0x00000060u); // 800D86CC
  c->r[0]=rotl(c->r[0],0)&0xFDFFFFFFu; // 800D86D0
  W32(c->r[30]+0x00000060u,c->r[0]); // 800D86D4
  goto L_800D8980; // 800D86D8
L_800D86DC:;
  c->r[3]=c->r[30]+0x0000001Cu; // 800D86DC
  c->lr=0x800D86E4u; f_800D89A0(c); // 800D86E0
  c->r[0]=R32(c->r[30]+0x000000A8u); // 800D86E4
  cmps(c,0,(int32_t)c->r[0],0); // 800D86E8
  if (crb(c,2)) { goto L_800D87EC; } // 800D86EC
  c->r[3]=R32(c->r[30]+0x000000A8u); // 800D86F0
  c->r[4]=R32(c->r[3]+0x00000020u); // 800D86F4
  cmps(c,0,(int32_t)c->r[4],0); // 800D86F8
  if (crb(c,2)) { goto L_800D871C; } // 800D86FC
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 800D8700
  c->r[5]=0u+0x80390000u; // 800D8704
  c->r[6]=0u+0x000003B1u; // 800D8708
  c->r[7]=0u+0x00000000u; // 800D870C
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D8710
  c->r[5]=c->r[5]+0xFFFFCD28u; // 800D8714
  c->lr=0x800D871Cu; f_8018F5F0(c); // 800D8718
L_800D871C:;
  c->r[3]=R32(c->r[30]+0x000000A8u); // 800D871C
  c->r[4]=R32(c->r[3]+0x0000003Cu); // 800D8720
  cmps(c,0,(int32_t)c->r[4],0); // 800D8724
  if (crb(c,2)) { goto L_800D8748; } // 800D8728
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 800D872C
  c->r[5]=0u+0x80390000u; // 800D8730
  c->r[6]=0u+0x000003B6u; // 800D8734
  c->r[7]=0u+0x00000000u; // 800D8738
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D873C
  c->r[5]=c->r[5]+0xFFFFCD28u; // 800D8740
  c->lr=0x800D8748u; f_8018F5F0(c); // 800D8744
L_800D8748:;
  c->r[3]=c->r[30]|c->r[30]; // 800D8748
  c->lr=0x800D8750u; f_800D8540(c); // 800D874C
  cmps(c,0,(int32_t)c->r[3],0); // 800D8750
  if (crb(c,2)) { goto L_800D87A0; } // 800D8754
  c->r[3]=R32(c->r[30]+0x000000ACu); // 800D8758
  cmps(c,0,(int32_t)c->r[3],0); // 800D875C
  if (crb(c,2)) { goto L_800D876C; } // 800D8760
  c->r[0]=R32(c->r[3]+0x00000020u); // 800D8764
  goto L_800D8770; // 800D8768
L_800D876C:;
  c->r[0]=0u+0x00000000u; // 800D876C
L_800D8770:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D8770
  if (!crb(c,2)) { goto L_800D87A0; } // 800D8774
  c->r[3]=c->r[30]|c->r[30]; // 800D8778
  c->lr=0x800D8780u; f_800D8540(c); // 800D877C
  c->r[7]=R32(c->r[13]+0xFFFF8E48u); // 800D8780
  c->r[4]=c->r[3]|c->r[3]; // 800D8784
  c->r[5]=0u+0x80390000u; // 800D8788
  c->r[6]=0u+0x000003BFu; // 800D878C
  c->r[3]=R32(c->r[7]+0x00000004u); // 800D8790
  c->r[5]=c->r[5]+0xFFFFCD28u; // 800D8794
  c->r[7]=0u+0x00000000u; // 800D8798
  c->lr=0x800D87A0u; f_8018F5F0(c); // 800D879C
L_800D87A0:;
  c->r[3]=R32(c->r[30]+0x000000A8u); // 800D87A0
  c->r[4]=R32(c->r[3]+0x00000014u); // 800D87A4
  cmps(c,0,(int32_t)c->r[4],0); // 800D87A8
  if (crb(c,2)) { goto L_800D87EC; } // 800D87AC
  c->r[3]=R32(c->r[30]+0x000000ACu); // 800D87B0
  cmps(c,0,(int32_t)c->r[3],0); // 800D87B4
  if (crb(c,2)) { goto L_800D87C4; } // 800D87B8
  c->r[0]=R32(c->r[3]+0x00000020u); // 800D87BC
  goto L_800D87C8; // 800D87C0
L_800D87C4:;
  c->r[0]=0u+0x00000000u; // 800D87C4
L_800D87C8:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D87C8
  if (!crb(c,2)) { goto L_800D87EC; } // 800D87CC
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 800D87D0
  c->r[5]=0u+0x80390000u; // 800D87D4
  c->r[6]=0u+0x000003CBu; // 800D87D8
  c->r[7]=0u+0x00000000u; // 800D87DC
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D87E0
  c->r[5]=c->r[5]+0xFFFFCD28u; // 800D87E4
  c->lr=0x800D87ECu; f_8018F5F0(c); // 800D87E8
L_800D87EC:;
  c->r[3]=R32(c->r[30]+0x000000ACu); // 800D87EC
  cmps(c,0,(int32_t)c->r[3],0); // 800D87F0
  if (crb(c,2)) { goto L_800D8800; } // 800D87F4
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D87F8
  goto L_800D8804; // 800D87FC
L_800D8800:;
  c->r[0]=0u+0x00000000u; // 800D8800
L_800D8804:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D8804
  if (crb(c,2)) { goto L_800D8828; } // 800D8808
  cmps(c,0,(int32_t)c->r[3],0); // 800D880C
  if (crb(c,2)) { goto L_800D881C; } // 800D8810
  c->r[3]=R32(c->r[3]+0x00000000u); // 800D8814
  goto L_800D8820; // 800D8818
L_800D881C:;
  c->r[3]=0u+0x00000000u; // 800D881C
L_800D8820:;
  c->r[4]=c->r[30]|c->r[30]; // 800D8820
  c->lr=0x800D8828u; f_800D8BE0(c); // 800D8824
L_800D8828:;
  c->r[4]=R32(c->r[30]+0x00000044u); // 800D8828
  cmps(c,0,(int32_t)c->r[4],0); // 800D882C
  if (crb(c,2)) { goto L_800D8850; } // 800D8830
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 800D8834
  c->r[5]=0u+0x80390000u; // 800D8838
  c->r[6]=0u+0x000003D7u; // 800D883C
  c->r[7]=0u+0x00000000u; // 800D8840
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D8844
  c->r[5]=c->r[5]+0xFFFFCD28u; // 800D8848
  c->lr=0x800D8850u; f_8018F5F0(c); // 800D884C
L_800D8850:;
  c->r[3]=R32(c->r[30]+0x000000ACu); // 800D8850
  cmps(c,0,(int32_t)c->r[3],0); // 800D8854
  if (crb(c,2)) { goto L_800D8864; } // 800D8858
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D885C
  goto L_800D8868; // 800D8860
L_800D8864:;
  c->r[0]=0u+0x00000000u; // 800D8864
L_800D8868:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D8868
  if (!crb(c,2)) { goto L_800D8894; } // 800D886C
  c->r[3]=c->r[30]|c->r[30]; // 800D8870
  c->lr=0x800D8878u; f_800D89D0(c); // 800D8874
  c->r[4]=c->r[3]|c->r[3]; // 800D8878
  c->r[3]=R32(c->r[13]+0xFFFF9830u); // 800D887C
  c->r[5]=0u+0x00000000u; // 800D8880
  c->r[12]=R32(c->r[3]+0x00000000u); // 800D8884
  c->r[12]=R32(c->r[12]+0x000000E4u); // 800D8888
  c->ctr=c->r[12]; // 800D888C
  if (true) { c->lr=0x800D8894u; dispatch(c,c->ctr); } // 800D8890
L_800D8894:;
  c->r[3]=c->r[30]|c->r[30]; // 800D8894
  c->lr=0x800D889Cu; f_800D89A0(c); // 800D8898
  c->r[3]=R32(c->r[30]+0x000000ACu); // 800D889C
  cmps(c,0,(int32_t)c->r[3],0); // 800D88A0
  if (crb(c,2)) { goto L_800D88B0; } // 800D88A4
  c->r[29]=R32(c->r[3]+0x00000020u); // 800D88A8
  goto L_800D88B4; // 800D88AC
L_800D88B0:;
  c->r[29]=0u+0x00000000u; // 800D88B0
L_800D88B4:;
  c->r[3]=R32(c->r[30]+0x00000138u); // 800D88B4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800D88B8
  c->r[12]=R32(c->r[12]+0x00000010u); // 800D88BC
  c->ctr=c->r[12]; // 800D88C0
  if (true) { c->lr=0x800D88C8u; dispatch(c,c->ctr); } // 800D88C4
  cmps(c,0,(int32_t)c->r[3],0); // 800D88C8
  if (crb(c,2)) { goto L_800D88E0; } // 800D88CC
  c->r[0]=R32(c->r[30]+0x00000060u); // 800D88D0
  c->r[0]=rotl(c->r[0],0)&0xFDFFFFFFu; // 800D88D4
  W32(c->r[30]+0x00000060u,c->r[0]); // 800D88D8
  goto L_800D8980; // 800D88DC
L_800D88E0:;
  c->r[4]=R32(c->r[30]+0x000000A8u); // 800D88E0
  cmps(c,0,(int32_t)c->r[4],0); // 800D88E4
  if (crb(c,2)) { goto L_800D8910; } // 800D88E8
  cmps(c,0,(int32_t)c->r[29],0); // 800D88EC
  if (!crb(c,2)) { goto L_800D8910; } // 800D88F0
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 800D88F4
  c->r[5]=0u+0x80390000u; // 800D88F8
  c->r[6]=0u+0x000003FCu; // 800D88FC
  c->r[7]=0u+0x00000000u; // 800D8900
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D8904
  c->r[5]=c->r[5]+0xFFFFCD28u; // 800D8908
  c->lr=0x800D8910u; f_8018F5F0(c); // 800D890C
L_800D8910:;
  c->r[4]=R32(c->r[30]+0x000000ACu); // 800D8910
  cmps(c,0,(int32_t)c->r[4],0); // 800D8914
  if (crb(c,2)) { goto L_800D8940; } // 800D8918
  cmps(c,0,(int32_t)c->r[29],0); // 800D891C
  if (!crb(c,2)) { goto L_800D8940; } // 800D8920
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 800D8924
  c->r[5]=0u+0x80390000u; // 800D8928
  c->r[6]=0u+0x00000406u; // 800D892C
  c->r[7]=0u+0x00000000u; // 800D8930
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D8934
  c->r[5]=c->r[5]+0xFFFFCD28u; // 800D8938
  c->lr=0x800D8940u; f_8018F5F0(c); // 800D893C
L_800D8940:;
  cmps(c,0,(int32_t)c->r[31],0); // 800D8940
  if (crb(c,2)) { goto L_800D897C; } // 800D8944
  cmps(c,0,(int32_t)c->r[29],0); // 800D8948
  if (crb(c,2)) { goto L_800D895C; } // 800D894C
  c->r[3]=c->r[29]|c->r[29]; // 800D8950
  c->lr=0x800D8958u; f_800F14F0(c); // 800D8954
  goto L_800D897C; // 800D8958
L_800D895C:;
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 800D895C
  c->r[5]=0u+0x80390000u; // 800D8960
  c->r[4]=c->r[30]|c->r[30]; // 800D8964
  c->r[6]=0u+0x00000413u; // 800D8968
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D896C
  c->r[5]=c->r[5]+0xFFFFCD28u; // 800D8970
  c->r[7]=0u+0x00000000u; // 800D8974
  c->lr=0x800D897Cu; f_8018F5F0(c); // 800D8978
L_800D897C:;
  c->r[3]=0u+0x00000000u; // 800D897C
L_800D8980:;
  c->r[11]=c->r[1]+0x00000020u; // 800D8980
  c->lr=0x800D8988u; f_800C2EA0(c); // 800D8984
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D8988
  c->lr=c->r[0]; // 800D898C
  c->r[1]=c->r[1]+0x00000020u; // 800D8990
  return; // 800D8994
}

// fn_800D89A0
void f_800D89A0(Ctx* __restrict c) {
  trace_call(0x800D89A0u);
  c->r[4]=R32(c->r[3]+0x00000004u); // 800D89A0
  c->r[0]=0u+0x00000000u; // 800D89A4
  c->r[5]=R32(c->r[3]+0x00000000u); // 800D89A8
  W32(c->r[4]+0x00000000u,c->r[5]); // 800D89AC
  c->r[4]=R32(c->r[3]+0x00000000u); // 800D89B0
  c->r[5]=R32(c->r[3]+0x00000004u); // 800D89B4
  W32(c->r[4]+0x00000004u,c->r[5]); // 800D89B8
  W32(c->r[3]+0x00000004u,c->r[3]); // 800D89BC
  W32(c->r[3]+0x00000000u,c->r[3]); // 800D89C0
  W32(c->r[3]+0x00000008u,c->r[0]); // 800D89C4
  return; // 800D89C8
}

// fn_800D89D0
void f_800D89D0(Ctx* __restrict c) {
  trace_call(0x800D89D0u);
  c->r[4]=R32(c->r[3]+0x000000ACu); // 800D89D0
  cmps(c,0,(int32_t)c->r[4],0); // 800D89D4
  if (crb(c,2)) { goto L_800D89E4; } // 800D89D8
  c->r[0]=R32(c->r[4]+0x00000000u); // 800D89DC
  goto L_800D89E8; // 800D89E0
L_800D89E4:;
  c->r[0]=0u+0x00000000u; // 800D89E4
L_800D89E8:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D89E8
  if (crb(c,2)) { goto L_800D8A10; } // 800D89EC
  cmps(c,0,(int32_t)c->r[4],0); // 800D89F0
  if (crb(c,2)) { goto L_800D8A00; } // 800D89F4
  c->r[3]=R32(c->r[4]+0x00000000u); // 800D89F8
  goto L_800D8A04; // 800D89FC
L_800D8A00:;
  c->r[3]=0u+0x00000000u; // 800D8A00
L_800D8A04:;
  c->r[3]=R32(c->r[3]+0x000000A8u); // 800D8A04
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800D8A08
  return; // 800D8A0C
L_800D8A10:;
  c->r[3]=R32(c->r[3]+0x000000A8u); // 800D8A10
  cmps(c,0,(int32_t)c->r[3],0); // 800D8A14
  if (crb(c,2)) { goto L_800D8A24; } // 800D8A18
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800D8A1C
  return; // 800D8A20
L_800D8A24:;
  c->r[3]=0u+0x00000000u; // 800D8A24
  return; // 800D8A28
}

// fn_800D8A30
void f_800D8A30(Ctx* __restrict c) {
  trace_call(0x800D8A30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8A30
  c->r[0]=c->lr; // 800D8A34
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D8A38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D8A3C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D8A40
  c->r[30]=c->r[3]|c->r[3]; // 800D8A44
  c->r[4]=R32(c->r[3]+0x000000ACu); // 800D8A48
  cmps(c,0,(int32_t)c->r[4],0); // 800D8A4C
  if (crb(c,2)) { goto L_800D8A5C; } // 800D8A50
  c->r[31]=R32(c->r[4]+0x00000000u); // 800D8A54
  goto L_800D8A60; // 800D8A58
L_800D8A5C:;
  c->r[31]=0u+0x00000000u; // 800D8A5C
L_800D8A60:;
  {uint32_t ea=c->r[31]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D8A60
  c->r[0]=0u+0x00000000u; // 800D8A64
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[0]);} // 800D8A68
  c->r[4]=c->r[31]+0x000000B0u; // 800D8A6C
  c->r[6]=R32(c->r[3]+0x00000060u); // 800D8A70
  c->r[5]=0u+0x0000000Cu; // 800D8A74
  {uint32_t ea=c->r[31]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D8A78
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[0]);} // 800D8A7C
  c->r[8]=rotl(c->r[6],0)&0xFFFFDFFFu; // 800D8A80
  c->r[7]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000064u); // 800D8A84
  {uint32_t ea=c->r[31]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D8A88
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 800D8A8C
  {uint32_t ea=c->r[31]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D8A90
  {uint32_t ea=c->r[3]+0x000000D4u; WF32(ea,c->f[0]);} // 800D8A94
  {uint32_t ea=c->r[31]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D8A98
  {uint32_t ea=c->r[3]+0x000000D8u; WF32(ea,c->f[0]);} // 800D8A9C
  W32(c->r[3]+0x00000060u,c->r[8]); // 800D8AA0
  c->r[6]=R32(c->r[31]+0x00000060u); // 800D8AA4
  c->r[8]=(rotl(c->r[6],0)&0x00002000u)|(c->r[8]&~0x00002000u); // 800D8AA8
  c->r[6]=c->r[8]|0x04000000u; // 800D8AAC
  W32(c->r[3]+0x00000060u,c->r[6]); // 800D8AB0
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000064u); // 800D8AB4
  c->r[6]=rotl(c->r[6],0)&0xFFFFFF3Fu; // 800D8AB8
  W32(c->r[3]+0x00000074u,c->r[0]); // 800D8ABC
  c->r[6]=(rotl(c->r[7],0)&0x000000C0u)|(c->r[6]&~0x000000C0u); // 800D8AC0
  W16(c->r[3]+0x00000064u,c->r[6]); // 800D8AC4
  W32(c->r[3]+0x00000078u,c->r[0]); // 800D8AC8
  W32(c->r[3]+0x0000007Cu,c->r[0]); // 800D8ACC
  c->r[3]=c->r[3]+0x000000B0u; // 800D8AD0
  c->lr=0x800D8AD8u; f_80004000(c); // 800D8AD4
  c->r[3]=c->r[30]+0x000000BCu; // 800D8AD8
  c->r[4]=c->r[31]+0x000000BCu; // 800D8ADC
  c->r[5]=0u+0x0000000Cu; // 800D8AE0
  c->lr=0x800D8AE8u; f_80004000(c); // 800D8AE4
  c->r[3]=c->r[30]+0x000000C8u; // 800D8AE8
  c->r[4]=c->r[31]+0x000000C8u; // 800D8AEC
  c->r[5]=0u+0x0000000Cu; // 800D8AF0
  c->lr=0x800D8AF8u; f_80004000(c); // 800D8AF4
  {uint32_t ea=c->r[31]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D8AF8
  c->r[3]=c->r[30]|c->r[30]; // 800D8AFC
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[0]);} // 800D8B00
  c->r[4]=0u+0x00000001u; // 800D8B04
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D8B08
  {uint32_t ea=c->r[31]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D8B0C
  {uint32_t ea=c->r[30]+0x00000084u; WF32(ea,c->f[1]);} // 800D8B10
  {uint32_t ea=c->r[31]+0x00000114u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D8B14
  {uint32_t ea=c->r[30]+0x00000114u; WF32(ea,c->f[1]);} // 800D8B18
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x000000A4u); // 800D8B1C
  W16(c->r[30]+0x000000A4u,c->r[0]); // 800D8B20
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x000000A6u); // 800D8B24
  W16(c->r[30]+0x000000A6u,c->r[0]); // 800D8B28
  {uint32_t ea=c->r[30]+0x00000094u; WF32(ea,c->f[0]);} // 800D8B2C
  c->r[0]=R32(c->r[31]+0x000000F4u); // 800D8B30
  W32(c->r[30]+0x000000F4u,c->r[0]); // 800D8B34
  {uint32_t ea=c->r[31]+0x0000010Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D8B38
  {uint32_t ea=c->r[31]+0x00000108u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D8B3C
  c->lr=0x800D8B44u; f_800DCF60(c); // 800D8B40
  cmps(c,0,(int32_t)c->r[3],0); // 800D8B44
  if (crb(c,2)) { goto L_800D8B50; } // 800D8B48
  goto L_800D8BC8; // 800D8B4C
L_800D8B50:;
  c->r[3]=c->r[30]+0x000000DCu; // 800D8B50
  c->r[4]=c->r[31]+0x000000DCu; // 800D8B54
  c->r[5]=0u+0x0000000Cu; // 800D8B58
  c->lr=0x800D8B60u; f_80004000(c); // 800D8B5C
  c->r[3]=c->r[30]|c->r[30]; // 800D8B60
  c->lr=0x800D8B68u; f_800DDED0(c); // 800D8B64
  c->r[0]=R32(c->r[30]+0x000000F4u); // 800D8B68
  cmps(c,0,(int32_t)c->r[0],0); // 800D8B6C
  if (crb(c,2)) { goto L_800D8BA4; } // 800D8B70
  {uint32_t ea=c->r[30]+0x000000B0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D8B74
  {uint32_t ea=c->r[30]+0x000000E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D8B78
  {uint32_t ea=c->r[30]+0x000000B4u; c->f[3]=c->ps1[3]=RF32(ea);} // 800D8B7C
  c->f[4]=c->ps1[4]=S(c->f[1]+c->f[0]); // 800D8B80
  {uint32_t ea=c->r[30]+0x000000ECu; c->f[2]=c->ps1[2]=RF32(ea);} // 800D8B84
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D8B88
  {uint32_t ea=c->r[30]+0x000000F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D8B8C
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 800D8B90
  {uint32_t ea=c->r[30]+0x000000B0u; WF32(ea,c->f[4]);} // 800D8B94
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800D8B98
  {uint32_t ea=c->r[30]+0x000000B4u; WF32(ea,c->f[2]);} // 800D8B9C
  {uint32_t ea=c->r[30]+0x000000B8u; WF32(ea,c->f[0]);} // 800D8BA0
L_800D8BA4:;
  c->r[3]=R32(c->r[30]+0x00000138u); // 800D8BA4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800D8BA8
  c->r[12]=R32(c->r[12]+0x00000084u); // 800D8BAC
  c->ctr=c->r[12]; // 800D8BB0
  if (true) { c->lr=0x800D8BB8u; dispatch(c,c->ctr); } // 800D8BB4
  cmps(c,0,(int32_t)c->r[3],0); // 800D8BB8
  if (crb(c,2)) { goto L_800D8BC4; } // 800D8BBC
  goto L_800D8BC8; // 800D8BC0
L_800D8BC4:;
  c->r[3]=0u+0x00000000u; // 800D8BC4
L_800D8BC8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D8BC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D8BCC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D8BD0
  c->lr=c->r[0]; // 800D8BD4
  c->r[1]=c->r[1]+0x00000010u; // 800D8BD8
  return; // 800D8BDC
}

// fn_800D8BE0
void f_800D8BE0(Ctx* __restrict c) {
  trace_call(0x800D8BE0u);
  c->r[6]=R32(c->r[3]+0x000000A8u); // 800D8BE0
  c->r[7]=R32(c->r[6]+0x00000004u); // 800D8BE4
  cmps(c,0,(int32_t)c->r[7],0); // 800D8BE8
  if (crb(c,2)) { goto L_800D8C2C; } // 800D8BEC
  c->r[0]=R32(c->r[6]+0x00000000u); // 800D8BF0
  c->r[3]=0u+0x00000000u; // 800D8BF4
  c->ctr=c->r[0]; // 800D8BF8
  cmps(c,0,(int32_t)c->r[0],0); // 800D8BFC
  if (!crb(c,1)) { goto L_800D8C2C; } // 800D8C00
L_800D8C04:;
  c->r[5]=R32(c->r[6]+0x00000004u); // 800D8C04
  c->r[0]=R32(c->r[5]+c->r[3]); // 800D8C08
  cmpu(c,0,c->r[0],c->r[4]); // 800D8C0C
  if (!crb(c,2)) { goto L_800D8C24; } // 800D8C10
  c->r[0]=0u+0x00000000u; // 800D8C14
  W32(c->r[7]+c->r[3],c->r[0]); // 800D8C18
  c->r[3]=0u+0x00000000u; // 800D8C1C
  return; // 800D8C20
L_800D8C24:;
  c->r[3]=c->r[3]+0x00000004u; // 800D8C24
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D8C04; } // 800D8C28
L_800D8C2C:;
  c->r[3]=0u+0x00000025u; // 800D8C2C
  return; // 800D8C30
}

// fn_800D8C40
void f_800D8C40(Ctx* __restrict c) {
  trace_call(0x800D8C40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8C40
  c->r[0]=c->lr; // 800D8C44
  cmps(c,0,(int32_t)c->r[4],128); // 800D8C48
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D8C4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D8C50
  c->r[31]=c->r[4]|c->r[4]; // 800D8C54
  W32(c->r[1]+0x00000008u,c->r[30]); // 800D8C58
  c->r[30]=c->r[3]|c->r[3]; // 800D8C5C
  if (crb(c,0)) { goto L_800D8C68; } // 800D8C60
  c->r[31]=0u+0x0000007Fu; // 800D8C64
L_800D8C68:;
  c->r[3]=R32(c->r[3]+0x000000A8u); // 800D8C68
  c->r[4]=R32(c->r[3]+0x00000004u); // 800D8C6C
  cmps(c,0,(int32_t)c->r[4],0); // 800D8C70
  if (crb(c,2)) { goto L_800D8CA0; } // 800D8C74
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 800D8C78
  c->r[5]=0u+0x80390000u; // 800D8C7C
  c->r[6]=0u+0x00000486u; // 800D8C80
  c->r[7]=0u+0x00000000u; // 800D8C84
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D8C88
  c->r[5]=c->r[5]+0xFFFFCD28u; // 800D8C8C
  c->lr=0x800D8C94u; f_8018F5F0(c); // 800D8C90
  c->r[3]=R32(c->r[30]+0x000000A8u); // 800D8C94
  c->r[0]=0u+0x00000000u; // 800D8C98
  W32(c->r[3]+0x00000004u,c->r[0]); // 800D8C9C
L_800D8CA0:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000064u); // 800D8CA0
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 800D8CA4
  if (!crb(c,2)) { goto L_800D8CEC; } // 800D8CA8
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 800D8CAC
  c->r[5]=0u+0x80390000u; // 800D8CB0
  c->r[4]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800D8CB4
  c->r[6]=0u+0x0000048Cu; // 800D8CB8
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D8CBC
  c->r[5]=c->r[5]+0xFFFFCD28u; // 800D8CC0
  c->r[7]=0u+0x00000000u; // 800D8CC4
  c->lr=0x800D8CCCu; f_8018F760(c); // 800D8CC8
  c->r[4]=R32(c->r[30]+0x000000A8u); // 800D8CCC
  W32(c->r[4]+0x00000004u,c->r[3]); // 800D8CD0
  c->r[3]=R32(c->r[30]+0x000000A8u); // 800D8CD4
  c->r[0]=R32(c->r[3]+0x00000004u); // 800D8CD8
  cmps(c,0,(int32_t)c->r[0],0); // 800D8CDC
  if (!crb(c,2)) { goto L_800D8CEC; } // 800D8CE0
  c->r[3]=0u+0x0000002Cu; // 800D8CE4
  goto L_800D8CF8; // 800D8CE8
L_800D8CEC:;
  c->r[4]=R32(c->r[30]+0x000000A8u); // 800D8CEC
  c->r[3]=0u+0x00000000u; // 800D8CF0
  W32(c->r[4]+0x00000000u,c->r[31]); // 800D8CF4
L_800D8CF8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D8CF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D8CFC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800D8D00
  c->lr=c->r[0]; // 800D8D04
  c->r[1]=c->r[1]+0x00000010u; // 800D8D08
  return; // 800D8D0C
}

// fn_800D8D10
void f_800D8D10(Ctx* __restrict c) {
  trace_call(0x800D8D10u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8D10
  c->r[0]=c->lr; // 800D8D14
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D8D18
  c->r[11]=c->r[1]+0x00000020u; // 800D8D1C
  c->lr=0x800D8D24u; f_800C2E50(c); // 800D8D20
  c->r[0]=R32(c->r[3]+0x000000A8u); // 800D8D24
  c->r[28]=c->r[3]|c->r[3]; // 800D8D28
  c->r[29]=c->r[4]|c->r[4]; // 800D8D2C
  cmps(c,0,(int32_t)c->r[0],0); // 800D8D30
  if (crb(c,2)) { goto L_800D8D8C; } // 800D8D34
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000064u); // 800D8D38
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 800D8D3C
  if (!crb(c,2)) { goto L_800D8D8C; } // 800D8D40
  c->r[30]=0u+0x00000000u; // 800D8D44
  c->r[31]=0u+0x00000000u; // 800D8D48
  goto L_800D8D74; // 800D8D4C
L_800D8D50:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 800D8D50
  c->r[4]=c->r[29]|c->r[29]; // 800D8D54
  c->r[3]=R32(c->r[3]+c->r[31]); // 800D8D58
  c->lr=0x800D8D60u; f_800D8D10(c); // 800D8D5C
  cmps(c,0,(int32_t)c->r[3],0); // 800D8D60
  if (crb(c,2)) { goto L_800D8D6C; } // 800D8D64
  goto L_800D8DB4; // 800D8D68
L_800D8D6C:;
  c->r[30]=c->r[30]+0x00000001u; // 800D8D6C
  c->r[31]=c->r[31]+0x00000004u; // 800D8D70
L_800D8D74:;
  c->r[3]=R32(c->r[28]+0x000000A8u); // 800D8D74
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D8D78
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 800D8D7C
  if (crb(c,0)) { IRQCHK(c); goto L_800D8D50; } // 800D8D80
  c->r[3]=0u+0x00000000u; // 800D8D84
  goto L_800D8DB4; // 800D8D88
L_800D8D8C:;
  c->r[3]=R32(c->r[3]+0x00000138u); // 800D8D8C
  c->r[4]=c->r[29]|c->r[29]; // 800D8D90
  c->r[12]=R32(c->r[3]+0x00000000u); // 800D8D94
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 800D8D98
  c->ctr=c->r[12]; // 800D8D9C
  if (true) { c->lr=0x800D8DA4u; dispatch(c,c->ctr); } // 800D8DA0
  cmps(c,0,(int32_t)c->r[3],0); // 800D8DA4
  if (crb(c,2)) { goto L_800D8DB0; } // 800D8DA8
  goto L_800D8DB4; // 800D8DAC
L_800D8DB0:;
  c->r[3]=0u+0x00000000u; // 800D8DB0
L_800D8DB4:;
  c->r[11]=c->r[1]+0x00000020u; // 800D8DB4
  c->lr=0x800D8DBCu; f_800C2E9C(c); // 800D8DB8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D8DBC
  c->lr=c->r[0]; // 800D8DC0
  c->r[1]=c->r[1]+0x00000020u; // 800D8DC4
  return; // 800D8DC8
}

// fn_800D8DD0
void f_800D8DD0(Ctx* __restrict c) {
  trace_call(0x800D8DD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8DD0
  c->r[0]=c->lr; // 800D8DD4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D8DD8
  c->r[11]=c->r[1]+0x00000020u; // 800D8DDC
  c->lr=0x800D8DE4u; f_800C2E48(c); // 800D8DE0
  c->r[5]=R32(c->r[3]+0x000000ACu); // 800D8DE4
  c->r[29]=c->r[3]|c->r[3]; // 800D8DE8
  c->r[30]=c->r[4]|c->r[4]; // 800D8DEC
  cmps(c,0,(int32_t)c->r[5],0); // 800D8DF0
  if (crb(c,2)) { goto L_800D8E00; } // 800D8DF4
  c->r[0]=R32(c->r[5]+0x00000000u); // 800D8DF8
  goto L_800D8E04; // 800D8DFC
L_800D8E00:;
  c->r[0]=0u+0x00000000u; // 800D8E00
L_800D8E04:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D8E04
  if (crb(c,2)) { goto L_800D8E24; } // 800D8E08
  cmps(c,0,(int32_t)c->r[5],0); // 800D8E0C
  if (crb(c,2)) { goto L_800D8E1C; } // 800D8E10
  c->r[31]=R32(c->r[5]+0x00000000u); // 800D8E14
  goto L_800D8E28; // 800D8E18
L_800D8E1C:;
  c->r[31]=0u+0x00000000u; // 800D8E1C
  goto L_800D8E28; // 800D8E20
L_800D8E24:;
  c->r[31]=c->r[29]|c->r[29]; // 800D8E24
L_800D8E28:;
  cmps(c,0,(int32_t)c->r[5],0); // 800D8E28
  if (crb(c,2)) { goto L_800D8E38; } // 800D8E2C
  c->r[0]=R32(c->r[5]+0x00000000u); // 800D8E30
  goto L_800D8E3C; // 800D8E34
L_800D8E38:;
  c->r[0]=0u+0x00000000u; // 800D8E38
L_800D8E3C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D8E3C
  if (!crb(c,2)) { goto L_800D8E6C; } // 800D8E40
  cmps(c,0,(int32_t)c->r[5],0); // 800D8E44
  if (crb(c,2)) { goto L_800D8E54; } // 800D8E48
  c->r[0]=R32(c->r[5]+0x00000000u); // 800D8E4C
  goto L_800D8E58; // 800D8E50
L_800D8E54:;
  c->r[0]=0u+0x00000000u; // 800D8E54
L_800D8E58:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D8E58
  if (!crb(c,2)) { goto L_800D8F14; } // 800D8E5C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000064u); // 800D8E60
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 800D8E64
  if (crb(c,2)) { goto L_800D8F14; } // 800D8E68
L_800D8E6C:;
  c->r[3]=R32(c->r[31]+0x000000A8u); // 800D8E6C
  c->r[0]=R32(c->r[3]+0x00000020u); // 800D8E70
  cmps(c,0,(int32_t)c->r[0],0); // 800D8E74
  if (crb(c,2)) { goto L_800D8F14; } // 800D8E78
  c->r[27]=0u+0x00000000u; // 800D8E7C
  c->r[28]=0u+0x00000000u; // 800D8E80
  goto L_800D8F04; // 800D8E84
L_800D8E88:;
  c->r[3]=R32(c->r[3]+0x00000020u); // 800D8E88
  c->r[26]=R32(c->r[3]+c->r[28]); // 800D8E8C
  c->r[0]=R32(c->r[26]+0x00000014u); // 800D8E90
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800D8E94
  if (crb(c,2)) { goto L_800D8EFC; } // 800D8E98
  c->r[3]=c->r[29]|c->r[29]; // 800D8E9C
  c->r[4]=c->r[27]|c->r[27]; // 800D8EA0
  c->lr=0x800D8EA8u; f_800D99F0(c); // 800D8EA4
  cmps(c,0,(int32_t)c->r[3],0); // 800D8EA8
  if (crb(c,2)) { goto L_800D8EFC; } // 800D8EAC
  c->r[4]=R32(c->r[31]+0x000000A8u); // 800D8EB0
  c->r[3]=c->r[26]|c->r[26]; // 800D8EB4
  c->r[5]=c->r[30]|c->r[30]; // 800D8EB8
  c->r[4]=R32(c->r[4]+0x00000028u); // 800D8EBC
  c->r[0]=R32(c->r[4]+c->r[28]); // 800D8EC0
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 800D8EC4
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 800D8EC8
  c->r[4]=c->r[4]+c->r[0]; // 800D8ECC
  c->lr=0x800D8ED4u; f_80112A60(c); // 800D8ED0
  cmps(c,0,(int32_t)c->r[3],0); // 800D8ED4
  if (crb(c,2)) { goto L_800D8EEC; } // 800D8ED8
  c->r[0]=R32(c->r[29]+0x00000060u); // 800D8EDC
  c->r[0]=rotl(c->r[0],0)&0xFDFFFFFFu; // 800D8EE0
  W32(c->r[29]+0x00000060u,c->r[0]); // 800D8EE4
  goto L_800D8F18; // 800D8EE8
L_800D8EEC:;
  c->r[3]=c->r[29]|c->r[29]; // 800D8EEC
  c->r[4]=c->r[27]|c->r[27]; // 800D8EF0
  c->r[5]=0u+0x00000000u; // 800D8EF4
  c->lr=0x800D8EFCu; f_800D9A60(c); // 800D8EF8
L_800D8EFC:;
  c->r[27]=c->r[27]+0x00000001u; // 800D8EFC
  c->r[28]=c->r[28]+0x00000004u; // 800D8F00
L_800D8F04:;
  c->r[3]=R32(c->r[31]+0x000000A8u); // 800D8F04
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800D8F08
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800D8F0C
  if (crb(c,0)) { IRQCHK(c); goto L_800D8E88; } // 800D8F10
L_800D8F14:;
  c->r[3]=0u+0x00000000u; // 800D8F14
L_800D8F18:;
  c->r[11]=c->r[1]+0x00000020u; // 800D8F18
  c->lr=0x800D8F20u; f_800C2E94(c); // 800D8F1C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D8F20
  c->lr=c->r[0]; // 800D8F24
  c->r[1]=c->r[1]+0x00000020u; // 800D8F28
  return; // 800D8F2C
}

// fn_800D8F30
void f_800D8F30(Ctx* __restrict c) {
  trace_call(0x800D8F30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D8F30
  c->r[0]=c->lr; // 800D8F34
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D8F38
  c->r[11]=c->r[1]+0x00000020u; // 800D8F3C
  c->lr=0x800D8F44u; f_800C2E48(c); // 800D8F40
  c->r[7]=R32(c->r[3]+0x000000ACu); // 800D8F44
  c->r[29]=c->r[3]|c->r[3]; // 800D8F48
  c->r[26]=c->r[5]|c->r[5]; // 800D8F4C
  c->r[30]=c->r[6]|c->r[6]; // 800D8F50
  cmps(c,0,(int32_t)c->r[7],0); // 800D8F54
  if (crb(c,2)) { goto L_800D8F64; } // 800D8F58
  c->r[0]=R32(c->r[7]+0x00000000u); // 800D8F5C
  goto L_800D8F68; // 800D8F60
L_800D8F64:;
  c->r[0]=0u+0x00000000u; // 800D8F64
L_800D8F68:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D8F68
  if (crb(c,2)) { goto L_800D8F88; } // 800D8F6C
  cmps(c,0,(int32_t)c->r[7],0); // 800D8F70
  if (crb(c,2)) { goto L_800D8F80; } // 800D8F74
  c->r[31]=R32(c->r[7]+0x00000000u); // 800D8F78
  goto L_800D8F8C; // 800D8F7C
L_800D8F80:;
  c->r[31]=0u+0x00000000u; // 800D8F80
  goto L_800D8F8C; // 800D8F84
L_800D8F88:;
  c->r[31]=c->r[29]|c->r[29]; // 800D8F88
L_800D8F8C:;
  cmps(c,0,(int32_t)c->r[4],0); // 800D8F8C
  if (crb(c,2)) { goto L_800D8FE0; } // 800D8F90
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000064u); // 800D8F94
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 800D8F98
  if (crb(c,2)) { goto L_800D8FAC; } // 800D8F9C
  c->r[0]=0u+0xFFFFFFFFu; // 800D8FA0
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D8FA4
  goto L_800D8FE0; // 800D8FA8
L_800D8FAC:;
  c->r[3]=R32(c->r[3]+0x00000028u); // 800D8FAC
  c->r[6]=0u+0x00000000u; // 800D8FB0
  {uint32_t ea=c->r[3]+0x00000034u; c->r[7]=R32(ea); c->r[3]=ea;} // 800D8FB4
  goto L_800D8FD0; // 800D8FB8
L_800D8FBC:;
  cmpu(c,0,c->r[7],c->r[31]); // 800D8FBC
  if (!crb(c,2)) { goto L_800D8FC8; } // 800D8FC0
  goto L_800D8FDC; // 800D8FC4
L_800D8FC8:;
  c->r[7]=R32(c->r[7]+0x00000000u); // 800D8FC8
  c->r[6]=c->r[6]+0x00000001u; // 800D8FCC
L_800D8FD0:;
  cmpu(c,0,c->r[7],c->r[3]); // 800D8FD0
  if (!crb(c,2)) { IRQCHK(c); goto L_800D8FBC; } // 800D8FD4
  c->r[6]=0u+0xFFFFFFFFu; // 800D8FD8
L_800D8FDC:;
  W32(c->r[4]+0x00000000u,c->r[6]); // 800D8FDC
L_800D8FE0:;
  cmps(c,0,(int32_t)c->r[5],0); // 800D8FE0
  if (crb(c,2)) { goto L_800D8FF4; } // 800D8FE4
  c->r[3]=c->r[31]|c->r[31]; // 800D8FE8
  c->lr=0x800D8FF0u; f_800D8540(c); // 800D8FEC
  W32(c->r[26]+0x00000000u,c->r[3]); // 800D8FF0
L_800D8FF4:;
  cmps(c,0,(int32_t)c->r[30],0); // 800D8FF4
  if (crb(c,2)) { goto L_800D9348; } // 800D8FF8
  c->r[0]=0u+0xFFFFFFFFu; // 800D8FFC
  W32(c->r[30]+0x00000000u,c->r[0]); // 800D9000
  c->r[4]=c->r[30]+0x00000008u; // 800D9004
  c->r[3]=R32(c->r[29]+0x00000138u); // 800D9008
  c->r[12]=R32(c->r[3]+0x00000000u); // 800D900C
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 800D9010
  c->ctr=c->r[12]; // 800D9014
  if (true) { c->lr=0x800D901Cu; dispatch(c,c->ctr); } // 800D9018
  cmps(c,0,(int32_t)c->r[3],0); // 800D901C
  if (crb(c,2)) { goto L_800D9028; } // 800D9020
  goto L_800D934C; // 800D9024
L_800D9028:;
  c->r[3]=R32(c->r[29]+0x00000138u); // 800D9028
  c->r[4]=c->r[30]+0x0000000Cu; // 800D902C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800D9030
  c->r[12]=R32(c->r[12]+0x00000044u); // 800D9034
  c->ctr=c->r[12]; // 800D9038
  if (true) { c->lr=0x800D9040u; dispatch(c,c->ctr); } // 800D903C
  cmps(c,0,(int32_t)c->r[3],0); // 800D9040
  if (crb(c,2)) { goto L_800D904C; } // 800D9044
  goto L_800D934C; // 800D9048
L_800D904C:;
  c->r[3]=c->r[29]|c->r[29]; // 800D904C
  c->r[4]=c->r[30]+0x00000010u; // 800D9050
  c->lr=0x800D9058u; f_800DD720(c); // 800D9054
  cmps(c,0,(int32_t)c->r[3],0); // 800D9058
  if (crb(c,2)) { goto L_800D9064; } // 800D905C
  goto L_800D934C; // 800D9060
L_800D9064:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 800D9064
  cmps(c,0,(int32_t)c->r[3],1000); // 800D9068
  if (crb(c,1)) { goto L_800D9098; } // 800D906C
  cmps(c,0,(int32_t)c->r[3],0); // 800D9070
  if (crb(c,2)) { goto L_800D9084; } // 800D9074
  c->r[0]=R32(c->r[30]+0x00000018u); // 800D9078
  cmps(c,0,(int32_t)c->r[0],0); // 800D907C
  if (crb(c,2)) { goto L_800D9098; } // 800D9080
L_800D9084:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D9084
  if (!crb(c,2)) { goto L_800D90A0; } // 800D9088
  c->r[0]=R32(c->r[30]+0x00000018u); // 800D908C
  cmps(c,0,(int32_t)c->r[0],0); // 800D9090
  if (crb(c,2)) { goto L_800D90A0; } // 800D9094
L_800D9098:;
  c->r[3]=0u+0x00000025u; // 800D9098
  goto L_800D934C; // 800D909C
L_800D90A0:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D90A0
  if (crb(c,2)) { goto L_800D9100; } // 800D90A4
  c->r[0]=R32(c->r[30]+0x00000018u); // 800D90A8
  cmps(c,0,(int32_t)c->r[0],0); // 800D90AC
  if (crb(c,2)) { goto L_800D9100; } // 800D90B0
  c->r[26]=0u+0x00000000u; // 800D90B4
  c->r[28]=0u+0x00000000u; // 800D90B8
  c->r[27]=0u+0x00000000u; // 800D90BC
  goto L_800D90E4; // 800D90C0
L_800D90C4:;
  c->r[3]=R32(c->r[3]+0x00000020u); // 800D90C4
  c->r[0]=R32(c->r[30]+0x00000018u); // 800D90C8
  c->r[3]=R32(c->r[3]+c->r[27]); // 800D90CC
  c->r[4]=c->r[0]+c->r[28]; // 800D90D0
  c->lr=0x800D90D8u; f_80111010(c); // 800D90D4
  c->r[26]=c->r[26]+0x00000001u; // 800D90D8
  c->r[28]=c->r[28]+0x00000120u; // 800D90DC
  c->r[27]=c->r[27]+0x00000004u; // 800D90E0
L_800D90E4:;
  c->r[3]=R32(c->r[31]+0x000000A8u); // 800D90E4
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800D90E8
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 800D90EC
  if (!crb(c,0)) { goto L_800D9100; } // 800D90F0
  c->r[0]=R32(c->r[30]+0x00000014u); // 800D90F4
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 800D90F8
  if (crb(c,0)) { IRQCHK(c); goto L_800D90C4; } // 800D90FC
L_800D9100:;
  c->r[3]=R32(c->r[31]+0x000000A8u); // 800D9100
  c->r[4]=c->r[30]+0x00000004u; // 800D9104
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800D9108
  W32(c->r[30]+0x00000014u,c->r[0]); // 800D910C
  c->r[3]=R32(c->r[29]+0x00000138u); // 800D9110
  c->r[12]=R32(c->r[3]+0x00000000u); // 800D9114
  c->r[12]=R32(c->r[12]+0x00000040u); // 800D9118
  c->ctr=c->r[12]; // 800D911C
  if (true) { c->lr=0x800D9124u; dispatch(c,c->ctr); } // 800D9120
  cmps(c,0,(int32_t)c->r[3],0); // 800D9124
  if (crb(c,2)) { goto L_800D9130; } // 800D9128
  goto L_800D934C; // 800D912C
L_800D9130:;
  c->r[3]=c->r[29]|c->r[29]; // 800D9130
  c->lr=0x800D9138u; f_800D89D0(c); // 800D9134
  W32(c->r[30]+0x00000020u,c->r[3]); // 800D9138
  c->r[3]=R32(c->r[29]+0x000000ACu); // 800D913C
  cmps(c,0,(int32_t)c->r[3],0); // 800D9140
  if (crb(c,2)) { goto L_800D9150; } // 800D9144
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D9148
  goto L_800D9154; // 800D914C
L_800D9150:;
  c->r[0]=0u+0x00000000u; // 800D9150
L_800D9154:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D9154
  if (crb(c,2)) { goto L_800D917C; } // 800D9158
  cmps(c,0,(int32_t)c->r[3],0); // 800D915C
  if (crb(c,2)) { goto L_800D916C; } // 800D9160
  c->r[3]=R32(c->r[3]+0x00000000u); // 800D9164
  goto L_800D9170; // 800D9168
L_800D916C:;
  c->r[3]=0u+0x00000000u; // 800D916C
L_800D9170:;
  c->r[3]=R32(c->r[3]+0x000000A8u); // 800D9170
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D9174
  goto L_800D9184; // 800D9178
L_800D917C:;
  c->r[3]=R32(c->r[29]+0x000000A8u); // 800D917C
  c->r[0]=R32(c->r[3]+0x00000010u); // 800D9180
L_800D9184:;
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 800D9184
  c->r[3]=R32(c->r[29]+0x000000ACu); // 800D9188
  cmps(c,0,(int32_t)c->r[3],0); // 800D918C
  if (crb(c,2)) { goto L_800D919C; } // 800D9190
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D9194
  goto L_800D91A0; // 800D9198
L_800D919C:;
  c->r[0]=0u+0x00000000u; // 800D919C
L_800D91A0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D91A0
  if (crb(c,2)) { goto L_800D91CC; } // 800D91A4
  c->r[3]=R32(c->r[29]+0x00000138u); // 800D91A8
  c->r[4]=c->r[30]+0x00000024u; // 800D91AC
  c->r[12]=R32(c->r[3]+0x00000000u); // 800D91B0
  c->r[12]=R32(c->r[12]+0x00000048u); // 800D91B4
  c->ctr=c->r[12]; // 800D91B8
  if (true) { c->lr=0x800D91C0u; dispatch(c,c->ctr); } // 800D91BC
  cmps(c,0,(int32_t)c->r[3],0); // 800D91C0
  if (crb(c,2)) { goto L_800D91E4; } // 800D91C4
  goto L_800D934C; // 800D91C8
L_800D91CC:;
  c->r[3]=c->r[29]|c->r[29]; // 800D91CC
  c->r[4]=c->r[30]+0x00000024u; // 800D91D0
  c->lr=0x800D91D8u; f_800DD980(c); // 800D91D4
  cmps(c,0,(int32_t)c->r[3],0); // 800D91D8
  if (crb(c,2)) { goto L_800D91E4; } // 800D91DC
  goto L_800D934C; // 800D91E0
L_800D91E4:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000064u); // 800D91E4
  c->r[3]=0u+0x00000000u; // 800D91E8
  c->r[4]=0u+0x00000000u; // 800D91EC
  c->r[5]=0u+0x00000000u; // 800D91F0
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 800D91F4
  if (crb(c,2)) { goto L_800D9294; } // 800D91F8
  c->r[4]=R32(c->r[31]+0x00000028u); // 800D91FC
  c->r[4]=R32(c->r[4]+0x00000030u); // 800D9200
  c->r[4]=R32(c->r[4]+0x00000038u); // 800D9204
  cmps(c,0,(int32_t)c->r[4],0); // 800D9208
  if (crb(c,2)) { goto L_800D9300; } // 800D920C
  c->r[0]=R32(c->r[4]+0x00000008u); // 800D9210
  c->r[8]=R32(c->r[4]+0x00000010u); // 800D9214
  c->r[4]=0u+0x00000000u; // 800D9218
  c->ctr=c->r[0]; // 800D921C
  cmps(c,0,(int32_t)c->r[0],0); // 800D9220
  if (!crb(c,1)) { goto L_800D9300; } // 800D9224
L_800D9228:;
  c->r[6]=R32(c->r[8]+c->r[4]); // 800D9228
  cmps(c,0,(int32_t)c->r[6],0); // 800D922C
  if (crb(c,2)) { goto L_800D9288; } // 800D9230
  c->r[7]=R32(c->r[6]+0x000000ACu); // 800D9234
  cmps(c,0,(int32_t)c->r[7],0); // 800D9238
  if (crb(c,2)) { goto L_800D9248; } // 800D923C
  c->r[0]=R32(c->r[7]+0x00000000u); // 800D9240
  goto L_800D924C; // 800D9244
L_800D9248:;
  c->r[0]=0u+0x00000000u; // 800D9248
L_800D924C:;
  cmpu(c,0,c->r[0],c->r[31]); // 800D924C
  if (!crb(c,2)) { goto L_800D9288; } // 800D9250
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x00000064u); // 800D9254
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800D9258
  if (crb(c,2)) { goto L_800D9288; } // 800D925C
  c->r[7]=R32(c->r[30]+0x0000002Cu); // 800D9260
  cmps(c,0,(int32_t)c->r[7],0); // 800D9264
  if (crb(c,2)) { goto L_800D9280; } // 800D9268
  c->r[0]=R32(c->r[30]+0x00000028u); // 800D926C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800D9270
  if (!crb(c,0)) { goto L_800D9280; } // 800D9274
  c->r[0]=R32(c->r[6]+0x00000018u); // 800D9278
  W32(c->r[7]+c->r[5],c->r[0]); // 800D927C
L_800D9280:;
  c->r[3]=c->r[3]+0x00000001u; // 800D9280
  c->r[5]=c->r[5]+0x00000004u; // 800D9284
L_800D9288:;
  c->r[4]=c->r[4]+0x00000004u; // 800D9288
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D9228; } // 800D928C
  goto L_800D9300; // 800D9290
L_800D9294:;
  c->r[5]=R32(c->r[31]+0x000000A8u); // 800D9294
  c->r[0]=R32(c->r[5]+0x00000004u); // 800D9298
  cmps(c,0,(int32_t)c->r[0],0); // 800D929C
  if (crb(c,2)) { goto L_800D9300; } // 800D92A0
  c->r[8]=0u+0x00000000u; // 800D92A4
  c->r[5]=0u+0x00000000u; // 800D92A8
  goto L_800D92F0; // 800D92AC
L_800D92B0:;
  c->r[6]=R32(c->r[6]+0x00000004u); // 800D92B0
  c->r[6]=R32(c->r[6]+c->r[5]); // 800D92B4
  cmps(c,0,(int32_t)c->r[6],0); // 800D92B8
  if (crb(c,2)) { goto L_800D92E8; } // 800D92BC
  c->r[7]=R32(c->r[30]+0x0000002Cu); // 800D92C0
  cmps(c,0,(int32_t)c->r[7],0); // 800D92C4
  if (crb(c,2)) { goto L_800D92E0; } // 800D92C8
  c->r[0]=R32(c->r[30]+0x00000028u); // 800D92CC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800D92D0
  if (!crb(c,0)) { goto L_800D92E0; } // 800D92D4
  c->r[0]=R32(c->r[6]+0x00000018u); // 800D92D8
  W32(c->r[7]+c->r[4],c->r[0]); // 800D92DC
L_800D92E0:;
  c->r[3]=c->r[3]+0x00000001u; // 800D92E0
  c->r[4]=c->r[4]+0x00000004u; // 800D92E4
L_800D92E8:;
  c->r[8]=c->r[8]+0x00000001u; // 800D92E8
  c->r[5]=c->r[5]+0x00000004u; // 800D92EC
L_800D92F0:;
  c->r[6]=R32(c->r[31]+0x000000A8u); // 800D92F0
  c->r[0]=R32(c->r[6]+0x00000000u); // 800D92F4
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 800D92F8
  if (crb(c,0)) { IRQCHK(c); goto L_800D92B0; } // 800D92FC
L_800D9300:;
  c->r[4]=R32(c->r[30]+0x00000030u); // 800D9300
  W32(c->r[30]+0x00000028u,c->r[3]); // 800D9304
  cmps(c,0,(int32_t)c->r[4],0); // 800D9308
  if (crb(c,2)) { goto L_800D9348; } // 800D930C
  c->r[3]=R32(c->r[31]+0x000000A8u); // 800D9310
  c->r[3]=R32(c->r[3]+0x00000014u); // 800D9314
  cmps(c,0,(int32_t)c->r[3],0); // 800D9318
  if (crb(c,2)) { goto L_800D9348; } // 800D931C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800D9320
  W32(c->r[4]+0x00000000u,c->r[0]); // 800D9324
  c->r[0]=R16(c->r[3]+0x00000004u); // 800D9328
  W16(c->r[4]+0x00000004u,c->r[0]); // 800D932C
  c->r[0]=R16(c->r[3]+0x00000006u); // 800D9330
  W16(c->r[4]+0x00000006u,c->r[0]); // 800D9334
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 800D9338
  c->r[3]=R32(c->r[3]+0x00000008u); // 800D933C
  W32(c->r[4]+0x00000008u,c->r[3]); // 800D9340
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800D9344
L_800D9348:;
  c->r[3]=0u+0x00000000u; // 800D9348
L_800D934C:;
  c->r[11]=c->r[1]+0x00000020u; // 800D934C
  c->lr=0x800D9354u; f_800C2E94(c); // 800D9350
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D9354
  c->lr=c->r[0]; // 800D9358
  c->r[1]=c->r[1]+0x00000020u; // 800D935C
  return; // 800D9360
}

// fn_800D9370
void f_800D9370(Ctx* __restrict c) {
  trace_call(0x800D9370u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9370
  c->r[0]=c->lr; // 800D9374
  W32(c->r[1]+0x00000044u,c->r[0]); // 800D9378
  c->r[0]=0u+0x00000000u; // 800D937C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 800D9380
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 800D9384
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 800D9388
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 800D938C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D9390
  c->r[31]=c->r[3]|c->r[3]; // 800D9394
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800D9398
  c->r[4]=R32(c->r[3]+0x000000ACu); // 800D939C
  cmps(c,0,(int32_t)c->r[4],0); // 800D93A0
  if (crb(c,2)) { goto L_800D93AC; } // 800D93A4
  c->r[0]=R32(c->r[4]+0x00000018u); // 800D93A8
L_800D93AC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D93AC
  if (crb(c,2)) { goto L_800D93BC; } // 800D93B0
  c->r[3]=0u+0x00000000u; // 800D93B4
  goto L_800D952C; // 800D93B8
L_800D93BC:;
  c->r[0]=R32(c->r[3]+0x00000060u); // 800D93BC
  c->r[0]=rotl(c->r[0],0)&0x00400000u; cr0(c,c->r[0]); // 800D93C0
  if (crb(c,2)) { goto L_800D93E0; } // 800D93C4
  c->r[3]=R32(c->r[13]+0xFFFF9830u); // 800D93C8
  c->r[5]=c->r[1]+0x00000008u; // 800D93CC
  c->r[4]=0u+0x00000000u; // 800D93D0
  c->r[3]=R32(c->r[3]+0x00000014u); // 800D93D4
  c->lr=0x800D93DCu; f_8019ECB0(c); // 800D93D8
  goto L_800D93FC; // 800D93DC
L_800D93E0:;
  c->r[3]=R32(c->r[13]+0xFFFF9830u); // 800D93E0
  c->r[5]=c->r[1]+0x00000008u; // 800D93E4
  c->r[4]=0u+0x00000000u; // 800D93E8
  c->r[6]=0u+0x00000000u; // 800D93EC
  c->r[3]=R32(c->r[3]+0x00000014u); // 800D93F0
  c->r[7]=0u+0x00000000u; // 800D93F4
  c->lr=0x800D93FCu; f_801A87B0(c); // 800D93F8
L_800D93FC:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D93FC
  if (crb(c,2)) { goto L_800D9408; } // 800D9400
  goto L_800D952C; // 800D9404
L_800D9408:;
  c->r[3]=R32(c->r[31]+0x000000ACu); // 800D9408
  c->r[0]=R32(c->r[1]+0x00000008u); // 800D940C
  W32(c->r[3]+0x00000018u,c->r[0]); // 800D9410
  c->r[3]=R32(c->r[31]+0x000000ACu); // 800D9414
  cmps(c,0,(int32_t)c->r[3],0); // 800D9418
  if (crb(c,2)) { goto L_800D9428; } // 800D941C
  c->r[3]=R32(c->r[3]+0x00000018u); // 800D9420
  goto L_800D942C; // 800D9424
L_800D9428:;
  c->r[3]=0u+0x00000000u; // 800D9428
L_800D942C:;
  c->r[4]=c->r[1]+0x0000000Cu; // 800D942C
  c->lr=0x800D9434u; f_80186F50(c); // 800D9430
  cmps(c,0,(int32_t)c->r[3],0); // 800D9434
  if (!crb(c,2)) { goto L_800D9450; } // 800D9438
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800D943C
  cmps(c,0,(int32_t)c->r[3],0); // 800D9440
  if (crb(c,2)) { goto L_800D9450; } // 800D9444
  c->r[4]=0u+0x00000000u; // 800D9448
  c->lr=0x800D9450u; f_80131190(c); // 800D944C
L_800D9450:;
  {uint32_t ea=c->r[31]+0x00000084u; c->f[31]=c->ps1[31]=RF32(ea);} // 800D9450
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9454
  {uint32_t ea=c->r[31]+0x00000030u; c->f[30]=c->ps1[30]=RF32(ea);} // 800D9458
  fcmp(c,0,c->f[0],c->f[31]); // 800D945C
  if (crb(c,2)) { goto L_800D94A0; } // 800D9460
  c->lr=0x800D9468u; f_800C8D44(c); // 800D9464
  c->r[3]=c->r[3]^0x80000000u; // 800D9468
  c->r[0]=0u+0x43300000u; // 800D946C
  W32(c->r[1]+0x00000014u,c->r[3]); // 800D9470
  {uint32_t ea=c->r[2]+0xFFFF9E60u; c->f[3]=RF64(ea);} // 800D9474
  W32(c->r[1]+0x00000010u,c->r[0]); // 800D9478
  {uint32_t ea=c->r[2]+0xFFFF9E4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D947C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 800D9480
  {uint32_t ea=c->r[2]+0xFFFF9E70u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D9484
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 800D9488
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800D948C
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 800D9490
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800D9494
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800D9498
  c->f[30]=c->ps1[30]=S(c->f[30]*c->f[0]); // 800D949C
L_800D94A0:;
  c->r[3]=R32(c->r[31]+0x000000ACu); // 800D94A0
  cmps(c,0,(int32_t)c->r[3],0); // 800D94A4
  if (crb(c,2)) { goto L_800D94B4; } // 800D94A8
  c->r[3]=R32(c->r[3]+0x00000018u); // 800D94AC
  goto L_800D94B8; // 800D94B0
L_800D94B4:;
  c->r[3]=0u+0x00000000u; // 800D94B4
L_800D94B8:;
  c->f[1]=c->f[30]; // 800D94B8
  c->lr=0x800D94C0u; f_80186C30(c); // 800D94BC
  cmps(c,0,(int32_t)c->r[3],0); // 800D94C0
  if (crb(c,2)) { goto L_800D94CC; } // 800D94C4
  goto L_800D952C; // 800D94C8
L_800D94CC:;
  {uint32_t ea=c->r[31]+0x00000038u; c->f[31]=c->ps1[31]=RF32(ea);} // 800D94CC
  c->r[3]=c->r[31]|c->r[31]; // 800D94D0
  c->lr=0x800D94D8u; f_800DE000(c); // 800D94D4
  c->f[2]=c->ps1[2]=S(c->f[31]+c->f[1]); // 800D94D8
  {uint32_t ea=c->r[2]+0xFFFF9E80u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D94DC
  {uint32_t ea=c->r[2]+0xFFFF9E78u; c->f[1]=RF64(ea);} // 800D94E0
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800D94E4
  c->lr=0x800D94ECu; f_800D29C4(c); // 800D94E8
  c->r[3]=R32(c->r[31]+0x000000ACu); // 800D94EC
  c->f[1]=c->ps1[1]=S(c->f[1]); // 800D94F0
  cmps(c,0,(int32_t)c->r[3],0); // 800D94F4
  if (crb(c,2)) { goto L_800D9504; } // 800D94F8
  c->r[3]=R32(c->r[3]+0x00000018u); // 800D94FC
  goto L_800D9508; // 800D9500
L_800D9504:;
  c->r[3]=0u+0x00000000u; // 800D9504
L_800D9508:;
  c->lr=0x800D950Cu; f_80186CD0(c); // 800D9508
  cmps(c,0,(int32_t)c->r[3],0); // 800D950C
  if (crb(c,2)) { goto L_800D9518; } // 800D9510
  goto L_800D952C; // 800D9514
L_800D9518:;
  c->r[3]=R32(c->r[31]+0x00000138u); // 800D9518
  c->r[12]=R32(c->r[3]+0x00000000u); // 800D951C
  c->r[12]=R32(c->r[12]+0x00000024u); // 800D9520
  c->ctr=c->r[12]; // 800D9524
  if (true) { c->lr=0x800D952Cu; dispatch(c,c->ctr); } // 800D9528
L_800D952C:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800D952C
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 800D9530
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 800D9534
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 800D9538
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 800D953C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800D9540
  c->lr=c->r[0]; // 800D9544
  c->r[1]=c->r[1]+0x00000040u; // 800D9548
  return; // 800D954C
}

// fn_800D9550
void f_800D9550(Ctx* __restrict c) {
  trace_call(0x800D9550u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9550
  c->r[0]=c->lr; // 800D9554
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D9558
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D955C
  c->r[31]=c->r[3]|c->r[3]; // 800D9560
  c->r[0]=R32(c->r[3]+0x000000A8u); // 800D9564
  cmps(c,0,(int32_t)c->r[0],0); // 800D9568
  if (crb(c,2)) { goto L_800D9578; } // 800D956C
  c->r[3]=0u+0x00000000u; // 800D9570
  goto L_800D95F8; // 800D9574
L_800D9578:;
  c->r[4]=R32(c->r[3]+0x000000ACu); // 800D9578
  cmps(c,0,(int32_t)c->r[4],0); // 800D957C
  if (crb(c,2)) { goto L_800D958C; } // 800D9580
  c->r[0]=R32(c->r[4]+0x00000018u); // 800D9584
  goto L_800D9590; // 800D9588
L_800D958C:;
  c->r[0]=0u+0x00000000u; // 800D958C
L_800D9590:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D9590
  if (!crb(c,2)) { goto L_800D95A0; } // 800D9594
  c->r[3]=0u+0x00000000u; // 800D9598
  goto L_800D95F8; // 800D959C
L_800D95A0:;
  c->r[3]=R32(c->r[3]+0x00000138u); // 800D95A0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800D95A4
  c->r[12]=R32(c->r[12]+0x00000028u); // 800D95A8
  c->ctr=c->r[12]; // 800D95AC
  if (true) { c->lr=0x800D95B4u; dispatch(c,c->ctr); } // 800D95B0
  cmps(c,0,(int32_t)c->r[3],0); // 800D95B4
  if (crb(c,2)) { goto L_800D95C0; } // 800D95B8
  goto L_800D95F8; // 800D95BC
L_800D95C0:;
  c->r[3]=R32(c->r[31]+0x000000ACu); // 800D95C0
  cmps(c,0,(int32_t)c->r[3],0); // 800D95C4
  if (crb(c,2)) { goto L_800D95D4; } // 800D95C8
  c->r[3]=R32(c->r[3]+0x00000018u); // 800D95CC
  goto L_800D95D8; // 800D95D0
L_800D95D4:;
  c->r[3]=0u+0x00000000u; // 800D95D4
L_800D95D8:;
  c->lr=0x800D95DCu; f_80186BF0(c); // 800D95D8
  cmps(c,0,(int32_t)c->r[3],0); // 800D95DC
  if (crb(c,2)) { goto L_800D95E8; } // 800D95E0
  goto L_800D95F8; // 800D95E4
L_800D95E8:;
  c->r[4]=R32(c->r[31]+0x000000ACu); // 800D95E8
  c->r[0]=0u+0x00000000u; // 800D95EC
  c->r[3]=0u+0x00000000u; // 800D95F0
  W32(c->r[4]+0x00000018u,c->r[0]); // 800D95F4
L_800D95F8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D95F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800D95FC
  c->lr=c->r[0]; // 800D9600
  c->r[1]=c->r[1]+0x00000010u; // 800D9604
  return; // 800D9608
}

// fn_800D9610
void f_800D9610(Ctx* __restrict c) {
  trace_call(0x800D9610u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9610
  c->r[0]=c->lr; // 800D9614
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D9618
  c->r[11]=c->r[1]+0x00000020u; // 800D961C
  c->lr=0x800D9624u; f_800C2E54(c); // 800D9620
  c->r[0]=R32(c->r[3]+0x00000028u); // 800D9624
  c->r[29]=0u+0x00000000u; // 800D9628
  W32(c->r[4]+0x00000028u,c->r[0]); // 800D962C
  c->r[30]=c->r[3]|c->r[3]; // 800D9630
  c->r[6]=R32(c->r[4]+0x000000ACu); // 800D9634
  c->r[31]=c->r[4]|c->r[4]; // 800D9638
  {uint32_t ea=c->r[2]+0xFFFF9E4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D963C
  c->r[5]=0u+0x0000000Cu; // 800D9640
  W32(c->r[6]+0x00000010u,c->r[29]); // 800D9644
  {uint32_t ea=c->r[3]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D9648
  {uint32_t ea=c->r[4]+0x00000030u; WF32(ea,c->f[1]);} // 800D964C
  {uint32_t ea=c->r[4]+0x00000034u; WF32(ea,c->f[0]);} // 800D9650
  {uint32_t ea=c->r[3]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9654
  {uint32_t ea=c->r[4]+0x00000038u; WF32(ea,c->f[0]);} // 800D9658
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 800D965C
  c->r[3]=c->r[4]+0x000000B0u; // 800D9660
  W32(c->r[4]+0x0000003Cu,c->r[0]); // 800D9664
  c->r[4]=c->r[30]+0x000000B0u; // 800D9668
  c->lr=0x800D9670u; f_80004000(c); // 800D966C
  c->r[3]=c->r[31]+0x000000BCu; // 800D9670
  c->r[4]=c->r[30]+0x000000BCu; // 800D9674
  c->r[5]=0u+0x0000000Cu; // 800D9678
  c->lr=0x800D9680u; f_80004000(c); // 800D967C
  c->r[0]=R32(c->r[30]+0x00000040u); // 800D9680
  c->r[3]=c->r[31]+0x00000118u; // 800D9684
  W32(c->r[31]+0x00000040u,c->r[0]); // 800D9688
  c->r[4]=c->r[30]+0x00000118u; // 800D968C
  c->r[5]=0u+0x00000020u; // 800D9690
  {uint32_t ea=c->r[30]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9694
  {uint32_t ea=c->r[31]+0x000000D4u; WF32(ea,c->f[0]);} // 800D9698
  {uint32_t ea=c->r[30]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D969C
  {uint32_t ea=c->r[31]+0x000000D8u; WF32(ea,c->f[0]);} // 800D96A0
  W32(c->r[31]+0x00000044u,c->r[29]); // 800D96A4
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 800D96A8
  W32(c->r[1]+0x00000008u,c->r[29]); // 800D96AC
  W32(c->r[31]+0x00000048u,c->r[29]); // 800D96B0
  W32(c->r[31]+0x0000004Cu,c->r[29]); // 800D96B4
  W32(c->r[31]+0x00000050u,c->r[29]); // 800D96B8
  W32(c->r[31]+0x00000054u,c->r[29]); // 800D96BC
  W32(c->r[31]+0x00000058u,c->r[29]); // 800D96C0
  W32(c->r[31]+0x0000005Cu,c->r[29]); // 800D96C4
  c->lr=0x800D96CCu; f_80004000(c); // 800D96C8
  c->r[3]=0u+0xFFFF0000u; // 800D96CC
  c->r[4]=R32(c->r[30]+0x00000060u); // 800D96D0
  c->r[0]=c->r[3]+0xFFFF8FFFu; // 800D96D4
  c->r[0]=c->r[4]&c->r[0]; // 800D96D8
  W32(c->r[31]+0x00000060u,c->r[0]); // 800D96DC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000064u); // 800D96E0
  W16(c->r[31]+0x00000064u,c->r[0]); // 800D96E4
  c->r[0]=R32(c->r[30]+0x00000070u); // 800D96E8
  W32(c->r[31]+0x00000070u,c->r[0]); // 800D96EC
  c->r[0]=R32(c->r[30]+0x00000074u); // 800D96F0
  W32(c->r[31]+0x00000074u,c->r[0]); // 800D96F4
  c->r[0]=R32(c->r[30]+0x00000078u); // 800D96F8
  W32(c->r[31]+0x00000078u,c->r[0]); // 800D96FC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000064u); // 800D9700
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 800D9704
  if (!crb(c,2)) { goto L_800D9714; } // 800D9708
  c->r[3]=R32(c->r[31]+0x000000ACu); // 800D970C
  W32(c->r[3]+0x00000018u,c->r[29]); // 800D9710
L_800D9714:;
  c->r[3]=R32(c->r[31]+0x000000ACu); // 800D9714
  c->r[3]=c->r[3]+0x00000004u; // 800D9718
  c->lr=0x800D9720u; f_800D82E0(c); // 800D971C
  c->r[6]=R32(c->r[31]+0x000000ACu); // 800D9720
  c->r[3]=c->r[31]+0x000000DCu; // 800D9724
  c->r[4]=c->r[30]+0x000000DCu; // 800D9728
  c->r[5]=0u+0x0000000Cu; // 800D972C
  W32(c->r[6]+0x00000000u,c->r[30]); // 800D9730
  {uint32_t ea=c->r[30]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9734
  {uint32_t ea=c->r[31]+0x00000080u; WF32(ea,c->f[0]);} // 800D9738
  {uint32_t ea=c->r[30]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D973C
  {uint32_t ea=c->r[31]+0x00000084u; WF32(ea,c->f[0]);} // 800D9740
  c->r[0]=R32(c->r[30]+0x00000088u); // 800D9744
  W32(c->r[31]+0x00000088u,c->r[0]); // 800D9748
  c->r[0]=R32(c->r[30]+0x000000F4u); // 800D974C
  W32(c->r[31]+0x000000F4u,c->r[0]); // 800D9750
  c->lr=0x800D9758u; f_80004000(c); // 800D9754
  {uint32_t ea=c->r[30]+0x000000F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9758
  c->r[0]=0u+0x00000000u; // 800D975C
  {uint32_t ea=c->r[31]+0x000000F8u; WF32(ea,c->f[0]);} // 800D9760
  c->r[4]=c->r[31]|c->r[31]; // 800D9764
  c->r[3]=R32(c->r[31]+0x000000ACu); // 800D9768
  {uint32_t ea=c->r[30]+0x000000FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D976C
  {uint32_t ea=c->r[31]+0x000000FCu; WF32(ea,c->f[0]);} // 800D9770
  {uint32_t ea=c->r[30]+0x00000100u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9774
  {uint32_t ea=c->r[31]+0x00000100u; WF32(ea,c->f[0]);} // 800D9778
  {uint32_t ea=c->r[30]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D977C
  {uint32_t ea=c->r[31]+0x00000104u; WF32(ea,c->f[0]);} // 800D9780
  {uint32_t ea=c->r[30]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9784
  {uint32_t ea=c->r[31]+0x0000008Cu; WF32(ea,c->f[0]);} // 800D9788
  {uint32_t ea=c->r[30]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D978C
  {uint32_t ea=c->r[31]+0x00000090u; WF32(ea,c->f[0]);} // 800D9790
  {uint32_t ea=c->r[30]+0x00000108u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9794
  {uint32_t ea=c->r[31]+0x00000108u; WF32(ea,c->f[0]);} // 800D9798
  {uint32_t ea=c->r[30]+0x0000010Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D979C
  {uint32_t ea=c->r[31]+0x0000010Cu; WF32(ea,c->f[0]);} // 800D97A0
  {uint32_t ea=c->r[30]+0x00000110u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D97A4
  {uint32_t ea=c->r[31]+0x00000110u; WF32(ea,c->f[0]);} // 800D97A8
  {uint32_t ea=c->r[30]+0x00000114u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D97AC
  {uint32_t ea=c->r[31]+0x00000114u; WF32(ea,c->f[0]);} // 800D97B0
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000000A4u); // 800D97B4
  W16(c->r[31]+0x000000A4u,c->r[5]); // 800D97B8
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x000000A6u); // 800D97BC
  W16(c->r[31]+0x000000A6u,c->r[5]); // 800D97C0
  {uint32_t ea=c->r[30]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D97C4
  {uint32_t ea=c->r[31]+0x00000098u; WF32(ea,c->f[0]);} // 800D97C8
  {uint32_t ea=c->r[30]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D97CC
  {uint32_t ea=c->r[31]+0x0000009Cu; WF32(ea,c->f[0]);} // 800D97D0
  {uint32_t ea=c->r[30]+0x000000A0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D97D4
  {uint32_t ea=c->r[31]+0x000000A0u; WF32(ea,c->f[0]);} // 800D97D8
  W16(c->r[3]+0x0000001Cu,c->r[0]); // 800D97DC
  c->r[3]=R32(c->r[30]+0x00000138u); // 800D97E0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800D97E4
  c->r[12]=R32(c->r[12]+0x00000080u); // 800D97E8
  c->ctr=c->r[12]; // 800D97EC
  if (true) { c->lr=0x800D97F4u; dispatch(c,c->ctr); } // 800D97F0
  cmps(c,0,(int32_t)c->r[3],0); // 800D97F4
  if (crb(c,2)) { goto L_800D9800; } // 800D97F8
  goto L_800D9804; // 800D97FC
L_800D9800:;
  c->r[3]=0u+0x00000000u; // 800D9800
L_800D9804:;
  c->r[11]=c->r[1]+0x00000020u; // 800D9804
  c->lr=0x800D980Cu; f_800C2EA0(c); // 800D9808
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D980C
  c->lr=c->r[0]; // 800D9810
  c->r[1]=c->r[1]+0x00000020u; // 800D9814
  return; // 800D9818
}

// fn_800D9820
void f_800D9820(Ctx* __restrict c) {
  trace_call(0x800D9820u);
  c->r[5]=R32(c->r[3]+0x000000ACu); // 800D9820
  cmps(c,0,(int32_t)c->r[5],0); // 800D9824
  if (crb(c,2)) { goto L_800D983C; } // 800D9828
  if (crb(c,2)) { goto L_800D9838; } // 800D982C
  c->r[3]=R32(c->r[5]+0x00000000u); // 800D9830
  goto L_800D983C; // 800D9834
L_800D9838:;
  c->r[3]=0u+0x00000000u; // 800D9838
L_800D983C:;
  c->r[6]=R32(c->r[3]+0x000000A8u); // 800D983C
  c->r[7]=0u+0x00000000u; // 800D9840
  c->r[5]=0u+0x00000000u; // 800D9844
  c->r[0]=R32(c->r[6]+0x0000001Cu); // 800D9848
  c->ctr=c->r[0]; // 800D984C
  cmps(c,0,(int32_t)c->r[0],0); // 800D9850
  if (!crb(c,1)) { goto L_800D9880; } // 800D9854
L_800D9858:;
  c->r[6]=R32(c->r[3]+0x000000A8u); // 800D9858
  c->r[6]=R32(c->r[6]+0x00000020u); // 800D985C
  c->r[0]=R32(c->r[6]+c->r[5]); // 800D9860
  cmpu(c,0,c->r[0],c->r[4]); // 800D9864
  if (!crb(c,2)) { goto L_800D9874; } // 800D9868
  c->r[3]=c->r[7]|c->r[7]; // 800D986C
  return; // 800D9870
L_800D9874:;
  c->r[7]=c->r[7]+0x00000001u; // 800D9874
  c->r[5]=c->r[5]+0x00000004u; // 800D9878
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800D9858; } // 800D987C
L_800D9880:;
  c->r[3]=0u+0xFFFFFFFFu; // 800D9880
  return; // 800D9884
}

// fn_800D9890
void f_800D9890(Ctx* __restrict c) {
  trace_call(0x800D9890u);
  c->r[4]=R32(c->r[3]+0x000000A8u); // 800D9890
  c->r[5]=0u+0x00000001u; // 800D9894
  c->r[6]=R32(c->r[3]+0x00000068u); // 800D9898
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 800D989C
  c->r[3]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 800D98A0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800D98A4
  c->r[0]=c->r[0]-c->r[6]; // 800D98A8
  c->r[0]=cntlz(c->r[0]); // 800D98AC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800D98B0
  return; // 800D98B4
}

// fn_800D98C0
void f_800D98C0(Ctx* __restrict c) {
  trace_call(0x800D98C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D98C0
  c->r[0]=c->lr; // 800D98C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D98C8
  c->r[11]=c->r[1]+0x00000020u; // 800D98CC
  c->lr=0x800D98D4u; f_800C2E48(c); // 800D98D0
  c->r[0]=R32(c->r[3]+0x000000A8u); // 800D98D4
  c->r[31]=c->r[3]|c->r[3]; // 800D98D8
  cmps(c,0,(int32_t)c->r[0],0); // 800D98DC
  if (crb(c,2)) { goto L_800D99C8; } // 800D98E0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000064u); // 800D98E4
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 800D98E8
  if (crb(c,2)) { goto L_800D9900; } // 800D98EC
  c->r[4]=R32(c->r[3]+0x00000028u); // 800D98F0
  c->r[4]=R32(c->r[4]+0x00000030u); // 800D98F4
  c->r[29]=R32(c->r[4]+0x00000038u); // 800D98F8
  goto L_800D9904; // 800D98FC
L_800D9900:;
  c->r[29]=0u+0x00000000u; // 800D9900
L_800D9904:;
  cmps(c,0,(int32_t)c->r[29],0); // 800D9904
  if (crb(c,2)) { goto L_800D9914; } // 800D9908
  c->r[27]=R32(c->r[29]+0x00000008u); // 800D990C
  goto L_800D991C; // 800D9910
L_800D9914:;
  c->r[4]=R32(c->r[3]+0x000000A8u); // 800D9914
  c->r[27]=R32(c->r[4]+0x00000000u); // 800D9918
L_800D991C:;
  cmps(c,0,(int32_t)c->r[29],0); // 800D991C
  if (crb(c,2)) { goto L_800D992C; } // 800D9920
  c->r[28]=R32(c->r[29]+0x00000010u); // 800D9924
  goto L_800D9934; // 800D9928
L_800D992C:;
  c->r[3]=R32(c->r[3]+0x000000A8u); // 800D992C
  c->r[28]=R32(c->r[3]+0x00000004u); // 800D9930
L_800D9934:;
  cmps(c,0,(int32_t)c->r[28],0); // 800D9934
  if (!crb(c,2)) { goto L_800D9940; } // 800D9938
  c->r[27]=0u+0x00000000u; // 800D993C
L_800D9940:;
  c->r[26]=0u+0x00000000u; // 800D9940
  c->r[30]=0u+0x00000000u; // 800D9944
  goto L_800D99C0; // 800D9948
L_800D994C:;
  cmps(c,0,(int32_t)c->r[29],0); // 800D994C
  c->r[3]=0u+0x00000000u; // 800D9950
  if (crb(c,2)) { goto L_800D9998; } // 800D9954
  c->r[4]=R32(c->r[28]+c->r[30]); // 800D9958
  cmps(c,0,(int32_t)c->r[4],0); // 800D995C
  if (crb(c,2)) { goto L_800D999C; } // 800D9960
  c->r[5]=R32(c->r[4]+0x000000ACu); // 800D9964
  cmps(c,0,(int32_t)c->r[5],0); // 800D9968
  if (crb(c,2)) { goto L_800D9978; } // 800D996C
  c->r[0]=R32(c->r[5]+0x00000000u); // 800D9970
  goto L_800D997C; // 800D9974
L_800D9978:;
  c->r[0]=0u+0x00000000u; // 800D9978
L_800D997C:;
  cmpu(c,0,c->r[0],c->r[31]); // 800D997C
  if (!crb(c,2)) { goto L_800D999C; } // 800D9980
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000064u); // 800D9984
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800D9988
  if (crb(c,2)) { goto L_800D999C; } // 800D998C
  c->r[3]=c->r[4]|c->r[4]; // 800D9990
  goto L_800D999C; // 800D9994
L_800D9998:;
  c->r[3]=R32(c->r[28]+c->r[30]); // 800D9998
L_800D999C:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D999C
  if (crb(c,2)) { goto L_800D99B8; } // 800D99A0
  c->lr=0x800D99A8u; f_800D98C0(c); // 800D99A4
  cmps(c,0,(int32_t)c->r[3],0); // 800D99A8
  if (crb(c,2)) { goto L_800D99B8; } // 800D99AC
  c->r[3]=0u+0x00000001u; // 800D99B0
  goto L_800D99D4; // 800D99B4
L_800D99B8:;
  c->r[26]=c->r[26]+0x00000001u; // 800D99B8
  c->r[30]=c->r[30]+0x00000004u; // 800D99BC
L_800D99C0:;
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[27]); // 800D99C0
  if (crb(c,0)) { IRQCHK(c); goto L_800D994C; } // 800D99C4
L_800D99C8:;
  c->r[3]=R32(c->r[31]+0x00000068u); // 800D99C8
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800D99CC
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 800D99D0
L_800D99D4:;
  c->r[11]=c->r[1]+0x00000020u; // 800D99D4
  c->lr=0x800D99DCu; f_800C2E94(c); // 800D99D8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800D99DC
  c->lr=c->r[0]; // 800D99E0
  c->r[1]=c->r[1]+0x00000020u; // 800D99E4
  return; // 800D99E8
}

// fn_800D99F0
void f_800D99F0(Ctx* __restrict c) {
  trace_call(0x800D99F0u);
  c->r[0]=R32(c->r[3]+0x000000A8u); // 800D99F0
  cmps(c,0,(int32_t)c->r[0],0); // 800D99F4
  if (crb(c,2)) { goto L_800D9A04; } // 800D99F8
  c->r[5]=c->r[3]|c->r[3]; // 800D99FC
  goto L_800D9A1C; // 800D9A00
L_800D9A04:;
  c->r[5]=R32(c->r[3]+0x000000ACu); // 800D9A04
  cmps(c,0,(int32_t)c->r[5],0); // 800D9A08
  if (crb(c,2)) { goto L_800D9A18; } // 800D9A0C
  c->r[5]=R32(c->r[5]+0x00000000u); // 800D9A10
  goto L_800D9A1C; // 800D9A14
L_800D9A18:;
  c->r[5]=0u+0x00000000u; // 800D9A18
L_800D9A1C:;
  cmps(c,0,(int32_t)c->r[4],0); // 800D9A1C
  if (crb(c,0)) { goto L_800D9A34; } // 800D9A20
  c->r[5]=R32(c->r[5]+0x000000A8u); // 800D9A24
  c->r[0]=R32(c->r[5]+0x0000001Cu); // 800D9A28
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D9A2C
  if (crb(c,0)) { goto L_800D9A3C; } // 800D9A30
L_800D9A34:;
  c->r[3]=0u+0x00000000u; // 800D9A34
  return; // 800D9A38
L_800D9A3C:;
  c->r[5]=0u+0x00000001u; // 800D9A3C
  c->r[0]=R32(c->r[3]+0x00000068u); // 800D9A40
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[5]<<((c->r[4])&31)); // 800D9A44
  c->r[3]=c->r[3]&c->r[0]; // 800D9A48
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800D9A4C
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 800D9A50
  return; // 800D9A54
}

// fn_800D9A60
void f_800D9A60(Ctx* __restrict c) {
  trace_call(0x800D9A60u);
  c->r[0]=R32(c->r[3]+0x000000A8u); // 800D9A60
  cmps(c,0,(int32_t)c->r[0],0); // 800D9A64
  if (crb(c,2)) { goto L_800D9A74; } // 800D9A68
  c->r[6]=c->r[3]|c->r[3]; // 800D9A6C
  goto L_800D9A8C; // 800D9A70
L_800D9A74:;
  c->r[6]=R32(c->r[3]+0x000000ACu); // 800D9A74
  cmps(c,0,(int32_t)c->r[6],0); // 800D9A78
  if (crb(c,2)) { goto L_800D9A88; } // 800D9A7C
  c->r[6]=R32(c->r[6]+0x00000000u); // 800D9A80
  goto L_800D9A8C; // 800D9A84
L_800D9A88:;
  c->r[6]=0u+0x00000000u; // 800D9A88
L_800D9A8C:;
  cmps(c,0,(int32_t)c->r[4],0); // 800D9A8C
  if (crb(c,0)) return; // 800D9A90
  c->r[6]=R32(c->r[6]+0x000000A8u); // 800D9A94
  c->r[0]=R32(c->r[6]+0x0000001Cu); // 800D9A98
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D9A9C
  if (crb(c,0)) { goto L_800D9AA8; } // 800D9AA0
  return; // 800D9AA4
L_800D9AA8:;
  cmps(c,0,(int32_t)c->r[5],0); // 800D9AA8
  if (crb(c,2)) { goto L_800D9AC8; } // 800D9AAC
  c->r[5]=0u+0x00000001u; // 800D9AB0
  c->r[0]=R32(c->r[3]+0x00000068u); // 800D9AB4
  c->r[4]=((c->r[4])&0x20)?0u:(c->r[5]<<((c->r[4])&31)); // 800D9AB8
  c->r[0]=c->r[4]|c->r[0]; // 800D9ABC
  W32(c->r[3]+0x00000068u,c->r[0]); // 800D9AC0
  return; // 800D9AC4
L_800D9AC8:;
  c->r[5]=0u+0x00000001u; // 800D9AC8
  c->r[0]=R32(c->r[3]+0x00000068u); // 800D9ACC
  c->r[4]=((c->r[4])&0x20)?0u:(c->r[5]<<((c->r[4])&31)); // 800D9AD0
  c->r[4]=~(c->r[4]|c->r[4]); // 800D9AD4
  c->r[0]=c->r[4]&c->r[0]; // 800D9AD8
  W32(c->r[3]+0x00000068u,c->r[0]); // 800D9ADC
  return; // 800D9AE0
}

// fn_800D9AF0
void f_800D9AF0(Ctx* __restrict c) {
  trace_call(0x800D9AF0u);
  cmps(c,0,(int32_t)c->r[4],0); // 800D9AF0
  if (crb(c,0)) { goto L_800D9B08; } // 800D9AF4
  c->r[5]=R32(c->r[3]+0x000000A8u); // 800D9AF8
  c->r[0]=R32(c->r[5]+0x0000001Cu); // 800D9AFC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D9B00
  if (crb(c,0)) { goto L_800D9B10; } // 800D9B04
L_800D9B08:;
  c->r[3]=0u+0x00000000u; // 800D9B08
  return; // 800D9B0C
L_800D9B10:;
  c->r[3]=0u+0x00000001u; // 800D9B10
  c->r[0]=R32(c->r[5]+0x00000030u); // 800D9B14
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[3]<<((c->r[4])&31)); // 800D9B18
  c->r[3]=c->r[3]&c->r[0]; // 800D9B1C
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); // 800D9B20
  c->r[3]=addc(c,~c->r[0],c->r[3],c->xer_ca); // 800D9B24
  return; // 800D9B28
}

// fn_800D9B30
void f_800D9B30(Ctx* __restrict c) {
  trace_call(0x800D9B30u);
  cmps(c,0,(int32_t)c->r[4],0); // 800D9B30
  if (crb(c,0)) return; // 800D9B34
  c->r[6]=R32(c->r[3]+0x000000A8u); // 800D9B38
  c->r[0]=R32(c->r[6]+0x0000001Cu); // 800D9B3C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800D9B40
  if (crb(c,0)) { goto L_800D9B4C; } // 800D9B44
  return; // 800D9B48
L_800D9B4C:;
  cmps(c,0,(int32_t)c->r[5],0); // 800D9B4C
  if (crb(c,2)) { goto L_800D9B70; } // 800D9B50
  c->r[5]=0u+0x00000001u; // 800D9B54
  c->r[0]=R32(c->r[6]+0x00000030u); // 800D9B58
  c->r[4]=((c->r[4])&0x20)?0u:(c->r[5]<<((c->r[4])&31)); // 800D9B5C
  c->r[3]=R32(c->r[3]+0x000000A8u); // 800D9B60
  c->r[0]=c->r[4]|c->r[0]; // 800D9B64
  W32(c->r[3]+0x00000030u,c->r[0]); // 800D9B68
  return; // 800D9B6C
L_800D9B70:;
  c->r[5]=0u+0x00000001u; // 800D9B70
  c->r[0]=R32(c->r[6]+0x00000030u); // 800D9B74
  c->r[4]=((c->r[4])&0x20)?0u:(c->r[5]<<((c->r[4])&31)); // 800D9B78
  c->r[3]=R32(c->r[3]+0x000000A8u); // 800D9B7C
  c->r[4]=~(c->r[4]|c->r[4]); // 800D9B80
  c->r[0]=c->r[4]&c->r[0]; // 800D9B84
  W32(c->r[3]+0x00000030u,c->r[0]); // 800D9B88
  return; // 800D9B8C
}

// fn_800D9B90
void f_800D9B90(Ctx* __restrict c) {
  trace_call(0x800D9B90u);
  c->r[0]=R32(c->r[3]+0x00000060u); // 800D9B90
  c->r[3]=rotl(c->r[0],15)&0x00000001u; // 800D9B94
  return; // 800D9B98
}

// EmitterSetFlagDisableCalc__FPvUl
void f_800D9BA0(Ctx* __restrict c) {
  trace_call(0x800D9BA0u);
  cmps(c,0,(int32_t)c->r[4],0); // 800D9BA0
  if (crb(c,2)) { goto L_800D9BB8; } // 800D9BA4
  c->r[0]=R32(c->r[3]+0x00000060u); // 800D9BA8
  c->r[0]=c->r[0]|0x00020000u; // 800D9BAC
  W32(c->r[3]+0x00000060u,c->r[0]); // 800D9BB0
  return; // 800D9BB4
L_800D9BB8:;
  c->r[0]=R32(c->r[3]+0x00000060u); // 800D9BB8
  c->r[0]=rotl(c->r[0],0)&0xFFFDFFFFu; // 800D9BBC
  W32(c->r[3]+0x00000060u,c->r[0]); // 800D9BC0
  return; // 800D9BC4
}

// fn_800D9BD0
void f_800D9BD0(Ctx* __restrict c) {
  trace_call(0x800D9BD0u);
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000064u); // 800D9BD0
  c->r[3]=rotl(c->r[0],27)&0x00000001u; // 800D9BD4
  return; // 800D9BD8
}

// fn_800D9BE0
void f_800D9BE0(Ctx* __restrict c) {
  trace_call(0x800D9BE0u);
  c->r[0]=R32(c->r[3]+0x00000060u); // 800D9BE0
  c->r[0]=rotl(c->r[0],0)&0x00002000u; cr0(c,c->r[0]); // 800D9BE4
  if (crb(c,2)) { goto L_800D9BF4; } // 800D9BE8
  c->r[3]=0u+0x00000001u; // 800D9BEC
  return; // 800D9BF0
L_800D9BF4:;
  c->r[3]=R32(c->r[3]+0x00000070u); // 800D9BF4
  goto L_800D9C14; // 800D9BF8
L_800D9BFC:;
  c->r[0]=R8(c->r[3]+0x0000001Cu); // 800D9BFC
  cmps(c,0,(int32_t)c->r[0],0); // 800D9C00
  if (crb(c,2)) { goto L_800D9C10; } // 800D9C04
  c->r[3]=0u+0x00000001u; // 800D9C08
  return; // 800D9C0C
L_800D9C10:;
  c->r[3]=R32(c->r[3]+0x00000048u); // 800D9C10
L_800D9C14:;
  cmps(c,0,(int32_t)c->r[3],0); // 800D9C14
  if (!crb(c,2)) { IRQCHK(c); goto L_800D9BFC; } // 800D9C18
  c->r[3]=0u+0x00000000u; // 800D9C1C
  return; // 800D9C20
}

// fn_800D9C30
void f_800D9C30(Ctx* __restrict c) {
  trace_call(0x800D9C30u);
  c->r[5]=R32(c->r[3]+0x000000ACu); // 800D9C30
  cmps(c,0,(int32_t)c->r[5],0); // 800D9C34
  if (crb(c,2)) { goto L_800D9C44; } // 800D9C38
  c->r[6]=R32(c->r[5]+0x00000010u); // 800D9C3C
  goto L_800D9C48; // 800D9C40
L_800D9C44:;
  c->r[6]=0u+0x00000000u; // 800D9C44
L_800D9C48:;
  c->r[5]=R32(c->r[3]+0x000000ACu); // 800D9C48
  c->r[0]=c->r[6]+0x00000001u; // 800D9C4C
  cmps(c,0,(int32_t)c->r[4],0); // 800D9C50
  W32(c->r[5]+0x00000010u,c->r[0]); // 800D9C54
  if (crb(c,2)) { goto L_800D9C8C; } // 800D9C58
  c->r[4]=R32(c->r[3]+0x000000ACu); // 800D9C5C
  cmps(c,0,(int32_t)c->r[4],0); // 800D9C60
  if (crb(c,2)) { goto L_800D9C70; } // 800D9C64
  c->r[0]=R32(c->r[4]+0x00000010u); // 800D9C68
  goto L_800D9C74; // 800D9C6C
L_800D9C70:;
  c->r[0]=0u+0x00000000u; // 800D9C70
L_800D9C74:;
  cmpu(c,0,c->r[0],0x00000FFFu); // 800D9C74
  if (!crb(c,1)) return; // 800D9C78
  c->r[3]=R32(c->r[3]+0x000000ACu); // 800D9C7C
  c->r[0]=0u+0x00000001u; // 800D9C80
  W32(c->r[3]+0x00000010u,c->r[0]); // 800D9C84
  return; // 800D9C88
L_800D9C8C:;
  c->r[4]=R32(c->r[3]+0x000000ACu); // 800D9C8C
  cmps(c,0,(int32_t)c->r[4],0); // 800D9C90
  if (crb(c,2)) { goto L_800D9CA0; } // 800D9C94
  c->r[0]=R32(c->r[4]+0x00000010u); // 800D9C98
  goto L_800D9CA4; // 800D9C9C
L_800D9CA0:;
  c->r[0]=0u+0x00000000u; // 800D9CA0
L_800D9CA4:;
  cmpu(c,0,c->r[0],0x000007FFu); // 800D9CA4
  if (!crb(c,1)) return; // 800D9CA8
  c->r[3]=R32(c->r[3]+0x000000ACu); // 800D9CAC
  c->r[0]=0u+0x00000001u; // 800D9CB0
  W32(c->r[3]+0x00000010u,c->r[0]); // 800D9CB4
  return; // 800D9CB8
}

// fn_800D9CC0
void f_800D9CC0(Ctx* __restrict c) {
  trace_call(0x800D9CC0u);
  c->r[3]=R32(c->r[3]+0x000000ACu); // 800D9CC0
  cmps(c,0,(int32_t)c->r[3],0); // 800D9CC4
  if (crb(c,2)) { goto L_800D9CD4; } // 800D9CC8
  c->r[3]=R32(c->r[3]+0x00000010u); // 800D9CCC
  return; // 800D9CD0
L_800D9CD4:;
  c->r[3]=0u+0x00000000u; // 800D9CD4
  return; // 800D9CD8
}

// fn_800D9CE0
void f_800D9CE0(Ctx* __restrict c) {
  trace_call(0x800D9CE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9CE0
  c->r[0]=c->lr; // 800D9CE4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800D9CE8
  c->r[11]=c->r[1]+0x00000030u; // 800D9CEC
  c->lr=0x800D9CF4u; f_800C2E54(c); // 800D9CF0
  c->r[31]=0u+0x00000000u; // 800D9CF4
  W32(c->r[1]+0x00000008u,c->r[31]); // 800D9CF8
  c->r[9]=R32(c->r[13]+0xFFFF9830u); // 800D9CFC
  c->r[30]=c->r[4]|c->r[4]; // 800D9D00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800D9D04
  c->r[29]=c->r[3]|c->r[3]; // 800D9D08
  c->r[6]=c->r[1]+0x00000008u; // 800D9D0C
  c->r[4]=0u+0x00000000u; // 800D9D10
  W32(c->r[1]+0x00000010u,c->r[31]); // 800D9D14
  c->r[5]=0u+0x00000000u; // 800D9D18
  c->r[7]=0u+0x00000000u; // 800D9D1C
  c->r[8]=0u+0x00000000u; // 800D9D20
  c->r[3]=R32(c->r[9]+0x00000014u); // 800D9D24
  c->lr=0x800D9D2Cu; f_8019EA70(c); // 800D9D28
  cmps(c,0,(int32_t)c->r[3],0); // 800D9D2C
  if (crb(c,2)) { goto L_800D9D38; } // 800D9D30
  goto L_800D9D98; // 800D9D34
L_800D9D38:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D9D38
  {uint32_t ea=c->r[29]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9D3C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 800D9D40
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800D9D44
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[0]=c->ps1[0]=RF32(ea);} // 800D9D48
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=c->ps1[2]=RF32(ea);} // 800D9D4C
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 800D9D50
  fcmp(c,0,c->f[0],c->f[1]); // 800D9D54
  {uint32_t ea=c->r[29]+0x000000C0u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D9D58
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[1]); // 800D9D5C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[3]);} // 800D9D60
  {uint32_t ea=c->r[29]+0x000000C4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800D9D64
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800D9D68
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 800D9D6C
  if (!crb(c,2)) { goto L_800D9D84; } // 800D9D70
  fcmp(c,0,c->f[0],c->f[3]); // 800D9D74
  if (!crb(c,2)) { goto L_800D9D84; } // 800D9D78
  fcmp(c,0,c->f[0],c->f[1]); // 800D9D7C
  if (crb(c,2)) { goto L_800D9D90; } // 800D9D80
L_800D9D84:;
  c->r[0]=0u+0x00000001u; // 800D9D84
  W8(c->r[30]+0x00000000u,c->r[0]); // 800D9D88
  goto L_800D9D94; // 800D9D8C
L_800D9D90:;
  W8(c->r[30]+0x00000000u,c->r[31]); // 800D9D90
L_800D9D94:;
  c->r[3]=0u+0x00000000u; // 800D9D94
L_800D9D98:;
  c->r[11]=c->r[1]+0x00000030u; // 800D9D98
  c->lr=0x800D9DA0u; f_800C2EA0(c); // 800D9D9C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800D9DA0
  c->lr=c->r[0]; // 800D9DA4
  c->r[1]=c->r[1]+0x00000030u; // 800D9DA8
  return; // 800D9DAC
}

// fn_800D9DB0
void f_800D9DB0(Ctx* __restrict c) {
  trace_call(0x800D9DB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9DB0
  c->r[0]=c->lr; // 800D9DB4
  c->r[4]=c->r[3]|c->r[3]; // 800D9DB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800D9DBC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000064u); // 800D9DC0
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 800D9DC4
  if (crb(c,2)) { goto L_800D9E04; } // 800D9DC8
  c->r[3]=R32(c->r[3]+0x00000028u); // 800D9DCC
  c->r[3]=R32(c->r[3]+0x00000030u); // 800D9DD0
  c->r[3]=R32(c->r[3]+0x00000038u); // 800D9DD4
  cmps(c,0,(int32_t)c->r[3],0); // 800D9DD8
  if (crb(c,2)) { goto L_800D9E04; } // 800D9DDC
  c->r[0]=0u+0x00000000u; // 800D9DE0
  W32(c->r[1]+0x00000008u,c->r[0]); // 800D9DE4
  c->r[5]=c->r[1]+0x00000008u; // 800D9DE8
  c->lr=0x800D9DF0u; f_8010B940(c); // 800D9DEC
  cmps(c,0,(int32_t)c->r[3],0); // 800D9DF0
  if (crb(c,2)) { goto L_800D9DFC; } // 800D9DF4
  goto L_800D9E08; // 800D9DF8
L_800D9DFC:;
  c->r[3]=R32(c->r[1]+0x00000008u); // 800D9DFC
  goto L_800D9E08; // 800D9E00
L_800D9E04:;
  c->r[3]=0u+0x00000000u; // 800D9E04
L_800D9E08:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800D9E08
  c->lr=c->r[0]; // 800D9E0C
  c->r[1]=c->r[1]+0x00000010u; // 800D9E10
  return; // 800D9E14
}

// fn_800D9E20
void f_800D9E20(Ctx* __restrict c) {
  trace_call(0x800D9E20u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800D9E20
  c->r[0]=c->lr; // 800D9E24
  W32(c->r[1]+0x00000024u,c->r[0]); // 800D9E28
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800D9E2C
  c->r[31]=c->r[3]|c->r[3]; // 800D9E30
  c->r[4]=R32(c->r[3]+0x000000ACu); // 800D9E34
  cmps(c,0,(int32_t)c->r[4],0); // 800D9E38
  if (crb(c,2)) { goto L_800D9E48; } // 800D9E3C
  c->r[0]=R32(c->r[4]+0x00000000u); // 800D9E40
  goto L_800D9E4C; // 800D9E44
L_800D9E48:;
  c->r[0]=0u+0x00000000u; // 800D9E48
L_800D9E4C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D9E4C
  if (!crb(c,2)) { goto L_800D9E5C; } // 800D9E50
  c->r[3]=0u+0x00000055u; // 800D9E54
  goto L_800DA0CC; // 800D9E58
L_800D9E5C:;
  c->r[3]=R32(c->r[3]+0x00000060u); // 800D9E5C
  c->r[0]=rotl(c->r[3],0)&0x00001000u; cr0(c,c->r[0]); // 800D9E60
  if (crb(c,2)) { goto L_800D9EE0; } // 800D9E64
  c->r[0]=rotl(c->r[3],0)&0x00100000u; cr0(c,c->r[0]); // 800D9E68
  if (crb(c,2)) { goto L_800D9E8C; } // 800D9E6C
  c->r[3]=c->r[31]|c->r[31]; // 800D9E70
  c->r[4]=0u+0x00000001u; // 800D9E74
  c->r[5]=0u+0x00000000u; // 800D9E78
  c->lr=0x800D9E80u; f_800DA0F0(c); // 800D9E7C
  cmps(c,0,(int32_t)c->r[3],0); // 800D9E80
  if (crb(c,2)) { goto L_800D9E8C; } // 800D9E84
  goto L_800DA0CC; // 800D9E88
L_800D9E8C:;
  c->r[12]=R32(c->r[31]+0x00000010u); // 800D9E8C
  c->r[3]=c->r[31]|c->r[31]; // 800D9E90
  c->r[4]=c->r[1]+0x00000008u; // 800D9E94
  c->r[12]=R32(c->r[12]+0x0000008Cu); // 800D9E98
  c->ctr=c->r[12]; // 800D9E9C
  if (true) { c->lr=0x800D9EA4u; dispatch(c,c->ctr); } // 800D9EA0
  cmps(c,0,(int32_t)c->r[3],0); // 800D9EA4
  if (crb(c,2)) { goto L_800D9EB0; } // 800D9EA8
  goto L_800DA0CC; // 800D9EAC
L_800D9EB0:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 800D9EB0
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 800D9EB4
  if (crb(c,2)) { goto L_800D9EC4; } // 800D9EB8
  c->r[3]=0u+0x00000000u; // 800D9EBC
  goto L_800DA0CC; // 800D9EC0
L_800D9EC4:;
  c->r[3]=c->r[31]|c->r[31]; // 800D9EC4
  c->r[4]=0u+0x00000001u; // 800D9EC8
  c->r[5]=0u+0x00000000u; // 800D9ECC
  c->lr=0x800D9ED4u; f_800DA0F0(c); // 800D9ED0
  cmps(c,0,(int32_t)c->r[3],0); // 800D9ED4
  if (crb(c,2)) { goto L_800D9EE0; } // 800D9ED8
  goto L_800DA0CC; // 800D9EDC
L_800D9EE0:;
  c->r[3]=R32(c->r[31]+0x00000070u); // 800D9EE0
  cmps(c,0,(int32_t)c->r[3],0); // 800D9EE4
  if (crb(c,2)) { goto L_800D9F00; } // 800D9EE8
  c->r[4]=c->r[31]|c->r[31]; // 800D9EEC
  c->lr=0x800D9EF4u; f_800E8F80(c); // 800D9EF0
  cmps(c,0,(int32_t)c->r[3],0); // 800D9EF4
  if (crb(c,2)) { goto L_800D9F00; } // 800D9EF8
  goto L_800DA0CC; // 800D9EFC
L_800D9F00:;
  c->r[3]=R32(c->r[31]+0x000000ACu); // 800D9F00
  cmps(c,0,(int32_t)c->r[3],0); // 800D9F04
  if (crb(c,2)) { goto L_800D9F14; } // 800D9F08
  c->r[0]=R32(c->r[3]+0x00000018u); // 800D9F0C
  goto L_800D9F18; // 800D9F10
L_800D9F14:;
  c->r[0]=0u+0x00000000u; // 800D9F14
L_800D9F18:;
  cmps(c,0,(int32_t)c->r[0],0); // 800D9F18
  if (!crb(c,2)) { goto L_800D9F34; } // 800D9F1C
  c->r[3]=c->r[31]|c->r[31]; // 800D9F20
  c->lr=0x800D9F28u; f_800D9370(c); // 800D9F24
  cmps(c,0,(int32_t)c->r[3],0); // 800D9F28
  if (crb(c,2)) { goto L_800D9F34; } // 800D9F2C
  goto L_800DA0CC; // 800D9F30
L_800D9F34:;
  c->r[3]=c->r[31]|c->r[31]; // 800D9F34
  c->lr=0x800D9F3Cu; f_800DB2C0(c); // 800D9F38
  cmps(c,0,(int32_t)c->r[3],0); // 800D9F3C
  if (crb(c,2)) { goto L_800D9F48; } // 800D9F40
  goto L_800DA0CC; // 800D9F44
L_800D9F48:;
  c->r[3]=R32(c->r[31]+0x000000ACu); // 800D9F48
  c->r[0]=R32(c->r[31]+0x00000060u); // 800D9F4C
  cmps(c,0,(int32_t)c->r[3],0); // 800D9F50
  if (crb(c,2)) { goto L_800D9F60; } // 800D9F54
  c->r[3]=R32(c->r[3]+0x00000018u); // 800D9F58
  goto L_800D9F64; // 800D9F5C
L_800D9F60:;
  c->r[3]=0u+0x00000000u; // 800D9F60
L_800D9F64:;
  c->r[4]=rotl(c->r[0],19)&0x00000001u; // 800D9F64
  c->lr=0x800D9F6Cu; f_80186D80(c); // 800D9F68
  cmps(c,0,(int32_t)c->r[3],0); // 800D9F6C
  if (crb(c,2)) { goto L_800D9F78; } // 800D9F70
  goto L_800DA0CC; // 800D9F74
L_800D9F78:;
  c->r[3]=c->r[31]|c->r[31]; // 800D9F78
  c->lr=0x800D9F80u; f_800DE190(c); // 800D9F7C
  {uint32_t ea=c->r[31]+0x000000A0u; WF32(ea,c->f[1]);} // 800D9F80
  c->r[3]=R32(c->r[31]+0x00000138u); // 800D9F84
  c->r[12]=R32(c->r[3]+0x00000000u); // 800D9F88
  c->r[12]=R32(c->r[12]+0x00000050u); // 800D9F8C
  c->ctr=c->r[12]; // 800D9F90
  if (true) { c->lr=0x800D9F98u; dispatch(c,c->ctr); } // 800D9F94
  cmps(c,0,(int32_t)c->r[3],0); // 800D9F98
  if (crb(c,2)) { goto L_800D9FA4; } // 800D9F9C
  goto L_800DA0CC; // 800D9FA0
L_800D9FA4:;
  c->r[3]=R32(c->r[31]+0x000000ACu); // 800D9FA4
  c->r[0]=0u+0x00000000u; // 800D9FA8
  W32(c->r[3]+0x00000014u,c->r[0]); // 800D9FAC
  c->r[0]=R32(c->r[31]+0x00000060u); // 800D9FB0
  c->r[0]=rotl(c->r[0],0)&0x00001000u; cr0(c,c->r[0]); // 800D9FB4
  if (!crb(c,2)) { goto L_800D9FFC; } // 800D9FB8
  c->r[4]=R32(c->r[31]+0x00000028u); // 800D9FBC
  cmps(c,0,(int32_t)c->r[4],0); // 800D9FC0
  if (crb(c,2)) { goto L_800D9FE4; } // 800D9FC4
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000020u); // 800D9FC8
  c->r[0]=c->r[3]+0x00000001u; // 800D9FCC
  W16(c->r[4]+0x00000020u,c->r[0]); // 800D9FD0
  c->r[3]=R32(c->r[31]+0x00000028u); // 800D9FD4
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 800D9FD8
  c->r[0]=c->r[0]|0x00001000u; // 800D9FDC
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 800D9FE0
L_800D9FE4:;
  c->r[4]=R32(c->r[31]+0x00000070u); // 800D9FE4
  cmps(c,0,(int32_t)c->r[4],0); // 800D9FE8
  if (crb(c,2)) { goto L_800D9FFC; } // 800D9FEC
  c->r[3]=R16(c->r[4]+0x0000002Cu); // 800D9FF0
  c->r[0]=c->r[3]+0x00000001u; // 800D9FF4
  W16(c->r[4]+0x0000002Cu,c->r[0]); // 800D9FF8
L_800D9FFC:;
  c->r[3]=R32(c->r[31]+0x00000060u); // 800D9FFC
  c->r[0]=0u+0x00000000u; // 800DA000
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x000000A4u); // 800DA004
  c->r[3]=c->r[3]|0x00001000u; // 800DA008
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DA00C
  c->r[3]=rotl(c->r[3],0)&0xFFEFFFFFu; // 800DA010
  cmps(c,0,(int32_t)c->r[4],0); // 800DA014
  c->r[6]=rotl(c->r[3],0)&0xFEFFFFFFu; // 800DA018
  W32(c->r[31]+0x00000060u,c->r[6]); // 800DA01C
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 800DA020
  W32(c->r[1]+0x00000010u,c->r[0]); // 800DA024
  c->r[5]=R32(c->r[3]+0x00000010u); // 800DA028
  c->r[3]=R32(c->r[3]+0x00000014u); // 800DA02C
  W32(c->r[31]+0x0000004Cu,c->r[3]); // 800DA030
  W32(c->r[31]+0x00000048u,c->r[5]); // 800DA034
  W32(c->r[31]+0x00000050u,c->r[5]); // 800DA038
  W32(c->r[31]+0x00000054u,c->r[3]); // 800DA03C
  W32(c->r[31]+0x00000058u,c->r[0]); // 800DA040
  W32(c->r[31]+0x0000005Cu,c->r[0]); // 800DA044
  if (crb(c,2)) { goto L_800DA060; } // 800DA048
  c->r[0]=c->r[6]|0x00200000u; // 800DA04C
  W32(c->r[31]+0x00000060u,c->r[0]); // 800DA050
  c->r[3]=R32(c->r[31]+0x000000ACu); // 800DA054
  W16(c->r[3]+0x0000001Cu,c->r[4]); // 800DA058
  goto L_800DA068; // 800DA05C
L_800DA060:;
  c->r[3]=R32(c->r[31]+0x000000ACu); // 800DA060
  W16(c->r[3]+0x0000001Cu,c->r[0]); // 800DA064
L_800DA068:;
  c->r[3]=R32(c->r[31]+0x000000ACu); // 800DA068
  W32(c->r[3]+0x0000000Cu,c->r[31]); // 800DA06C
  c->r[4]=R32(c->r[31]+0x00000028u); // 800DA070
  c->r[3]=R32(c->r[31]+0x000000ACu); // 800DA074
  c->r[4]=R32(c->r[4]+0x00000030u); // 800DA078
  c->r[5]=c->r[3]+0x00000004u; // 800DA07C
  c->r[0]=R32(c->r[4]+0x00000070u); // 800DA080
  c->r[3]=c->r[4]+0x0000006Cu; // 800DA084
  W32(c->r[5]+0x00000004u,c->r[0]); // 800DA088
  W32(c->r[5]+0x00000000u,c->r[3]); // 800DA08C
  W32(c->r[4]+0x00000070u,c->r[5]); // 800DA090
  c->r[3]=R32(c->r[5]+0x00000004u); // 800DA094
  W32(c->r[3]+0x00000000u,c->r[5]); // 800DA098
  c->r[12]=R32(c->r[31]+0x00000074u); // 800DA09C
  cmps(c,0,(int32_t)c->r[12],0); // 800DA0A0
  if (crb(c,2)) { goto L_800DA0C4; } // 800DA0A4
  c->r[3]=R32(c->r[31]+0x00000018u); // 800DA0A8
  c->r[4]=0u+0x00000009u; // 800DA0AC
  c->r[7]=R32(c->r[31]+0x00000078u); // 800DA0B0
  c->r[5]=0u+0x00000000u; // 800DA0B4
  c->r[6]=0u+0x00000000u; // 800DA0B8
  c->ctr=c->r[12]; // 800DA0BC
  if (true) { c->lr=0x800DA0C4u; dispatch(c,c->ctr); } // 800DA0C0
L_800DA0C4:;
  c->r[3]=c->r[31]|c->r[31]; // 800DA0C4
  c->lr=0x800DA0CCu; f_800DB0E0(c); // 800DA0C8
L_800DA0CC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DA0CC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DA0D0
  c->lr=c->r[0]; // 800DA0D4
  c->r[1]=c->r[1]+0x00000020u; // 800DA0D8
  return; // 800DA0DC
}

// fn_800DA0E0
void f_800DA0E0(Ctx* __restrict c) {
  trace_call(0x800DA0E0u);
  c->r[5]=0u+0x00000001u; // 800DA0E0
  f_800DA0F0(c); return; // 800DA0E4
}

// fn_800DA0F0
void f_800DA0F0(Ctx* __restrict c) {
  trace_call(0x800DA0F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA0F0
  c->r[0]=c->lr; // 800DA0F4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DA0F8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800DA0FC
  c->r[31]=c->r[3]|c->r[3]; // 800DA100
  c->r[7]=R32(c->r[3]+0x000000ACu); // 800DA104
  cmps(c,0,(int32_t)c->r[7],0); // 800DA108
  if (crb(c,2)) { goto L_800DA118; } // 800DA10C
  c->r[0]=R32(c->r[7]+0x00000000u); // 800DA110
  goto L_800DA11C; // 800DA114
L_800DA118:;
  c->r[0]=0u+0x00000000u; // 800DA118
L_800DA11C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DA11C
  if (!crb(c,2)) { goto L_800DA12C; } // 800DA120
  c->r[3]=0u+0x00000055u; // 800DA124
  goto L_800DA2EC; // 800DA128
L_800DA12C:;
  cmps(c,0,(int32_t)c->r[4],0); // 800DA12C
  if (!crb(c,2)) { goto L_800DA224; } // 800DA130
  c->r[8]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x000000A6u); // 800DA134
  cmps(c,0,(int32_t)c->r[8],0); // 800DA138
  if (!crb(c,2)) { goto L_800DA14C; } // 800DA13C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x000000A4u); // 800DA140
  cmps(c,0,(int32_t)c->r[0],0); // 800DA144
  if (crb(c,2)) { goto L_800DA224; } // 800DA148
L_800DA14C:;
  c->r[4]=R32(c->r[3]+0x00000060u); // 800DA14C
  c->r[0]=rotl(c->r[4],0)&0x00001000u; cr0(c,c->r[0]); // 800DA150
  if (crb(c,2)) { goto L_800DA224; } // 800DA154
  c->r[0]=rotl(c->r[4],0)&0x00100000u; cr0(c,c->r[0]); // 800DA158
  if (!crb(c,2)) { goto L_800DA20C; } // 800DA15C
  c->r[0]=rotl(c->r[4],0)&0x00200000u; cr0(c,c->r[0]); // 800DA160
  if (crb(c,2)) { goto L_800DA1FC; } // 800DA164
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x000000A4u); // 800DA168
  cmps(c,0,(int32_t)c->r[0],0); // 800DA16C
  if (crb(c,2)) { goto L_800DA1E8; } // 800DA170
  c->r[4]=R32(c->r[3]+0x000000ACu); // 800DA174
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x0000001Cu); // 800DA178
  cmps(c,0,(int32_t)c->r[4],0); // 800DA17C
  if (crb(c,2)) { goto L_800DA1E8; } // 800DA180
  c->r[6]=0u+0x43300000u; // 800DA184
  c->r[4]=c->r[4]^0x80000000u; // 800DA188
  W32(c->r[1]+0x00000014u,c->r[4]); // 800DA18C
  c->r[0]=c->r[0]^0x80000000u; // 800DA190
  {uint32_t ea=c->r[2]+0xFFFF9E60u; c->f[2]=RF64(ea);} // 800DA194
  c->r[4]=c->r[8]^0x80000000u; // 800DA198
  W32(c->r[1]+0x00000010u,c->r[6]); // 800DA19C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800DA1A0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800DA1A4
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 800DA1A8
  W32(c->r[1]+0x00000018u,c->r[6]); // 800DA1AC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 800DA1B0
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800DA1B4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800DA1B8
  W32(c->r[1]+0x00000008u,c->r[6]); // 800DA1BC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 800DA1C0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800DA1C4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800DA1C8
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800DA1CC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800DA1D0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[0]);} // 800DA1D4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DA1D8
  c->r[0]=c->r[8]-c->r[0]; // 800DA1DC
  W16(c->r[7]+0x0000001Cu,c->r[0]); // 800DA1E0
  goto L_800DA1EC; // 800DA1E4
L_800DA1E8:;
  W16(c->r[7]+0x0000001Cu,c->r[8]); // 800DA1E8
L_800DA1EC:;
  c->r[0]=R32(c->r[3]+0x00000060u); // 800DA1EC
  c->r[0]=rotl(c->r[0],0)&0xFFDFFFFFu; // 800DA1F0
  W32(c->r[3]+0x00000060u,c->r[0]); // 800DA1F4
  goto L_800DA200; // 800DA1F8
L_800DA1FC:;
  W16(c->r[7]+0x0000001Cu,c->r[8]); // 800DA1FC
L_800DA200:;
  c->r[0]=R32(c->r[3]+0x00000060u); // 800DA200
  c->r[0]=c->r[0]|0x00100000u; // 800DA204
  W32(c->r[3]+0x00000060u,c->r[0]); // 800DA208
L_800DA20C:;
  c->r[4]=R32(c->r[3]+0x000000ACu); // 800DA20C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x0000001Cu); // 800DA210
  cmps(c,0,(int32_t)c->r[0],0); // 800DA214
  if (crb(c,2)) { goto L_800DA224; } // 800DA218
  c->r[3]=0u+0x00000000u; // 800DA21C
  goto L_800DA2EC; // 800DA220
L_800DA224:;
  c->r[4]=R32(c->r[3]+0x000000ACu); // 800DA224
  c->r[0]=0u+0x00000000u; // 800DA228
  W16(c->r[4]+0x0000001Cu,c->r[0]); // 800DA22C
  c->r[4]=R32(c->r[3]+0x00000060u); // 800DA230
  c->r[0]=rotl(c->r[4],0)&0x00001000u; cr0(c,c->r[0]); // 800DA234
  c->r[0]=rotl(c->r[4],0)&0xFFCFFFFFu; // 800DA238
  W32(c->r[3]+0x00000060u,c->r[0]); // 800DA23C
  if (crb(c,2)) { goto L_800DA2C0; } // 800DA240
  c->r[6]=R32(c->r[3]+0x00000028u); // 800DA244
  cmps(c,0,(int32_t)c->r[6],0); // 800DA248
  if (crb(c,2)) { goto L_800DA2A8; } // 800DA24C
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x00000020u); // 800DA250
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800DA254
  W16(c->r[6]+0x00000020u,c->r[0]); // 800DA258
  c->r[4]=R32(c->r[3]+0x00000028u); // 800DA25C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000020u); // 800DA260
  cmps(c,0,(int32_t)c->r[0],0); // 800DA264
  if (!crb(c,2)) { goto L_800DA278; } // 800DA268
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 800DA26C
  c->r[0]=rotl(c->r[0],0)&0xFFFFEFFFu; // 800DA270
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 800DA274
L_800DA278:;
  c->r[12]=R32(c->r[3]+0x00000074u); // 800DA278
  cmps(c,0,(int32_t)c->r[12],0); // 800DA27C
  if (crb(c,2)) { goto L_800DA2A8; } // 800DA280
  cmps(c,0,(int32_t)c->r[5],0); // 800DA284
  if (crb(c,2)) { goto L_800DA2A8; } // 800DA288
  c->r[3]=R32(c->r[3]+0x00000018u); // 800DA28C
  c->r[4]=0u+0x00000004u; // 800DA290
  c->r[7]=R32(c->r[31]+0x00000078u); // 800DA294
  c->r[5]=0u+0x00000000u; // 800DA298
  c->r[6]=0u+0x00000000u; // 800DA29C
  c->ctr=c->r[12]; // 800DA2A0
  if (true) { c->lr=0x800DA2A8u; dispatch(c,c->ctr); } // 800DA2A4
L_800DA2A8:;
  c->r[4]=R32(c->r[31]+0x00000070u); // 800DA2A8
  cmps(c,0,(int32_t)c->r[4],0); // 800DA2AC
  if (crb(c,2)) { goto L_800DA2C0; } // 800DA2B0
  c->r[3]=R16(c->r[4]+0x0000002Cu); // 800DA2B4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800DA2B8
  W16(c->r[4]+0x0000002Cu,c->r[0]); // 800DA2BC
L_800DA2C0:;
  c->r[0]=R32(c->r[31]+0x00000060u); // 800DA2C0
  c->r[3]=R32(c->r[31]+0x000000ACu); // 800DA2C4
  c->r[0]=rotl(c->r[0],0)&0xFFFFEFFFu; // 800DA2C8
  W32(c->r[31]+0x00000060u,c->r[0]); // 800DA2CC
  c->r[3]=c->r[3]+0x00000004u; // 800DA2D0
  c->lr=0x800DA2D8u; f_800D89A0(c); // 800DA2D4
  c->r[3]=R32(c->r[31]+0x00000138u); // 800DA2D8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800DA2DC
  c->r[12]=R32(c->r[12]+0x00000030u); // 800DA2E0
  c->ctr=c->r[12]; // 800DA2E4
  if (true) { c->lr=0x800DA2ECu; dispatch(c,c->ctr); } // 800DA2E8
L_800DA2EC:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DA2EC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800DA2F0
  c->lr=c->r[0]; // 800DA2F4
  c->r[1]=c->r[1]+0x00000030u; // 800DA2F8
  return; // 800DA2FC
}

// fn_800DA300
void f_800DA300(Ctx* __restrict c) {
  trace_call(0x800DA300u);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DA300
  c->r[0]=c->lr; // 800DA304
  W32(c->r[1]+0x00000114u,c->r[0]); // 800DA308
  c->r[11]=c->r[1]+0x00000110u; // 800DA30C
  c->lr=0x800DA314u; f_800C2E40(c); // 800DA310
  c->r[0]=0u+0x00000000u; // 800DA314
  W8(c->r[1]+0x0000000Au,c->r[0]); // 800DA318
  c->r[27]=c->r[5]|c->r[5]; // 800DA31C
  c->r[25]=c->r[3]|c->r[3]; // 800DA320
  W32(c->r[4]+0x00000034u,c->r[0]); // 800DA324
  c->r[26]=c->r[4]|c->r[4]; // 800DA328
  c->r[24]=c->r[6]|c->r[6]; // 800DA32C
  c->r[5]=c->r[1]+0x0000000Au; // 800DA330
  W32(c->r[4]+0x0000001Cu,c->r[0]); // 800DA334
  c->r[3]=R32(c->r[3]+0x00000138u); // 800DA338
  c->r[12]=R32(c->r[3]+0x00000000u); // 800DA33C
  c->r[12]=R32(c->r[12]+0x00000098u); // 800DA340
  c->ctr=c->r[12]; // 800DA344
  if (true) { c->lr=0x800DA34Cu; dispatch(c,c->ctr); } // 800DA348
  cmps(c,0,(int32_t)c->r[3],0); // 800DA34C
  if (crb(c,2)) { goto L_800DA358; } // 800DA350
  goto L_800DAD18; // 800DA354
L_800DA358:;
  c->r[0]=R32(c->r[25]+0x00000060u); // 800DA358
  c->r[3]=c->r[26]|c->r[26]; // 800DA35C
  c->r[5]=R8(c->r[1]+0x0000000Au); // 800DA360
  c->r[4]=0u+0x00000020u; // 800DA364
  c->r[0]=rotl(c->r[0],17)&0x00000001u; // 800DA368
  c->r[5]=c->r[5]|c->r[0]; // 800DA36C
  c->r[0]=addc(c,c->r[5],0xFFFFFFFFu,0); // 800DA370
  c->r[0]=addc(c,~c->r[0],c->r[5],c->xer_ca); // 800DA374
  W8(c->r[1]+0x0000000Au,c->r[0]); // 800DA378
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; cr0(c,c->r[0]); // 800DA37C
  if (crb(c,2)) { goto L_800DA388; } // 800DA380
  c->r[4]=0u+0x00000040u; // 800DA384
L_800DA388:;
  c->r[0]=R32(c->r[25]+0x00000040u); // 800DA388
  c->r[5]=c->r[24]|c->r[24]; // 800DA38C
  c->r[4]=c->r[4]|c->r[0]; // 800DA390
  c->lr=0x800DA398u; f_8010DCF0(c); // 800DA394
  cmps(c,0,(int32_t)c->r[3],0); // 800DA398
  if (crb(c,2)) { goto L_800DA3C0; } // 800DA39C
  cmps(c,0,(int32_t)c->r[3],56); // 800DA3A0
  if (!crb(c,2)) { goto L_800DAD18; } // 800DA3A4
  c->r[0]=R32(c->r[25]+0x00000060u); // 800DA3A8
  c->r[3]=0u+0x00000038u; // 800DA3AC
  c->r[0]=c->r[0]|0x00000020u; // 800DA3B0
  W32(c->r[25]+0x00000060u,c->r[0]); // 800DA3B4
  goto L_800DAD18; // 800DA3B8
  goto L_800DAD18; // 800DA3BC
L_800DA3C0:;
  c->r[29]=R32(c->r[26]+0x00000028u); // 800DA3C0
  cmps(c,0,(int32_t)c->r[29],0); // 800DA3C4
  if (crb(c,2)) { goto L_800DA5A0; } // 800DA3C8
  W32(c->r[1]+0x00000018u,c->r[29]); // 800DA3CC
  c->r[3]=c->r[29]|c->r[29]; // 800DA3D0
  c->r[12]=R32(c->r[29]+0x00000010u); // 800DA3D4
  c->r[12]=R32(c->r[12]+0x00000010u); // 800DA3D8
  c->ctr=c->r[12]; // 800DA3DC
  if (true) { c->lr=0x800DA3E4u; dispatch(c,c->ctr); } // 800DA3E0
  cmps(c,0,(int32_t)c->r[3],0); // 800DA3E4
  if (crb(c,2)) { goto L_800DA44C; } // 800DA3E8
  c->r[24]=R32(c->r[1]+0x00000018u); // 800DA3EC
  c->r[0]=R32(c->r[24]+0x0000003Cu); // 800DA3F0
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 800DA3F4
  if (!crb(c,2)) { goto L_800DA410; } // 800DA3F8
  c->r[3]=R32(c->r[24]+0x00000040u); // 800DA3FC
  c->r[4]=R32(c->r[24]+0x00000098u); // 800DA400
  c->r[0]=R32(c->r[3]+0x000000C4u); // 800DA404
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800DA408
  if (crb(c,2)) { goto L_800DA44C; } // 800DA40C
L_800DA410:;
  c->r[3]=R32(c->r[24]+0x00000094u); // 800DA410
  cmps(c,0,(int32_t)c->r[3],0); // 800DA414
  if (crb(c,2)) { goto L_800DA448; } // 800DA418
  c->r[12]=R32(c->r[3]+0x00000010u); // 800DA41C
  c->r[5]=c->r[1]+0x00000018u; // 800DA420
  c->r[4]=R32(c->r[24]+0x00000098u); // 800DA424
  c->r[12]=R32(c->r[12]+0x00000058u); // 800DA428
  c->ctr=c->r[12]; // 800DA42C
  if (true) { c->lr=0x800DA434u; dispatch(c,c->ctr); } // 800DA430
  c->r[0]=R32(c->r[24]+0x00000114u); // 800DA434
  cmps(c,0,(int32_t)c->r[0],5); // 800DA438
  if (!crb(c,2)) { goto L_800DA44C; } // 800DA43C
  c->r[3]=0u+0x00000038u; // 800DA440
  goto L_800DAD18; // 800DA444
L_800DA448:;
  W32(c->r[1]+0x00000018u,c->r[24]); // 800DA448
L_800DA44C:;
  c->r[3]=c->r[29]|c->r[29]; // 800DA44C
  c->r[4]=c->r[1]+0x00000030u; // 800DA450
  c->r[5]=c->r[1]+0x0000002Cu; // 800DA454
  c->r[6]=c->r[1]+0x00000028u; // 800DA458
  c->r[7]=0u+0x00000000u; // 800DA45C
  c->lr=0x800DA464u; f_80194FC0(c); // 800DA460
  cmps(c,0,(int32_t)c->r[3],0); // 800DA464
  if (crb(c,2)) { goto L_800DA470; } // 800DA468
  goto L_800DAD18; // 800DA46C
L_800DA470:;
  c->r[3]=R32(c->r[25]+0x00000138u); // 800DA470
  c->r[4]=c->r[26]|c->r[26]; // 800DA474
  c->r[5]=c->r[1]+0x00000020u; // 800DA478
  c->r[12]=R32(c->r[3]+0x00000000u); // 800DA47C
  c->r[12]=R32(c->r[12]+0x0000009Cu); // 800DA480
  c->ctr=c->r[12]; // 800DA484
  if (true) { c->lr=0x800DA48Cu; dispatch(c,c->ctr); } // 800DA488
  cmps(c,0,(int32_t)c->r[3],0); // 800DA48C
  if (crb(c,2)) { goto L_800DA498; } // 800DA490
  goto L_800DAD18; // 800DA494
L_800DA498:;
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DA498
  c->r[3]=c->r[29]|c->r[29]; // 800DA49C
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800DA4A0
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DA4A4
  c->r[4]=R32(c->r[1]+0x00000020u); // 800DA4A8
  c->lr=0x800DA4B0u; f_80194F20(c); // 800DA4AC
  cmps(c,0,(int32_t)c->r[3],0); // 800DA4B0
  if (crb(c,2)) { goto L_800DA4BC; } // 800DA4B4
  goto L_800DAD18; // 800DA4B8
L_800DA4BC:;
  c->r[0]=R32(c->r[25]+0x00000040u); // 800DA4BC
  c->r[3]=c->r[29]|c->r[29]; // 800DA4C0
  c->r[4]=c->r[0]&0x04300000u; cr0(c,c->r[4]); // 800DA4C4
  c->lr=0x800DA4CCu; f_80195500(c); // 800DA4C8
  cmps(c,0,(int32_t)c->r[3],0); // 800DA4CC
  if (crb(c,2)) { goto L_800DA4D8; } // 800DA4D0
  goto L_800DAD18; // 800DA4D4
L_800DA4D8:;
  c->r[3]=R32(c->r[25]+0x00000138u); // 800DA4D8
  c->r[4]=c->r[26]|c->r[26]; // 800DA4DC
  c->r[5]=c->r[1]+0x00000024u; // 800DA4E0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800DA4E4
  c->r[12]=R32(c->r[12]+0x000000D0u); // 800DA4E8
  c->ctr=c->r[12]; // 800DA4EC
  if (true) { c->lr=0x800DA4F4u; dispatch(c,c->ctr); } // 800DA4F0
  cmps(c,0,(int32_t)c->r[3],0); // 800DA4F4
  if (crb(c,2)) { goto L_800DA500; } // 800DA4F8
  goto L_800DAD18; // 800DA4FC
L_800DA500:;
  {uint32_t ea=c->r[2]+0xFFFF9E84u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DA500
  c->r[0]=0u+0xFFFFFFFFu; // 800DA504
  {uint32_t ea=c->r[1]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DA508
  c->r[3]=c->r[29]|c->r[29]; // 800DA50C
  {uint32_t ea=c->r[2]+0xFFFF9E50u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA510
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800DA514
  W32(c->r[26]+0x00000090u,c->r[0]); // 800DA518
  c->r[4]=R32(c->r[26]+0x00000014u); // 800DA51C
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800DA520
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800DA524
  {uint32_t ea=c->r[1]+0x000000E8u; WF64(ea,c->f[0]);} // 800DA528
  c->r[0]=R32(c->r[1]+0x000000ECu); // 800DA52C
  W32(c->r[26]+0x0000008Cu,c->r[0]); // 800DA530
  c->r[4]=R32(c->r[4]+0x00000034u); // 800DA534
  c->lr=0x800DA53Cu; f_801955E0(c); // 800DA538
  cmps(c,0,(int32_t)c->r[3],0); // 800DA53C
  if (crb(c,2)) { goto L_800DA548; } // 800DA540
  goto L_800DAD18; // 800DA544
L_800DA548:;
  c->r[3]=R32(c->r[13]+0xFFFF9830u); // 800DA548
  c->r[5]=c->r[29]|c->r[29]; // 800DA54C
  c->r[7]=c->r[26]+0x00000034u; // 800DA550
  c->r[4]=0u+0xFFFFFFFFu; // 800DA554
  c->r[3]=R32(c->r[3]+0x00000014u); // 800DA558
  c->r[6]=0u+0x00000001u; // 800DA55C
  c->lr=0x800DA564u; f_8019ED60(c); // 800DA560
  cmps(c,0,(int32_t)c->r[3],0); // 800DA564
  if (crb(c,2)) { goto L_800DA570; } // 800DA568
  goto L_800DAD18; // 800DA56C
L_800DA570:;
  c->r[0]=R32(c->r[26]+0x00000024u); // 800DA570
  c->r[4]=c->r[26]|c->r[26]; // 800DA574
  c->r[0]=c->r[0]|0x00000008u; // 800DA578
  W32(c->r[26]+0x00000024u,c->r[0]); // 800DA57C
  c->r[3]=R32(c->r[25]+0x00000138u); // 800DA580
  c->r[12]=R32(c->r[3]+0x00000000u); // 800DA584
  c->r[12]=R32(c->r[12]+0x00000090u); // 800DA588
  c->ctr=c->r[12]; // 800DA58C
  if (true) { c->lr=0x800DA594u; dispatch(c,c->ctr); } // 800DA590
  cmps(c,0,(int32_t)c->r[3],0); // 800DA594
  if (crb(c,2)) { goto L_800DA650; } // 800DA598
  goto L_800DAD18; // 800DA59C
L_800DA5A0:;
  c->r[3]=R32(c->r[26]+0x00000030u); // 800DA5A0
  cmps(c,0,(int32_t)c->r[3],0); // 800DA5A4
  if (crb(c,2)) { goto L_800DA640; } // 800DA5A8
  c->r[4]=c->r[1]+0x00000030u; // 800DA5AC
  c->r[5]=c->r[1]+0x0000002Cu; // 800DA5B0
  c->r[6]=c->r[1]+0x00000028u; // 800DA5B4
  c->r[7]=0u+0x00000000u; // 800DA5B8
  c->lr=0x800DA5C0u; f_80131510(c); // 800DA5BC
  cmps(c,0,(int32_t)c->r[3],0); // 800DA5C0
  if (crb(c,2)) { goto L_800DA5CC; } // 800DA5C4
  goto L_800DAD18; // 800DA5C8
L_800DA5CC:;
  c->r[3]=R32(c->r[25]+0x00000138u); // 800DA5CC
  c->r[4]=c->r[26]|c->r[26]; // 800DA5D0
  c->r[5]=c->r[1]+0x00000020u; // 800DA5D4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800DA5D8
  c->r[12]=R32(c->r[12]+0x0000009Cu); // 800DA5DC
  c->ctr=c->r[12]; // 800DA5E0
  if (true) { c->lr=0x800DA5E8u; dispatch(c,c->ctr); } // 800DA5E4
  cmps(c,0,(int32_t)c->r[3],0); // 800DA5E8
  if (crb(c,2)) { goto L_800DA5F4; } // 800DA5EC
  goto L_800DAD18; // 800DA5F0
L_800DA5F4:;
  c->r[3]=R32(c->r[26]+0x00000030u); // 800DA5F4
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DA5F8
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800DA5FC
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DA600
  c->r[4]=R32(c->r[1]+0x00000020u); // 800DA604
  c->lr=0x800DA60Cu; f_80131480(c); // 800DA608
  cmps(c,0,(int32_t)c->r[3],0); // 800DA60C
  if (crb(c,2)) { goto L_800DA618; } // 800DA610
  goto L_800DAD18; // 800DA614
L_800DA618:;
  c->r[0]=0u+0xFFFFFFFFu; // 800DA618
  W32(c->r[26]+0x00000090u,c->r[0]); // 800DA61C
  c->r[5]=R32(c->r[26]+0x00000030u); // 800DA620
  c->r[7]=c->r[26]+0x00000034u; // 800DA624
  c->r[3]=R32(c->r[13]+0xFFFF9830u); // 800DA628
  c->r[4]=0u+0xFFFFFFFFu; // 800DA62C
  c->r[6]=0u+0x00000001u; // 800DA630
  c->r[3]=R32(c->r[3]+0x00000014u); // 800DA634
  c->lr=0x800DA63Cu; f_8019EDE0(c); // 800DA638
  goto L_800DA650; // 800DA63C
L_800DA640:;
  c->r[0]=0u+0xFFFFFFFFu; // 800DA640
  W32(c->r[26]+0x00000090u,c->r[0]); // 800DA644
  c->r[3]=0u+0x00000000u; // 800DA648
  goto L_800DAD18; // 800DA64C
L_800DA650:;
  cmps(c,0,(int32_t)c->r[3],0); // 800DA650
  if (crb(c,2)) { goto L_800DA65C; } // 800DA654
  goto L_800DAD18; // 800DA658
L_800DA65C:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[25]+0x00000064u); // 800DA65C
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 800DA660
  if (crb(c,2)) { goto L_800DA680; } // 800DA664
  c->r[3]=R32(c->r[26]+0x00000034u); // 800DA668
  c->r[4]=rotl(c->r[4],24)&0x0000001Fu; // 800DA66C
  c->lr=0x800DA674u; f_80115650(c); // 800DA670
  cmps(c,0,(int32_t)c->r[3],0); // 800DA674
  if (crb(c,2)) { goto L_800DA680; } // 800DA678
  goto L_800DAD18; // 800DA67C
L_800DA680:;
  c->r[3]=R32(c->r[26]+0x00000034u); // 800DA680
  c->r[4]=R32(c->r[25]+0x00000018u); // 800DA684
  c->lr=0x800DA68Cu; f_80176480(c); // 800DA688
  cmps(c,0,(int32_t)c->r[3],0); // 800DA68C
  if (crb(c,2)) { goto L_800DA698; } // 800DA690
  goto L_800DAD18; // 800DA694
L_800DA698:;
  c->r[0]=R32(c->r[25]+0x00000074u); // 800DA698
  cmps(c,0,(int32_t)c->r[0],0); // 800DA69C
  if (crb(c,2)) { goto L_800DA72C; } // 800DA6A0
  cmps(c,0,(int32_t)c->r[29],0); // 800DA6A4
  if (crb(c,2)) { goto L_800DA6F0; } // 800DA6A8
  c->r[0]=0u+0x00000000u; // 800DA6AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DA6B0
  c->r[3]=c->r[29]|c->r[29]; // 800DA6B4
  c->r[4]=c->r[1]+0x00000014u; // 800DA6B8
  c->lr=0x800DA6C0u; f_80195370(c); // 800DA6BC
  cmps(c,0,(int32_t)c->r[3],0); // 800DA6C0
  if (!crb(c,2)) { goto L_800DA6F0; } // 800DA6C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DA6C8
  cmps(c,0,(int32_t)c->r[0],0); // 800DA6CC
  if (crb(c,2)) { goto L_800DA6F0; } // 800DA6D0
  c->r[4]=0u+0x800E0000u; // 800DA6D4
  c->r[3]=R32(c->r[26]+0x00000034u); // 800DA6D8
  c->r[4]=c->r[4]+0x000003B0u; // 800DA6DC
  c->lr=0x800DA6E4u; f_80175F90(c); // 800DA6E0
  cmps(c,0,(int32_t)c->r[3],0); // 800DA6E4
  if (crb(c,2)) { goto L_800DA6F0; } // 800DA6E8
  goto L_800DAD18; // 800DA6EC
L_800DA6F0:;
  c->r[6]=R32(c->r[26]+0x0000005Cu); // 800DA6F0
  cmps(c,0,(int32_t)c->r[6],0); // 800DA6F4
  if (crb(c,2)) { goto L_800DA700; } // 800DA6F8
  goto L_800DA704; // 800DA6FC
L_800DA700:;
  c->r[6]=c->r[26]|c->r[26]; // 800DA700
L_800DA704:;
  c->r[3]=R32(c->r[6]+0x00000014u); // 800DA704
  c->r[4]=0u+0x00000001u; // 800DA708
  c->r[12]=R32(c->r[25]+0x00000074u); // 800DA70C
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 800DA710
  c->r[3]=R32(c->r[25]+0x00000018u); // 800DA714
  c->r[5]=R32(c->r[5]+0x00000010u); // 800DA718
  c->r[6]=R32(c->r[6]+0x00000040u); // 800DA71C
  c->r[7]=R32(c->r[25]+0x00000078u); // 800DA720
  c->ctr=c->r[12]; // 800DA724
  if (true) { c->lr=0x800DA72Cu; dispatch(c,c->ctr); } // 800DA728
L_800DA72C:;
  c->r[4]=0u+0x800E0000u; // 800DA72C
  c->r[3]=R32(c->r[26]+0x00000034u); // 800DA730
  c->r[4]=c->r[4]+0x000003B0u; // 800DA734
  c->lr=0x800DA73Cu; f_80175F90(c); // 800DA738
  cmps(c,0,(int32_t)c->r[3],0); // 800DA73C
  if (crb(c,2)) { goto L_800DA748; } // 800DA740
  goto L_800DAD18; // 800DA744
L_800DA748:;
  c->r[3]=R32(c->r[25]+0x00000138u); // 800DA748
  c->r[4]=c->r[26]|c->r[26]; // 800DA74C
  c->r[5]=c->r[1]+0x0000001Cu; // 800DA750
  c->r[12]=R32(c->r[3]+0x00000000u); // 800DA754
  c->r[12]=R32(c->r[12]+0x000000A0u); // 800DA758
  c->ctr=c->r[12]; // 800DA75C
  if (true) { c->lr=0x800DA764u; dispatch(c,c->ctr); } // 800DA760
  cmps(c,0,(int32_t)c->r[3],0); // 800DA764
  if (crb(c,2)) { goto L_800DA770; } // 800DA768
  goto L_800DAD18; // 800DA76C
L_800DA770:;
  c->r[3]=R32(c->r[26]+0x00000034u); // 800DA770
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 800DA774
  c->lr=0x800DA77Cu; f_80175F40(c); // 800DA778
  cmps(c,0,(int32_t)c->r[3],0); // 800DA77C
  if (crb(c,2)) { goto L_800DA790; } // 800DA780
  cmps(c,0,(int32_t)c->r[3],36); // 800DA784
  if (crb(c,2)) { goto L_800DA790; } // 800DA788
  goto L_800DAD18; // 800DA78C
L_800DA790:;
  c->r[0]=R32(c->r[25]+0x00000060u); // 800DA790
  c->r[3]=R32(c->r[26]+0x00000034u); // 800DA794
  c->r[4]=rotl(c->r[0],18)&0x00000001u; // 800DA798
  c->lr=0x800DA7A0u; f_80175D80(c); // 800DA79C
  cmps(c,0,(int32_t)c->r[3],0); // 800DA7A0
  if (crb(c,2)) { goto L_800DA7B4; } // 800DA7A4
  cmps(c,0,(int32_t)c->r[3],36); // 800DA7A8
  if (crb(c,2)) { goto L_800DA7B4; } // 800DA7AC
  goto L_800DAD18; // 800DA7B0
L_800DA7B4:;
  c->r[4]=R32(c->r[25]+0x00000040u); // 800DA7B4
  W32(c->r[1]+0x00000034u,c->r[4]); // 800DA7B8
  c->r[0]=R32(c->r[26]+0x00000024u); // 800DA7BC
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800DA7C0
  if (crb(c,2)) { goto L_800DA7D4; } // 800DA7C4
  c->r[0]=c->r[4]|0x00000001u; // 800DA7C8
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFF9u; // 800DA7CC
  W32(c->r[1]+0x00000034u,c->r[4]); // 800DA7D0
L_800DA7D4:;
  c->r[3]=R32(c->r[26]+0x00000034u); // 800DA7D4
  c->lr=0x800DA7DCu; f_801763D0(c); // 800DA7D8
  cmps(c,0,(int32_t)c->r[3],0); // 800DA7DC
  if (crb(c,2)) { goto L_800DA7F0; } // 800DA7E0
  cmps(c,0,(int32_t)c->r[3],36); // 800DA7E4
  if (crb(c,2)) { goto L_800DA7F0; } // 800DA7E8
  goto L_800DAD18; // 800DA7EC
L_800DA7F0:;
  c->r[3]=R32(c->r[26]+0x00000034u); // 800DA7F0
  c->r[4]=c->r[1]+0x00000034u; // 800DA7F4
  c->lr=0x800DA7FCu; f_80176420(c); // 800DA7F8
  cmps(c,0,(int32_t)c->r[3],0); // 800DA7FC
  if (crb(c,2)) { goto L_800DA810; } // 800DA800
  cmps(c,0,(int32_t)c->r[3],36); // 800DA804
  if (crb(c,2)) { goto L_800DA810; } // 800DA808
  goto L_800DAD18; // 800DA80C
L_800DA810:;
  c->r[3]=R32(c->r[1]+0x00000034u); // 800DA810
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 800DA814
  if (crb(c,2)) { goto L_800DA9E4; } // 800DA818
  c->r[0]=rotl(c->r[3],0)&0x04000000u; cr0(c,c->r[0]); // 800DA81C
  if (!crb(c,2)) { goto L_800DA848; } // 800DA820
  {uint32_t ea=c->r[25]+0x000000D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DA824
  {uint32_t ea=c->r[25]+0x000000D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DA828
  c->r[3]=R32(c->r[26]+0x00000034u); // 800DA82C
  c->lr=0x800DA834u; f_80176040(c); // 800DA830
  cmps(c,0,(int32_t)c->r[3],0); // 800DA834
  if (crb(c,2)) { goto L_800DA848; } // 800DA838
  cmps(c,0,(int32_t)c->r[3],36); // 800DA83C
  if (crb(c,2)) { goto L_800DA848; } // 800DA840
  goto L_800DAD18; // 800DA844
L_800DA848:;
  {uint32_t ea=c->r[25]+0x000000F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DA848
  {uint32_t ea=c->r[2]+0xFFFF9E6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA84C
  fcmp(c,0,c->f[0],c->f[1]); // 800DA850
  if (!crb(c,2)) { goto L_800DA874; } // 800DA854
  {uint32_t ea=c->r[25]+0x000000FCu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DA858
  fcmp(c,0,c->f[0],c->f[1]); // 800DA85C
  if (!crb(c,2)) { goto L_800DA874; } // 800DA860
  {uint32_t ea=c->r[25]+0x00000100u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DA864
  {uint32_t ea=c->r[2]+0xFFFF9E4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA868
  fcmp(c,0,c->f[0],c->f[1]); // 800DA86C
  if (crb(c,2)) { goto L_800DA8BC; } // 800DA870
L_800DA874:;
  {uint32_t ea=c->r[25]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DA874
  {uint32_t ea=c->r[25]+0x000000FCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800DA878
  {uint32_t ea=c->r[25]+0x000000F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DA87C
  c->r[3]=R32(c->r[26]+0x00000034u); // 800DA880
  c->lr=0x800DA888u; f_801760A0(c); // 800DA884
  cmps(c,0,(int32_t)c->r[3],0); // 800DA888
  if (crb(c,2)) { goto L_800DA89C; } // 800DA88C
  cmps(c,0,(int32_t)c->r[3],36); // 800DA890
  if (crb(c,2)) { goto L_800DA89C; } // 800DA894
  goto L_800DAD18; // 800DA898
L_800DA89C:;
  c->r[3]=R32(c->r[26]+0x00000034u); // 800DA89C
  c->r[4]=c->r[25]+0x000000C8u; // 800DA8A0
  c->lr=0x800DA8A8u; f_80176110(c); // 800DA8A4
  cmps(c,0,(int32_t)c->r[3],0); // 800DA8A8
  if (crb(c,2)) { goto L_800DA8BC; } // 800DA8AC
  cmps(c,0,(int32_t)c->r[3],36); // 800DA8B0
  if (crb(c,2)) { goto L_800DA8BC; } // 800DA8B4
  goto L_800DAD18; // 800DA8B8
L_800DA8BC:;
  {uint32_t ea=c->r[25]+0x00000104u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DA8BC
  c->r[3]=R32(c->r[26]+0x00000034u); // 800DA8C0
  c->lr=0x800DA8C8u; f_80176260(c); // 800DA8C4
  cmps(c,0,(int32_t)c->r[3],0); // 800DA8C8
  if (crb(c,2)) { goto L_800DA8DC; } // 800DA8CC
  cmps(c,0,(int32_t)c->r[3],36); // 800DA8D0
  if (crb(c,2)) { goto L_800DA8DC; } // 800DA8D4
  goto L_800DAD18; // 800DA8D8
L_800DA8DC:;
  c->r[4]=R32(c->r[26]+0x00000014u); // 800DA8DC
  c->r[3]=c->r[1]+0x00000038u; // 800DA8E0
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 800DA8E4
  c->lr=0x800DA8ECu; f_800E81B0(c); // 800DA8E8
  {uint32_t ea=c->r[1]+0x00000038u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DA8EC
  c->r[4]=c->r[1]+0x00000044u; // 800DA8F0
  {uint32_t ea=c->r[26]+0x00000068u; WF32(ea,c->f[3]);} // 800DA8F4
  c->r[5]=c->r[25]+0x000000BCu; // 800DA8F8
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800DA8FC
  {uint32_t ea=c->r[26]+0x0000006Cu; WF32(ea,c->f[2]);} // 800DA900
  {uint32_t ea=c->r[1]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DA904
  {uint32_t ea=c->r[26]+0x00000070u; WF32(ea,c->f[1]);} // 800DA908
  {uint32_t ea=c->r[25]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA90C
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 800DA910
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 800DA914
  {uint32_t ea=c->r[25]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA918
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800DA91C
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 800DA920
  {uint32_t ea=c->r[25]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA924
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800DA928
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 800DA92C
  c->r[3]=R32(c->r[26]+0x00000034u); // 800DA930
  c->lr=0x800DA938u; f_80175FE0(c); // 800DA934
  cmps(c,0,(int32_t)c->r[3],0); // 800DA938
  if (crb(c,2)) { goto L_800DA94C; } // 800DA93C
  cmps(c,0,(int32_t)c->r[3],36); // 800DA940
  if (crb(c,2)) { goto L_800DA94C; } // 800DA944
  goto L_800DAD18; // 800DA948
L_800DA94C:;
  c->r[0]=R32(c->r[25]+0x00000044u); // 800DA94C
  cmps(c,0,(int32_t)c->r[0],0); // 800DA950
  if (!crb(c,2)) { goto L_800DA968; } // 800DA954
  {uint32_t ea=c->r[25]+0x00000108u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DA958
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA95C
  fcmp(c,0,c->f[0],c->f[1]); // 800DA960
  if (!crb(c,2)) { goto L_800DA978; } // 800DA964
L_800DA968:;
  {uint32_t ea=c->r[25]+0x0000010Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DA968
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DA96C
  fcmp(c,0,c->f[0],c->f[1]); // 800DA970
  if (crb(c,2)) { goto L_800DA998; } // 800DA974
L_800DA978:;
  {uint32_t ea=c->r[25]+0x0000010Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800DA978
  c->r[3]=c->r[25]|c->r[25]; // 800DA97C
  {uint32_t ea=c->r[25]+0x00000108u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DA980
  c->r[4]=0u+0x00000001u; // 800DA984
  c->lr=0x800DA98Cu; f_800DCF60(c); // 800DA988
  cmps(c,0,(int32_t)c->r[3],0); // 800DA98C
  if (crb(c,2)) { goto L_800DA998; } // 800DA990
  goto L_800DAD18; // 800DA994
L_800DA998:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DA998
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 800DA99C
  if (crb(c,2)) { goto L_800DA9E4; } // 800DA9A0
  {uint32_t ea=c->r[25]+0x00000110u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DA9A4
  c->r[3]=R32(c->r[26]+0x00000034u); // 800DA9A8
  c->lr=0x800DA9B0u; f_801761C0(c); // 800DA9AC
  cmps(c,0,(int32_t)c->r[3],0); // 800DA9B0
  if (crb(c,2)) { goto L_800DA9C4; } // 800DA9B4
  cmps(c,0,(int32_t)c->r[3],36); // 800DA9B8
  if (crb(c,2)) { goto L_800DA9C4; } // 800DA9BC
  goto L_800DAD18; // 800DA9C0
L_800DA9C4:;
  {uint32_t ea=c->r[25]+0x00000114u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DA9C4
  c->r[3]=R32(c->r[26]+0x00000034u); // 800DA9C8
  c->lr=0x800DA9D0u; f_80176210(c); // 800DA9CC
  cmps(c,0,(int32_t)c->r[3],0); // 800DA9D0
  if (crb(c,2)) { goto L_800DA9E4; } // 800DA9D4
  cmps(c,0,(int32_t)c->r[3],36); // 800DA9D8
  if (crb(c,2)) { goto L_800DA9E4; } // 800DA9DC
  goto L_800DAD18; // 800DA9E0
L_800DA9E4:;
  {uint32_t ea=c->r[25]+0x00000090u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DA9E4
  c->lr=0x800DA9ECu; f_800E0CE0(c); // 800DA9E8
  {uint32_t ea=c->r[25]+0x0000008Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DA9EC
  c->r[30]=c->r[3]|c->r[3]; // 800DA9F0
  c->lr=0x800DA9F8u; f_800E0CE0(c); // 800DA9F4
  c->r[0]=0u+0x00000000u; // 800DA9F8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800DA9FC
  c->r[31]=c->r[3]|c->r[3]; // 800DAA00
  c->r[0]=R32(c->r[25]+0x00000060u); // 800DAA04
  c->r[0]=rotl(c->r[0],0)&0x00400000u; cr0(c,c->r[0]); // 800DAA08
  if (crb(c,2)) { goto L_800DAA28; } // 800DAA0C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[25]+0x00000064u); // 800DAA10
  c->r[0]=rotl(c->r[0],0)&0x00002000u; cr0(c,c->r[0]); // 800DAA14
  if (crb(c,2)) { goto L_800DAA28; } // 800DAA18
  c->r[3]=R32(c->r[1]+0x0000001Cu); // 800DAA1C
  c->r[4]=c->r[1]+0x00000010u; // 800DAA20
  c->lr=0x800DAA28u; f_80186F50(c); // 800DAA24
L_800DAA28:;
  c->r[0]=R32(c->r[25]+0x00000044u); // 800DAA28
  cmps(c,0,(int32_t)c->r[0],0); // 800DAA2C
  if (crb(c,2)) { goto L_800DAADC; } // 800DAA30
  c->r[28]=0u+0x00000000u; // 800DAA34
  c->r[24]=0u+0x00000000u; // 800DAA38
L_800DAA3C:;
  c->r[3]=c->r[1]+0x0000009Cu; // 800DAA3C
  c->r[4]=0u+0x00000000u; // 800DAA40
  c->r[5]=0u+0x0000004Cu; // 800DAA44
  c->lr=0x800DAA4Cu; f_80004350(c); // 800DAA48
  c->r[4]=R32(c->r[25]+0x00000044u); // 800DAA4C
  c->r[3]=c->r[4]+c->r[24]; // 800DAA50
  c->r[0]=R32(c->r[3]+0x00000008u); // 800DAA54
  c->r[0]=c->r[30]+c->r[0]; // 800DAA58
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800DAA5C
  c->r[0]=R32(c->r[4]+c->r[24]); // 800DAA60
  c->r[0]=c->r[31]+c->r[0]; // 800DAA64
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 800DAA68
  c->r[0]=R32(c->r[3]+0x00000044u); // 800DAA6C
  W32(c->r[1]+0x000000E0u,c->r[0]); // 800DAA70
  c->r[0]=R32(c->r[3]+0x00000048u); // 800DAA74
  cmps(c,0,(int32_t)c->r[0],0); // 800DAA78
  if (!crb(c,2)) { goto L_800DAA88; } // 800DAA7C
  c->r[0]=R32(c->r[1]+0x00000010u); // 800DAA80
  W32(c->r[3]+0x00000048u,c->r[0]); // 800DAA84
L_800DAA88:;
  c->r[0]=R32(c->r[25]+0x00000044u); // 800DAA88
  c->r[4]=c->r[1]+0x0000009Cu; // 800DAA8C
  c->r[3]=c->r[0]+c->r[24]; // 800DAA90
  c->r[0]=R32(c->r[3]+0x00000048u); // 800DAA94
  W32(c->r[1]+0x000000E4u,c->r[0]); // 800DAA98
  c->r[3]=R32(c->r[26]+0x00000034u); // 800DAA9C
  c->lr=0x800DAAA4u; f_80175EA0(c); // 800DAAA0
  cmps(c,0,(int32_t)c->r[3],0); // 800DAAA4
  if (crb(c,2)) { goto L_800DAAC8; } // 800DAAA8
  cmps(c,0,(int32_t)c->r[3],36); // 800DAAAC
  if (crb(c,2)) { goto L_800DAAC8; } // 800DAAB0
  cmps(c,0,(int32_t)c->r[3],80); // 800DAAB4
  if (crb(c,2)) { goto L_800DAAC8; } // 800DAAB8
  cmps(c,0,(int32_t)c->r[3],71); // 800DAABC
  if (crb(c,2)) { goto L_800DAAC8; } // 800DAAC0
  goto L_800DAD18; // 800DAAC4
L_800DAAC8:;
  c->r[28]=c->r[28]+0x00000001u; // 800DAAC8
  c->r[24]=c->r[24]+0x0000004Cu; // 800DAACC
  cmps(c,0,(int32_t)c->r[28],4); // 800DAAD0
  if (crb(c,0)) { IRQCHK(c); goto L_800DAA3C; } // 800DAAD4
  goto L_800DAB34; // 800DAAD8
L_800DAADC:;
  c->r[3]=c->r[1]+0x00000050u; // 800DAADC
  c->r[4]=0u+0x00000000u; // 800DAAE0
  c->r[5]=0u+0x0000004Cu; // 800DAAE4
  c->lr=0x800DAAECu; f_80004350(c); // 800DAAE8
  c->r[0]=R32(c->r[1]+0x00000010u); // 800DAAEC
  c->r[3]=0u+0x000000F0u; // 800DAAF0
  W32(c->r[1]+0x00000058u,c->r[30]); // 800DAAF4
  c->r[4]=c->r[1]+0x00000050u; // 800DAAF8
  W32(c->r[1]+0x00000050u,c->r[31]); // 800DAAFC
  W32(c->r[1]+0x00000094u,c->r[3]); // 800DAB00
  W32(c->r[1]+0x00000098u,c->r[0]); // 800DAB04
  c->r[3]=R32(c->r[26]+0x00000034u); // 800DAB08
  c->lr=0x800DAB10u; f_80175EA0(c); // 800DAB0C
  cmps(c,0,(int32_t)c->r[3],0); // 800DAB10
  if (crb(c,2)) { goto L_800DAB34; } // 800DAB14
  cmps(c,0,(int32_t)c->r[3],36); // 800DAB18
  if (crb(c,2)) { goto L_800DAB34; } // 800DAB1C
  cmps(c,0,(int32_t)c->r[3],80); // 800DAB20
  if (crb(c,2)) { goto L_800DAB34; } // 800DAB24
  cmps(c,0,(int32_t)c->r[3],71); // 800DAB28
  if (crb(c,2)) { goto L_800DAB34; } // 800DAB2C
  goto L_800DAD18; // 800DAB30
L_800DAB34:;
  c->r[24]=R32(c->r[26]+0x0000005Cu); // 800DAB34
  cmps(c,0,(int32_t)c->r[24],0); // 800DAB38
  if (crb(c,2)) { goto L_800DAB44; } // 800DAB3C
  goto L_800DAB48; // 800DAB40
L_800DAB44:;
  c->r[24]=c->r[26]|c->r[26]; // 800DAB44
L_800DAB48:;
  c->r[3]=R32(c->r[26]+0x00000014u); // 800DAB48
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800DAB4C
  c->lr=0x800DAB54u; f_800E7E60(c); // 800DAB50
  {uint32_t ea=c->r[26]+0x00000060u; WF32(ea,c->f[1]);} // 800DAB54
  c->r[3]=R32(c->r[26]+0x00000014u); // 800DAB58
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800DAB5C
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800DAB60
  c->lr=0x800DAB68u; f_800E77E0(c); // 800DAB64
  cmps(c,0,(int32_t)c->r[3],0); // 800DAB68
  if (crb(c,2)) { goto L_800DAB7C; } // 800DAB6C
  c->r[0]=R32(c->r[24]+0x00000024u); // 800DAB70
  c->r[0]=rotl(c->r[0],0)&0x00000400u; cr0(c,c->r[0]); // 800DAB74
  if (crb(c,2)) { goto L_800DABBC; } // 800DAB78
L_800DAB7C:;
  c->r[3]=R32(c->r[26]+0x00000014u); // 800DAB7C
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800DAB80
  c->lr=0x800DAB88u; f_800E7FE0(c); // 800DAB84
  {uint32_t ea=c->r[26]+0x00000064u; WF32(ea,c->f[1]);} // 800DAB88
  c->r[3]=R32(c->r[26]+0x00000014u); // 800DAB8C
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800DAB90
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800DAB94
  c->lr=0x800DAB9Cu; f_800E77E0(c); // 800DAB98
  cmps(c,0,(int32_t)c->r[3],0); // 800DAB9C
  if (crb(c,2)) { goto L_800DABAC; } // 800DABA0
  {uint32_t ea=c->r[26]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DABA4
  {uint32_t ea=c->r[24]+0x00000064u; WF32(ea,c->f[0]);} // 800DABA8
L_800DABAC:;
  c->r[0]=R32(c->r[24]+0x00000024u); // 800DABAC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFBFFu; // 800DABB0
  W32(c->r[24]+0x00000024u,c->r[0]); // 800DABB4
  goto L_800DABDC; // 800DABB8
L_800DABBC:;
  c->r[3]=R32(c->r[26]+0x00000014u); // 800DABBC
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800DABC0
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 800DABC4
  c->lr=0x800DABCCu; f_800E77E0(c); // 800DABC8
  cmps(c,0,(int32_t)c->r[3],0); // 800DABCC
  if (crb(c,2)) { goto L_800DABDC; } // 800DABD0
  {uint32_t ea=c->r[24]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DABD4
  {uint32_t ea=c->r[26]+0x00000064u; WF32(ea,c->f[0]);} // 800DABD8
L_800DABDC:;
  c->r[3]=R32(c->r[25]+0x00000138u); // 800DABDC
  c->r[4]=c->r[26]|c->r[26]; // 800DABE0
  c->r[5]=c->r[1]+0x00000009u; // 800DABE4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800DABE8
  c->r[12]=R32(c->r[12]+0x000000A4u); // 800DABEC
  c->ctr=c->r[12]; // 800DABF0
  if (true) { c->lr=0x800DABF8u; dispatch(c,c->ctr); } // 800DABF4
  cmps(c,0,(int32_t)c->r[3],0); // 800DABF8
  if (crb(c,2)) { goto L_800DAC04; } // 800DABFC
  goto L_800DAD18; // 800DAC00
L_800DAC04:;
  c->r[3]=R32(c->r[25]+0x00000138u); // 800DAC04
  c->r[4]=c->r[26]|c->r[26]; // 800DAC08
  c->r[5]=c->r[1]+0x00000008u; // 800DAC0C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800DAC10
  c->r[12]=R32(c->r[12]+0x000000A8u); // 800DAC14
  c->ctr=c->r[12]; // 800DAC18
  if (true) { c->lr=0x800DAC20u; dispatch(c,c->ctr); } // 800DAC1C
  cmps(c,0,(int32_t)c->r[3],0); // 800DAC20
  if (crb(c,2)) { goto L_800DAC2C; } // 800DAC24
  goto L_800DAD18; // 800DAC28
L_800DAC2C:;
  c->r[0]=R8(c->r[1]+0x00000009u); // 800DAC2C
  cmps(c,0,(int32_t)c->r[0],0); // 800DAC30
  if (!crb(c,2)) { goto L_800DAC80; } // 800DAC34
  c->r[0]=R8(c->r[1]+0x00000008u); // 800DAC38
  cmps(c,0,(int32_t)c->r[0],0); // 800DAC3C
  if (!crb(c,2)) { goto L_800DAC80; } // 800DAC40
  c->r[3]=R32(c->r[26]+0x00000034u); // 800DAC44
  {uint32_t ea=c->r[25]+0x00000118u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DAC48
  {uint32_t ea=c->r[25]+0x0000011Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800DAC4C
  {uint32_t ea=c->r[25]+0x00000120u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DAC50
  {uint32_t ea=c->r[25]+0x00000124u; c->f[4]=c->ps1[4]=RF32(ea);} // 800DAC54
  {uint32_t ea=c->r[25]+0x00000128u; c->f[5]=c->ps1[5]=RF32(ea);} // 800DAC58
  {uint32_t ea=c->r[25]+0x0000012Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 800DAC5C
  {uint32_t ea=c->r[25]+0x00000130u; c->f[7]=c->ps1[7]=RF32(ea);} // 800DAC60
  {uint32_t ea=c->r[25]+0x00000134u; c->f[8]=c->ps1[8]=RF32(ea);} // 800DAC64
  c->lr=0x800DAC6Cu; f_80175C90(c); // 800DAC68
  cmps(c,0,(int32_t)c->r[3],0); // 800DAC6C
  if (crb(c,2)) { goto L_800DAC80; } // 800DAC70
  cmps(c,0,(int32_t)c->r[3],36); // 800DAC74
  if (crb(c,2)) { goto L_800DAC80; } // 800DAC78
  goto L_800DAD18; // 800DAC7C
L_800DAC80:;
  cmps(c,0,(int32_t)c->r[29],0); // 800DAC80
  if (crb(c,2)) { goto L_800DAD08; } // 800DAC84
  c->r[4]=R32(c->r[26]+0x0000008Cu); // 800DAC88
  cmps(c,0,(int32_t)c->r[4],0); // 800DAC8C
  if (crb(c,2)) { goto L_800DAD08; } // 800DAC90
  c->r[0]=rotl(c->r[27],1)&0xFFFFFFFEu; // 800DAC94
  c->r[3]=c->r[29]|c->r[29]; // 800DAC98
  c->r[0]=c->r[4]+c->r[0]; // 800DAC9C
  W32(c->r[26]+0x0000008Cu,c->r[0]); // 800DACA0
  c->r[4]=c->r[1]+0x0000000Cu; // 800DACA4
  c->r[5]=0u+0x00000001u; // 800DACA8
  c->lr=0x800DACB0u; f_80195160(c); // 800DACAC
  cmps(c,0,(int32_t)c->r[3],0); // 800DACB0
  if (crb(c,2)) { goto L_800DACBC; } // 800DACB4
  goto L_800DAD18; // 800DACB8
L_800DACBC:;
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800DACBC
  c->r[3]=R32(c->r[26]+0x0000008Cu); // 800DACC0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 800DACC4
  if (crb(c,0)) { goto L_800DACDC; } // 800DACC8
  c->r[0]=divwu(c->r[3],c->r[4]); // 800DACCC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 800DACD0
  c->r[0]=c->r[3]-c->r[0]; // 800DACD4
  W32(c->r[26]+0x0000008Cu,c->r[0]); // 800DACD8
L_800DACDC:;
  c->r[3]=R32(c->r[26]+0x00000034u); // 800DACDC
  c->r[5]=0u+0x00000001u; // 800DACE0
  c->r[4]=R32(c->r[26]+0x0000008Cu); // 800DACE4
  c->lr=0x800DACECu; f_80175DD0(c); // 800DACE8
  cmps(c,0,(int32_t)c->r[3],0); // 800DACEC
  if (crb(c,2)) { goto L_800DAD00; } // 800DACF0
  cmps(c,0,(int32_t)c->r[3],36); // 800DACF4
  if (crb(c,2)) { goto L_800DAD00; } // 800DACF8
  goto L_800DAD18; // 800DACFC
L_800DAD00:;
  c->r[0]=0u+0x00000000u; // 800DAD00
  W32(c->r[26]+0x0000008Cu,c->r[0]); // 800DAD04
L_800DAD08:;
  c->r[0]=R32(c->r[26]+0x00000024u); // 800DAD08
  c->r[3]=0u+0x00000000u; // 800DAD0C
  c->r[0]=c->r[0]|0x00000080u; // 800DAD10
  W32(c->r[26]+0x00000024u,c->r[0]); // 800DAD14
L_800DAD18:;
  c->r[11]=c->r[1]+0x00000110u; // 800DAD18
  c->lr=0x800DAD20u; f_800C2E8C(c); // 800DAD1C
  c->r[0]=R32(c->r[1]+0x00000114u); // 800DAD20
  c->lr=c->r[0]; // 800DAD24
  c->r[1]=c->r[1]+0x00000110u; // 800DAD28
  return; // 800DAD2C
}

// fn_800DAD30
void f_800DAD30(Ctx* __restrict c) {
  trace_call(0x800DAD30u);
  c->r[3]=0u+0x00000000u; // 800DAD30
  return; // 800DAD34
}

// fn_800DAD40
void f_800DAD40(Ctx* __restrict c) {
  trace_call(0x800DAD40u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DAD40
  c->r[0]=c->lr; // 800DAD44
  W32(c->r[1]+0x00000054u,c->r[0]); // 800DAD48
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 800DAD4C
  c->r[31]=c->r[3]|c->r[3]; // 800DAD50
  c->r[0]=R32(c->r[3]+0x00000060u); // 800DAD54
  c->r[0]=rotl(c->r[0],0)&0x00002000u; cr0(c,c->r[0]); // 800DAD58
  if (crb(c,2)) { goto L_800DAD68; } // 800DAD5C
  c->r[3]=0u+0x00000000u; // 800DAD60
  goto L_800DAE68; // 800DAD64
L_800DAD68:;
  c->r[4]=R32(c->r[13]+0xFFFF8E48u); // 800DAD68
  {uint32_t ea=c->r[3]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DAD6C
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DAD70
  c->r[6]=R32(c->r[4]+0x00000010u); // 800DAD74
  c->r[0]=R32(c->r[4]+0x00000014u); // 800DAD78
  fcmp(c,0,c->f[2],c->f[0]); // 800DAD7C
  W32(c->r[1]+0x00000038u,c->r[6]); // 800DAD80
  W32(c->r[1]+0x0000003Cu,c->r[0]); // 800DAD84
  if (crb(c,2)) { goto L_800DAE14; } // 800DAD88
  {uint32_t ea=c->r[2]+0xFFFF9E80u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DAD8C
  {uint32_t ea=c->r[2]+0xFFFF9E78u; c->f[1]=RF64(ea);} // 800DAD90
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800DAD94
  c->lr=0x800DAD9Cu; f_800D29C4(c); // 800DAD98
  c->f[1]=c->ps1[1]=S(c->f[1]); // 800DAD9C
  {uint32_t ea=c->r[2]+0xFFFF9E88u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DADA0
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 800DADA4
  c->lr=0x800DADACu; f_800C3504(c); // 800DADA8
  c->r[9]=R32(c->r[31]+0x00000054u); // 800DADAC
  c->r[0]=0u+0x00000000u; // 800DADB0
  c->r[10]=R32(c->r[31]+0x00000050u); // 800DADB4
  c->r[5]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 800DADB8
  c->r[7]=R32(c->r[1]+0x0000003Cu); // 800DADBC
  c->r[6]=R32(c->r[1]+0x00000038u); // 800DADC0
  c->r[0]=addc(c,~c->r[9],c->r[7],1); // 800DADC4
  c->r[7]=R32(c->r[31]+0x0000005Cu); // 800DADC8
  c->r[6]=addc(c,~c->r[10],c->r[6],c->xer_ca); // 800DADCC
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[6]); // 800DADD0
  c->r[8]=R32(c->r[31]+0x00000058u); // 800DADD4
  W32(c->r[1]+0x00000018u,c->r[10]); // 800DADD8
  W32(c->r[1]+0x0000001Cu,c->r[9]); // 800DADDC
  c->r[0]=addc(c,c->r[7],c->r[0],0); // 800DADE0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DADE4
  c->r[4]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[6])>>32); // 800DADE8
  W32(c->r[31]+0x0000005Cu,c->r[0]); // 800DADEC
  W32(c->r[1]+0x00000020u,c->r[8]); // 800DADF0
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[6]); // 800DADF4
  W32(c->r[1]+0x00000024u,c->r[7]); // 800DADF8
  c->r[0]=c->r[4]+c->r[3]; // 800DADFC
  c->r[0]=c->r[0]+c->r[5]; // 800DAE00
  c->r[0]=addc(c,c->r[8],c->r[0],c->xer_ca); // 800DAE04
  W32(c->r[1]+0x00000030u,c->r[0]); // 800DAE08
  W32(c->r[31]+0x00000058u,c->r[0]); // 800DAE0C
  goto L_800DAE54; // 800DAE10
L_800DAE14:;
  c->r[7]=R32(c->r[3]+0x00000054u); // 800DAE14
  c->r[8]=R32(c->r[3]+0x00000050u); // 800DAE18
  c->r[4]=addc(c,~c->r[7],c->r[0],1); // 800DAE1C
  c->r[5]=R32(c->r[3]+0x0000005Cu); // 800DAE20
  c->r[0]=addc(c,~c->r[8],c->r[6],c->xer_ca); // 800DAE24
  c->r[6]=R32(c->r[3]+0x00000058u); // 800DAE28
  c->r[4]=addc(c,c->r[5],c->r[4],0); // 800DAE2C
  W32(c->r[1]+0x00000008u,c->r[8]); // 800DAE30
  c->r[0]=addc(c,c->r[6],c->r[0],c->xer_ca); // 800DAE34
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 800DAE38
  W32(c->r[1]+0x00000010u,c->r[6]); // 800DAE3C
  W32(c->r[1]+0x00000014u,c->r[5]); // 800DAE40
  W32(c->r[1]+0x0000002Cu,c->r[4]); // 800DAE44
  W32(c->r[1]+0x00000028u,c->r[0]); // 800DAE48
  W32(c->r[3]+0x00000058u,c->r[0]); // 800DAE4C
  W32(c->r[3]+0x0000005Cu,c->r[4]); // 800DAE50
L_800DAE54:;
  c->r[4]=R32(c->r[1]+0x00000038u); // 800DAE54
  c->r[3]=0u+0x00000000u; // 800DAE58
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 800DAE5C
  W32(c->r[31]+0x00000050u,c->r[4]); // 800DAE60
  W32(c->r[31]+0x00000054u,c->r[0]); // 800DAE64
L_800DAE68:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 800DAE68
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 800DAE6C
  c->lr=c->r[0]; // 800DAE70
  c->r[1]=c->r[1]+0x00000050u; // 800DAE74
  return; // 800DAE78
}

// fn_800DAE80
void f_800DAE80(Ctx* __restrict c) {
  trace_call(0x800DAE80u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DAE80
  c->r[0]=c->lr; // 800DAE84
  W32(c->r[1]+0x00000044u,c->r[0]); // 800DAE88
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 800DAE8C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 800DAE90
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 800DAE94
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 800DAE98
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DAE9C
  c->r[31]=c->r[3]|c->r[3]; // 800DAEA0
  c->r[0]=R32(c->r[3]+0x00000060u); // 800DAEA4
  c->r[0]=rotl(c->r[0],0)&0x00002000u; cr0(c,c->r[0]); // 800DAEA8
  if (!crb(c,2)) { goto L_800DAF70; } // 800DAEAC
  c->r[5]=R32(c->r[3]+0x000000ACu); // 800DAEB0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[5]+0x0000001Cu); // 800DAEB4
  cmps(c,0,(int32_t)c->r[0],0); // 800DAEB8
  if (crb(c,2)) { goto L_800DAF70; } // 800DAEBC
  c->r[5]=R32(c->r[3]+0x000000ACu); // 800DAEC0
  c->r[0]=c->r[0]-c->r[4]; // 800DAEC4
  W16(c->r[5]+0x0000001Cu,c->r[0]); // 800DAEC8
  c->r[4]=R32(c->r[3]+0x000000ACu); // 800DAECC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x0000001Cu); // 800DAED0
  cmps(c,0,(int32_t)c->r[0],0); // 800DAED4
  if (crb(c,1)) { goto L_800DAF70; } // 800DAED8
  c->r[4]=R32(c->r[3]+0x000000ACu); // 800DAEDC
  c->r[0]=0u+0x00000000u; // 800DAEE0
  W16(c->r[4]+0x0000001Cu,c->r[0]); // 800DAEE4
  c->r[4]=R32(c->r[3]+0x000000ACu); // 800DAEE8
  cmps(c,0,(int32_t)c->r[4],0); // 800DAEEC
  if (crb(c,2)) { goto L_800DAEF8; } // 800DAEF0
  c->r[0]=R32(c->r[4]+0x00000018u); // 800DAEF4
L_800DAEF8:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DAEF8
  if (crb(c,2)) { goto L_800DAF44; } // 800DAEFC
  c->r[0]=R32(c->r[3]+0x00000060u); // 800DAF00
  c->r[0]=rotl(c->r[0],0)&0x00100000u; cr0(c,c->r[0]); // 800DAF04
  if (crb(c,2)) { goto L_800DAF14; } // 800DAF08
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DAF0C
  goto L_800DAF20; // 800DAF10
L_800DAF14:;
  {uint32_t ea=c->r[3]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DAF14
  {uint32_t ea=c->r[3]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DAF18
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 800DAF1C
L_800DAF20:;
  cmps(c,0,(int32_t)c->r[4],0); // 800DAF20
  if (crb(c,2)) { goto L_800DAF30; } // 800DAF24
  c->r[3]=R32(c->r[4]+0x00000018u); // 800DAF28
  goto L_800DAF34; // 800DAF2C
L_800DAF30:;
  c->r[3]=0u+0x00000000u; // 800DAF30
L_800DAF34:;
  c->lr=0x800DAF38u; f_80186C30(c); // 800DAF34
  cmps(c,0,(int32_t)c->r[3],0); // 800DAF38
  if (crb(c,2)) { goto L_800DAF44; } // 800DAF3C
  goto L_800DB014; // 800DAF40
L_800DAF44:;
  c->r[0]=R32(c->r[31]+0x00000060u); // 800DAF44
  c->r[0]=rotl(c->r[0],0)&0x00100000u; cr0(c,c->r[0]); // 800DAF48
  if (crb(c,2)) { goto L_800DAF70; } // 800DAF4C
  c->r[12]=R32(c->r[31]+0x00000010u); // 800DAF50
  c->r[3]=c->r[31]|c->r[31]; // 800DAF54
  c->r[4]=0u+0x00000001u; // 800DAF58
  c->r[12]=R32(c->r[12]+0x00000014u); // 800DAF5C
  c->ctr=c->r[12]; // 800DAF60
  if (true) { c->lr=0x800DAF68u; dispatch(c,c->ctr); } // 800DAF64
  c->r[3]=0u+0x00000000u; // 800DAF68
  goto L_800DB014; // 800DAF6C
L_800DAF70:;
  c->r[3]=R32(c->r[31]+0x000000ACu); // 800DAF70
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000001Cu); // 800DAF74
  cmps(c,0,(int32_t)c->r[0],0); // 800DAF78
  if (!crb(c,1)) { goto L_800DB010; } // 800DAF7C
  cmps(c,0,(int32_t)c->r[3],0); // 800DAF80
  if (crb(c,2)) { goto L_800DAF90; } // 800DAF84
  c->r[0]=R32(c->r[3]+0x00000018u); // 800DAF88
  goto L_800DAF94; // 800DAF8C
L_800DAF90:;
  c->r[0]=0u+0x00000000u; // 800DAF90
L_800DAF94:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DAF94
  if (crb(c,2)) { goto L_800DB010; } // 800DAF98
  cmps(c,0,(int32_t)c->r[3],0); // 800DAF9C
  if (crb(c,2)) { goto L_800DAFAC; } // 800DAFA0
  c->r[3]=R32(c->r[3]+0x00000018u); // 800DAFA4
  goto L_800DAFB0; // 800DAFA8
L_800DAFAC:;
  c->r[3]=0u+0x00000000u; // 800DAFAC
L_800DAFB0:;
  c->r[4]=c->r[1]+0x00000008u; // 800DAFB0
  c->lr=0x800DAFB8u; f_80186C80(c); // 800DAFB4
  cmps(c,0,(int32_t)c->r[3],0); // 800DAFB8
  if (crb(c,2)) { goto L_800DAFC4; } // 800DAFBC
  goto L_800DB014; // 800DAFC0
L_800DAFC4:;
  {uint32_t ea=c->r[31]+0x00000030u; c->f[31]=c->ps1[31]=RF32(ea);} // 800DAFC4
  c->r[3]=c->r[31]|c->r[31]; // 800DAFC8
  {uint32_t ea=c->r[31]+0x00000034u; c->f[30]=c->ps1[30]=RF32(ea);} // 800DAFCC
  c->lr=0x800DAFD4u; f_800DD8D0(c); // 800DAFD0
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800DAFD4
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DAFD8
  c->f[1]=c->ps1[1]=S(c->f[30]*c->f[1]); // 800DAFDC
  fcmp(c,0,c->f[1],c->f[0]); // 800DAFE0
  if (crb(c,2)) { goto L_800DB010; } // 800DAFE4
  c->r[3]=R32(c->r[31]+0x000000ACu); // 800DAFE8
  cmps(c,0,(int32_t)c->r[3],0); // 800DAFEC
  if (crb(c,2)) { goto L_800DAFFC; } // 800DAFF0
  c->r[3]=R32(c->r[3]+0x00000018u); // 800DAFF4
  goto L_800DB000; // 800DAFF8
L_800DAFFC:;
  c->r[3]=0u+0x00000000u; // 800DAFFC
L_800DB000:;
  c->lr=0x800DB004u; f_80186C30(c); // 800DB000
  cmps(c,0,(int32_t)c->r[3],0); // 800DB004
  if (crb(c,2)) { goto L_800DB010; } // 800DB008
  goto L_800DB014; // 800DB00C
L_800DB010:;
  c->r[3]=0u+0x00000000u; // 800DB010
L_800DB014:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800DB014
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 800DB018
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 800DB01C
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 800DB020
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 800DB024
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DB028
  c->lr=c->r[0]; // 800DB02C
  c->r[1]=c->r[1]+0x00000040u; // 800DB030
  return; // 800DB034
}

// fn_800DB040
void f_800DB040(Ctx* __restrict c) {
  trace_call(0x800DB040u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB040
  c->r[0]=c->lr; // 800DB044
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DB048
  c->r[11]=c->r[1]+0x00000020u; // 800DB04C
  c->lr=0x800DB054u; f_800C2E50(c); // 800DB050
  c->r[0]=R32(c->r[3]+0x000000A8u); // 800DB054
  c->r[28]=c->r[3]|c->r[3]; // 800DB058
  c->r[29]=c->r[4]|c->r[4]; // 800DB05C
  cmps(c,0,(int32_t)c->r[0],0); // 800DB060
  if (crb(c,2)) { goto L_800DB0B0; } // 800DB064
  c->r[30]=0u+0x00000000u; // 800DB068
  c->r[31]=0u+0x00000000u; // 800DB06C
  goto L_800DB0A0; // 800DB070
L_800DB074:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 800DB074
  c->r[3]=R32(c->r[3]+c->r[31]); // 800DB078
  cmps(c,0,(int32_t)c->r[3],0); // 800DB07C
  if (crb(c,2)) { goto L_800DB098; } // 800DB080
  c->r[4]=c->r[29]|c->r[29]; // 800DB084
  c->lr=0x800DB08Cu; f_800DB040(c); // 800DB088
  cmps(c,0,(int32_t)c->r[3],0); // 800DB08C
  if (crb(c,2)) { goto L_800DB098; } // 800DB090
  goto L_800DB0C8; // 800DB094
L_800DB098:;
  c->r[30]=c->r[30]+0x00000001u; // 800DB098
  c->r[31]=c->r[31]+0x00000004u; // 800DB09C
L_800DB0A0:;
  c->r[3]=R32(c->r[28]+0x000000A8u); // 800DB0A0
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DB0A4
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 800DB0A8
  if (crb(c,0)) { IRQCHK(c); goto L_800DB074; } // 800DB0AC
L_800DB0B0:;
  c->r[3]=R32(c->r[28]+0x00000138u); // 800DB0B0
  c->r[4]=c->r[29]|c->r[29]; // 800DB0B4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800DB0B8
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 800DB0BC
  c->ctr=c->r[12]; // 800DB0C0
  if (true) { c->lr=0x800DB0C8u; dispatch(c,c->ctr); } // 800DB0C4
L_800DB0C8:;
  c->r[11]=c->r[1]+0x00000020u; // 800DB0C8
  c->lr=0x800DB0D0u; f_800C2E9C(c); // 800DB0CC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DB0D0
  c->lr=c->r[0]; // 800DB0D4
  c->r[1]=c->r[1]+0x00000020u; // 800DB0D8
  return; // 800DB0DC
}

// fn_800DB0E0
void f_800DB0E0(Ctx* __restrict c) {
  trace_call(0x800DB0E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB0E0
  c->r[0]=c->lr; // 800DB0E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DB0E8
  c->r[11]=c->r[1]+0x00000020u; // 800DB0EC
  c->lr=0x800DB0F4u; f_800C2E54(c); // 800DB0F0
  c->r[4]=R32(c->r[3]+0x00000060u); // 800DB0F4
  c->r[31]=c->r[3]|c->r[3]; // 800DB0F8
  c->r[0]=rotl(c->r[4],0)&0x00001000u; cr0(c,c->r[0]); // 800DB0FC
  c->r[29]=rotl(c->r[4],0)&0x00000010u; // 800DB100
  c->r[0]=rotl(c->r[4],0)&0xFFFFFFDFu; // 800DB104
  W32(c->r[3]+0x00000060u,c->r[0]); // 800DB108
  if (!crb(c,2)) { goto L_800DB118; } // 800DB10C
  c->r[3]=0u+0x00000000u; // 800DB110
  goto L_800DB208; // 800DB114
L_800DB118:;
  c->r[3]=c->r[1]+0x0000000Cu; // 800DB118
  c->lr=0x800DB120u; f_80115D90(c); // 800DB11C
  cmps(c,0,(int32_t)c->r[3],0); // 800DB120
  if (crb(c,2)) { goto L_800DB12C; } // 800DB124
  goto L_800DB208; // 800DB128
L_800DB12C:;
  c->r[3]=R32(c->r[31]+0x000000ACu); // 800DB12C
  c->r[0]=R32(c->r[3]+0x00000014u); // 800DB130
  cmps(c,0,(int32_t)c->r[0],0); // 800DB134
  if (!crb(c,2)) { goto L_800DB148; } // 800DB138
  c->r[3]=R32(c->r[31]+0x000000ACu); // 800DB13C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800DB140
  W32(c->r[3]+0x00000014u,c->r[0]); // 800DB144
L_800DB148:;
  c->r[3]=R32(c->r[31]+0x000000ACu); // 800DB148
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 800DB14C
  c->r[0]=R32(c->r[3]+0x00000014u); // 800DB150
  c->r[30]=c->r[4]-c->r[0]; cr0(c,c->r[30]); // 800DB154
  if (!crb(c,0)) { goto L_800DB160; } // 800DB158
  c->r[30]=0u+0x00000000u; // 800DB15C
L_800DB160:;
  c->r[3]=R32(c->r[31]+0x000000ACu); // 800DB160
  W32(c->r[3]+0x00000014u,c->r[4]); // 800DB164
  c->r[0]=R32(c->r[31]+0x00000060u); // 800DB168
  c->r[0]=rotl(c->r[0],0)&0x00020000u; cr0(c,c->r[0]); // 800DB16C
  if (crb(c,2)) { goto L_800DB1C0; } // 800DB170
  c->r[0]=0u+0x00000000u; // 800DB174
  W8(c->r[1]+0x00000008u,c->r[0]); // 800DB178
  c->r[3]=c->r[31]|c->r[31]; // 800DB17C
  c->r[4]=c->r[1]+0x00000008u; // 800DB180
  c->lr=0x800DB188u; f_800D9CE0(c); // 800DB184
  cmps(c,0,(int32_t)c->r[3],0); // 800DB188
  if (crb(c,2)) { goto L_800DB194; } // 800DB18C
  goto L_800DB208; // 800DB190
L_800DB194:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 800DB194
  cmps(c,0,(int32_t)c->r[0],0); // 800DB198
  if (crb(c,2)) { goto L_800DB1C0; } // 800DB19C
  c->r[3]=R32(c->r[31]+0x00000138u); // 800DB1A0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800DB1A4
  c->r[12]=R32(c->r[12]+0x000000B0u); // 800DB1A8
  c->ctr=c->r[12]; // 800DB1AC
  if (true) { c->lr=0x800DB1B4u; dispatch(c,c->ctr); } // 800DB1B0
  cmps(c,0,(int32_t)c->r[3],0); // 800DB1B4
  if (crb(c,2)) { goto L_800DB1C0; } // 800DB1B8
  goto L_800DB208; // 800DB1BC
L_800DB1C0:;
  c->r[3]=c->r[31]|c->r[31]; // 800DB1C0
  c->r[4]=c->r[30]|c->r[30]; // 800DB1C4
  c->lr=0x800DB1CCu; f_800DAE80(c); // 800DB1C8
  cmps(c,0,(int32_t)c->r[3],0); // 800DB1CC
  if (crb(c,2)) { goto L_800DB1D8; } // 800DB1D0
  goto L_800DB208; // 800DB1D4
L_800DB1D8:;
  c->r[3]=c->r[31]|c->r[31]; // 800DB1D8
  c->lr=0x800DB1E0u; f_800DAD40(c); // 800DB1DC
  cmps(c,0,(int32_t)c->r[3],0); // 800DB1E0
  if (crb(c,2)) { goto L_800DB1EC; } // 800DB1E4
  goto L_800DB208; // 800DB1E8
L_800DB1EC:;
  c->r[3]=R32(c->r[31]+0x00000138u); // 800DB1EC
  c->r[4]=c->r[30]|c->r[30]; // 800DB1F0
  c->r[5]=c->r[29]|c->r[29]; // 800DB1F4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800DB1F8
  c->r[12]=R32(c->r[12]+0x00000020u); // 800DB1FC
  c->ctr=c->r[12]; // 800DB200
  if (true) { c->lr=0x800DB208u; dispatch(c,c->ctr); } // 800DB204
L_800DB208:;
  c->r[11]=c->r[1]+0x00000020u; // 800DB208
  c->lr=0x800DB210u; f_800C2EA0(c); // 800DB20C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DB210
  c->lr=c->r[0]; // 800DB214
  c->r[1]=c->r[1]+0x00000020u; // 800DB218
  return; // 800DB21C
}

// fn_800DB220
void f_800DB220(Ctx* __restrict c) {
  trace_call(0x800DB220u);
  cmps(c,0,(int32_t)c->r[5],0); // 800DB220
  if (crb(c,2)) { goto L_800DB230; } // 800DB224
  cmps(c,0,(int32_t)c->r[4],0); // 800DB228
  if (!crb(c,2)) { goto L_800DB238; } // 800DB22C
L_800DB230:;
  c->r[3]=0u+0x00000025u; // 800DB230
  return; // 800DB234
L_800DB238:;
  c->r[0]=0u+0x00000000u; // 800DB238
  W32(c->r[5]+0x00000000u,c->r[0]); // 800DB23C
  c->r[3]=R32(c->r[3]+0x00000138u); // 800DB240
  c->r[12]=R32(c->r[3]+0x00000000u); // 800DB244
  c->r[12]=R32(c->r[12]+0x00000054u); // 800DB248
  c->ctr=c->r[12]; // 800DB24C
  if (true) { dispatch(c,c->ctr); return; } // 800DB250
}

// fn_800DB254
void f_800DB254(Ctx* __restrict c) {
  trace_call(0x800DB254u);
  return; // 800DB254
}

// fn_800DB260
void f_800DB260(Ctx* __restrict c) {
  trace_call(0x800DB260u);
  cmps(c,0,(int32_t)c->r[5],0); // 800DB260
  if (!crb(c,2)) { goto L_800DB270; } // 800DB264
  c->r[3]=0u+0x00000025u; // 800DB268
  return; // 800DB26C
L_800DB270:;
  c->r[0]=0u+0x00000000u; // 800DB270
  W32(c->r[5]+0x00000000u,c->r[0]); // 800DB274
  c->r[3]=R32(c->r[3]+0x00000138u); // 800DB278
  c->r[12]=R32(c->r[3]+0x00000000u); // 800DB27C
  c->r[12]=R32(c->r[12]+0x00000058u); // 800DB280
  c->ctr=c->r[12]; // 800DB284
  if (true) { dispatch(c,c->ctr); return; } // 800DB288
}

// fn_800DB28C
void f_800DB28C(Ctx* __restrict c) {
  trace_call(0x800DB28Cu);
  return; // 800DB28C
}

// fn_800DB290
void f_800DB290(Ctx* __restrict c) {
  trace_call(0x800DB290u);
  cmps(c,0,(int32_t)c->r[4],0); // 800DB290
  if (crb(c,2)) { goto L_800DB2AC; } // 800DB294
  c->r[3]=R32(c->r[3]+0x00000138u); // 800DB298
  c->r[12]=R32(c->r[3]+0x00000000u); // 800DB29C
  c->r[12]=R32(c->r[12]+0x0000005Cu); // 800DB2A0
  c->ctr=c->r[12]; // 800DB2A4
  if (true) { dispatch(c,c->ctr); return; } // 800DB2A8
L_800DB2AC:;
  c->r[3]=0u+0x00000025u; // 800DB2AC
  return; // 800DB2B0
}

// fn_800DB2C0
void f_800DB2C0(Ctx* __restrict c) {
  trace_call(0x800DB2C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB2C0
  c->r[0]=c->lr; // 800DB2C4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800DB2C8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 800DB2CC
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 800DB2D0
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 800DB2D4
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 800DB2D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DB2DC
  c->r[31]=c->r[3]|c->r[3]; // 800DB2E0
  c->r[4]=R32(c->r[3]+0x000000ACu); // 800DB2E4
  cmps(c,0,(int32_t)c->r[4],0); // 800DB2E8
  if (crb(c,2)) { goto L_800DB2F8; } // 800DB2EC
  c->r[0]=R32(c->r[4]+0x00000000u); // 800DB2F0
  goto L_800DB2FC; // 800DB2F4
L_800DB2F8:;
  c->r[0]=0u+0x00000000u; // 800DB2F8
L_800DB2FC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DB2FC
  if (crb(c,2)) { goto L_800DB31C; } // 800DB300
  cmps(c,0,(int32_t)c->r[4],0); // 800DB304
  if (crb(c,2)) { goto L_800DB314; } // 800DB308
  c->r[4]=R32(c->r[4]+0x00000000u); // 800DB30C
  goto L_800DB320; // 800DB310
L_800DB314:;
  c->r[4]=0u+0x00000000u; // 800DB314
  goto L_800DB320; // 800DB318
L_800DB31C:;
  c->r[4]=c->r[31]|c->r[31]; // 800DB31C
L_800DB320:;
  c->r[5]=R32(c->r[4]+0x00000070u); // 800DB320
  cmps(c,0,(int32_t)c->r[5],0); // 800DB324
  if (crb(c,2)) { goto L_800DB358; } // 800DB328
  c->r[4]=R32(c->r[3]+0x000000ACu); // 800DB32C
  c->r[3]=R32(c->r[5]+0x00000040u); // 800DB330
  cmps(c,0,(int32_t)c->r[4],0); // 800DB334
  if (crb(c,2)) { goto L_800DB344; } // 800DB338
  c->r[4]=R32(c->r[4]+0x00000018u); // 800DB33C
  goto L_800DB348; // 800DB340
L_800DB344:;
  c->r[4]=0u+0x00000000u; // 800DB344
L_800DB348:;
  c->lr=0x800DB34Cu; f_80186F00(c); // 800DB348
  cmps(c,0,(int32_t)c->r[3],0); // 800DB34C
  if (crb(c,2)) { goto L_800DB38C; } // 800DB350
  goto L_800DB460; // 800DB354
L_800DB358:;
  c->r[4]=R32(c->r[13]+0xFFFF9830u); // 800DB358
  c->r[5]=R32(c->r[3]+0x000000ACu); // 800DB35C
  c->r[3]=R32(c->r[4]+0x00000090u); // 800DB360
  cmps(c,0,(int32_t)c->r[5],0); // 800DB364
  c->r[3]=R32(c->r[3]+0x00000040u); // 800DB368
  if (crb(c,2)) { goto L_800DB378; } // 800DB36C
  c->r[4]=R32(c->r[5]+0x00000018u); // 800DB370
  goto L_800DB37C; // 800DB374
L_800DB378:;
  c->r[4]=0u+0x00000000u; // 800DB378
L_800DB37C:;
  c->lr=0x800DB380u; f_80186F00(c); // 800DB37C
  cmps(c,0,(int32_t)c->r[3],0); // 800DB380
  if (crb(c,2)) { goto L_800DB38C; } // 800DB384
  goto L_800DB460; // 800DB388
L_800DB38C:;
  {uint32_t ea=c->r[31]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DB38C
  {uint32_t ea=c->r[31]+0x00000030u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DB390
  {uint32_t ea=c->r[31]+0x00000084u; c->f[31]=c->ps1[31]=RF32(ea);} // 800DB394
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DB398
  c->f[30]=c->ps1[30]=S(c->f[2]*c->f[1]); // 800DB39C
  fcmp(c,0,c->f[0],c->f[31]); // 800DB3A0
  if (crb(c,2)) { goto L_800DB3E4; } // 800DB3A4
  c->lr=0x800DB3ACu; f_800C8D44(c); // 800DB3A8
  c->r[3]=c->r[3]^0x80000000u; // 800DB3AC
  c->r[0]=0u+0x43300000u; // 800DB3B0
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800DB3B4
  {uint32_t ea=c->r[2]+0xFFFF9E60u; c->f[3]=RF64(ea);} // 800DB3B8
  W32(c->r[1]+0x00000008u,c->r[0]); // 800DB3BC
  {uint32_t ea=c->r[2]+0xFFFF9E4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DB3C0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 800DB3C4
  {uint32_t ea=c->r[2]+0xFFFF9E70u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DB3C8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 800DB3CC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800DB3D0
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 800DB3D4
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800DB3D8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800DB3DC
  c->f[30]=c->ps1[30]=S(c->f[30]*c->f[0]); // 800DB3E0
L_800DB3E4:;
  c->r[3]=R32(c->r[31]+0x000000ACu); // 800DB3E4
  cmps(c,0,(int32_t)c->r[3],0); // 800DB3E8
  if (crb(c,2)) { goto L_800DB3F8; } // 800DB3EC
  c->r[3]=R32(c->r[3]+0x00000018u); // 800DB3F0
  goto L_800DB3FC; // 800DB3F4
L_800DB3F8:;
  c->r[3]=0u+0x00000000u; // 800DB3F8
L_800DB3FC:;
  c->f[1]=c->f[30]; // 800DB3FC
  c->lr=0x800DB404u; f_80186C30(c); // 800DB400
  cmps(c,0,(int32_t)c->r[3],0); // 800DB404
  if (crb(c,2)) { goto L_800DB410; } // 800DB408
  goto L_800DB460; // 800DB40C
L_800DB410:;
  {uint32_t ea=c->r[31]+0x00000038u; c->f[31]=c->ps1[31]=RF32(ea);} // 800DB410
  c->r[3]=c->r[31]|c->r[31]; // 800DB414
  c->lr=0x800DB41Cu; f_800DE000(c); // 800DB418
  c->f[2]=c->ps1[2]=S(c->f[31]+c->f[1]); // 800DB41C
  {uint32_t ea=c->r[2]+0xFFFF9E80u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DB420
  {uint32_t ea=c->r[2]+0xFFFF9E78u; c->f[1]=RF64(ea);} // 800DB424
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800DB428
  c->lr=0x800DB430u; f_800D29C4(c); // 800DB42C
  c->r[3]=R32(c->r[31]+0x000000ACu); // 800DB430
  c->f[1]=c->ps1[1]=S(c->f[1]); // 800DB434
  cmps(c,0,(int32_t)c->r[3],0); // 800DB438
  if (crb(c,2)) { goto L_800DB448; } // 800DB43C
  c->r[3]=R32(c->r[3]+0x00000018u); // 800DB440
  goto L_800DB44C; // 800DB444
L_800DB448:;
  c->r[3]=0u+0x00000000u; // 800DB448
L_800DB44C:;
  c->lr=0x800DB450u; f_80186CD0(c); // 800DB44C
  cmps(c,0,(int32_t)c->r[3],0); // 800DB450
  if (crb(c,2)) { goto L_800DB45C; } // 800DB454
  goto L_800DB460; // 800DB458
L_800DB45C:;
  c->r[3]=0u+0x00000000u; // 800DB45C
L_800DB460:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 800DB460
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 800DB464
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 800DB468
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 800DB46C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 800DB470
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DB474
  c->lr=c->r[0]; // 800DB478
  c->r[1]=c->r[1]+0x00000040u; // 800DB47C
  return; // 800DB480
}

// fn_800DB490
void f_800DB490(Ctx* __restrict c) {
  trace_call(0x800DB490u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB490
  c->r[0]=c->lr; // 800DB494
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DB498
  c->r[11]=c->r[1]+0x00000020u; // 800DB49C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800DB4A0
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800DB4A4
  c->lr=0x800DB4ACu; f_800C2E4C(c); // 800DB4A8
  c->f[31]=c->f[1]; // 800DB4AC
  cmps(c,0,(int32_t)c->r[5],1); // 800DB4B0
  c->r[29]=c->r[3]|c->r[3]; // 800DB4B4
  if (crb(c,2)) { goto L_800DB4D0; } // 800DB4B8
  cmps(c,0,(int32_t)c->r[5],2); // 800DB4BC
  if (crb(c,2)) { goto L_800DB4DC; } // 800DB4C0
  cmps(c,0,(int32_t)c->r[5],3); // 800DB4C4
  if (crb(c,2)) { goto L_800DB4E8; } // 800DB4C8
  goto L_800DB4F0; // 800DB4CC
L_800DB4D0:;
  {uint32_t ea=c->r[2]+0xFFFF9E8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DB4D0
  c->f[31]=c->ps1[31]=S(c->f[1]*c->f[0]); // 800DB4D4
  goto L_800DB4F0; // 800DB4D8
L_800DB4DC:;
  {uint32_t ea=c->r[2]+0xFFFF9E90u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DB4DC
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[0]); // 800DB4E0
  goto L_800DB4F0; // 800DB4E4
L_800DB4E8:;
  {uint32_t ea=c->r[2]+0xFFFF9E94u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DB4E8
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[0]); // 800DB4EC
L_800DB4F0:;
  cmps(c,0,(int32_t)c->r[4],0); // 800DB4F0
  if (crb(c,2)) { goto L_800DB620; } // 800DB4F4
  c->r[3]=R32(c->r[3]+0x000000ACu); // 800DB4F8
  cmps(c,0,(int32_t)c->r[3],0); // 800DB4FC
  if (crb(c,2)) { goto L_800DB50C; } // 800DB500
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DB504
  goto L_800DB510; // 800DB508
L_800DB50C:;
  c->r[0]=0u+0x00000000u; // 800DB50C
L_800DB510:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DB510
  if (crb(c,2)) { goto L_800DB52C; } // 800DB514
  cmps(c,0,(int32_t)c->r[3],0); // 800DB518
  if (crb(c,2)) { goto L_800DB528; } // 800DB51C
  c->r[29]=R32(c->r[3]+0x00000000u); // 800DB520
  goto L_800DB52C; // 800DB524
L_800DB528:;
  c->r[29]=0u+0x00000000u; // 800DB528
L_800DB52C:;
  {uint32_t ea=c->r[29]+0x00000080u; WF32(ea,c->f[31]);} // 800DB52C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000064u); // 800DB530
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 800DB534
  if (crb(c,2)) { goto L_800DB5C4; } // 800DB538
  c->r[3]=R32(c->r[29]+0x00000028u); // 800DB53C
  c->r[27]=0u+0x00000000u; // 800DB540
  c->r[31]=0u+0x00000000u; // 800DB544
  c->r[3]=R32(c->r[3]+0x00000030u); // 800DB548
  c->r[3]=R32(c->r[3]+0x00000038u); // 800DB54C
  c->r[28]=R32(c->r[3]+0x00000008u); // 800DB550
  c->r[30]=R32(c->r[3]+0x00000010u); // 800DB554
  goto L_800DB5B8; // 800DB558
L_800DB55C:;
  c->r[3]=R32(c->r[30]+c->r[31]); // 800DB55C
  cmps(c,0,(int32_t)c->r[3],0); // 800DB560
  if (crb(c,2)) { goto L_800DB5B0; } // 800DB564
  c->r[4]=R32(c->r[3]+0x000000ACu); // 800DB568
  cmps(c,0,(int32_t)c->r[4],0); // 800DB56C
  if (crb(c,2)) { goto L_800DB57C; } // 800DB570
  c->r[0]=R32(c->r[4]+0x00000000u); // 800DB574
  goto L_800DB580; // 800DB578
L_800DB57C:;
  c->r[0]=0u+0x00000000u; // 800DB57C
L_800DB580:;
  cmpu(c,0,c->r[0],c->r[29]); // 800DB580
  if (!crb(c,2)) { goto L_800DB5B0; } // 800DB584
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000064u); // 800DB588
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800DB58C
  if (crb(c,2)) { goto L_800DB5B0; } // 800DB590
  c->f[1]=c->f[31]; // 800DB594
  c->r[4]=0u+0x00000000u; // 800DB598
  c->r[5]=0u+0x00000000u; // 800DB59C
  c->lr=0x800DB5A4u; f_800DB490(c); // 800DB5A0
  cmps(c,0,(int32_t)c->r[3],0); // 800DB5A4
  if (crb(c,2)) { goto L_800DB5B0; } // 800DB5A8
  goto L_800DB628; // 800DB5AC
L_800DB5B0:;
  c->r[27]=c->r[27]+0x00000001u; // 800DB5B0
  c->r[31]=c->r[31]+0x00000004u; // 800DB5B4
L_800DB5B8:;
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[28]); // 800DB5B8
  if (crb(c,0)) { IRQCHK(c); goto L_800DB55C; } // 800DB5BC
  goto L_800DB624; // 800DB5C0
L_800DB5C4:;
  c->r[27]=0u+0x00000000u; // 800DB5C4
  c->r[31]=0u+0x00000000u; // 800DB5C8
  goto L_800DB60C; // 800DB5CC
L_800DB5D0:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 800DB5D0
  cmps(c,0,(int32_t)c->r[3],0); // 800DB5D4
  if (crb(c,2)) { goto L_800DB604; } // 800DB5D8
  c->r[3]=R32(c->r[3]+c->r[31]); // 800DB5DC
  cmps(c,0,(int32_t)c->r[3],0); // 800DB5E0
  if (crb(c,2)) { goto L_800DB604; } // 800DB5E4
  c->f[1]=c->f[31]; // 800DB5E8
  c->r[4]=0u+0x00000000u; // 800DB5EC
  c->r[5]=0u+0x00000000u; // 800DB5F0
  c->lr=0x800DB5F8u; f_800DB490(c); // 800DB5F4
  cmps(c,0,(int32_t)c->r[3],0); // 800DB5F8
  if (crb(c,2)) { goto L_800DB604; } // 800DB5FC
  goto L_800DB628; // 800DB600
L_800DB604:;
  c->r[27]=c->r[27]+0x00000001u; // 800DB604
  c->r[31]=c->r[31]+0x00000004u; // 800DB608
L_800DB60C:;
  c->r[3]=R32(c->r[29]+0x000000A8u); // 800DB60C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DB610
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800DB614
  if (crb(c,0)) { IRQCHK(c); goto L_800DB5D0; } // 800DB618
  goto L_800DB624; // 800DB61C
L_800DB620:;
  {uint32_t ea=c->r[3]+0x00000080u; WF32(ea,c->f[31]);} // 800DB620
L_800DB624:;
  c->r[3]=0u+0x00000000u; // 800DB624
L_800DB628:;
  c->r[11]=c->r[1]+0x00000020u; // 800DB628
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800DB62C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800DB630
  c->lr=0x800DB638u; f_800C2E98(c); // 800DB634
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DB638
  c->lr=c->r[0]; // 800DB63C
  c->r[1]=c->r[1]+0x00000030u; // 800DB640
  return; // 800DB644
}

// fn_800DB650
void f_800DB650(Ctx* __restrict c) {
  trace_call(0x800DB650u);
  cmps(c,0,(int32_t)c->r[4],0); // 800DB650
  if (crb(c,2)) { goto L_800DB774; } // 800DB654
  c->r[4]=R32(c->r[3]+0x000000ACu); // 800DB658
  cmps(c,0,(int32_t)c->r[4],0); // 800DB65C
  if (crb(c,2)) { goto L_800DB66C; } // 800DB660
  c->r[0]=R32(c->r[4]+0x00000000u); // 800DB664
  goto L_800DB670; // 800DB668
L_800DB66C:;
  c->r[0]=0u+0x00000000u; // 800DB66C
L_800DB670:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DB670
  if (crb(c,2)) { goto L_800DB68C; } // 800DB674
  cmps(c,0,(int32_t)c->r[4],0); // 800DB678
  if (crb(c,2)) { goto L_800DB688; } // 800DB67C
  c->r[3]=R32(c->r[4]+0x00000000u); // 800DB680
  goto L_800DB68C; // 800DB684
L_800DB688:;
  c->r[3]=0u+0x00000000u; // 800DB688
L_800DB68C:;
  {uint32_t ea=c->r[3]+0x00000084u; WF32(ea,c->f[1]);} // 800DB68C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000064u); // 800DB690
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 800DB694
  if (crb(c,2)) { goto L_800DB71C; } // 800DB698
  c->r[5]=R32(c->r[3]+0x00000028u); // 800DB69C
  c->r[4]=0u+0x00000000u; // 800DB6A0
  c->r[8]=0u+0x00000000u; // 800DB6A4
  c->r[5]=R32(c->r[5]+0x00000030u); // 800DB6A8
  c->r[5]=R32(c->r[5]+0x00000038u); // 800DB6AC
  c->r[0]=R32(c->r[5]+0x00000008u); // 800DB6B0
  c->r[5]=R32(c->r[5]+0x00000010u); // 800DB6B4
  c->ctr=c->r[0]; // 800DB6B8
  cmps(c,0,(int32_t)c->r[0],0); // 800DB6BC
  if (!crb(c,1)) { goto L_800DB778; } // 800DB6C0
L_800DB6C4:;
  c->r[6]=R32(c->r[5]+c->r[4]); // 800DB6C4
  cmps(c,0,(int32_t)c->r[6],0); // 800DB6C8
  if (crb(c,2)) { goto L_800DB710; } // 800DB6CC
  c->r[7]=R32(c->r[6]+0x000000ACu); // 800DB6D0
  cmps(c,0,(int32_t)c->r[7],0); // 800DB6D4
  if (crb(c,2)) { goto L_800DB6E4; } // 800DB6D8
  c->r[0]=R32(c->r[7]+0x00000000u); // 800DB6DC
  goto L_800DB6E8; // 800DB6E0
L_800DB6E4:;
  c->r[0]=0u+0x00000000u; // 800DB6E4
L_800DB6E8:;
  cmpu(c,0,c->r[0],c->r[3]); // 800DB6E8
  if (!crb(c,2)) { goto L_800DB710; } // 800DB6EC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+0x00000064u); // 800DB6F0
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800DB6F4
  if (crb(c,2)) { goto L_800DB710; } // 800DB6F8
  cmps(c,0,(int32_t)c->r[8],0); // 800DB6FC
  {uint32_t ea=c->r[6]+0x00000084u; WF32(ea,c->f[1]);} // 800DB700
  if (crb(c,2)) { goto L_800DB710; } // 800DB704
  c->r[3]=0u+0x00000000u; // 800DB708
  return; // 800DB70C
L_800DB710:;
  c->r[4]=c->r[4]+0x00000004u; // 800DB710
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800DB6C4; } // 800DB714
  goto L_800DB778; // 800DB718
L_800DB71C:;
  c->r[6]=0u+0x00000000u; // 800DB71C
  c->r[4]=0u+0x00000000u; // 800DB720
  c->r[7]=0u+0x00000000u; // 800DB724
  goto L_800DB760; // 800DB728
L_800DB72C:;
  c->r[5]=R32(c->r[5]+0x00000004u); // 800DB72C
  cmps(c,0,(int32_t)c->r[5],0); // 800DB730
  if (crb(c,2)) { goto L_800DB758; } // 800DB734
  c->r[5]=R32(c->r[5]+c->r[4]); // 800DB738
  cmps(c,0,(int32_t)c->r[5],0); // 800DB73C
  if (crb(c,2)) { goto L_800DB758; } // 800DB740
  cmps(c,0,(int32_t)c->r[7],0); // 800DB744
  {uint32_t ea=c->r[5]+0x00000084u; WF32(ea,c->f[1]);} // 800DB748
  if (crb(c,2)) { goto L_800DB758; } // 800DB74C
  c->r[3]=0u+0x00000000u; // 800DB750
  return; // 800DB754
L_800DB758:;
  c->r[6]=c->r[6]+0x00000001u; // 800DB758
  c->r[4]=c->r[4]+0x00000004u; // 800DB75C
L_800DB760:;
  c->r[5]=R32(c->r[3]+0x000000A8u); // 800DB760
  c->r[0]=R32(c->r[5]+0x00000000u); // 800DB764
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 800DB768
  if (crb(c,0)) { IRQCHK(c); goto L_800DB72C; } // 800DB76C
  goto L_800DB778; // 800DB770
L_800DB774:;
  {uint32_t ea=c->r[3]+0x00000084u; WF32(ea,c->f[1]);} // 800DB774
L_800DB778:;
  c->r[3]=0u+0x00000000u; // 800DB778
  return; // 800DB77C
}

// fn_800DB780
void f_800DB780(Ctx* __restrict c) {
  trace_call(0x800DB780u);
  cmps(c,0,(int32_t)c->r[5],0); // 800DB780
  if (crb(c,2)) { goto L_800DB8A4; } // 800DB784
  c->r[5]=R32(c->r[3]+0x000000ACu); // 800DB788
  cmps(c,0,(int32_t)c->r[5],0); // 800DB78C
  if (crb(c,2)) { goto L_800DB79C; } // 800DB790
  c->r[0]=R32(c->r[5]+0x00000000u); // 800DB794
  goto L_800DB7A0; // 800DB798
L_800DB79C:;
  c->r[0]=0u+0x00000000u; // 800DB79C
L_800DB7A0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DB7A0
  if (crb(c,2)) { goto L_800DB7BC; } // 800DB7A4
  cmps(c,0,(int32_t)c->r[5],0); // 800DB7A8
  if (crb(c,2)) { goto L_800DB7B8; } // 800DB7AC
  c->r[3]=R32(c->r[5]+0x00000000u); // 800DB7B0
  goto L_800DB7BC; // 800DB7B4
L_800DB7B8:;
  c->r[3]=0u+0x00000000u; // 800DB7B8
L_800DB7BC:;
  W32(c->r[3]+0x0000003Cu,c->r[4]); // 800DB7BC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000064u); // 800DB7C0
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 800DB7C4
  if (crb(c,2)) { goto L_800DB84C; } // 800DB7C8
  c->r[6]=R32(c->r[3]+0x00000028u); // 800DB7CC
  c->r[5]=0u+0x00000000u; // 800DB7D0
  c->r[9]=0u+0x00000000u; // 800DB7D4
  c->r[6]=R32(c->r[6]+0x00000030u); // 800DB7D8
  c->r[6]=R32(c->r[6]+0x00000038u); // 800DB7DC
  c->r[0]=R32(c->r[6]+0x00000008u); // 800DB7E0
  c->r[6]=R32(c->r[6]+0x00000010u); // 800DB7E4
  c->ctr=c->r[0]; // 800DB7E8
  cmps(c,0,(int32_t)c->r[0],0); // 800DB7EC
  if (!crb(c,1)) { goto L_800DB8A8; } // 800DB7F0
L_800DB7F4:;
  c->r[7]=R32(c->r[6]+c->r[5]); // 800DB7F4
  cmps(c,0,(int32_t)c->r[7],0); // 800DB7F8
  if (crb(c,2)) { goto L_800DB840; } // 800DB7FC
  c->r[8]=R32(c->r[7]+0x000000ACu); // 800DB800
  cmps(c,0,(int32_t)c->r[8],0); // 800DB804
  if (crb(c,2)) { goto L_800DB814; } // 800DB808
  c->r[0]=R32(c->r[8]+0x00000000u); // 800DB80C
  goto L_800DB818; // 800DB810
L_800DB814:;
  c->r[0]=0u+0x00000000u; // 800DB814
L_800DB818:;
  cmpu(c,0,c->r[0],c->r[3]); // 800DB818
  if (!crb(c,2)) { goto L_800DB840; } // 800DB81C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[7]+0x00000064u); // 800DB820
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800DB824
  if (crb(c,2)) { goto L_800DB840; } // 800DB828
  cmps(c,0,(int32_t)c->r[9],0); // 800DB82C
  W32(c->r[7]+0x0000003Cu,c->r[4]); // 800DB830
  if (crb(c,2)) { goto L_800DB840; } // 800DB834
  c->r[3]=0u+0x00000000u; // 800DB838
  return; // 800DB83C
L_800DB840:;
  c->r[5]=c->r[5]+0x00000004u; // 800DB840
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800DB7F4; } // 800DB844
  goto L_800DB8A8; // 800DB848
L_800DB84C:;
  c->r[7]=0u+0x00000000u; // 800DB84C
  c->r[5]=0u+0x00000000u; // 800DB850
  c->r[8]=0u+0x00000000u; // 800DB854
  goto L_800DB890; // 800DB858
L_800DB85C:;
  c->r[6]=R32(c->r[6]+0x00000004u); // 800DB85C
  cmps(c,0,(int32_t)c->r[6],0); // 800DB860
  if (crb(c,2)) { goto L_800DB888; } // 800DB864
  c->r[6]=R32(c->r[6]+c->r[5]); // 800DB868
  cmps(c,0,(int32_t)c->r[6],0); // 800DB86C
  if (crb(c,2)) { goto L_800DB888; } // 800DB870
  cmps(c,0,(int32_t)c->r[8],0); // 800DB874
  W32(c->r[6]+0x0000003Cu,c->r[4]); // 800DB878
  if (crb(c,2)) { goto L_800DB888; } // 800DB87C
  c->r[3]=0u+0x00000000u; // 800DB880
  return; // 800DB884
L_800DB888:;
  c->r[7]=c->r[7]+0x00000001u; // 800DB888
  c->r[5]=c->r[5]+0x00000004u; // 800DB88C
L_800DB890:;
  c->r[6]=R32(c->r[3]+0x000000A8u); // 800DB890
  c->r[0]=R32(c->r[6]+0x00000000u); // 800DB894
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 800DB898
  if (crb(c,0)) { IRQCHK(c); goto L_800DB85C; } // 800DB89C
  goto L_800DB8A8; // 800DB8A0
L_800DB8A4:;
  W32(c->r[3]+0x0000003Cu,c->r[4]); // 800DB8A4
L_800DB8A8:;
  c->r[3]=0u+0x00000000u; // 800DB8A8
  return; // 800DB8AC
}

// fn_800DB8B0
void f_800DB8B0(Ctx* __restrict c) {
  trace_call(0x800DB8B0u);
  cmps(c,0,(int32_t)c->r[5],0); // 800DB8B0
  if (crb(c,2)) { goto L_800DB9D4; } // 800DB8B4
  c->r[5]=R32(c->r[3]+0x000000ACu); // 800DB8B8
  cmps(c,0,(int32_t)c->r[5],0); // 800DB8BC
  if (crb(c,2)) { goto L_800DB8CC; } // 800DB8C0
  c->r[0]=R32(c->r[5]+0x00000000u); // 800DB8C4
  goto L_800DB8D0; // 800DB8C8
L_800DB8CC:;
  c->r[0]=0u+0x00000000u; // 800DB8CC
L_800DB8D0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DB8D0
  if (crb(c,2)) { goto L_800DB8EC; } // 800DB8D4
  cmps(c,0,(int32_t)c->r[5],0); // 800DB8D8
  if (crb(c,2)) { goto L_800DB8E8; } // 800DB8DC
  c->r[3]=R32(c->r[5]+0x00000000u); // 800DB8E0
  goto L_800DB8EC; // 800DB8E4
L_800DB8E8:;
  c->r[3]=0u+0x00000000u; // 800DB8E8
L_800DB8EC:;
  W32(c->r[3]+0x00000088u,c->r[4]); // 800DB8EC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000064u); // 800DB8F0
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 800DB8F4
  if (crb(c,2)) { goto L_800DB97C; } // 800DB8F8
  c->r[6]=R32(c->r[3]+0x00000028u); // 800DB8FC
  c->r[5]=0u+0x00000000u; // 800DB900
  c->r[9]=0u+0x00000000u; // 800DB904
  c->r[6]=R32(c->r[6]+0x00000030u); // 800DB908
  c->r[6]=R32(c->r[6]+0x00000038u); // 800DB90C
  c->r[0]=R32(c->r[6]+0x00000008u); // 800DB910
  c->r[6]=R32(c->r[6]+0x00000010u); // 800DB914
  c->ctr=c->r[0]; // 800DB918
  cmps(c,0,(int32_t)c->r[0],0); // 800DB91C
  if (!crb(c,1)) { goto L_800DB9D8; } // 800DB920
L_800DB924:;
  c->r[7]=R32(c->r[6]+c->r[5]); // 800DB924
  cmps(c,0,(int32_t)c->r[7],0); // 800DB928
  if (crb(c,2)) { goto L_800DB970; } // 800DB92C
  c->r[8]=R32(c->r[7]+0x000000ACu); // 800DB930
  cmps(c,0,(int32_t)c->r[8],0); // 800DB934
  if (crb(c,2)) { goto L_800DB944; } // 800DB938
  c->r[0]=R32(c->r[8]+0x00000000u); // 800DB93C
  goto L_800DB948; // 800DB940
L_800DB944:;
  c->r[0]=0u+0x00000000u; // 800DB944
L_800DB948:;
  cmpu(c,0,c->r[0],c->r[3]); // 800DB948
  if (!crb(c,2)) { goto L_800DB970; } // 800DB94C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[7]+0x00000064u); // 800DB950
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800DB954
  if (crb(c,2)) { goto L_800DB970; } // 800DB958
  cmps(c,0,(int32_t)c->r[9],0); // 800DB95C
  W32(c->r[7]+0x00000088u,c->r[4]); // 800DB960
  if (crb(c,2)) { goto L_800DB970; } // 800DB964
  c->r[3]=0u+0x00000000u; // 800DB968
  return; // 800DB96C
L_800DB970:;
  c->r[5]=c->r[5]+0x00000004u; // 800DB970
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800DB924; } // 800DB974
  goto L_800DB9D8; // 800DB978
L_800DB97C:;
  c->r[7]=0u+0x00000000u; // 800DB97C
  c->r[5]=0u+0x00000000u; // 800DB980
  c->r[8]=0u+0x00000000u; // 800DB984
  goto L_800DB9C0; // 800DB988
L_800DB98C:;
  c->r[6]=R32(c->r[6]+0x00000004u); // 800DB98C
  cmps(c,0,(int32_t)c->r[6],0); // 800DB990
  if (crb(c,2)) { goto L_800DB9B8; } // 800DB994
  c->r[6]=R32(c->r[6]+c->r[5]); // 800DB998
  cmps(c,0,(int32_t)c->r[6],0); // 800DB99C
  if (crb(c,2)) { goto L_800DB9B8; } // 800DB9A0
  cmps(c,0,(int32_t)c->r[8],0); // 800DB9A4
  W32(c->r[6]+0x00000088u,c->r[4]); // 800DB9A8
  if (crb(c,2)) { goto L_800DB9B8; } // 800DB9AC
  c->r[3]=0u+0x00000000u; // 800DB9B0
  return; // 800DB9B4
L_800DB9B8:;
  c->r[7]=c->r[7]+0x00000001u; // 800DB9B8
  c->r[5]=c->r[5]+0x00000004u; // 800DB9BC
L_800DB9C0:;
  c->r[6]=R32(c->r[3]+0x000000A8u); // 800DB9C0
  c->r[0]=R32(c->r[6]+0x00000000u); // 800DB9C4
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 800DB9C8
  if (crb(c,0)) { IRQCHK(c); goto L_800DB98C; } // 800DB9CC
  goto L_800DB9D8; // 800DB9D0
L_800DB9D4:;
  W32(c->r[3]+0x00000088u,c->r[4]); // 800DB9D4
L_800DB9D8:;
  c->r[3]=0u+0x00000000u; // 800DB9D8
  return; // 800DB9DC
}

// fn_800DB9E0
void f_800DB9E0(Ctx* __restrict c) {
  trace_call(0x800DB9E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DB9E0
  c->r[0]=c->lr; // 800DB9E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DB9E8
  c->r[11]=c->r[1]+0x00000020u; // 800DB9EC
  c->lr=0x800DB9F4u; f_800C2E4C(c); // 800DB9F0
  cmps(c,0,(int32_t)c->r[4],0); // 800DB9F4
  c->r[31]=c->r[3]|c->r[3]; // 800DB9F8
  c->r[30]=c->r[5]|c->r[5]; // 800DB9FC
  if (!crb(c,2)) { goto L_800DBA14; } // 800DBA00
  cmps(c,0,(int32_t)c->r[5],0); // 800DBA04
  if (!crb(c,2)) { goto L_800DBA14; } // 800DBA08
  c->r[3]=0u+0x00000000u; // 800DBA0C
  goto L_800DBB24; // 800DBA10
L_800DBA14:;
  c->r[7]=0u+0xFFCC0000u; // 800DBA14
  cmps(c,0,(int32_t)c->r[6],0); // 800DBA18
  c->r[0]=c->r[7]+0xFFFF8FFFu; // 800DBA1C
  c->r[29]=c->r[4]&c->r[0]; // 800DBA20
  if (crb(c,2)) { goto L_800DBAEC; } // 800DBA24
  c->r[3]=R32(c->r[3]+0x000000ACu); // 800DBA28
  cmps(c,0,(int32_t)c->r[3],0); // 800DBA2C
  if (crb(c,2)) { goto L_800DBA3C; } // 800DBA30
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DBA34
  goto L_800DBA40; // 800DBA38
L_800DBA3C:;
  c->r[0]=0u+0x00000000u; // 800DBA3C
L_800DBA40:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DBA40
  if (crb(c,2)) { goto L_800DBA5C; } // 800DBA44
  cmps(c,0,(int32_t)c->r[3],0); // 800DBA48
  if (crb(c,2)) { goto L_800DBA58; } // 800DBA4C
  c->r[31]=R32(c->r[3]+0x00000000u); // 800DBA50
  goto L_800DBA5C; // 800DBA54
L_800DBA58:;
  c->r[31]=0u+0x00000000u; // 800DBA58
L_800DBA5C:;
  cmps(c,0,(int32_t)c->r[29],0); // 800DBA5C
  if (crb(c,2)) { goto L_800DBA7C; } // 800DBA60
  c->r[3]=0u+0x00340000u; // 800DBA64
  c->r[4]=R32(c->r[31]+0x00000060u); // 800DBA68
  c->r[0]=c->r[3]+0x00007000u; // 800DBA6C
  c->r[0]=c->r[4]&c->r[0]; // 800DBA70
  c->r[0]=c->r[29]|c->r[0]; // 800DBA74
  W32(c->r[31]+0x00000060u,c->r[0]); // 800DBA78
L_800DBA7C:;
  cmps(c,0,(int32_t)c->r[5],0); // 800DBA7C
  if (crb(c,2)) { goto L_800DBA90; } // 800DBA80
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000064u); // 800DBA84
  c->r[0]=c->r[5]|c->r[0]; // 800DBA88
  W16(c->r[31]+0x00000064u,c->r[0]); // 800DBA8C
L_800DBA90:;
  c->r[27]=0u+0x00000000u; // 800DBA90
  c->r[28]=0u+0x00000000u; // 800DBA94
  goto L_800DBAD8; // 800DBA98
L_800DBA9C:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 800DBA9C
  cmps(c,0,(int32_t)c->r[3],0); // 800DBAA0
  if (crb(c,2)) { goto L_800DBAD0; } // 800DBAA4
  c->r[3]=R32(c->r[3]+c->r[28]); // 800DBAA8
  cmps(c,0,(int32_t)c->r[3],0); // 800DBAAC
  if (crb(c,2)) { goto L_800DBAD0; } // 800DBAB0
  c->r[4]=c->r[29]|c->r[29]; // 800DBAB4
  c->r[5]=c->r[30]|c->r[30]; // 800DBAB8
  c->r[6]=0u+0x00000000u; // 800DBABC
  c->lr=0x800DBAC4u; f_800DB9E0(c); // 800DBAC0
  cmps(c,0,(int32_t)c->r[3],0); // 800DBAC4
  if (crb(c,2)) { goto L_800DBAD0; } // 800DBAC8
  goto L_800DBB24; // 800DBACC
L_800DBAD0:;
  c->r[27]=c->r[27]+0x00000001u; // 800DBAD0
  c->r[28]=c->r[28]+0x00000004u; // 800DBAD4
L_800DBAD8:;
  c->r[3]=R32(c->r[31]+0x000000A8u); // 800DBAD8
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DBADC
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800DBAE0
  if (crb(c,0)) { IRQCHK(c); goto L_800DBA9C; } // 800DBAE4
  goto L_800DBB20; // 800DBAE8
L_800DBAEC:;
  cmps(c,0,(int32_t)c->r[29],0); // 800DBAEC
  if (crb(c,2)) { goto L_800DBB0C; } // 800DBAF0
  c->r[4]=0u+0x00340000u; // 800DBAF4
  c->r[6]=R32(c->r[3]+0x00000060u); // 800DBAF8
  c->r[0]=c->r[4]+0x00007000u; // 800DBAFC
  c->r[0]=c->r[6]&c->r[0]; // 800DBB00
  c->r[0]=c->r[29]|c->r[0]; // 800DBB04
  W32(c->r[3]+0x00000060u,c->r[0]); // 800DBB08
L_800DBB0C:;
  cmps(c,0,(int32_t)c->r[5],0); // 800DBB0C
  if (crb(c,2)) { goto L_800DBB20; } // 800DBB10
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000064u); // 800DBB14
  c->r[0]=c->r[5]|c->r[0]; // 800DBB18
  W16(c->r[3]+0x00000064u,c->r[0]); // 800DBB1C
L_800DBB20:;
  c->r[3]=0u+0x00000000u; // 800DBB20
L_800DBB24:;
  c->r[11]=c->r[1]+0x00000020u; // 800DBB24
  c->lr=0x800DBB2Cu; f_800C2E98(c); // 800DBB28
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DBB2C
  c->lr=c->r[0]; // 800DBB30
  c->r[1]=c->r[1]+0x00000020u; // 800DBB34
  return; // 800DBB38
}

// fn_800DBB40
void f_800DBB40(Ctx* __restrict c) {
  trace_call(0x800DBB40u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBB40
  c->r[0]=c->lr; // 800DBB44
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DBB48
  c->r[11]=c->r[1]+0x00000020u; // 800DBB4C
  c->lr=0x800DBB54u; f_800C2E48(c); // 800DBB50
  cmps(c,0,(int32_t)c->r[5],0); // 800DBB54
  c->r[31]=c->r[3]|c->r[3]; // 800DBB58
  c->r[30]=c->r[4]|c->r[4]; // 800DBB5C
  if (crb(c,2)) { goto L_800DBC84; } // 800DBB60
  c->r[3]=R32(c->r[3]+0x000000ACu); // 800DBB64
  cmps(c,0,(int32_t)c->r[3],0); // 800DBB68
  if (crb(c,2)) { goto L_800DBB78; } // 800DBB6C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DBB70
  goto L_800DBB7C; // 800DBB74
L_800DBB78:;
  c->r[0]=0u+0x00000000u; // 800DBB78
L_800DBB7C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DBB7C
  if (crb(c,2)) { goto L_800DBB98; } // 800DBB80
  cmps(c,0,(int32_t)c->r[3],0); // 800DBB84
  if (crb(c,2)) { goto L_800DBB94; } // 800DBB88
  c->r[31]=R32(c->r[3]+0x00000000u); // 800DBB8C
  goto L_800DBB98; // 800DBB90
L_800DBB94:;
  c->r[31]=0u+0x00000000u; // 800DBB94
L_800DBB98:;
  W32(c->r[31]+0x00000040u,c->r[4]); // 800DBB98
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000064u); // 800DBB9C
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 800DBBA0
  if (crb(c,2)) { goto L_800DBC2C; } // 800DBBA4
  c->r[3]=R32(c->r[31]+0x00000028u); // 800DBBA8
  c->r[26]=0u+0x00000000u; // 800DBBAC
  c->r[29]=0u+0x00000000u; // 800DBBB0
  c->r[3]=R32(c->r[3]+0x00000030u); // 800DBBB4
  c->r[3]=R32(c->r[3]+0x00000038u); // 800DBBB8
  c->r[27]=R32(c->r[3]+0x00000008u); // 800DBBBC
  c->r[28]=R32(c->r[3]+0x00000010u); // 800DBBC0
  goto L_800DBC20; // 800DBBC4
L_800DBBC8:;
  c->r[3]=R32(c->r[28]+c->r[29]); // 800DBBC8
  cmps(c,0,(int32_t)c->r[3],0); // 800DBBCC
  if (crb(c,2)) { goto L_800DBC18; } // 800DBBD0
  c->r[4]=R32(c->r[3]+0x000000ACu); // 800DBBD4
  cmps(c,0,(int32_t)c->r[4],0); // 800DBBD8
  if (crb(c,2)) { goto L_800DBBE8; } // 800DBBDC
  c->r[0]=R32(c->r[4]+0x00000000u); // 800DBBE0
  goto L_800DBBEC; // 800DBBE4
L_800DBBE8:;
  c->r[0]=0u+0x00000000u; // 800DBBE8
L_800DBBEC:;
  cmpu(c,0,c->r[0],c->r[31]); // 800DBBEC
  if (!crb(c,2)) { goto L_800DBC18; } // 800DBBF0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000064u); // 800DBBF4
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800DBBF8
  if (crb(c,2)) { goto L_800DBC18; } // 800DBBFC
  c->r[4]=c->r[30]|c->r[30]; // 800DBC00
  c->r[5]=0u+0x00000000u; // 800DBC04
  c->lr=0x800DBC0Cu; f_800DBB40(c); // 800DBC08
  cmps(c,0,(int32_t)c->r[3],0); // 800DBC0C
  if (crb(c,2)) { goto L_800DBC18; } // 800DBC10
  goto L_800DBCAC; // 800DBC14
L_800DBC18:;
  c->r[26]=c->r[26]+0x00000001u; // 800DBC18
  c->r[29]=c->r[29]+0x00000004u; // 800DBC1C
L_800DBC20:;
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[27]); // 800DBC20
  if (crb(c,0)) { IRQCHK(c); goto L_800DBBC8; } // 800DBC24
  goto L_800DBCA8; // 800DBC28
L_800DBC2C:;
  c->r[26]=0u+0x00000000u; // 800DBC2C
  c->r[29]=0u+0x00000000u; // 800DBC30
  goto L_800DBC70; // 800DBC34
L_800DBC38:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 800DBC38
  cmps(c,0,(int32_t)c->r[3],0); // 800DBC3C
  if (crb(c,2)) { goto L_800DBC68; } // 800DBC40
  c->r[3]=R32(c->r[3]+c->r[29]); // 800DBC44
  cmps(c,0,(int32_t)c->r[3],0); // 800DBC48
  if (crb(c,2)) { goto L_800DBC68; } // 800DBC4C
  c->r[4]=c->r[30]|c->r[30]; // 800DBC50
  c->r[5]=0u+0x00000000u; // 800DBC54
  c->lr=0x800DBC5Cu; f_800DBB40(c); // 800DBC58
  cmps(c,0,(int32_t)c->r[3],0); // 800DBC5C
  if (crb(c,2)) { goto L_800DBC68; } // 800DBC60
  goto L_800DBCAC; // 800DBC64
L_800DBC68:;
  c->r[26]=c->r[26]+0x00000001u; // 800DBC68
  c->r[29]=c->r[29]+0x00000004u; // 800DBC6C
L_800DBC70:;
  c->r[3]=R32(c->r[31]+0x000000A8u); // 800DBC70
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DBC74
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 800DBC78
  if (crb(c,0)) { IRQCHK(c); goto L_800DBC38; } // 800DBC7C
  goto L_800DBCA8; // 800DBC80
L_800DBC84:;
  W32(c->r[3]+0x00000040u,c->r[4]); // 800DBC84
  c->r[3]=R32(c->r[3]+0x00000138u); // 800DBC88
  c->r[12]=R32(c->r[3]+0x00000000u); // 800DBC8C
  c->r[12]=R32(c->r[12]+0x000000B8u); // 800DBC90
  c->ctr=c->r[12]; // 800DBC94
  if (true) { c->lr=0x800DBC9Cu; dispatch(c,c->ctr); } // 800DBC98
  cmps(c,0,(int32_t)c->r[3],0); // 800DBC9C
  if (crb(c,2)) { goto L_800DBCA8; } // 800DBCA0
  goto L_800DBCAC; // 800DBCA4
L_800DBCA8:;
  c->r[3]=0u+0x00000000u; // 800DBCA8
L_800DBCAC:;
  c->r[11]=c->r[1]+0x00000020u; // 800DBCAC
  c->lr=0x800DBCB4u; f_800C2E94(c); // 800DBCB0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DBCB4
  c->lr=c->r[0]; // 800DBCB8
  c->r[1]=c->r[1]+0x00000020u; // 800DBCBC
  return; // 800DBCC0
}

// fn_800DBCD0
void f_800DBCD0(Ctx* __restrict c) {
  trace_call(0x800DBCD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBCD0
  c->r[0]=c->lr; // 800DBCD4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DBCD8
  c->r[11]=c->r[1]+0x00000030u; // 800DBCDC
  c->lr=0x800DBCE4u; f_800C2E44(c); // 800DBCE0
  cmps(c,0,(int32_t)c->r[5],0); // 800DBCE4
  c->r[31]=c->r[3]|c->r[3]; // 800DBCE8
  c->r[30]=c->r[4]|c->r[4]; // 800DBCEC
  if (crb(c,2)) { goto L_800DBE24; } // 800DBCF0
  c->r[3]=R32(c->r[3]+0x000000ACu); // 800DBCF4
  cmps(c,0,(int32_t)c->r[3],0); // 800DBCF8
  if (crb(c,2)) { goto L_800DBD08; } // 800DBCFC
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DBD00
  goto L_800DBD0C; // 800DBD04
L_800DBD08:;
  c->r[0]=0u+0x00000000u; // 800DBD08
L_800DBD0C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DBD0C
  if (crb(c,2)) { goto L_800DBD28; } // 800DBD10
  cmps(c,0,(int32_t)c->r[3],0); // 800DBD14
  if (crb(c,2)) { goto L_800DBD24; } // 800DBD18
  c->r[31]=R32(c->r[3]+0x00000000u); // 800DBD1C
  goto L_800DBD28; // 800DBD20
L_800DBD24:;
  c->r[31]=0u+0x00000000u; // 800DBD24
L_800DBD28:;
  W32(c->r[31]+0x000000F4u,c->r[4]); // 800DBD28
  c->r[3]=c->r[31]|c->r[31]; // 800DBD2C
  c->lr=0x800DBD34u; f_800DDED0(c); // 800DBD30
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000064u); // 800DBD34
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 800DBD38
  if (crb(c,2)) { goto L_800DBDC8; } // 800DBD3C
  c->r[3]=R32(c->r[31]+0x00000028u); // 800DBD40
  c->r[26]=0u+0x00000000u; // 800DBD44
  c->r[29]=0u+0x00000000u; // 800DBD48
  c->r[25]=0u+0x00000000u; // 800DBD4C
  c->r[3]=R32(c->r[3]+0x00000030u); // 800DBD50
  c->r[3]=R32(c->r[3]+0x00000038u); // 800DBD54
  c->r[27]=R32(c->r[3]+0x00000008u); // 800DBD58
  c->r[28]=R32(c->r[3]+0x00000010u); // 800DBD5C
  goto L_800DBDBC; // 800DBD60
L_800DBD64:;
  c->r[3]=R32(c->r[28]+c->r[29]); // 800DBD64
  cmps(c,0,(int32_t)c->r[3],0); // 800DBD68
  if (crb(c,2)) { goto L_800DBDB4; } // 800DBD6C
  c->r[4]=R32(c->r[3]+0x000000ACu); // 800DBD70
  cmps(c,0,(int32_t)c->r[4],0); // 800DBD74
  if (crb(c,2)) { goto L_800DBD84; } // 800DBD78
  c->r[0]=R32(c->r[4]+0x00000000u); // 800DBD7C
  goto L_800DBD88; // 800DBD80
L_800DBD84:;
  c->r[0]=0u+0x00000000u; // 800DBD84
L_800DBD88:;
  cmpu(c,0,c->r[0],c->r[31]); // 800DBD88
  if (!crb(c,2)) { goto L_800DBDB4; } // 800DBD8C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000064u); // 800DBD90
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800DBD94
  if (crb(c,2)) { goto L_800DBDB4; } // 800DBD98
  W32(c->r[3]+0x000000F4u,c->r[30]); // 800DBD9C
  c->lr=0x800DBDA4u; f_800DDED0(c); // 800DBDA0
  cmps(c,0,(int32_t)c->r[25],0); // 800DBDA4
  if (crb(c,2)) { goto L_800DBDB4; } // 800DBDA8
  c->r[3]=0u+0x00000000u; // 800DBDAC
  goto L_800DBE30; // 800DBDB0
L_800DBDB4:;
  c->r[26]=c->r[26]+0x00000001u; // 800DBDB4
  c->r[29]=c->r[29]+0x00000004u; // 800DBDB8
L_800DBDBC:;
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[27]); // 800DBDBC
  if (crb(c,0)) { IRQCHK(c); goto L_800DBD64; } // 800DBDC0
  goto L_800DBE2C; // 800DBDC4
L_800DBDC8:;
  c->r[25]=0u+0x00000000u; // 800DBDC8
  c->r[29]=0u+0x00000000u; // 800DBDCC
  c->r[26]=0u+0x00000000u; // 800DBDD0
  goto L_800DBE10; // 800DBDD4
L_800DBDD8:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 800DBDD8
  cmps(c,0,(int32_t)c->r[3],0); // 800DBDDC
  if (crb(c,2)) { goto L_800DBE08; } // 800DBDE0
  c->r[3]=R32(c->r[3]+c->r[29]); // 800DBDE4
  cmps(c,0,(int32_t)c->r[3],0); // 800DBDE8
  if (crb(c,2)) { goto L_800DBE08; } // 800DBDEC
  W32(c->r[3]+0x000000F4u,c->r[30]); // 800DBDF0
  c->lr=0x800DBDF8u; f_800DDED0(c); // 800DBDF4
  cmps(c,0,(int32_t)c->r[26],0); // 800DBDF8
  if (crb(c,2)) { goto L_800DBE08; } // 800DBDFC
  c->r[3]=0u+0x00000000u; // 800DBE00
  goto L_800DBE30; // 800DBE04
L_800DBE08:;
  c->r[25]=c->r[25]+0x00000001u; // 800DBE08
  c->r[29]=c->r[29]+0x00000004u; // 800DBE0C
L_800DBE10:;
  c->r[3]=R32(c->r[31]+0x000000A8u); // 800DBE10
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DBE14
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 800DBE18
  if (crb(c,0)) { IRQCHK(c); goto L_800DBDD8; } // 800DBE1C
  goto L_800DBE2C; // 800DBE20
L_800DBE24:;
  W32(c->r[3]+0x000000F4u,c->r[4]); // 800DBE24
  c->lr=0x800DBE2Cu; f_800DDED0(c); // 800DBE28
L_800DBE2C:;
  c->r[3]=0u+0x00000000u; // 800DBE2C
L_800DBE30:;
  c->r[11]=c->r[1]+0x00000030u; // 800DBE30
  c->lr=0x800DBE38u; f_800C2E90(c); // 800DBE34
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DBE38
  c->lr=c->r[0]; // 800DBE3C
  c->r[1]=c->r[1]+0x00000030u; // 800DBE40
  return; // 800DBE44
}

// fn_800DBE50
void f_800DBE50(Ctx* __restrict c) {
  trace_call(0x800DBE50u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DBE50
  c->r[0]=c->lr; // 800DBE54
  W32(c->r[1]+0x00000044u,c->r[0]); // 800DBE58
  c->r[11]=c->r[1]+0x00000020u; // 800DBE5C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 800DBE60
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 800DBE64
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 800DBE68
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 800DBE6C
  c->lr=0x800DBE74u; f_800C2E4C(c); // 800DBE70
  c->f[30]=c->f[1]; // 800DBE74
  cmps(c,0,(int32_t)c->r[4],0); // 800DBE78
  c->f[31]=c->f[2]; // 800DBE7C
  c->r[31]=c->r[3]|c->r[3]; // 800DBE80
  if (crb(c,2)) { goto L_800DBFC0; } // 800DBE84
  c->r[4]=R32(c->r[3]+0x000000ACu); // 800DBE88
  cmps(c,0,(int32_t)c->r[4],0); // 800DBE8C
  if (crb(c,2)) { goto L_800DBE9C; } // 800DBE90
  c->r[0]=R32(c->r[4]+0x00000000u); // 800DBE94
  goto L_800DBEA0; // 800DBE98
L_800DBE9C:;
  c->r[0]=0u+0x00000000u; // 800DBE9C
L_800DBEA0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DBEA0
  if (crb(c,2)) { goto L_800DBEBC; } // 800DBEA4
  cmps(c,0,(int32_t)c->r[4],0); // 800DBEA8
  if (crb(c,2)) { goto L_800DBEB8; } // 800DBEAC
  c->r[31]=R32(c->r[4]+0x00000000u); // 800DBEB0
  goto L_800DBEBC; // 800DBEB4
L_800DBEB8:;
  c->r[31]=0u+0x00000000u; // 800DBEB8
L_800DBEBC:;
  c->r[0]=R32(c->r[3]+0x00000040u); // 800DBEBC
  c->r[0]=rotl(c->r[0],0)&0x04000000u; cr0(c,c->r[0]); // 800DBEC0
  if (!crb(c,2)) { goto L_800DBED0; } // 800DBEC4
  {uint32_t ea=c->r[31]+0x000000D4u; WF32(ea,c->f[1]);} // 800DBEC8
  {uint32_t ea=c->r[31]+0x000000D8u; WF32(ea,c->f[2]);} // 800DBECC
L_800DBED0:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000064u); // 800DBED0
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 800DBED4
  if (crb(c,2)) { goto L_800DBF64; } // 800DBED8
  c->r[3]=R32(c->r[31]+0x00000028u); // 800DBEDC
  c->r[27]=0u+0x00000000u; // 800DBEE0
  c->r[30]=0u+0x00000000u; // 800DBEE4
  c->r[3]=R32(c->r[3]+0x00000030u); // 800DBEE8
  c->r[3]=R32(c->r[3]+0x00000038u); // 800DBEEC
  c->r[28]=R32(c->r[3]+0x00000008u); // 800DBEF0
  c->r[29]=R32(c->r[3]+0x00000010u); // 800DBEF4
  goto L_800DBF58; // 800DBEF8
L_800DBEFC:;
  c->r[3]=R32(c->r[29]+c->r[30]); // 800DBEFC
  cmps(c,0,(int32_t)c->r[3],0); // 800DBF00
  if (crb(c,2)) { goto L_800DBF50; } // 800DBF04
  c->r[4]=R32(c->r[3]+0x000000ACu); // 800DBF08
  cmps(c,0,(int32_t)c->r[4],0); // 800DBF0C
  if (crb(c,2)) { goto L_800DBF1C; } // 800DBF10
  c->r[0]=R32(c->r[4]+0x00000000u); // 800DBF14
  goto L_800DBF20; // 800DBF18
L_800DBF1C:;
  c->r[0]=0u+0x00000000u; // 800DBF1C
L_800DBF20:;
  cmpu(c,0,c->r[0],c->r[31]); // 800DBF20
  if (!crb(c,2)) { goto L_800DBF50; } // 800DBF24
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000064u); // 800DBF28
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800DBF2C
  if (crb(c,2)) { goto L_800DBF50; } // 800DBF30
  c->f[1]=c->f[30]; // 800DBF34
  c->r[4]=0u+0x00000000u; // 800DBF38
  c->f[2]=c->f[31]; // 800DBF3C
  c->lr=0x800DBF44u; f_800DBE50(c); // 800DBF40
  cmps(c,0,(int32_t)c->r[3],0); // 800DBF44
  if (crb(c,2)) { goto L_800DBF50; } // 800DBF48
  goto L_800DC03C; // 800DBF4C
L_800DBF50:;
  c->r[27]=c->r[27]+0x00000001u; // 800DBF50
  c->r[30]=c->r[30]+0x00000004u; // 800DBF54
L_800DBF58:;
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[28]); // 800DBF58
  if (crb(c,0)) { IRQCHK(c); goto L_800DBEFC; } // 800DBF5C
  goto L_800DC038; // 800DBF60
L_800DBF64:;
  c->r[27]=0u+0x00000000u; // 800DBF64
  c->r[30]=0u+0x00000000u; // 800DBF68
  goto L_800DBFAC; // 800DBF6C
L_800DBF70:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 800DBF70
  cmps(c,0,(int32_t)c->r[3],0); // 800DBF74
  if (crb(c,2)) { goto L_800DBFA4; } // 800DBF78
  c->r[3]=R32(c->r[3]+c->r[30]); // 800DBF7C
  cmps(c,0,(int32_t)c->r[3],0); // 800DBF80
  if (crb(c,2)) { goto L_800DBFA4; } // 800DBF84
  c->f[1]=c->f[30]; // 800DBF88
  c->r[4]=0u+0x00000000u; // 800DBF8C
  c->f[2]=c->f[31]; // 800DBF90
  c->lr=0x800DBF98u; f_800DBE50(c); // 800DBF94
  cmps(c,0,(int32_t)c->r[3],0); // 800DBF98
  if (crb(c,2)) { goto L_800DBFA4; } // 800DBF9C
  goto L_800DC03C; // 800DBFA0
L_800DBFA4:;
  c->r[27]=c->r[27]+0x00000001u; // 800DBFA4
  c->r[30]=c->r[30]+0x00000004u; // 800DBFA8
L_800DBFAC:;
  c->r[3]=R32(c->r[31]+0x000000A8u); // 800DBFAC
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DBFB0
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800DBFB4
  if (crb(c,0)) { IRQCHK(c); goto L_800DBF70; } // 800DBFB8
  goto L_800DC038; // 800DBFBC
L_800DBFC0:;
  c->r[0]=R32(c->r[3]+0x00000040u); // 800DBFC0
  c->r[0]=rotl(c->r[0],0)&0x04000000u; cr0(c,c->r[0]); // 800DBFC4
  if (crb(c,2)) { goto L_800DC010; } // 800DBFC8
  c->r[4]=R32(c->r[3]+0x000000ACu); // 800DBFCC
  cmps(c,0,(int32_t)c->r[4],0); // 800DBFD0
  if (crb(c,2)) { goto L_800DBFE0; } // 800DBFD4
  c->r[0]=R32(c->r[4]+0x00000000u); // 800DBFD8
  goto L_800DBFE4; // 800DBFDC
L_800DBFE0:;
  c->r[0]=0u+0x00000000u; // 800DBFE0
L_800DBFE4:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DBFE4
  if (crb(c,2)) { goto L_800DC010; } // 800DBFE8
  cmps(c,0,(int32_t)c->r[4],0); // 800DBFEC
  if (crb(c,2)) { goto L_800DBFFC; } // 800DBFF0
  c->r[4]=R32(c->r[4]+0x00000000u); // 800DBFF4
  goto L_800DC000; // 800DBFF8
L_800DBFFC:;
  c->r[4]=0u+0x00000000u; // 800DBFFC
L_800DC000:;
  {uint32_t ea=c->r[4]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DC000
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 800DC004
  {uint32_t ea=c->r[3]+0x000000D8u; WF32(ea,c->f[0]);} // 800DC008
  goto L_800DC018; // 800DC00C
L_800DC010:;
  {uint32_t ea=c->r[3]+0x000000D4u; WF32(ea,c->f[1]);} // 800DC010
  {uint32_t ea=c->r[3]+0x000000D8u; WF32(ea,c->f[2]);} // 800DC014
L_800DC018:;
  c->r[3]=R32(c->r[3]+0x00000138u); // 800DC018
  c->r[12]=R32(c->r[3]+0x00000000u); // 800DC01C
  c->r[12]=R32(c->r[12]+0x000000BCu); // 800DC020
  c->ctr=c->r[12]; // 800DC024
  if (true) { c->lr=0x800DC02Cu; dispatch(c,c->ctr); } // 800DC028
  cmps(c,0,(int32_t)c->r[3],0); // 800DC02C
  if (crb(c,2)) { goto L_800DC038; } // 800DC030
  goto L_800DC03C; // 800DC034
L_800DC038:;
  c->r[3]=0u+0x00000000u; // 800DC038
L_800DC03C:;
  c->r[11]=c->r[1]+0x00000020u; // 800DC03C
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 800DC040
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 800DC044
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 800DC048
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 800DC04C
  c->lr=0x800DC054u; f_800C2E98(c); // 800DC050
  c->r[0]=R32(c->r[1]+0x00000044u); // 800DC054
  c->lr=c->r[0]; // 800DC058
  c->r[1]=c->r[1]+0x00000040u; // 800DC05C
  return; // 800DC060
}

// fn_800DC070
void f_800DC070(Ctx* __restrict c) {
  trace_call(0x800DC070u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC070
  c->r[0]=c->lr; // 800DC074
  W32(c->r[1]+0x00000044u,c->r[0]); // 800DC078
  c->r[11]=c->r[1]+0x00000040u; // 800DC07C
  c->lr=0x800DC084u; f_800C2DBC(c); // 800DC080
  c->r[11]=c->r[1]+0x00000028u; // 800DC084
  c->lr=0x800DC08Cu; f_800C2E4C(c); // 800DC088
  c->f[29]=c->f[1]; // 800DC08C
  cmps(c,0,(int32_t)c->r[4],0); // 800DC090
  c->f[30]=c->f[2]; // 800DC094
  c->r[29]=c->r[3]|c->r[3]; // 800DC098
  c->f[31]=c->f[3]; // 800DC09C
  if (crb(c,2)) { goto L_800DC1DC; } // 800DC0A0
  c->r[3]=R32(c->r[3]+0x000000ACu); // 800DC0A4
  cmps(c,0,(int32_t)c->r[3],0); // 800DC0A8
  if (crb(c,2)) { goto L_800DC0B8; } // 800DC0AC
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DC0B0
  goto L_800DC0BC; // 800DC0B4
L_800DC0B8:;
  c->r[0]=0u+0x00000000u; // 800DC0B8
L_800DC0BC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DC0BC
  if (crb(c,2)) { goto L_800DC0D8; } // 800DC0C0
  cmps(c,0,(int32_t)c->r[3],0); // 800DC0C4
  if (crb(c,2)) { goto L_800DC0D4; } // 800DC0C8
  c->r[29]=R32(c->r[3]+0x00000000u); // 800DC0CC
  goto L_800DC0D8; // 800DC0D0
L_800DC0D4:;
  c->r[29]=0u+0x00000000u; // 800DC0D4
L_800DC0D8:;
  {uint32_t ea=c->r[29]+0x000000F8u; WF32(ea,c->f[1]);} // 800DC0D8
  {uint32_t ea=c->r[29]+0x000000FCu; WF32(ea,c->f[2]);} // 800DC0DC
  {uint32_t ea=c->r[29]+0x00000100u; WF32(ea,c->f[3]);} // 800DC0E0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000064u); // 800DC0E4
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 800DC0E8
  if (crb(c,2)) { goto L_800DC17C; } // 800DC0EC
  c->r[3]=R32(c->r[29]+0x00000028u); // 800DC0F0
  c->r[27]=0u+0x00000000u; // 800DC0F4
  c->r[31]=0u+0x00000000u; // 800DC0F8
  c->r[3]=R32(c->r[3]+0x00000030u); // 800DC0FC
  c->r[3]=R32(c->r[3]+0x00000038u); // 800DC100
  c->r[28]=R32(c->r[3]+0x00000008u); // 800DC104
  c->r[30]=R32(c->r[3]+0x00000010u); // 800DC108
  goto L_800DC170; // 800DC10C
L_800DC110:;
  c->r[3]=R32(c->r[30]+c->r[31]); // 800DC110
  cmps(c,0,(int32_t)c->r[3],0); // 800DC114
  if (crb(c,2)) { goto L_800DC168; } // 800DC118
  c->r[4]=R32(c->r[3]+0x000000ACu); // 800DC11C
  cmps(c,0,(int32_t)c->r[4],0); // 800DC120
  if (crb(c,2)) { goto L_800DC130; } // 800DC124
  c->r[0]=R32(c->r[4]+0x00000000u); // 800DC128
  goto L_800DC134; // 800DC12C
L_800DC130:;
  c->r[0]=0u+0x00000000u; // 800DC130
L_800DC134:;
  cmpu(c,0,c->r[0],c->r[29]); // 800DC134
  if (!crb(c,2)) { goto L_800DC168; } // 800DC138
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000064u); // 800DC13C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800DC140
  if (crb(c,2)) { goto L_800DC168; } // 800DC144
  c->f[1]=c->f[29]; // 800DC148
  c->r[4]=0u+0x00000000u; // 800DC14C
  c->f[2]=c->f[30]; // 800DC150
  c->f[3]=c->f[31]; // 800DC154
  c->lr=0x800DC15Cu; f_800DC070(c); // 800DC158
  cmps(c,0,(int32_t)c->r[3],0); // 800DC15C
  if (crb(c,2)) { goto L_800DC168; } // 800DC160
  goto L_800DC20C; // 800DC164
L_800DC168:;
  c->r[27]=c->r[27]+0x00000001u; // 800DC168
  c->r[31]=c->r[31]+0x00000004u; // 800DC16C
L_800DC170:;
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[28]); // 800DC170
  if (crb(c,0)) { IRQCHK(c); goto L_800DC110; } // 800DC174
  goto L_800DC208; // 800DC178
L_800DC17C:;
  c->r[27]=0u+0x00000000u; // 800DC17C
  c->r[31]=0u+0x00000000u; // 800DC180
  goto L_800DC1C8; // 800DC184
L_800DC188:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 800DC188
  cmps(c,0,(int32_t)c->r[3],0); // 800DC18C
  if (crb(c,2)) { goto L_800DC1C0; } // 800DC190
  c->r[3]=R32(c->r[3]+c->r[31]); // 800DC194
  cmps(c,0,(int32_t)c->r[3],0); // 800DC198
  if (crb(c,2)) { goto L_800DC1C0; } // 800DC19C
  c->f[1]=c->f[29]; // 800DC1A0
  c->r[4]=0u+0x00000000u; // 800DC1A4
  c->f[2]=c->f[30]; // 800DC1A8
  c->f[3]=c->f[31]; // 800DC1AC
  c->lr=0x800DC1B4u; f_800DC070(c); // 800DC1B0
  cmps(c,0,(int32_t)c->r[3],0); // 800DC1B4
  if (crb(c,2)) { goto L_800DC1C0; } // 800DC1B8
  goto L_800DC20C; // 800DC1BC
L_800DC1C0:;
  c->r[27]=c->r[27]+0x00000001u; // 800DC1C0
  c->r[31]=c->r[31]+0x00000004u; // 800DC1C4
L_800DC1C8:;
  c->r[3]=R32(c->r[29]+0x000000A8u); // 800DC1C8
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DC1CC
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800DC1D0
  if (crb(c,0)) { IRQCHK(c); goto L_800DC188; } // 800DC1D4
  goto L_800DC208; // 800DC1D8
L_800DC1DC:;
  {uint32_t ea=c->r[3]+0x000000F8u; WF32(ea,c->f[1]);} // 800DC1DC
  {uint32_t ea=c->r[3]+0x000000FCu; WF32(ea,c->f[2]);} // 800DC1E0
  {uint32_t ea=c->r[3]+0x00000100u; WF32(ea,c->f[3]);} // 800DC1E4
  c->r[3]=R32(c->r[3]+0x00000138u); // 800DC1E8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800DC1EC
  c->r[12]=R32(c->r[12]+0x000000D4u); // 800DC1F0
  c->ctr=c->r[12]; // 800DC1F4
  if (true) { c->lr=0x800DC1FCu; dispatch(c,c->ctr); } // 800DC1F8
  cmps(c,0,(int32_t)c->r[3],0); // 800DC1FC
  if (crb(c,2)) { goto L_800DC208; } // 800DC200
  goto L_800DC20C; // 800DC204
L_800DC208:;
  c->r[3]=0u+0x00000000u; // 800DC208
L_800DC20C:;
  c->r[11]=c->r[1]+0x00000040u; // 800DC20C
  c->lr=0x800DC214u; f_800C2E08(c); // 800DC210
  c->r[11]=c->r[1]+0x00000028u; // 800DC214
  c->lr=0x800DC21Cu; f_800C2E98(c); // 800DC218
  c->r[0]=R32(c->r[1]+0x00000044u); // 800DC21C
  c->lr=c->r[0]; // 800DC220
  c->r[1]=c->r[1]+0x00000040u; // 800DC224
  return; // 800DC228
}

// fn_800DC230
void f_800DC230(Ctx* __restrict c) {
  trace_call(0x800DC230u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC230
  c->r[0]=c->lr; // 800DC234
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DC238
  c->r[11]=c->r[1]+0x00000028u; // 800DC23C
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[31]);} // 800DC240
  c->lr=0x800DC248u; f_800C2E4C(c); // 800DC244
  c->f[31]=c->f[1]; // 800DC248
  cmps(c,0,(int32_t)c->r[4],0); // 800DC24C
  c->r[29]=c->r[3]|c->r[3]; // 800DC250
  if (crb(c,2)) { goto L_800DC378; } // 800DC254
  c->r[3]=R32(c->r[3]+0x000000ACu); // 800DC258
  cmps(c,0,(int32_t)c->r[3],0); // 800DC25C
  if (crb(c,2)) { goto L_800DC26C; } // 800DC260
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DC264
  goto L_800DC270; // 800DC268
L_800DC26C:;
  c->r[0]=0u+0x00000000u; // 800DC26C
L_800DC270:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DC270
  if (crb(c,2)) { goto L_800DC28C; } // 800DC274
  cmps(c,0,(int32_t)c->r[3],0); // 800DC278
  if (crb(c,2)) { goto L_800DC288; } // 800DC27C
  c->r[29]=R32(c->r[3]+0x00000000u); // 800DC280
  goto L_800DC28C; // 800DC284
L_800DC288:;
  c->r[29]=0u+0x00000000u; // 800DC288
L_800DC28C:;
  {uint32_t ea=c->r[29]+0x00000104u; WF32(ea,c->f[1]);} // 800DC28C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000064u); // 800DC290
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 800DC294
  if (crb(c,2)) { goto L_800DC320; } // 800DC298
  c->r[3]=R32(c->r[29]+0x00000028u); // 800DC29C
  c->r[27]=0u+0x00000000u; // 800DC2A0
  c->r[31]=0u+0x00000000u; // 800DC2A4
  c->r[3]=R32(c->r[3]+0x00000030u); // 800DC2A8
  c->r[3]=R32(c->r[3]+0x00000038u); // 800DC2AC
  c->r[28]=R32(c->r[3]+0x00000008u); // 800DC2B0
  c->r[30]=R32(c->r[3]+0x00000010u); // 800DC2B4
  goto L_800DC314; // 800DC2B8
L_800DC2BC:;
  c->r[3]=R32(c->r[30]+c->r[31]); // 800DC2BC
  cmps(c,0,(int32_t)c->r[3],0); // 800DC2C0
  if (crb(c,2)) { goto L_800DC30C; } // 800DC2C4
  c->r[4]=R32(c->r[3]+0x000000ACu); // 800DC2C8
  cmps(c,0,(int32_t)c->r[4],0); // 800DC2CC
  if (crb(c,2)) { goto L_800DC2DC; } // 800DC2D0
  c->r[0]=R32(c->r[4]+0x00000000u); // 800DC2D4
  goto L_800DC2E0; // 800DC2D8
L_800DC2DC:;
  c->r[0]=0u+0x00000000u; // 800DC2DC
L_800DC2E0:;
  cmpu(c,0,c->r[0],c->r[29]); // 800DC2E0
  if (!crb(c,2)) { goto L_800DC30C; } // 800DC2E4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000064u); // 800DC2E8
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800DC2EC
  if (crb(c,2)) { goto L_800DC30C; } // 800DC2F0
  c->f[1]=c->f[31]; // 800DC2F4
  c->r[4]=0u+0x00000000u; // 800DC2F8
  c->lr=0x800DC300u; f_800DC230(c); // 800DC2FC
  cmps(c,0,(int32_t)c->r[3],0); // 800DC300
  if (crb(c,2)) { goto L_800DC30C; } // 800DC304
  goto L_800DC3A0; // 800DC308
L_800DC30C:;
  c->r[27]=c->r[27]+0x00000001u; // 800DC30C
  c->r[31]=c->r[31]+0x00000004u; // 800DC310
L_800DC314:;
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[28]); // 800DC314
  if (crb(c,0)) { IRQCHK(c); goto L_800DC2BC; } // 800DC318
  goto L_800DC39C; // 800DC31C
L_800DC320:;
  c->r[27]=0u+0x00000000u; // 800DC320
  c->r[31]=0u+0x00000000u; // 800DC324
  goto L_800DC364; // 800DC328
L_800DC32C:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 800DC32C
  cmps(c,0,(int32_t)c->r[3],0); // 800DC330
  if (crb(c,2)) { goto L_800DC35C; } // 800DC334
  c->r[3]=R32(c->r[3]+c->r[31]); // 800DC338
  cmps(c,0,(int32_t)c->r[3],0); // 800DC33C
  if (crb(c,2)) { goto L_800DC35C; } // 800DC340
  c->f[1]=c->f[31]; // 800DC344
  c->r[4]=0u+0x00000000u; // 800DC348
  c->lr=0x800DC350u; f_800DC230(c); // 800DC34C
  cmps(c,0,(int32_t)c->r[3],0); // 800DC350
  if (crb(c,2)) { goto L_800DC35C; } // 800DC354
  goto L_800DC3A0; // 800DC358
L_800DC35C:;
  c->r[27]=c->r[27]+0x00000001u; // 800DC35C
  c->r[31]=c->r[31]+0x00000004u; // 800DC360
L_800DC364:;
  c->r[3]=R32(c->r[29]+0x000000A8u); // 800DC364
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DC368
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800DC36C
  if (crb(c,0)) { IRQCHK(c); goto L_800DC32C; } // 800DC370
  goto L_800DC39C; // 800DC374
L_800DC378:;
  {uint32_t ea=c->r[3]+0x00000104u; WF32(ea,c->f[1]);} // 800DC378
  c->r[3]=R32(c->r[3]+0x00000138u); // 800DC37C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800DC380
  c->r[12]=R32(c->r[12]+0x000000D8u); // 800DC384
  c->ctr=c->r[12]; // 800DC388
  if (true) { c->lr=0x800DC390u; dispatch(c,c->ctr); } // 800DC38C
  cmps(c,0,(int32_t)c->r[3],0); // 800DC390
  if (crb(c,2)) { goto L_800DC39C; } // 800DC394
  goto L_800DC3A0; // 800DC398
L_800DC39C:;
  c->r[3]=0u+0x00000000u; // 800DC39C
L_800DC3A0:;
  c->r[11]=c->r[1]+0x00000028u; // 800DC3A0
  {uint32_t ea=c->r[1]+0x00000028u; c->f[31]=RF64(ea);} // 800DC3A4
  c->lr=0x800DC3ACu; f_800C2E98(c); // 800DC3A8
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DC3AC
  c->lr=c->r[0]; // 800DC3B0
  c->r[1]=c->r[1]+0x00000030u; // 800DC3B4
  return; // 800DC3B8
}

// fn_800DC3C0
void f_800DC3C0(Ctx* __restrict c) {
  trace_call(0x800DC3C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC3C0
  c->r[0]=c->lr; // 800DC3C4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DC3C8
  c->r[11]=c->r[1]+0x00000028u; // 800DC3CC
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[31]);} // 800DC3D0
  c->lr=0x800DC3D8u; f_800C2E4C(c); // 800DC3D4
  c->f[31]=c->f[1]; // 800DC3D8
  cmps(c,0,(int32_t)c->r[4],0); // 800DC3DC
  c->r[29]=c->r[3]|c->r[3]; // 800DC3E0
  if (crb(c,2)) { goto L_800DC508; } // 800DC3E4
  c->r[3]=R32(c->r[3]+0x000000ACu); // 800DC3E8
  cmps(c,0,(int32_t)c->r[3],0); // 800DC3EC
  if (crb(c,2)) { goto L_800DC3FC; } // 800DC3F0
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DC3F4
  goto L_800DC400; // 800DC3F8
L_800DC3FC:;
  c->r[0]=0u+0x00000000u; // 800DC3FC
L_800DC400:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DC400
  if (crb(c,2)) { goto L_800DC41C; } // 800DC404
  cmps(c,0,(int32_t)c->r[3],0); // 800DC408
  if (crb(c,2)) { goto L_800DC418; } // 800DC40C
  c->r[29]=R32(c->r[3]+0x00000000u); // 800DC410
  goto L_800DC41C; // 800DC414
L_800DC418:;
  c->r[29]=0u+0x00000000u; // 800DC418
L_800DC41C:;
  {uint32_t ea=c->r[29]+0x00000090u; WF32(ea,c->f[1]);} // 800DC41C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000064u); // 800DC420
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 800DC424
  if (crb(c,2)) { goto L_800DC4B0; } // 800DC428
  c->r[3]=R32(c->r[29]+0x00000028u); // 800DC42C
  c->r[27]=0u+0x00000000u; // 800DC430
  c->r[31]=0u+0x00000000u; // 800DC434
  c->r[3]=R32(c->r[3]+0x00000030u); // 800DC438
  c->r[3]=R32(c->r[3]+0x00000038u); // 800DC43C
  c->r[28]=R32(c->r[3]+0x00000008u); // 800DC440
  c->r[30]=R32(c->r[3]+0x00000010u); // 800DC444
  goto L_800DC4A4; // 800DC448
L_800DC44C:;
  c->r[3]=R32(c->r[30]+c->r[31]); // 800DC44C
  cmps(c,0,(int32_t)c->r[3],0); // 800DC450
  if (crb(c,2)) { goto L_800DC49C; } // 800DC454
  c->r[4]=R32(c->r[3]+0x000000ACu); // 800DC458
  cmps(c,0,(int32_t)c->r[4],0); // 800DC45C
  if (crb(c,2)) { goto L_800DC46C; } // 800DC460
  c->r[0]=R32(c->r[4]+0x00000000u); // 800DC464
  goto L_800DC470; // 800DC468
L_800DC46C:;
  c->r[0]=0u+0x00000000u; // 800DC46C
L_800DC470:;
  cmpu(c,0,c->r[0],c->r[29]); // 800DC470
  if (!crb(c,2)) { goto L_800DC49C; } // 800DC474
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000064u); // 800DC478
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800DC47C
  if (crb(c,2)) { goto L_800DC49C; } // 800DC480
  c->f[1]=c->f[31]; // 800DC484
  c->r[4]=0u+0x00000000u; // 800DC488
  c->lr=0x800DC490u; f_800DC3C0(c); // 800DC48C
  cmps(c,0,(int32_t)c->r[3],0); // 800DC490
  if (crb(c,2)) { goto L_800DC49C; } // 800DC494
  goto L_800DC530; // 800DC498
L_800DC49C:;
  c->r[27]=c->r[27]+0x00000001u; // 800DC49C
  c->r[31]=c->r[31]+0x00000004u; // 800DC4A0
L_800DC4A4:;
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[28]); // 800DC4A4
  if (crb(c,0)) { IRQCHK(c); goto L_800DC44C; } // 800DC4A8
  goto L_800DC52C; // 800DC4AC
L_800DC4B0:;
  c->r[27]=0u+0x00000000u; // 800DC4B0
  c->r[31]=0u+0x00000000u; // 800DC4B4
  goto L_800DC4F4; // 800DC4B8
L_800DC4BC:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 800DC4BC
  cmps(c,0,(int32_t)c->r[3],0); // 800DC4C0
  if (crb(c,2)) { goto L_800DC4EC; } // 800DC4C4
  c->r[3]=R32(c->r[3]+c->r[31]); // 800DC4C8
  cmps(c,0,(int32_t)c->r[3],0); // 800DC4CC
  if (crb(c,2)) { goto L_800DC4EC; } // 800DC4D0
  c->f[1]=c->f[31]; // 800DC4D4
  c->r[4]=0u+0x00000000u; // 800DC4D8
  c->lr=0x800DC4E0u; f_800DC3C0(c); // 800DC4DC
  cmps(c,0,(int32_t)c->r[3],0); // 800DC4E0
  if (crb(c,2)) { goto L_800DC4EC; } // 800DC4E4
  goto L_800DC530; // 800DC4E8
L_800DC4EC:;
  c->r[27]=c->r[27]+0x00000001u; // 800DC4EC
  c->r[31]=c->r[31]+0x00000004u; // 800DC4F0
L_800DC4F4:;
  c->r[3]=R32(c->r[29]+0x000000A8u); // 800DC4F4
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DC4F8
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800DC4FC
  if (crb(c,0)) { IRQCHK(c); goto L_800DC4BC; } // 800DC500
  goto L_800DC52C; // 800DC504
L_800DC508:;
  {uint32_t ea=c->r[3]+0x00000090u; WF32(ea,c->f[1]);} // 800DC508
  c->r[3]=R32(c->r[3]+0x00000138u); // 800DC50C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800DC510
  c->r[12]=R32(c->r[12]+0x000000DCu); // 800DC514
  c->ctr=c->r[12]; // 800DC518
  if (true) { c->lr=0x800DC520u; dispatch(c,c->ctr); } // 800DC51C
  cmps(c,0,(int32_t)c->r[3],0); // 800DC520
  if (crb(c,2)) { goto L_800DC52C; } // 800DC524
  goto L_800DC530; // 800DC528
L_800DC52C:;
  c->r[3]=0u+0x00000000u; // 800DC52C
L_800DC530:;
  c->r[11]=c->r[1]+0x00000028u; // 800DC530
  {uint32_t ea=c->r[1]+0x00000028u; c->f[31]=RF64(ea);} // 800DC534
  c->lr=0x800DC53Cu; f_800C2E98(c); // 800DC538
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DC53C
  c->lr=c->r[0]; // 800DC540
  c->r[1]=c->r[1]+0x00000030u; // 800DC544
  return; // 800DC548
}

// fn_800DC550
void f_800DC550(Ctx* __restrict c) {
  trace_call(0x800DC550u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC550
  c->r[0]=c->lr; // 800DC554
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DC558
  c->r[11]=c->r[1]+0x00000028u; // 800DC55C
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[31]);} // 800DC560
  c->lr=0x800DC568u; f_800C2E4C(c); // 800DC564
  c->f[31]=c->f[1]; // 800DC568
  cmps(c,0,(int32_t)c->r[4],0); // 800DC56C
  c->r[29]=c->r[3]|c->r[3]; // 800DC570
  if (crb(c,2)) { goto L_800DC698; } // 800DC574
  c->r[3]=R32(c->r[3]+0x000000ACu); // 800DC578
  cmps(c,0,(int32_t)c->r[3],0); // 800DC57C
  if (crb(c,2)) { goto L_800DC58C; } // 800DC580
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DC584
  goto L_800DC590; // 800DC588
L_800DC58C:;
  c->r[0]=0u+0x00000000u; // 800DC58C
L_800DC590:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DC590
  if (crb(c,2)) { goto L_800DC5AC; } // 800DC594
  cmps(c,0,(int32_t)c->r[3],0); // 800DC598
  if (crb(c,2)) { goto L_800DC5A8; } // 800DC59C
  c->r[29]=R32(c->r[3]+0x00000000u); // 800DC5A0
  goto L_800DC5AC; // 800DC5A4
L_800DC5A8:;
  c->r[29]=0u+0x00000000u; // 800DC5A8
L_800DC5AC:;
  {uint32_t ea=c->r[29]+0x0000008Cu; WF32(ea,c->f[1]);} // 800DC5AC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000064u); // 800DC5B0
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 800DC5B4
  if (crb(c,2)) { goto L_800DC640; } // 800DC5B8
  c->r[3]=R32(c->r[29]+0x00000028u); // 800DC5BC
  c->r[27]=0u+0x00000000u; // 800DC5C0
  c->r[31]=0u+0x00000000u; // 800DC5C4
  c->r[3]=R32(c->r[3]+0x00000030u); // 800DC5C8
  c->r[3]=R32(c->r[3]+0x00000038u); // 800DC5CC
  c->r[28]=R32(c->r[3]+0x00000008u); // 800DC5D0
  c->r[30]=R32(c->r[3]+0x00000010u); // 800DC5D4
  goto L_800DC634; // 800DC5D8
L_800DC5DC:;
  c->r[3]=R32(c->r[30]+c->r[31]); // 800DC5DC
  cmps(c,0,(int32_t)c->r[3],0); // 800DC5E0
  if (crb(c,2)) { goto L_800DC62C; } // 800DC5E4
  c->r[4]=R32(c->r[3]+0x000000ACu); // 800DC5E8
  cmps(c,0,(int32_t)c->r[4],0); // 800DC5EC
  if (crb(c,2)) { goto L_800DC5FC; } // 800DC5F0
  c->r[0]=R32(c->r[4]+0x00000000u); // 800DC5F4
  goto L_800DC600; // 800DC5F8
L_800DC5FC:;
  c->r[0]=0u+0x00000000u; // 800DC5FC
L_800DC600:;
  cmpu(c,0,c->r[0],c->r[29]); // 800DC600
  if (!crb(c,2)) { goto L_800DC62C; } // 800DC604
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000064u); // 800DC608
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800DC60C
  if (crb(c,2)) { goto L_800DC62C; } // 800DC610
  c->f[1]=c->f[31]; // 800DC614
  c->r[4]=0u+0x00000000u; // 800DC618
  c->lr=0x800DC620u; f_800DC550(c); // 800DC61C
  cmps(c,0,(int32_t)c->r[3],0); // 800DC620
  if (crb(c,2)) { goto L_800DC62C; } // 800DC624
  goto L_800DC6C0; // 800DC628
L_800DC62C:;
  c->r[27]=c->r[27]+0x00000001u; // 800DC62C
  c->r[31]=c->r[31]+0x00000004u; // 800DC630
L_800DC634:;
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[28]); // 800DC634
  if (crb(c,0)) { IRQCHK(c); goto L_800DC5DC; } // 800DC638
  goto L_800DC6BC; // 800DC63C
L_800DC640:;
  c->r[27]=0u+0x00000000u; // 800DC640
  c->r[31]=0u+0x00000000u; // 800DC644
  goto L_800DC684; // 800DC648
L_800DC64C:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 800DC64C
  cmps(c,0,(int32_t)c->r[3],0); // 800DC650
  if (crb(c,2)) { goto L_800DC67C; } // 800DC654
  c->r[3]=R32(c->r[3]+c->r[31]); // 800DC658
  cmps(c,0,(int32_t)c->r[3],0); // 800DC65C
  if (crb(c,2)) { goto L_800DC67C; } // 800DC660
  c->f[1]=c->f[31]; // 800DC664
  c->r[4]=0u+0x00000000u; // 800DC668
  c->lr=0x800DC670u; f_800DC550(c); // 800DC66C
  cmps(c,0,(int32_t)c->r[3],0); // 800DC670
  if (crb(c,2)) { goto L_800DC67C; } // 800DC674
  goto L_800DC6C0; // 800DC678
L_800DC67C:;
  c->r[27]=c->r[27]+0x00000001u; // 800DC67C
  c->r[31]=c->r[31]+0x00000004u; // 800DC680
L_800DC684:;
  c->r[3]=R32(c->r[29]+0x000000A8u); // 800DC684
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DC688
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800DC68C
  if (crb(c,0)) { IRQCHK(c); goto L_800DC64C; } // 800DC690
  goto L_800DC6BC; // 800DC694
L_800DC698:;
  {uint32_t ea=c->r[3]+0x0000008Cu; WF32(ea,c->f[1]);} // 800DC698
  c->r[3]=R32(c->r[3]+0x00000138u); // 800DC69C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800DC6A0
  c->r[12]=R32(c->r[12]+0x000000E0u); // 800DC6A4
  c->ctr=c->r[12]; // 800DC6A8
  if (true) { c->lr=0x800DC6B0u; dispatch(c,c->ctr); } // 800DC6AC
  cmps(c,0,(int32_t)c->r[3],0); // 800DC6B0
  if (crb(c,2)) { goto L_800DC6BC; } // 800DC6B4
  goto L_800DC6C0; // 800DC6B8
L_800DC6BC:;
  c->r[3]=0u+0x00000000u; // 800DC6BC
L_800DC6C0:;
  c->r[11]=c->r[1]+0x00000028u; // 800DC6C0
  {uint32_t ea=c->r[1]+0x00000028u; c->f[31]=RF64(ea);} // 800DC6C4
  c->lr=0x800DC6CCu; f_800C2E98(c); // 800DC6C8
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DC6CC
  c->lr=c->r[0]; // 800DC6D0
  c->r[1]=c->r[1]+0x00000030u; // 800DC6D4
  return; // 800DC6D8
}

// fn_800DC6E0
void f_800DC6E0(Ctx* __restrict c) {
  trace_call(0x800DC6E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC6E0
  c->r[0]=c->lr; // 800DC6E4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DC6E8
  c->r[11]=c->r[1]+0x00000020u; // 800DC6EC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800DC6F0
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800DC6F4
  c->lr=0x800DC6FCu; f_800C2E4C(c); // 800DC6F8
  {uint32_t ea=c->r[2]+0xFFFF9E6Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DC6FC
  c->f[31]=c->f[1]; // 800DC700
  c->r[29]=c->r[3]|c->r[3]; // 800DC704
  fcmp(c,0,c->f[1],c->f[0]); // 800DC708
  if (!crb(c,1)) { goto L_800DC714; } // 800DC70C
  c->f[31]=c->f[0]; // 800DC710
L_800DC714:;
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DC714
  fcmp(c,0,c->f[31],c->f[0]); // 800DC718
  if (!crb(c,0)) { goto L_800DC724; } // 800DC71C
  c->f[31]=c->f[0]; // 800DC720
L_800DC724:;
  cmps(c,0,(int32_t)c->r[4],0); // 800DC724
  if (crb(c,2)) { goto L_800DC84C; } // 800DC728
  c->r[3]=R32(c->r[3]+0x000000ACu); // 800DC72C
  cmps(c,0,(int32_t)c->r[3],0); // 800DC730
  if (crb(c,2)) { goto L_800DC740; } // 800DC734
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DC738
  goto L_800DC744; // 800DC73C
L_800DC740:;
  c->r[0]=0u+0x00000000u; // 800DC740
L_800DC744:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DC744
  if (crb(c,2)) { goto L_800DC760; } // 800DC748
  cmps(c,0,(int32_t)c->r[3],0); // 800DC74C
  if (crb(c,2)) { goto L_800DC75C; } // 800DC750
  c->r[29]=R32(c->r[3]+0x00000000u); // 800DC754
  goto L_800DC760; // 800DC758
L_800DC75C:;
  c->r[29]=0u+0x00000000u; // 800DC75C
L_800DC760:;
  {uint32_t ea=c->r[29]+0x00000110u; WF32(ea,c->f[31]);} // 800DC760
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000064u); // 800DC764
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 800DC768
  if (crb(c,2)) { goto L_800DC7F4; } // 800DC76C
  c->r[3]=R32(c->r[29]+0x00000028u); // 800DC770
  c->r[27]=0u+0x00000000u; // 800DC774
  c->r[31]=0u+0x00000000u; // 800DC778
  c->r[3]=R32(c->r[3]+0x00000030u); // 800DC77C
  c->r[3]=R32(c->r[3]+0x00000038u); // 800DC780
  c->r[28]=R32(c->r[3]+0x00000008u); // 800DC784
  c->r[30]=R32(c->r[3]+0x00000010u); // 800DC788
  goto L_800DC7E8; // 800DC78C
L_800DC790:;
  c->r[3]=R32(c->r[30]+c->r[31]); // 800DC790
  cmps(c,0,(int32_t)c->r[3],0); // 800DC794
  if (crb(c,2)) { goto L_800DC7E0; } // 800DC798
  c->r[4]=R32(c->r[3]+0x000000ACu); // 800DC79C
  cmps(c,0,(int32_t)c->r[4],0); // 800DC7A0
  if (crb(c,2)) { goto L_800DC7B0; } // 800DC7A4
  c->r[0]=R32(c->r[4]+0x00000000u); // 800DC7A8
  goto L_800DC7B4; // 800DC7AC
L_800DC7B0:;
  c->r[0]=0u+0x00000000u; // 800DC7B0
L_800DC7B4:;
  cmpu(c,0,c->r[0],c->r[29]); // 800DC7B4
  if (!crb(c,2)) { goto L_800DC7E0; } // 800DC7B8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000064u); // 800DC7BC
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800DC7C0
  if (crb(c,2)) { goto L_800DC7E0; } // 800DC7C4
  c->f[1]=c->f[31]; // 800DC7C8
  c->r[4]=0u+0x00000000u; // 800DC7CC
  c->lr=0x800DC7D4u; f_800DC6E0(c); // 800DC7D0
  cmps(c,0,(int32_t)c->r[3],0); // 800DC7D4
  if (crb(c,2)) { goto L_800DC7E0; } // 800DC7D8
  goto L_800DC854; // 800DC7DC
L_800DC7E0:;
  c->r[27]=c->r[27]+0x00000001u; // 800DC7E0
  c->r[31]=c->r[31]+0x00000004u; // 800DC7E4
L_800DC7E8:;
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[28]); // 800DC7E8
  if (crb(c,0)) { IRQCHK(c); goto L_800DC790; } // 800DC7EC
  goto L_800DC850; // 800DC7F0
L_800DC7F4:;
  c->r[27]=0u+0x00000000u; // 800DC7F4
  c->r[31]=0u+0x00000000u; // 800DC7F8
  goto L_800DC838; // 800DC7FC
L_800DC800:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 800DC800
  cmps(c,0,(int32_t)c->r[3],0); // 800DC804
  if (crb(c,2)) { goto L_800DC830; } // 800DC808
  c->r[3]=R32(c->r[3]+c->r[31]); // 800DC80C
  cmps(c,0,(int32_t)c->r[3],0); // 800DC810
  if (crb(c,2)) { goto L_800DC830; } // 800DC814
  c->f[1]=c->f[31]; // 800DC818
  c->r[4]=0u+0x00000000u; // 800DC81C
  c->lr=0x800DC824u; f_800DC6E0(c); // 800DC820
  cmps(c,0,(int32_t)c->r[3],0); // 800DC824
  if (crb(c,2)) { goto L_800DC830; } // 800DC828
  goto L_800DC854; // 800DC82C
L_800DC830:;
  c->r[27]=c->r[27]+0x00000001u; // 800DC830
  c->r[31]=c->r[31]+0x00000004u; // 800DC834
L_800DC838:;
  c->r[3]=R32(c->r[29]+0x000000A8u); // 800DC838
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DC83C
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800DC840
  if (crb(c,0)) { IRQCHK(c); goto L_800DC800; } // 800DC844
  goto L_800DC850; // 800DC848
L_800DC84C:;
  {uint32_t ea=c->r[3]+0x00000110u; WF32(ea,c->f[31]);} // 800DC84C
L_800DC850:;
  c->r[3]=0u+0x00000000u; // 800DC850
L_800DC854:;
  c->r[11]=c->r[1]+0x00000020u; // 800DC854
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800DC858
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800DC85C
  c->lr=0x800DC864u; f_800C2E98(c); // 800DC860
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DC864
  c->lr=c->r[0]; // 800DC868
  c->r[1]=c->r[1]+0x00000030u; // 800DC86C
  return; // 800DC870
}

// fn_800DC880
void f_800DC880(Ctx* __restrict c) {
  trace_call(0x800DC880u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DC880
  c->r[0]=c->lr; // 800DC884
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DC888
  c->r[11]=c->r[1]+0x00000020u; // 800DC88C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800DC890
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800DC894
  c->lr=0x800DC89Cu; f_800C2E4C(c); // 800DC898
  {uint32_t ea=c->r[2]+0xFFFF9E4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DC89C
  c->f[31]=c->f[1]; // 800DC8A0
  c->r[29]=c->r[3]|c->r[3]; // 800DC8A4
  fcmp(c,0,c->f[1],c->f[0]); // 800DC8A8
  if (!crb(c,1)) { goto L_800DC8B4; } // 800DC8AC
  c->f[31]=c->f[0]; // 800DC8B0
L_800DC8B4:;
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DC8B4
  fcmp(c,0,c->f[31],c->f[0]); // 800DC8B8
  if (!crb(c,0)) { goto L_800DC8C4; } // 800DC8BC
  c->f[31]=c->f[0]; // 800DC8C0
L_800DC8C4:;
  cmps(c,0,(int32_t)c->r[4],0); // 800DC8C4
  if (crb(c,2)) { goto L_800DC9EC; } // 800DC8C8
  c->r[3]=R32(c->r[3]+0x000000ACu); // 800DC8CC
  cmps(c,0,(int32_t)c->r[3],0); // 800DC8D0
  if (crb(c,2)) { goto L_800DC8E0; } // 800DC8D4
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DC8D8
  goto L_800DC8E4; // 800DC8DC
L_800DC8E0:;
  c->r[0]=0u+0x00000000u; // 800DC8E0
L_800DC8E4:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DC8E4
  if (crb(c,2)) { goto L_800DC900; } // 800DC8E8
  cmps(c,0,(int32_t)c->r[3],0); // 800DC8EC
  if (crb(c,2)) { goto L_800DC8FC; } // 800DC8F0
  c->r[29]=R32(c->r[3]+0x00000000u); // 800DC8F4
  goto L_800DC900; // 800DC8F8
L_800DC8FC:;
  c->r[29]=0u+0x00000000u; // 800DC8FC
L_800DC900:;
  {uint32_t ea=c->r[29]+0x00000114u; WF32(ea,c->f[31]);} // 800DC900
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000064u); // 800DC904
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 800DC908
  if (crb(c,2)) { goto L_800DC994; } // 800DC90C
  c->r[3]=R32(c->r[29]+0x00000028u); // 800DC910
  c->r[27]=0u+0x00000000u; // 800DC914
  c->r[31]=0u+0x00000000u; // 800DC918
  c->r[3]=R32(c->r[3]+0x00000030u); // 800DC91C
  c->r[3]=R32(c->r[3]+0x00000038u); // 800DC920
  c->r[28]=R32(c->r[3]+0x00000008u); // 800DC924
  c->r[30]=R32(c->r[3]+0x00000010u); // 800DC928
  goto L_800DC988; // 800DC92C
L_800DC930:;
  c->r[3]=R32(c->r[30]+c->r[31]); // 800DC930
  cmps(c,0,(int32_t)c->r[3],0); // 800DC934
  if (crb(c,2)) { goto L_800DC980; } // 800DC938
  c->r[4]=R32(c->r[3]+0x000000ACu); // 800DC93C
  cmps(c,0,(int32_t)c->r[4],0); // 800DC940
  if (crb(c,2)) { goto L_800DC950; } // 800DC944
  c->r[0]=R32(c->r[4]+0x00000000u); // 800DC948
  goto L_800DC954; // 800DC94C
L_800DC950:;
  c->r[0]=0u+0x00000000u; // 800DC950
L_800DC954:;
  cmpu(c,0,c->r[0],c->r[29]); // 800DC954
  if (!crb(c,2)) { goto L_800DC980; } // 800DC958
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000064u); // 800DC95C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800DC960
  if (crb(c,2)) { goto L_800DC980; } // 800DC964
  c->f[1]=c->f[31]; // 800DC968
  c->r[4]=0u+0x00000000u; // 800DC96C
  c->lr=0x800DC974u; f_800DC880(c); // 800DC970
  cmps(c,0,(int32_t)c->r[3],0); // 800DC974
  if (crb(c,2)) { goto L_800DC980; } // 800DC978
  goto L_800DC9F4; // 800DC97C
L_800DC980:;
  c->r[27]=c->r[27]+0x00000001u; // 800DC980
  c->r[31]=c->r[31]+0x00000004u; // 800DC984
L_800DC988:;
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[28]); // 800DC988
  if (crb(c,0)) { IRQCHK(c); goto L_800DC930; } // 800DC98C
  goto L_800DC9F0; // 800DC990
L_800DC994:;
  c->r[27]=0u+0x00000000u; // 800DC994
  c->r[31]=0u+0x00000000u; // 800DC998
  goto L_800DC9D8; // 800DC99C
L_800DC9A0:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 800DC9A0
  cmps(c,0,(int32_t)c->r[3],0); // 800DC9A4
  if (crb(c,2)) { goto L_800DC9D0; } // 800DC9A8
  c->r[3]=R32(c->r[3]+c->r[31]); // 800DC9AC
  cmps(c,0,(int32_t)c->r[3],0); // 800DC9B0
  if (crb(c,2)) { goto L_800DC9D0; } // 800DC9B4
  c->f[1]=c->f[31]; // 800DC9B8
  c->r[4]=0u+0x00000000u; // 800DC9BC
  c->lr=0x800DC9C4u; f_800DC880(c); // 800DC9C0
  cmps(c,0,(int32_t)c->r[3],0); // 800DC9C4
  if (crb(c,2)) { goto L_800DC9D0; } // 800DC9C8
  goto L_800DC9F4; // 800DC9CC
L_800DC9D0:;
  c->r[27]=c->r[27]+0x00000001u; // 800DC9D0
  c->r[31]=c->r[31]+0x00000004u; // 800DC9D4
L_800DC9D8:;
  c->r[3]=R32(c->r[29]+0x000000A8u); // 800DC9D8
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DC9DC
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800DC9E0
  if (crb(c,0)) { IRQCHK(c); goto L_800DC9A0; } // 800DC9E4
  goto L_800DC9F0; // 800DC9E8
L_800DC9EC:;
  {uint32_t ea=c->r[3]+0x00000114u; WF32(ea,c->f[31]);} // 800DC9EC
L_800DC9F0:;
  c->r[3]=0u+0x00000000u; // 800DC9F0
L_800DC9F4:;
  c->r[11]=c->r[1]+0x00000020u; // 800DC9F4
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800DC9F8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800DC9FC
  c->lr=0x800DCA04u; f_800C2E98(c); // 800DCA00
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DCA04
  c->lr=c->r[0]; // 800DCA08
  c->r[1]=c->r[1]+0x00000030u; // 800DCA0C
  return; // 800DCA10
}

// fn_800DCA20
void f_800DCA20(Ctx* __restrict c) {
  trace_call(0x800DCA20u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCA20
  c->r[0]=c->lr; // 800DCA24
  W32(c->r[1]+0x000000A4u,c->r[0]); // 800DCA28
  c->r[11]=c->r[1]+0x00000020u; // 800DCA2C
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 800DCA30
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 800DCA34
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[30]);} // 800DCA38
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,30,ea,0,0);} // 800DCA3C
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[29]);} // 800DCA40
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,29,ea,0,0);} // 800DCA44
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[28]);} // 800DCA48
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,28,ea,0,0);} // 800DCA4C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[27]);} // 800DCA50
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,27,ea,0,0);} // 800DCA54
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[26]);} // 800DCA58
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,26,ea,0,0);} // 800DCA5C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[25]);} // 800DCA60
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,25,ea,0,0);} // 800DCA64
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[24]);} // 800DCA68
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,24,ea,0,0);} // 800DCA6C
  c->lr=0x800DCA74u; f_800C2E4C(c); // 800DCA70
  c->f[24]=c->f[1]; // 800DCA74
  cmps(c,0,(int32_t)c->r[4],0); // 800DCA78
  c->f[25]=c->f[2]; // 800DCA7C
  c->r[31]=c->r[3]|c->r[3]; // 800DCA80
  c->f[26]=c->f[3]; // 800DCA84
  c->f[27]=c->f[4]; // 800DCA88
  c->f[28]=c->f[5]; // 800DCA8C
  c->f[29]=c->f[6]; // 800DCA90
  c->f[30]=c->f[7]; // 800DCA94
  c->f[31]=c->f[8]; // 800DCA98
  if (crb(c,2)) { goto L_800DCC20; } // 800DCA9C
  c->r[3]=R32(c->r[3]+0x000000ACu); // 800DCAA0
  cmps(c,0,(int32_t)c->r[3],0); // 800DCAA4
  if (crb(c,2)) { goto L_800DCAB4; } // 800DCAA8
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DCAAC
  goto L_800DCAB8; // 800DCAB0
L_800DCAB4:;
  c->r[0]=0u+0x00000000u; // 800DCAB4
L_800DCAB8:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DCAB8
  if (crb(c,2)) { goto L_800DCAD4; } // 800DCABC
  cmps(c,0,(int32_t)c->r[3],0); // 800DCAC0
  if (crb(c,2)) { goto L_800DCAD0; } // 800DCAC4
  c->r[31]=R32(c->r[3]+0x00000000u); // 800DCAC8
  goto L_800DCAD4; // 800DCACC
L_800DCAD0:;
  c->r[31]=0u+0x00000000u; // 800DCAD0
L_800DCAD4:;
  {uint32_t ea=c->r[31]+0x00000118u; WF32(ea,c->f[1]);} // 800DCAD4
  {uint32_t ea=c->r[31]+0x0000011Cu; WF32(ea,c->f[2]);} // 800DCAD8
  {uint32_t ea=c->r[31]+0x00000120u; WF32(ea,c->f[3]);} // 800DCADC
  {uint32_t ea=c->r[31]+0x00000124u; WF32(ea,c->f[4]);} // 800DCAE0
  {uint32_t ea=c->r[31]+0x00000128u; WF32(ea,c->f[5]);} // 800DCAE4
  {uint32_t ea=c->r[31]+0x0000012Cu; WF32(ea,c->f[6]);} // 800DCAE8
  {uint32_t ea=c->r[31]+0x00000130u; WF32(ea,c->f[7]);} // 800DCAEC
  {uint32_t ea=c->r[31]+0x00000134u; WF32(ea,c->f[8]);} // 800DCAF0
  c->r[0]=R32(c->r[31]+0x00000060u); // 800DCAF4
  c->r[0]=c->r[0]|0x00000004u; // 800DCAF8
  W32(c->r[31]+0x00000060u,c->r[0]); // 800DCAFC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000064u); // 800DCB00
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 800DCB04
  if (crb(c,2)) { goto L_800DCBAC; } // 800DCB08
  c->r[3]=R32(c->r[31]+0x00000028u); // 800DCB0C
  c->r[27]=0u+0x00000000u; // 800DCB10
  c->r[30]=0u+0x00000000u; // 800DCB14
  c->r[3]=R32(c->r[3]+0x00000030u); // 800DCB18
  c->r[3]=R32(c->r[3]+0x00000038u); // 800DCB1C
  c->r[28]=R32(c->r[3]+0x00000008u); // 800DCB20
  c->r[29]=R32(c->r[3]+0x00000010u); // 800DCB24
  goto L_800DCBA0; // 800DCB28
L_800DCB2C:;
  c->r[3]=R32(c->r[29]+c->r[30]); // 800DCB2C
  cmps(c,0,(int32_t)c->r[3],0); // 800DCB30
  if (crb(c,2)) { goto L_800DCB98; } // 800DCB34
  c->r[4]=R32(c->r[3]+0x000000ACu); // 800DCB38
  cmps(c,0,(int32_t)c->r[4],0); // 800DCB3C
  if (crb(c,2)) { goto L_800DCB4C; } // 800DCB40
  c->r[0]=R32(c->r[4]+0x00000000u); // 800DCB44
  goto L_800DCB50; // 800DCB48
L_800DCB4C:;
  c->r[0]=0u+0x00000000u; // 800DCB4C
L_800DCB50:;
  cmpu(c,0,c->r[0],c->r[31]); // 800DCB50
  if (!crb(c,2)) { goto L_800DCB98; } // 800DCB54
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000064u); // 800DCB58
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800DCB5C
  if (crb(c,2)) { goto L_800DCB98; } // 800DCB60
  c->f[1]=c->f[24]; // 800DCB64
  c->r[4]=0u+0x00000000u; // 800DCB68
  c->f[2]=c->f[25]; // 800DCB6C
  c->f[3]=c->f[26]; // 800DCB70
  c->f[4]=c->f[27]; // 800DCB74
  c->f[5]=c->f[28]; // 800DCB78
  c->f[6]=c->f[29]; // 800DCB7C
  c->f[7]=c->f[30]; // 800DCB80
  c->f[8]=c->f[31]; // 800DCB84
  c->lr=0x800DCB8Cu; f_800DCA20(c); // 800DCB88
  cmps(c,0,(int32_t)c->r[3],0); // 800DCB8C
  if (crb(c,2)) { goto L_800DCB98; } // 800DCB90
  goto L_800DCCB4; // 800DCB94
L_800DCB98:;
  c->r[27]=c->r[27]+0x00000001u; // 800DCB98
  c->r[30]=c->r[30]+0x00000004u; // 800DCB9C
L_800DCBA0:;
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[28]); // 800DCBA0
  if (crb(c,0)) { IRQCHK(c); goto L_800DCB2C; } // 800DCBA4
  goto L_800DCCB0; // 800DCBA8
L_800DCBAC:;
  c->r[27]=0u+0x00000000u; // 800DCBAC
  c->r[30]=0u+0x00000000u; // 800DCBB0
  goto L_800DCC0C; // 800DCBB4
L_800DCBB8:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 800DCBB8
  cmps(c,0,(int32_t)c->r[3],0); // 800DCBBC
  if (crb(c,2)) { goto L_800DCC04; } // 800DCBC0
  c->r[3]=R32(c->r[3]+c->r[30]); // 800DCBC4
  cmps(c,0,(int32_t)c->r[3],0); // 800DCBC8
  if (crb(c,2)) { goto L_800DCC04; } // 800DCBCC
  c->f[1]=c->f[24]; // 800DCBD0
  c->r[4]=0u+0x00000000u; // 800DCBD4
  c->f[2]=c->f[25]; // 800DCBD8
  c->f[3]=c->f[26]; // 800DCBDC
  c->f[4]=c->f[27]; // 800DCBE0
  c->f[5]=c->f[28]; // 800DCBE4
  c->f[6]=c->f[29]; // 800DCBE8
  c->f[7]=c->f[30]; // 800DCBEC
  c->f[8]=c->f[31]; // 800DCBF0
  c->lr=0x800DCBF8u; f_800DCA20(c); // 800DCBF4
  cmps(c,0,(int32_t)c->r[3],0); // 800DCBF8
  if (crb(c,2)) { goto L_800DCC04; } // 800DCBFC
  goto L_800DCCB4; // 800DCC00
L_800DCC04:;
  c->r[27]=c->r[27]+0x00000001u; // 800DCC04
  c->r[30]=c->r[30]+0x00000004u; // 800DCC08
L_800DCC0C:;
  c->r[3]=R32(c->r[31]+0x000000A8u); // 800DCC0C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DCC10
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800DCC14
  if (crb(c,0)) { IRQCHK(c); goto L_800DCBB8; } // 800DCC18
  goto L_800DCCB0; // 800DCC1C
L_800DCC20:;
  c->r[4]=R32(c->r[3]+0x000000ACu); // 800DCC20
  c->r[0]=R32(c->r[3]+0x00000060u); // 800DCC24
  cmps(c,0,(int32_t)c->r[4],0); // 800DCC28
  {uint32_t ea=c->r[3]+0x00000118u; WF32(ea,c->f[1]);} // 800DCC2C
  c->r[0]=c->r[0]|0x00000004u; // 800DCC30
  {uint32_t ea=c->r[3]+0x0000011Cu; WF32(ea,c->f[2]);} // 800DCC34
  {uint32_t ea=c->r[3]+0x00000120u; WF32(ea,c->f[3]);} // 800DCC38
  {uint32_t ea=c->r[3]+0x00000124u; WF32(ea,c->f[4]);} // 800DCC3C
  {uint32_t ea=c->r[3]+0x00000128u; WF32(ea,c->f[5]);} // 800DCC40
  {uint32_t ea=c->r[3]+0x0000012Cu; WF32(ea,c->f[6]);} // 800DCC44
  {uint32_t ea=c->r[3]+0x00000130u; WF32(ea,c->f[7]);} // 800DCC48
  {uint32_t ea=c->r[3]+0x00000134u; WF32(ea,c->f[8]);} // 800DCC4C
  W32(c->r[3]+0x00000060u,c->r[0]); // 800DCC50
  if (crb(c,2)) { goto L_800DCC60; } // 800DCC54
  c->r[0]=R32(c->r[4]+0x00000018u); // 800DCC58
  goto L_800DCC64; // 800DCC5C
L_800DCC60:;
  c->r[0]=0u+0x00000000u; // 800DCC60
L_800DCC64:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DCC64
  if (crb(c,2)) { goto L_800DCCB0; } // 800DCC68
  cmps(c,0,(int32_t)c->r[4],0); // 800DCC6C
  if (crb(c,2)) { goto L_800DCC7C; } // 800DCC70
  c->r[3]=R32(c->r[4]+0x00000018u); // 800DCC74
  goto L_800DCC80; // 800DCC78
L_800DCC7C:;
  c->r[3]=0u+0x00000000u; // 800DCC7C
L_800DCC80:;
  {uint32_t ea=c->r[31]+0x00000118u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DCC80
  {uint32_t ea=c->r[31]+0x0000011Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800DCC84
  {uint32_t ea=c->r[31]+0x00000120u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DCC88
  {uint32_t ea=c->r[31]+0x00000124u; c->f[4]=c->ps1[4]=RF32(ea);} // 800DCC8C
  {uint32_t ea=c->r[31]+0x00000128u; c->f[5]=c->ps1[5]=RF32(ea);} // 800DCC90
  {uint32_t ea=c->r[31]+0x0000012Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 800DCC94
  {uint32_t ea=c->r[31]+0x00000130u; c->f[7]=c->ps1[7]=RF32(ea);} // 800DCC98
  {uint32_t ea=c->r[31]+0x00000134u; c->f[8]=c->ps1[8]=RF32(ea);} // 800DCC9C
  c->lr=0x800DCCA4u; f_80186E70(c); // 800DCCA0
  cmps(c,0,(int32_t)c->r[3],0); // 800DCCA4
  if (crb(c,2)) { goto L_800DCCB0; } // 800DCCA8
  goto L_800DCCB4; // 800DCCAC
L_800DCCB0:;
  c->r[3]=0u+0x00000000u; // 800DCCB0
L_800DCCB4:;
  c->r[11]=c->r[1]+0x00000020u; // 800DCCB4
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 800DCCB8
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 800DCCBC
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,30,ea,0,0);} // 800DCCC0
  {uint32_t ea=c->r[1]+0x00000080u; c->f[30]=RF64(ea);} // 800DCCC4
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,29,ea,0,0);} // 800DCCC8
  {uint32_t ea=c->r[1]+0x00000070u; c->f[29]=RF64(ea);} // 800DCCCC
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,28,ea,0,0);} // 800DCCD0
  {uint32_t ea=c->r[1]+0x00000060u; c->f[28]=RF64(ea);} // 800DCCD4
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,27,ea,0,0);} // 800DCCD8
  {uint32_t ea=c->r[1]+0x00000050u; c->f[27]=RF64(ea);} // 800DCCDC
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,26,ea,0,0);} // 800DCCE0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[26]=RF64(ea);} // 800DCCE4
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,25,ea,0,0);} // 800DCCE8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[25]=RF64(ea);} // 800DCCEC
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,24,ea,0,0);} // 800DCCF0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[24]=RF64(ea);} // 800DCCF4
  c->lr=0x800DCCFCu; f_800C2E98(c); // 800DCCF8
  c->r[0]=R32(c->r[1]+0x000000A4u); // 800DCCFC
  c->lr=c->r[0]; // 800DCD00
  c->r[1]=c->r[1]+0x000000A0u; // 800DCD04
  return; // 800DCD08
}

// fn_800DCD10
void f_800DCD10(Ctx* __restrict c) {
  trace_call(0x800DCD10u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCD10
  c->r[0]=c->lr; // 800DCD14
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DCD18
  c->r[11]=c->r[1]+0x00000030u; // 800DCD1C
  c->lr=0x800DCD24u; f_800C2E44(c); // 800DCD20
  cmps(c,0,(int32_t)c->r[6],0); // 800DCD24
  c->r[31]=c->r[3]|c->r[3]; // 800DCD28
  c->r[28]=c->r[4]|c->r[4]; // 800DCD2C
  c->r[29]=c->r[5]|c->r[5]; // 800DCD30
  if (crb(c,2)) { goto L_800DCF14; } // 800DCD34
  c->r[3]=R32(c->r[3]+0x000000ACu); // 800DCD38
  cmps(c,0,(int32_t)c->r[3],0); // 800DCD3C
  if (crb(c,2)) { goto L_800DCD4C; } // 800DCD40
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DCD44
  goto L_800DCD50; // 800DCD48
L_800DCD4C:;
  c->r[0]=0u+0x00000000u; // 800DCD4C
L_800DCD50:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DCD50
  if (crb(c,2)) { goto L_800DCD6C; } // 800DCD54
  cmps(c,0,(int32_t)c->r[3],0); // 800DCD58
  if (crb(c,2)) { goto L_800DCD68; } // 800DCD5C
  c->r[31]=R32(c->r[3]+0x00000000u); // 800DCD60
  goto L_800DCD6C; // 800DCD64
L_800DCD68:;
  c->r[31]=0u+0x00000000u; // 800DCD68
L_800DCD6C:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000064u); // 800DCD6C
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 800DCD70
  if (crb(c,2)) { goto L_800DCE64; } // 800DCD74
  c->r[4]=R32(c->r[31]+0x00000028u); // 800DCD78
  c->r[3]=0u+0x00000000u; // 800DCD7C
  c->r[4]=R32(c->r[4]+0x00000030u); // 800DCD80
  c->r[4]=R32(c->r[4]+0x00000038u); // 800DCD84
  c->r[30]=R32(c->r[4]+0x00000008u); // 800DCD88
  c->r[26]=R32(c->r[4]+0x00000010u); // 800DCD8C
  c->ctr=c->r[30]; // 800DCD90
  cmps(c,0,(int32_t)c->r[30],0); // 800DCD94
  if (!crb(c,1)) { goto L_800DCDF0; } // 800DCD98
L_800DCD9C:;
  c->r[4]=R32(c->r[26]+c->r[3]); // 800DCD9C
  cmps(c,0,(int32_t)c->r[4],0); // 800DCDA0
  if (crb(c,2)) { goto L_800DCDE8; } // 800DCDA4
  c->r[5]=R32(c->r[4]+0x000000ACu); // 800DCDA8
  cmps(c,0,(int32_t)c->r[5],0); // 800DCDAC
  if (crb(c,2)) { goto L_800DCDBC; } // 800DCDB0
  c->r[0]=R32(c->r[5]+0x00000000u); // 800DCDB4
  goto L_800DCDC0; // 800DCDB8
L_800DCDBC:;
  c->r[0]=0u+0x00000000u; // 800DCDBC
L_800DCDC0:;
  cmpu(c,0,c->r[0],c->r[31]); // 800DCDC0
  if (!crb(c,2)) { goto L_800DCDE8; } // 800DCDC4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x00000064u); // 800DCDC8
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800DCDCC
  if (crb(c,2)) { goto L_800DCDE8; } // 800DCDD0
  c->r[0]=R32(c->r[4]+0x00000060u); // 800DCDD4
  c->r[0]=rotl(c->r[0],0)&0x00001000u; cr0(c,c->r[0]); // 800DCDD8
  if (crb(c,2)) { goto L_800DCDE8; } // 800DCDDC
  c->r[3]=0u+0x00000050u; // 800DCDE0
  goto L_800DCF40; // 800DCDE4
L_800DCDE8:;
  c->r[3]=c->r[3]+0x00000004u; // 800DCDE8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800DCD9C; } // 800DCDEC
L_800DCDF0:;
  c->r[25]=0u+0x00000000u; // 800DCDF0
  c->r[27]=0u+0x00000000u; // 800DCDF4
  goto L_800DCE58; // 800DCDF8
L_800DCDFC:;
  c->r[3]=R32(c->r[26]+c->r[27]); // 800DCDFC
  cmps(c,0,(int32_t)c->r[3],0); // 800DCE00
  if (crb(c,2)) { goto L_800DCE50; } // 800DCE04
  c->r[4]=R32(c->r[3]+0x000000ACu); // 800DCE08
  cmps(c,0,(int32_t)c->r[4],0); // 800DCE0C
  if (crb(c,2)) { goto L_800DCE1C; } // 800DCE10
  c->r[0]=R32(c->r[4]+0x00000000u); // 800DCE14
  goto L_800DCE20; // 800DCE18
L_800DCE1C:;
  c->r[0]=0u+0x00000000u; // 800DCE1C
L_800DCE20:;
  cmpu(c,0,c->r[0],c->r[31]); // 800DCE20
  if (!crb(c,2)) { goto L_800DCE50; } // 800DCE24
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000064u); // 800DCE28
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800DCE2C
  if (crb(c,2)) { goto L_800DCE50; } // 800DCE30
  c->r[4]=c->r[28]|c->r[28]; // 800DCE34
  c->r[5]=c->r[29]|c->r[29]; // 800DCE38
  c->r[6]=0u+0x00000000u; // 800DCE3C
  c->lr=0x800DCE44u; f_800DCD10(c); // 800DCE40
  cmps(c,0,(int32_t)c->r[3],0); // 800DCE44
  if (crb(c,2)) { goto L_800DCE50; } // 800DCE48
  goto L_800DCF40; // 800DCE4C
L_800DCE50:;
  c->r[25]=c->r[25]+0x00000001u; // 800DCE50
  c->r[27]=c->r[27]+0x00000004u; // 800DCE54
L_800DCE58:;
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[30]); // 800DCE58
  if (crb(c,0)) { IRQCHK(c); goto L_800DCDFC; } // 800DCE5C
  goto L_800DCF08; // 800DCE60
L_800DCE64:;
  c->r[4]=R32(c->r[31]+0x000000A8u); // 800DCE64
  c->r[3]=0u+0x00000000u; // 800DCE68
  c->r[0]=R32(c->r[4]+0x00000000u); // 800DCE6C
  c->ctr=c->r[0]; // 800DCE70
  cmps(c,0,(int32_t)c->r[0],0); // 800DCE74
  if (!crb(c,1)) { goto L_800DCEB0; } // 800DCE78
L_800DCE7C:;
  c->r[5]=R32(c->r[4]+0x00000004u); // 800DCE7C
  cmps(c,0,(int32_t)c->r[5],0); // 800DCE80
  if (crb(c,2)) { goto L_800DCEA8; } // 800DCE84
  c->r[5]=R32(c->r[5]+c->r[3]); // 800DCE88
  cmps(c,0,(int32_t)c->r[5],0); // 800DCE8C
  if (crb(c,2)) { goto L_800DCEA8; } // 800DCE90
  c->r[0]=R32(c->r[5]+0x00000060u); // 800DCE94
  c->r[0]=rotl(c->r[0],0)&0x00001000u; cr0(c,c->r[0]); // 800DCE98
  if (crb(c,2)) { goto L_800DCEA8; } // 800DCE9C
  c->r[3]=0u+0x00000050u; // 800DCEA0
  goto L_800DCF40; // 800DCEA4
L_800DCEA8:;
  c->r[3]=c->r[3]+0x00000004u; // 800DCEA8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800DCE7C; } // 800DCEAC
L_800DCEB0:;
  c->r[25]=0u+0x00000000u; // 800DCEB0
  c->r[30]=0u+0x00000000u; // 800DCEB4
  goto L_800DCEF8; // 800DCEB8
L_800DCEBC:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 800DCEBC
  cmps(c,0,(int32_t)c->r[3],0); // 800DCEC0
  if (crb(c,2)) { goto L_800DCEF0; } // 800DCEC4
  c->r[3]=R32(c->r[3]+c->r[30]); // 800DCEC8
  cmps(c,0,(int32_t)c->r[3],0); // 800DCECC
  if (crb(c,2)) { goto L_800DCEF0; } // 800DCED0
  c->r[4]=c->r[28]|c->r[28]; // 800DCED4
  c->r[5]=c->r[29]|c->r[29]; // 800DCED8
  c->r[6]=0u+0x00000000u; // 800DCEDC
  c->lr=0x800DCEE4u; f_800DCD10(c); // 800DCEE0
  cmps(c,0,(int32_t)c->r[3],0); // 800DCEE4
  if (crb(c,2)) { goto L_800DCEF0; } // 800DCEE8
  goto L_800DCF40; // 800DCEEC
L_800DCEF0:;
  c->r[25]=c->r[25]+0x00000001u; // 800DCEF0
  c->r[30]=c->r[30]+0x00000004u; // 800DCEF4
L_800DCEF8:;
  c->r[3]=R32(c->r[31]+0x000000A8u); // 800DCEF8
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DCEFC
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 800DCF00
  if (crb(c,0)) { IRQCHK(c); goto L_800DCEBC; } // 800DCF04
L_800DCF08:;
  W16(c->r[31]+0x000000A4u,c->r[28]); // 800DCF08
  W16(c->r[31]+0x000000A6u,c->r[29]); // 800DCF0C
  goto L_800DCF3C; // 800DCF10
L_800DCF14:;
  c->r[0]=R32(c->r[3]+0x00000060u); // 800DCF14
  c->r[0]=rotl(c->r[0],0)&0x00001000u; cr0(c,c->r[0]); // 800DCF18
  if (crb(c,2)) { goto L_800DCF28; } // 800DCF1C
  c->r[3]=0u+0x00000050u; // 800DCF20
  goto L_800DCF40; // 800DCF24
L_800DCF28:;
  W16(c->r[3]+0x000000A4u,c->r[4]); // 800DCF28
  c->r[0]=0u+0x00000000u; // 800DCF2C
  c->r[4]=R32(c->r[3]+0x000000ACu); // 800DCF30
  W16(c->r[3]+0x000000A6u,c->r[5]); // 800DCF34
  W16(c->r[4]+0x0000001Cu,c->r[0]); // 800DCF38
L_800DCF3C:;
  c->r[3]=0u+0x00000000u; // 800DCF3C
L_800DCF40:;
  c->r[11]=c->r[1]+0x00000030u; // 800DCF40
  c->lr=0x800DCF48u; f_800C2E90(c); // 800DCF44
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DCF48
  c->lr=c->r[0]; // 800DCF4C
  c->r[1]=c->r[1]+0x00000030u; // 800DCF50
  return; // 800DCF54
}

// fn_800DCF60
void f_800DCF60(Ctx* __restrict c) {
  trace_call(0x800DCF60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DCF60
  c->r[0]=c->lr; // 800DCF64
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DCF68
  {uint32_t ea=c->r[3]+0x00000108u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DCF6C
  fcmp(c,0,c->f[1],c->f[0]); // 800DCF70
  if (!crb(c,2)) { goto L_800DCF94; } // 800DCF74
  {uint32_t ea=c->r[3]+0x0000010Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DCF78
  fcmp(c,0,c->f[2],c->f[0]); // 800DCF7C
  if (!crb(c,2)) { goto L_800DCF94; } // 800DCF80
  cmps(c,0,(int32_t)c->r[4],0); // 800DCF84
  if (!crb(c,2)) { goto L_800DCF94; } // 800DCF88
  c->r[3]=0u+0x00000000u; // 800DCF8C
  goto L_800DD05C; // 800DCF90
L_800DCF94:;
  {uint32_t ea=c->r[2]+0xFFFF9E4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DCF94
  fcmp(c,0,c->f[1],c->f[0]); // 800DCF98
  if (!crb(c,0)) { goto L_800DCFA4; } // 800DCF9C
  c->f[0]=c->f[1]; // 800DCFA0
L_800DCFA4:;
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DCFA4
  fcmp(c,0,c->f[3],c->f[0]); // 800DCFA8
  if (!crb(c,1)) { goto L_800DCFB4; } // 800DCFAC
  goto L_800DCFCC; // 800DCFB0
L_800DCFB4:;
  {uint32_t ea=c->r[2]+0xFFFF9E4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DCFB4
  fcmp(c,0,c->f[1],c->f[0]); // 800DCFB8
  if (!crb(c,0)) { goto L_800DCFC4; } // 800DCFBC
  goto L_800DCFC8; // 800DCFC0
L_800DCFC4:;
  c->f[1]=c->f[0]; // 800DCFC4
L_800DCFC8:;
  c->f[3]=c->f[1]; // 800DCFC8
L_800DCFCC:;
  {uint32_t ea=c->r[2]+0xFFFF9E4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DCFCC
  fcmp(c,0,c->f[2],c->f[0]); // 800DCFD0
  if (!crb(c,0)) { goto L_800DCFDC; } // 800DCFD4
  c->f[0]=c->f[2]; // 800DCFD8
L_800DCFDC:;
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DCFDC
  fcmp(c,0,c->f[1],c->f[0]); // 800DCFE0
  if (!crb(c,1)) { goto L_800DCFEC; } // 800DCFE4
  goto L_800DD004; // 800DCFE8
L_800DCFEC:;
  {uint32_t ea=c->r[2]+0xFFFF9E4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DCFEC
  fcmp(c,0,c->f[2],c->f[0]); // 800DCFF0
  if (!crb(c,0)) { goto L_800DCFFC; } // 800DCFF4
  goto L_800DD000; // 800DCFF8
L_800DCFFC:;
  c->f[2]=c->f[0]; // 800DCFFC
L_800DD000:;
  c->f[1]=c->f[2]; // 800DD000
L_800DD004:;
  c->r[4]=R32(c->r[3]+0x000000ACu); // 800DD004
  {uint32_t ea=c->r[3]+0x00000108u; WF32(ea,c->f[3]);} // 800DD008
  cmps(c,0,(int32_t)c->r[4],0); // 800DD00C
  {uint32_t ea=c->r[3]+0x0000010Cu; WF32(ea,c->f[1]);} // 800DD010
  if (crb(c,2)) { goto L_800DD020; } // 800DD014
  c->r[0]=R32(c->r[4]+0x00000018u); // 800DD018
  goto L_800DD024; // 800DD01C
L_800DD020:;
  c->r[0]=0u+0x00000000u; // 800DD020
L_800DD024:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DD024
  if (crb(c,2)) { goto L_800DD058; } // 800DD028
  cmps(c,0,(int32_t)c->r[4],0); // 800DD02C
  {uint32_t ea=c->r[3]+0x0000010Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800DD030
  {uint32_t ea=c->r[3]+0x00000108u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DD034
  if (crb(c,2)) { goto L_800DD044; } // 800DD038
  c->r[3]=R32(c->r[4]+0x00000018u); // 800DD03C
  goto L_800DD048; // 800DD040
L_800DD044:;
  c->r[3]=0u+0x00000000u; // 800DD044
L_800DD048:;
  c->lr=0x800DD04Cu; f_80186D20(c); // 800DD048
  cmps(c,0,(int32_t)c->r[3],0); // 800DD04C
  if (crb(c,2)) { goto L_800DD058; } // 800DD050
  goto L_800DD05C; // 800DD054
L_800DD058:;
  c->r[3]=0u+0x00000000u; // 800DD058
L_800DD05C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DD05C
  c->lr=c->r[0]; // 800DD060
  c->r[1]=c->r[1]+0x00000010u; // 800DD064
  return; // 800DD068
}

// fn_800DD070
void f_800DD070(Ctx* __restrict c) {
  trace_call(0x800DD070u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD070
  c->r[0]=c->lr; // 800DD074
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DD078
  c->r[11]=c->r[1]+0x00000020u; // 800DD07C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800DD080
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800DD084
  c->lr=0x800DD08Cu; f_800C2E4C(c); // 800DD088
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DD08C
  c->f[31]=c->f[1]; // 800DD090
  c->r[29]=c->r[3]|c->r[3]; // 800DD094
  fcmp(c,0,c->f[1],c->f[0]); // 800DD098
  if (!crb(c,0)) { goto L_800DD0A4; } // 800DD09C
  c->f[31]=c->f[0]; // 800DD0A0
L_800DD0A4:;
  cmps(c,0,(int32_t)c->r[4],0); // 800DD0A4
  if (crb(c,2)) { goto L_800DD1CC; } // 800DD0A8
  c->r[3]=R32(c->r[3]+0x000000ACu); // 800DD0AC
  cmps(c,0,(int32_t)c->r[3],0); // 800DD0B0
  if (crb(c,2)) { goto L_800DD0C0; } // 800DD0B4
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DD0B8
  goto L_800DD0C4; // 800DD0BC
L_800DD0C0:;
  c->r[0]=0u+0x00000000u; // 800DD0C0
L_800DD0C4:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DD0C4
  if (crb(c,2)) { goto L_800DD0E0; } // 800DD0C8
  cmps(c,0,(int32_t)c->r[3],0); // 800DD0CC
  if (crb(c,2)) { goto L_800DD0DC; } // 800DD0D0
  c->r[29]=R32(c->r[3]+0x00000000u); // 800DD0D4
  goto L_800DD0E0; // 800DD0D8
L_800DD0DC:;
  c->r[29]=0u+0x00000000u; // 800DD0DC
L_800DD0E0:;
  {uint32_t ea=c->r[29]+0x00000094u; WF32(ea,c->f[31]);} // 800DD0E0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000064u); // 800DD0E4
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 800DD0E8
  if (crb(c,2)) { goto L_800DD174; } // 800DD0EC
  c->r[3]=R32(c->r[29]+0x00000028u); // 800DD0F0
  c->r[27]=0u+0x00000000u; // 800DD0F4
  c->r[31]=0u+0x00000000u; // 800DD0F8
  c->r[3]=R32(c->r[3]+0x00000030u); // 800DD0FC
  c->r[3]=R32(c->r[3]+0x00000038u); // 800DD100
  c->r[28]=R32(c->r[3]+0x00000008u); // 800DD104
  c->r[30]=R32(c->r[3]+0x00000010u); // 800DD108
  goto L_800DD168; // 800DD10C
L_800DD110:;
  c->r[3]=R32(c->r[30]+c->r[31]); // 800DD110
  cmps(c,0,(int32_t)c->r[3],0); // 800DD114
  if (crb(c,2)) { goto L_800DD160; } // 800DD118
  c->r[4]=R32(c->r[3]+0x000000ACu); // 800DD11C
  cmps(c,0,(int32_t)c->r[4],0); // 800DD120
  if (crb(c,2)) { goto L_800DD130; } // 800DD124
  c->r[0]=R32(c->r[4]+0x00000000u); // 800DD128
  goto L_800DD134; // 800DD12C
L_800DD130:;
  c->r[0]=0u+0x00000000u; // 800DD130
L_800DD134:;
  cmpu(c,0,c->r[0],c->r[29]); // 800DD134
  if (!crb(c,2)) { goto L_800DD160; } // 800DD138
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000064u); // 800DD13C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800DD140
  if (crb(c,2)) { goto L_800DD160; } // 800DD144
  c->f[1]=c->f[31]; // 800DD148
  c->r[4]=0u+0x00000000u; // 800DD14C
  c->lr=0x800DD154u; f_800DD070(c); // 800DD150
  cmps(c,0,(int32_t)c->r[3],0); // 800DD154
  if (crb(c,2)) { goto L_800DD160; } // 800DD158
  goto L_800DD1D4; // 800DD15C
L_800DD160:;
  c->r[27]=c->r[27]+0x00000001u; // 800DD160
  c->r[31]=c->r[31]+0x00000004u; // 800DD164
L_800DD168:;
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[28]); // 800DD168
  if (crb(c,0)) { IRQCHK(c); goto L_800DD110; } // 800DD16C
  goto L_800DD1D0; // 800DD170
L_800DD174:;
  c->r[27]=0u+0x00000000u; // 800DD174
  c->r[31]=0u+0x00000000u; // 800DD178
  goto L_800DD1B8; // 800DD17C
L_800DD180:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 800DD180
  cmps(c,0,(int32_t)c->r[3],0); // 800DD184
  if (crb(c,2)) { goto L_800DD1B0; } // 800DD188
  c->r[3]=R32(c->r[3]+c->r[31]); // 800DD18C
  cmps(c,0,(int32_t)c->r[3],0); // 800DD190
  if (crb(c,2)) { goto L_800DD1B0; } // 800DD194
  c->f[1]=c->f[31]; // 800DD198
  c->r[4]=0u+0x00000000u; // 800DD19C
  c->lr=0x800DD1A4u; f_800DD070(c); // 800DD1A0
  cmps(c,0,(int32_t)c->r[3],0); // 800DD1A4
  if (crb(c,2)) { goto L_800DD1B0; } // 800DD1A8
  goto L_800DD1D4; // 800DD1AC
L_800DD1B0:;
  c->r[27]=c->r[27]+0x00000001u; // 800DD1B0
  c->r[31]=c->r[31]+0x00000004u; // 800DD1B4
L_800DD1B8:;
  c->r[3]=R32(c->r[29]+0x000000A8u); // 800DD1B8
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DD1BC
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800DD1C0
  if (crb(c,0)) { IRQCHK(c); goto L_800DD180; } // 800DD1C4
  goto L_800DD1D0; // 800DD1C8
L_800DD1CC:;
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[31]);} // 800DD1CC
L_800DD1D0:;
  c->r[3]=0u+0x00000000u; // 800DD1D0
L_800DD1D4:;
  c->r[11]=c->r[1]+0x00000020u; // 800DD1D4
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800DD1D8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800DD1DC
  c->lr=0x800DD1E4u; f_800C2E98(c); // 800DD1E0
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DD1E4
  c->lr=c->r[0]; // 800DD1E8
  c->r[1]=c->r[1]+0x00000030u; // 800DD1EC
  return; // 800DD1F0
}

// fn_800DD200
void f_800DD200(Ctx* __restrict c) {
  trace_call(0x800DD200u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD200
  c->r[0]=c->lr; // 800DD204
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DD208
  c->r[11]=c->r[1]+0x00000020u; // 800DD20C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800DD210
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800DD214
  c->lr=0x800DD21Cu; f_800C2E4C(c); // 800DD218
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DD21C
  c->f[31]=c->f[1]; // 800DD220
  c->r[31]=c->r[3]|c->r[3]; // 800DD224
  fcmp(c,0,c->f[1],c->f[0]); // 800DD228
  if (!crb(c,0)) { goto L_800DD234; } // 800DD22C
  c->f[31]=c->f[0]; // 800DD230
L_800DD234:;
  cmps(c,0,(int32_t)c->r[4],0); // 800DD234
  if (crb(c,2)) { goto L_800DD374; } // 800DD238
  c->r[3]=R32(c->r[3]+0x000000ACu); // 800DD23C
  cmps(c,0,(int32_t)c->r[3],0); // 800DD240
  if (crb(c,2)) { goto L_800DD250; } // 800DD244
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DD248
  goto L_800DD254; // 800DD24C
L_800DD250:;
  c->r[0]=0u+0x00000000u; // 800DD250
L_800DD254:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DD254
  if (crb(c,2)) { goto L_800DD270; } // 800DD258
  cmps(c,0,(int32_t)c->r[3],0); // 800DD25C
  if (crb(c,2)) { goto L_800DD26C; } // 800DD260
  c->r[31]=R32(c->r[3]+0x00000000u); // 800DD264
  goto L_800DD270; // 800DD268
L_800DD26C:;
  c->r[31]=0u+0x00000000u; // 800DD26C
L_800DD270:;
  c->f[1]=c->f[31]; // 800DD270
  c->r[3]=c->r[31]|c->r[31]; // 800DD274
  c->r[4]=0u+0x00000000u; // 800DD278
  c->lr=0x800DD280u; f_800DD200(c); // 800DD27C
  cmps(c,0,(int32_t)c->r[3],0); // 800DD280
  if (crb(c,2)) { goto L_800DD28C; } // 800DD284
  goto L_800DD388; // 800DD288
L_800DD28C:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000064u); // 800DD28C
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 800DD290
  if (crb(c,2)) { goto L_800DD31C; } // 800DD294
  c->r[3]=R32(c->r[31]+0x00000028u); // 800DD298
  c->r[27]=0u+0x00000000u; // 800DD29C
  c->r[30]=0u+0x00000000u; // 800DD2A0
  c->r[3]=R32(c->r[3]+0x00000030u); // 800DD2A4
  c->r[3]=R32(c->r[3]+0x00000038u); // 800DD2A8
  c->r[28]=R32(c->r[3]+0x00000008u); // 800DD2AC
  c->r[29]=R32(c->r[3]+0x00000010u); // 800DD2B0
  goto L_800DD310; // 800DD2B4
L_800DD2B8:;
  c->r[3]=R32(c->r[29]+c->r[30]); // 800DD2B8
  cmps(c,0,(int32_t)c->r[3],0); // 800DD2BC
  if (crb(c,2)) { goto L_800DD308; } // 800DD2C0
  c->r[4]=R32(c->r[3]+0x000000ACu); // 800DD2C4
  cmps(c,0,(int32_t)c->r[4],0); // 800DD2C8
  if (crb(c,2)) { goto L_800DD2D8; } // 800DD2CC
  c->r[0]=R32(c->r[4]+0x00000000u); // 800DD2D0
  goto L_800DD2DC; // 800DD2D4
L_800DD2D8:;
  c->r[0]=0u+0x00000000u; // 800DD2D8
L_800DD2DC:;
  cmpu(c,0,c->r[0],c->r[31]); // 800DD2DC
  if (!crb(c,2)) { goto L_800DD308; } // 800DD2E0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000064u); // 800DD2E4
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800DD2E8
  if (crb(c,2)) { goto L_800DD308; } // 800DD2EC
  c->f[1]=c->f[31]; // 800DD2F0
  c->r[4]=0u+0x00000000u; // 800DD2F4
  c->lr=0x800DD2FCu; f_800DD200(c); // 800DD2F8
  cmps(c,0,(int32_t)c->r[3],0); // 800DD2FC
  if (crb(c,2)) { goto L_800DD308; } // 800DD300
  goto L_800DD388; // 800DD304
L_800DD308:;
  c->r[27]=c->r[27]+0x00000001u; // 800DD308
  c->r[30]=c->r[30]+0x00000004u; // 800DD30C
L_800DD310:;
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[28]); // 800DD310
  if (crb(c,0)) { IRQCHK(c); goto L_800DD2B8; } // 800DD314
  goto L_800DD384; // 800DD318
L_800DD31C:;
  c->r[27]=0u+0x00000000u; // 800DD31C
  c->r[30]=0u+0x00000000u; // 800DD320
  goto L_800DD360; // 800DD324
L_800DD328:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 800DD328
  cmps(c,0,(int32_t)c->r[3],0); // 800DD32C
  if (crb(c,2)) { goto L_800DD358; } // 800DD330
  c->r[3]=R32(c->r[3]+c->r[30]); // 800DD334
  cmps(c,0,(int32_t)c->r[3],0); // 800DD338
  if (crb(c,2)) { goto L_800DD358; } // 800DD33C
  c->f[1]=c->f[31]; // 800DD340
  c->r[4]=0u+0x00000000u; // 800DD344
  c->lr=0x800DD34Cu; f_800DD200(c); // 800DD348
  cmps(c,0,(int32_t)c->r[3],0); // 800DD34C
  if (crb(c,2)) { goto L_800DD358; } // 800DD350
  goto L_800DD388; // 800DD354
L_800DD358:;
  c->r[27]=c->r[27]+0x00000001u; // 800DD358
  c->r[30]=c->r[30]+0x00000004u; // 800DD35C
L_800DD360:;
  c->r[3]=R32(c->r[31]+0x000000A8u); // 800DD360
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DD364
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800DD368
  if (crb(c,0)) { IRQCHK(c); goto L_800DD328; } // 800DD36C
  goto L_800DD384; // 800DD370
L_800DD374:;
  {uint32_t ea=c->r[3]+0x00000098u; WF32(ea,c->f[31]);} // 800DD374
  c->r[3]=c->r[31]|c->r[31]; // 800DD378
  c->lr=0x800DD380u; f_800DE190(c); // 800DD37C
  {uint32_t ea=c->r[31]+0x000000A0u; WF32(ea,c->f[1]);} // 800DD380
L_800DD384:;
  c->r[3]=0u+0x00000000u; // 800DD384
L_800DD388:;
  c->r[11]=c->r[1]+0x00000020u; // 800DD388
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800DD38C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800DD390
  c->lr=0x800DD398u; f_800C2E98(c); // 800DD394
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DD398
  c->lr=c->r[0]; // 800DD39C
  c->r[1]=c->r[1]+0x00000030u; // 800DD3A0
  return; // 800DD3A4
}

// fn_800DD3B0
void f_800DD3B0(Ctx* __restrict c) {
  trace_call(0x800DD3B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD3B0
  c->r[0]=c->lr; // 800DD3B4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DD3B8
  c->r[11]=c->r[1]+0x00000020u; // 800DD3BC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800DD3C0
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800DD3C4
  c->lr=0x800DD3CCu; f_800C2E4C(c); // 800DD3C8
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DD3CC
  c->f[31]=c->f[1]; // 800DD3D0
  c->r[29]=c->r[3]|c->r[3]; // 800DD3D4
  fcmp(c,0,c->f[1],c->f[0]); // 800DD3D8
  if (!crb(c,0)) { goto L_800DD3E4; } // 800DD3DC
  c->f[31]=c->f[0]; // 800DD3E0
L_800DD3E4:;
  cmps(c,0,(int32_t)c->r[4],0); // 800DD3E4
  if (crb(c,2)) { goto L_800DD50C; } // 800DD3E8
  c->r[3]=R32(c->r[3]+0x000000ACu); // 800DD3EC
  cmps(c,0,(int32_t)c->r[3],0); // 800DD3F0
  if (crb(c,2)) { goto L_800DD400; } // 800DD3F4
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DD3F8
  goto L_800DD404; // 800DD3FC
L_800DD400:;
  c->r[0]=0u+0x00000000u; // 800DD400
L_800DD404:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DD404
  if (crb(c,2)) { goto L_800DD420; } // 800DD408
  cmps(c,0,(int32_t)c->r[3],0); // 800DD40C
  if (crb(c,2)) { goto L_800DD41C; } // 800DD410
  c->r[29]=R32(c->r[3]+0x00000000u); // 800DD414
  goto L_800DD420; // 800DD418
L_800DD41C:;
  c->r[29]=0u+0x00000000u; // 800DD41C
L_800DD420:;
  {uint32_t ea=c->r[29]+0x0000009Cu; WF32(ea,c->f[31]);} // 800DD420
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000064u); // 800DD424
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 800DD428
  if (crb(c,2)) { goto L_800DD4B4; } // 800DD42C
  c->r[3]=R32(c->r[29]+0x00000028u); // 800DD430
  c->r[27]=0u+0x00000000u; // 800DD434
  c->r[31]=0u+0x00000000u; // 800DD438
  c->r[3]=R32(c->r[3]+0x00000030u); // 800DD43C
  c->r[3]=R32(c->r[3]+0x00000038u); // 800DD440
  c->r[28]=R32(c->r[3]+0x00000008u); // 800DD444
  c->r[30]=R32(c->r[3]+0x00000010u); // 800DD448
  goto L_800DD4A8; // 800DD44C
L_800DD450:;
  c->r[3]=R32(c->r[30]+c->r[31]); // 800DD450
  cmps(c,0,(int32_t)c->r[3],0); // 800DD454
  if (crb(c,2)) { goto L_800DD4A0; } // 800DD458
  c->r[4]=R32(c->r[3]+0x000000ACu); // 800DD45C
  cmps(c,0,(int32_t)c->r[4],0); // 800DD460
  if (crb(c,2)) { goto L_800DD470; } // 800DD464
  c->r[0]=R32(c->r[4]+0x00000000u); // 800DD468
  goto L_800DD474; // 800DD46C
L_800DD470:;
  c->r[0]=0u+0x00000000u; // 800DD470
L_800DD474:;
  cmpu(c,0,c->r[0],c->r[29]); // 800DD474
  if (!crb(c,2)) { goto L_800DD4A0; } // 800DD478
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000064u); // 800DD47C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800DD480
  if (crb(c,2)) { goto L_800DD4A0; } // 800DD484
  c->f[1]=c->f[31]; // 800DD488
  c->r[4]=0u+0x00000000u; // 800DD48C
  c->lr=0x800DD494u; f_800DD3B0(c); // 800DD490
  cmps(c,0,(int32_t)c->r[3],0); // 800DD494
  if (crb(c,2)) { goto L_800DD4A0; } // 800DD498
  goto L_800DD514; // 800DD49C
L_800DD4A0:;
  c->r[27]=c->r[27]+0x00000001u; // 800DD4A0
  c->r[31]=c->r[31]+0x00000004u; // 800DD4A4
L_800DD4A8:;
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[28]); // 800DD4A8
  if (crb(c,0)) { IRQCHK(c); goto L_800DD450; } // 800DD4AC
  goto L_800DD510; // 800DD4B0
L_800DD4B4:;
  c->r[27]=0u+0x00000000u; // 800DD4B4
  c->r[31]=0u+0x00000000u; // 800DD4B8
  goto L_800DD4F8; // 800DD4BC
L_800DD4C0:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 800DD4C0
  cmps(c,0,(int32_t)c->r[3],0); // 800DD4C4
  if (crb(c,2)) { goto L_800DD4F0; } // 800DD4C8
  c->r[3]=R32(c->r[3]+c->r[31]); // 800DD4CC
  cmps(c,0,(int32_t)c->r[3],0); // 800DD4D0
  if (crb(c,2)) { goto L_800DD4F0; } // 800DD4D4
  c->f[1]=c->f[31]; // 800DD4D8
  c->r[4]=0u+0x00000000u; // 800DD4DC
  c->lr=0x800DD4E4u; f_800DD3B0(c); // 800DD4E0
  cmps(c,0,(int32_t)c->r[3],0); // 800DD4E4
  if (crb(c,2)) { goto L_800DD4F0; } // 800DD4E8
  goto L_800DD514; // 800DD4EC
L_800DD4F0:;
  c->r[27]=c->r[27]+0x00000001u; // 800DD4F0
  c->r[31]=c->r[31]+0x00000004u; // 800DD4F4
L_800DD4F8:;
  c->r[3]=R32(c->r[29]+0x000000A8u); // 800DD4F8
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DD4FC
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800DD500
  if (crb(c,0)) { IRQCHK(c); goto L_800DD4C0; } // 800DD504
  goto L_800DD510; // 800DD508
L_800DD50C:;
  {uint32_t ea=c->r[3]+0x0000009Cu; WF32(ea,c->f[31]);} // 800DD50C
L_800DD510:;
  c->r[3]=0u+0x00000000u; // 800DD510
L_800DD514:;
  c->r[11]=c->r[1]+0x00000020u; // 800DD514
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800DD518
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800DD51C
  c->lr=0x800DD524u; f_800C2E98(c); // 800DD520
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DD524
  c->lr=c->r[0]; // 800DD528
  c->r[1]=c->r[1]+0x00000030u; // 800DD52C
  return; // 800DD530
}

// fn_800DD540
void f_800DD540(Ctx* __restrict c) {
  trace_call(0x800DD540u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD540
  c->r[0]=c->lr; // 800DD544
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DD548
  c->r[11]=c->r[1]+0x00000020u; // 800DD54C
  c->lr=0x800DD554u; f_800C2E48(c); // 800DD550
  cmps(c,0,(int32_t)c->r[5],0); // 800DD554
  c->r[31]=c->r[3]|c->r[3]; // 800DD558
  c->r[30]=c->r[4]|c->r[4]; // 800DD55C
  if (crb(c,2)) { goto L_800DD6BC; } // 800DD560
  c->r[3]=R32(c->r[3]+0x000000ACu); // 800DD564
  cmps(c,0,(int32_t)c->r[3],0); // 800DD568
  if (crb(c,2)) { goto L_800DD578; } // 800DD56C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DD570
  goto L_800DD57C; // 800DD574
L_800DD578:;
  c->r[0]=0u+0x00000000u; // 800DD578
L_800DD57C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DD57C
  if (crb(c,2)) { goto L_800DD598; } // 800DD580
  cmps(c,0,(int32_t)c->r[3],0); // 800DD584
  if (crb(c,2)) { goto L_800DD594; } // 800DD588
  c->r[31]=R32(c->r[3]+0x00000000u); // 800DD58C
  goto L_800DD598; // 800DD590
L_800DD594:;
  c->r[31]=0u+0x00000000u; // 800DD594
L_800DD598:;
  cmps(c,0,(int32_t)c->r[4],0); // 800DD598
  if (!crb(c,2)) { goto L_800DD5B8; } // 800DD59C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000064u); // 800DD5A0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800DD5A4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 800DD5A8
  c->r[0]=rotl(c->r[0],0)&0xFFFFE0FFu; // 800DD5AC
  W16(c->r[31]+0x00000064u,c->r[0]); // 800DD5B0
  goto L_800DD5D4; // 800DD5B4
L_800DD5B8:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000064u); // 800DD5B8
  c->r[3]=rotl(c->r[4],8)&0xFFFFFF00u; // 800DD5BC
  c->r[0]=c->r[0]|0x00000001u; // 800DD5C0
  c->r[0]=rotl(c->r[0],0)&0xFFFFE0FFu; // 800DD5C4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 800DD5C8
  c->r[0]=c->r[3]|c->r[0]; // 800DD5CC
  W16(c->r[31]+0x00000064u,c->r[0]); // 800DD5D0
L_800DD5D4:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000064u); // 800DD5D4
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 800DD5D8
  if (crb(c,2)) { goto L_800DD664; } // 800DD5DC
  c->r[3]=R32(c->r[31]+0x00000028u); // 800DD5E0
  c->r[26]=0u+0x00000000u; // 800DD5E4
  c->r[29]=0u+0x00000000u; // 800DD5E8
  c->r[3]=R32(c->r[3]+0x00000030u); // 800DD5EC
  c->r[3]=R32(c->r[3]+0x00000038u); // 800DD5F0
  c->r[27]=R32(c->r[3]+0x00000008u); // 800DD5F4
  c->r[28]=R32(c->r[3]+0x00000010u); // 800DD5F8
  goto L_800DD658; // 800DD5FC
L_800DD600:;
  c->r[3]=R32(c->r[28]+c->r[29]); // 800DD600
  cmps(c,0,(int32_t)c->r[3],0); // 800DD604
  if (crb(c,2)) { goto L_800DD650; } // 800DD608
  c->r[4]=R32(c->r[3]+0x000000ACu); // 800DD60C
  cmps(c,0,(int32_t)c->r[4],0); // 800DD610
  if (crb(c,2)) { goto L_800DD620; } // 800DD614
  c->r[0]=R32(c->r[4]+0x00000000u); // 800DD618
  goto L_800DD624; // 800DD61C
L_800DD620:;
  c->r[0]=0u+0x00000000u; // 800DD620
L_800DD624:;
  cmpu(c,0,c->r[0],c->r[31]); // 800DD624
  if (!crb(c,2)) { goto L_800DD650; } // 800DD628
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000064u); // 800DD62C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800DD630
  if (crb(c,2)) { goto L_800DD650; } // 800DD634
  c->r[4]=c->r[30]|c->r[30]; // 800DD638
  c->r[5]=0u+0x00000000u; // 800DD63C
  c->lr=0x800DD644u; f_800DD540(c); // 800DD640
  cmps(c,0,(int32_t)c->r[3],0); // 800DD644
  if (crb(c,2)) { goto L_800DD650; } // 800DD648
  goto L_800DD700; // 800DD64C
L_800DD650:;
  c->r[26]=c->r[26]+0x00000001u; // 800DD650
  c->r[29]=c->r[29]+0x00000004u; // 800DD654
L_800DD658:;
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[27]); // 800DD658
  if (crb(c,0)) { IRQCHK(c); goto L_800DD600; } // 800DD65C
  goto L_800DD6FC; // 800DD660
L_800DD664:;
  c->r[26]=0u+0x00000000u; // 800DD664
  c->r[29]=0u+0x00000000u; // 800DD668
  goto L_800DD6A8; // 800DD66C
L_800DD670:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 800DD670
  cmps(c,0,(int32_t)c->r[3],0); // 800DD674
  if (crb(c,2)) { goto L_800DD6A0; } // 800DD678
  c->r[3]=R32(c->r[3]+c->r[29]); // 800DD67C
  cmps(c,0,(int32_t)c->r[3],0); // 800DD680
  if (crb(c,2)) { goto L_800DD6A0; } // 800DD684
  c->r[4]=c->r[30]|c->r[30]; // 800DD688
  c->r[5]=0u+0x00000000u; // 800DD68C
  c->lr=0x800DD694u; f_800DD540(c); // 800DD690
  cmps(c,0,(int32_t)c->r[3],0); // 800DD694
  if (crb(c,2)) { goto L_800DD6A0; } // 800DD698
  goto L_800DD700; // 800DD69C
L_800DD6A0:;
  c->r[26]=c->r[26]+0x00000001u; // 800DD6A0
  c->r[29]=c->r[29]+0x00000004u; // 800DD6A4
L_800DD6A8:;
  c->r[3]=R32(c->r[31]+0x000000A8u); // 800DD6A8
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DD6AC
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 800DD6B0
  if (crb(c,0)) { IRQCHK(c); goto L_800DD670; } // 800DD6B4
  goto L_800DD6FC; // 800DD6B8
L_800DD6BC:;
  cmps(c,0,(int32_t)c->r[4],-1); // 800DD6BC
  if (!crb(c,2)) { goto L_800DD6DC; } // 800DD6C0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000064u); // 800DD6C4
  c->r[0]=rotl(c->r[0],0)&0xFFFFE0FFu; // 800DD6C8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 800DD6CC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 800DD6D0
  W16(c->r[3]+0x00000064u,c->r[0]); // 800DD6D4
  goto L_800DD6FC; // 800DD6D8
L_800DD6DC:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000064u); // 800DD6DC
  c->r[4]=rotl(c->r[4],8)&0xFFFFFF00u; // 800DD6E0
  c->r[0]=rotl(c->r[0],0)&0xFFFFE0FFu; // 800DD6E4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 800DD6E8
  c->r[0]=c->r[4]|c->r[0]; // 800DD6EC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 800DD6F0
  c->r[0]=c->r[0]|0x00000001u; // 800DD6F4
  W16(c->r[3]+0x00000064u,c->r[0]); // 800DD6F8
L_800DD6FC:;
  c->r[3]=0u+0x00000000u; // 800DD6FC
L_800DD700:;
  c->r[11]=c->r[1]+0x00000020u; // 800DD700
  c->lr=0x800DD708u; f_800C2E94(c); // 800DD704
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DD708
  c->lr=c->r[0]; // 800DD70C
  c->r[1]=c->r[1]+0x00000020u; // 800DD710
  return; // 800DD714
}

// fn_800DD720
void f_800DD720(Ctx* __restrict c) {
  trace_call(0x800DD720u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD720
  c->r[0]=c->lr; // 800DD724
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DD728
  c->r[11]=c->r[1]+0x00000030u; // 800DD72C
  c->lr=0x800DD734u; f_800C2E44(c); // 800DD730
  c->r[5]=R32(c->r[3]+0x000000ACu); // 800DD734
  c->r[29]=c->r[4]|c->r[4]; // 800DD738
  cmps(c,0,(int32_t)c->r[5],0); // 800DD73C
  if (crb(c,2)) { goto L_800DD74C; } // 800DD740
  c->r[0]=R32(c->r[5]+0x00000000u); // 800DD744
  goto L_800DD750; // 800DD748
L_800DD74C:;
  c->r[0]=0u+0x00000000u; // 800DD74C
L_800DD750:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DD750
  if (crb(c,2)) { goto L_800DD770; } // 800DD754
  cmps(c,0,(int32_t)c->r[5],0); // 800DD758
  if (crb(c,2)) { goto L_800DD768; } // 800DD75C
  c->r[31]=R32(c->r[5]+0x00000000u); // 800DD760
  goto L_800DD774; // 800DD764
L_800DD768:;
  c->r[31]=0u+0x00000000u; // 800DD768
  goto L_800DD774; // 800DD76C
L_800DD770:;
  c->r[31]=c->r[3]|c->r[3]; // 800DD770
L_800DD774:;
  cmps(c,0,(int32_t)c->r[4],0); // 800DD774
  c->r[30]=0u+0x00000000u; // 800DD778
  if (!crb(c,2)) { goto L_800DD788; } // 800DD77C
  c->r[3]=0u+0x00000025u; // 800DD780
  goto L_800DD8B0; // 800DD784
L_800DD788:;
  c->r[28]=0u+0x00000000u; // 800DD788
  W32(c->r[4]+0x00000000u,c->r[28]); // 800DD78C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000064u); // 800DD790
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 800DD794
  if (crb(c,2)) { goto L_800DD834; } // 800DD798
  c->r[3]=R32(c->r[31]+0x00000028u); // 800DD79C
  c->r[25]=0u+0x00000000u; // 800DD7A0
  c->r[3]=R32(c->r[3]+0x00000030u); // 800DD7A4
  c->r[3]=R32(c->r[3]+0x00000038u); // 800DD7A8
  c->r[27]=R32(c->r[3]+0x00000008u); // 800DD7AC
  c->r[26]=R32(c->r[3]+0x00000010u); // 800DD7B0
  goto L_800DD828; // 800DD7B4
L_800DD7B8:;
  c->r[3]=R32(c->r[26]+c->r[28]); // 800DD7B8
  cmps(c,0,(int32_t)c->r[3],0); // 800DD7BC
  if (crb(c,2)) { goto L_800DD820; } // 800DD7C0
  c->r[4]=R32(c->r[3]+0x000000ACu); // 800DD7C4
  cmps(c,0,(int32_t)c->r[4],0); // 800DD7C8
  if (crb(c,2)) { goto L_800DD7D8; } // 800DD7CC
  c->r[0]=R32(c->r[4]+0x00000000u); // 800DD7D0
  goto L_800DD7DC; // 800DD7D4
L_800DD7D8:;
  c->r[0]=0u+0x00000000u; // 800DD7D8
L_800DD7DC:;
  cmpu(c,0,c->r[0],c->r[31]); // 800DD7DC
  if (!crb(c,2)) { goto L_800DD820; } // 800DD7E0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000064u); // 800DD7E4
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800DD7E8
  if (crb(c,2)) { goto L_800DD820; } // 800DD7EC
  c->r[12]=R32(c->r[3]+0x00000010u); // 800DD7F0
  c->r[4]=c->r[1]+0x00000008u; // 800DD7F4
  c->r[12]=R32(c->r[12]+0x0000008Cu); // 800DD7F8
  c->ctr=c->r[12]; // 800DD7FC
  if (true) { c->lr=0x800DD804u; dispatch(c,c->ctr); } // 800DD800
  cmps(c,0,(int32_t)c->r[3],0); // 800DD804
  if (crb(c,2)) { goto L_800DD810; } // 800DD808
  goto L_800DD8B0; // 800DD80C
L_800DD810:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 800DD810
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 800DD814
  if (crb(c,2)) { goto L_800DD820; } // 800DD818
  c->r[30]=c->r[30]+0x00000001u; // 800DD81C
L_800DD820:;
  c->r[25]=c->r[25]+0x00000001u; // 800DD820
  c->r[28]=c->r[28]+0x00000004u; // 800DD824
L_800DD828:;
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[27]); // 800DD828
  if (crb(c,0)) { IRQCHK(c); goto L_800DD7B8; } // 800DD82C
  goto L_800DD8A8; // 800DD830
L_800DD834:;
  c->r[3]=R32(c->r[31]+0x000000A8u); // 800DD834
  c->r[0]=R32(c->r[3]+0x00000004u); // 800DD838
  cmps(c,0,(int32_t)c->r[0],0); // 800DD83C
  if (crb(c,2)) { goto L_800DD8A8; } // 800DD840
  c->r[25]=0u+0x00000000u; // 800DD844
  c->r[28]=0u+0x00000000u; // 800DD848
  goto L_800DD898; // 800DD84C
L_800DD850:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 800DD850
  c->r[3]=R32(c->r[3]+c->r[28]); // 800DD854
  cmps(c,0,(int32_t)c->r[3],0); // 800DD858
  if (crb(c,2)) { goto L_800DD890; } // 800DD85C
  c->r[12]=R32(c->r[3]+0x00000010u); // 800DD860
  c->r[4]=c->r[1]+0x00000008u; // 800DD864
  c->r[12]=R32(c->r[12]+0x0000008Cu); // 800DD868
  c->ctr=c->r[12]; // 800DD86C
  if (true) { c->lr=0x800DD874u; dispatch(c,c->ctr); } // 800DD870
  cmps(c,0,(int32_t)c->r[3],0); // 800DD874
  if (crb(c,2)) { goto L_800DD880; } // 800DD878
  goto L_800DD8B0; // 800DD87C
L_800DD880:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 800DD880
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 800DD884
  if (crb(c,2)) { goto L_800DD890; } // 800DD888
  c->r[30]=c->r[30]+0x00000001u; // 800DD88C
L_800DD890:;
  c->r[25]=c->r[25]+0x00000001u; // 800DD890
  c->r[28]=c->r[28]+0x00000004u; // 800DD894
L_800DD898:;
  c->r[3]=R32(c->r[31]+0x000000A8u); // 800DD898
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DD89C
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 800DD8A0
  if (crb(c,0)) { IRQCHK(c); goto L_800DD850; } // 800DD8A4
L_800DD8A8:;
  W32(c->r[29]+0x00000000u,c->r[30]); // 800DD8A8
  c->r[3]=0u+0x00000000u; // 800DD8AC
L_800DD8B0:;
  c->r[11]=c->r[1]+0x00000030u; // 800DD8B0
  c->lr=0x800DD8B8u; f_800C2E90(c); // 800DD8B4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DD8B8
  c->lr=c->r[0]; // 800DD8BC
  c->r[1]=c->r[1]+0x00000030u; // 800DD8C0
  return; // 800DD8C4
}

// fn_800DD8D0
void f_800DD8D0(Ctx* __restrict c) {
  trace_call(0x800DD8D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD8D0
  c->r[0]=0u+0x43300000u; // 800DD8D4
  c->r[4]=R32(c->r[3]+0x000000ACu); // 800DD8D8
  W32(c->r[1]+0x00000008u,c->r[0]); // 800DD8DC
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x0000001Cu); // 800DD8E0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800DD8E4
  cmps(c,0,(int32_t)c->r[4],0); // 800DD8E8
  if (!crb(c,0)) { goto L_800DD8F8; } // 800DD8EC
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DD8F0
  goto L_800DD90C; // 800DD8F4
L_800DD8F8:;
  c->r[0]=c->r[4]^0x80000000u; // 800DD8F8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800DD8FC
  {uint32_t ea=c->r[2]+0xFFFF9E60u; c->f[1]=RF64(ea);} // 800DD900
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800DD904
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 800DD908
L_800DD90C:;
  c->r[4]=R32(c->r[3]+0x00000060u); // 800DD90C
  c->r[0]=rotl(c->r[4],0)&0x00100000u; cr0(c,c->r[0]); // 800DD910
  if (crb(c,2)) { goto L_800DD938; } // 800DD914
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x000000A6u); // 800DD918
  {uint32_t ea=c->r[2]+0xFFFF9E60u; c->f[1]=RF64(ea);} // 800DD91C
  c->r[0]=c->r[0]^0x80000000u; // 800DD920
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD924
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800DD928
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800DD92C
  c->f[1]=c->ps1[1]=S(c->f[3]/c->f[0]); // 800DD930
  goto L_800DD96C; // 800DD934
L_800DD938:;
  c->r[0]=rotl(c->r[4],0)&0x00200000u; cr0(c,c->r[0]); // 800DD938
  if (crb(c,2)) { goto L_800DD968; } // 800DD93C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x000000A4u); // 800DD940
  {uint32_t ea=c->r[2]+0xFFFF9E60u; c->f[2]=RF64(ea);} // 800DD944
  c->r[0]=c->r[0]^0x80000000u; // 800DD948
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DD94C
  {uint32_t ea=c->r[2]+0xFFFF9E4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DD950
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 800DD954
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800DD958
  c->f[1]=c->ps1[1]=S(c->f[3]/c->f[1]); // 800DD95C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 800DD960
  goto L_800DD96C; // 800DD964
L_800DD968:;
  {uint32_t ea=c->r[2]+0xFFFF9E4Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DD968
L_800DD96C:;
  c->r[1]=c->r[1]+0x00000020u; // 800DD96C
  return; // 800DD970
}

// fn_800DD980
void f_800DD980(Ctx* __restrict c) {
  trace_call(0x800DD980u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DD980
  c->r[0]=c->lr; // 800DD984
  cmps(c,0,(int32_t)c->r[4],0); // 800DD988
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DD98C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DD990
  c->r[31]=c->r[4]|c->r[4]; // 800DD994
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DD998
  c->r[30]=c->r[3]|c->r[3]; // 800DD99C
  if (!crb(c,2)) { goto L_800DD9AC; } // 800DD9A0
  c->r[3]=0u+0x00000025u; // 800DD9A4
  goto L_800DDA50; // 800DD9A8
L_800DD9AC:;
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DD9AC
  c->r[4]=c->r[1]+0x0000000Cu; // 800DD9B0
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800DD9B4
  c->r[3]=R32(c->r[3]+0x00000138u); // 800DD9B8
  c->r[12]=R32(c->r[3]+0x00000000u); // 800DD9BC
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 800DD9C0
  c->ctr=c->r[12]; // 800DD9C4
  if (true) { c->lr=0x800DD9CCu; dispatch(c,c->ctr); } // 800DD9C8
  cmps(c,0,(int32_t)c->r[3],0); // 800DD9CC
  if (crb(c,2)) { goto L_800DD9D8; } // 800DD9D0
  goto L_800DDA50; // 800DD9D4
L_800DD9D8:;
  c->r[0]=R32(c->r[30]+0x00000040u); // 800DD9D8
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 800DD9DC
  if (!crb(c,2)) { goto L_800DDA0C; } // 800DD9E0
  c->r[3]=c->r[30]|c->r[30]; // 800DD9E4
  c->r[4]=c->r[1]+0x00000008u; // 800DD9E8
  c->lr=0x800DD9F0u; f_800DDA70(c); // 800DD9EC
  cmps(c,0,(int32_t)c->r[3],0); // 800DD9F0
  if (crb(c,2)) { goto L_800DD9FC; } // 800DD9F4
  goto L_800DDA50; // 800DD9F8
L_800DD9FC:;
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DD9FC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DDA00
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800DDA04
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800DDA08
L_800DDA0C:;
  c->r[3]=R32(c->r[30]+0x00000070u); // 800DDA0C
  cmps(c,0,(int32_t)c->r[3],0); // 800DDA10
  if (crb(c,2)) { goto L_800DDA34; } // 800DDA14
  c->r[3]=R32(c->r[3]+0x00000040u); // 800DDA18
  cmps(c,0,(int32_t)c->r[3],0); // 800DDA1C
  if (crb(c,2)) { goto L_800DDA34; } // 800DDA20
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DDA24
  {uint32_t ea=c->r[3]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DDA28
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 800DDA2C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 800DDA30
L_800DDA34:;
  {uint32_t ea=c->r[30]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DDA34
  c->r[3]=0u+0x00000000u; // 800DDA38
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DDA3C
  {uint32_t ea=c->r[30]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DDA40
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800DDA44
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 800DDA48
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[0]);} // 800DDA4C
L_800DDA50:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DDA50
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DDA54
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DDA58
  c->lr=c->r[0]; // 800DDA5C
  c->r[1]=c->r[1]+0x00000020u; // 800DDA60
  return; // 800DDA64
}

// fn_800DDA70
void f_800DDA70(Ctx* __restrict c) {
  trace_call(0x800DDA70u);
  {uint32_t ea=c->r[1]+0xFFFFFF00u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDA70
  c->r[0]=c->lr; // 800DDA74
  W32(c->r[1]+0x00000104u,c->r[0]); // 800DDA78
  c->r[11]=c->r[1]+0x00000060u; // 800DDA7C
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[31]);} // 800DDA80
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,31,ea,0,0);} // 800DDA84
  {uint32_t ea=c->r[1]+0x000000E0u; WF64(ea,c->f[30]);} // 800DDA88
  {uint32_t ea=c->r[1]+0x000000E8u; psq_store(c,30,ea,0,0);} // 800DDA8C
  {uint32_t ea=c->r[1]+0x000000D0u; WF64(ea,c->f[29]);} // 800DDA90
  {uint32_t ea=c->r[1]+0x000000D8u; psq_store(c,29,ea,0,0);} // 800DDA94
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[28]);} // 800DDA98
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,28,ea,0,0);} // 800DDA9C
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[27]);} // 800DDAA0
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,27,ea,0,0);} // 800DDAA4
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[26]);} // 800DDAA8
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,26,ea,0,0);} // 800DDAAC
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[25]);} // 800DDAB0
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,25,ea,0,0);} // 800DDAB4
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[24]);} // 800DDAB8
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,24,ea,0,0);} // 800DDABC
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[23]);} // 800DDAC0
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,23,ea,0,0);} // 800DDAC4
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[22]);} // 800DDAC8
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,22,ea,0,0);} // 800DDACC
  c->lr=0x800DDAD4u; f_800C2E54(c); // 800DDAD0
  {uint32_t ea=c->r[2]+0xFFFF9E4Cu; c->f[24]=c->ps1[24]=RF32(ea);} // 800DDAD4
  cmps(c,0,(int32_t)c->r[4],0); // 800DDAD8
  c->r[29]=c->r[3]|c->r[3]; // 800DDADC
  c->r[30]=c->r[4]|c->r[4]; // 800DDAE0
  c->f[23]=c->f[24]; // 800DDAE4
  c->f[22]=c->f[24]; // 800DDAE8
  if (!crb(c,2)) { goto L_800DDAF8; } // 800DDAEC
  c->r[3]=0u+0x00000025u; // 800DDAF0
  goto L_800DDE60; // 800DDAF4
L_800DDAF8:;
  c->r[3]=R32(c->r[13]+0xFFFF9830u); // 800DDAF8
  c->r[4]=c->r[1]+0x00000014u; // 800DDAFC
  c->r[3]=R32(c->r[3]+0x00000014u); // 800DDB00
  c->lr=0x800DDB08u; f_8019E9B0(c); // 800DDB04
  cmps(c,0,(int32_t)c->r[3],0); // 800DDB08
  if (crb(c,2)) { goto L_800DDB14; } // 800DDB0C
  goto L_800DDE60; // 800DDB10
L_800DDB14:;
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[26]=c->ps1[26]=RF32(ea);} // 800DDB14
  c->r[31]=0u+0x00000000u; // 800DDB18
  {uint32_t ea=c->r[2]+0xFFFF9E4Cu; c->f[27]=c->ps1[27]=RF32(ea);} // 800DDB1C
  {uint32_t ea=c->r[2]+0xFFFF9E98u; c->f[25]=c->ps1[25]=RF32(ea);} // 800DDB20
  {uint32_t ea=c->r[2]+0xFFFF9E9Cu; c->f[28]=c->ps1[28]=RF32(ea);} // 800DDB24
  {uint32_t ea=c->r[2]+0xFFFF9E6Cu; c->f[29]=c->ps1[29]=RF32(ea);} // 800DDB28
  {uint32_t ea=c->r[2]+0xFFFF9EA0u; c->f[30]=c->ps1[30]=RF32(ea);} // 800DDB2C
  {uint32_t ea=c->r[2]+0xFFFF9EA4u; c->f[31]=c->ps1[31]=RF32(ea);} // 800DDB30
  goto L_800DDE34; // 800DDB34
L_800DDB38:;
  c->r[3]=R32(c->r[13]+0xFFFF9830u); // 800DDB38
  c->r[4]=c->r[31]|c->r[31]; // 800DDB3C
  c->r[5]=c->r[1]+0x00000030u; // 800DDB40
  c->r[6]=c->r[1]+0x00000024u; // 800DDB44
  c->r[3]=R32(c->r[3]+0x00000014u); // 800DDB48
  c->r[7]=0u+0x00000000u; // 800DDB4C
  c->r[8]=0u+0x00000000u; // 800DDB50
  c->lr=0x800DDB58u; f_8019EA70(c); // 800DDB54
  cmps(c,0,(int32_t)c->r[3],0); // 800DDB58
  if (crb(c,2)) { goto L_800DDB64; } // 800DDB5C
  goto L_800DDE60; // 800DDB60
L_800DDB64:;
  c->r[3]=R32(c->r[13]+0xFFFF9830u); // 800DDB64
  c->r[5]=c->r[1]+0x00000010u; // 800DDB68
  c->r[6]=c->r[1]+0x0000000Cu; // 800DDB6C
  c->r[4]=0u+0x00000000u; // 800DDB70
  c->r[3]=R32(c->r[3]+0x00000014u); // 800DDB74
  c->lr=0x800DDB7Cu; f_8019E8F0(c); // 800DDB78
  cmps(c,0,(int32_t)c->r[3],0); // 800DDB7C
  if (crb(c,2)) { goto L_800DDB88; } // 800DDB80
  goto L_800DDE60; // 800DDB84
L_800DDB88:;
  c->r[0]=R32(c->r[29]+0x00000040u); // 800DDB88
  c->r[0]=rotl(c->r[0],0)&0x00040000u; cr0(c,c->r[0]); // 800DDB8C
  if (crb(c,2)) { goto L_800DDBA8; } // 800DDB90
  c->r[3]=c->r[1]+0x0000003Cu; // 800DDB94
  c->r[4]=c->r[29]+0x000000B0u; // 800DDB98
  c->r[5]=0u+0x0000000Cu; // 800DDB9C
  c->lr=0x800DDBA4u; f_80004000(c); // 800DDBA0
  goto L_800DDBD8; // 800DDBA4
L_800DDBA8:;
  {uint32_t ea=c->r[29]+0x000000B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DDBA8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DDBAC
  {uint32_t ea=c->r[1]+0x00000034u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DDBB0
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 800DDBB4
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DDBB8
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[2]);} // 800DDBBC
  {uint32_t ea=c->r[29]+0x000000B4u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DDBC0
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 800DDBC4
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[1]);} // 800DDBC8
  {uint32_t ea=c->r[29]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DDBCC
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800DDBD0
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 800DDBD4
L_800DDBD8:;
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DDBD8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DDBDC
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[1]); // 800DDBE0
  {uint32_t ea=c->r[1]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DDBE4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[0]); // 800DDBE8
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[2]); // 800DDBEC
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800DDBF0
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[0]); // 800DDBF4
  c->lr=0x800DDBFCu; f_800D2C14(c); // 800DDBF8
  c->f[2]=c->ps1[2]=S(c->f[1]); // 800DDBFC
  fcmp(c,0,c->f[2],c->f[25]); // 800DDC00
  if (!crb(c,0)) { goto L_800DDE30; } // 800DDC04
  c->r[3]=R32(c->r[29]+0x00000040u); // 800DDC08
  c->f[25]=c->f[2]; // 800DDC0C
  c->r[0]=rotl(c->r[3],0)&0x04000000u; cr0(c,c->r[0]); // 800DDC10
  if (crb(c,2)) { goto L_800DDC20; } // 800DDC14
  {uint32_t ea=c->r[2]+0xFFFF9E4Cu; c->f[24]=c->ps1[24]=RF32(ea);} // 800DDC18
  goto L_800DDCB0; // 800DDC1C
L_800DDC20:;
  {uint32_t ea=c->r[29]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DDC20
  fcmp(c,0,c->f[2],c->f[0]); // 800DDC24
  setcrb(c,2,crb(c,1)|crb(c,2)); // 800DDC28
  if (!crb(c,2)) { goto L_800DDC34; } // 800DDC2C
  c->f[2]=c->f[0]; // 800DDC30
L_800DDC34:;
  {uint32_t ea=c->r[29]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DDC34
  fcmp(c,0,c->f[2],c->f[0]); // 800DDC38
  if (!crb(c,0)) { goto L_800DDC44; } // 800DDC3C
  c->f[2]=c->f[0]; // 800DDC40
L_800DDC44:;
  c->r[0]=rotl(c->r[3],0)&0x00200000u; cr0(c,c->r[0]); // 800DDC44
  if (crb(c,2)) { goto L_800DDC78; } // 800DDC48
  {uint32_t ea=c->r[29]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DDC4C
  {uint32_t ea=c->r[29]+0x000000D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DDC50
  c->f[0]=c->ps1[0]=S(c->f[1]-c->f[0]); // 800DDC54
  fcmp(c,0,c->f[0],c->f[26]); // 800DDC58
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800DDC5C
  if (!crb(c,2)) { goto L_800DDC6C; } // 800DDC60
  {uint32_t ea=c->r[2]+0xFFFF9E4Cu; c->f[24]=c->ps1[24]=RF32(ea);} // 800DDC64
  goto L_800DDCB0; // 800DDC68
L_800DDC6C:;
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[2]); // 800DDC6C
  c->f[24]=c->ps1[24]=S(c->f[2]/c->f[0]); // 800DDC70
  goto L_800DDCB0; // 800DDC74
L_800DDC78:;
  {uint32_t ea=c->r[29]+0x000000D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DDC78
  fcmp(c,0,c->f[2],c->f[1]); // 800DDC7C
  if (!crb(c,1)) { goto L_800DDC9C; } // 800DDC80
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DDC84
  fcmp(c,0,c->f[27],c->f[0]); // 800DDC88
  if (crb(c,2)) { goto L_800DDC9C; } // 800DDC8C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[1]); // 800DDC90
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[0]); // 800DDC94
  c->f[2]=c->ps1[2]=S(c->f[2]+c->f[1]); // 800DDC98
L_800DDC9C:;
  fcmp(c,0,c->f[2],c->f[28]); // 800DDC9C
  if (!crb(c,0)) { goto L_800DDCA8; } // 800DDCA0
  c->f[2]=c->f[28]; // 800DDCA4
L_800DDCA8:;
  {uint32_t ea=c->r[29]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DDCA8
  c->f[24]=c->ps1[24]=S(c->f[0]/c->f[2]); // 800DDCAC
L_800DDCB0:;
  fcmp(c,0,c->f[24],c->f[26]); // 800DDCB0
  if (!crb(c,0)) { goto L_800DDCBC; } // 800DDCB4
  c->f[24]=c->f[26]; // 800DDCB8
L_800DDCBC:;
  fcmp(c,0,c->f[24],c->f[27]); // 800DDCBC
  if (!crb(c,1)) { goto L_800DDCC8; } // 800DDCC0
  c->f[24]=c->f[27]; // 800DDCC4
L_800DDCC8:;
  {uint32_t ea=c->r[29]+0x000000FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DDCC8
  fcmp(c,0,c->f[0],c->f[29]); // 800DDCCC
  if (crb(c,0)) { goto L_800DDCE0; } // 800DDCD0
  {uint32_t ea=c->r[29]+0x000000F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DDCD4
  fcmp(c,0,c->f[0],c->f[29]); // 800DDCD8
  if (!crb(c,0)) { goto L_800DDDA8; } // 800DDCDC
L_800DDCE0:;
  fcmp(c,0,c->f[2],c->f[26]); // 800DDCE0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 800DDCE4
  if (!crb(c,2)) { goto L_800DDCF4; } // 800DDCE8
  c->f[1]=c->f[26]; // 800DDCEC
  goto L_800DDD64; // 800DDCF0
L_800DDCF4:;
  c->f[3]=c->ps1[3]=S(c->f[27]/c->f[2]); // 800DDCF4
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800DDCF8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DDCFC
  {uint32_t ea=c->r[1]+0x00000044u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DDD00
  c->f[5]=c->ps1[5]=S(c->f[2]*c->f[3]); // 800DDD04
  c->f[4]=c->ps1[4]=S(c->f[1]*c->f[3]); // 800DDD08
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 800DDD0C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[5]);} // 800DDD10
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[4]);} // 800DDD14
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[3]);} // 800DDD18
  {uint32_t ea=c->r[29]+0x000000C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DDD1C
  {uint32_t ea=c->r[29]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DDD20
  {uint32_t ea=c->r[29]+0x000000D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DDD24
  c->f[1]=c->ps1[1]=S(c->f[5]*c->f[1]); // 800DDD28
  c->f[0]=c->ps1[0]=S(c->f[4]*c->f[0]); // 800DDD2C
  c->f[2]=c->ps1[2]=S(c->f[3]*c->f[2]); // 800DDD30
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800DDD34
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800DDD38
  c->f[0]=-c->f[0]; // 800DDD3C
  fcmp(c,0,c->f[0],c->f[30]); // 800DDD40
  if (!crb(c,0)) { goto L_800DDD50; } // 800DDD44
  c->f[0]=c->f[30]; // 800DDD48
  goto L_800DDD5C; // 800DDD4C
L_800DDD50:;
  fcmp(c,0,c->f[0],c->f[27]); // 800DDD50
  if (!crb(c,1)) { goto L_800DDD5C; } // 800DDD54
  c->f[0]=c->f[27]; // 800DDD58
L_800DDD5C:;
  c->f[0]=c->ps1[0]=S(c->f[27]-c->f[0]); // 800DDD5C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[0]); // 800DDD60
L_800DDD64:;
  {uint32_t ea=c->r[29]+0x000000F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DDD64
  fcmp(c,0,c->f[1],c->f[0]); // 800DDD68
  if (!crb(c,0)) { goto L_800DDD78; } // 800DDD6C
  {uint32_t ea=c->r[2]+0xFFFF9E4Cu; c->f[23]=c->ps1[23]=RF32(ea);} // 800DDD70
  goto L_800DDDA8; // 800DDD74
L_800DDD78:;
  {uint32_t ea=c->r[29]+0x000000FCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800DDD78
  fcmp(c,0,c->f[1],c->f[2]); // 800DDD7C
  if (!crb(c,0)) { goto L_800DDDA4; } // 800DDD80
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800DDD84
  {uint32_t ea=c->r[29]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DDD88
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 800DDD8C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 800DDD90
  c->f[1]=c->ps1[1]=S(c->f[27]-c->f[0]); // 800DDD94
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[3]); // 800DDD98
  c->f[23]=c->ps1[23]=S(c->f[1]+c->f[0]); // 800DDD9C
  goto L_800DDDA8; // 800DDDA0
L_800DDDA4:;
  {uint32_t ea=c->r[29]+0x00000100u; c->f[23]=c->ps1[23]=RF32(ea);} // 800DDDA4
L_800DDDA8:;
  c->r[0]=R32(c->r[29]+0x00000040u); // 800DDDA8
  c->r[3]=R32(c->r[13]+0xFFFF9830u); // 800DDDAC
  c->r[0]=rotl(c->r[0],0)&0x00040000u; cr0(c,c->r[0]); // 800DDDB0
  c->r[3]=R32(c->r[3]+0x00000014u); // 800DDDB4
  if (crb(c,2)) { goto L_800DDDF0; } // 800DDDB8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DDDBC
  {uint32_t ea=c->r[29]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DDDC0
  {uint32_t ea=c->r[1]+0x00000034u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DDDC4
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800DDDC8
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DDDCC
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800DDDD0
  {uint32_t ea=c->r[29]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DDDD4
  c->f[0]=c->ps1[0]=S(c->f[2]+c->f[0]); // 800DDDD8
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800DDDDC
  {uint32_t ea=c->r[29]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DDDE0
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 800DDDE4
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 800DDDE8
  goto L_800DDE08; // 800DDDEC
L_800DDDF0:;
  {uint32_t ea=c->r[29]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DDDF0
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 800DDDF4
  {uint32_t ea=c->r[29]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DDDF8
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 800DDDFC
  {uint32_t ea=c->r[29]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DDE00
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 800DDE04
L_800DDE08:;
  c->r[4]=c->r[1]+0x00000030u; // 800DDE08
  c->r[5]=c->r[1]+0x00000018u; // 800DDE0C
  c->r[6]=c->r[1]+0x00000008u; // 800DDE10
  c->r[7]=0u+0x00000000u; // 800DDE14
  c->lr=0x800DDE1Cu; f_8019F000(c); // 800DDE18
  cmps(c,0,(int32_t)c->r[3],0); // 800DDE1C
  if (crb(c,2)) { goto L_800DDE28; } // 800DDE20
  goto L_800DDE60; // 800DDE24
L_800DDE28:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DDE28
  c->f[22]=c->ps1[22]=S(c->f[27]-c->f[0]); // 800DDE2C
L_800DDE30:;
  c->r[31]=c->r[31]+0x00000001u; // 800DDE30
L_800DDE34:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DDE34
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 800DDE38
  if (crb(c,0)) { IRQCHK(c); goto L_800DDB38; } // 800DDE3C
  c->f[24]=c->ps1[24]=S(c->f[24]*c->f[23]); // 800DDE40
  {uint32_t ea=c->r[29]+0x00000108u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DDE44
  {uint32_t ea=c->r[2]+0xFFFF9E4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DDE48
  c->r[3]=0u+0x00000000u; // 800DDE4C
  c->f[24]=c->ps1[24]=S(c->f[24]*c->f[22]); // 800DDE50
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800DDE54
  c->f[24]=c->ps1[24]=S(c->f[24]*c->f[0]); // 800DDE58
  {uint32_t ea=c->r[30]+0x00000000u; WF32(ea,c->f[24]);} // 800DDE5C
L_800DDE60:;
  c->r[11]=c->r[1]+0x00000060u; // 800DDE60
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,31,ea,0,0);} // 800DDE64
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[31]=RF64(ea);} // 800DDE68
  {uint32_t ea=c->r[1]+0x000000E8u; psq_load(c,30,ea,0,0);} // 800DDE6C
  {uint32_t ea=c->r[1]+0x000000E0u; c->f[30]=RF64(ea);} // 800DDE70
  {uint32_t ea=c->r[1]+0x000000D8u; psq_load(c,29,ea,0,0);} // 800DDE74
  {uint32_t ea=c->r[1]+0x000000D0u; c->f[29]=RF64(ea);} // 800DDE78
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,28,ea,0,0);} // 800DDE7C
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[28]=RF64(ea);} // 800DDE80
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,27,ea,0,0);} // 800DDE84
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[27]=RF64(ea);} // 800DDE88
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,26,ea,0,0);} // 800DDE8C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[26]=RF64(ea);} // 800DDE90
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,25,ea,0,0);} // 800DDE94
  {uint32_t ea=c->r[1]+0x00000090u; c->f[25]=RF64(ea);} // 800DDE98
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,24,ea,0,0);} // 800DDE9C
  {uint32_t ea=c->r[1]+0x00000080u; c->f[24]=RF64(ea);} // 800DDEA0
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,23,ea,0,0);} // 800DDEA4
  {uint32_t ea=c->r[1]+0x00000070u; c->f[23]=RF64(ea);} // 800DDEA8
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,22,ea,0,0);} // 800DDEAC
  {uint32_t ea=c->r[1]+0x00000060u; c->f[22]=RF64(ea);} // 800DDEB0
  c->lr=0x800DDEB8u; f_800C2EA0(c); // 800DDEB4
  c->r[0]=R32(c->r[1]+0x00000104u); // 800DDEB8
  c->lr=c->r[0]; // 800DDEBC
  c->r[1]=c->r[1]+0x00000100u; // 800DDEC0
  return; // 800DDEC4
}

// fn_800DDED0
void f_800DDED0(Ctx* __restrict c) {
  trace_call(0x800DDED0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DDED0
  c->r[0]=c->lr; // 800DDED4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DDED8
  c->r[0]=0u+0x43300000u; // 800DDEDC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800DDEE0
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800DDEE4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DDEE8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800DDEEC
  c->r[30]=c->r[3]|c->r[3]; // 800DDEF0
  c->r[31]=R32(c->r[3]+0x000000F4u); // 800DDEF4
  W32(c->r[1]+0x00000008u,c->r[0]); // 800DDEF8
  cmps(c,0,(int32_t)c->r[31],0); // 800DDEFC
  W32(c->r[1]+0x00000010u,c->r[0]); // 800DDF00
  if (crb(c,2)) { goto L_800DDFDC; } // 800DDF04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DDF08
  {uint32_t ea=c->r[2]+0xFFFF9EB0u; c->f[2]=RF64(ea);} // 800DDF0C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 800DDF10
  {uint32_t ea=c->r[2]+0xFFFF9EA8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DDF14
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 800DDF18
  c->f[31]=c->ps1[31]=S(c->f[0]*c->f[1]); // 800DDF1C
  c->lr=0x800DDF24u; f_800C8D44(c); // 800DDF20
  c->r[0]=c->r[3]^0x80000000u; // 800DDF24
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DDF28
  {uint32_t ea=c->r[2]+0xFFFF9E60u; c->f[1]=RF64(ea);} // 800DDF2C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800DDF30
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DDF34
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 800DDF38
  {uint32_t ea=c->r[2]+0xFFFF9E70u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DDF3C
  {uint32_t ea=c->r[2]+0xFFFF9EB0u; c->f[1]=RF64(ea);} // 800DDF40
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800DDF44
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 800DDF48
  c->r[31]=R32(c->r[30]+0x000000F4u); // 800DDF4C
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 800DDF50
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800DDF54
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800DDF58
  {uint32_t ea=c->r[30]+0x000000E8u; WF32(ea,c->f[0]);} // 800DDF5C
  c->lr=0x800DDF64u; f_800C8D44(c); // 800DDF60
  c->r[0]=c->r[3]^0x80000000u; // 800DDF64
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DDF68
  {uint32_t ea=c->r[2]+0xFFFF9E60u; c->f[1]=RF64(ea);} // 800DDF6C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800DDF70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DDF74
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 800DDF78
  {uint32_t ea=c->r[2]+0xFFFF9E70u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DDF7C
  {uint32_t ea=c->r[2]+0xFFFF9EB0u; c->f[1]=RF64(ea);} // 800DDF80
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800DDF84
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 800DDF88
  c->r[31]=R32(c->r[30]+0x000000F4u); // 800DDF8C
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 800DDF90
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800DDF94
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800DDF98
  {uint32_t ea=c->r[30]+0x000000ECu; WF32(ea,c->f[0]);} // 800DDF9C
  c->lr=0x800DDFA4u; f_800C8D44(c); // 800DDFA0
  c->r[0]=c->r[3]^0x80000000u; // 800DDFA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DDFA8
  {uint32_t ea=c->r[2]+0xFFFF9E60u; c->f[1]=RF64(ea);} // 800DDFAC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800DDFB0
  {uint32_t ea=c->r[2]+0xFFFF9E70u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DDFB4
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[1]); // 800DDFB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DDFBC
  {uint32_t ea=c->r[2]+0xFFFF9EB0u; c->f[1]=RF64(ea);} // 800DDFC0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800DDFC4
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 800DDFC8
  c->f[2]=c->ps1[2]=S(c->f[31]*c->f[2]); // 800DDFCC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800DDFD0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 800DDFD4
  {uint32_t ea=c->r[30]+0x000000F0u; WF32(ea,c->f[0]);} // 800DDFD8
L_800DDFDC:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DDFDC
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800DDFE0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800DDFE4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DDFE8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800DDFEC
  c->lr=c->r[0]; // 800DDFF0
  c->r[1]=c->r[1]+0x00000030u; // 800DDFF4
  return; // 800DDFF8
}

// fn_800DE000
void f_800DE000(Ctx* __restrict c) {
  trace_call(0x800DE000u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE000
  c->r[0]=c->lr; // 800DE004
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE008
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DE00C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800DE010
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800DE014
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DE018
  c->r[31]=c->r[3]|c->r[3]; // 800DE01C
  {uint32_t ea=c->r[3]+0x00000080u; c->f[31]=c->ps1[31]=RF32(ea);} // 800DE020
  fcmp(c,0,c->f[1],c->f[31]); // 800DE024
  if (crb(c,2)) { goto L_800DE0F8; } // 800DE028
  c->lr=0x800DE030u; f_800C8D44(c); // 800DE02C
  c->r[0]=c->r[3]^0x80000000u; // 800DE030
  c->r[3]=0u+0x43300000u; // 800DE034
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800DE038
  {uint32_t ea=c->r[2]+0xFFFF9E60u; c->f[3]=RF64(ea);} // 800DE03C
  W32(c->r[1]+0x00000008u,c->r[3]); // 800DE040
  c->r[0]=R32(c->r[31]+0x00000060u); // 800DE044
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800DE048
  {uint32_t ea=c->r[2]+0xFFFF9EA8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE04C
  c->r[4]=rotl(c->r[0],0)&0xC0000000u; // 800DE050
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 800DE054
  c->r[0]=c->r[4]+0xC0000000u; // 800DE058
  {uint32_t ea=c->r[2]+0xFFFF9E70u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE05C
  cmpu(c,0,c->r[0],0x00000000u); // 800DE060
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800DE064
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 800DE068
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[0]); // 800DE06C
  if (crb(c,2)) { goto L_800DE084; } // 800DE070
  c->r[0]=c->r[4]+0x80000000u; // 800DE074
  cmpu(c,0,c->r[0],0x00000000u); // 800DE078
  if (crb(c,2)) { goto L_800DE0BC; } // 800DE07C
  goto L_800DE0F0; // 800DE080
L_800DE084:;
  {uint32_t ea=c->r[2]+0xFFFF9E90u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DE084
  {uint32_t ea=c->r[2]+0xFFFF9E50u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE088
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800DE08C
  W32(c->r[1]+0x00000010u,c->r[3]); // 800DE090
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800DE094
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800DE098
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[0]);} // 800DE09C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 800DE0A0
  c->r[0]=c->r[0]^0x80000000u; // 800DE0A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DE0A8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800DE0AC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 800DE0B0
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[2]); // 800DE0B4
  goto L_800DE0F0; // 800DE0B8
L_800DE0BC:;
  {uint32_t ea=c->r[2]+0xFFFF9E94u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DE0BC
  {uint32_t ea=c->r[2]+0xFFFF9E50u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE0C0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 800DE0C4
  W32(c->r[1]+0x00000008u,c->r[3]); // 800DE0C8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800DE0CC
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 800DE0D0
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 800DE0D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DE0D8
  c->r[0]=c->r[0]^0x80000000u; // 800DE0DC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800DE0E0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800DE0E4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 800DE0E8
  c->f[1]=c->ps1[1]=S(c->f[0]/c->f[2]); // 800DE0EC
L_800DE0F0:;
  {uint32_t ea=c->r[31]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE0F0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 800DE0F4
L_800DE0F8:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DE0F8
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800DE0FC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800DE100
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DE104
  c->lr=c->r[0]; // 800DE108
  c->r[1]=c->r[1]+0x00000030u; // 800DE10C
  return; // 800DE110
}

// fn_800DE120
void f_800DE120(Ctx* __restrict c) {
  trace_call(0x800DE120u);
  cmps(c,0,(int32_t)c->r[4],0); // 800DE120
  if (!crb(c,2)) { goto L_800DE130; } // 800DE124
  c->r[3]=0u+0x00000025u; // 800DE128
  return; // 800DE12C
L_800DE130:;
  {uint32_t ea=c->r[3]+0x00000080u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE130
  cmps(c,0,(int32_t)c->r[5],1); // 800DE134
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[1]);} // 800DE138
  if (crb(c,2)) { goto L_800DE154; } // 800DE13C
  cmps(c,0,(int32_t)c->r[5],2); // 800DE140
  if (crb(c,2)) { goto L_800DE164; } // 800DE144
  cmps(c,0,(int32_t)c->r[5],3); // 800DE148
  if (crb(c,2)) { goto L_800DE174; } // 800DE14C
  goto L_800DE180; // 800DE150
L_800DE154:;
  {uint32_t ea=c->r[2]+0xFFFF9E80u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE154
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800DE158
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 800DE15C
  goto L_800DE180; // 800DE160
L_800DE164:;
  {uint32_t ea=c->r[2]+0xFFFF9E90u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE164
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800DE168
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 800DE16C
  goto L_800DE180; // 800DE170
L_800DE174:;
  {uint32_t ea=c->r[2]+0xFFFF9E94u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE174
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800DE178
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 800DE17C
L_800DE180:;
  c->r[3]=0u+0x00000000u; // 800DE180
  return; // 800DE184
}

// fn_800DE190
void f_800DE190(Ctx* __restrict c) {
  trace_call(0x800DE190u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE190
  c->r[0]=c->lr; // 800DE194
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE198
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DE19C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800DE1A0
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800DE1A4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800DE1A8
  c->r[31]=c->r[3]|c->r[3]; // 800DE1AC
  {uint32_t ea=c->r[3]+0x0000009Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE1B0
  {uint32_t ea=c->r[3]+0x00000098u; c->f[31]=c->ps1[31]=RF32(ea);} // 800DE1B4
  fcmp(c,0,c->f[0],c->f[1]); // 800DE1B8
  if (crb(c,2)) { goto L_800DE20C; } // 800DE1BC
  c->lr=0x800DE1C4u; f_800C8D44(c); // 800DE1C0
  c->r[3]=c->r[3]^0x80000000u; // 800DE1C4
  c->r[0]=0u+0x43300000u; // 800DE1C8
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800DE1CC
  {uint32_t ea=c->r[2]+0xFFFF9E60u; c->f[3]=RF64(ea);} // 800DE1D0
  W32(c->r[1]+0x00000008u,c->r[0]); // 800DE1D4
  {uint32_t ea=c->r[2]+0xFFFF9EA8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE1D8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 800DE1DC
  {uint32_t ea=c->r[2]+0xFFFF9E70u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DE1E0
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[3]); // 800DE1E4
  {uint32_t ea=c->r[2]+0xFFFF9E4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE1E8
  {uint32_t ea=c->r[31]+0x0000009Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 800DE1EC
  c->f[3]=c->ps1[3]=S(c->f[1]*c->f[3]); // 800DE1F0
  c->f[1]=c->ps1[1]=S(c->f[0]+c->f[4]); // 800DE1F4
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 800DE1F8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[0]); // 800DE1FC
  c->lr=0x800DE204u; f_800D29C4(c); // 800DE200
  c->f[0]=c->ps1[0]=S(c->f[1]); // 800DE204
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[0]); // 800DE208
L_800DE20C:;
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE20C
  fcmp(c,0,c->f[31],c->f[0]); // 800DE210
  if (!crb(c,1)) { goto L_800DE21C; } // 800DE214
  goto L_800DE220; // 800DE218
L_800DE21C:;
  c->f[31]=c->f[0]; // 800DE21C
L_800DE220:;
  c->f[1]=c->f[31]; // 800DE220
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800DE224
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800DE228
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800DE22C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DE230
  c->lr=c->r[0]; // 800DE234
  c->r[1]=c->r[1]+0x00000030u; // 800DE238
  return; // 800DE23C
}

// fn_800DE240
void f_800DE240(Ctx* __restrict c) {
  trace_call(0x800DE240u);
  cmps(c,0,(int32_t)c->r[6],0); // 800DE240
  if (crb(c,2)) { goto L_800DE24C; } // 800DE244
  goto L_800DE280; // 800DE248
L_800DE24C:;
  c->r[6]=R32(c->r[3]+0x000000ACu); // 800DE24C
  cmps(c,0,(int32_t)c->r[6],0); // 800DE250
  if (crb(c,2)) { goto L_800DE260; } // 800DE254
  c->r[0]=R32(c->r[6]+0x00000000u); // 800DE258
  goto L_800DE264; // 800DE25C
L_800DE260:;
  c->r[0]=0u+0x00000000u; // 800DE260
L_800DE264:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DE264
  if (crb(c,2)) { goto L_800DE280; } // 800DE268
  cmps(c,0,(int32_t)c->r[6],0); // 800DE26C
  if (crb(c,2)) { goto L_800DE27C; } // 800DE270
  c->r[3]=R32(c->r[6]+0x00000000u); // 800DE274
  goto L_800DE280; // 800DE278
L_800DE27C:;
  c->r[3]=0u+0x00000000u; // 800DE27C
L_800DE280:;
  cmps(c,0,(int32_t)c->r[5],0); // 800DE280
  if (!crb(c,2)) { goto L_800DE290; } // 800DE284
  c->r[3]=0u+0x00000025u; // 800DE288
  return; // 800DE28C
L_800DE290:;
  c->r[3]=R32(c->r[3]+0x00000138u); // 800DE290
  c->r[12]=R32(c->r[3]+0x00000000u); // 800DE294
  c->r[12]=R32(c->r[12]+0x00000060u); // 800DE298
  c->ctr=c->r[12]; // 800DE29C
  if (true) { dispatch(c,c->ctr); return; } // 800DE2A0
}

// fn_800DE2A4
void f_800DE2A4(Ctx* __restrict c) {
  trace_call(0x800DE2A4u);
  return; // 800DE2A4
}

// fn_800DE2B0
void f_800DE2B0(Ctx* __restrict c) {
  trace_call(0x800DE2B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE2B0
  c->r[0]=c->lr; // 800DE2B4
  cmps(c,0,(int32_t)c->r[6],0); // 800DE2B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DE2BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DE2C0
  c->r[31]=c->r[5]|c->r[5]; // 800DE2C4
  if (crb(c,2)) { goto L_800DE2D0; } // 800DE2C8
  goto L_800DE304; // 800DE2CC
L_800DE2D0:;
  c->r[6]=R32(c->r[3]+0x000000ACu); // 800DE2D0
  cmps(c,0,(int32_t)c->r[6],0); // 800DE2D4
  if (crb(c,2)) { goto L_800DE2E4; } // 800DE2D8
  c->r[0]=R32(c->r[6]+0x00000000u); // 800DE2DC
  goto L_800DE2E8; // 800DE2E0
L_800DE2E4:;
  c->r[0]=0u+0x00000000u; // 800DE2E4
L_800DE2E8:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DE2E8
  if (crb(c,2)) { goto L_800DE304; } // 800DE2EC
  cmps(c,0,(int32_t)c->r[6],0); // 800DE2F0
  if (crb(c,2)) { goto L_800DE300; } // 800DE2F4
  c->r[3]=R32(c->r[6]+0x00000000u); // 800DE2F8
  goto L_800DE304; // 800DE2FC
L_800DE300:;
  c->r[3]=0u+0x00000000u; // 800DE300
L_800DE304:;
  cmps(c,0,(int32_t)c->r[4],0); // 800DE304
  if (crb(c,0)) { goto L_800DE314; } // 800DE308
  cmps(c,0,(int32_t)c->r[5],0); // 800DE30C
  if (!crb(c,2)) { goto L_800DE31C; } // 800DE310
L_800DE314:;
  c->r[3]=0u+0x00000025u; // 800DE314
  goto L_800DE728; // 800DE318
L_800DE31C:;
  cmpu(c,0,c->r[4],0x0000002Fu); // 800DE31C
  if (crb(c,1)) { goto L_800DE700; } // 800DE320
  c->r[6]=0u+0x80390000u; // 800DE324
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800DE328
  c->r[6]=c->r[6]+0xFFFFCD38u; // 800DE32C
  c->r[6]=R32(c->r[6]+c->r[0]); // 800DE330
  c->ctr=c->r[6]; // 800DE334
  if (true) { switch (c->ctr) { case 0x800DE33Cu: goto L_800DE33C; case 0x800DE348u: goto L_800DE348; case 0x800DE354u: goto L_800DE354; case 0x800DE360u: goto L_800DE360; case 0x800DE384u: goto L_800DE384; case 0x800DE3A8u: goto L_800DE3A8; case 0x800DE3CCu: goto L_800DE3CC; case 0x800DE3D8u: goto L_800DE3D8; case 0x800DE3F0u: goto L_800DE3F0; case 0x800DE408u: goto L_800DE408; case 0x800DE420u: goto L_800DE420; case 0x800DE42Cu: goto L_800DE42C; case 0x800DE438u: goto L_800DE438; case 0x800DE488u: goto L_800DE488; case 0x800DE4FCu: goto L_800DE4FC; case 0x800DE508u: goto L_800DE508; case 0x800DE518u: goto L_800DE518; case 0x800DE528u: goto L_800DE528; case 0x800DE538u: goto L_800DE538; case 0x800DE544u: goto L_800DE544; case 0x800DE550u: goto L_800DE550; case 0x800DE560u: goto L_800DE560; case 0x800DE56Cu: goto L_800DE56C; case 0x800DE578u: goto L_800DE578; case 0x800DE584u: goto L_800DE584; case 0x800DE590u: goto L_800DE590; case 0x800DE59Cu: goto L_800DE59C; case 0x800DE5A8u: goto L_800DE5A8; case 0x800DE5B4u: goto L_800DE5B4; case 0x800DE5C0u: goto L_800DE5C0; case 0x800DE5CCu: goto L_800DE5CC; case 0x800DE5D8u: goto L_800DE5D8; case 0x800DE5E4u: goto L_800DE5E4; case 0x800DE5F0u: goto L_800DE5F0; case 0x800DE5FCu: goto L_800DE5FC; case 0x800DE608u: goto L_800DE608; case 0x800DE614u: goto L_800DE614; case 0x800DE620u: goto L_800DE620; case 0x800DE62Cu: goto L_800DE62C; case 0x800DE63Cu: goto L_800DE63C; case 0x800DE648u: goto L_800DE648; case 0x800DE654u: goto L_800DE654; case 0x800DE660u: goto L_800DE660; case 0x800DE66Cu: goto L_800DE66C; case 0x800DE678u: goto L_800DE678; case 0x800DE694u: goto L_800DE694; case 0x800DE6B8u: goto L_800DE6B8; case 0x800DE6DCu: goto L_800DE6DC; default: break; } dispatch(c,c->ctr); return; } // 800DE338
L_800DE33C:;
  c->lr=0x800DE340u; f_800D8540(c); // 800DE33C
  W32(c->r[31]+0x00000000u,c->r[3]); // 800DE340
  goto L_800DE724; // 800DE344
L_800DE348:;
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE348
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 800DE34C
  goto L_800DE724; // 800DE350
L_800DE354:;
  {uint32_t ea=c->r[3]+0x00000038u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE354
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 800DE358
  goto L_800DE724; // 800DE35C
L_800DE360:;
  c->r[12]=R32(c->r[3]+0x00000010u); // 800DE360
  c->r[4]=c->r[31]|c->r[31]; // 800DE364
  c->r[5]=0u+0x00000001u; // 800DE368
  c->r[12]=R32(c->r[12]+0x00000058u); // 800DE36C
  c->ctr=c->r[12]; // 800DE370
  if (true) { c->lr=0x800DE378u; dispatch(c,c->ctr); } // 800DE374
  cmps(c,0,(int32_t)c->r[3],0); // 800DE378
  if (crb(c,2)) { goto L_800DE724; } // 800DE37C
  goto L_800DE728; // 800DE380
L_800DE384:;
  c->r[12]=R32(c->r[3]+0x00000010u); // 800DE384
  c->r[4]=c->r[31]|c->r[31]; // 800DE388
  c->r[5]=0u+0x00000002u; // 800DE38C
  c->r[12]=R32(c->r[12]+0x00000058u); // 800DE390
  c->ctr=c->r[12]; // 800DE394
  if (true) { c->lr=0x800DE39Cu; dispatch(c,c->ctr); } // 800DE398
  cmps(c,0,(int32_t)c->r[3],0); // 800DE39C
  if (crb(c,2)) { goto L_800DE724; } // 800DE3A0
  goto L_800DE728; // 800DE3A4
L_800DE3A8:;
  c->r[12]=R32(c->r[3]+0x00000010u); // 800DE3A8
  c->r[4]=c->r[31]|c->r[31]; // 800DE3AC
  c->r[5]=0u+0x00000003u; // 800DE3B0
  c->r[12]=R32(c->r[12]+0x00000058u); // 800DE3B4
  c->ctr=c->r[12]; // 800DE3B8
  if (true) { c->lr=0x800DE3C0u; dispatch(c,c->ctr); } // 800DE3BC
  cmps(c,0,(int32_t)c->r[3],0); // 800DE3C0
  if (crb(c,2)) { goto L_800DE724; } // 800DE3C4
  goto L_800DE728; // 800DE3C8
L_800DE3CC:;
  {uint32_t ea=c->r[3]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE3CC
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 800DE3D0
  goto L_800DE724; // 800DE3D4
L_800DE3D8:;
  c->r[4]=c->r[31]|c->r[31]; // 800DE3D8
  c->r[5]=0u+0x00000001u; // 800DE3DC
  c->lr=0x800DE3E4u; f_800DE120(c); // 800DE3E0
  cmps(c,0,(int32_t)c->r[3],0); // 800DE3E4
  if (crb(c,2)) { goto L_800DE724; } // 800DE3E8
  goto L_800DE728; // 800DE3EC
L_800DE3F0:;
  c->r[4]=c->r[31]|c->r[31]; // 800DE3F0
  c->r[5]=0u+0x00000002u; // 800DE3F4
  c->lr=0x800DE3FCu; f_800DE120(c); // 800DE3F8
  cmps(c,0,(int32_t)c->r[3],0); // 800DE3FC
  if (crb(c,2)) { goto L_800DE724; } // 800DE400
  goto L_800DE728; // 800DE404
L_800DE408:;
  c->r[4]=c->r[31]|c->r[31]; // 800DE408
  c->r[5]=0u+0x00000003u; // 800DE40C
  c->lr=0x800DE414u; f_800DE120(c); // 800DE410
  cmps(c,0,(int32_t)c->r[3],0); // 800DE414
  if (crb(c,2)) { goto L_800DE724; } // 800DE418
  goto L_800DE728; // 800DE41C
L_800DE420:;
  {uint32_t ea=c->r[3]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE420
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 800DE424
  goto L_800DE724; // 800DE428
L_800DE42C:;
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 800DE42C
  W32(c->r[5]+0x00000000u,c->r[0]); // 800DE430
  goto L_800DE724; // 800DE434
L_800DE438:;
  c->r[4]=R32(c->r[3]+0x000000ACu); // 800DE438
  cmps(c,0,(int32_t)c->r[4],0); // 800DE43C
  if (crb(c,2)) { goto L_800DE44C; } // 800DE440
  c->r[0]=R32(c->r[4]+0x00000000u); // 800DE444
  goto L_800DE450; // 800DE448
L_800DE44C:;
  c->r[0]=0u+0x00000000u; // 800DE44C
L_800DE450:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DE450
  if (crb(c,2)) { goto L_800DE478; } // 800DE454
  cmps(c,0,(int32_t)c->r[4],0); // 800DE458
  if (crb(c,2)) { goto L_800DE468; } // 800DE45C
  c->r[3]=R32(c->r[4]+0x00000000u); // 800DE460
  goto L_800DE46C; // 800DE464
L_800DE468:;
  c->r[3]=0u+0x00000000u; // 800DE468
L_800DE46C:;
  c->r[3]=R32(c->r[3]+0x000000A8u); // 800DE46C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DE470
  goto L_800DE480; // 800DE474
L_800DE478:;
  c->r[3]=R32(c->r[3]+0x000000A8u); // 800DE478
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DE47C
L_800DE480:;
  W32(c->r[5]+0x00000000u,c->r[0]); // 800DE480
  goto L_800DE724; // 800DE484
L_800DE488:;
  c->r[3]=R32(c->r[3]+0x00000060u); // 800DE488
  c->r[0]=rotl(c->r[3],0)&0x00000100u; cr0(c,c->r[0]); // 800DE48C
  if (crb(c,2)) { goto L_800DE4A0; } // 800DE490
  c->r[0]=0u+0x00000001u; // 800DE494
  W32(c->r[5]+0x00000000u,c->r[0]); // 800DE498
  goto L_800DE724; // 800DE49C
L_800DE4A0:;
  c->r[0]=rotl(c->r[3],0)&0x00000200u; cr0(c,c->r[0]); // 800DE4A0
  if (crb(c,2)) { goto L_800DE4B4; } // 800DE4A4
  c->r[0]=0u+0x00000002u; // 800DE4A8
  W32(c->r[5]+0x00000000u,c->r[0]); // 800DE4AC
  goto L_800DE724; // 800DE4B0
L_800DE4B4:;
  c->r[0]=rotl(c->r[3],0)&0x00000400u; cr0(c,c->r[0]); // 800DE4B4
  if (crb(c,2)) { goto L_800DE4C8; } // 800DE4B8
  c->r[0]=0u+0x00000003u; // 800DE4BC
  W32(c->r[5]+0x00000000u,c->r[0]); // 800DE4C0
  goto L_800DE724; // 800DE4C4
L_800DE4C8:;
  c->r[0]=rotl(c->r[3],0)&0x00000800u; cr0(c,c->r[0]); // 800DE4C8
  if (crb(c,2)) { goto L_800DE4DC; } // 800DE4CC
  c->r[0]=0u+0x00000004u; // 800DE4D0
  W32(c->r[5]+0x00000000u,c->r[0]); // 800DE4D4
  goto L_800DE724; // 800DE4D8
L_800DE4DC:;
  c->r[0]=rotl(c->r[3],0)&0x00800000u; cr0(c,c->r[0]); // 800DE4DC
  if (crb(c,2)) { goto L_800DE4F0; } // 800DE4E0
  c->r[0]=0u+0x00000005u; // 800DE4E4
  W32(c->r[5]+0x00000000u,c->r[0]); // 800DE4E8
  goto L_800DE724; // 800DE4EC
L_800DE4F0:;
  c->r[0]=0u+0x00000001u; // 800DE4F0
  W32(c->r[5]+0x00000000u,c->r[0]); // 800DE4F4
  goto L_800DE724; // 800DE4F8
L_800DE4FC:;
  c->r[0]=R32(c->r[3]+0x00000088u); // 800DE4FC
  W32(c->r[5]+0x00000000u,c->r[0]); // 800DE500
  goto L_800DE724; // 800DE504
L_800DE508:;
  c->r[0]=R32(c->r[3]+0x00000040u); // 800DE508
  c->r[0]=rotl(c->r[0],0)&0x00000018u; // 800DE50C
  W32(c->r[5]+0x00000000u,c->r[0]); // 800DE510
  goto L_800DE724; // 800DE514
L_800DE518:;
  c->r[0]=R32(c->r[3]+0x00000040u); // 800DE518
  c->r[0]=rotl(c->r[0],2)&0x00000001u; // 800DE51C
  W32(c->r[5]+0x00000000u,c->r[0]); // 800DE520
  goto L_800DE724; // 800DE524
L_800DE528:;
  c->r[0]=R32(c->r[3]+0x00000040u); // 800DE528
  c->r[0]=c->r[0]&0x04300000u; cr0(c,c->r[0]); // 800DE52C
  W32(c->r[5]+0x00000000u,c->r[0]); // 800DE530
  goto L_800DE724; // 800DE534
L_800DE538:;
  {uint32_t ea=c->r[3]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE538
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 800DE53C
  goto L_800DE724; // 800DE540
L_800DE544:;
  {uint32_t ea=c->r[3]+0x000000D8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE544
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 800DE548
  goto L_800DE724; // 800DE54C
L_800DE550:;
  c->r[0]=R32(c->r[3]+0x00000040u); // 800DE550
  c->r[0]=rotl(c->r[0],0)&0x000C0000u; // 800DE554
  W32(c->r[5]+0x00000000u,c->r[0]); // 800DE558
  goto L_800DE724; // 800DE55C
L_800DE560:;
  c->r[0]=R32(c->r[3]+0x000000F4u); // 800DE560
  W32(c->r[5]+0x00000000u,c->r[0]); // 800DE564
  goto L_800DE724; // 800DE568
L_800DE56C:;
  {uint32_t ea=c->r[3]+0x000000F8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE56C
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 800DE570
  goto L_800DE724; // 800DE574
L_800DE578:;
  {uint32_t ea=c->r[3]+0x000000FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE578
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 800DE57C
  goto L_800DE724; // 800DE580
L_800DE584:;
  {uint32_t ea=c->r[3]+0x00000100u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE584
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 800DE588
  goto L_800DE724; // 800DE58C
L_800DE590:;
  {uint32_t ea=c->r[3]+0x00000104u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE590
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 800DE594
  goto L_800DE724; // 800DE598
L_800DE59C:;
  {uint32_t ea=c->r[3]+0x00000110u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE59C
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 800DE5A0
  goto L_800DE724; // 800DE5A4
L_800DE5A8:;
  {uint32_t ea=c->r[3]+0x00000114u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE5A8
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 800DE5AC
  goto L_800DE724; // 800DE5B0
L_800DE5B4:;
  {uint32_t ea=c->r[3]+0x00000118u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE5B4
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 800DE5B8
  goto L_800DE724; // 800DE5BC
L_800DE5C0:;
  {uint32_t ea=c->r[3]+0x00000120u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE5C0
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 800DE5C4
  goto L_800DE724; // 800DE5C8
L_800DE5CC:;
  {uint32_t ea=c->r[3]+0x0000011Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE5CC
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 800DE5D0
  goto L_800DE724; // 800DE5D4
L_800DE5D8:;
  {uint32_t ea=c->r[3]+0x00000130u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE5D8
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 800DE5DC
  goto L_800DE724; // 800DE5E0
L_800DE5E4:;
  {uint32_t ea=c->r[3]+0x00000134u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE5E4
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 800DE5E8
  goto L_800DE724; // 800DE5EC
L_800DE5F0:;
  {uint32_t ea=c->r[3]+0x00000128u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE5F0
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 800DE5F4
  goto L_800DE724; // 800DE5F8
L_800DE5FC:;
  {uint32_t ea=c->r[3]+0x0000012Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE5FC
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 800DE600
  goto L_800DE724; // 800DE604
L_800DE608:;
  {uint32_t ea=c->r[3]+0x00000124u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE608
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 800DE60C
  goto L_800DE724; // 800DE610
L_800DE614:;
  {uint32_t ea=c->r[3]+0x00000090u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE614
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 800DE618
  goto L_800DE724; // 800DE61C
L_800DE620:;
  {uint32_t ea=c->r[3]+0x0000008Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE620
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 800DE624
  goto L_800DE724; // 800DE628
L_800DE62C:;
  c->r[0]=R32(c->r[3]+0x00000060u); // 800DE62C
  c->r[0]=rotl(c->r[0],13)&0x00000001u; // 800DE630
  W32(c->r[5]+0x00000000u,c->r[0]); // 800DE634
  goto L_800DE724; // 800DE638
L_800DE63C:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x000000A4u); // 800DE63C
  W32(c->r[5]+0x00000000u,c->r[0]); // 800DE640
  goto L_800DE724; // 800DE644
L_800DE648:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x000000A6u); // 800DE648
  W32(c->r[5]+0x00000000u,c->r[0]); // 800DE64C
  goto L_800DE724; // 800DE650
L_800DE654:;
  {uint32_t ea=c->r[3]+0x00000094u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE654
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 800DE658
  goto L_800DE724; // 800DE65C
L_800DE660:;
  {uint32_t ea=c->r[3]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE660
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 800DE664
  goto L_800DE724; // 800DE668
L_800DE66C:;
  {uint32_t ea=c->r[3]+0x0000009Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DE66C
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 800DE670
  goto L_800DE724; // 800DE674
L_800DE678:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000064u); // 800DE678
  c->r[3]=0u+0x00000058u; // 800DE67C
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 800DE680
  if (crb(c,2)) { goto L_800DE68C; } // 800DE684
  c->r[3]=rotl(c->r[4],24)&0x0000001Fu; // 800DE688
L_800DE68C:;
  W32(c->r[5]+0x00000000u,c->r[3]); // 800DE68C
  goto L_800DE724; // 800DE690
L_800DE694:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000064u); // 800DE694
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 800DE698
  if (crb(c,2)) { goto L_800DE6AC; } // 800DE69C
  c->r[0]=0u+0x00000000u; // 800DE6A0
  W32(c->r[5]+0x00000000u,c->r[0]); // 800DE6A4
  goto L_800DE724; // 800DE6A8
L_800DE6AC:;
  c->r[0]=0u+0x00000001u; // 800DE6AC
  W32(c->r[5]+0x00000000u,c->r[0]); // 800DE6B0
  goto L_800DE724; // 800DE6B4
L_800DE6B8:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000064u); // 800DE6B8
  c->r[0]=rotl(c->r[0],0)&0x00002000u; cr0(c,c->r[0]); // 800DE6BC
  if (crb(c,2)) { goto L_800DE6D0; } // 800DE6C0
  c->r[0]=0u+0x00000000u; // 800DE6C4
  W32(c->r[5]+0x00000000u,c->r[0]); // 800DE6C8
  goto L_800DE724; // 800DE6CC
L_800DE6D0:;
  c->r[0]=0u+0x00000001u; // 800DE6D0
  W32(c->r[5]+0x00000000u,c->r[0]); // 800DE6D4
  goto L_800DE724; // 800DE6D8
L_800DE6DC:;
  c->r[3]=R32(c->r[3]+0x00000138u); // 800DE6DC
  c->r[4]=c->r[31]|c->r[31]; // 800DE6E0
  c->r[12]=R32(c->r[3]+0x00000000u); // 800DE6E4
  c->r[12]=R32(c->r[12]+0x00000074u); // 800DE6E8
  c->ctr=c->r[12]; // 800DE6EC
  if (true) { c->lr=0x800DE6F4u; dispatch(c,c->ctr); } // 800DE6F0
  cmps(c,0,(int32_t)c->r[3],0); // 800DE6F4
  if (crb(c,2)) { goto L_800DE724; } // 800DE6F8
  goto L_800DE728; // 800DE6FC
L_800DE700:;
  c->r[3]=R32(c->r[3]+0x00000138u); // 800DE700
  c->r[5]=c->r[31]|c->r[31]; // 800DE704
  c->r[12]=R32(c->r[3]+0x00000000u); // 800DE708
  c->r[12]=R32(c->r[12]+0x00000064u); // 800DE70C
  c->ctr=c->r[12]; // 800DE710
  if (true) { c->lr=0x800DE718u; dispatch(c,c->ctr); } // 800DE714
  cmps(c,0,(int32_t)c->r[3],0); // 800DE718
  if (crb(c,2)) { goto L_800DE724; } // 800DE71C
  goto L_800DE728; // 800DE720
L_800DE724:;
  c->r[3]=0u+0x00000000u; // 800DE724
L_800DE728:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DE728
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DE72C
  c->lr=c->r[0]; // 800DE730
  c->r[1]=c->r[1]+0x00000010u; // 800DE734
  return; // 800DE738
}

// fn_800DE740
void f_800DE740(Ctx* __restrict c) {
  trace_call(0x800DE740u);
  cmps(c,0,(int32_t)c->r[6],0); // 800DE740
  if (crb(c,2)) { goto L_800DE74C; } // 800DE744
  goto L_800DE780; // 800DE748
L_800DE74C:;
  c->r[6]=R32(c->r[3]+0x000000ACu); // 800DE74C
  cmps(c,0,(int32_t)c->r[6],0); // 800DE750
  if (crb(c,2)) { goto L_800DE760; } // 800DE754
  c->r[0]=R32(c->r[6]+0x00000000u); // 800DE758
  goto L_800DE764; // 800DE75C
L_800DE760:;
  c->r[0]=0u+0x00000000u; // 800DE760
L_800DE764:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DE764
  if (crb(c,2)) { goto L_800DE780; } // 800DE768
  cmps(c,0,(int32_t)c->r[6],0); // 800DE76C
  if (crb(c,2)) { goto L_800DE77C; } // 800DE770
  c->r[3]=R32(c->r[6]+0x00000000u); // 800DE774
  goto L_800DE780; // 800DE778
L_800DE77C:;
  c->r[3]=0u+0x00000000u; // 800DE77C
L_800DE780:;
  cmps(c,0,(int32_t)c->r[5],0); // 800DE780
  if (!crb(c,2)) { goto L_800DE790; } // 800DE784
  c->r[3]=0u+0x00000025u; // 800DE788
  return; // 800DE78C
L_800DE790:;
  c->r[3]=R32(c->r[3]+0x00000138u); // 800DE790
  c->r[12]=R32(c->r[3]+0x00000000u); // 800DE794
  c->r[12]=R32(c->r[12]+0x000000C0u); // 800DE798
  c->ctr=c->r[12]; // 800DE79C
  if (true) { dispatch(c,c->ctr); return; } // 800DE7A0
}

// fn_800DE7A4
void f_800DE7A4(Ctx* __restrict c) {
  trace_call(0x800DE7A4u);
  return; // 800DE7A4
}

// fn_800DE7B0
void f_800DE7B0(Ctx* __restrict c) {
  trace_call(0x800DE7B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DE7B0
  c->r[0]=c->lr; // 800DE7B4
  cmps(c,0,(int32_t)c->r[6],0); // 800DE7B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DE7BC
  if (crb(c,2)) { goto L_800DE7CC; } // 800DE7C0
  c->r[7]=c->r[3]|c->r[3]; // 800DE7C4
  goto L_800DE808; // 800DE7C8
L_800DE7CC:;
  c->r[7]=R32(c->r[3]+0x000000ACu); // 800DE7CC
  cmps(c,0,(int32_t)c->r[7],0); // 800DE7D0
  if (crb(c,2)) { goto L_800DE7E0; } // 800DE7D4
  c->r[0]=R32(c->r[7]+0x00000000u); // 800DE7D8
  goto L_800DE7E4; // 800DE7DC
L_800DE7E0:;
  c->r[0]=0u+0x00000000u; // 800DE7E0
L_800DE7E4:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DE7E4
  if (crb(c,2)) { goto L_800DE804; } // 800DE7E8
  cmps(c,0,(int32_t)c->r[7],0); // 800DE7EC
  if (crb(c,2)) { goto L_800DE7FC; } // 800DE7F0
  c->r[7]=R32(c->r[7]+0x00000000u); // 800DE7F4
  goto L_800DE808; // 800DE7F8
L_800DE7FC:;
  c->r[7]=0u+0x00000000u; // 800DE7FC
  goto L_800DE808; // 800DE800
L_800DE804:;
  c->r[7]=c->r[3]|c->r[3]; // 800DE804
L_800DE808:;
  cmps(c,0,(int32_t)c->r[4],0); // 800DE808
  if (crb(c,0)) { goto L_800DE818; } // 800DE80C
  cmps(c,0,(int32_t)c->r[5],0); // 800DE810
  if (!crb(c,2)) { goto L_800DE820; } // 800DE814
L_800DE818:;
  c->r[3]=0u+0x00000025u; // 800DE818
  goto L_800DEF1C; // 800DE81C
L_800DE820:;
  c->r[0]=R32(c->r[7]+0x000000ACu); // 800DE820
  cmps(c,0,(int32_t)c->r[0],0); // 800DE824
  if (!crb(c,2)) { goto L_800DE830; } // 800DE828
  c->r[6]=0u+0x00000000u; // 800DE82C
L_800DE830:;
  cmpu(c,0,c->r[4],0x0000002Fu); // 800DE830
  if (crb(c,1)) { goto L_800DEEF4; } // 800DE834
  c->r[8]=0u+0x80390000u; // 800DE838
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800DE83C
  c->r[8]=c->r[8]+0xFFFFCDF8u; // 800DE840
  c->r[8]=R32(c->r[8]+c->r[0]); // 800DE844
  c->ctr=c->r[8]; // 800DE848
  if (true) { switch (c->ctr) { case 0x800DE850u: goto L_800DE850; case 0x800DE858u: goto L_800DE858; case 0x800DE870u: goto L_800DE870; case 0x800DE88Cu: goto L_800DE88C; case 0x800DE8A8u: goto L_800DE8A8; case 0x800DE8C4u: goto L_800DE8C4; case 0x800DE8E0u: goto L_800DE8E0; case 0x800DE8FCu: goto L_800DE8FC; case 0x800DE918u: goto L_800DE918; case 0x800DE934u: goto L_800DE934; case 0x800DE950u: goto L_800DE950; case 0x800DE968u: goto L_800DE968; case 0x800DE980u: goto L_800DE980; case 0x800DE988u: goto L_800DE988; case 0x800DEA44u: goto L_800DEA44; case 0x800DEA5Cu: goto L_800DEA5C; case 0x800DEA84u: goto L_800DEA84; case 0x800DEAB0u: goto L_800DEAB0; case 0x800DEAE4u: goto L_800DEAE4; case 0x800DEAFCu: goto L_800DEAFC; case 0x800DEB14u: goto L_800DEB14; case 0x800DEB3Cu: goto L_800DEB3C; case 0x800DEB50u: goto L_800DEB50; case 0x800DEB6Cu: goto L_800DEB6C; case 0x800DEB88u: goto L_800DEB88; case 0x800DEBA4u: goto L_800DEBA4; case 0x800DEBBCu: goto L_800DEBBC; case 0x800DEBD4u: goto L_800DEBD4; case 0x800DEBECu: goto L_800DEBEC; case 0x800DEC20u: goto L_800DEC20; case 0x800DEC54u: goto L_800DEC54; case 0x800DEC88u: goto L_800DEC88; case 0x800DECBCu: goto L_800DECBC; case 0x800DECF0u: goto L_800DECF0; case 0x800DED24u: goto L_800DED24; case 0x800DED58u: goto L_800DED58; case 0x800DED8Cu: goto L_800DED8C; case 0x800DEDA4u: goto L_800DEDA4; case 0x800DEDE8u: goto L_800DEDE8; case 0x800DEE08u: goto L_800DEE08; case 0x800DEE28u: goto L_800DEE28; case 0x800DEE40u: goto L_800DEE40; case 0x800DEE58u: goto L_800DEE58; case 0x800DEE70u: goto L_800DEE70; case 0x800DEE88u: goto L_800DEE88; case 0x800DEEA0u: goto L_800DEEA0; case 0x800DEEA8u: goto L_800DEEA8; case 0x800DEEECu: goto L_800DEEEC; default: break; } dispatch(c,c->ctr); return; } // 800DE84C
L_800DE850:;
  c->r[3]=0u+0x0000004Eu; // 800DE850
  goto L_800DEF1C; // 800DE854
L_800DE858:;
  c->r[0]=cntlz(c->r[6]); // 800DE858
  {uint32_t ea=c->r[5]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE85C
  c->r[3]=c->r[7]|c->r[7]; // 800DE860
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DE864
  c->lr=0x800DE86Cu; f_800DF250(c); // 800DE868
  goto L_800DEF1C; // 800DE86C
L_800DE870:;
  c->r[0]=cntlz(c->r[6]); // 800DE870
  {uint32_t ea=c->r[5]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE874
  c->r[3]=c->r[7]|c->r[7]; // 800DE878
  c->r[5]=0u+0x00000000u; // 800DE87C
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DE880
  c->lr=0x800DE888u; f_800DF4E0(c); // 800DE884
  goto L_800DEF1C; // 800DE888
L_800DE88C:;
  c->r[0]=cntlz(c->r[6]); // 800DE88C
  {uint32_t ea=c->r[5]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE890
  c->r[3]=c->r[7]|c->r[7]; // 800DE894
  c->r[5]=0u+0x00000001u; // 800DE898
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DE89C
  c->lr=0x800DE8A4u; f_800DF4E0(c); // 800DE8A0
  goto L_800DEF1C; // 800DE8A4
L_800DE8A8:;
  c->r[0]=cntlz(c->r[6]); // 800DE8A8
  {uint32_t ea=c->r[5]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE8AC
  c->r[3]=c->r[7]|c->r[7]; // 800DE8B0
  c->r[5]=0u+0x00000002u; // 800DE8B4
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DE8B8
  c->lr=0x800DE8C0u; f_800DF4E0(c); // 800DE8BC
  goto L_800DEF1C; // 800DE8C0
L_800DE8C4:;
  c->r[0]=cntlz(c->r[6]); // 800DE8C4
  {uint32_t ea=c->r[5]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE8C8
  c->r[3]=c->r[7]|c->r[7]; // 800DE8CC
  c->r[5]=0u+0x00000003u; // 800DE8D0
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DE8D4
  c->lr=0x800DE8DCu; f_800DF4E0(c); // 800DE8D8
  goto L_800DEF1C; // 800DE8DC
L_800DE8E0:;
  c->r[0]=cntlz(c->r[6]); // 800DE8E0
  {uint32_t ea=c->r[5]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE8E4
  c->r[3]=c->r[7]|c->r[7]; // 800DE8E8
  c->r[5]=0u+0x00000000u; // 800DE8EC
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DE8F0
  c->lr=0x800DE8F8u; f_800DB490(c); // 800DE8F4
  goto L_800DEF1C; // 800DE8F8
L_800DE8FC:;
  c->r[0]=cntlz(c->r[6]); // 800DE8FC
  {uint32_t ea=c->r[5]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE900
  c->r[3]=c->r[7]|c->r[7]; // 800DE904
  c->r[5]=0u+0x00000001u; // 800DE908
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DE90C
  c->lr=0x800DE914u; f_800DB490(c); // 800DE910
  goto L_800DEF1C; // 800DE914
L_800DE918:;
  c->r[0]=cntlz(c->r[6]); // 800DE918
  {uint32_t ea=c->r[5]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE91C
  c->r[3]=c->r[7]|c->r[7]; // 800DE920
  c->r[5]=0u+0x00000002u; // 800DE924
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DE928
  c->lr=0x800DE930u; f_800DB490(c); // 800DE92C
  goto L_800DEF1C; // 800DE930
L_800DE934:;
  c->r[0]=cntlz(c->r[6]); // 800DE934
  {uint32_t ea=c->r[5]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE938
  c->r[3]=c->r[7]|c->r[7]; // 800DE93C
  c->r[5]=0u+0x00000003u; // 800DE940
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DE944
  c->lr=0x800DE94Cu; f_800DB490(c); // 800DE948
  goto L_800DEF1C; // 800DE94C
L_800DE950:;
  c->r[0]=cntlz(c->r[6]); // 800DE950
  {uint32_t ea=c->r[5]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DE954
  c->r[3]=c->r[7]|c->r[7]; // 800DE958
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DE95C
  c->lr=0x800DE964u; f_800DB650(c); // 800DE960
  goto L_800DEF1C; // 800DE964
L_800DE968:;
  c->r[0]=cntlz(c->r[6]); // 800DE968
  c->r[4]=R32(c->r[5]+0x00000000u); // 800DE96C
  c->r[3]=c->r[7]|c->r[7]; // 800DE970
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DE974
  c->lr=0x800DE97Cu; f_800DB780(c); // 800DE978
  goto L_800DEF1C; // 800DE97C
L_800DE980:;
  c->r[3]=0u+0x0000004Eu; // 800DE980
  goto L_800DEF1C; // 800DE984
L_800DE988:;
  c->r[3]=0u+0xFF800000u; // 800DE988
  c->r[4]=R32(c->r[7]+0x00000060u); // 800DE98C
  c->r[0]=c->r[3]+0xFFFFF0FFu; // 800DE990
  c->r[0]=c->r[4]&c->r[0]; // 800DE994
  W32(c->r[7]+0x00000060u,c->r[0]); // 800DE998
  c->r[0]=R32(c->r[5]+0x00000000u); // 800DE99C
  cmps(c,0,(int32_t)c->r[0],1); // 800DE9A0
  if (crb(c,2)) { goto L_800DE9CC; } // 800DE9A4
  cmps(c,0,(int32_t)c->r[0],2); // 800DE9A8
  if (crb(c,2)) { goto L_800DE9DC; } // 800DE9AC
  cmps(c,0,(int32_t)c->r[0],3); // 800DE9B0
  if (crb(c,2)) { goto L_800DE9EC; } // 800DE9B4
  cmps(c,0,(int32_t)c->r[0],4); // 800DE9B8
  if (crb(c,2)) { goto L_800DE9FC; } // 800DE9BC
  cmps(c,0,(int32_t)c->r[0],5); // 800DE9C0
  if (crb(c,2)) { goto L_800DEA0C; } // 800DE9C4
  goto L_800DEA1C; // 800DE9C8
L_800DE9CC:;
  c->r[0]=R32(c->r[7]+0x00000060u); // 800DE9CC
  c->r[0]=c->r[0]|0x00000100u; // 800DE9D0
  W32(c->r[7]+0x00000060u,c->r[0]); // 800DE9D4
  goto L_800DEA28; // 800DE9D8
L_800DE9DC:;
  c->r[0]=R32(c->r[7]+0x00000060u); // 800DE9DC
  c->r[0]=c->r[0]|0x00000200u; // 800DE9E0
  W32(c->r[7]+0x00000060u,c->r[0]); // 800DE9E4
  goto L_800DEA28; // 800DE9E8
L_800DE9EC:;
  c->r[0]=R32(c->r[7]+0x00000060u); // 800DE9EC
  c->r[0]=c->r[0]|0x00000400u; // 800DE9F0
  W32(c->r[7]+0x00000060u,c->r[0]); // 800DE9F4
  goto L_800DEA28; // 800DE9F8
L_800DE9FC:;
  c->r[0]=R32(c->r[7]+0x00000060u); // 800DE9FC
  c->r[0]=c->r[0]|0x00000800u; // 800DEA00
  W32(c->r[7]+0x00000060u,c->r[0]); // 800DEA04
  goto L_800DEA28; // 800DEA08
L_800DEA0C:;
  c->r[0]=R32(c->r[7]+0x00000060u); // 800DEA0C
  c->r[0]=c->r[0]|0x00800000u; // 800DEA10
  W32(c->r[7]+0x00000060u,c->r[0]); // 800DEA14
  goto L_800DEA28; // 800DEA18
L_800DEA1C:;
  c->r[0]=R32(c->r[7]+0x00000060u); // 800DEA1C
  c->r[0]=c->r[0]|0x00000100u; // 800DEA20
  W32(c->r[7]+0x00000060u,c->r[0]); // 800DEA24
L_800DEA28:;
  c->r[0]=cntlz(c->r[6]); // 800DEA28
  c->r[4]=R32(c->r[7]+0x00000060u); // 800DEA2C
  c->r[3]=c->r[7]|c->r[7]; // 800DEA30
  c->r[5]=0u+0x00000000u; // 800DEA34
  c->r[6]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DEA38
  c->lr=0x800DEA40u; f_800DB9E0(c); // 800DEA3C
  goto L_800DEF1C; // 800DEA40
L_800DEA44:;
  c->r[0]=cntlz(c->r[6]); // 800DEA44
  c->r[4]=R32(c->r[5]+0x00000000u); // 800DEA48
  c->r[3]=c->r[7]|c->r[7]; // 800DEA4C
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DEA50
  c->lr=0x800DEA58u; f_800DB8B0(c); // 800DEA54
  goto L_800DEF1C; // 800DEA58
L_800DEA5C:;
  c->r[4]=R32(c->r[7]+0x00000040u); // 800DEA5C
  c->r[0]=cntlz(c->r[6]); // 800DEA60
  c->r[6]=R32(c->r[5]+0x00000000u); // 800DEA64
  c->r[3]=c->r[7]|c->r[7]; // 800DEA68
  c->r[4]=rotl(c->r[4],0)&0xFFFFFFE7u; // 800DEA6C
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DEA70
  c->r[4]=(rotl(c->r[6],0)&0x00000018u)|(c->r[4]&~0x00000018u); // 800DEA74
  W32(c->r[7]+0x00000040u,c->r[4]); // 800DEA78
  c->lr=0x800DEA80u; f_800DBB40(c); // 800DEA7C
  goto L_800DEF1C; // 800DEA80
L_800DEA84:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 800DEA84
  c->r[3]=c->r[7]|c->r[7]; // 800DEA88
  c->r[5]=R32(c->r[7]+0x00000040u); // 800DEA8C
  cmps(c,0,(int32_t)c->r[0],0); // 800DEA90
  c->r[4]=rotl(c->r[5],0)&0xBFFFFFFFu; // 800DEA94
  if (crb(c,2)) { goto L_800DEAA0; } // 800DEA98
  c->r[4]=c->r[5]|0x40000000u; // 800DEA9C
L_800DEAA0:;
  c->r[0]=cntlz(c->r[6]); // 800DEAA0
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DEAA4
  c->lr=0x800DEAACu; f_800DBB40(c); // 800DEAA8
  goto L_800DEF1C; // 800DEAAC
L_800DEAB0:;
  c->r[4]=R32(c->r[5]+0x00000000u); // 800DEAB0
  c->r[3]=0u+0xFBD00000u; // 800DEAB4
  c->r[5]=R32(c->r[7]+0x00000040u); // 800DEAB8
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800DEABC
  c->r[4]=c->r[4]&0x04300000u; cr0(c,c->r[4]); // 800DEAC0
  c->r[0]=cntlz(c->r[6]); // 800DEAC4
  c->r[6]=c->r[5]&c->r[3]; // 800DEAC8
  c->r[3]=c->r[7]|c->r[7]; // 800DEACC
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DEAD0
  c->r[4]=c->r[4]|c->r[6]; // 800DEAD4
  W32(c->r[7]+0x00000040u,c->r[4]); // 800DEAD8
  c->lr=0x800DEAE0u; f_800DBB40(c); // 800DEADC
  goto L_800DEF1C; // 800DEAE0
L_800DEAE4:;
  c->r[0]=cntlz(c->r[6]); // 800DEAE4
  {uint32_t ea=c->r[7]+0x000000D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DEAE8
  {uint32_t ea=c->r[5]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DEAEC
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DEAF0
  c->lr=0x800DEAF8u; f_800DBE50(c); // 800DEAF4
  goto L_800DEF1C; // 800DEAF8
L_800DEAFC:;
  c->r[0]=cntlz(c->r[6]); // 800DEAFC
  {uint32_t ea=c->r[7]+0x000000D4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DEB00
  {uint32_t ea=c->r[5]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DEB04
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DEB08
  c->lr=0x800DEB10u; f_800DBE50(c); // 800DEB0C
  goto L_800DEF1C; // 800DEB10
L_800DEB14:;
  c->r[4]=R32(c->r[7]+0x00000040u); // 800DEB14
  c->r[0]=cntlz(c->r[6]); // 800DEB18
  c->r[6]=R32(c->r[5]+0x00000000u); // 800DEB1C
  c->r[3]=c->r[7]|c->r[7]; // 800DEB20
  c->r[4]=rotl(c->r[4],0)&0xFFF3FFFFu; // 800DEB24
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DEB28
  c->r[4]=(rotl(c->r[6],0)&0x000C0000u)|(c->r[4]&~0x000C0000u); // 800DEB2C
  W32(c->r[7]+0x00000040u,c->r[4]); // 800DEB30
  c->lr=0x800DEB38u; f_800DBB40(c); // 800DEB34
  goto L_800DEF1C; // 800DEB38
L_800DEB3C:;
  c->r[0]=cntlz(c->r[6]); // 800DEB3C
  c->r[4]=R32(c->r[5]+0x00000000u); // 800DEB40
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DEB44
  c->lr=0x800DEB4Cu; f_800DBCD0(c); // 800DEB48
  goto L_800DEF1C; // 800DEB4C
L_800DEB50:;
  c->r[0]=cntlz(c->r[6]); // 800DEB50
  {uint32_t ea=c->r[7]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DEB54
  {uint32_t ea=c->r[7]+0x000000FCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800DEB58
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DEB5C
  {uint32_t ea=c->r[5]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DEB60
  c->lr=0x800DEB68u; f_800DC070(c); // 800DEB64
  goto L_800DEF1C; // 800DEB68
L_800DEB6C:;
  c->r[0]=cntlz(c->r[6]); // 800DEB6C
  {uint32_t ea=c->r[7]+0x00000100u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DEB70
  {uint32_t ea=c->r[7]+0x000000F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DEB74
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DEB78
  {uint32_t ea=c->r[5]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DEB7C
  c->lr=0x800DEB84u; f_800DC070(c); // 800DEB80
  goto L_800DEF1C; // 800DEB84
L_800DEB88:;
  c->r[0]=cntlz(c->r[6]); // 800DEB88
  {uint32_t ea=c->r[7]+0x000000FCu; c->f[2]=c->ps1[2]=RF32(ea);} // 800DEB8C
  {uint32_t ea=c->r[7]+0x000000F8u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DEB90
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DEB94
  {uint32_t ea=c->r[5]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DEB98
  c->lr=0x800DEBA0u; f_800DC070(c); // 800DEB9C
  goto L_800DEF1C; // 800DEBA0
L_800DEBA4:;
  c->r[0]=cntlz(c->r[6]); // 800DEBA4
  {uint32_t ea=c->r[5]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DEBA8
  c->r[3]=c->r[7]|c->r[7]; // 800DEBAC
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DEBB0
  c->lr=0x800DEBB8u; f_800DC230(c); // 800DEBB4
  goto L_800DEF1C; // 800DEBB8
L_800DEBBC:;
  c->r[0]=cntlz(c->r[6]); // 800DEBBC
  {uint32_t ea=c->r[5]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DEBC0
  c->r[3]=c->r[7]|c->r[7]; // 800DEBC4
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DEBC8
  c->lr=0x800DEBD0u; f_800DC6E0(c); // 800DEBCC
  goto L_800DEF1C; // 800DEBD0
L_800DEBD4:;
  c->r[0]=cntlz(c->r[6]); // 800DEBD4
  {uint32_t ea=c->r[5]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DEBD8
  c->r[3]=c->r[7]|c->r[7]; // 800DEBDC
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DEBE0
  c->lr=0x800DEBE8u; f_800DC880(c); // 800DEBE4
  goto L_800DEF1C; // 800DEBE8
L_800DEBEC:;
  c->r[0]=cntlz(c->r[6]); // 800DEBEC
  {uint32_t ea=c->r[5]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DEBF0
  {uint32_t ea=c->r[7]+0x0000011Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800DEBF4
  c->r[3]=c->r[7]|c->r[7]; // 800DEBF8
  {uint32_t ea=c->r[7]+0x00000120u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DEBFC
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DEC00
  {uint32_t ea=c->r[7]+0x00000124u; c->f[4]=c->ps1[4]=RF32(ea);} // 800DEC04
  {uint32_t ea=c->r[7]+0x00000128u; c->f[5]=c->ps1[5]=RF32(ea);} // 800DEC08
  {uint32_t ea=c->r[7]+0x0000012Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 800DEC0C
  {uint32_t ea=c->r[7]+0x00000130u; c->f[7]=c->ps1[7]=RF32(ea);} // 800DEC10
  {uint32_t ea=c->r[7]+0x00000134u; c->f[8]=c->ps1[8]=RF32(ea);} // 800DEC14
  c->lr=0x800DEC1Cu; f_800DCA20(c); // 800DEC18
  goto L_800DEF1C; // 800DEC1C
L_800DEC20:;
  c->r[0]=cntlz(c->r[6]); // 800DEC20
  {uint32_t ea=c->r[7]+0x00000118u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DEC24
  {uint32_t ea=c->r[7]+0x0000011Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800DEC28
  c->r[3]=c->r[7]|c->r[7]; // 800DEC2C
  {uint32_t ea=c->r[5]+0x00000000u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DEC30
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DEC34
  {uint32_t ea=c->r[7]+0x00000124u; c->f[4]=c->ps1[4]=RF32(ea);} // 800DEC38
  {uint32_t ea=c->r[7]+0x00000128u; c->f[5]=c->ps1[5]=RF32(ea);} // 800DEC3C
  {uint32_t ea=c->r[7]+0x0000012Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 800DEC40
  {uint32_t ea=c->r[7]+0x00000130u; c->f[7]=c->ps1[7]=RF32(ea);} // 800DEC44
  {uint32_t ea=c->r[7]+0x00000134u; c->f[8]=c->ps1[8]=RF32(ea);} // 800DEC48
  c->lr=0x800DEC50u; f_800DCA20(c); // 800DEC4C
  goto L_800DEF1C; // 800DEC50
L_800DEC54:;
  c->r[0]=cntlz(c->r[6]); // 800DEC54
  {uint32_t ea=c->r[7]+0x00000118u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DEC58
  {uint32_t ea=c->r[5]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DEC5C
  c->r[3]=c->r[7]|c->r[7]; // 800DEC60
  {uint32_t ea=c->r[7]+0x00000120u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DEC64
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DEC68
  {uint32_t ea=c->r[7]+0x00000124u; c->f[4]=c->ps1[4]=RF32(ea);} // 800DEC6C
  {uint32_t ea=c->r[7]+0x00000128u; c->f[5]=c->ps1[5]=RF32(ea);} // 800DEC70
  {uint32_t ea=c->r[7]+0x0000012Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 800DEC74
  {uint32_t ea=c->r[7]+0x00000130u; c->f[7]=c->ps1[7]=RF32(ea);} // 800DEC78
  {uint32_t ea=c->r[7]+0x00000134u; c->f[8]=c->ps1[8]=RF32(ea);} // 800DEC7C
  c->lr=0x800DEC84u; f_800DCA20(c); // 800DEC80
  goto L_800DEF1C; // 800DEC84
L_800DEC88:;
  c->r[0]=cntlz(c->r[6]); // 800DEC88
  {uint32_t ea=c->r[7]+0x00000118u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DEC8C
  {uint32_t ea=c->r[7]+0x0000011Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800DEC90
  c->r[3]=c->r[7]|c->r[7]; // 800DEC94
  {uint32_t ea=c->r[7]+0x00000120u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DEC98
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DEC9C
  {uint32_t ea=c->r[7]+0x00000124u; c->f[4]=c->ps1[4]=RF32(ea);} // 800DECA0
  {uint32_t ea=c->r[7]+0x00000128u; c->f[5]=c->ps1[5]=RF32(ea);} // 800DECA4
  {uint32_t ea=c->r[7]+0x0000012Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 800DECA8
  {uint32_t ea=c->r[5]+0x00000000u; c->f[7]=c->ps1[7]=RF32(ea);} // 800DECAC
  {uint32_t ea=c->r[7]+0x00000134u; c->f[8]=c->ps1[8]=RF32(ea);} // 800DECB0
  c->lr=0x800DECB8u; f_800DCA20(c); // 800DECB4
  goto L_800DEF1C; // 800DECB8
L_800DECBC:;
  c->r[0]=cntlz(c->r[6]); // 800DECBC
  {uint32_t ea=c->r[7]+0x00000118u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DECC0
  {uint32_t ea=c->r[7]+0x0000011Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800DECC4
  c->r[3]=c->r[7]|c->r[7]; // 800DECC8
  {uint32_t ea=c->r[7]+0x00000120u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DECCC
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DECD0
  {uint32_t ea=c->r[7]+0x00000124u; c->f[4]=c->ps1[4]=RF32(ea);} // 800DECD4
  {uint32_t ea=c->r[7]+0x00000128u; c->f[5]=c->ps1[5]=RF32(ea);} // 800DECD8
  {uint32_t ea=c->r[7]+0x0000012Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 800DECDC
  {uint32_t ea=c->r[7]+0x00000130u; c->f[7]=c->ps1[7]=RF32(ea);} // 800DECE0
  {uint32_t ea=c->r[5]+0x00000000u; c->f[8]=c->ps1[8]=RF32(ea);} // 800DECE4
  c->lr=0x800DECECu; f_800DCA20(c); // 800DECE8
  goto L_800DEF1C; // 800DECEC
L_800DECF0:;
  c->r[0]=cntlz(c->r[6]); // 800DECF0
  {uint32_t ea=c->r[7]+0x00000118u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DECF4
  {uint32_t ea=c->r[7]+0x0000011Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800DECF8
  c->r[3]=c->r[7]|c->r[7]; // 800DECFC
  {uint32_t ea=c->r[7]+0x00000120u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DED00
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DED04
  {uint32_t ea=c->r[7]+0x00000124u; c->f[4]=c->ps1[4]=RF32(ea);} // 800DED08
  {uint32_t ea=c->r[5]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 800DED0C
  {uint32_t ea=c->r[7]+0x0000012Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 800DED10
  {uint32_t ea=c->r[7]+0x00000130u; c->f[7]=c->ps1[7]=RF32(ea);} // 800DED14
  {uint32_t ea=c->r[7]+0x00000134u; c->f[8]=c->ps1[8]=RF32(ea);} // 800DED18
  c->lr=0x800DED20u; f_800DCA20(c); // 800DED1C
  goto L_800DEF1C; // 800DED20
L_800DED24:;
  c->r[0]=cntlz(c->r[6]); // 800DED24
  {uint32_t ea=c->r[7]+0x00000118u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DED28
  {uint32_t ea=c->r[7]+0x0000011Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800DED2C
  c->r[3]=c->r[7]|c->r[7]; // 800DED30
  {uint32_t ea=c->r[7]+0x00000120u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DED34
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DED38
  {uint32_t ea=c->r[7]+0x00000124u; c->f[4]=c->ps1[4]=RF32(ea);} // 800DED3C
  {uint32_t ea=c->r[7]+0x00000128u; c->f[5]=c->ps1[5]=RF32(ea);} // 800DED40
  {uint32_t ea=c->r[5]+0x00000000u; c->f[6]=c->ps1[6]=RF32(ea);} // 800DED44
  {uint32_t ea=c->r[7]+0x00000130u; c->f[7]=c->ps1[7]=RF32(ea);} // 800DED48
  {uint32_t ea=c->r[7]+0x00000134u; c->f[8]=c->ps1[8]=RF32(ea);} // 800DED4C
  c->lr=0x800DED54u; f_800DCA20(c); // 800DED50
  goto L_800DEF1C; // 800DED54
L_800DED58:;
  c->r[0]=cntlz(c->r[6]); // 800DED58
  {uint32_t ea=c->r[7]+0x00000118u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DED5C
  {uint32_t ea=c->r[7]+0x0000011Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 800DED60
  c->r[3]=c->r[7]|c->r[7]; // 800DED64
  {uint32_t ea=c->r[7]+0x00000120u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DED68
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DED6C
  {uint32_t ea=c->r[5]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 800DED70
  {uint32_t ea=c->r[7]+0x00000128u; c->f[5]=c->ps1[5]=RF32(ea);} // 800DED74
  {uint32_t ea=c->r[7]+0x0000012Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 800DED78
  {uint32_t ea=c->r[7]+0x00000130u; c->f[7]=c->ps1[7]=RF32(ea);} // 800DED7C
  {uint32_t ea=c->r[7]+0x00000134u; c->f[8]=c->ps1[8]=RF32(ea);} // 800DED80
  c->lr=0x800DED88u; f_800DCA20(c); // 800DED84
  goto L_800DEF1C; // 800DED88
L_800DED8C:;
  c->r[0]=cntlz(c->r[6]); // 800DED8C
  {uint32_t ea=c->r[5]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DED90
  c->r[3]=c->r[7]|c->r[7]; // 800DED94
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DED98
  c->lr=0x800DEDA0u; f_800DC3C0(c); // 800DED9C
  goto L_800DEF1C; // 800DEDA0
L_800DEDA4:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 800DEDA4
  cmps(c,0,(int32_t)c->r[0],0); // 800DEDA8
  if (crb(c,2)) { goto L_800DEDC0; } // 800DEDAC
  c->r[0]=R32(c->r[7]+0x00000060u); // 800DEDB0
  c->r[0]=c->r[0]|0x00080000u; // 800DEDB4
  W32(c->r[7]+0x00000060u,c->r[0]); // 800DEDB8
  goto L_800DEDCC; // 800DEDBC
L_800DEDC0:;
  c->r[0]=R32(c->r[7]+0x00000060u); // 800DEDC0
  c->r[0]=rotl(c->r[0],0)&0xFFF7FFFFu; // 800DEDC4
  W32(c->r[7]+0x00000060u,c->r[0]); // 800DEDC8
L_800DEDCC:;
  c->r[0]=cntlz(c->r[6]); // 800DEDCC
  c->r[4]=R32(c->r[7]+0x00000060u); // 800DEDD0
  c->r[3]=c->r[7]|c->r[7]; // 800DEDD4
  c->r[5]=0u+0x00000000u; // 800DEDD8
  c->r[6]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DEDDC
  c->lr=0x800DEDE4u; f_800DB9E0(c); // 800DEDE0
  goto L_800DEF1C; // 800DEDE4
L_800DEDE8:;
  c->r[4]=R32(c->r[5]+0x00000000u); // 800DEDE8
  c->r[0]=cntlz(c->r[6]); // 800DEDEC
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[7]+0x000000A6u); // 800DEDF0
  c->r[3]=c->r[7]|c->r[7]; // 800DEDF4
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[4]; // 800DEDF8
  c->r[6]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DEDFC
  c->lr=0x800DEE04u; f_800DCD10(c); // 800DEE00
  goto L_800DEF1C; // 800DEE04
L_800DEE08:;
  c->r[5]=R32(c->r[5]+0x00000000u); // 800DEE08
  c->r[0]=cntlz(c->r[6]); // 800DEE0C
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[7]+0x000000A4u); // 800DEE10
  c->r[3]=c->r[7]|c->r[7]; // 800DEE14
  c->r[5]=(uint32_t)(int32_t)(int16_t)c->r[5]; // 800DEE18
  c->r[6]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DEE1C
  c->lr=0x800DEE24u; f_800DCD10(c); // 800DEE20
  goto L_800DEF1C; // 800DEE24
L_800DEE28:;
  c->r[0]=cntlz(c->r[6]); // 800DEE28
  {uint32_t ea=c->r[5]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DEE2C
  c->r[3]=c->r[7]|c->r[7]; // 800DEE30
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DEE34
  c->lr=0x800DEE3Cu; f_800DC550(c); // 800DEE38
  goto L_800DEF1C; // 800DEE3C
L_800DEE40:;
  c->r[0]=cntlz(c->r[6]); // 800DEE40
  {uint32_t ea=c->r[5]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DEE44
  c->r[3]=c->r[7]|c->r[7]; // 800DEE48
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DEE4C
  c->lr=0x800DEE54u; f_800DD070(c); // 800DEE50
  goto L_800DEF1C; // 800DEE54
L_800DEE58:;
  c->r[0]=cntlz(c->r[6]); // 800DEE58
  {uint32_t ea=c->r[5]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DEE5C
  c->r[3]=c->r[7]|c->r[7]; // 800DEE60
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DEE64
  c->lr=0x800DEE6Cu; f_800DD200(c); // 800DEE68
  goto L_800DEF1C; // 800DEE6C
L_800DEE70:;
  c->r[0]=cntlz(c->r[6]); // 800DEE70
  {uint32_t ea=c->r[5]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DEE74
  c->r[3]=c->r[7]|c->r[7]; // 800DEE78
  c->r[4]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DEE7C
  c->lr=0x800DEE84u; f_800DD3B0(c); // 800DEE80
  goto L_800DEF1C; // 800DEE84
L_800DEE88:;
  c->r[0]=cntlz(c->r[6]); // 800DEE88
  c->r[4]=R32(c->r[5]+0x00000000u); // 800DEE8C
  c->r[3]=c->r[7]|c->r[7]; // 800DEE90
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DEE94
  c->lr=0x800DEE9Cu; f_800DD540(c); // 800DEE98
  goto L_800DEF1C; // 800DEE9C
L_800DEEA0:;
  c->r[3]=0u+0x0000004Eu; // 800DEEA0
  goto L_800DEF1C; // 800DEEA4
L_800DEEA8:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 800DEEA8
  cmps(c,0,(int32_t)c->r[0],0); // 800DEEAC
  if (crb(c,2)) { goto L_800DEEC4; } // 800DEEB0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[7]+0x00000064u); // 800DEEB4
  c->r[0]=c->r[0]|0x00002000u; // 800DEEB8
  W16(c->r[7]+0x00000064u,c->r[0]); // 800DEEBC
  goto L_800DEED0; // 800DEEC0
L_800DEEC4:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[7]+0x00000064u); // 800DEEC4
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800DEEC8
  W16(c->r[7]+0x00000064u,c->r[0]); // 800DEECC
L_800DEED0:;
  c->r[0]=cntlz(c->r[6]); // 800DEED0
  c->r[5]=(uint32_t)(int32_t)(int16_t)R16(c->r[7]+0x00000064u); // 800DEED4
  c->r[3]=c->r[7]|c->r[7]; // 800DEED8
  c->r[4]=0u+0x00000000u; // 800DEEDC
  c->r[6]=rotl(c->r[0],27)&0x07FFFFFFu; // 800DEEE0
  c->lr=0x800DEEE8u; f_800DB9E0(c); // 800DEEE4
  goto L_800DEF1C; // 800DEEE8
L_800DEEEC:;
  c->r[3]=0u+0x0000004Eu; // 800DEEEC
  goto L_800DEF1C; // 800DEEF0
L_800DEEF4:;
  c->r[3]=R32(c->r[7]+0x00000138u); // 800DEEF4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800DEEF8
  c->r[12]=R32(c->r[12]+0x000000C4u); // 800DEEFC
  c->ctr=c->r[12]; // 800DEF00
  if (true) { c->lr=0x800DEF08u; dispatch(c,c->ctr); } // 800DEF04
  cmps(c,0,(int32_t)c->r[3],0); // 800DEF08
  c->r[0]=0u+0x00000000u; // 800DEF0C
  if (crb(c,2)) { goto L_800DEF18; } // 800DEF10
  c->r[0]=c->r[3]|c->r[3]; // 800DEF14
L_800DEF18:;
  c->r[3]=c->r[0]|c->r[0]; // 800DEF18
L_800DEF1C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DEF1C
  c->lr=c->r[0]; // 800DEF20
  c->r[1]=c->r[1]+0x00000010u; // 800DEF24
  return; // 800DEF28
}

// fn_800DEF30
void f_800DEF30(Ctx* __restrict c) {
  trace_call(0x800DEF30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DEF30
  c->r[0]=c->lr; // 800DEF34
  cmps(c,0,(int32_t)c->r[4],0); // 800DEF38
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DEF3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DEF40
  c->r[31]=c->r[4]|c->r[4]; // 800DEF44
  c->r[5]=R32(c->r[3]+0x000000ACu); // 800DEF48
  if (!crb(c,2)) { goto L_800DEF58; } // 800DEF4C
  c->r[3]=0u+0x00000025u; // 800DEF50
  goto L_800DEFBC; // 800DEF54
L_800DEF58:;
  cmps(c,0,(int32_t)c->r[5],0); // 800DEF58
  if (crb(c,2)) { goto L_800DEF68; } // 800DEF5C
  c->r[0]=R32(c->r[5]+0x00000000u); // 800DEF60
  goto L_800DEF6C; // 800DEF64
L_800DEF68:;
  c->r[0]=0u+0x00000000u; // 800DEF68
L_800DEF6C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DEF6C
  if (crb(c,2)) { goto L_800DEF88; } // 800DEF70
  cmps(c,0,(int32_t)c->r[5],0); // 800DEF74
  if (crb(c,2)) { goto L_800DEF84; } // 800DEF78
  c->r[3]=R32(c->r[5]+0x00000000u); // 800DEF7C
  goto L_800DEF88; // 800DEF80
L_800DEF84:;
  c->r[3]=0u+0x00000000u; // 800DEF84
L_800DEF88:;
  c->r[3]=R32(c->r[3]+0x00000138u); // 800DEF88
  c->r[4]=c->r[31]|c->r[31]; // 800DEF8C
  c->r[12]=R32(c->r[3]+0x00000000u); // 800DEF90
  c->r[12]=R32(c->r[12]+0x00000068u); // 800DEF94
  c->ctr=c->r[12]; // 800DEF98
  if (true) { c->lr=0x800DEFA0u; dispatch(c,c->ctr); } // 800DEF9C
  cmps(c,0,(int32_t)c->r[3],0); // 800DEFA0
  if (crb(c,2)) { goto L_800DEFAC; } // 800DEFA4
  goto L_800DEFBC; // 800DEFA8
L_800DEFAC:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 800DEFAC
  c->r[3]=0u+0x00000000u; // 800DEFB0
  c->r[0]=c->r[4]+0x00000030u; // 800DEFB4
  W32(c->r[31]+0x00000000u,c->r[0]); // 800DEFB8
L_800DEFBC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DEFBC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DEFC0
  c->lr=c->r[0]; // 800DEFC4
  c->r[1]=c->r[1]+0x00000010u; // 800DEFC8
  return; // 800DEFCC
}

// fn_800DEFD0
void f_800DEFD0(Ctx* __restrict c) {
  trace_call(0x800DEFD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DEFD0
  c->r[0]=c->lr; // 800DEFD4
  cmps(c,0,(int32_t)c->r[4],0); // 800DEFD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DEFDC
  c->r[7]=R32(c->r[3]+0x000000ACu); // 800DEFE0
  if (crb(c,2)) { goto L_800DEFF0; } // 800DEFE4
  cmps(c,0,(int32_t)c->r[5],0); // 800DEFE8
  if (!crb(c,2)) { goto L_800DEFF8; } // 800DEFEC
L_800DEFF0:;
  c->r[3]=0u+0x00000025u; // 800DEFF0
  goto L_800DF050; // 800DEFF4
L_800DEFF8:;
  cmps(c,0,(int32_t)c->r[7],0); // 800DEFF8
  if (crb(c,2)) { goto L_800DF008; } // 800DEFFC
  c->r[0]=R32(c->r[7]+0x00000000u); // 800DF000
  goto L_800DF00C; // 800DF004
L_800DF008:;
  c->r[0]=0u+0x00000000u; // 800DF008
L_800DF00C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DF00C
  if (crb(c,2)) { goto L_800DF028; } // 800DF010
  cmps(c,0,(int32_t)c->r[7],0); // 800DF014
  if (crb(c,2)) { goto L_800DF024; } // 800DF018
  c->r[3]=R32(c->r[7]+0x00000000u); // 800DF01C
  goto L_800DF028; // 800DF020
L_800DF024:;
  c->r[3]=0u+0x00000000u; // 800DF024
L_800DF028:;
  c->r[3]=R32(c->r[3]+0x00000138u); // 800DF028
  c->r[12]=R32(c->r[3]+0x00000000u); // 800DF02C
  c->r[12]=R32(c->r[12]+0x0000006Cu); // 800DF030
  c->ctr=c->r[12]; // 800DF034
  if (true) { c->lr=0x800DF03Cu; dispatch(c,c->ctr); } // 800DF038
  cmps(c,0,(int32_t)c->r[3],0); // 800DF03C
  c->r[0]=0u+0x00000000u; // 800DF040
  if (crb(c,2)) { goto L_800DF04C; } // 800DF044
  c->r[0]=c->r[3]|c->r[3]; // 800DF048
L_800DF04C:;
  c->r[3]=c->r[0]|c->r[0]; // 800DF04C
L_800DF050:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DF050
  c->lr=c->r[0]; // 800DF054
  c->r[1]=c->r[1]+0x00000010u; // 800DF058
  return; // 800DF05C
}

// fn_800DF060
void f_800DF060(Ctx* __restrict c) {
  trace_call(0x800DF060u);
  cmps(c,0,(int32_t)c->r[4],0); // 800DF060
  c->r[5]=R32(c->r[3]+0x000000ACu); // 800DF064
  if (!crb(c,2)) { goto L_800DF074; } // 800DF068
  c->r[3]=0u+0x00000025u; // 800DF06C
  return; // 800DF070
L_800DF074:;
  cmps(c,0,(int32_t)c->r[5],0); // 800DF074
  if (crb(c,2)) { goto L_800DF084; } // 800DF078
  c->r[0]=R32(c->r[5]+0x00000000u); // 800DF07C
  goto L_800DF088; // 800DF080
L_800DF084:;
  c->r[0]=0u+0x00000000u; // 800DF084
L_800DF088:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DF088
  if (crb(c,2)) { goto L_800DF0A4; } // 800DF08C
  cmps(c,0,(int32_t)c->r[5],0); // 800DF090
  if (crb(c,2)) { goto L_800DF0A0; } // 800DF094
  c->r[3]=R32(c->r[5]+0x00000000u); // 800DF098
  goto L_800DF0A4; // 800DF09C
L_800DF0A0:;
  c->r[3]=0u+0x00000000u; // 800DF0A0
L_800DF0A4:;
  c->r[0]=R32(c->r[3]+0x00000070u); // 800DF0A4
  c->r[3]=0u+0x00000000u; // 800DF0A8
  W32(c->r[4]+0x00000000u,c->r[0]); // 800DF0AC
  return; // 800DF0B0
}

// fn_800DF0C0
void f_800DF0C0(Ctx* __restrict c) {
  trace_call(0x800DF0C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF0C0
  c->r[0]=c->lr; // 800DF0C4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DF0C8
  c->r[11]=c->r[1]+0x00000030u; // 800DF0CC
  c->lr=0x800DF0D4u; f_800C2E44(c); // 800DF0D0
  c->r[0]=R32(c->r[3]+0x000000A8u); // 800DF0D4
  c->r[29]=c->r[3]|c->r[3]; // 800DF0D8
  c->r[30]=c->r[4]|c->r[4]; // 800DF0DC
  c->r[31]=c->r[5]|c->r[5]; // 800DF0E0
  cmps(c,0,(int32_t)c->r[0],0); // 800DF0E4
  if (crb(c,2)) { goto L_800DF1E8; } // 800DF0E8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000064u); // 800DF0EC
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 800DF0F0
  if (crb(c,2)) { goto L_800DF188; } // 800DF0F4
  c->r[3]=R32(c->r[3]+0x00000028u); // 800DF0F8
  c->r[25]=0u+0x00000000u; // 800DF0FC
  c->r[28]=0u+0x00000000u; // 800DF100
  c->r[3]=R32(c->r[3]+0x00000030u); // 800DF104
  c->r[3]=R32(c->r[3]+0x00000038u); // 800DF108
  c->r[26]=R32(c->r[3]+0x00000008u); // 800DF10C
  c->r[27]=R32(c->r[3]+0x00000010u); // 800DF110
  goto L_800DF17C; // 800DF114
L_800DF118:;
  c->r[3]=R32(c->r[27]+c->r[28]); // 800DF118
  cmps(c,0,(int32_t)c->r[3],0); // 800DF11C
  if (crb(c,2)) { goto L_800DF174; } // 800DF120
  c->r[4]=R32(c->r[3]+0x000000ACu); // 800DF124
  cmps(c,0,(int32_t)c->r[4],0); // 800DF128
  if (crb(c,2)) { goto L_800DF138; } // 800DF12C
  c->r[0]=R32(c->r[4]+0x00000000u); // 800DF130
  goto L_800DF13C; // 800DF134
L_800DF138:;
  c->r[0]=0u+0x00000000u; // 800DF138
L_800DF13C:;
  cmpu(c,0,c->r[0],c->r[29]); // 800DF13C
  if (!crb(c,2)) { goto L_800DF174; } // 800DF140
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000064u); // 800DF144
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800DF148
  if (crb(c,2)) { goto L_800DF174; } // 800DF14C
  c->r[12]=R32(c->r[3]+0x00000010u); // 800DF150
  c->r[4]=c->r[30]|c->r[30]; // 800DF154
  c->r[5]=c->r[31]|c->r[31]; // 800DF158
  c->r[12]=R32(c->r[12]+0x00000090u); // 800DF15C
  c->ctr=c->r[12]; // 800DF160
  if (true) { c->lr=0x800DF168u; dispatch(c,c->ctr); } // 800DF164
  cmps(c,0,(int32_t)c->r[3],0); // 800DF168
  if (crb(c,2)) { goto L_800DF174; } // 800DF16C
  goto L_800DF1F4; // 800DF170
L_800DF174:;
  c->r[25]=c->r[25]+0x00000001u; // 800DF174
  c->r[28]=c->r[28]+0x00000004u; // 800DF178
L_800DF17C:;
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[26]); // 800DF17C
  if (crb(c,0)) { IRQCHK(c); goto L_800DF118; } // 800DF180
  goto L_800DF1E8; // 800DF184
L_800DF188:;
  c->r[25]=0u+0x00000000u; // 800DF188
  c->r[28]=0u+0x00000000u; // 800DF18C
  goto L_800DF1D8; // 800DF190
L_800DF194:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 800DF194
  cmps(c,0,(int32_t)c->r[3],0); // 800DF198
  if (crb(c,2)) { goto L_800DF1D0; } // 800DF19C
  c->r[3]=R32(c->r[3]+c->r[28]); // 800DF1A0
  cmps(c,0,(int32_t)c->r[3],0); // 800DF1A4
  if (crb(c,2)) { goto L_800DF1D0; } // 800DF1A8
  c->r[12]=R32(c->r[3]+0x00000010u); // 800DF1AC
  c->r[4]=c->r[30]|c->r[30]; // 800DF1B0
  c->r[5]=c->r[31]|c->r[31]; // 800DF1B4
  c->r[12]=R32(c->r[12]+0x00000090u); // 800DF1B8
  c->ctr=c->r[12]; // 800DF1BC
  if (true) { c->lr=0x800DF1C4u; dispatch(c,c->ctr); } // 800DF1C0
  cmps(c,0,(int32_t)c->r[3],0); // 800DF1C4
  if (crb(c,2)) { goto L_800DF1D0; } // 800DF1C8
  goto L_800DF1F4; // 800DF1CC
L_800DF1D0:;
  c->r[25]=c->r[25]+0x00000001u; // 800DF1D0
  c->r[28]=c->r[28]+0x00000004u; // 800DF1D4
L_800DF1D8:;
  c->r[3]=R32(c->r[29]+0x000000A8u); // 800DF1D8
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DF1DC
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[0]); // 800DF1E0
  if (crb(c,0)) { IRQCHK(c); goto L_800DF194; } // 800DF1E4
L_800DF1E8:;
  W32(c->r[29]+0x00000074u,c->r[30]); // 800DF1E8
  c->r[3]=0u+0x00000000u; // 800DF1EC
  W32(c->r[29]+0x00000078u,c->r[31]); // 800DF1F0
L_800DF1F4:;
  c->r[11]=c->r[1]+0x00000030u; // 800DF1F4
  c->lr=0x800DF1FCu; f_800C2E90(c); // 800DF1F8
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DF1FC
  c->lr=c->r[0]; // 800DF200
  c->r[1]=c->r[1]+0x00000030u; // 800DF204
  return; // 800DF208
}

// fn_800DF210
void f_800DF210(Ctx* __restrict c) {
  trace_call(0x800DF210u);
  {uint32_t ea=c->r[2]+0xFFFF9E4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF210
  fcmp(c,0,c->f[1],c->f[0]); // 800DF214
  if (!crb(c,1)) { goto L_800DF220; } // 800DF218
  c->f[1]=c->f[0]; // 800DF21C
L_800DF220:;
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF220
  fcmp(c,0,c->f[1],c->f[0]); // 800DF224
  if (!crb(c,0)) { goto L_800DF230; } // 800DF228
  c->f[1]=c->f[0]; // 800DF22C
L_800DF230:;
  {uint32_t ea=c->r[3]+0x00000030u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF230
  c->r[4]=0u+0x00000000u; // 800DF234
  {uint32_t ea=c->r[3]+0x00000034u; WF32(ea,c->f[1]);} // 800DF238
  c->f[1]=c->f[0]; // 800DF23C
  f_800DF250(c); return; // 800DF240
}

// fn_800DF250
void f_800DF250(Ctx* __restrict c) {
  trace_call(0x800DF250u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF250
  c->r[0]=c->lr; // 800DF254
  W32(c->r[1]+0x00000054u,c->r[0]); // 800DF258
  c->r[11]=c->r[1]+0x00000030u; // 800DF25C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 800DF260
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 800DF264
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 800DF268
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 800DF26C
  c->lr=0x800DF274u; f_800C2E4C(c); // 800DF270
  {uint32_t ea=c->r[2]+0xFFFF9E4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF274
  c->f[30]=c->f[1]; // 800DF278
  c->r[31]=c->r[3]|c->r[3]; // 800DF27C
  fcmp(c,0,c->f[1],c->f[0]); // 800DF280
  if (!crb(c,1)) { goto L_800DF28C; } // 800DF284
  c->f[30]=c->f[0]; // 800DF288
L_800DF28C:;
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF28C
  fcmp(c,0,c->f[30],c->f[0]); // 800DF290
  if (!crb(c,0)) { goto L_800DF29C; } // 800DF294
  c->f[30]=c->f[0]; // 800DF298
L_800DF29C:;
  cmps(c,0,(int32_t)c->r[4],0); // 800DF29C
  if (crb(c,2)) { goto L_800DF3C4; } // 800DF2A0
  c->r[3]=R32(c->r[3]+0x000000ACu); // 800DF2A4
  cmps(c,0,(int32_t)c->r[3],0); // 800DF2A8
  if (crb(c,2)) { goto L_800DF2B8; } // 800DF2AC
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DF2B0
  goto L_800DF2BC; // 800DF2B4
L_800DF2B8:;
  c->r[0]=0u+0x00000000u; // 800DF2B8
L_800DF2BC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DF2BC
  if (crb(c,2)) { goto L_800DF2D8; } // 800DF2C0
  cmps(c,0,(int32_t)c->r[3],0); // 800DF2C4
  if (crb(c,2)) { goto L_800DF2D4; } // 800DF2C8
  c->r[31]=R32(c->r[3]+0x00000000u); // 800DF2CC
  goto L_800DF2D8; // 800DF2D0
L_800DF2D4:;
  c->r[31]=0u+0x00000000u; // 800DF2D4
L_800DF2D8:;
  {uint32_t ea=c->r[31]+0x00000030u; WF32(ea,c->f[30]);} // 800DF2D8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000064u); // 800DF2DC
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 800DF2E0
  if (crb(c,2)) { goto L_800DF36C; } // 800DF2E4
  c->r[3]=R32(c->r[31]+0x00000028u); // 800DF2E8
  c->r[27]=0u+0x00000000u; // 800DF2EC
  c->r[30]=0u+0x00000000u; // 800DF2F0
  c->r[3]=R32(c->r[3]+0x00000030u); // 800DF2F4
  c->r[3]=R32(c->r[3]+0x00000038u); // 800DF2F8
  c->r[28]=R32(c->r[3]+0x00000008u); // 800DF2FC
  c->r[29]=R32(c->r[3]+0x00000010u); // 800DF300
  goto L_800DF360; // 800DF304
L_800DF308:;
  c->r[3]=R32(c->r[29]+c->r[30]); // 800DF308
  cmps(c,0,(int32_t)c->r[3],0); // 800DF30C
  if (crb(c,2)) { goto L_800DF358; } // 800DF310
  c->r[4]=R32(c->r[3]+0x000000ACu); // 800DF314
  cmps(c,0,(int32_t)c->r[4],0); // 800DF318
  if (crb(c,2)) { goto L_800DF328; } // 800DF31C
  c->r[0]=R32(c->r[4]+0x00000000u); // 800DF320
  goto L_800DF32C; // 800DF324
L_800DF328:;
  c->r[0]=0u+0x00000000u; // 800DF328
L_800DF32C:;
  cmpu(c,0,c->r[0],c->r[31]); // 800DF32C
  if (!crb(c,2)) { goto L_800DF358; } // 800DF330
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000064u); // 800DF334
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800DF338
  if (crb(c,2)) { goto L_800DF358; } // 800DF33C
  c->f[1]=c->f[30]; // 800DF340
  c->r[4]=0u+0x00000000u; // 800DF344
  c->lr=0x800DF34Cu; f_800DF250(c); // 800DF348
  cmps(c,0,(int32_t)c->r[3],0); // 800DF34C
  if (crb(c,2)) { goto L_800DF358; } // 800DF350
  goto L_800DF47C; // 800DF354
L_800DF358:;
  c->r[27]=c->r[27]+0x00000001u; // 800DF358
  c->r[30]=c->r[30]+0x00000004u; // 800DF35C
L_800DF360:;
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[28]); // 800DF360
  if (crb(c,0)) { IRQCHK(c); goto L_800DF308; } // 800DF364
  goto L_800DF478; // 800DF368
L_800DF36C:;
  c->r[27]=0u+0x00000000u; // 800DF36C
  c->r[30]=0u+0x00000000u; // 800DF370
  goto L_800DF3B0; // 800DF374
L_800DF378:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 800DF378
  cmps(c,0,(int32_t)c->r[3],0); // 800DF37C
  if (crb(c,2)) { goto L_800DF3A8; } // 800DF380
  c->r[3]=R32(c->r[3]+c->r[30]); // 800DF384
  cmps(c,0,(int32_t)c->r[3],0); // 800DF388
  if (crb(c,2)) { goto L_800DF3A8; } // 800DF38C
  c->f[1]=c->f[30]; // 800DF390
  c->r[4]=0u+0x00000000u; // 800DF394
  c->lr=0x800DF39Cu; f_800DF250(c); // 800DF398
  cmps(c,0,(int32_t)c->r[3],0); // 800DF39C
  if (crb(c,2)) { goto L_800DF3A8; } // 800DF3A0
  goto L_800DF47C; // 800DF3A4
L_800DF3A8:;
  c->r[27]=c->r[27]+0x00000001u; // 800DF3A8
  c->r[30]=c->r[30]+0x00000004u; // 800DF3AC
L_800DF3B0:;
  c->r[3]=R32(c->r[31]+0x000000A8u); // 800DF3B0
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DF3B4
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800DF3B8
  if (crb(c,0)) { IRQCHK(c); goto L_800DF378; } // 800DF3BC
  goto L_800DF478; // 800DF3C0
L_800DF3C4:;
  c->r[4]=R32(c->r[3]+0x000000ACu); // 800DF3C4
  {uint32_t ea=c->r[3]+0x00000030u; WF32(ea,c->f[30]);} // 800DF3C8
  cmps(c,0,(int32_t)c->r[4],0); // 800DF3CC
  if (crb(c,2)) { goto L_800DF3DC; } // 800DF3D0
  c->r[0]=R32(c->r[4]+0x00000018u); // 800DF3D4
  goto L_800DF3E0; // 800DF3D8
L_800DF3DC:;
  c->r[0]=0u+0x00000000u; // 800DF3DC
L_800DF3E0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DF3E0
  if (crb(c,2)) { goto L_800DF478; } // 800DF3E4
  {uint32_t ea=c->r[3]+0x00000030u; c->f[31]=c->ps1[31]=RF32(ea);} // 800DF3E8
  {uint32_t ea=c->r[3]+0x00000034u; c->f[30]=c->ps1[30]=RF32(ea);} // 800DF3EC
  c->r[3]=c->r[31]|c->r[31]; // 800DF3F0
  c->lr=0x800DF3F8u; f_800DD8D0(c); // 800DF3F4
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800DF3F8
  {uint32_t ea=c->r[31]+0x00000084u; c->f[31]=c->ps1[31]=RF32(ea);} // 800DF3FC
  {uint32_t ea=c->r[2]+0xFFFF9E58u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF400
  fcmp(c,0,c->f[0],c->f[31]); // 800DF404
  c->f[30]=c->ps1[30]=S(c->f[30]*c->f[1]); // 800DF408
  if (crb(c,2)) { goto L_800DF44C; } // 800DF40C
  c->lr=0x800DF414u; f_800C8D44(c); // 800DF410
  c->r[3]=c->r[3]^0x80000000u; // 800DF414
  c->r[0]=0u+0x43300000u; // 800DF418
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 800DF41C
  {uint32_t ea=c->r[2]+0xFFFF9E60u; c->f[3]=RF64(ea);} // 800DF420
  W32(c->r[1]+0x00000008u,c->r[0]); // 800DF424
  {uint32_t ea=c->r[2]+0xFFFF9E4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF428
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 800DF42C
  {uint32_t ea=c->r[2]+0xFFFF9E70u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DF430
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 800DF434
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800DF438
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 800DF43C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[1]); // 800DF440
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 800DF444
  c->f[30]=c->ps1[30]=S(c->f[30]*c->f[0]); // 800DF448
L_800DF44C:;
  c->r[3]=R32(c->r[31]+0x000000ACu); // 800DF44C
  cmps(c,0,(int32_t)c->r[3],0); // 800DF450
  if (crb(c,2)) { goto L_800DF460; } // 800DF454
  c->r[3]=R32(c->r[3]+0x00000018u); // 800DF458
  goto L_800DF464; // 800DF45C
L_800DF460:;
  c->r[3]=0u+0x00000000u; // 800DF460
L_800DF464:;
  c->f[1]=c->f[30]; // 800DF464
  c->lr=0x800DF46Cu; f_80186C30(c); // 800DF468
  cmps(c,0,(int32_t)c->r[3],0); // 800DF46C
  if (crb(c,2)) { goto L_800DF478; } // 800DF470
  goto L_800DF47C; // 800DF474
L_800DF478:;
  c->r[3]=0u+0x00000000u; // 800DF478
L_800DF47C:;
  c->r[11]=c->r[1]+0x00000030u; // 800DF47C
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 800DF480
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 800DF484
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 800DF488
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 800DF48C
  c->lr=0x800DF494u; f_800C2E98(c); // 800DF490
  c->r[0]=R32(c->r[1]+0x00000054u); // 800DF494
  c->lr=c->r[0]; // 800DF498
  c->r[1]=c->r[1]+0x00000050u; // 800DF49C
  return; // 800DF4A0
}

// fn_800DF4B0
void f_800DF4B0(Ctx* __restrict c) {
  trace_call(0x800DF4B0u);
  cmps(c,0,(int32_t)c->r[4],0); // 800DF4B0
  if (!crb(c,2)) { goto L_800DF4C0; } // 800DF4B4
  c->r[3]=0u+0x00000025u; // 800DF4B8
  return; // 800DF4BC
L_800DF4C0:;
  {uint32_t ea=c->r[3]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF4C0
  c->r[3]=0u+0x00000000u; // 800DF4C4
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 800DF4C8
  return; // 800DF4CC
}

// NHTTPi_memclr
void f_800DF4D0(Ctx* __restrict c) {
  trace_call(0x800DF4D0u);
  c->r[5]=c->r[4]|c->r[4]; // 800DF4D0
  c->r[4]=0u+0x00000000u; // 800DF4D4
  f_800DF4E0(c); return; // 800DF4D8
}

// memset_800DF4E0
void f_800DF4E0(Ctx* __restrict c) {
  trace_call(0x800DF4E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF4E0
  c->r[0]=c->lr; // 800DF4E4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800DF4E8
  c->r[11]=c->r[1]+0x00000020u; // 800DF4EC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 800DF4F0
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 800DF4F4
  c->lr=0x800DF4FCu; f_800C2E4C(c); // 800DF4F8
  c->f[31]=c->f[1]; // 800DF4FC
  cmps(c,0,(int32_t)c->r[5],1); // 800DF500
  c->r[31]=c->r[3]|c->r[3]; // 800DF504
  if (crb(c,2)) { goto L_800DF520; } // 800DF508
  cmps(c,0,(int32_t)c->r[5],2); // 800DF50C
  if (crb(c,2)) { goto L_800DF52C; } // 800DF510
  cmps(c,0,(int32_t)c->r[5],3); // 800DF514
  if (crb(c,2)) { goto L_800DF538; } // 800DF518
  goto L_800DF540; // 800DF51C
L_800DF520:;
  {uint32_t ea=c->r[2]+0xFFFF9E8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF520
  c->f[31]=c->ps1[31]=S(c->f[1]*c->f[0]); // 800DF524
  goto L_800DF540; // 800DF528
L_800DF52C:;
  {uint32_t ea=c->r[2]+0xFFFF9E90u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF52C
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[0]); // 800DF530
  goto L_800DF540; // 800DF534
L_800DF538:;
  {uint32_t ea=c->r[2]+0xFFFF9E94u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF538
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[0]); // 800DF53C
L_800DF540:;
  cmps(c,0,(int32_t)c->r[4],0); // 800DF540
  if (crb(c,2)) { goto L_800DF670; } // 800DF544
  c->r[3]=R32(c->r[3]+0x000000ACu); // 800DF548
  cmps(c,0,(int32_t)c->r[3],0); // 800DF54C
  if (crb(c,2)) { goto L_800DF55C; } // 800DF550
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DF554
  goto L_800DF560; // 800DF558
L_800DF55C:;
  c->r[0]=0u+0x00000000u; // 800DF55C
L_800DF560:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DF560
  if (crb(c,2)) { goto L_800DF57C; } // 800DF564
  cmps(c,0,(int32_t)c->r[3],0); // 800DF568
  if (crb(c,2)) { goto L_800DF578; } // 800DF56C
  c->r[31]=R32(c->r[3]+0x00000000u); // 800DF570
  goto L_800DF57C; // 800DF574
L_800DF578:;
  c->r[31]=0u+0x00000000u; // 800DF578
L_800DF57C:;
  {uint32_t ea=c->r[31]+0x00000038u; WF32(ea,c->f[31]);} // 800DF57C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[31]+0x00000064u); // 800DF580
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 800DF584
  if (crb(c,2)) { goto L_800DF614; } // 800DF588
  c->r[3]=R32(c->r[31]+0x00000028u); // 800DF58C
  c->r[27]=0u+0x00000000u; // 800DF590
  c->r[30]=0u+0x00000000u; // 800DF594
  c->r[3]=R32(c->r[3]+0x00000030u); // 800DF598
  c->r[3]=R32(c->r[3]+0x00000038u); // 800DF59C
  c->r[28]=R32(c->r[3]+0x00000008u); // 800DF5A0
  c->r[29]=R32(c->r[3]+0x00000010u); // 800DF5A4
  goto L_800DF608; // 800DF5A8
L_800DF5AC:;
  c->r[3]=R32(c->r[29]+c->r[30]); // 800DF5AC
  cmps(c,0,(int32_t)c->r[3],0); // 800DF5B0
  if (crb(c,2)) { goto L_800DF600; } // 800DF5B4
  c->r[4]=R32(c->r[3]+0x000000ACu); // 800DF5B8
  cmps(c,0,(int32_t)c->r[4],0); // 800DF5BC
  if (crb(c,2)) { goto L_800DF5CC; } // 800DF5C0
  c->r[0]=R32(c->r[4]+0x00000000u); // 800DF5C4
  goto L_800DF5D0; // 800DF5C8
L_800DF5CC:;
  c->r[0]=0u+0x00000000u; // 800DF5CC
L_800DF5D0:;
  cmpu(c,0,c->r[0],c->r[31]); // 800DF5D0
  if (!crb(c,2)) { goto L_800DF600; } // 800DF5D4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000064u); // 800DF5D8
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800DF5DC
  if (crb(c,2)) { goto L_800DF600; } // 800DF5E0
  c->f[1]=c->f[31]; // 800DF5E4
  c->r[4]=0u+0x00000000u; // 800DF5E8
  c->r[5]=0u+0x00000000u; // 800DF5EC
  c->lr=0x800DF5F4u; f_800DF4E0(c); // 800DF5F0
  cmps(c,0,(int32_t)c->r[3],0); // 800DF5F4
  if (crb(c,2)) { goto L_800DF600; } // 800DF5F8
  goto L_800DF718; // 800DF5FC
L_800DF600:;
  c->r[27]=c->r[27]+0x00000001u; // 800DF600
  c->r[30]=c->r[30]+0x00000004u; // 800DF604
L_800DF608:;
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[28]); // 800DF608
  if (crb(c,0)) { IRQCHK(c); goto L_800DF5AC; } // 800DF60C
  goto L_800DF714; // 800DF610
L_800DF614:;
  c->r[27]=0u+0x00000000u; // 800DF614
  c->r[30]=0u+0x00000000u; // 800DF618
  goto L_800DF65C; // 800DF61C
L_800DF620:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 800DF620
  cmps(c,0,(int32_t)c->r[3],0); // 800DF624
  if (crb(c,2)) { goto L_800DF654; } // 800DF628
  c->r[3]=R32(c->r[3]+c->r[30]); // 800DF62C
  cmps(c,0,(int32_t)c->r[3],0); // 800DF630
  if (crb(c,2)) { goto L_800DF654; } // 800DF634
  c->f[1]=c->f[31]; // 800DF638
  c->r[4]=0u+0x00000000u; // 800DF63C
  c->r[5]=0u+0x00000000u; // 800DF640
  c->lr=0x800DF648u; f_800DF4E0(c); // 800DF644
  cmps(c,0,(int32_t)c->r[3],0); // 800DF648
  if (crb(c,2)) { goto L_800DF654; } // 800DF64C
  goto L_800DF718; // 800DF650
L_800DF654:;
  c->r[27]=c->r[27]+0x00000001u; // 800DF654
  c->r[30]=c->r[30]+0x00000004u; // 800DF658
L_800DF65C:;
  c->r[3]=R32(c->r[31]+0x000000A8u); // 800DF65C
  c->r[0]=R32(c->r[3]+0x00000000u); // 800DF660
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 800DF664
  if (crb(c,0)) { IRQCHK(c); goto L_800DF620; } // 800DF668
  goto L_800DF714; // 800DF66C
L_800DF670:;
  c->r[4]=R32(c->r[3]+0x000000ACu); // 800DF670
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[31]);} // 800DF674
  cmps(c,0,(int32_t)c->r[4],0); // 800DF678
  if (crb(c,2)) { goto L_800DF688; } // 800DF67C
  c->r[0]=R32(c->r[4]+0x00000018u); // 800DF680
  goto L_800DF68C; // 800DF684
L_800DF688:;
  c->r[0]=0u+0x00000000u; // 800DF688
L_800DF68C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DF68C
  if (crb(c,2)) { goto L_800DF6E0; } // 800DF690
  {uint32_t ea=c->r[3]+0x00000038u; c->f[31]=c->ps1[31]=RF32(ea);} // 800DF694
  c->r[3]=c->r[31]|c->r[31]; // 800DF698
  c->lr=0x800DF6A0u; f_800DE000(c); // 800DF69C
  c->f[2]=c->ps1[2]=S(c->f[31]+c->f[1]); // 800DF6A0
  {uint32_t ea=c->r[2]+0xFFFF9E80u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF6A4
  {uint32_t ea=c->r[2]+0xFFFF9E78u; c->f[1]=RF64(ea);} // 800DF6A8
  c->f[2]=c->ps1[2]=S(c->f[0]*c->f[2]); // 800DF6AC
  c->lr=0x800DF6B4u; f_800D29C4(c); // 800DF6B0
  c->r[3]=R32(c->r[31]+0x000000ACu); // 800DF6B4
  c->f[1]=c->ps1[1]=S(c->f[1]); // 800DF6B8
  cmps(c,0,(int32_t)c->r[3],0); // 800DF6BC
  if (crb(c,2)) { goto L_800DF6CC; } // 800DF6C0
  c->r[3]=R32(c->r[3]+0x00000018u); // 800DF6C4
  goto L_800DF6D0; // 800DF6C8
L_800DF6CC:;
  c->r[3]=0u+0x00000000u; // 800DF6CC
L_800DF6D0:;
  c->lr=0x800DF6D4u; f_80186CD0(c); // 800DF6D0
  cmps(c,0,(int32_t)c->r[3],0); // 800DF6D4
  if (crb(c,2)) { goto L_800DF6E0; } // 800DF6D8
  goto L_800DF718; // 800DF6DC
L_800DF6E0:;
  c->r[3]=R32(c->r[31]+0x00000138u); // 800DF6E0
  cmps(c,0,(int32_t)c->r[3],0); // 800DF6E4
  if (crb(c,2)) { goto L_800DF714; } // 800DF6E8
  c->r[0]=R32(c->r[31]+0x00000060u); // 800DF6EC
  c->r[0]=rotl(c->r[0],0)&0x00020000u; cr0(c,c->r[0]); // 800DF6F0
  if (crb(c,2)) { goto L_800DF714; } // 800DF6F4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800DF6F8
  c->r[12]=R32(c->r[12]+0x000000B0u); // 800DF6FC
  c->ctr=c->r[12]; // 800DF700
  if (true) { c->lr=0x800DF708u; dispatch(c,c->ctr); } // 800DF704
  cmps(c,0,(int32_t)c->r[3],0); // 800DF708
  if (crb(c,2)) { goto L_800DF714; } // 800DF70C
  goto L_800DF718; // 800DF710
L_800DF714:;
  c->r[3]=0u+0x00000000u; // 800DF714
L_800DF718:;
  c->r[11]=c->r[1]+0x00000020u; // 800DF718
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 800DF71C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 800DF720
  c->lr=0x800DF728u; f_800C2E98(c); // 800DF724
  c->r[0]=R32(c->r[1]+0x00000034u); // 800DF728
  c->lr=c->r[0]; // 800DF72C
  c->r[1]=c->r[1]+0x00000030u; // 800DF730
  return; // 800DF734
}

// fn_800DF740
void f_800DF740(Ctx* __restrict c) {
  trace_call(0x800DF740u);
  cmps(c,0,(int32_t)c->r[4],0); // 800DF740
  if (!crb(c,2)) { goto L_800DF750; } // 800DF744
  c->r[3]=0u+0x00000025u; // 800DF748
  return; // 800DF74C
L_800DF750:;
  {uint32_t ea=c->r[3]+0x00000038u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DF750
  cmps(c,0,(int32_t)c->r[5],1); // 800DF754
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[1]);} // 800DF758
  if (crb(c,2)) { goto L_800DF774; } // 800DF75C
  cmps(c,0,(int32_t)c->r[5],2); // 800DF760
  if (crb(c,2)) { goto L_800DF784; } // 800DF764
  cmps(c,0,(int32_t)c->r[5],3); // 800DF768
  if (crb(c,2)) { goto L_800DF794; } // 800DF76C
  goto L_800DF7A0; // 800DF770
L_800DF774:;
  {uint32_t ea=c->r[2]+0xFFFF9E80u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF774
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800DF778
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 800DF77C
  goto L_800DF7A0; // 800DF780
L_800DF784:;
  {uint32_t ea=c->r[2]+0xFFFF9E90u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF784
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800DF788
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 800DF78C
  goto L_800DF7A0; // 800DF790
L_800DF794:;
  {uint32_t ea=c->r[2]+0xFFFF9E94u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF794
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 800DF798
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 800DF79C
L_800DF7A0:;
  c->r[3]=0u+0x00000000u; // 800DF7A0
  return; // 800DF7A4
}

// fn_800DF7B0
void f_800DF7B0(Ctx* __restrict c) {
  trace_call(0x800DF7B0u);
  {uint32_t ea=c->r[3]+0x00000080u; WF32(ea,c->f[1]);} // 800DF7B0
  c->r[3]=0u+0x00000000u; // 800DF7B4
  return; // 800DF7B8
}

// fn_800DF7C0
void f_800DF7C0(Ctx* __restrict c) {
  trace_call(0x800DF7C0u);
  cmps(c,0,(int32_t)c->r[4],0); // 800DF7C0
  if (!crb(c,2)) { goto L_800DF7D0; } // 800DF7C4
  c->r[3]=0u+0x00000025u; // 800DF7C8
  return; // 800DF7CC
L_800DF7D0:;
  {uint32_t ea=c->r[3]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF7D0
  c->r[3]=0u+0x00000000u; // 800DF7D4
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 800DF7D8
  return; // 800DF7DC
}

// fn_800DF7E0
void f_800DF7E0(Ctx* __restrict c) {
  trace_call(0x800DF7E0u);
  {uint32_t ea=c->r[3]+0x00000084u; WF32(ea,c->f[1]);} // 800DF7E0
  c->r[3]=0u+0x00000000u; // 800DF7E4
  return; // 800DF7E8
}

// fn_800DF7F0
void f_800DF7F0(Ctx* __restrict c) {
  trace_call(0x800DF7F0u);
  cmps(c,0,(int32_t)c->r[4],0); // 800DF7F0
  if (!crb(c,2)) { goto L_800DF800; } // 800DF7F4
  c->r[3]=0u+0x00000025u; // 800DF7F8
  return; // 800DF7FC
L_800DF800:;
  {uint32_t ea=c->r[3]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DF800
  c->r[3]=0u+0x00000000u; // 800DF804
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 800DF808
  return; // 800DF80C
}

// fn_800DF810
void f_800DF810(Ctx* __restrict c) {
  trace_call(0x800DF810u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF810
  c->r[0]=c->lr; // 800DF814
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DF818
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DF81C
  c->r[31]=c->r[4]|c->r[4]; // 800DF820
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DF824
  c->r[30]=c->r[3]|c->r[3]; // 800DF828
  c->r[5]=R32(c->r[3]+0x000000ACu); // 800DF82C
  cmps(c,0,(int32_t)c->r[5],0); // 800DF830
  if (crb(c,2)) { goto L_800DF840; } // 800DF834
  c->r[0]=R32(c->r[5]+0x00000018u); // 800DF838
  goto L_800DF844; // 800DF83C
L_800DF840:;
  c->r[0]=0u+0x00000000u; // 800DF840
L_800DF844:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DF844
  if (crb(c,2)) { goto L_800DF874; } // 800DF848
  cmps(c,0,(int32_t)c->r[5],0); // 800DF84C
  if (crb(c,2)) { goto L_800DF85C; } // 800DF850
  c->r[3]=R32(c->r[5]+0x00000018u); // 800DF854
  goto L_800DF860; // 800DF858
L_800DF85C:;
  c->r[3]=0u+0x00000000u; // 800DF85C
L_800DF860:;
  c->r[4]=c->r[31]|c->r[31]; // 800DF860
  c->lr=0x800DF868u; f_80186D80(c); // 800DF864
  cmps(c,0,(int32_t)c->r[3],0); // 800DF868
  if (crb(c,2)) { goto L_800DF874; } // 800DF86C
  goto L_800DF8E4; // 800DF870
L_800DF874:;
  c->r[0]=R32(c->r[30]+0x00000060u); // 800DF874
  c->r[0]=rotl(c->r[0],0)&0x00002000u; cr0(c,c->r[0]); // 800DF878
  if (crb(c,2)) { goto L_800DF8A0; } // 800DF87C
  cmps(c,0,(int32_t)c->r[31],0); // 800DF880
  if (!crb(c,2)) { goto L_800DF8A0; } // 800DF884
  c->r[4]=R32(c->r[13]+0xFFFF8E48u); // 800DF888
  c->r[3]=R32(c->r[4]+0x00000010u); // 800DF88C
  c->r[0]=R32(c->r[4]+0x00000014u); // 800DF890
  W32(c->r[30]+0x00000054u,c->r[0]); // 800DF894
  W32(c->r[30]+0x00000050u,c->r[3]); // 800DF898
  goto L_800DF8C4; // 800DF89C
L_800DF8A0:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DF8A0
  if (!crb(c,2)) { goto L_800DF8C4; } // 800DF8A4
  cmps(c,0,(int32_t)c->r[31],0); // 800DF8A8
  if (crb(c,2)) { goto L_800DF8C4; } // 800DF8AC
  c->r[3]=c->r[30]|c->r[30]; // 800DF8B0
  c->lr=0x800DF8B8u; f_800DAD40(c); // 800DF8B4
  cmps(c,0,(int32_t)c->r[3],0); // 800DF8B8
  if (crb(c,2)) { goto L_800DF8C4; } // 800DF8BC
  goto L_800DF8E4; // 800DF8C0
L_800DF8C4:;
  c->r[0]=R32(c->r[30]+0x00000060u); // 800DF8C4
  cmps(c,0,(int32_t)c->r[31],0); // 800DF8C8
  c->r[0]=rotl(c->r[0],0)&0xFFFFDFFFu; // 800DF8CC
  W32(c->r[30]+0x00000060u,c->r[0]); // 800DF8D0
  if (crb(c,2)) { goto L_800DF8E0; } // 800DF8D4
  c->r[0]=c->r[0]|0x00002000u; // 800DF8D8
  W32(c->r[30]+0x00000060u,c->r[0]); // 800DF8DC
L_800DF8E0:;
  c->r[3]=0u+0x00000000u; // 800DF8E0
L_800DF8E4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DF8E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DF8E8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DF8EC
  c->lr=c->r[0]; // 800DF8F0
  c->r[1]=c->r[1]+0x00000010u; // 800DF8F4
  return; // 800DF8F8
}

// fn_800DF900
void f_800DF900(Ctx* __restrict c) {
  trace_call(0x800DF900u);
  cmps(c,0,(int32_t)c->r[4],0); // 800DF900
  if (!crb(c,2)) { goto L_800DF910; } // 800DF904
  c->r[3]=0u+0x00000025u; // 800DF908
  return; // 800DF90C
L_800DF910:;
  c->r[0]=R32(c->r[3]+0x00000060u); // 800DF910
  c->r[3]=0u+0x00000000u; // 800DF914
  c->r[0]=rotl(c->r[0],19)&0x00000001u; // 800DF918
  W8(c->r[4]+0x00000000u,c->r[0]); // 800DF91C
  return; // 800DF920
}

// fn_800DF930
void f_800DF930(Ctx* __restrict c) {
  trace_call(0x800DF930u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DF930
  c->r[0]=c->lr; // 800DF934
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DF938
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800DF93C
  c->r[31]=c->r[4]|c->r[4]; // 800DF940
  W32(c->r[1]+0x00000008u,c->r[30]); // 800DF944
  c->r[30]=c->r[3]|c->r[3]; // 800DF948
  c->r[5]=R32(c->r[3]+0x000000ACu); // 800DF94C
  cmps(c,0,(int32_t)c->r[5],0); // 800DF950
  if (crb(c,2)) { goto L_800DF960; } // 800DF954
  c->r[0]=R32(c->r[5]+0x00000018u); // 800DF958
  goto L_800DF964; // 800DF95C
L_800DF960:;
  c->r[0]=0u+0x00000000u; // 800DF960
L_800DF964:;
  cmps(c,0,(int32_t)c->r[0],0); // 800DF964
  if (crb(c,2)) { goto L_800DF994; } // 800DF968
  cmps(c,0,(int32_t)c->r[5],0); // 800DF96C
  if (crb(c,2)) { goto L_800DF97C; } // 800DF970
  c->r[3]=R32(c->r[5]+0x00000018u); // 800DF974
  goto L_800DF980; // 800DF978
L_800DF97C:;
  c->r[3]=0u+0x00000000u; // 800DF97C
L_800DF980:;
  c->r[4]=c->r[31]|c->r[31]; // 800DF980
  c->lr=0x800DF988u; f_80186DD0(c); // 800DF984
  cmps(c,0,(int32_t)c->r[3],0); // 800DF988
  if (crb(c,2)) { goto L_800DF994; } // 800DF98C
  goto L_800DF9B4; // 800DF990
L_800DF994:;
  c->r[0]=R32(c->r[30]+0x00000060u); // 800DF994
  cmps(c,0,(int32_t)c->r[31],0); // 800DF998
  c->r[0]=rotl(c->r[0],0)&0xFFFFBFFFu; // 800DF99C
  W32(c->r[30]+0x00000060u,c->r[0]); // 800DF9A0
  if (crb(c,2)) { goto L_800DF9B0; } // 800DF9A4
  c->r[0]=c->r[0]|0x00004000u; // 800DF9A8
  W32(c->r[30]+0x00000060u,c->r[0]); // 800DF9AC
L_800DF9B0:;
  c->r[3]=0u+0x00000000u; // 800DF9B0
L_800DF9B4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DF9B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800DF9B8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800DF9BC
  c->lr=c->r[0]; // 800DF9C0
  c->r[1]=c->r[1]+0x00000010u; // 800DF9C4
  return; // 800DF9C8
}

// fn_800DF9D0
void f_800DF9D0(Ctx* __restrict c) {
  trace_call(0x800DF9D0u);
  cmps(c,0,(int32_t)c->r[4],0); // 800DF9D0
  if (!crb(c,2)) { goto L_800DF9E0; } // 800DF9D4
  c->r[3]=0u+0x00000025u; // 800DF9D8
  return; // 800DF9DC
L_800DF9E0:;
  c->r[0]=R32(c->r[3]+0x00000060u); // 800DF9E0
  c->r[3]=0u+0x00000000u; // 800DF9E4
  c->r[0]=rotl(c->r[0],18)&0x00000001u; // 800DF9E8
  W8(c->r[4]+0x00000000u,c->r[0]); // 800DF9EC
  return; // 800DF9F0
}

// fn_800DFA00
void f_800DFA00(Ctx* __restrict c) {
  trace_call(0x800DFA00u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DFA00
  c->r[0]=c->lr; // 800DFA04
  cmps(c,0,(int32_t)c->r[4],0); // 800DFA08
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DFA0C
  if (crb(c,2)) { goto L_800DFABC; } // 800DFA10
  c->r[0]=R32(c->r[3]+0x000000F4u); // 800DFA14
  {uint32_t ea=c->r[3]+0x000000B0u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DFA18
  {uint32_t ea=c->r[4]+0x00000000u; c->f[5]=c->ps1[5]=RF32(ea);} // 800DFA1C
  cmps(c,0,(int32_t)c->r[0],0); // 800DFA20
  {uint32_t ea=c->r[3]+0x000000B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DFA24
  {uint32_t ea=c->r[4]+0x00000004u; c->f[4]=c->ps1[4]=RF32(ea);} // 800DFA28
  {uint32_t ea=c->r[3]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DFA2C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[3]=c->ps1[3]=RF32(ea);} // 800DFA30
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[2]);} // 800DFA34
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[1]);} // 800DFA38
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 800DFA3C
  {uint32_t ea=c->r[3]+0x000000DCu; WF32(ea,c->f[5]);} // 800DFA40
  {uint32_t ea=c->r[3]+0x000000B0u; WF32(ea,c->f[5]);} // 800DFA44
  {uint32_t ea=c->r[3]+0x000000E0u; WF32(ea,c->f[4]);} // 800DFA48
  {uint32_t ea=c->r[3]+0x000000B4u; WF32(ea,c->f[4]);} // 800DFA4C
  {uint32_t ea=c->r[3]+0x000000E4u; WF32(ea,c->f[3]);} // 800DFA50
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[3]);} // 800DFA54
  if (crb(c,2)) { goto L_800DFA80; } // 800DFA58
  {uint32_t ea=c->r[3]+0x000000E8u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DFA5C
  {uint32_t ea=c->r[3]+0x000000ECu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DFA60
  {uint32_t ea=c->r[3]+0x000000F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DFA64
  c->f[2]=c->ps1[2]=S(c->f[5]+c->f[2]); // 800DFA68
  c->f[1]=c->ps1[1]=S(c->f[4]+c->f[1]); // 800DFA6C
  c->f[0]=c->ps1[0]=S(c->f[3]+c->f[0]); // 800DFA70
  {uint32_t ea=c->r[3]+0x000000B0u; WF32(ea,c->f[2]);} // 800DFA74
  {uint32_t ea=c->r[3]+0x000000B4u; WF32(ea,c->f[1]);} // 800DFA78
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[0]);} // 800DFA7C
L_800DFA80:;
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DFA80
  {uint32_t ea=c->r[3]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DFA84
  fcmp(c,0,c->f[1],c->f[0]); // 800DFA88
  if (!crb(c,2)) { goto L_800DFAB0; } // 800DFA8C
  {uint32_t ea=c->r[1]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 800DFA90
  {uint32_t ea=c->r[3]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DFA94
  fcmp(c,0,c->f[1],c->f[0]); // 800DFA98
  if (!crb(c,2)) { goto L_800DFAB0; } // 800DFA9C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DFAA0
  {uint32_t ea=c->r[3]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DFAA4
  fcmp(c,0,c->f[1],c->f[0]); // 800DFAA8
  if (crb(c,2)) { goto L_800DFABC; } // 800DFAAC
L_800DFAB0:;
  c->r[0]=R32(c->r[3]+0x00000060u); // 800DFAB0
  c->r[0]=c->r[0]|0x04000000u; // 800DFAB4
  W32(c->r[3]+0x00000060u,c->r[0]); // 800DFAB8
L_800DFABC:;
  cmps(c,0,(int32_t)c->r[5],0); // 800DFABC
  if (crb(c,2)) { goto L_800DFADC; } // 800DFAC0
  {uint32_t ea=c->r[5]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DFAC4
  {uint32_t ea=c->r[5]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DFAC8
  {uint32_t ea=c->r[5]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DFACC
  {uint32_t ea=c->r[3]+0x000000BCu; WF32(ea,c->f[2]);} // 800DFAD0
  {uint32_t ea=c->r[3]+0x000000C0u; WF32(ea,c->f[1]);} // 800DFAD4
  {uint32_t ea=c->r[3]+0x000000C4u; WF32(ea,c->f[0]);} // 800DFAD8
L_800DFADC:;
  cmps(c,0,(int32_t)c->r[6],0); // 800DFADC
  if (crb(c,2)) { goto L_800DFAFC; } // 800DFAE0
  {uint32_t ea=c->r[6]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 800DFAE4
  {uint32_t ea=c->r[6]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 800DFAE8
  {uint32_t ea=c->r[6]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DFAEC
  {uint32_t ea=c->r[3]+0x000000C8u; WF32(ea,c->f[2]);} // 800DFAF0
  {uint32_t ea=c->r[3]+0x000000CCu; WF32(ea,c->f[1]);} // 800DFAF4
  {uint32_t ea=c->r[3]+0x000000D0u; WF32(ea,c->f[0]);} // 800DFAF8
L_800DFAFC:;
  c->r[3]=R32(c->r[3]+0x00000138u); // 800DFAFC
  c->r[12]=R32(c->r[3]+0x00000000u); // 800DFB00
  c->r[12]=R32(c->r[12]+0x000000C8u); // 800DFB04
  c->ctr=c->r[12]; // 800DFB08
  if (true) { c->lr=0x800DFB10u; dispatch(c,c->ctr); } // 800DFB0C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DFB10
  c->lr=c->r[0]; // 800DFB14
  c->r[1]=c->r[1]+0x00000020u; // 800DFB18
  return; // 800DFB1C
}

// fn_800DFB20
void f_800DFB20(Ctx* __restrict c) {
  trace_call(0x800DFB20u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DFB20
  c->r[0]=c->lr; // 800DFB24
  W32(c->r[1]+0x00000024u,c->r[0]); // 800DFB28
  c->r[11]=c->r[1]+0x00000020u; // 800DFB2C
  c->lr=0x800DFB34u; f_800C2E54(c); // 800DFB30
  cmps(c,0,(int32_t)c->r[4],0); // 800DFB34
  c->r[29]=c->r[3]|c->r[3]; // 800DFB38
  c->r[30]=c->r[5]|c->r[5]; // 800DFB3C
  c->r[31]=c->r[6]|c->r[6]; // 800DFB40
  if (crb(c,2)) { goto L_800DFB58; } // 800DFB44
  c->r[3]=c->r[4]|c->r[4]; // 800DFB48
  c->r[4]=c->r[29]+0x000000DCu; // 800DFB4C
  c->r[5]=0u+0x0000000Cu; // 800DFB50
  c->lr=0x800DFB58u; f_80004000(c); // 800DFB54
L_800DFB58:;
  cmps(c,0,(int32_t)c->r[30],0); // 800DFB58
  if (crb(c,2)) { goto L_800DFB70; } // 800DFB5C
  c->r[3]=c->r[30]|c->r[30]; // 800DFB60
  c->r[4]=c->r[29]+0x000000BCu; // 800DFB64
  c->r[5]=0u+0x0000000Cu; // 800DFB68
  c->lr=0x800DFB70u; f_80004000(c); // 800DFB6C
L_800DFB70:;
  cmps(c,0,(int32_t)c->r[31],0); // 800DFB70
  if (crb(c,2)) { goto L_800DFB88; } // 800DFB74
  c->r[3]=c->r[31]|c->r[31]; // 800DFB78
  c->r[4]=c->r[29]+0x000000C8u; // 800DFB7C
  c->r[5]=0u+0x0000000Cu; // 800DFB80
  c->lr=0x800DFB88u; f_80004000(c); // 800DFB84
L_800DFB88:;
  c->r[11]=c->r[1]+0x00000020u; // 800DFB88
  c->r[3]=0u+0x00000000u; // 800DFB8C
  c->lr=0x800DFB94u; f_800C2EA0(c); // 800DFB90
  c->r[0]=R32(c->r[1]+0x00000024u); // 800DFB94
  c->lr=c->r[0]; // 800DFB98
  c->r[1]=c->r[1]+0x00000020u; // 800DFB9C
  return; // 800DFBA0
}

// fn_800DFBB0
void f_800DFBB0(Ctx* __restrict c) {
  trace_call(0x800DFBB0u);
  c->r[4]=0u+0x00000000u; // 800DFBB0
  f_800DCF60(c); return; // 800DFBB4
}

// fn_800DFBC0
void f_800DFBC0(Ctx* __restrict c) {
  trace_call(0x800DFBC0u);
  cmps(c,0,(int32_t)c->r[4],0); // 800DFBC0
  if (!crb(c,2)) { goto L_800DFBD8; } // 800DFBC4
  cmps(c,0,(int32_t)c->r[5],0); // 800DFBC8
  if (!crb(c,2)) { goto L_800DFBD8; } // 800DFBCC
  c->r[3]=0u+0x00000025u; // 800DFBD0
  return; // 800DFBD4
L_800DFBD8:;
  cmps(c,0,(int32_t)c->r[4],0); // 800DFBD8
  if (crb(c,2)) { goto L_800DFBE8; } // 800DFBDC
  {uint32_t ea=c->r[3]+0x00000108u; c->f[0]=c->ps1[0]=RF32(ea);} // 800DFBE0
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 800DFBE4
L_800DFBE8:;
  cmps(c,0,(int32_t)c->r[5],0); // 800DFBE8
  if (crb(c,2)) { goto L_800DFBF8; } // 800DFBEC
  {uint32_t ea=c->r[3]+0x0000010Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 800DFBF0
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 800DFBF4
L_800DFBF8:;
  c->r[3]=0u+0x00000000u; // 800DFBF8
  return; // 800DFBFC
}

// fn_800DFC00
void f_800DFC00(Ctx* __restrict c) {
  trace_call(0x800DFC00u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DFC00
  c->r[0]=c->lr; // 800DFC04
  W32(c->r[1]+0x000000C4u,c->r[0]); // 800DFC08
  c->r[11]=c->r[1]+0x000000C0u; // 800DFC0C
  c->lr=0x800DFC14u; f_800C2E44(c); // 800DFC10
  c->r[0]=R32(c->r[3]+0x00000044u); // 800DFC14
  c->r[28]=c->r[3]|c->r[3]; // 800DFC18
  c->r[29]=c->r[4]|c->r[4]; // 800DFC1C
  cmps(c,0,(int32_t)c->r[0],0); // 800DFC20
  if (!crb(c,2)) { goto L_800DFD04; } // 800DFC24
  c->r[3]=R32(c->r[13]+0xFFFF8E48u); // 800DFC28
  c->r[5]=0u+0x80390000u; // 800DFC2C
  c->r[5]=c->r[5]+0xFFFFCD28u; // 800DFC30
  c->r[4]=0u+0x00000130u; // 800DFC34
  c->r[3]=R32(c->r[3]+0x00000004u); // 800DFC38
  c->r[6]=0u+0x000016AAu; // 800DFC3C
  c->r[7]=0u+0x00000000u; // 800DFC40
  c->r[8]=0u+0x00000000u; // 800DFC44
  c->lr=0x800DFC4Cu; f_8018F230(c); // 800DFC48
  cmps(c,0,(int32_t)c->r[3],0); // 800DFC4C
  W32(c->r[28]+0x00000044u,c->r[3]); // 800DFC50
  if (!crb(c,2)) { goto L_800DFC60; } // 800DFC54
  c->r[3]=0u+0x0000002Cu; // 800DFC58
  goto L_800DFDC0; // 800DFC5C
L_800DFC60:;
  c->r[3]=0u+0x80380000u; // 800DFC60
  c->r[0]=0u+0x00000009u; // 800DFC64
  c->r[3]=c->r[3]+0xFFFFE288u; // 800DFC68
  c->r[5]=c->r[1]+0x00000004u; // 800DFC6C
  c->r[4]=c->r[3]+0xFFFFFFFCu; // 800DFC70
  c->r[31]=0u+0x00000000u; // 800DFC74
  c->r[27]=0u+0x00000000u; // 800DFC78
  c->ctr=c->r[0]; // 800DFC7C
L_800DFC80:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800DFC80
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800DFC84
  W32(c->r[5]+0x00000004u,c->r[3]); // 800DFC88
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800DFC8C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800DFC80; } // 800DFC90
  c->r[0]=R32(c->r[4]+0x00000004u); // 800DFC94
  c->r[30]=0u+0x00000009u; // 800DFC98
  W32(c->r[5]+0x00000004u,c->r[0]); // 800DFC9C
  c->r[26]=0u+0x00000010u; // 800DFCA0
L_800DFCA4:;
  c->r[5]=c->r[1]+0x00000050u; // 800DFCA4
  c->r[4]=c->r[1]+0x00000004u; // 800DFCA8
  c->ctr=c->r[30]; // 800DFCAC
L_800DFCB0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800DFCB0
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 800DFCB4
  W32(c->r[5]+0x00000004u,c->r[3]); // 800DFCB8
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 800DFCBC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800DFCB0; } // 800DFCC0
  c->r[3]=R32(c->r[4]+0x00000004u); // 800DFCC4
  c->r[0]=((c->r[31])&0x20)?0u:(c->r[26]<<((c->r[31])&31)); // 800DFCC8
  W32(c->r[5]+0x00000004u,c->r[3]); // 800DFCCC
  c->r[4]=c->r[1]+0x00000054u; // 800DFCD0
  c->r[5]=0u+0x0000004Cu; // 800DFCD4
  c->r[3]=R32(c->r[1]+0x00000098u); // 800DFCD8
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFEFu; // 800DFCDC
  c->r[0]=c->r[3]|c->r[0]; // 800DFCE0
  W32(c->r[1]+0x00000098u,c->r[0]); // 800DFCE4
  c->r[0]=R32(c->r[28]+0x00000044u); // 800DFCE8
  c->r[3]=c->r[0]+c->r[27]; // 800DFCEC
  c->lr=0x800DFCF4u; f_80004000(c); // 800DFCF0
  c->r[31]=c->r[31]+0x00000001u; // 800DFCF4
  c->r[27]=c->r[27]+0x0000004Cu; // 800DFCF8
  cmps(c,0,(int32_t)c->r[31],4); // 800DFCFC
  if (crb(c,0)) { IRQCHK(c); goto L_800DFCA4; } // 800DFD00
L_800DFD04:;
  c->r[0]=0u+0x00000004u; // 800DFD04
  c->r[4]=R32(c->r[29]+0x00000044u); // 800DFD08
  c->r[30]=0u+0x00000000u; // 800DFD0C
  c->r[5]=0u+0x00000000u; // 800DFD10
  c->r[3]=0u+0x00000010u; // 800DFD14
  c->ctr=c->r[0]; // 800DFD18
L_800DFD1C:;
  c->r[0]=((c->r[5])&0x20)?0u:(c->r[3]<<((c->r[5])&31)); // 800DFD1C
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 800DFD20
  if (crb(c,2)) { goto L_800DFD2C; } // 800DFD24
  c->r[30]=c->r[30]+0x00000001u; // 800DFD28
L_800DFD2C:;
  c->r[5]=c->r[5]+0x00000001u; // 800DFD2C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800DFD1C; } // 800DFD30
  c->r[31]=0u+0x00000000u; // 800DFD34
  c->r[27]=0u+0x00000000u; // 800DFD38
  c->r[26]=0u+0x00000010u; // 800DFD3C
L_800DFD40:;
  c->r[0]=R32(c->r[29]+0x00000044u); // 800DFD40
  c->r[25]=((c->r[31])&0x20)?0u:(c->r[26]<<((c->r[31])&31)); // 800DFD44
  c->r[0]=c->r[0]&c->r[25]; cr0(c,c->r[0]); // 800DFD48
  if (!crb(c,2)) { goto L_800DFD60; } // 800DFD4C
  cmps(c,0,(int32_t)c->r[30],0); // 800DFD50
  if (!crb(c,2)) { goto L_800DFD9C; } // 800DFD54
  cmps(c,0,(int32_t)c->r[31],0); // 800DFD58
  if (!crb(c,2)) { goto L_800DFD9C; } // 800DFD5C
L_800DFD60:;
  c->r[0]=R32(c->r[28]+0x00000044u); // 800DFD60
  c->r[4]=c->r[29]|c->r[29]; // 800DFD64
  c->r[5]=0u+0x0000004Cu; // 800DFD68
  c->r[3]=c->r[0]+c->r[27]; // 800DFD6C
  c->lr=0x800DFD74u; f_80004000(c); // 800DFD70
  c->r[0]=R32(c->r[28]+0x00000044u); // 800DFD74
  c->r[3]=c->r[0]+c->r[27]; // 800DFD78
  c->r[0]=R32(c->r[3]+0x00000044u); // 800DFD7C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFF0Fu; // 800DFD80
  W32(c->r[3]+0x00000044u,c->r[0]); // 800DFD84
  c->r[0]=R32(c->r[28]+0x00000044u); // 800DFD88
  c->r[3]=c->r[0]+c->r[27]; // 800DFD8C
  c->r[0]=R32(c->r[3]+0x00000044u); // 800DFD90
  c->r[0]=c->r[0]|c->r[25]; // 800DFD94
  W32(c->r[3]+0x00000044u,c->r[0]); // 800DFD98
L_800DFD9C:;
  c->r[31]=c->r[31]+0x00000001u; // 800DFD9C
  c->r[27]=c->r[27]+0x0000004Cu; // 800DFDA0
  cmps(c,0,(int32_t)c->r[31],4); // 800DFDA4
  if (crb(c,0)) { IRQCHK(c); goto L_800DFD40; } // 800DFDA8
  c->r[3]=R32(c->r[28]+0x00000138u); // 800DFDAC
  c->r[12]=R32(c->r[3]+0x00000000u); // 800DFDB0
  c->r[12]=R32(c->r[12]+0x000000CCu); // 800DFDB4
  c->ctr=c->r[12]; // 800DFDB8
  if (true) { c->lr=0x800DFDC0u; dispatch(c,c->ctr); } // 800DFDBC
L_800DFDC0:;
  c->r[11]=c->r[1]+0x000000C0u; // 800DFDC0
  c->lr=0x800DFDC8u; f_800C2E90(c); // 800DFDC4
  c->r[0]=R32(c->r[1]+0x000000C4u); // 800DFDC8
  c->lr=c->r[0]; // 800DFDCC
  c->r[1]=c->r[1]+0x000000C0u; // 800DFDD0
  return; // 800DFDD4
}

// fn_800DFDE0
void f_800DFDE0(Ctx* __restrict c) {
  trace_call(0x800DFDE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800DFDE0
  c->r[0]=c->lr; // 800DFDE4
  cmps(c,0,(int32_t)c->r[4],0); // 800DFDE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800DFDEC
  c->r[0]=c->r[4]|c->r[4]; // 800DFDF0
  if (!crb(c,2)) { goto L_800DFE00; } // 800DFDF4
  c->r[3]=0u+0x00000025u; // 800DFDF8
  goto L_800DFE34; // 800DFDFC
L_800DFE00:;
  c->r[4]=R32(c->r[3]+0x00000044u); // 800DFE00
  cmps(c,0,(int32_t)c->r[4],0); // 800DFE04
  if (crb(c,2)) { goto L_800DFE1C; } // 800DFE08
  c->r[3]=c->r[0]|c->r[0]; // 800DFE0C
  c->r[5]=0u+0x0000004Cu; // 800DFE10
  c->lr=0x800DFE18u; f_80004000(c); // 800DFE14
  goto L_800DFE30; // 800DFE18
L_800DFE1C:;
  c->r[4]=0u+0x80390000u; // 800DFE1C
  c->r[3]=c->r[0]|c->r[0]; // 800DFE20
  c->r[4]=c->r[4]+0xFFFFCCD8u; // 800DFE24
  c->r[5]=0u+0x0000004Cu; // 800DFE28
  c->lr=0x800DFE30u; f_80004000(c); // 800DFE2C
L_800DFE30:;
  c->r[3]=0u+0x00000000u; // 800DFE30
L_800DFE34:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800DFE34
  c->lr=c->r[0]; // 800DFE38
  c->r[1]=c->r[1]+0x00000010u; // 800DFE3C
  return; // 800DFE40
}

