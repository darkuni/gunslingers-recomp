#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// bta_sys_set_trace_level
void f_801CE5C8(Ctx* __restrict c) {
  trace_call(0x801CE5C8u);
  W8(c->r[13]+0xFFFF9AF8u,c->r[3]); // 801CE5C8
  return; // 801CE5CC
}

// ptim_init
void f_801CE5D0(Ctx* __restrict c) {
  trace_call(0x801CE5D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE5D0
  c->r[0]=c->lr; // 801CE5D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CE5D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CE5DC
  c->r[31]=c->r[5]|c->r[5]; // 801CE5E0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CE5E4
  c->r[30]=c->r[4]|c->r[4]; // 801CE5E8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CE5EC
  c->r[29]=c->r[3]|c->r[3]; // 801CE5F0
  c->lr=0x801CE5F8u; f_801CBEF0(c); // 801CE5F4
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 801CE5F8
  W8(c->r[29]+0x00000010u,c->r[31]); // 801CE5FC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CE600
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CE604
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CE608
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CE60C
  c->lr=c->r[0]; // 801CE610
  c->r[1]=c->r[1]+0x00000020u; // 801CE614
  return; // 801CE618
}

// ptim_timer_update
void f_801CE61C(Ctx* __restrict c) {
  trace_call(0x801CE61Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE61C
  c->r[0]=c->lr; // 801CE620
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE624
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CE628
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CE62C
  c->r[30]=c->r[3]|c->r[3]; // 801CE630
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 801CE634
  c->lr=0x801CE63Cu; f_801CBF10(c); // 801CE638
  goto L_801CE690; // 801CE63C
L_801CE640:;
  c->r[3]=c->r[30]|c->r[30]; // 801CE640
  c->r[4]=c->r[31]|c->r[31]; // 801CE644
  c->lr=0x801CE64Cu; f_801CC090(c); // 801CE648
  c->r[12]=R32(c->r[31]+0x00000008u); // 801CE64C
  cmps(c,0,(int32_t)c->r[12],0); // 801CE650
  if (crb(c,2)) { goto L_801CE668; } // 801CE654
  c->r[3]=c->r[31]|c->r[31]; // 801CE658
  c->ctr=c->r[12]; // 801CE65C
  if (true) { c->lr=0x801CE664u; dispatch(c,c->ctr); } // 801CE660
  goto L_801CE690; // 801CE664
L_801CE668:;
  c->r[0]=R16(c->r[31]+0x00000014u); // 801CE668
  cmps(c,0,(int32_t)c->r[0],0); // 801CE66C
  if (crb(c,2)) { goto L_801CE690; } // 801CE670
  c->r[3]=0u+0x00000008u; // 801CE674
  c->lr=0x801CE67Cu; f_801CAC80(c); // 801CE678
  cmps(c,0,(int32_t)c->r[3],0); // 801CE67C
  if (crb(c,2)) { goto L_801CE690; } // 801CE680
  c->r[0]=R16(c->r[31]+0x00000014u); // 801CE684
  W16(c->r[3]+0x00000000u,c->r[0]); // 801CE688
  c->lr=0x801CE690u; f_801CE510(c); // 801CE68C
L_801CE690:;
  c->r[31]=R32(c->r[30]+0x00000000u); // 801CE690
  cmps(c,0,(int32_t)c->r[31],0); // 801CE694
  if (crb(c,2)) { goto L_801CE6A8; } // 801CE698
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801CE69C
  cmps(c,0,(int32_t)c->r[0],0); // 801CE6A0
  if (!crb(c,1)) { IRQCHK(c); goto L_801CE640; } // 801CE6A4
L_801CE6A8:;
  cmps(c,0,(int32_t)c->r[31],0); // 801CE6A8
  if (!crb(c,2)) { goto L_801CE6B8; } // 801CE6AC
  c->r[3]=R8(c->r[30]+0x00000010u); // 801CE6B0
  c->lr=0x801CE6B8u; f_801CBE60(c); // 801CE6B4
L_801CE6B8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE6B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CE6BC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CE6C0
  c->lr=c->r[0]; // 801CE6C4
  c->r[1]=c->r[1]+0x00000010u; // 801CE6C8
  return; // 801CE6CC
}

// ptim_start_timer
void f_801CE6D0(Ctx* __restrict c) {
  trace_call(0x801CE6D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE6D0
  c->r[0]=c->lr; // 801CE6D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CE6D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CE6DC
  c->r[31]=c->r[6]|c->r[6]; // 801CE6E0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CE6E4
  c->r[30]=c->r[5]|c->r[5]; // 801CE6E8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CE6EC
  c->r[29]=c->r[4]|c->r[4]; // 801CE6F0
  W32(c->r[1]+0x00000010u,c->r[28]); // 801CE6F4
  c->r[28]=c->r[3]|c->r[3]; // 801CE6F8
  c->r[0]=R32(c->r[3]+0x00000000u); // 801CE6FC
  cmps(c,0,(int32_t)c->r[0],0); // 801CE700
  if (!crb(c,2)) { goto L_801CE730; } // 801CE704
  c->r[4]=0u+0x66660000u; // 801CE708
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 801CE70C
  c->r[4]=c->r[4]+0x00006667u; // 801CE710
  c->r[3]=R8(c->r[3]+0x00000010u); // 801CE714
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 801CE718
  c->r[5]=0u+0x00000001u; // 801CE71C
  c->r[0]=sraw(c,c->r[0],2); // 801CE720
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 801CE724
  c->r[4]=c->r[0]+c->r[4]; // 801CE728
  c->lr=0x801CE730u; f_801CBD10(c); // 801CE72C
L_801CE730:;
  c->r[3]=c->r[28]|c->r[28]; // 801CE730
  c->r[4]=c->r[29]|c->r[29]; // 801CE734
  c->lr=0x801CE73Cu; f_801CC090(c); // 801CE738
  W16(c->r[29]+0x00000014u,c->r[30]); // 801CE73C
  c->r[3]=c->r[28]|c->r[28]; // 801CE740
  c->r[4]=c->r[29]|c->r[29]; // 801CE744
  W32(c->r[29]+0x0000000Cu,c->r[31]); // 801CE748
  c->lr=0x801CE750u; f_801CBFA0(c); // 801CE74C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CE750
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CE754
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CE758
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CE75C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801CE760
  c->lr=c->r[0]; // 801CE764
  c->r[1]=c->r[1]+0x00000020u; // 801CE768
  return; // 801CE76C
}

// ptim_stop_timer
void f_801CE770(Ctx* __restrict c) {
  trace_call(0x801CE770u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE770
  c->r[0]=c->lr; // 801CE774
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE778
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CE77C
  c->r[31]=c->r[3]|c->r[3]; // 801CE780
  c->lr=0x801CE788u; f_801CC090(c); // 801CE784
  c->r[0]=R32(c->r[31]+0x00000000u); // 801CE788
  cmps(c,0,(int32_t)c->r[0],0); // 801CE78C
  if (!crb(c,2)) { goto L_801CE79C; } // 801CE790
  c->r[3]=R8(c->r[31]+0x00000010u); // 801CE794
  c->lr=0x801CE79Cu; f_801CBE60(c); // 801CE798
L_801CE79C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE79C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CE7A0
  c->lr=c->r[0]; // 801CE7A4
  c->r[1]=c->r[1]+0x00000010u; // 801CE7A8
  return; // 801CE7AC
}

// utl_freebuf
void f_801CE7B0(Ctx* __restrict c) {
  trace_call(0x801CE7B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE7B0
  c->r[0]=c->lr; // 801CE7B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE7B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CE7BC
  c->r[31]=c->r[3]|c->r[3]; // 801CE7C0
  c->r[0]=R32(c->r[3]+0x00000000u); // 801CE7C4
  cmps(c,0,(int32_t)c->r[0],0); // 801CE7C8
  if (crb(c,2)) { goto L_801CE7E0; } // 801CE7CC
  c->r[3]=c->r[0]|c->r[0]; // 801CE7D0
  c->lr=0x801CE7D8u; f_801CAF10(c); // 801CE7D4
  c->r[0]=0u+0x00000000u; // 801CE7D8
  W32(c->r[31]+0x00000000u,c->r[0]); // 801CE7DC
L_801CE7E0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE7E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CE7E4
  c->lr=c->r[0]; // 801CE7E8
  c->r[1]=c->r[1]+0x00000010u; // 801CE7EC
  return; // 801CE7F0
}

// bta_dm_enable
void f_801CE7F4(Ctx* __restrict c) {
  trace_call(0x801CE7F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE7F4
  c->r[0]=c->lr; // 801CE7F8
  c->r[4]=0u+0x80480000u; // 801CE7FC
  c->r[5]=0u+0x0000007Cu; // 801CE800
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CE804
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CE808
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CE80C
  c->r[30]=c->r[3]|c->r[3]; // 801CE810
  c->r[3]=c->r[4]+0x000030F8u; // 801CE814
  c->r[4]=0u+0x00000000u; // 801CE818
  c->lr=0x801CE820u; f_80004350(c); // 801CE81C
  c->r[3]=0u+0x80480000u; // 801CE820
  c->r[4]=0u+0x00000000u; // 801CE824
  c->r[3]=c->r[3]+0x00003278u; // 801CE828
  c->r[5]=0u+0x0000002Eu; // 801CE82C
  c->lr=0x801CE834u; f_80004350(c); // 801CE830
  c->r[31]=0u+0x80380000u; // 801CE834
  c->r[3]=c->r[1]+0x00000008u; // 801CE838
  c->r[4]=c->r[31]+0xFFFFEF68u; // 801CE83C
  c->r[5]=0u+0x00000003u; // 801CE840
  c->lr=0x801CE848u; f_80004000(c); // 801CE844
  c->r[3]=c->r[1]+0x00000008u; // 801CE848
  c->lr=0x801CE850u; f_801D73D4(c); // 801CE84C
  c->r[4]=0u+0x80480000u; // 801CE850
  c->r[0]=R32(c->r[30]+0x00000008u); // 801CE854
  c->r[4]=c->r[4]+0x00003174u; // 801CE858
  c->r[3]=0u+0x80380000u; // 801CE85C
  W32(c->r[4]+0x00000050u,c->r[0]); // 801CE860
  c->r[3]=c->r[3]+0xFFFFF098u; // 801CE864
  c->lr=0x801CE86Cu; f_801DB3BC(c); // 801CE868
  c->r[31]=c->r[31]+0xFFFFEF68u; // 801CE86C
  c->r[3]=R16(c->r[31]+0x00000008u); // 801CE870
  c->lr=0x801CE878u; f_801D4D54(c); // 801CE874
  c->r[3]=R16(c->r[31]+0x00000006u); // 801CE878
  c->lr=0x801CE880u; f_801D76C4(c); // 801CE87C
  c->r[3]=R16(c->r[31]+0x00000004u); // 801CE880
  c->lr=0x801CE888u; f_801D4988(c); // 801CE884
  c->r[3]=0u+0x801D0000u; // 801CE888
  c->r[3]=c->r[3]+0x00000234u; // 801CE88C
  c->lr=0x801CE894u; f_801D53D0(c); // 801CE890
  c->r[3]=0u+0x801D0000u; // 801CE894
  c->r[3]=c->r[3]+0x000000DCu; // 801CE898
  c->lr=0x801CE8A0u; f_801D7300(c); // 801CE89C
  c->r[3]=0u+0x801D0000u; // 801CE8A0
  c->r[3]=c->r[3]+0x00000934u; // 801CE8A4
  c->lr=0x801CE8ACu; f_801CE138(c); // 801CE8A8
  c->r[31]=0u+0x801D0000u; // 801CE8AC
  c->r[3]=c->r[31]+0x000006FCu; // 801CE8B0
  c->lr=0x801CE8B8u; f_801CE148(c); // 801CE8B4
  c->lr=0x801CE8BCu; f_801D10FC(c); // 801CE8B8
  c->r[3]=0u+0x80480000u; // 801CE8BC
  c->r[4]=0u+0x00000000u; // 801CE8C0
  c->r[3]=c->r[3]+0x000030C8u; // 801CE8C4
  c->r[5]=0u+0x0000002Du; // 801CE8C8
  c->lr=0x801CE8D0u; f_80004350(c); // 801CE8CC
  c->r[3]=c->r[31]+0x000006FCu; // 801CE8D0
  c->lr=0x801CE8D8u; f_801CE148(c); // 801CE8D4
  c->r[3]=0u+0x801D0000u; // 801CE8D8
  c->r[4]=0u+0x00000000u; // 801CE8DC
  c->r[3]=c->r[3]+0x00000618u; // 801CE8E0
  c->lr=0x801CE8E8u; f_801E6EFC(c); // 801CE8E4
  c->lr=0x801CE8ECu; f_801DF654(c); // 801CE8E8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CE8EC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CE8F0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CE8F4
  c->lr=c->r[0]; // 801CE8F8
  c->r[1]=c->r[1]+0x00000020u; // 801CE8FC
  return; // 801CE900
}

// bta_dm_disable
void f_801CE904(Ctx* __restrict c) {
  trace_call(0x801CE904u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE904
  c->r[0]=c->lr; // 801CE908
  c->r[3]=c->r[2]+0xFFFFB060u; // 801CE90C
  c->r[4]=0u+0x00000000u; // 801CE910
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE914
  c->lr=0x801CE91Cu; f_801E6DE0(c); // 801CE918
  c->lr=0x801CE920u; f_801CE560(c); // 801CE91C
  c->r[3]=0u+0x00000000u; // 801CE920
  c->r[4]=0u+0x00000000u; // 801CE924
  c->r[5]=0u+0x00000000u; // 801CE928
  c->lr=0x801CE930u; f_801D7DFC(c); // 801CE92C
  c->r[3]=0u+0x00000000u; // 801CE930
  c->r[4]=0u+0x00000000u; // 801CE934
  c->r[5]=0u+0x00000000u; // 801CE938
  c->lr=0x801CE940u; f_801D8278(c); // 801CE93C
  c->lr=0x801CE944u; f_801D1164(c); // 801CE940
  c->lr=0x801CE948u; f_801D4E3C(c); // 801CE944
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801CE948
  if (!crb(c,2)) { goto L_801CE978; } // 801CE94C
  c->r[6]=0u+0x801D0000u; // 801CE950
  c->r[3]=0u+0x80480000u; // 801CE954
  c->r[3]=c->r[3]+0x00003174u; // 801CE958
  c->r[4]=0u+0x00000000u; // 801CE95C
  c->r[6]=c->r[6]+0x00000524u; // 801CE960
  c->r[5]=0u+0x000003E8u; // 801CE964
  W32(c->r[3]+0x0000007Cu,c->r[6]); // 801CE968
  c->r[3]=c->r[3]+0x00000074u; // 801CE96C
  c->lr=0x801CE974u; f_801CE52C(c); // 801CE970
  goto L_801CE9A4; // 801CE974
L_801CE978:;
  c->r[6]=0u+0x80480000u; // 801CE978
  c->r[5]=0u+0x801D0000u; // 801CE97C
  c->r[6]=c->r[6]+0x00003174u; // 801CE980
  c->r[0]=0u+0x00000001u; // 801CE984
  c->r[5]=c->r[5]+0xFFFFE9B4u; // 801CE988
  W8(c->r[6]+0x00000072u,c->r[0]); // 801CE98C
  c->r[3]=c->r[6]+0x00000074u; // 801CE990
  c->r[4]=0u+0x00000000u; // 801CE994
  W32(c->r[6]+0x0000007Cu,c->r[5]); // 801CE998
  c->r[5]=0u+0x00001388u; // 801CE99C
  c->lr=0x801CE9A4u; f_801CE52C(c); // 801CE9A0
L_801CE9A4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE9A4
  c->lr=c->r[0]; // 801CE9A8
  c->r[1]=c->r[1]+0x00000010u; // 801CE9AC
  return; // 801CE9B0
}

// bta_dm_disable_timer_cback
void f_801CE9B4(Ctx* __restrict c) {
  trace_call(0x801CE9B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE9B4
  c->r[0]=c->lr; // 801CE9B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE9BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CE9C0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CE9C4
  c->r[0]=R8(c->r[13]+0xFFFF9AF8u); // 801CE9C8
  cmpu(c,0,c->r[0],0x00000004u); // 801CE9CC
  if (crb(c,0)) { goto L_801CE9E4; } // 801CE9D0
  c->r[4]=0u+0x803A0000u; // 801CE9D4
  c->r[3]=0u+0x00000503u; // 801CE9D8
  c->r[4]=c->r[4]+0xFFFFE398u; // 801CE9DC
  c->lr=0x801CE9E4u; f_801CD9D0(c); // 801CE9E0
L_801CE9E4:;
  c->lr=0x801CE9E8u; f_801D4E3C(c); // 801CE9E4
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801CE9E8
  if (crb(c,2)) { goto L_801CEA34; } // 801CE9EC
  c->r[3]=0u+0x80480000u; // 801CE9F0
  c->r[31]=c->r[3]+0x00003174u; // 801CE9F4
  c->r[0]=R8(c->r[31]+0x00000101u); // 801CE9F8
  cmps(c,0,(int32_t)c->r[0],0); // 801CE9FC
  if (!crb(c,2)) { goto L_801CEA34; } // 801CEA00
  c->r[30]=0u+0x00000000u; // 801CEA04
  goto L_801CEA20; // 801CEA08
L_801CEA0C:;
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 801CEA0C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 801CEA10
  c->r[3]=c->r[31]+c->r[0]; // 801CEA14
  c->lr=0x801CEA1Cu; f_801D5998(c); // 801CEA18
  c->r[30]=c->r[30]+0x00000001u; // 801CEA1C
L_801CEA20:;
  c->r[0]=R8(c->r[31]+0x0000004Du); // 801CEA20
  c->r[3]=rotl(c->r[30],0)&0x000000FFu; // 801CEA24
  cmpu(c,0,c->r[3],c->r[0]); // 801CEA28
  if (crb(c,0)) { IRQCHK(c); goto L_801CEA0C; } // 801CEA2C
  goto L_801CEA58; // 801CEA30
L_801CEA34:;
  c->r[5]=0u+0x80480000u; // 801CEA34
  c->r[0]=0u+0x00000000u; // 801CEA38
  c->r[5]=c->r[5]+0x00003174u; // 801CEA3C
  c->r[3]=0u+0x00000001u; // 801CEA40
  c->r[12]=R32(c->r[5]+0x00000050u); // 801CEA44
  c->r[4]=0u+0x00000000u; // 801CEA48
  W8(c->r[5]+0x00000072u,c->r[0]); // 801CEA4C
  c->ctr=c->r[12]; // 801CEA50
  if (true) { c->lr=0x801CEA58u; dispatch(c,c->ctr); } // 801CEA54
L_801CEA58:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CEA58
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CEA5C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CEA60
  c->lr=c->r[0]; // 801CEA64
  c->r[1]=c->r[1]+0x00000010u; // 801CEA68
  return; // 801CEA6C
}

// bta_dm_set_dev_name
void f_801CEA70(Ctx* __restrict c) {
  trace_call(0x801CEA70u);
  c->r[3]=c->r[3]+0x00000008u; // 801CEA70
  f_801D71BC(c); return; // 801CEA74
}

// bta_dm_set_visibility
void f_801CEA78(Ctx* __restrict c) {
  trace_call(0x801CEA78u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CEA78
  c->r[0]=c->lr; // 801CEA7C
  c->r[4]=0u+0x00000000u; // 801CEA80
  c->r[5]=0u+0x00000000u; // 801CEA84
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CEA88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CEA8C
  c->r[31]=c->r[3]|c->r[3]; // 801CEA90
  c->r[3]=R8(c->r[3]+0x00000008u); // 801CEA94
  c->lr=0x801CEA9Cu; f_801D7DFC(c); // 801CEA98
  c->r[3]=R8(c->r[31]+0x00000009u); // 801CEA9C
  c->r[4]=0u+0x00000000u; // 801CEAA0
  c->r[5]=0u+0x00000000u; // 801CEAA4
  c->lr=0x801CEAACu; f_801D8278(c); // 801CEAA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CEAAC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CEAB0
  c->lr=c->r[0]; // 801CEAB4
  c->r[1]=c->r[1]+0x00000010u; // 801CEAB8
  return; // 801CEABC
}

// bta_dm_bond
void f_801CEAC0(Ctx* __restrict c) {
  trace_call(0x801CEAC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CEAC0
  c->r[0]=c->lr; // 801CEAC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CEAC8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CEACC
  c->r[31]=c->r[3]|c->r[3]; // 801CEAD0
  c->r[3]=c->r[3]+0x00000008u; // 801CEAD4
  c->lr=0x801CEADCu; f_801DE34C(c); // 801CEAD8
  cmps(c,0,(int32_t)c->r[3],0); // 801CEADC
  if (crb(c,2)) { goto L_801CEAF8; } // 801CEAE0
  c->r[4]=c->r[3]|c->r[3]; // 801CEAE4
  c->r[3]=c->r[1]+0x00000008u; // 801CEAE8
  c->r[5]=0u+0x00000008u; // 801CEAEC
  c->lr=0x801CEAF4u; f_80004000(c); // 801CEAF0
  goto L_801CEB08; // 801CEAF4
L_801CEAF8:;
  c->r[3]=c->r[1]+0x00000008u; // 801CEAF8
  c->r[4]=0u+0x00000000u; // 801CEAFC
  c->r[5]=0u+0x00000008u; // 801CEB00
  c->lr=0x801CEB08u; f_80004350(c); // 801CEB04
L_801CEB08:;
  c->r[4]=R8(c->r[31]+0x0000000Eu); // 801CEB08
  c->r[3]=c->r[31]+0x00000008u; // 801CEB0C
  c->r[5]=c->r[31]+0x0000000Fu; // 801CEB10
  c->r[6]=c->r[1]+0x00000008u; // 801CEB14
  c->lr=0x801CEB1Cu; f_801DBA50(c); // 801CEB18
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CEB1C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CEB20
  c->lr=c->r[0]; // 801CEB24
  c->r[1]=c->r[1]+0x00000020u; // 801CEB28
  return; // 801CEB2C
}

// bta_dm_pin_reply
void f_801CEB30(Ctx* __restrict c) {
  trace_call(0x801CEB30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CEB30
  c->r[0]=c->lr; // 801CEB34
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CEB38
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CEB3C
  c->r[31]=c->r[3]|c->r[3]; // 801CEB40
  c->r[3]=c->r[3]+0x00000008u; // 801CEB44
  c->lr=0x801CEB4Cu; f_801DE34C(c); // 801CEB48
  cmps(c,0,(int32_t)c->r[3],0); // 801CEB4C
  if (crb(c,2)) { goto L_801CEB68; } // 801CEB50
  c->r[4]=c->r[3]|c->r[3]; // 801CEB54
  c->r[3]=c->r[1]+0x00000008u; // 801CEB58
  c->r[5]=0u+0x00000008u; // 801CEB5C
  c->lr=0x801CEB64u; f_80004000(c); // 801CEB60
  goto L_801CEB78; // 801CEB64
L_801CEB68:;
  c->r[3]=c->r[1]+0x00000008u; // 801CEB68
  c->r[4]=0u+0x00000000u; // 801CEB6C
  c->r[5]=0u+0x00000008u; // 801CEB70
  c->lr=0x801CEB78u; f_80004350(c); // 801CEB74
L_801CEB78:;
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 801CEB78
  cmps(c,0,(int32_t)c->r[0],0); // 801CEB7C
  if (crb(c,2)) { goto L_801CEBA0; } // 801CEB80
  c->r[5]=R8(c->r[31]+0x0000000Fu); // 801CEB84
  c->r[3]=c->r[31]+0x00000008u; // 801CEB88
  c->r[6]=c->r[31]+0x00000010u; // 801CEB8C
  c->r[7]=c->r[1]+0x00000008u; // 801CEB90
  c->r[4]=0u+0x00000000u; // 801CEB94
  c->lr=0x801CEB9Cu; f_801DB7B0(c); // 801CEB98
  goto L_801CEBB8; // 801CEB9C
L_801CEBA0:;
  c->r[3]=c->r[31]+0x00000008u; // 801CEBA0
  c->r[7]=c->r[1]+0x00000008u; // 801CEBA4
  c->r[4]=0u+0x0000000Bu; // 801CEBA8
  c->r[5]=0u+0x00000000u; // 801CEBAC
  c->r[6]=0u+0x00000000u; // 801CEBB0
  c->lr=0x801CEBB8u; f_801DB7B0(c); // 801CEBB4
L_801CEBB8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CEBB8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CEBBC
  c->lr=c->r[0]; // 801CEBC0
  c->r[1]=c->r[1]+0x00000020u; // 801CEBC4
  return; // 801CEBC8
}

// bta_dm_auth_reply
void f_801CEBCC(Ctx* __restrict c) {
  trace_call(0x801CEBCCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CEBCC
  c->r[0]=c->lr; // 801CEBD0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CEBD4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CEBD8
  c->r[31]=c->r[3]|c->r[3]; // 801CEBDC
  c->r[3]=c->r[3]+0x00000008u; // 801CEBE0
  c->lr=0x801CEBE8u; f_801DE34C(c); // 801CEBE4
  cmps(c,0,(int32_t)c->r[3],0); // 801CEBE8
  if (crb(c,2)) { goto L_801CEC04; } // 801CEBEC
  c->r[4]=c->r[3]|c->r[3]; // 801CEBF0
  c->r[3]=c->r[1]+0x00000008u; // 801CEBF4
  c->r[5]=0u+0x00000008u; // 801CEBF8
  c->lr=0x801CEC00u; f_80004000(c); // 801CEBFC
  goto L_801CEC14; // 801CEC00
L_801CEC04:;
  c->r[3]=c->r[1]+0x00000008u; // 801CEC04
  c->r[4]=0u+0x00000000u; // 801CEC08
  c->r[5]=0u+0x00000008u; // 801CEC0C
  c->lr=0x801CEC14u; f_80004350(c); // 801CEC10
L_801CEC14:;
  c->r[0]=R8(c->r[31]+0x0000000Fu); // 801CEC14
  cmpu(c,0,c->r[0],0x00000002u); // 801CEC18
  if (crb(c,2)) { goto L_801CEC7C; } // 801CEC1C
  cmps(c,0,(int32_t)c->r[0],0); // 801CEC20
  if (!crb(c,2)) { goto L_801CEC68; } // 801CEC24
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 801CEC28
  cmpu(c,0,c->r[0],0x00000017u); // 801CEC2C
  if (crb(c,1)) { goto L_801CEC68; } // 801CEC30
  c->r[3]=0u+0x80380000u; // 801CEC34
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 801CEC38
  c->r[3]=c->r[3]+0xFFFFF038u; // 801CEC3C
  c->r[5]=c->r[1]+0x00000008u; // 801CEC40
  c->r[4]=R32(c->r[3]+c->r[0]); // 801CEC44
  c->r[3]=0u+0x00000001u; // 801CEC48
  c->r[0]=rotl(c->r[4],0)&0x00001FE0u; // 801CEC4C
  c->r[6]=rotl(c->r[4],29)&0x000003FCu; // 801CEC50
  c->r[0]=c->r[4]-c->r[0]; // 801CEC54
  c->r[4]=R32(c->r[5]+c->r[6]); // 801CEC58
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801CEC5C
  c->r[0]=c->r[4]|c->r[0]; // 801CEC60
  W32(c->r[5]+c->r[6],c->r[0]); // 801CEC64
L_801CEC68:;
  c->r[3]=c->r[31]+0x00000008u; // 801CEC68
  c->r[5]=c->r[1]+0x00000008u; // 801CEC6C
  c->r[4]=0u+0x00000000u; // 801CEC70
  c->lr=0x801CEC78u; f_801DB874(c); // 801CEC74
  goto L_801CEC8C; // 801CEC78
L_801CEC7C:;
  c->r[3]=c->r[31]+0x00000008u; // 801CEC7C
  c->r[5]=c->r[1]+0x00000008u; // 801CEC80
  c->r[4]=0u+0x0000000Bu; // 801CEC84
  c->lr=0x801CEC8Cu; f_801DB874(c); // 801CEC88
L_801CEC8C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CEC8C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CEC90
  c->lr=c->r[0]; // 801CEC94
  c->r[1]=c->r[1]+0x00000020u; // 801CEC98
  return; // 801CEC9C
}

// bta_dm_search_start
void f_801CECA0(Ctx* __restrict c) {
  trace_call(0x801CECA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CECA0
  c->r[0]=c->lr; // 801CECA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CECA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CECAC
  c->r[31]=c->r[3]|c->r[3]; // 801CECB0
  c->r[3]=0u+0x00000000u; // 801CECB4
  c->lr=0x801CECBCu; f_801D8AE0(c); // 801CECB8
  c->r[0]=R32(c->r[31]+0x00000018u); // 801CECBC
  c->r[3]=0u+0x80480000u; // 801CECC0
  c->r[4]=0u+0x801D0000u; // 801CECC4
  c->r[5]=0u+0x801D0000u; // 801CECC8
  W32(c->r[3]+0x000030F8u,c->r[0]); // 801CECCC
  c->r[6]=c->r[3]+0x000030F8u; // 801CECD0
  c->r[3]=c->r[31]+0x00000008u; // 801CECD4
  c->r[4]=c->r[4]+0xFFFFFAC8u; // 801CECD8
  c->r[0]=R32(c->r[31]+0x00000014u); // 801CECDC
  c->r[5]=c->r[5]+0xFFFFFB58u; // 801CECE0
  W32(c->r[6]+0x00000008u,c->r[0]); // 801CECE4
  c->lr=0x801CECECu; f_801D8518(c); // 801CECE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CECEC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CECF0
  c->lr=c->r[0]; // 801CECF4
  c->r[1]=c->r[1]+0x00000010u; // 801CECF8
  return; // 801CECFC
}

// bta_dm_search_cancel
void f_801CED00(Ctx* __restrict c) {
  trace_call(0x801CED00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CED00
  c->r[0]=c->lr; // 801CED04
  c->r[3]=0u+0x00000000u; // 801CED08
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CED0C
  c->lr=0x801CED14u; f_801D8AE0(c); // 801CED10
  c->lr=0x801CED18u; f_801D8400(c); // 801CED14
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801CED18
  if (crb(c,2)) { goto L_801CED5C; } // 801CED1C
  c->lr=0x801CED24u; f_801D8410(c); // 801CED20
  c->r[4]=0u+0x80480000u; // 801CED24
  c->r[3]=0u+0x00000004u; // 801CED28
  c->r[12]=R32(c->r[4]+0x000030F8u); // 801CED2C
  c->r[4]=0u+0x00000000u; // 801CED30
  c->ctr=c->r[12]; // 801CED34
  if (true) { c->lr=0x801CED3Cu; dispatch(c,c->ctr); } // 801CED38
  c->r[3]=0u+0x00000110u; // 801CED3C
  c->lr=0x801CED44u; f_801CAC80(c); // 801CED40
  cmps(c,0,(int32_t)c->r[3],0); // 801CED44
  if (crb(c,2)) { goto L_801CED74; } // 801CED48
  c->r[0]=0u+0x00000207u; // 801CED4C
  W16(c->r[3]+0x00000000u,c->r[0]); // 801CED50
  c->lr=0x801CED58u; f_801CE510(c); // 801CED54
  goto L_801CED74; // 801CED58
L_801CED5C:;
  c->r[3]=0u+0x80480000u; // 801CED5C
  c->r[3]=c->r[3]+0x000030F8u; // 801CED60
  c->r[0]=R32(c->r[3]+0x00000008u); // 801CED64
  cmps(c,0,(int32_t)c->r[0],0); // 801CED68
  if (!crb(c,2)) { goto L_801CED74; } // 801CED6C
  c->lr=0x801CED74u; f_801D87B4(c); // 801CED70
L_801CED74:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CED74
  c->lr=c->r[0]; // 801CED78
  c->r[1]=c->r[1]+0x00000010u; // 801CED7C
  return; // 801CED80
}

// bta_dm_discover
void f_801CED84(Ctx* __restrict c) {
  trace_call(0x801CED84u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CED84
  c->r[0]=c->lr; // 801CED88
  c->r[4]=0u+0x80480000u; // 801CED8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CED90
  c->r[0]=0u+0x00000000u; // 801CED94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CED98
  c->r[31]=c->r[4]+0x000030F8u; // 801CED9C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CEDA0
  c->r[30]=c->r[3]|c->r[3]; // 801CEDA4
  c->r[5]=R32(c->r[3]+0x00000014u); // 801CEDA8
  W32(c->r[4]+0x000030F8u,c->r[5]); // 801CEDAC
  c->r[4]=0u+0x801D0000u; // 801CEDB0
  c->r[5]=R32(c->r[3]+0x00000010u); // 801CEDB4
  c->r[3]=c->r[4]+0xFFFFFBA4u; // 801CEDB8
  W32(c->r[31]+0x00000008u,c->r[5]); // 801CEDBC
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 801CEDC0
  W8(c->r[31]+0x00000070u,c->r[0]); // 801CEDC4
  W32(c->r[31]+0x00000010u,c->r[0]); // 801CEDC8
  W8(c->r[31]+0x00000020u,c->r[0]); // 801CEDCC
  c->lr=0x801CEDD4u; f_801DB434(c); // 801CEDD0
  c->r[3]=c->r[31]+0x0000001Au; // 801CEDD4
  c->r[4]=c->r[30]+0x00000008u; // 801CEDD8
  c->lr=0x801CEDE0u; f_801CE064(c); // 801CEDDC
  c->r[0]=R32(c->r[31]+0x00000008u); // 801CEDE0
  cmps(c,0,(int32_t)c->r[0],0); // 801CEDE4
  if (crb(c,2)) { goto L_801CEDF8; } // 801CEDE8
  c->r[3]=c->r[31]+0x0000001Au; // 801CEDEC
  c->lr=0x801CEDF4u; f_801CF800(c); // 801CEDF0
  goto L_801CEE80; // 801CEDF4
L_801CEDF8:;
  c->r[3]=0u+0x80480000u; // 801CEDF8
  c->r[3]=c->r[3]+0x000034D8u; // 801CEDFC
  c->r[4]=R16(c->r[3]+0x0000064Cu); // 801CEE00
  cmpu(c,0,c->r[4],0x00007530u); // 801CEE04
  if (!crb(c,0)) { goto L_801CEE1C; } // 801CEE08
  c->r[5]=c->r[4]+0x00000064u; // 801CEE0C
  c->r[3]=c->r[31]+0x00000058u; // 801CEE10
  c->r[4]=0u+0x00000205u; // 801CEE14
  c->lr=0x801CEE1Cu; f_801CE52C(c); // 801CEE18
L_801CEE1C:;
  c->r[31]=0u+0x80480000u; // 801CEE1C
  c->r[4]=0u+0x801D0000u; // 801CEE20
  c->r[31]=c->r[31]+0x000030F8u; // 801CEE24
  c->r[3]=c->r[31]+0x0000001Au; // 801CEE28
  c->r[4]=c->r[4]+0xFFFFFC70u; // 801CEE2C
  c->lr=0x801CEE34u; f_801D86CC(c); // 801CEE30
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801CEE34
  cmpu(c,0,c->r[0],0x00000001u); // 801CEE38
  if (crb(c,2)) { goto L_801CEE80; } // 801CEE3C
  c->r[3]=c->r[31]+0x00000058u; // 801CEE40
  c->lr=0x801CEE48u; f_801CE54C(c); // 801CEE44
  c->r[3]=0u+0x00000110u; // 801CEE48
  c->lr=0x801CEE50u; f_801CAC80(c); // 801CEE4C
  cmps(c,0,(int32_t)c->r[3],0); // 801CEE50
  c->r[30]=c->r[3]|c->r[3]; // 801CEE54
  if (crb(c,2)) { goto L_801CEE80; } // 801CEE58
  c->r[3]=c->r[3]+0x00000008u; // 801CEE5C
  c->r[4]=c->r[31]+0x0000001Au; // 801CEE60
  c->lr=0x801CEE68u; f_801CE064(c); // 801CEE64
  c->r[3]=0u+0x00000000u; // 801CEE68
  c->r[0]=0u+0x00000204u; // 801CEE6C
  W8(c->r[30]+0x0000000Eu,c->r[3]); // 801CEE70
  c->r[3]=c->r[30]|c->r[30]; // 801CEE74
  W16(c->r[30]+0x00000000u,c->r[0]); // 801CEE78
  c->lr=0x801CEE80u; f_801CE510(c); // 801CEE7C
L_801CEE80:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CEE80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CEE84
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CEE88
  c->lr=c->r[0]; // 801CEE8C
  c->r[1]=c->r[1]+0x00000010u; // 801CEE90
  return; // 801CEE94
}

// bta_dm_inq_cmpl
void f_801CEE98(Ctx* __restrict c) {
  trace_call(0x801CEE98u);
  {uint32_t ea=c->r[1]+0xFFFFFDD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CEE98
  c->r[0]=c->lr; // 801CEE9C
  W32(c->r[1]+0x00000234u,c->r[0]); // 801CEEA0
  c->r[11]=c->r[1]+0x00000230u; // 801CEEA4
  c->lr=0x801CEEACu; f_800C2E4C(c); // 801CEEA8
  c->r[31]=c->r[3]|c->r[3]; // 801CEEAC
  c->r[27]=0u+0x00000001u; // 801CEEB0
  c->lr=0x801CEEB8u; f_801D88EC(c); // 801CEEB4
  c->r[28]=0u+0x80480000u; // 801CEEB8
  cmps(c,0,(int32_t)c->r[3],0); // 801CEEBC
  c->r[29]=c->r[28]+0x000030F8u; // 801CEEC0
  W32(c->r[29]+0x00000004u,c->r[3]); // 801CEEC4
  if (crb(c,2)) { goto L_801CF050; } // 801CEEC8
  c->r[0]=R32(c->r[29]+0x00000008u); // 801CEECC
  c->r[27]=0u+0x00000000u; // 801CEED0
  cmps(c,0,(int32_t)c->r[0],0); // 801CEED4
  if (crb(c,2)) { goto L_801CEF50; } // 801CEED8
  c->r[3]=c->r[3]+0x00000002u; // 801CEEDC
  c->lr=0x801CEEE4u; f_801D4D64(c); // 801CEEE0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801CEEE4
  if (crb(c,2)) { goto L_801CEEF8; } // 801CEEE8
  c->r[0]=0u+0x00000000u; // 801CEEEC
  W8(c->r[29]+0x00000078u,c->r[0]); // 801CEEF0
  goto L_801CEF00; // 801CEEF4
L_801CEEF8:;
  c->r[0]=0u+0x00000001u; // 801CEEF8
  W8(c->r[29]+0x00000078u,c->r[0]); // 801CEEFC
L_801CEF00:;
  c->r[30]=0u+0x80480000u; // 801CEF00
  c->r[3]=0u+0x801D0000u; // 801CEF04
  c->r[30]=c->r[30]+0x000030F8u; // 801CEF08
  c->r[29]=0u+0x00000000u; // 801CEF0C
  W8(c->r[30]+0x00000079u,c->r[29]); // 801CEF10
  c->r[3]=c->r[3]+0xFFFFFBA4u; // 801CEF14
  c->lr=0x801CEF1Cu; f_801DB434(c); // 801CEF18
  c->r[0]=R32(c->r[30]+0x00000008u); // 801CEF1C
  c->r[3]=c->r[30]+0x0000001Au; // 801CEF20
  c->r[4]=R32(c->r[30]+0x00000004u); // 801CEF24
  W8(c->r[30]+0x00000070u,c->r[29]); // 801CEF28
  c->r[4]=c->r[4]+0x00000002u; // 801CEF2C
  W32(c->r[30]+0x00000010u,c->r[29]); // 801CEF30
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801CEF34
  W8(c->r[30]+0x00000020u,c->r[29]); // 801CEF38
  c->lr=0x801CEF40u; f_801CE064(c); // 801CEF3C
  c->r[3]=R32(c->r[30]+0x00000004u); // 801CEF40
  c->r[3]=c->r[3]+0x00000002u; // 801CEF44
  c->lr=0x801CEF4Cu; f_801CF800(c); // 801CEF48
  goto L_801CF050; // 801CEF4C
L_801CEF50:;
  c->r[27]=0u+0x00000001u; // 801CEF50
  c->r[30]=0u+0x00000000u; // 801CEF54
  goto L_801CF044; // 801CEF58
L_801CEF5C:;
  c->r[0]=R8(c->r[4]+0x00000010u); // 801CEF5C
  cmps(c,0,(int32_t)c->r[0],0); // 801CEF60
  if (crb(c,2)) { goto L_801CEF94; } // 801CEF64
  c->r[3]=c->r[1]+0x00000008u; // 801CEF68
  c->r[4]=c->r[4]+0x00000002u; // 801CEF6C
  c->lr=0x801CEF74u; f_801CE064(c); // 801CEF70
  c->r[12]=R32(c->r[28]+0x000030F8u); // 801CEF74
  c->r[4]=c->r[1]+0x00000008u; // 801CEF78
  W8(c->r[1]+0x0000000Eu,c->r[30]); // 801CEF7C
  c->r[3]=0u+0x00000002u; // 801CEF80
  W32(c->r[1]+0x00000108u,c->r[30]); // 801CEF84
  c->ctr=c->r[12]; // 801CEF88
  if (true) { c->lr=0x801CEF90u; dispatch(c,c->ctr); } // 801CEF8C
  goto L_801CF038; // 801CEF90
L_801CEF94:;
  c->r[3]=0u+0x80480000u; // 801CEF94
  c->r[3]=c->r[3]+0x000034D8u; // 801CEF98
  c->r[4]=R16(c->r[3]+0x0000064Cu); // 801CEF9C
  cmpu(c,0,c->r[4],0x00007530u); // 801CEFA0
  if (!crb(c,0)) { goto L_801CEFC0; } // 801CEFA4
  c->r[3]=0u+0x80480000u; // 801CEFA8
  c->r[5]=c->r[4]+0x00000064u; // 801CEFAC
  c->r[3]=c->r[3]+0x000030F8u; // 801CEFB0
  c->r[4]=0u+0x00000205u; // 801CEFB4
  c->r[3]=c->r[3]+0x00000058u; // 801CEFB8
  c->lr=0x801CEFC0u; f_801CE52C(c); // 801CEFBC
L_801CEFC0:;
  c->r[30]=0u+0x80480000u; // 801CEFC0
  c->r[4]=0u+0x801D0000u; // 801CEFC4
  c->r[30]=c->r[30]+0x000030F8u; // 801CEFC8
  c->r[3]=R32(c->r[30]+0x00000004u); // 801CEFCC
  c->r[4]=c->r[4]+0xFFFFFBE4u; // 801CEFD0
  c->r[3]=c->r[3]+0x00000002u; // 801CEFD4
  c->lr=0x801CEFDCu; f_801D86CC(c); // 801CEFD8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801CEFDC
  cmpu(c,0,c->r[0],0x00000001u); // 801CEFE0
  if (crb(c,2)) { goto L_801CF030; } // 801CEFE4
  c->r[3]=c->r[30]+0x00000058u; // 801CEFE8
  c->lr=0x801CEFF0u; f_801CE54C(c); // 801CEFEC
  c->r[4]=R32(c->r[30]+0x00000004u); // 801CEFF0
  c->r[3]=0u+0x00000110u; // 801CEFF4
  c->r[28]=c->r[4]+0x00000002u; // 801CEFF8
  c->lr=0x801CF000u; f_801CAC80(c); // 801CEFFC
  cmps(c,0,(int32_t)c->r[3],0); // 801CF000
  c->r[29]=c->r[3]|c->r[3]; // 801CF004
  if (crb(c,2)) { goto L_801CF030; } // 801CF008
  c->r[4]=c->r[28]|c->r[28]; // 801CF00C
  c->r[3]=c->r[3]+0x00000008u; // 801CF010
  c->lr=0x801CF018u; f_801CE064(c); // 801CF014
  c->r[3]=0u+0x00000000u; // 801CF018
  c->r[0]=0u+0x00000204u; // 801CF01C
  W8(c->r[29]+0x0000000Eu,c->r[3]); // 801CF020
  c->r[3]=c->r[29]|c->r[29]; // 801CF024
  W16(c->r[29]+0x00000000u,c->r[0]); // 801CF028
  c->lr=0x801CF030u; f_801CE510(c); // 801CF02C
L_801CF030:;
  c->r[27]=0u+0x00000000u; // 801CF030
  goto L_801CF050; // 801CF034
L_801CF038:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 801CF038
  c->lr=0x801CF040u; f_801D89A4(c); // 801CF03C
  W32(c->r[29]+0x00000004u,c->r[3]); // 801CF040
L_801CF044:;
  c->r[4]=R32(c->r[29]+0x00000004u); // 801CF044
  cmps(c,0,(int32_t)c->r[4],0); // 801CF048
  if (!crb(c,2)) { IRQCHK(c); goto L_801CEF5C; } // 801CF04C
L_801CF050:;
  cmps(c,0,(int32_t)c->r[27],0); // 801CF050
  if (crb(c,2)) { goto L_801CF084; } // 801CF054
  c->r[4]=0u+0x80480000u; // 801CF058
  c->r[0]=0u+0x00000000u; // 801CF05C
  c->r[4]=c->r[4]+0x000030F8u; // 801CF060
  c->r[3]=0u+0x00000110u; // 801CF064
  W32(c->r[4]+0x00000008u,c->r[0]); // 801CF068
  c->lr=0x801CF070u; f_801CAC80(c); // 801CF06C
  cmps(c,0,(int32_t)c->r[3],0); // 801CF070
  if (crb(c,2)) { goto L_801CF084; } // 801CF074
  c->r[0]=0u+0x00000207u; // 801CF078
  W16(c->r[3]+0x00000000u,c->r[0]); // 801CF07C
  c->lr=0x801CF084u; f_801CE510(c); // 801CF080
L_801CF084:;
  c->r[3]=0u+0x80480000u; // 801CF084
  c->r[0]=R8(c->r[31]+0x00000008u); // 801CF088
  c->r[12]=R32(c->r[3]+0x000030F8u); // 801CF08C
  c->r[4]=c->r[1]+0x00000110u; // 801CF090
  W8(c->r[1]+0x00000110u,c->r[0]); // 801CF094
  c->r[3]=0u+0x00000001u; // 801CF098
  c->ctr=c->r[12]; // 801CF09C
  if (true) { c->lr=0x801CF0A4u; dispatch(c,c->ctr); } // 801CF0A0
  c->r[11]=c->r[1]+0x00000230u; // 801CF0A4
  c->lr=0x801CF0ACu; f_800C2E98(c); // 801CF0A8
  c->r[0]=R32(c->r[1]+0x00000234u); // 801CF0AC
  c->lr=c->r[0]; // 801CF0B0
  c->r[1]=c->r[1]+0x00000230u; // 801CF0B4
  return; // 801CF0B8
}

// bta_dm_rmt_name
void f_801CF0BC(Ctx* __restrict c) {
  trace_call(0x801CF0BCu);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF0BC
  c->r[0]=c->lr; // 801CF0C0
  W32(c->r[1]+0x00000134u,c->r[0]); // 801CF0C4
  c->r[11]=c->r[1]+0x00000130u; // 801CF0C8
  c->lr=0x801CF0D0u; f_800C2E4C(c); // 801CF0CC
  c->r[28]=0u+0x80480000u; // 801CF0D0
  c->r[31]=c->r[3]|c->r[3]; // 801CF0D4
  c->r[27]=0u+0x00000001u; // 801CF0D8
  c->r[30]=0u+0x00000000u; // 801CF0DC
  c->r[29]=c->r[28]+0x000030F8u; // 801CF0E0
  goto L_801CF1C0; // 801CF0E4
L_801CF0E8:;
  c->r[4]=R32(c->r[29]+0x00000004u); // 801CF0E8
  c->r[0]=R8(c->r[4]+0x00000010u); // 801CF0EC
  cmps(c,0,(int32_t)c->r[0],0); // 801CF0F0
  if (crb(c,2)) { goto L_801CF124; } // 801CF0F4
  c->r[3]=c->r[1]+0x00000008u; // 801CF0F8
  c->r[4]=c->r[4]+0x00000002u; // 801CF0FC
  c->lr=0x801CF104u; f_801CE064(c); // 801CF100
  c->r[12]=R32(c->r[28]+0x000030F8u); // 801CF104
  c->r[4]=c->r[1]+0x00000008u; // 801CF108
  W8(c->r[1]+0x0000000Eu,c->r[30]); // 801CF10C
  c->r[3]=0u+0x00000002u; // 801CF110
  W32(c->r[1]+0x00000108u,c->r[30]); // 801CF114
  c->ctr=c->r[12]; // 801CF118
  if (true) { c->lr=0x801CF120u; dispatch(c,c->ctr); } // 801CF11C
  goto L_801CF1C0; // 801CF120
L_801CF124:;
  c->r[3]=0u+0x80480000u; // 801CF124
  c->r[3]=c->r[3]+0x000034D8u; // 801CF128
  c->r[4]=R16(c->r[3]+0x0000064Cu); // 801CF12C
  cmpu(c,0,c->r[4],0x00007530u); // 801CF130
  if (!crb(c,0)) { goto L_801CF148; } // 801CF134
  c->r[5]=c->r[4]+0x00000064u; // 801CF138
  c->r[3]=c->r[29]+0x00000058u; // 801CF13C
  c->r[4]=0u+0x00000205u; // 801CF140
  c->lr=0x801CF148u; f_801CE52C(c); // 801CF144
L_801CF148:;
  c->r[30]=0u+0x80480000u; // 801CF148
  c->r[4]=0u+0x801D0000u; // 801CF14C
  c->r[30]=c->r[30]+0x000030F8u; // 801CF150
  c->r[3]=R32(c->r[30]+0x00000004u); // 801CF154
  c->r[4]=c->r[4]+0xFFFFFBE4u; // 801CF158
  c->r[3]=c->r[3]+0x00000002u; // 801CF15C
  c->lr=0x801CF164u; f_801D86CC(c); // 801CF160
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801CF164
  cmpu(c,0,c->r[0],0x00000001u); // 801CF168
  if (crb(c,2)) { goto L_801CF1B8; } // 801CF16C
  c->r[3]=c->r[30]+0x00000058u; // 801CF170
  c->lr=0x801CF178u; f_801CE54C(c); // 801CF174
  c->r[4]=R32(c->r[30]+0x00000004u); // 801CF178
  c->r[3]=0u+0x00000110u; // 801CF17C
  c->r[28]=c->r[4]+0x00000002u; // 801CF180
  c->lr=0x801CF188u; f_801CAC80(c); // 801CF184
  cmps(c,0,(int32_t)c->r[3],0); // 801CF188
  c->r[29]=c->r[3]|c->r[3]; // 801CF18C
  if (crb(c,2)) { goto L_801CF1B8; } // 801CF190
  c->r[4]=c->r[28]|c->r[28]; // 801CF194
  c->r[3]=c->r[3]+0x00000008u; // 801CF198
  c->lr=0x801CF1A0u; f_801CE064(c); // 801CF19C
  c->r[3]=0u+0x00000000u; // 801CF1A0
  c->r[0]=0u+0x00000204u; // 801CF1A4
  W8(c->r[29]+0x0000000Eu,c->r[3]); // 801CF1A8
  c->r[3]=c->r[29]|c->r[29]; // 801CF1AC
  W16(c->r[29]+0x00000000u,c->r[0]); // 801CF1B0
  c->lr=0x801CF1B8u; f_801CE510(c); // 801CF1B4
L_801CF1B8:;
  c->r[27]=0u+0x00000000u; // 801CF1B8
  goto L_801CF1D4; // 801CF1BC
L_801CF1C0:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 801CF1C0
  c->lr=0x801CF1C8u; f_801D89A4(c); // 801CF1C4
  cmps(c,0,(int32_t)c->r[3],0); // 801CF1C8
  W32(c->r[29]+0x00000004u,c->r[3]); // 801CF1CC
  if (!crb(c,2)) { IRQCHK(c); goto L_801CF0E8; } // 801CF1D0
L_801CF1D4:;
  cmps(c,0,(int32_t)c->r[27],0); // 801CF1D4
  if (crb(c,2)) { goto L_801CF1F8; } // 801CF1D8
  c->r[3]=0u+0x00000110u; // 801CF1DC
  c->lr=0x801CF1E4u; f_801CAC80(c); // 801CF1E0
  cmps(c,0,(int32_t)c->r[3],0); // 801CF1E4
  if (crb(c,2)) { goto L_801CF1F8; } // 801CF1E8
  c->r[0]=0u+0x00000207u; // 801CF1EC
  W16(c->r[3]+0x00000000u,c->r[0]); // 801CF1F0
  c->lr=0x801CF1F8u; f_801CE510(c); // 801CF1F4
L_801CF1F8:;
  c->r[3]=0u+0x80480000u; // 801CF1F8
  c->r[4]=c->r[31]+0x00000008u; // 801CF1FC
  c->r[12]=R32(c->r[3]+0x000030F8u); // 801CF200
  c->r[3]=0u+0x00000002u; // 801CF204
  c->ctr=c->r[12]; // 801CF208
  if (true) { c->lr=0x801CF210u; dispatch(c,c->ctr); } // 801CF20C
  c->r[11]=c->r[1]+0x00000130u; // 801CF210
  c->lr=0x801CF218u; f_800C2E98(c); // 801CF214
  c->r[0]=R32(c->r[1]+0x00000134u); // 801CF218
  c->lr=c->r[0]; // 801CF21C
  c->r[1]=c->r[1]+0x00000130u; // 801CF220
  return; // 801CF224
}

// bta_dm_disc_rmt_name
void f_801CF228(Ctx* __restrict c) {
  trace_call(0x801CF228u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF228
  c->r[0]=c->lr; // 801CF22C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF230
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CF234
  c->r[31]=c->r[3]|c->r[3]; // 801CF238
  c->r[3]=0u+0x00000110u; // 801CF23C
  c->lr=0x801CF244u; f_801CAC80(c); // 801CF240
  cmps(c,0,(int32_t)c->r[3],0); // 801CF244
  if (crb(c,2)) { goto L_801CF258; } // 801CF248
  c->r[0]=0u+0x00000207u; // 801CF24C
  W16(c->r[3]+0x00000000u,c->r[0]); // 801CF250
  c->lr=0x801CF258u; f_801CE510(c); // 801CF254
L_801CF258:;
  c->r[0]=0u+0x00000000u; // 801CF258
  c->r[5]=0u+0x80480000u; // 801CF25C
  W32(c->r[31]+0x00000108u,c->r[0]); // 801CF260
  c->r[4]=c->r[31]+0x00000008u; // 801CF264
  c->r[3]=0u+0x00000002u; // 801CF268
  c->r[12]=R32(c->r[5]+0x000030F8u); // 801CF26C
  c->ctr=c->r[12]; // 801CF270
  if (true) { c->lr=0x801CF278u; dispatch(c,c->ctr); } // 801CF274
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF278
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CF27C
  c->lr=c->r[0]; // 801CF280
  c->r[1]=c->r[1]+0x00000010u; // 801CF284
  return; // 801CF288
}

// bta_dm_sdp_result
void f_801CF28C(Ctx* __restrict c) {
  trace_call(0x801CF28Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF28C
  c->r[0]=c->lr; // 801CF290
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CF294
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CF298
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CF29C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CF2A0
  c->r[29]=0u+0x00000000u; // 801CF2A4
  c->r[5]=R16(c->r[3]+0x00000008u); // 801CF2A8
  c->r[3]=0u+0x00000000u; // 801CF2AC
  cmps(c,0,(int32_t)c->r[5],0); // 801CF2B0
  if (crb(c,2)) { goto L_801CF2C8; } // 801CF2B4
  cmpu(c,0,c->r[5],0x0000FFF0u); // 801CF2B8
  if (crb(c,2)) { goto L_801CF2C8; } // 801CF2BC
  cmpu(c,0,c->r[5],0x0000FFF4u); // 801CF2C0
  if (!crb(c,2)) { goto L_801CF418; } // 801CF2C4
L_801CF2C8:;
  c->r[6]=0u+0x80480000u; // 801CF2C8
  c->r[4]=0u+0x80380000u; // 801CF2CC
  c->r[6]=c->r[6]+0x000030F8u; // 801CF2D0
  cmpu(c,0,c->r[5],0x0000FFF4u); // 801CF2D4
  c->r[5]=R8(c->r[6]+0x00000070u); // 801CF2D8
  c->r[4]=c->r[4]+0xFFFFF008u; // 801CF2DC
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 801CF2E0
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801CF2E4
  c->r[30]=R16(c->r[4]+c->r[0]); // 801CF2E8
  if (crb(c,2)) { goto L_801CF308; } // 801CF2EC
  c->r[3]=R32(c->r[6]+0x00000014u); // 801CF2F0
  c->r[4]=c->r[30]|c->r[30]; // 801CF2F4
  c->r[5]=0u+0x00000000u; // 801CF2F8
  c->lr=0x801CF300u; f_801F2D4C(c); // 801CF2FC
  cmps(c,0,(int32_t)c->r[3],0); // 801CF300
  if (crb(c,2)) { goto L_801CF368; } // 801CF304
L_801CF308:;
  cmpu(c,0,c->r[30],0x00001200u); // 801CF308
  if (!crb(c,2)) { goto L_801CF338; } // 801CF30C
  cmps(c,0,(int32_t)c->r[3],0); // 801CF310
  if (crb(c,2)) { goto L_801CF33C; } // 801CF314
  c->r[4]=0u+0x00010000u; // 801CF318
  c->r[0]=c->r[4]+0xFFFF8001u; // 801CF31C
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801CF320
  c->lr=0x801CF328u; f_801F2D24(c); // 801CF324
  cmps(c,0,(int32_t)c->r[3],0); // 801CF328
  if (crb(c,2)) { goto L_801CF33C; } // 801CF32C
  c->r[29]=0u+0x00000001u; // 801CF330
  goto L_801CF33C; // 801CF334
L_801CF338:;
  c->r[29]=0u+0x00000001u; // 801CF338
L_801CF33C:;
  cmps(c,0,(int32_t)c->r[29],0); // 801CF33C
  if (crb(c,2)) { goto L_801CF368; } // 801CF340
  c->r[6]=0u+0x80480000u; // 801CF344
  c->r[4]=0u+0x00000001u; // 801CF348
  c->r[6]=c->r[6]+0x000030F8u; // 801CF34C
  c->r[3]=R8(c->r[6]+0x00000070u); // 801CF350
  c->r[5]=R32(c->r[6]+0x00000010u); // 801CF354
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801CF358
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 801CF35C
  c->r[0]=c->r[5]|c->r[0]; // 801CF360
  W32(c->r[6]+0x00000010u,c->r[0]); // 801CF364
L_801CF368:;
  c->r[30]=0u+0x80480000u; // 801CF368
  c->r[30]=c->r[30]+0x000030F8u; // 801CF36C
  c->r[3]=R32(c->r[30]+0x00000014u); // 801CF370
  c->lr=0x801CF378u; f_801CAF10(c); // 801CF374
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801CF378
  c->r[31]=0u+0x00000000u; // 801CF37C
  W32(c->r[30]+0x00000014u,c->r[31]); // 801CF380
  cmps(c,0,(int32_t)c->r[0],0); // 801CF384
  if (crb(c,2)) { goto L_801CF398; } // 801CF388
  c->r[3]=c->r[30]+0x0000001Au; // 801CF38C
  c->lr=0x801CF394u; f_801CF800(c); // 801CF390
  goto L_801CF4D8; // 801CF394
L_801CF398:;
  c->r[3]=0u+0x801D0000u; // 801CF398
  c->r[3]=c->r[3]+0xFFFFFBA4u; // 801CF39C
  c->lr=0x801CF3A4u; f_801DB484(c); // 801CF3A0
  c->r[3]=0u+0x00000110u; // 801CF3A4
  c->lr=0x801CF3ACu; f_801CAC80(c); // 801CF3A8
  cmps(c,0,(int32_t)c->r[3],0); // 801CF3AC
  c->r[29]=c->r[3]|c->r[3]; // 801CF3B0
  if (crb(c,2)) { goto L_801CF4D8; } // 801CF3B4
  c->r[0]=0u+0x00000208u; // 801CF3B8
  c->r[4]=c->r[30]+0x0000001Au; // 801CF3BC
  W16(c->r[3]+0x00000000u,c->r[0]); // 801CF3C0
  W8(c->r[3]+0x0000010Cu,c->r[31]); // 801CF3C4
  c->r[0]=R32(c->r[30]+0x00000010u); // 801CF3C8
  W32(c->r[3]+0x00000108u,c->r[0]); // 801CF3CC
  c->r[3]=c->r[3]+0x00000008u; // 801CF3D0
  c->lr=0x801CF3D8u; f_801CE064(c); // 801CF3D4
  c->r[0]=R8(c->r[30]+0x00000020u); // 801CF3D8
  c->r[31]=c->r[30]+0x00000020u; // 801CF3DC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801CF3E0
  if (!crb(c,2)) { goto L_801CF3FC; } // 801CF3E4
  c->r[3]=c->r[30]+0x0000001Au; // 801CF3E8
  c->lr=0x801CF3F0u; f_801D5EA8(c); // 801CF3EC
  cmps(c,0,(int32_t)c->r[3],0); // 801CF3F0
  if (crb(c,2)) { goto L_801CF3FC; } // 801CF3F4
  c->r[31]=c->r[3]|c->r[3]; // 801CF3F8
L_801CF3FC:;
  c->r[4]=c->r[31]|c->r[31]; // 801CF3FC
  c->r[3]=c->r[29]+0x0000000Eu; // 801CF400
  c->r[5]=0u+0x00000020u; // 801CF404
  c->lr=0x801CF40Cu; f_800CA310(c); // 801CF408
  c->r[3]=c->r[29]|c->r[29]; // 801CF40C
  c->lr=0x801CF414u; f_801CE510(c); // 801CF410
  goto L_801CF4D8; // 801CF414
L_801CF418:;
  cmpu(c,0,c->r[5],0x0000FFF1u); // 801CF418
  if (crb(c,2)) { goto L_801CF430; } // 801CF41C
  c->r[0]=c->r[5]+0x0000000Au; // 801CF420
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801CF424
  cmpu(c,0,c->r[0],0x00000001u); // 801CF428
  if (crb(c,1)) { goto L_801CF440; } // 801CF42C
L_801CF430:;
  c->r[3]=0u+0x80480000u; // 801CF430
  c->r[0]=0u+0x00000000u; // 801CF434
  c->r[3]=c->r[3]+0x000030F8u; // 801CF438
  W8(c->r[3]+0x00000078u,c->r[0]); // 801CF43C
L_801CF440:;
  c->r[31]=0u+0x80480000u; // 801CF440
  c->r[31]=c->r[31]+0x000030F8u; // 801CF444
  c->r[3]=R32(c->r[31]+0x00000014u); // 801CF448
  c->lr=0x801CF450u; f_801CAF10(c); // 801CF44C
  c->r[0]=0u+0x00000000u; // 801CF450
  c->r[3]=0u+0x801D0000u; // 801CF454
  W32(c->r[31]+0x00000014u,c->r[0]); // 801CF458
  c->r[3]=c->r[3]+0xFFFFFBA4u; // 801CF45C
  c->lr=0x801CF464u; f_801DB484(c); // 801CF460
  c->r[3]=0u+0x00000110u; // 801CF464
  c->lr=0x801CF46Cu; f_801CAC80(c); // 801CF468
  cmps(c,0,(int32_t)c->r[3],0); // 801CF46C
  c->r[29]=c->r[3]|c->r[3]; // 801CF470
  if (crb(c,2)) { goto L_801CF4D8; } // 801CF474
  c->r[4]=0u+0x00000208u; // 801CF478
  c->r[0]=0u+0x00000001u; // 801CF47C
  W16(c->r[3]+0x00000000u,c->r[4]); // 801CF480
  c->r[4]=c->r[31]+0x0000001Au; // 801CF484
  W8(c->r[3]+0x0000010Cu,c->r[0]); // 801CF488
  c->r[0]=R32(c->r[31]+0x00000010u); // 801CF48C
  W32(c->r[3]+0x00000108u,c->r[0]); // 801CF490
  c->r[3]=c->r[3]+0x00000008u; // 801CF494
  c->lr=0x801CF49Cu; f_801CE064(c); // 801CF498
  c->r[0]=R8(c->r[31]+0x00000020u); // 801CF49C
  c->r[30]=c->r[31]+0x00000020u; // 801CF4A0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801CF4A4
  if (!crb(c,2)) { goto L_801CF4C0; } // 801CF4A8
  c->r[3]=c->r[31]+0x0000001Au; // 801CF4AC
  c->lr=0x801CF4B4u; f_801D5EA8(c); // 801CF4B0
  cmps(c,0,(int32_t)c->r[3],0); // 801CF4B4
  if (crb(c,2)) { goto L_801CF4C0; } // 801CF4B8
  c->r[30]=c->r[3]|c->r[3]; // 801CF4BC
L_801CF4C0:;
  c->r[4]=c->r[30]|c->r[30]; // 801CF4C0
  c->r[3]=c->r[29]+0x0000000Eu; // 801CF4C4
  c->r[5]=0u+0x00000020u; // 801CF4C8
  c->lr=0x801CF4D0u; f_800CA310(c); // 801CF4CC
  c->r[3]=c->r[29]|c->r[29]; // 801CF4D0
  c->lr=0x801CF4D8u; f_801CE510(c); // 801CF4D4
L_801CF4D8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CF4D8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CF4DC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CF4E0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CF4E4
  c->lr=c->r[0]; // 801CF4E8
  c->r[1]=c->r[1]+0x00000020u; // 801CF4EC
  return; // 801CF4F0
}

// bta_dm_search_cmpl
void f_801CF4F4(Ctx* __restrict c) {
  trace_call(0x801CF4F4u);
  c->r[4]=0u+0x80480000u; // 801CF4F4
  c->r[3]=0u+0x00000003u; // 801CF4F8
  c->r[12]=R32(c->r[4]+0x000030F8u); // 801CF4FC
  c->r[4]=0u+0x00000000u; // 801CF500
  c->ctr=c->r[12]; // 801CF504
  if (true) { dispatch(c,c->ctr); return; } // 801CF508
}

// bta_dm_disc_result
void f_801CF50C(Ctx* __restrict c) {
  trace_call(0x801CF50Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF50C
  c->r[0]=c->lr; // 801CF510
  c->r[4]=0u+0x80480000u; // 801CF514
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF518
  c->r[12]=R32(c->r[4]+0x000030F8u); // 801CF51C
  c->r[4]=c->r[3]+0x00000008u; // 801CF520
  c->r[3]=0u+0x00000002u; // 801CF524
  c->ctr=c->r[12]; // 801CF528
  if (true) { c->lr=0x801CF530u; dispatch(c,c->ctr); } // 801CF52C
  c->r[3]=0u+0x00000110u; // 801CF530
  c->lr=0x801CF538u; f_801CAC80(c); // 801CF534
  cmps(c,0,(int32_t)c->r[3],0); // 801CF538
  if (crb(c,2)) { goto L_801CF54C; } // 801CF53C
  c->r[0]=0u+0x00000207u; // 801CF540
  W16(c->r[3]+0x00000000u,c->r[0]); // 801CF544
  c->lr=0x801CF54Cu; f_801CE510(c); // 801CF548
L_801CF54C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF54C
  c->lr=c->r[0]; // 801CF550
  c->r[1]=c->r[1]+0x00000010u; // 801CF554
  return; // 801CF558
}

// bta_dm_search_result
void f_801CF55C(Ctx* __restrict c) {
  trace_call(0x801CF55Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF55C
  c->r[0]=c->lr; // 801CF560
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF564
  c->r[0]=R32(c->r[3]+0x00000108u); // 801CF568
  cmps(c,0,(int32_t)c->r[0],0); // 801CF56C
  if (crb(c,2)) { goto L_801CF58C; } // 801CF570
  c->r[5]=0u+0x80480000u; // 801CF574
  c->r[4]=c->r[3]+0x00000008u; // 801CF578
  c->r[12]=R32(c->r[5]+0x000030F8u); // 801CF57C
  c->r[3]=0u+0x00000002u; // 801CF580
  c->ctr=c->r[12]; // 801CF584
  if (true) { c->lr=0x801CF58Cu; dispatch(c,c->ctr); } // 801CF588
L_801CF58C:;
  c->r[6]=0u+0x80480000u; // 801CF58C
  c->r[6]=c->r[6]+0x000030F8u; // 801CF590
  c->r[0]=R8(c->r[6]+0x00000078u); // 801CF594
  cmps(c,0,(int32_t)c->r[0],0); // 801CF598
  if (!crb(c,2)) { goto L_801CF5B0; } // 801CF59C
  c->r[0]=0u+0x00000000u; // 801CF5A0
  W8(c->r[6]+0x00000078u,c->r[0]); // 801CF5A4
  c->lr=0x801CF5ACu; f_801CF9A0(c); // 801CF5A8
  goto L_801CF5D4; // 801CF5AC
L_801CF5B0:;
  c->r[5]=0u+0x801D0000u; // 801CF5B0
  c->r[0]=0u+0x00000001u; // 801CF5B4
  c->r[5]=c->r[5]+0xFFFFF5E4u; // 801CF5B8
  W8(c->r[6]+0x00000079u,c->r[0]); // 801CF5BC
  c->r[3]=c->r[6]+0x00000040u; // 801CF5C0
  c->r[4]=0u+0x00000000u; // 801CF5C4
  W32(c->r[6]+0x00000048u,c->r[5]); // 801CF5C8
  c->r[5]=0u+0x00000BB8u; // 801CF5CC
  c->lr=0x801CF5D4u; f_801CE52C(c); // 801CF5D0
L_801CF5D4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF5D4
  c->lr=c->r[0]; // 801CF5D8
  c->r[1]=c->r[1]+0x00000010u; // 801CF5DC
  return; // 801CF5E0
}

// bta_dm_search_timer_cback
void f_801CF5E4(Ctx* __restrict c) {
  trace_call(0x801CF5E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF5E4
  c->r[0]=c->lr; // 801CF5E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF5EC
  c->r[0]=R8(c->r[13]+0xFFFF9AF8u); // 801CF5F0
  cmpu(c,0,c->r[0],0x00000004u); // 801CF5F4
  if (crb(c,0)) { goto L_801CF60C; } // 801CF5F8
  c->r[4]=0u+0x803A0000u; // 801CF5FC
  c->r[3]=0u+0x00000503u; // 801CF600
  c->r[4]=c->r[4]+0xFFFFE3B8u; // 801CF604
  c->lr=0x801CF60Cu; f_801CD9D0(c); // 801CF608
L_801CF60C:;
  c->r[3]=0u+0x80480000u; // 801CF60C
  c->r[0]=0u+0x00000000u; // 801CF610
  c->r[3]=c->r[3]+0x000030F8u; // 801CF614
  W8(c->r[3]+0x00000078u,c->r[0]); // 801CF618
  c->lr=0x801CF620u; f_801CF9A0(c); // 801CF61C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF620
  c->lr=c->r[0]; // 801CF624
  c->r[1]=c->r[1]+0x00000010u; // 801CF628
  return; // 801CF62C
}

// bta_dm_free_sdp_db
void f_801CF630(Ctx* __restrict c) {
  trace_call(0x801CF630u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF630
  c->r[0]=c->lr; // 801CF634
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF638
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CF63C
  c->r[31]=0u+0x80480000u; // 801CF640
  c->r[31]=c->r[31]+0x000030F8u; // 801CF644
  c->r[3]=R32(c->r[31]+0x00000014u); // 801CF648
  cmps(c,0,(int32_t)c->r[3],0); // 801CF64C
  if (crb(c,2)) { goto L_801CF660; } // 801CF650
  c->lr=0x801CF658u; f_801CAF10(c); // 801CF654
  c->r[0]=0u+0x00000000u; // 801CF658
  W32(c->r[31]+0x00000014u,c->r[0]); // 801CF65C
L_801CF660:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF660
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CF664
  c->lr=c->r[0]; // 801CF668
  c->r[1]=c->r[1]+0x00000010u; // 801CF66C
  return; // 801CF670
}

// bta_dm_queue_search
void f_801CF674(Ctx* __restrict c) {
  trace_call(0x801CF674u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF674
  c->r[0]=c->lr; // 801CF678
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF67C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CF680
  c->r[31]=c->r[3]|c->r[3]; // 801CF684
  c->r[3]=0u+0x0000001Cu; // 801CF688
  c->lr=0x801CF690u; f_801CAC80(c); // 801CF68C
  c->r[6]=0u+0x80480000u; // 801CF690
  c->r[4]=c->r[31]|c->r[31]; // 801CF694
  c->r[6]=c->r[6]+0x000030F8u; // 801CF698
  c->r[5]=0u+0x0000001Cu; // 801CF69C
  W32(c->r[6]+0x00000074u,c->r[3]); // 801CF6A0
  c->lr=0x801CF6A8u; f_80004000(c); // 801CF6A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF6A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CF6AC
  c->lr=c->r[0]; // 801CF6B0
  c->r[1]=c->r[1]+0x00000010u; // 801CF6B4
  return; // 801CF6B8
}

// bta_dm_queue_disc
void f_801CF6BC(Ctx* __restrict c) {
  trace_call(0x801CF6BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF6BC
  c->r[0]=c->lr; // 801CF6C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF6C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CF6C8
  c->r[31]=c->r[3]|c->r[3]; // 801CF6CC
  c->r[3]=0u+0x00000018u; // 801CF6D0
  c->lr=0x801CF6D8u; f_801CAC80(c); // 801CF6D4
  c->r[6]=0u+0x80480000u; // 801CF6D8
  c->r[4]=c->r[31]|c->r[31]; // 801CF6DC
  c->r[6]=c->r[6]+0x000030F8u; // 801CF6E0
  c->r[5]=0u+0x00000018u; // 801CF6E4
  W32(c->r[6]+0x00000074u,c->r[3]); // 801CF6E8
  c->lr=0x801CF6F0u; f_80004000(c); // 801CF6EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF6F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CF6F4
  c->lr=c->r[0]; // 801CF6F8
  c->r[1]=c->r[1]+0x00000010u; // 801CF6FC
  return; // 801CF700
}

// bta_dm_search_clear_queue
void f_801CF704(Ctx* __restrict c) {
  trace_call(0x801CF704u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF704
  c->r[0]=c->lr; // 801CF708
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF70C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CF710
  c->r[31]=0u+0x80480000u; // 801CF714
  c->r[31]=c->r[31]+0x000030F8u; // 801CF718
  c->r[3]=R32(c->r[31]+0x00000074u); // 801CF71C
  cmps(c,0,(int32_t)c->r[3],0); // 801CF720
  if (crb(c,2)) { goto L_801CF734; } // 801CF724
  c->lr=0x801CF72Cu; f_801CAF10(c); // 801CF728
  c->r[0]=0u+0x00000000u; // 801CF72C
  W32(c->r[31]+0x00000074u,c->r[0]); // 801CF730
L_801CF734:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF734
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CF738
  c->lr=c->r[0]; // 801CF73C
  c->r[1]=c->r[1]+0x00000010u; // 801CF740
  return; // 801CF744
}

// bta_dm_search_cancel_cmpl
void f_801CF748(Ctx* __restrict c) {
  trace_call(0x801CF748u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF748
  c->r[0]=c->lr; // 801CF74C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF750
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CF754
  c->r[31]=0u+0x80480000u; // 801CF758
  c->r[31]=c->r[31]+0x000030F8u; // 801CF75C
  c->r[3]=R32(c->r[31]+0x00000074u); // 801CF760
  cmps(c,0,(int32_t)c->r[3],0); // 801CF764
  if (crb(c,2)) { goto L_801CF778; } // 801CF768
  c->lr=0x801CF770u; f_801CE510(c); // 801CF76C
  c->r[0]=0u+0x00000000u; // 801CF770
  W32(c->r[31]+0x00000074u,c->r[0]); // 801CF774
L_801CF778:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF778
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CF77C
  c->lr=c->r[0]; // 801CF780
  c->r[1]=c->r[1]+0x00000010u; // 801CF784
  return; // 801CF788
}

// bta_dm_search_cancel_transac_cmpl
void f_801CF78C(Ctx* __restrict c) {
  trace_call(0x801CF78Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF78C
  c->r[0]=c->lr; // 801CF790
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF794
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CF798
  c->r[31]=0u+0x80480000u; // 801CF79C
  c->r[31]=c->r[31]+0x000030F8u; // 801CF7A0
  c->r[3]=R32(c->r[31]+0x00000014u); // 801CF7A4
  cmps(c,0,(int32_t)c->r[3],0); // 801CF7A8
  if (crb(c,2)) { goto L_801CF7BC; } // 801CF7AC
  c->lr=0x801CF7B4u; f_801CAF10(c); // 801CF7B0
  c->r[0]=0u+0x00000000u; // 801CF7B4
  W32(c->r[31]+0x00000014u,c->r[0]); // 801CF7B8
L_801CF7BC:;
  c->r[4]=0u+0x80480000u; // 801CF7BC
  c->r[3]=0u+0x00000004u; // 801CF7C0
  c->r[12]=R32(c->r[4]+0x000030F8u); // 801CF7C4
  c->r[4]=0u+0x00000000u; // 801CF7C8
  c->ctr=c->r[12]; // 801CF7CC
  if (true) { c->lr=0x801CF7D4u; dispatch(c,c->ctr); } // 801CF7D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CF7D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CF7D8
  c->lr=c->r[0]; // 801CF7DC
  c->r[1]=c->r[1]+0x00000010u; // 801CF7E0
  return; // 801CF7E4
}

// bta_dm_search_cancel_notify
void f_801CF7E8(Ctx* __restrict c) {
  trace_call(0x801CF7E8u);
  c->r[4]=0u+0x80480000u; // 801CF7E8
  c->r[3]=0u+0x00000004u; // 801CF7EC
  c->r[12]=R32(c->r[4]+0x000030F8u); // 801CF7F0
  c->r[4]=0u+0x00000000u; // 801CF7F4
  c->ctr=c->r[12]; // 801CF7F8
  if (true) { dispatch(c,c->ctr); return; } // 801CF7FC
}

// bta_dm_find_services
void f_801CF800(Ctx* __restrict c) {
  trace_call(0x801CF800u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF800
  c->r[0]=c->lr; // 801CF804
  W32(c->r[1]+0x00000054u,c->r[0]); // 801CF808
  c->r[11]=c->r[1]+0x00000050u; // 801CF80C
  c->lr=0x801CF814u; f_800C2E3C(c); // 801CF810
  c->r[4]=R16(c->r[2]+0xFFFFB028u); // 801CF814
  c->r[26]=0u+0x80480000u; // 801CF818
  c->r[0]=R16(c->r[2]+0xFFFFB02Au); // 801CF81C
  c->r[25]=0u+0x80380000u; // 801CF820
  W16(c->r[1]+0x00000008u,c->r[4]); // 801CF824
  c->r[30]=c->r[3]|c->r[3]; // 801CF828
  c->r[25]=c->r[25]+0xFFFFF008u; // 801CF82C
  c->r[26]=c->r[26]+0x000030F8u; // 801CF830
  W16(c->r[1]+0x0000000Au,c->r[0]); // 801CF834
  c->r[31]=0u+0x00000001u; // 801CF838
  c->r[23]=0u+0x00000001u; // 801CF83C
  c->r[24]=0u+0x00000002u; // 801CF840
  c->r[27]=0u+0x801D0000u; // 801CF844
  c->r[28]=0u+0x00000000u; // 801CF848
  c->r[29]=0u+0x00000017u; // 801CF84C
  goto L_801CF90C; // 801CF850
L_801CF854:;
  c->r[3]=R32(c->r[26]+0x0000000Cu); // 801CF854
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[23]<<((c->r[0])&31)); // 801CF858
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 801CF85C
  if (crb(c,2)) { goto L_801CF900; } // 801CF860
  c->r[3]=0u+0x000000FAu; // 801CF864
  c->lr=0x801CF86Cu; f_801CAC80(c); // 801CF868
  cmps(c,0,(int32_t)c->r[3],0); // 801CF86C
  W32(c->r[26]+0x00000014u,c->r[3]); // 801CF870
  if (crb(c,2)) { goto L_801CF900; } // 801CF874
  c->r[3]=R8(c->r[26]+0x00000070u); // 801CF878
  c->r[4]=R32(c->r[26]+0x0000000Cu); // 801CF87C
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 801CF880
  c->r[3]=((c->r[3])&0x20)?0u:(c->r[23]<<((c->r[3])&31)); // 801CF884
  c->r[0]=R16(c->r[25]+c->r[0]); // 801CF888
  c->r[3]=c->r[4]&~c->r[3]; // 801CF88C
  W32(c->r[26]+0x0000000Cu,c->r[3]); // 801CF890
  cmpu(c,0,c->r[0],0x00001200u); // 801CF894
  W16(c->r[1]+0x0000000Cu,c->r[24]); // 801CF898
  W16(c->r[1]+0x00000010u,c->r[0]); // 801CF89C
  if (!crb(c,2)) { goto L_801CF8A8; } // 801CF8A0
  c->r[31]=0u+0x00000002u; // 801CF8A4
L_801CF8A8:;
  c->r[3]=R32(c->r[26]+0x00000014u); // 801CF8A8
  c->r[7]=c->r[31]|c->r[31]; // 801CF8AC
  c->r[6]=c->r[1]+0x0000000Cu; // 801CF8B0
  c->r[8]=c->r[1]+0x00000008u; // 801CF8B4
  c->r[4]=0u+0x000000FAu; // 801CF8B8
  c->r[5]=0u+0x00000001u; // 801CF8BC
  c->lr=0x801CF8C4u; f_801F28EC(c); // 801CF8C0
  c->r[4]=R32(c->r[26]+0x00000014u); // 801CF8C4
  c->r[3]=c->r[30]|c->r[30]; // 801CF8C8
  c->r[5]=c->r[27]+0xFFFFFA80u; // 801CF8CC
  c->lr=0x801CF8D4u; f_801F2CC0(c); // 801CF8D0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801CF8D4
  if (!crb(c,2)) { goto L_801CF8F0; } // 801CF8D8
  c->r[3]=R32(c->r[26]+0x00000014u); // 801CF8DC
  c->lr=0x801CF8E4u; f_801CAF10(c); // 801CF8E0
  W32(c->r[26]+0x00000014u,c->r[28]); // 801CF8E4
  W8(c->r[26]+0x00000070u,c->r[29]); // 801CF8E8
  goto L_801CF900; // 801CF8EC
L_801CF8F0:;
  c->r[3]=R8(c->r[26]+0x00000070u); // 801CF8F0
  c->r[0]=c->r[3]+0x00000001u; // 801CF8F4
  W8(c->r[26]+0x00000070u,c->r[0]); // 801CF8F8
  goto L_801CF988; // 801CF8FC
L_801CF900:;
  c->r[3]=R8(c->r[26]+0x00000070u); // 801CF900
  c->r[0]=c->r[3]+0x00000001u; // 801CF904
  W8(c->r[26]+0x00000070u,c->r[0]); // 801CF908
L_801CF90C:;
  c->r[0]=R8(c->r[26]+0x00000070u); // 801CF90C
  cmpu(c,0,c->r[0],0x00000017u); // 801CF910
  if (crb(c,0)) { IRQCHK(c); goto L_801CF854; } // 801CF914
  if (crb(c,0)) { goto L_801CF988; } // 801CF918
  c->r[3]=0u+0x00000110u; // 801CF91C
  c->lr=0x801CF924u; f_801CAC80(c); // 801CF920
  cmps(c,0,(int32_t)c->r[3],0); // 801CF924
  c->r[24]=c->r[3]|c->r[3]; // 801CF928
  if (crb(c,2)) { goto L_801CF988; } // 801CF92C
  c->r[0]=0u+0x00000208u; // 801CF930
  c->r[4]=c->r[26]+0x0000001Au; // 801CF934
  W16(c->r[3]+0x00000000u,c->r[0]); // 801CF938
  c->r[0]=R32(c->r[26]+0x00000010u); // 801CF93C
  W32(c->r[3]+0x00000108u,c->r[0]); // 801CF940
  c->r[3]=c->r[3]+0x00000008u; // 801CF944
  c->lr=0x801CF94Cu; f_801CE064(c); // 801CF948
  c->r[0]=R8(c->r[26]+0x00000020u); // 801CF94C
  c->r[23]=c->r[26]+0x00000020u; // 801CF950
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801CF954
  if (!crb(c,2)) { goto L_801CF970; } // 801CF958
  c->r[3]=c->r[26]+0x0000001Au; // 801CF95C
  c->lr=0x801CF964u; f_801D5EA8(c); // 801CF960
  cmps(c,0,(int32_t)c->r[3],0); // 801CF964
  if (crb(c,2)) { goto L_801CF970; } // 801CF968
  c->r[23]=c->r[3]|c->r[3]; // 801CF96C
L_801CF970:;
  c->r[4]=c->r[23]|c->r[23]; // 801CF970
  c->r[3]=c->r[24]+0x0000000Eu; // 801CF974
  c->r[5]=0u+0x00000020u; // 801CF978
  c->lr=0x801CF980u; f_800CA310(c); // 801CF97C
  c->r[3]=c->r[24]|c->r[24]; // 801CF980
  c->lr=0x801CF988u; f_801CE510(c); // 801CF984
L_801CF988:;
  c->r[11]=c->r[1]+0x00000050u; // 801CF988
  c->lr=0x801CF990u; f_800C2E88(c); // 801CF98C
  c->r[0]=R32(c->r[1]+0x00000054u); // 801CF990
  c->lr=c->r[0]; // 801CF994
  c->r[1]=c->r[1]+0x00000050u; // 801CF998
  return; // 801CF99C
}

// bta_dm_discover_next_device
void f_801CF9A0(Ctx* __restrict c) {
  trace_call(0x801CF9A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CF9A0
  c->r[0]=c->lr; // 801CF9A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CF9A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CF9AC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CF9B0
  c->r[30]=0u+0x80480000u; // 801CF9B4
  c->r[30]=c->r[30]+0x000030F8u; // 801CF9B8
  c->r[3]=R32(c->r[30]+0x00000004u); // 801CF9BC
  c->lr=0x801CF9C4u; f_801D89A4(c); // 801CF9C0
  cmps(c,0,(int32_t)c->r[3],0); // 801CF9C4
  W32(c->r[30]+0x00000004u,c->r[3]); // 801CF9C8
  if (crb(c,2)) { goto L_801CFA44; } // 801CF9CC
  c->r[3]=c->r[3]+0x00000002u; // 801CF9D0
  c->lr=0x801CF9D8u; f_801D4D64(c); // 801CF9D4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801CF9D8
  if (crb(c,2)) { goto L_801CF9EC; } // 801CF9DC
  c->r[0]=0u+0x00000000u; // 801CF9E0
  W8(c->r[30]+0x00000078u,c->r[0]); // 801CF9E4
  goto L_801CF9F4; // 801CF9E8
L_801CF9EC:;
  c->r[0]=0u+0x00000001u; // 801CF9EC
  W8(c->r[30]+0x00000078u,c->r[0]); // 801CF9F0
L_801CF9F4:;
  c->r[31]=0u+0x80480000u; // 801CF9F4
  c->r[3]=0u+0x801D0000u; // 801CF9F8
  c->r[31]=c->r[31]+0x000030F8u; // 801CF9FC
  c->r[30]=0u+0x00000000u; // 801CFA00
  W8(c->r[31]+0x00000079u,c->r[30]); // 801CFA04
  c->r[3]=c->r[3]+0xFFFFFBA4u; // 801CFA08
  c->lr=0x801CFA10u; f_801DB434(c); // 801CFA0C
  c->r[0]=R32(c->r[31]+0x00000008u); // 801CFA10
  c->r[3]=c->r[31]+0x0000001Au; // 801CFA14
  c->r[4]=R32(c->r[31]+0x00000004u); // 801CFA18
  W8(c->r[31]+0x00000070u,c->r[30]); // 801CFA1C
  c->r[4]=c->r[4]+0x00000002u; // 801CFA20
  W32(c->r[31]+0x00000010u,c->r[30]); // 801CFA24
  W8(c->r[31]+0x00000020u,c->r[30]); // 801CFA28
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801CFA2C
  c->lr=0x801CFA34u; f_801CE064(c); // 801CFA30
  c->r[3]=R32(c->r[31]+0x00000004u); // 801CFA34
  c->r[3]=c->r[3]+0x00000002u; // 801CFA38
  c->lr=0x801CFA40u; f_801CF800(c); // 801CFA3C
  goto L_801CFA68; // 801CFA40
L_801CFA44:;
  c->r[0]=0u+0x00000000u; // 801CFA44
  c->r[3]=0u+0x00000110u; // 801CFA48
  W32(c->r[30]+0x00000008u,c->r[0]); // 801CFA4C
  c->lr=0x801CFA54u; f_801CAC80(c); // 801CFA50
  cmps(c,0,(int32_t)c->r[3],0); // 801CFA54
  if (crb(c,2)) { goto L_801CFA68; } // 801CFA58
  c->r[0]=0u+0x00000207u; // 801CFA5C
  W16(c->r[3]+0x00000000u,c->r[0]); // 801CFA60
  c->lr=0x801CFA68u; f_801CE510(c); // 801CFA64
L_801CFA68:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CFA68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CFA6C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CFA70
  c->lr=c->r[0]; // 801CFA74
  c->r[1]=c->r[1]+0x00000010u; // 801CFA78
  return; // 801CFA7C
}

// bta_dm_sdp_callback
void f_801CFA80(Ctx* __restrict c) {
  trace_call(0x801CFA80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFA80
  c->r[0]=c->lr; // 801CFA84
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CFA88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CFA8C
  c->r[31]=c->r[3]|c->r[3]; // 801CFA90
  c->r[3]=0u+0x0000000Au; // 801CFA94
  c->lr=0x801CFA9Cu; f_801CAC80(c); // 801CFA98
  cmps(c,0,(int32_t)c->r[3],0); // 801CFA9C
  if (crb(c,2)) { goto L_801CFAB4; } // 801CFAA0
  c->r[0]=0u+0x00000206u; // 801CFAA4
  W16(c->r[3]+0x00000000u,c->r[0]); // 801CFAA8
  W16(c->r[3]+0x00000008u,c->r[31]); // 801CFAAC
  c->lr=0x801CFAB4u; f_801CE510(c); // 801CFAB0
L_801CFAB4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CFAB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CFAB8
  c->lr=c->r[0]; // 801CFABC
  c->r[1]=c->r[1]+0x00000010u; // 801CFAC0
  return; // 801CFAC4
}

// bta_dm_inq_results_cb
void f_801CFAC8(Ctx* __restrict c) {
  trace_call(0x801CFAC8u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFAC8
  c->r[0]=c->lr; // 801CFACC
  W32(c->r[1]+0x00000124u,c->r[0]); // 801CFAD0
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 801CFAD4
  c->r[31]=c->r[3]|c->r[3]; // 801CFAD8
  c->r[3]=c->r[1]+0x00000008u; // 801CFADC
  c->r[4]=c->r[31]+0x00000002u; // 801CFAE0
  c->lr=0x801CFAE8u; f_801CE064(c); // 801CFAE4
  c->r[3]=c->r[1]+0x0000000Eu; // 801CFAE8
  c->r[4]=c->r[31]+0x00000008u; // 801CFAEC
  c->r[5]=0u+0x00000003u; // 801CFAF0
  c->lr=0x801CFAF8u; f_80004000(c); // 801CFAF4
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 801CFAF8
  c->r[3]=c->r[31]+0x00000002u; // 801CFAFC
  W8(c->r[1]+0x00000011u,c->r[0]); // 801CFB00
  c->lr=0x801CFB08u; f_801D882C(c); // 801CFB04
  cmps(c,0,(int32_t)c->r[3],0); // 801CFB08
  c->r[31]=c->r[3]|c->r[3]; // 801CFB0C
  if (crb(c,2)) { goto L_801CFB1C; } // 801CFB10
  c->r[0]=0u+0x00000000u; // 801CFB14
  W8(c->r[1]+0x00000012u,c->r[0]); // 801CFB18
L_801CFB1C:;
  c->r[3]=0u+0x80480000u; // 801CFB1C
  c->r[4]=c->r[1]+0x00000008u; // 801CFB20
  c->r[12]=R32(c->r[3]+0x000030F8u); // 801CFB24
  c->r[3]=0u+0x00000000u; // 801CFB28
  c->ctr=c->r[12]; // 801CFB2C
  if (true) { c->lr=0x801CFB34u; dispatch(c,c->ctr); } // 801CFB30
  cmps(c,0,(int32_t)c->r[31],0); // 801CFB34
  if (crb(c,2)) { goto L_801CFB44; } // 801CFB38
  c->r[0]=R8(c->r[1]+0x00000012u); // 801CFB3C
  W8(c->r[31]+0x00000010u,c->r[0]); // 801CFB40
L_801CFB44:;
  c->r[0]=R32(c->r[1]+0x00000124u); // 801CFB44
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 801CFB48
  c->lr=c->r[0]; // 801CFB4C
  c->r[1]=c->r[1]+0x00000120u; // 801CFB50
  return; // 801CFB54
}

// bta_dm_inq_cmpl_cb
void f_801CFB58(Ctx* __restrict c) {
  trace_call(0x801CFB58u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFB58
  c->r[0]=c->lr; // 801CFB5C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CFB60
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CFB64
  c->r[31]=c->r[3]|c->r[3]; // 801CFB68
  c->r[3]=0u+0x00000110u; // 801CFB6C
  c->lr=0x801CFB74u; f_801CAC80(c); // 801CFB70
  cmps(c,0,(int32_t)c->r[3],0); // 801CFB74
  if (crb(c,2)) { goto L_801CFB90; } // 801CFB78
  c->r[0]=0u+0x00000203u; // 801CFB7C
  W16(c->r[3]+0x00000000u,c->r[0]); // 801CFB80
  c->r[0]=R8(c->r[31]+0x00000001u); // 801CFB84
  W8(c->r[3]+0x00000008u,c->r[0]); // 801CFB88
  c->lr=0x801CFB90u; f_801CE510(c); // 801CFB8C
L_801CFB90:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CFB90
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CFB94
  c->lr=c->r[0]; // 801CFB98
  c->r[1]=c->r[1]+0x00000010u; // 801CFB9C
  return; // 801CFBA0
}

// bta_dm_service_search_remname_cback
void f_801CFBA4(Ctx* __restrict c) {
  trace_call(0x801CFBA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFBA4
  c->r[0]=c->lr; // 801CFBA8
  c->r[3]=0u+0x80480000u; // 801CFBAC
  c->r[4]=c->r[5]|c->r[5]; // 801CFBB0
  c->r[3]=c->r[3]+0x000030F8u; // 801CFBB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CFBB8
  c->r[5]=0u+0x0000001Fu; // 801CFBBC
  c->r[3]=c->r[3]+0x00000020u; // 801CFBC0
  c->lr=0x801CFBC8u; f_800CA310(c); // 801CFBC4
  c->r[3]=0u+0x801D0000u; // 801CFBC8
  c->r[3]=c->r[3]+0xFFFFFBA4u; // 801CFBCC
  c->lr=0x801CFBD4u; f_801DB484(c); // 801CFBD0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CFBD4
  c->lr=c->r[0]; // 801CFBD8
  c->r[1]=c->r[1]+0x00000010u; // 801CFBDC
  return; // 801CFBE0
}

// bta_dm_remname_cback
void f_801CFBE4(Ctx* __restrict c) {
  trace_call(0x801CFBE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFBE4
  c->r[0]=c->lr; // 801CFBE8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CFBEC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CFBF0
  c->r[31]=0u+0x80480000u; // 801CFBF4
  c->r[31]=c->r[31]+0x000030F8u; // 801CFBF8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CFBFC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CFC00
  c->r[29]=c->r[3]|c->r[3]; // 801CFC04
  c->r[3]=c->r[31]+0x00000058u; // 801CFC08
  c->lr=0x801CFC10u; f_801CE54C(c); // 801CFC0C
  c->r[3]=0u+0x00000110u; // 801CFC10
  c->lr=0x801CFC18u; f_801CAC80(c); // 801CFC14
  cmps(c,0,(int32_t)c->r[3],0); // 801CFC18
  c->r[30]=c->r[3]|c->r[3]; // 801CFC1C
  if (crb(c,2)) { goto L_801CFC54; } // 801CFC20
  c->r[4]=R32(c->r[31]+0x00000004u); // 801CFC24
  c->r[3]=c->r[3]+0x00000008u; // 801CFC28
  c->r[4]=c->r[4]+0x00000002u; // 801CFC2C
  c->lr=0x801CFC34u; f_801CE064(c); // 801CFC30
  c->r[3]=c->r[30]+0x0000000Eu; // 801CFC34
  c->r[4]=c->r[29]+0x00000004u; // 801CFC38
  c->r[5]=0u+0x00000020u; // 801CFC3C
  c->lr=0x801CFC44u; f_800CA310(c); // 801CFC40
  c->r[0]=0u+0x00000204u; // 801CFC44
  c->r[3]=c->r[30]|c->r[30]; // 801CFC48
  W16(c->r[30]+0x00000000u,c->r[0]); // 801CFC4C
  c->lr=0x801CFC54u; f_801CE510(c); // 801CFC50
L_801CFC54:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CFC54
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CFC58
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CFC5C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CFC60
  c->lr=c->r[0]; // 801CFC64
  c->r[1]=c->r[1]+0x00000020u; // 801CFC68
  return; // 801CFC6C
}

// bta_dm_disc_remname_cback
void f_801CFC70(Ctx* __restrict c) {
  trace_call(0x801CFC70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFC70
  c->r[0]=c->lr; // 801CFC74
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CFC78
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CFC7C
  c->r[31]=0u+0x80480000u; // 801CFC80
  c->r[31]=c->r[31]+0x000030F8u; // 801CFC84
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CFC88
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CFC8C
  c->r[29]=c->r[3]|c->r[3]; // 801CFC90
  c->r[3]=c->r[31]+0x00000058u; // 801CFC94
  c->lr=0x801CFC9Cu; f_801CE54C(c); // 801CFC98
  c->r[3]=0u+0x00000110u; // 801CFC9C
  c->lr=0x801CFCA4u; f_801CAC80(c); // 801CFCA0
  cmps(c,0,(int32_t)c->r[3],0); // 801CFCA4
  c->r[30]=c->r[3]|c->r[3]; // 801CFCA8
  if (crb(c,2)) { goto L_801CFCDC; } // 801CFCAC
  c->r[3]=c->r[3]+0x00000008u; // 801CFCB0
  c->r[4]=c->r[31]+0x0000001Au; // 801CFCB4
  c->lr=0x801CFCBCu; f_801CE064(c); // 801CFCB8
  c->r[3]=c->r[30]+0x0000000Eu; // 801CFCBC
  c->r[4]=c->r[29]+0x00000004u; // 801CFCC0
  c->r[5]=0u+0x00000020u; // 801CFCC4
  c->lr=0x801CFCCCu; f_800CA310(c); // 801CFCC8
  c->r[0]=0u+0x00000204u; // 801CFCCC
  c->r[3]=c->r[30]|c->r[30]; // 801CFCD0
  W16(c->r[30]+0x00000000u,c->r[0]); // 801CFCD4
  c->lr=0x801CFCDCu; f_801CE510(c); // 801CFCD8
L_801CFCDC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CFCDC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CFCE0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CFCE4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CFCE8
  c->lr=c->r[0]; // 801CFCEC
  c->r[1]=c->r[1]+0x00000020u; // 801CFCF0
  return; // 801CFCF4
}

// bta_dm_cancel_rmt_name
void f_801CFCF8(Ctx* __restrict c) {
  trace_call(0x801CFCF8u);
  f_801D87B4(c); return; // 801CFCF8
}

// bta_dm_authorize_cback
void f_801CFCFC(Ctx* __restrict c) {
  trace_call(0x801CFCFCu);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFCFC
  c->r[0]=c->lr; // 801CFD00
  c->r[4]=c->r[3]|c->r[3]; // 801CFD04
  W32(c->r[1]+0x00000134u,c->r[0]); // 801CFD08
  c->r[3]=c->r[1]+0x00000008u; // 801CFD0C
  W32(c->r[1]+0x0000012Cu,c->r[31]); // 801CFD10
  c->r[31]=0u+0x00000001u; // 801CFD14
  W32(c->r[1]+0x00000128u,c->r[30]); // 801CFD18
  c->r[30]=c->r[7]|c->r[7]; // 801CFD1C
  W32(c->r[1]+0x00000124u,c->r[29]); // 801CFD20
  c->r[29]=c->r[5]|c->r[5]; // 801CFD24
  c->lr=0x801CFD2Cu; f_801CE064(c); // 801CFD28
  c->r[4]=c->r[29]|c->r[29]; // 801CFD2C
  c->r[3]=c->r[1]+0x0000000Eu; // 801CFD30
  c->r[5]=0u+0x00000020u; // 801CFD34
  c->lr=0x801CFD3Cu; f_800CA310(c); // 801CFD38
  c->r[3]=0u+0x80380000u; // 801CFD3C
  c->r[0]=0u+0x00000017u; // 801CFD40
  c->r[3]=c->r[3]+0xFFFFF038u; // 801CFD44
  c->ctr=c->r[0]; // 801CFD48
L_801CFD4C:;
  c->r[0]=rotl(c->r[31],2)&0x000003FCu; // 801CFD4C
  c->r[0]=R32(c->r[3]+c->r[0]); // 801CFD50
  cmpu(c,0,c->r[30],c->r[0]); // 801CFD54
  if (!crb(c,2)) { goto L_801CFD64; } // 801CFD58
  W8(c->r[1]+0x00000106u,c->r[31]); // 801CFD5C
  goto L_801CFD6C; // 801CFD60
L_801CFD64:;
  c->r[31]=c->r[31]+0x00000001u; // 801CFD64
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CFD4C; } // 801CFD68
L_801CFD6C:;
  c->r[3]=0u+0x80480000u; // 801CFD6C
  c->r[3]=c->r[3]+0x00003174u; // 801CFD70
  c->r[12]=R32(c->r[3]+0x00000050u); // 801CFD74
  cmps(c,0,(int32_t)c->r[12],0); // 801CFD78
  if (crb(c,2)) { goto L_801CFDA4; } // 801CFD7C
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801CFD80
  cmpu(c,0,c->r[0],0x00000017u); // 801CFD84
  if (crb(c,1)) { goto L_801CFDA4; } // 801CFD88
  c->r[4]=c->r[1]+0x00000008u; // 801CFD8C
  c->r[3]=0u+0x00000004u; // 801CFD90
  c->ctr=c->r[12]; // 801CFD94
  if (true) { c->lr=0x801CFD9Cu; dispatch(c,c->ctr); } // 801CFD98
  c->r[3]=0u+0x00000001u; // 801CFD9C
  goto L_801CFDA8; // 801CFDA0
L_801CFDA4:;
  c->r[3]=0u+0x0000000Bu; // 801CFDA4
L_801CFDA8:;
  c->r[0]=R32(c->r[1]+0x00000134u); // 801CFDA8
  c->r[31]=R32(c->r[1]+0x0000012Cu); // 801CFDAC
  c->r[30]=R32(c->r[1]+0x00000128u); // 801CFDB0
  c->r[29]=R32(c->r[1]+0x00000124u); // 801CFDB4
  c->lr=c->r[0]; // 801CFDB8
  c->r[1]=c->r[1]+0x00000130u; // 801CFDBC
  return; // 801CFDC0
}

// bta_dm_pinname_cback
void f_801CFDC4(Ctx* __restrict c) {
  trace_call(0x801CFDC4u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFDC4
  c->r[0]=c->lr; // 801CFDC8
  W32(c->r[1]+0x00000124u,c->r[0]); // 801CFDCC
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 801CFDD0
  c->r[31]=0u+0x80480000u; // 801CFDD4
  c->r[31]=c->r[31]+0x00003174u; // 801CFDD8
  W32(c->r[1]+0x00000118u,c->r[30]); // 801CFDDC
  c->r[30]=c->r[3]|c->r[3]; // 801CFDE0
  c->r[3]=c->r[1]+0x00000008u; // 801CFDE4
  c->r[4]=c->r[31]+0x000000F8u; // 801CFDE8
  c->lr=0x801CFDF0u; f_801CE064(c); // 801CFDEC
  c->r[4]=R8(c->r[31]+0x000000FEu); // 801CFDF0
  cmps(c,0,(int32_t)c->r[30],0); // 801CFDF4
  c->r[3]=R8(c->r[31]+0x000000FFu); // 801CFDF8
  c->r[0]=R8(c->r[31]+0x00000100u); // 801CFDFC
  W8(c->r[1]+0x00000106u,c->r[4]); // 801CFE00
  W8(c->r[1]+0x00000107u,c->r[3]); // 801CFE04
  W8(c->r[1]+0x00000108u,c->r[0]); // 801CFE08
  if (crb(c,2)) { goto L_801CFE48; } // 801CFE0C
  c->r[0]=R16(c->r[30]+0x00000000u); // 801CFE10
  cmps(c,0,(int32_t)c->r[0],0); // 801CFE14
  if (!crb(c,2)) { goto L_801CFE48; } // 801CFE18
  c->r[0]=R16(c->r[30]+0x00000002u); // 801CFE1C
  c->r[3]=c->r[1]+0x0000000Eu; // 801CFE20
  c->r[4]=c->r[30]+0x00000004u; // 801CFE24
  c->r[5]=0u+0x00000020u; // 801CFE28
  cmpu(c,0,c->r[0],0x00000020u); // 801CFE2C
  if (!crb(c,0)) { goto L_801CFE38; } // 801CFE30
  c->r[5]=c->r[0]|c->r[0]; // 801CFE34
L_801CFE38:;
  c->lr=0x801CFE3Cu; f_80004000(c); // 801CFE38
  c->r[0]=0u+0x00000000u; // 801CFE3C
  W8(c->r[1]+0x0000002Eu,c->r[0]); // 801CFE40
  goto L_801CFE50; // 801CFE44
L_801CFE48:;
  c->r[0]=0u+0x00000000u; // 801CFE48
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801CFE4C
L_801CFE50:;
  c->r[5]=0u+0x80480000u; // 801CFE50
  c->r[4]=c->r[1]+0x00000008u; // 801CFE54
  c->r[5]=c->r[5]+0x00003174u; // 801CFE58
  c->r[3]=0u+0x00000002u; // 801CFE5C
  c->r[12]=R32(c->r[5]+0x00000050u); // 801CFE60
  c->ctr=c->r[12]; // 801CFE64
  if (true) { c->lr=0x801CFE6Cu; dispatch(c,c->ctr); } // 801CFE68
  c->r[0]=R32(c->r[1]+0x00000124u); // 801CFE6C
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 801CFE70
  c->r[30]=R32(c->r[1]+0x00000118u); // 801CFE74
  c->lr=c->r[0]; // 801CFE78
  c->r[1]=c->r[1]+0x00000120u; // 801CFE7C
  return; // 801CFE80
}

// bta_dm_pin_cback
void f_801CFE84(Ctx* __restrict c) {
  trace_call(0x801CFE84u);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFE84
  c->r[0]=c->lr; // 801CFE88
  W32(c->r[1]+0x00000134u,c->r[0]); // 801CFE8C
  W32(c->r[1]+0x0000012Cu,c->r[31]); // 801CFE90
  c->r[31]=0u+0x80480000u; // 801CFE94
  c->r[31]=c->r[31]+0x00003174u; // 801CFE98
  W32(c->r[1]+0x00000128u,c->r[30]); // 801CFE9C
  c->r[30]=c->r[5]|c->r[5]; // 801CFEA0
  W32(c->r[1]+0x00000124u,c->r[29]); // 801CFEA4
  c->r[29]=c->r[4]|c->r[4]; // 801CFEA8
  W32(c->r[1]+0x00000120u,c->r[28]); // 801CFEAC
  c->r[28]=c->r[3]|c->r[3]; // 801CFEB0
  c->r[0]=R32(c->r[31]+0x00000050u); // 801CFEB4
  cmps(c,0,(int32_t)c->r[0],0); // 801CFEB8
  if (!crb(c,2)) { goto L_801CFEC8; } // 801CFEBC
  c->r[3]=0u+0x0000000Bu; // 801CFEC0
  goto L_801CFF94; // 801CFEC4
L_801CFEC8:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 801CFEC8
  cmps(c,0,(int32_t)c->r[0],0); // 801CFECC
  if (!crb(c,2)) { goto L_801CFF38; } // 801CFED0
  c->r[4]=c->r[28]|c->r[28]; // 801CFED4
  c->r[3]=c->r[31]+0x000000F8u; // 801CFED8
  c->lr=0x801CFEE0u; f_801CE064(c); // 801CFEDC
  c->r[0]=R8(c->r[29]+0x00000000u); // 801CFEE0
  c->r[4]=0u+0x801D0000u; // 801CFEE4
  c->r[3]=c->r[28]|c->r[28]; // 801CFEE8
  W8(c->r[31]+0x000000FEu,c->r[0]); // 801CFEEC
  c->r[4]=c->r[4]+0xFFFFFDC4u; // 801CFEF0
  c->r[0]=R8(c->r[29]+0x00000001u); // 801CFEF4
  W8(c->r[31]+0x000000FFu,c->r[0]); // 801CFEF8
  c->r[0]=R8(c->r[29]+0x00000002u); // 801CFEFC
  W8(c->r[31]+0x00000100u,c->r[0]); // 801CFF00
  c->lr=0x801CFF08u; f_801D86CC(c); // 801CFF04
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801CFF08
  cmpu(c,0,c->r[0],0x00000001u); // 801CFF0C
  if (!crb(c,2)) { goto L_801CFF1C; } // 801CFF10
  c->r[3]=0u+0x00000001u; // 801CFF14
  goto L_801CFF94; // 801CFF18
L_801CFF1C:;
  c->r[0]=R8(c->r[13]+0xFFFF9AF8u); // 801CFF1C
  cmpu(c,0,c->r[0],0x00000002u); // 801CFF20
  if (crb(c,0)) { goto L_801CFF38; } // 801CFF24
  c->r[4]=0u+0x803A0000u; // 801CFF28
  c->r[3]=0u+0x00000501u; // 801CFF2C
  c->r[4]=c->r[4]+0xFFFFE3D8u; // 801CFF30
  c->lr=0x801CFF38u; f_801CD9D0(c); // 801CFF34
L_801CFF38:;
  c->r[4]=c->r[28]|c->r[28]; // 801CFF38
  c->r[3]=c->r[1]+0x00000008u; // 801CFF3C
  c->lr=0x801CFF44u; f_801CE064(c); // 801CFF40
  c->r[0]=R8(c->r[29]+0x00000000u); // 801CFF44
  c->r[4]=c->r[30]|c->r[30]; // 801CFF48
  c->r[3]=c->r[1]+0x0000000Eu; // 801CFF4C
  c->r[5]=0u+0x00000020u; // 801CFF50
  W8(c->r[1]+0x00000106u,c->r[0]); // 801CFF54
  c->r[0]=R8(c->r[29]+0x00000001u); // 801CFF58
  W8(c->r[1]+0x00000107u,c->r[0]); // 801CFF5C
  c->r[0]=R8(c->r[29]+0x00000002u); // 801CFF60
  W8(c->r[1]+0x00000108u,c->r[0]); // 801CFF64
  c->lr=0x801CFF6Cu; f_800CA310(c); // 801CFF68
  c->r[3]=0u+0x80480000u; // 801CFF6C
  c->r[0]=0u+0x00000000u; // 801CFF70
  c->r[3]=c->r[3]+0x00003174u; // 801CFF74
  W8(c->r[1]+0x0000002Eu,c->r[0]); // 801CFF78
  c->r[12]=R32(c->r[3]+0x00000050u); // 801CFF7C
  c->r[4]=c->r[1]+0x00000008u; // 801CFF80
  c->r[3]=0u+0x00000002u; // 801CFF84
  c->ctr=c->r[12]; // 801CFF88
  if (true) { c->lr=0x801CFF90u; dispatch(c,c->ctr); } // 801CFF8C
  c->r[3]=0u+0x00000001u; // 801CFF90
L_801CFF94:;
  c->r[0]=R32(c->r[1]+0x00000134u); // 801CFF94
  c->r[31]=R32(c->r[1]+0x0000012Cu); // 801CFF98
  c->r[30]=R32(c->r[1]+0x00000128u); // 801CFF9C
  c->r[29]=R32(c->r[1]+0x00000124u); // 801CFFA0
  c->r[28]=R32(c->r[1]+0x00000120u); // 801CFFA4
  c->lr=c->r[0]; // 801CFFA8
  c->r[1]=c->r[1]+0x00000130u; // 801CFFAC
  return; // 801CFFB0
}

// bta_dm_link_key_request_cback
void f_801CFFB4(Ctx* __restrict c) {
  trace_call(0x801CFFB4u);
  c->r[3]=0u+0x0000000Bu; // 801CFFB4
  return; // 801CFFB8
}

// bta_dm_new_link_key_cback
void f_801CFFBC(Ctx* __restrict c) {
  trace_call(0x801CFFBCu);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CFFBC
  c->r[0]=c->lr; // 801CFFC0
  c->r[4]=c->r[3]|c->r[3]; // 801CFFC4
  W32(c->r[1]+0x00000124u,c->r[0]); // 801CFFC8
  c->r[3]=c->r[1]+0x00000008u; // 801CFFCC
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 801CFFD0
  c->r[31]=c->r[6]|c->r[6]; // 801CFFD4
  W32(c->r[1]+0x00000118u,c->r[30]); // 801CFFD8
  c->r[30]=c->r[5]|c->r[5]; // 801CFFDC
  c->lr=0x801CFFE4u; f_801CE064(c); // 801CFFE0
  c->r[4]=c->r[30]|c->r[30]; // 801CFFE4
  c->r[3]=c->r[1]+0x0000000Eu; // 801CFFE8
  c->r[5]=0u+0x0000001Fu; // 801CFFEC
  c->lr=0x801CFFF4u; f_80004000(c); // 801CFFF0
  c->r[0]=0u+0x00000000u; // 801CFFF4
  c->r[4]=c->r[31]|c->r[31]; // 801CFFF8
  W8(c->r[1]+0x0000002Du,c->r[0]); // 801CFFFC
  c->r[3]=c->r[1]+0x00000107u; // 801D0000
  c->r[5]=0u+0x00000010u; // 801D0004
  c->lr=0x801D000Cu; f_80004000(c); // 801D0008
  c->r[3]=0u+0x80480000u; // 801D000C
  c->r[0]=0u+0x00000001u; // 801D0010
  c->r[3]=c->r[3]+0x00003174u; // 801D0014
  W8(c->r[1]+0x00000106u,c->r[0]); // 801D0018
  c->r[12]=R32(c->r[3]+0x00000050u); // 801D001C
  W8(c->r[1]+0x00000117u,c->r[0]); // 801D0020
  cmps(c,0,(int32_t)c->r[12],0); // 801D0024
  if (crb(c,2)) { goto L_801D003C; } // 801D0028
  c->r[4]=c->r[1]+0x00000008u; // 801D002C
  c->r[3]=0u+0x00000003u; // 801D0030
  c->ctr=c->r[12]; // 801D0034
  if (true) { c->lr=0x801D003Cu; dispatch(c,c->ctr); } // 801D0038
L_801D003C:;
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 801D003C
  c->r[3]=0u+0x00000001u; // 801D0040
  c->r[30]=R32(c->r[1]+0x00000118u); // 801D0044
  c->r[0]=R32(c->r[1]+0x00000124u); // 801D0048
  c->lr=c->r[0]; // 801D004C
  c->r[1]=c->r[1]+0x00000120u; // 801D0050
  return; // 801D0054
}

// bta_dm_authentication_complete_cback
void f_801D0058(Ctx* __restrict c) {
  trace_call(0x801D0058u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0058
  c->r[0]=c->lr; // 801D005C
  cmps(c,0,(int32_t)c->r[6],0); // 801D0060
  W32(c->r[1]+0x00000124u,c->r[0]); // 801D0064
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 801D0068
  c->r[31]=c->r[5]|c->r[5]; // 801D006C
  if (crb(c,2)) { goto L_801D00C4; } // 801D0070
  c->r[4]=c->r[3]|c->r[3]; // 801D0074
  c->r[3]=c->r[1]+0x00000008u; // 801D0078
  c->lr=0x801D0080u; f_801CE064(c); // 801D007C
  c->r[4]=c->r[31]|c->r[31]; // 801D0080
  c->r[3]=c->r[1]+0x0000000Eu; // 801D0084
  c->r[5]=0u+0x0000001Fu; // 801D0088
  c->lr=0x801D0090u; f_80004000(c); // 801D008C
  c->r[3]=0u+0x80480000u; // 801D0090
  c->r[0]=0u+0x00000000u; // 801D0094
  c->r[3]=c->r[3]+0x00003174u; // 801D0098
  W8(c->r[1]+0x0000002Du,c->r[0]); // 801D009C
  c->r[12]=R32(c->r[3]+0x00000050u); // 801D00A0
  W8(c->r[1]+0x00000117u,c->r[0]); // 801D00A4
  cmps(c,0,(int32_t)c->r[12],0); // 801D00A8
  W8(c->r[1]+0x00000106u,c->r[0]); // 801D00AC
  if (crb(c,2)) { goto L_801D00C4; } // 801D00B0
  c->r[4]=c->r[1]+0x00000008u; // 801D00B4
  c->r[3]=0u+0x00000003u; // 801D00B8
  c->ctr=c->r[12]; // 801D00BC
  if (true) { c->lr=0x801D00C4u; dispatch(c,c->ctr); } // 801D00C0
L_801D00C4:;
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 801D00C4
  c->r[3]=0u+0x00000000u; // 801D00C8
  c->r[0]=R32(c->r[1]+0x00000124u); // 801D00CC
  c->lr=c->r[0]; // 801D00D0
  c->r[1]=c->r[1]+0x00000120u; // 801D00D4
  return; // 801D00D8
}

// fn_801D00DC
void f_801D00DC(Ctx* __restrict c) {
  trace_call(0x801D00DCu);
  c->r[4]=0u+0x80480000u; // 801D00DC
  c->r[4]=c->r[4]+0x00003174u; // 801D00E0
  c->r[12]=R32(c->r[4]+0x00000050u); // 801D00E4
  cmps(c,0,(int32_t)c->r[12],0); // 801D00E8
  if (crb(c,2)) return; // 801D00EC
  c->r[4]=c->r[3]|c->r[3]; // 801D00F0
  c->r[3]=0u+0x00000000u; // 801D00F4
  c->ctr=c->r[12]; // 801D00F8
  if (true) { dispatch(c,c->ctr); return; } // 801D00FC
}

// fn_801D0100
void f_801D0100(Ctx* __restrict c) {
  trace_call(0x801D0100u);
  return; // 801D0100
}

// bta_dm_signal_strength
void f_801D0104(Ctx* __restrict c) {
  trace_call(0x801D0104u);
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801D0104
  cmps(c,0,(int32_t)c->r[0],0); // 801D0108
  if (crb(c,2)) { goto L_801D0130; } // 801D010C
  c->r[4]=0u+0x80480000u; // 801D0110
  c->r[0]=R8(c->r[3]+0x00000008u); // 801D0114
  c->r[4]=c->r[4]+0x00003174u; // 801D0118
  W8(c->r[4]+0x0000006Cu,c->r[0]); // 801D011C
  c->r[0]=R16(c->r[3]+0x0000000Au); // 801D0120
  c->r[3]=0u+0x00000000u; // 801D0124
  W16(c->r[4]+0x00000070u,c->r[0]); // 801D0128
  f_801D0140(c); return; // 801D012C
L_801D0130:;
  c->r[3]=0u+0x80480000u; // 801D0130
  c->r[3]=c->r[3]+0x00003174u; // 801D0134
  c->r[3]=c->r[3]+0x00000054u; // 801D0138
  f_801CE54C(c); return; // 801D013C
}

// bta_dm_signal_strength_timer_cback
void f_801D0140(Ctx* __restrict c) {
  trace_call(0x801D0140u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0140
  c->r[0]=c->lr; // 801D0144
  c->r[3]=0u+0x80480000u; // 801D0148
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D014C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D0150
  c->r[31]=c->r[3]+0x00003174u; // 801D0154
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D0158
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D015C
  c->r[0]=R8(c->r[31]+0x0000006Cu); // 801D0160
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801D0164
  if (crb(c,2)) { goto L_801D01A0; } // 801D0168
  c->r[29]=0u+0x00000000u; // 801D016C
  c->r[30]=0u+0x801D0000u; // 801D0170
  goto L_801D0190; // 801D0174
L_801D0178:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 801D0178
  c->r[4]=c->r[30]+0x00000540u; // 801D017C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 801D0180
  c->r[3]=c->r[31]+c->r[0]; // 801D0184
  c->lr=0x801D018Cu; f_801D54EC(c); // 801D0188
  c->r[29]=c->r[29]+0x00000001u; // 801D018C
L_801D0190:;
  c->r[0]=R8(c->r[31]+0x0000004Du); // 801D0190
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 801D0194
  cmpu(c,0,c->r[3],c->r[0]); // 801D0198
  if (crb(c,0)) { IRQCHK(c); goto L_801D0178; } // 801D019C
L_801D01A0:;
  c->r[3]=0u+0x80480000u; // 801D01A0
  c->r[30]=c->r[3]+0x00003174u; // 801D01A4
  c->r[0]=R8(c->r[30]+0x0000006Cu); // 801D01A8
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801D01AC
  if (crb(c,2)) { goto L_801D01E8; } // 801D01B0
  c->r[29]=0u+0x00000000u; // 801D01B4
  c->r[31]=0u+0x801D0000u; // 801D01B8
  goto L_801D01D8; // 801D01BC
L_801D01C0:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 801D01C0
  c->r[4]=c->r[31]+0x000005ACu; // 801D01C4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 801D01C8
  c->r[3]=c->r[30]+c->r[0]; // 801D01CC
  c->lr=0x801D01D4u; f_801D5628(c); // 801D01D0
  c->r[29]=c->r[29]+0x00000001u; // 801D01D4
L_801D01D8:;
  c->r[0]=R8(c->r[30]+0x0000004Du); // 801D01D8
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 801D01DC
  cmpu(c,0,c->r[3],c->r[0]); // 801D01E0
  if (crb(c,0)) { IRQCHK(c); goto L_801D01C0; } // 801D01E4
L_801D01E8:;
  c->r[7]=0u+0x80480000u; // 801D01E8
  c->r[7]=c->r[7]+0x00003174u; // 801D01EC
  c->r[0]=R16(c->r[7]+0x00000070u); // 801D01F0
  cmps(c,0,(int32_t)c->r[0],0); // 801D01F4
  if (crb(c,2)) { goto L_801D0218; } // 801D01F8
  c->r[6]=0u+0x801D0000u; // 801D01FC
  c->r[3]=c->r[7]+0x00000054u; // 801D0200
  c->r[6]=c->r[6]+0x00000140u; // 801D0204
  c->r[4]=0u+0x00000000u; // 801D0208
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)1000); // 801D020C
  W32(c->r[7]+0x0000005Cu,c->r[6]); // 801D0210
  c->lr=0x801D0218u; f_801CE52C(c); // 801D0214
L_801D0218:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D0218
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D021C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D0220
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D0224
  c->lr=c->r[0]; // 801D0228
  c->r[1]=c->r[1]+0x00000020u; // 801D022C
  return; // 801D0230
}

// bta_dm_acl_change_cback
void f_801D0234(Ctx* __restrict c) {
  trace_call(0x801D0234u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0234
  c->r[0]=c->lr; // 801D0238
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D023C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D0240
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D0244
  c->r[30]=c->r[7]|c->r[7]; // 801D0248
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D024C
  c->r[29]=c->r[3]|c->r[3]; // 801D0250
  c->r[3]=0u+0x00000012u; // 801D0254
  c->lr=0x801D025Cu; f_801CAC80(c); // 801D0258
  cmps(c,0,(int32_t)c->r[3],0); // 801D025C
  c->r[31]=c->r[3]|c->r[3]; // 801D0260
  if (crb(c,2)) { goto L_801D0288; } // 801D0264
  c->r[4]=c->r[29]|c->r[29]; // 801D0268
  c->r[3]=c->r[3]+0x0000000Bu; // 801D026C
  c->lr=0x801D0274u; f_801CE064(c); // 801D0270
  W8(c->r[31]+0x0000000Au,c->r[30]); // 801D0274
  c->r[0]=0u+0x00000105u; // 801D0278
  c->r[3]=c->r[31]|c->r[31]; // 801D027C
  W16(c->r[31]+0x00000000u,c->r[0]); // 801D0280
  c->lr=0x801D0288u; f_801CE510(c); // 801D0284
L_801D0288:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D0288
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D028C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D0290
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D0294
  c->lr=c->r[0]; // 801D0298
  c->r[1]=c->r[1]+0x00000020u; // 801D029C
  return; // 801D02A0
}

// bta_dm_acl_change
void f_801D02A4(Ctx* __restrict c) {
  trace_call(0x801D02A4u);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D02A4
  c->r[0]=c->lr; // 801D02A8
  W32(c->r[1]+0x00000134u,c->r[0]); // 801D02AC
  W32(c->r[1]+0x0000012Cu,c->r[31]); // 801D02B0
  c->r[31]=c->r[3]+0x0000000Bu; // 801D02B4
  W32(c->r[1]+0x00000128u,c->r[30]); // 801D02B8
  W32(c->r[1]+0x00000124u,c->r[29]); // 801D02BC
  c->r[0]=R8(c->r[3]+0x0000000Au); // 801D02C0
  cmps(c,0,(int32_t)c->r[0],0); // 801D02C4
  if (crb(c,2)) { goto L_801D0388; } // 801D02C8
  c->r[3]=0u+0x80480000u; // 801D02CC
  c->r[29]=0u+0x00000000u; // 801D02D0
  c->r[30]=c->r[3]+0x00003174u; // 801D02D4
  goto L_801D02FC; // 801D02D8
L_801D02DC:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 801D02DC
  c->r[4]=c->r[31]|c->r[31]; // 801D02E0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 801D02E4
  c->r[3]=c->r[30]+c->r[0]; // 801D02E8
  c->lr=0x801D02F0u; f_801CE098(c); // 801D02EC
  cmps(c,0,(int32_t)c->r[3],0); // 801D02F0
  if (crb(c,2)) { goto L_801D030C; } // 801D02F4
  c->r[29]=c->r[29]+0x00000001u; // 801D02F8
L_801D02FC:;
  c->r[0]=R8(c->r[30]+0x0000004Du); // 801D02FC
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 801D0300
  cmpu(c,0,c->r[3],c->r[0]); // 801D0304
  if (crb(c,0)) { IRQCHK(c); goto L_801D02DC; } // 801D0308
L_801D030C:;
  c->r[30]=0u+0x80480000u; // 801D030C
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 801D0310
  c->r[30]=c->r[30]+0x00003174u; // 801D0314
  c->r[3]=R8(c->r[30]+0x0000004Du); // 801D0318
  cmpu(c,0,c->r[0],c->r[3]); // 801D031C
  if (!crb(c,2)) { goto L_801D0340; } // 801D0320
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)11); // 801D0324
  c->r[4]=c->r[31]|c->r[31]; // 801D0328
  c->r[3]=c->r[30]+c->r[0]; // 801D032C
  c->lr=0x801D0334u; f_801CE064(c); // 801D0330
  c->r[3]=R8(c->r[30]+0x0000004Du); // 801D0334
  c->r[0]=c->r[3]+0x00000001u; // 801D0338
  W8(c->r[30]+0x0000004Du,c->r[0]); // 801D033C
L_801D0340:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 801D0340
  c->r[30]=0u+0x80480000u; // 801D0344
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 801D0348
  c->r[3]=0u+0x00000001u; // 801D034C
  c->r[30]=c->r[30]+0x00003174u; // 801D0350
  c->r[0]=0u+0x00000000u; // 801D0354
  c->r[5]=c->r[30]+c->r[4]; // 801D0358
  W8(c->r[5]+0x00000006u,c->r[3]); // 801D035C
  c->r[4]=c->r[31]|c->r[31]; // 801D0360
  c->r[3]=c->r[1]+0x00000008u; // 801D0364
  W8(c->r[5]+0x00000007u,c->r[0]); // 801D0368
  c->lr=0x801D0370u; f_801CE064(c); // 801D036C
  c->r[12]=R32(c->r[30]+0x00000050u); // 801D0370
  c->r[4]=c->r[1]+0x00000008u; // 801D0374
  c->r[3]=0u+0x00000005u; // 801D0378
  c->ctr=c->r[12]; // 801D037C
  if (true) { c->lr=0x801D0384u; dispatch(c,c->ctr); } // 801D0380
  goto L_801D0508; // 801D0384
L_801D0388:;
  c->r[3]=0u+0x80480000u; // 801D0388
  c->r[29]=0u+0x00000000u; // 801D038C
  c->r[30]=c->r[3]+0x00003174u; // 801D0390
  goto L_801D03FC; // 801D0394
L_801D0398:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 801D0398
  c->r[4]=c->r[31]|c->r[31]; // 801D039C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 801D03A0
  c->r[3]=c->r[30]+c->r[0]; // 801D03A4
  c->lr=0x801D03ACu; f_801CE098(c); // 801D03A8
  cmps(c,0,(int32_t)c->r[3],0); // 801D03AC
  if (!crb(c,2)) { goto L_801D03F8; } // 801D03B0
  c->r[3]=0u+0x80480000u; // 801D03B4
  c->r[30]=c->r[3]+0x00003174u; // 801D03B8
  goto L_801D03E4; // 801D03BC
L_801D03C0:;
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 801D03C0
  c->r[5]=0u+0x0000000Bu; // 801D03C4
  c->r[0]=c->r[3]+0x00000001u; // 801D03C8
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)11); // 801D03CC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 801D03D0
  c->r[3]=c->r[30]+c->r[3]; // 801D03D4
  c->r[4]=c->r[30]+c->r[0]; // 801D03D8
  c->lr=0x801D03E0u; f_80004000(c); // 801D03DC
  c->r[29]=c->r[29]+0x00000001u; // 801D03E0
L_801D03E4:;
  c->r[0]=R8(c->r[30]+0x0000004Du); // 801D03E4
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 801D03E8
  cmpu(c,0,c->r[3],c->r[0]); // 801D03EC
  if (crb(c,0)) { IRQCHK(c); goto L_801D03C0; } // 801D03F0
  goto L_801D040C; // 801D03F4
L_801D03F8:;
  c->r[29]=c->r[29]+0x00000001u; // 801D03F8
L_801D03FC:;
  c->r[0]=R8(c->r[30]+0x0000004Du); // 801D03FC
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 801D0400
  cmpu(c,0,c->r[3],c->r[0]); // 801D0404
  if (crb(c,0)) { IRQCHK(c); goto L_801D0398; } // 801D0408
L_801D040C:;
  c->r[4]=0u+0x80480000u; // 801D040C
  c->r[30]=0u+0x80480000u; // 801D0410
  c->r[4]=c->r[4]+0x00003174u; // 801D0414
  c->r[30]=c->r[30]+0x000030F8u; // 801D0418
  c->r[3]=R8(c->r[4]+0x0000004Du); // 801D041C
  c->r[0]=R8(c->r[30]+0x00000078u); // 801D0420
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801D0424
  cmps(c,0,(int32_t)c->r[0],0); // 801D0428
  W8(c->r[4]+0x0000004Du,c->r[3]); // 801D042C
  if (crb(c,2)) { goto L_801D048C; } // 801D0430
  c->r[4]=c->r[31]|c->r[31]; // 801D0434
  c->r[3]=c->r[30]+0x0000001Au; // 801D0438
  c->lr=0x801D0440u; f_801CE098(c); // 801D043C
  cmps(c,0,(int32_t)c->r[3],0); // 801D0440
  if (!crb(c,2)) { goto L_801D048C; } // 801D0444
  c->r[0]=R8(c->r[30]+0x00000079u); // 801D0448
  c->r[3]=0u+0x00000000u; // 801D044C
  W8(c->r[30]+0x00000078u,c->r[3]); // 801D0450
  cmps(c,0,(int32_t)c->r[0],0); // 801D0454
  if (crb(c,2)) { goto L_801D048C; } // 801D0458
  c->r[0]=R8(c->r[13]+0xFFFF9AF8u); // 801D045C
  cmpu(c,0,c->r[0],0x00000004u); // 801D0460
  if (crb(c,0)) { goto L_801D0478; } // 801D0464
  c->r[4]=0u+0x803A0000u; // 801D0468
  c->r[3]=0u+0x00000503u; // 801D046C
  c->r[4]=c->r[4]+0xFFFFE418u; // 801D0470
  c->lr=0x801D0478u; f_801CD9D0(c); // 801D0474
L_801D0478:;
  c->r[3]=0u+0x80480000u; // 801D0478
  c->r[3]=c->r[3]+0x000030F8u; // 801D047C
  c->r[3]=c->r[3]+0x00000040u; // 801D0480
  c->lr=0x801D0488u; f_801CE54C(c); // 801D0484
  c->lr=0x801D048Cu; f_801CF9A0(c); // 801D0488
L_801D048C:;
  c->r[30]=0u+0x80480000u; // 801D048C
  c->r[30]=c->r[30]+0x00003174u; // 801D0490
  c->r[0]=R8(c->r[30]+0x00000072u); // 801D0494
  cmps(c,0,(int32_t)c->r[0],0); // 801D0498
  if (crb(c,2)) { goto L_801D04D8; } // 801D049C
  c->lr=0x801D04A4u; f_801D4E3C(c); // 801D04A0
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801D04A4
  if (!crb(c,2)) { goto L_801D04D8; } // 801D04A8
  c->r[0]=0u+0x00000000u; // 801D04AC
  c->r[3]=c->r[30]+0x00000074u; // 801D04B0
  W8(c->r[30]+0x00000072u,c->r[0]); // 801D04B4
  c->lr=0x801D04BCu; f_801CE54C(c); // 801D04B8
  c->r[5]=0u+0x801D0000u; // 801D04BC
  c->r[3]=c->r[30]+0x00000074u; // 801D04C0
  c->r[5]=c->r[5]+0x00000524u; // 801D04C4
  c->r[4]=0u+0x00000000u; // 801D04C8
  W32(c->r[30]+0x0000007Cu,c->r[5]); // 801D04CC
  c->r[5]=0u+0x000003E8u; // 801D04D0
  c->lr=0x801D04D8u; f_801CE52C(c); // 801D04D4
L_801D04D8:;
  c->r[4]=c->r[31]|c->r[31]; // 801D04D8
  c->r[3]=c->r[1]+0x00000008u; // 801D04DC
  c->lr=0x801D04E4u; f_801CE064(c); // 801D04E0
  c->lr=0x801D04E8u; f_801D4E98(c); // 801D04E4
  c->r[5]=0u+0x80480000u; // 801D04E8
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 801D04EC
  c->r[5]=c->r[5]+0x00003174u; // 801D04F0
  c->r[4]=c->r[1]+0x00000008u; // 801D04F4
  c->r[12]=R32(c->r[5]+0x00000050u); // 801D04F8
  c->r[3]=0u+0x00000006u; // 801D04FC
  c->ctr=c->r[12]; // 801D0500
  if (true) { c->lr=0x801D0508u; dispatch(c,c->ctr); } // 801D0504
L_801D0508:;
  c->r[0]=R32(c->r[1]+0x00000134u); // 801D0508
  c->r[31]=R32(c->r[1]+0x0000012Cu); // 801D050C
  c->r[30]=R32(c->r[1]+0x00000128u); // 801D0510
  c->r[29]=R32(c->r[1]+0x00000124u); // 801D0514
  c->lr=c->r[0]; // 801D0518
  c->r[1]=c->r[1]+0x00000130u; // 801D051C
  return; // 801D0520
}

// bta_dm_disable_conn_down_timer_cback
void f_801D0524(Ctx* __restrict c) {
  trace_call(0x801D0524u);
  c->r[5]=0u+0x80480000u; // 801D0524
  c->r[3]=0u+0x00000001u; // 801D0528
  c->r[5]=c->r[5]+0x00003174u; // 801D052C
  c->r[4]=0u+0x00000000u; // 801D0530
  c->r[12]=R32(c->r[5]+0x00000050u); // 801D0534
  c->ctr=c->r[12]; // 801D0538
  if (true) { dispatch(c,c->ctr); return; } // 801D053C
}

// bta_dm_rssi_cback
void f_801D0540(Ctx* __restrict c) {
  trace_call(0x801D0540u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0540
  c->r[0]=c->lr; // 801D0544
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D0548
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D054C
  c->r[31]=c->r[3]|c->r[3]; // 801D0550
  c->r[0]=R8(c->r[3]+0x00000000u); // 801D0554
  cmps(c,0,(int32_t)c->r[0],0); // 801D0558
  if (!crb(c,2)) { goto L_801D0598; } // 801D055C
  c->r[3]=c->r[1]+0x00000008u; // 801D0560
  c->r[4]=c->r[31]+0x00000003u; // 801D0564
  c->lr=0x801D056Cu; f_801CE064(c); // 801D0568
  c->r[0]=0u+0x00000001u; // 801D056C
  c->r[3]=0u+0x80480000u; // 801D0570
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801D0574
  c->r[3]=c->r[3]+0x00003174u; // 801D0578
  c->r[12]=R32(c->r[3]+0x00000050u); // 801D057C
  c->r[4]=c->r[1]+0x00000008u; // 801D0580
  c->r[0]=R8(c->r[31]+0x00000002u); // 801D0584
  c->r[3]=0u+0x00000007u; // 801D0588
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 801D058C
  c->ctr=c->r[12]; // 801D0590
  if (true) { c->lr=0x801D0598u; dispatch(c,c->ctr); } // 801D0594
L_801D0598:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D0598
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D059C
  c->lr=c->r[0]; // 801D05A0
  c->r[1]=c->r[1]+0x00000020u; // 801D05A4
  return; // 801D05A8
}

// bta_dm_link_quality_cback
void f_801D05AC(Ctx* __restrict c) {
  trace_call(0x801D05ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D05AC
  c->r[0]=c->lr; // 801D05B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D05B4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D05B8
  c->r[31]=c->r[3]|c->r[3]; // 801D05BC
  c->r[0]=R8(c->r[3]+0x00000000u); // 801D05C0
  cmps(c,0,(int32_t)c->r[0],0); // 801D05C4
  if (!crb(c,2)) { goto L_801D0604; } // 801D05C8
  c->r[3]=c->r[1]+0x00000008u; // 801D05CC
  c->r[4]=c->r[31]+0x00000003u; // 801D05D0
  c->lr=0x801D05D8u; f_801CE064(c); // 801D05D4
  c->r[0]=0u+0x00000002u; // 801D05D8
  c->r[3]=0u+0x80480000u; // 801D05DC
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801D05E0
  c->r[3]=c->r[3]+0x00003174u; // 801D05E4
  c->r[12]=R32(c->r[3]+0x00000050u); // 801D05E8
  c->r[4]=c->r[1]+0x00000008u; // 801D05EC
  c->r[0]=R8(c->r[31]+0x00000002u); // 801D05F0
  c->r[3]=0u+0x00000007u; // 801D05F4
  W8(c->r[1]+0x00000010u,c->r[0]); // 801D05F8
  c->ctr=c->r[12]; // 801D05FC
  if (true) { c->lr=0x801D0604u; dispatch(c,c->ctr); } // 801D0600
L_801D0604:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D0604
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D0608
  c->lr=c->r[0]; // 801D060C
  c->r[1]=c->r[1]+0x00000020u; // 801D0610
  return; // 801D0614
}

// bta_dm_l2cap_server_compress_cback
void f_801D0618(Ctx* __restrict c) {
  trace_call(0x801D0618u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0618
  c->r[0]=c->lr; // 801D061C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D0620
  c->r[11]=c->r[1]+0x00000030u; // 801D0624
  c->lr=0x801D062Cu; f_800C2E44(c); // 801D0628
  c->r[31]=0u+0x80480000u; // 801D062C
  c->r[27]=R32(c->r[1]+0x00000038u); // 801D0630
  c->r[31]=c->r[31]+0x000030C8u; // 801D0634
  c->r[25]=c->r[3]|c->r[3]; // 801D0638
  c->r[26]=c->r[10]|c->r[10]; // 801D063C
  c->r[29]=0u+0x00000000u; // 801D0640
  c->r[30]=c->r[31]|c->r[31]; // 801D0644
  c->r[28]=0u+0x00000000u; // 801D0648
L_801D064C:;
  c->r[0]=R8(c->r[31]+0x00000008u); // 801D064C
  cmpu(c,0,c->r[0],0x00000001u); // 801D0650
  if (!crb(c,2)) { goto L_801D06CC; } // 801D0654
  c->r[3]=c->r[30]|c->r[30]; // 801D0658
  c->r[4]=c->r[25]|c->r[25]; // 801D065C
  c->lr=0x801D0664u; f_801CE098(c); // 801D0660
  cmps(c,0,(int32_t)c->r[3],0); // 801D0664
  if (!crb(c,2)) { goto L_801D06CC; } // 801D0668
  c->r[0]=R8(c->r[13]+0xFFFF9AF8u); // 801D066C
  cmpu(c,0,c->r[0],0x00000004u); // 801D0670
  if (crb(c,0)) { goto L_801D06A0; } // 801D0674
  c->r[0]=rotl(c->r[28],3)&0xFFFFFFF8u; // 801D0678
  c->r[5]=0u+0x80480000u; // 801D067C
  c->r[5]=c->r[5]+0x000030C8u; // 801D0680
  c->r[4]=0u+0x803A0000u; // 801D0684
  c->r[0]=c->r[0]+c->r[28]; // 801D0688
  c->r[3]=0u+0x00000503u; // 801D068C
  c->r[5]=c->r[5]+c->r[0]; // 801D0690
  c->r[4]=c->r[4]+0xFFFFE42Cu; // 801D0694
  c->r[5]=R8(c->r[5]+0x00000006u); // 801D0698
  c->lr=0x801D06A0u; f_801CD9F0(c); // 801D069C
L_801D06A0:;
  c->r[0]=rotl(c->r[28],3)&0xFFFFFFF8u; // 801D06A0
  c->r[3]=0u+0x80480000u; // 801D06A4
  c->r[3]=c->r[3]+0x000030C8u; // 801D06A8
  c->r[4]=c->r[26]|c->r[26]; // 801D06AC
  c->r[0]=c->r[0]+c->r[28]; // 801D06B0
  c->r[5]=c->r[27]|c->r[27]; // 801D06B4
  c->r[3]=c->r[3]+c->r[0]; // 801D06B8
  c->r[3]=R8(c->r[3]+0x00000006u); // 801D06BC
  c->lr=0x801D06C4u; f_80277880(c); // 801D06C0
  c->r[29]=c->r[3]|c->r[3]; // 801D06C4
  goto L_801D06E0; // 801D06C8
L_801D06CC:;
  c->r[28]=c->r[28]+0x00000001u; // 801D06CC
  c->r[30]=c->r[30]+0x00000009u; // 801D06D0
  cmps(c,0,(int32_t)c->r[28],5); // 801D06D4
  c->r[31]=c->r[31]+0x00000009u; // 801D06D8
  if (crb(c,0)) { IRQCHK(c); goto L_801D064C; } // 801D06DC
L_801D06E0:;
  c->r[11]=c->r[1]+0x00000030u; // 801D06E0
  c->r[3]=c->r[29]|c->r[29]; // 801D06E4
  c->lr=0x801D06ECu; f_800C2E90(c); // 801D06E8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D06EC
  c->lr=c->r[0]; // 801D06F0
  c->r[1]=c->r[1]+0x00000030u; // 801D06F4
  return; // 801D06F8
}

// bta_dm_compress_cback
void f_801D06FC(Ctx* __restrict c) {
  trace_call(0x801D06FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D06FC
  c->r[0]=c->lr; // 801D0700
  cmps(c,0,(int32_t)c->r[3],0); // 801D0704
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D0708
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D070C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D0710
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D0714
  if (!crb(c,2)) { goto L_801D0870; } // 801D0718
  c->r[3]=R32(c->r[13]+0xFFFF8EC4u); // 801D071C
  c->r[7]=0u+0x00000001u; // 801D0720
  c->r[9]=R8(c->r[3]+0x00000001u); // 801D0724
  goto L_801D0860; // 801D0728
L_801D072C:;
  c->r[8]=rotl(c->r[7],0)&0x000000FFu; // 801D072C
  c->r[0]=rotl(c->r[7],2)&0x000003FCu; // 801D0730
  c->r[0]=c->r[0]-c->r[8]; // 801D0734
  c->r[8]=c->r[3]+c->r[0]; // 801D0738
  c->r[0]=R8(c->r[8]+0x00000001u); // 801D073C
  cmpu(c,0,c->r[5],c->r[0]); // 801D0740
  if (crb(c,2)) { goto L_801D0750; } // 801D0744
  cmpu(c,0,c->r[0],0x000000FFu); // 801D0748
  if (!crb(c,2)) { goto L_801D085C; } // 801D074C
L_801D0750:;
  c->r[0]=R8(c->r[8]+0x00000000u); // 801D0750
  cmpu(c,0,c->r[4],c->r[0]); // 801D0754
  if (!crb(c,2)) { goto L_801D085C; } // 801D0758
  c->r[0]=R8(c->r[8]+0x00000002u); // 801D075C
  cmpu(c,0,c->r[0],0x00000001u); // 801D0760
  if (!crb(c,2)) { goto L_801D085C; } // 801D0764
  c->r[8]=0u+0x80480000u; // 801D0768
  c->r[11]=R8(c->r[3]+0x00000001u); // 801D076C
  c->r[10]=R8(c->r[8]+0x00003278u); // 801D0770
  c->r[9]=c->r[8]+0x00003278u; // 801D0774
  c->r[31]=0u+0x00000000u; // 801D0778
  c->r[29]=0u+0x00000001u; // 801D077C
  goto L_801D07E0; // 801D0780
L_801D0784:;
  c->r[8]=rotl(c->r[29],0)&0x000000FFu; // 801D0784
  c->r[0]=rotl(c->r[29],2)&0x000003FCu; // 801D0788
  c->r[0]=c->r[0]-c->r[8]; // 801D078C
  c->r[12]=c->r[3]+c->r[0]; // 801D0790
  c->r[0]=R8(c->r[12]+0x00000002u); // 801D0794
  cmpu(c,0,c->r[0],0x00000002u); // 801D0798
  if (!crb(c,2)) { goto L_801D07DC; } // 801D079C
  c->r[30]=0u+0x00000000u; // 801D07A0
  goto L_801D07D0; // 801D07A4
L_801D07A8:;
  c->r[8]=rotl(c->r[30],0)&0x000000FFu; // 801D07A8
  c->r[0]=rotl(c->r[30],3)&0x000007F8u; // 801D07AC
  c->r[8]=c->r[0]+c->r[8]; // 801D07B0
  c->r[0]=R8(c->r[12]+0x00000000u); // 801D07B4
  c->r[8]=c->r[9]+c->r[8]; // 801D07B8
  c->r[8]=R8(c->r[8]+0x00000007u); // 801D07BC
  cmpu(c,0,c->r[8],c->r[0]); // 801D07C0
  if (!crb(c,2)) { goto L_801D07CC; } // 801D07C4
  c->r[31]=0u+0x00000001u; // 801D07C8
L_801D07CC:;
  c->r[30]=c->r[30]+0x00000001u; // 801D07CC
L_801D07D0:;
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 801D07D0
  cmpu(c,0,c->r[0],c->r[10]); // 801D07D4
  if (crb(c,0)) { IRQCHK(c); goto L_801D07A8; } // 801D07D8
L_801D07DC:;
  c->r[29]=c->r[29]+0x00000001u; // 801D07DC
L_801D07E0:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 801D07E0
  cmpu(c,0,c->r[0],c->r[11]); // 801D07E4
  if (!crb(c,1)) { IRQCHK(c); goto L_801D0784; } // 801D07E8
  cmps(c,0,(int32_t)c->r[31],0); // 801D07EC
  if (!crb(c,2)) { goto L_801D0918; } // 801D07F0
  c->r[3]=rotl(c->r[7],0)&0x000000FFu; // 801D07F4
  c->r[30]=0u+0x80480000u; // 801D07F8
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801D07FC
  c->r[0]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801D0800
  c->r[30]=c->r[30]+0x000030C8u; // 801D0804
  c->r[29]=c->r[0]+c->r[3]; // 801D0808
  c->r[31]=c->r[30]+c->r[29]; // 801D080C
  W8(c->r[31]+0x00000007u,c->r[5]); // 801D0810
  c->r[3]=c->r[31]|c->r[31]; // 801D0814
  W8(c->r[31]+0x00000006u,c->r[4]); // 801D0818
  c->r[4]=c->r[6]|c->r[6]; // 801D081C
  c->lr=0x801D0824u; f_801CE064(c); // 801D0820
  c->r[0]=R8(c->r[13]+0xFFFF9AF8u); // 801D0824
  c->r[3]=0u+0x00000001u; // 801D0828
  W8(c->r[31]+0x00000008u,c->r[3]); // 801D082C
  c->r[7]=c->r[31]|c->r[31]; // 801D0830
  cmpu(c,0,c->r[0],0x00000004u); // 801D0834
  if (crb(c,0)) { goto L_801D0918; } // 801D0838
  c->r[4]=0u+0x803A0000u; // 801D083C
  c->r[5]=R8(c->r[31]+0x00000007u); // 801D0840
  c->r[6]=R8(c->r[31]+0x00000006u); // 801D0844
  c->r[4]=c->r[4]+0xFFFFE45Cu; // 801D0848
  c->r[7]=R8(c->r[7]+0x00000008u); // 801D084C
  c->r[3]=0u+0x00000503u; // 801D0850
  c->lr=0x801D0858u; f_801CDA30(c); // 801D0854
  goto L_801D0918; // 801D0858
L_801D085C:;
  c->r[7]=c->r[7]+0x00000001u; // 801D085C
L_801D0860:;
  c->r[0]=rotl(c->r[7],0)&0x000000FFu; // 801D0860
  cmpu(c,0,c->r[0],c->r[9]); // 801D0864
  if (!crb(c,1)) { IRQCHK(c); goto L_801D072C; } // 801D0868
  goto L_801D0918; // 801D086C
L_801D0870:;
  cmpu(c,0,c->r[3],0x00000001u); // 801D0870
  if (!crb(c,2)) { goto L_801D0918; } // 801D0874
  c->r[7]=R32(c->r[13]+0xFFFF8EC4u); // 801D0878
  c->r[8]=0u+0x00000001u; // 801D087C
  c->r[6]=R8(c->r[7]+0x00000001u); // 801D0880
  goto L_801D090C; // 801D0884
L_801D0888:;
  c->r[3]=rotl(c->r[8],0)&0x000000FFu; // 801D0888
  c->r[0]=rotl(c->r[8],2)&0x000003FCu; // 801D088C
  c->r[0]=c->r[0]-c->r[3]; // 801D0890
  c->r[3]=c->r[7]+c->r[0]; // 801D0894
  c->r[0]=R8(c->r[3]+0x00000001u); // 801D0898
  cmpu(c,0,c->r[5],c->r[0]); // 801D089C
  if (crb(c,2)) { goto L_801D08AC; } // 801D08A0
  cmpu(c,0,c->r[0],0x000000FFu); // 801D08A4
  if (!crb(c,2)) { goto L_801D0908; } // 801D08A8
L_801D08AC:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801D08AC
  cmpu(c,0,c->r[4],c->r[0]); // 801D08B0
  if (!crb(c,2)) { goto L_801D0908; } // 801D08B4
  c->r[3]=rotl(c->r[8],0)&0x000000FFu; // 801D08B8
  c->r[0]=R8(c->r[13]+0xFFFF9AF8u); // 801D08BC
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 801D08C0
  c->r[3]=0u+0x80480000u; // 801D08C4
  cmpu(c,0,c->r[0],0x00000004u); // 801D08C8
  c->r[4]=rotl(c->r[5],3)&0xFFFFFFF8u; // 801D08CC
  c->r[0]=c->r[4]+c->r[5]; // 801D08D0
  c->r[3]=c->r[3]+0x000030C8u; // 801D08D4
  c->r[3]=c->r[3]+c->r[0]; // 801D08D8
  c->r[0]=0u+0x00000000u; // 801D08DC
  W8(c->r[3]+0x00000008u,c->r[0]); // 801D08E0
  if (crb(c,0)) { goto L_801D0918; } // 801D08E4
  c->r[4]=0u+0x803A0000u; // 801D08E8
  c->r[5]=R8(c->r[3]+0x00000007u); // 801D08EC
  c->r[6]=R8(c->r[3]+0x00000006u); // 801D08F0
  c->r[4]=c->r[4]+0xFFFFE498u; // 801D08F4
  c->r[7]=R8(c->r[3]+0x00000008u); // 801D08F8
  c->r[3]=0u+0x00000503u; // 801D08FC
  c->lr=0x801D0904u; f_801CDA30(c); // 801D0900
  goto L_801D0918; // 801D0904
L_801D0908:;
  c->r[8]=c->r[8]+0x00000001u; // 801D0908
L_801D090C:;
  c->r[0]=rotl(c->r[8],0)&0x000000FFu; // 801D090C
  cmpu(c,0,c->r[0],c->r[6]); // 801D0910
  if (!crb(c,1)) { IRQCHK(c); goto L_801D0888; } // 801D0914
L_801D0918:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D0918
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D091C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D0920
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D0924
  c->lr=c->r[0]; // 801D0928
  c->r[1]=c->r[1]+0x00000020u; // 801D092C
  return; // 801D0930
}

// bta_dm_rm_cback
void f_801D0934(Ctx* __restrict c) {
  trace_call(0x801D0934u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0934
  c->r[0]=c->lr; // 801D0938
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D093C
  c->r[11]=c->r[1]+0x00000020u; // 801D0940
  c->lr=0x801D0948u; f_800C2E48(c); // 801D0944
  cmps(c,0,(int32_t)c->r[3],0); // 801D0948
  c->r[30]=c->r[4]|c->r[4]; // 801D094C
  c->r[31]=c->r[5]|c->r[5]; // 801D0950
  c->r[26]=c->r[6]|c->r[6]; // 801D0954
  if (!crb(c,2)) { goto L_801D0A24; } // 801D0958
  c->r[3]=0u+0x80480000u; // 801D095C
  c->r[27]=0u+0x00000000u; // 801D0960
  c->r[29]=c->r[3]+0x00003174u; // 801D0964
  goto L_801D0A14; // 801D0968
L_801D096C:;
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 801D096C
  c->r[4]=c->r[26]|c->r[26]; // 801D0970
  c->r[28]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 801D0974
  c->r[3]=c->r[29]+c->r[28]; // 801D0978
  c->lr=0x801D0980u; f_801CE098(c); // 801D097C
  cmps(c,0,(int32_t)c->r[3],0); // 801D0980
  if (!crb(c,2)) { goto L_801D0A10; } // 801D0984
  c->r[3]=c->r[29]+c->r[28]; // 801D0988
  c->r[0]=0u+0x00000001u; // 801D098C
  W8(c->r[3]+0x00000006u,c->r[0]); // 801D0990
  c->r[7]=0u+0x00000001u; // 801D0994
  c->r[6]=R32(c->r[13]+0xFFFF8EC0u); // 801D0998
  c->r[4]=R8(c->r[6]+0x00000001u); // 801D099C
  goto L_801D0A00; // 801D09A0
L_801D09A4:;
  c->r[3]=rotl(c->r[7],0)&0x000000FFu; // 801D09A4
  c->r[0]=rotl(c->r[7],2)&0x000003FCu; // 801D09A8
  c->r[5]=c->r[0]-c->r[3]; // 801D09AC
  c->r[3]=c->r[6]+c->r[5]; // 801D09B0
  c->r[0]=R8(c->r[3]+0x00000001u); // 801D09B4
  cmpu(c,0,c->r[31],c->r[0]); // 801D09B8
  if (crb(c,2)) { goto L_801D09C8; } // 801D09BC
  cmpu(c,0,c->r[0],0x000000FFu); // 801D09C0
  if (!crb(c,2)) { goto L_801D09FC; } // 801D09C4
L_801D09C8:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801D09C8
  cmpu(c,0,c->r[30],c->r[0]); // 801D09CC
  if (!crb(c,2)) { goto L_801D09FC; } // 801D09D0
  c->r[3]=0u+0x80480000u; // 801D09D4
  c->r[4]=c->r[6]+c->r[5]; // 801D09D8
  c->r[3]=c->r[3]+0x00003174u; // 801D09DC
  c->r[4]=R8(c->r[4]+0x00000002u); // 801D09E0
  c->r[3]=c->r[3]+c->r[28]; // 801D09E4
  c->r[0]=R8(c->r[3]+0x00000007u); // 801D09E8
  cmpu(c,0,c->r[4],c->r[0]); // 801D09EC
  if (!crb(c,1)) { goto L_801D0A24; } // 801D09F0
  W8(c->r[3]+0x00000007u,c->r[4]); // 801D09F4
  goto L_801D0A24; // 801D09F8
L_801D09FC:;
  c->r[7]=c->r[7]+0x00000001u; // 801D09FC
L_801D0A00:;
  c->r[0]=rotl(c->r[7],0)&0x000000FFu; // 801D0A00
  cmpu(c,0,c->r[0],c->r[4]); // 801D0A04
  if (!crb(c,1)) { IRQCHK(c); goto L_801D09A4; } // 801D0A08
  goto L_801D0A24; // 801D0A0C
L_801D0A10:;
  c->r[27]=c->r[27]+0x00000001u; // 801D0A10
L_801D0A14:;
  c->r[0]=R8(c->r[29]+0x0000004Du); // 801D0A14
  c->r[3]=rotl(c->r[27],0)&0x000000FFu; // 801D0A18
  cmpu(c,0,c->r[3],c->r[0]); // 801D0A1C
  if (crb(c,0)) { IRQCHK(c); goto L_801D096C; } // 801D0A20
L_801D0A24:;
  c->r[11]=c->r[1]+0x00000020u; // 801D0A24
  c->lr=0x801D0A2Cu; f_800C2E94(c); // 801D0A28
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D0A2C
  c->lr=c->r[0]; // 801D0A30
  c->r[1]=c->r[1]+0x00000020u; // 801D0A34
  return; // 801D0A38
}

// bta_dm_keep_acl
void f_801D0A3C(Ctx* __restrict c) {
  trace_call(0x801D0A3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0A3C
  c->r[0]=c->lr; // 801D0A40
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D0A44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D0A48
  c->r[4]=R16(c->r[3]+0x00000006u); // 801D0A4C
  c->r[3]=0u+0x80480000u; // 801D0A50
  c->r[3]=c->r[3]+0x00003174u; // 801D0A54
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; cr0(c,c->r[0]); // 801D0A58
  W8(c->r[3]+0x00000101u,c->r[4]); // 801D0A5C
  if (crb(c,2)) { goto L_801D0A90; } // 801D0A60
  c->r[31]=0u+0x00010000u; // 801D0A64
  c->r[3]=c->r[2]+0xFFFFB060u; // 801D0A68
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 801D0A6C
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801D0A70
  c->lr=0x801D0A78u; f_801E6DE0(c); // 801D0A74
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 801D0A78
  c->r[3]=0u+0x00000000u; // 801D0A7C
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801D0A80
  c->r[5]=0u+0x00000001u; // 801D0A84
  c->lr=0x801D0A8Cu; f_801E6D18(c); // 801D0A88
  goto L_801D0AAC; // 801D0A8C
L_801D0A90:;
  c->r[3]=c->r[2]+0xFFFFB060u; // 801D0A90
  c->r[4]=0u+0x00000002u; // 801D0A94
  c->lr=0x801D0A9Cu; f_801E6DE0(c); // 801D0A98
  c->r[3]=0u+0x00000000u; // 801D0A9C
  c->r[4]=0u+0x00000002u; // 801D0AA0
  c->r[5]=0u+0x00000001u; // 801D0AA4
  c->lr=0x801D0AACu; f_801E6D18(c); // 801D0AA8
L_801D0AAC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D0AAC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D0AB0
  c->lr=c->r[0]; // 801D0AB4
  c->r[1]=c->r[1]+0x00000010u; // 801D0AB8
  return; // 801D0ABC
}

// bta_dm_immediate_disable
void f_801D0AC0(Ctx* __restrict c) {
  trace_call(0x801D0AC0u);
  c->r[5]=0u+0x80480000u; // 801D0AC0
  c->r[3]=0u+0x00000001u; // 801D0AC4
  c->r[5]=c->r[5]+0x00003174u; // 801D0AC8
  c->r[4]=0u+0x00000000u; // 801D0ACC
  c->r[12]=R32(c->r[5]+0x00000050u); // 801D0AD0
  c->ctr=c->r[12]; // 801D0AD4
  if (true) { dispatch(c,c->ctr); return; } // 801D0AD8
}

// bta_dm_reset_complete
void f_801D0ADC(Ctx* __restrict c) {
  trace_call(0x801D0ADCu);
  return; // 801D0ADC
}

// bta_dm_send_hci_reset
void f_801D0AE0(Ctx* __restrict c) {
  trace_call(0x801D0AE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0AE0
  c->r[0]=c->lr; // 801D0AE4
  c->r[4]=0u+0x80480000u; // 801D0AE8
  c->r[3]=0u+0x00000002u; // 801D0AEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D0AF0
  c->r[0]=0u+0x00000001u; // 801D0AF4
  c->r[4]=c->r[4]+0x00003038u; // 801D0AF8
  W8(c->r[4]+0x0000007Eu,c->r[0]); // 801D0AFC
  c->lr=0x801D0B04u; f_801CAE20(c); // 801D0B00
  cmps(c,0,(int32_t)c->r[3],0); // 801D0B04
  if (crb(c,2)) { goto L_801D0B14; } // 801D0B08
  c->r[4]=0u+0x00000000u; // 801D0B0C
  c->lr=0x801D0B14u; f_801E2444(c); // 801D0B10
L_801D0B14:;
  c->r[3]=0u+0x801D0000u; // 801D0B14
  c->r[3]=c->r[3]+0x00000ADCu; // 801D0B18
  c->lr=0x801D0B20u; f_801D652C(c); // 801D0B1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D0B20
  c->lr=c->r[0]; // 801D0B24
  c->r[1]=c->r[1]+0x00000010u; // 801D0B28
  return; // 801D0B2C
}

// BTA_EnableBluetooth
void f_801D0B30(Ctx* __restrict c) {
  trace_call(0x801D0B30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0B30
  c->r[0]=c->lr; // 801D0B34
  c->r[4]=0u+0x80480000u; // 801D0B38
  c->r[5]=0u+0x00000104u; // 801D0B3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D0B40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D0B44
  c->r[31]=c->r[3]|c->r[3]; // 801D0B48
  c->r[3]=c->r[4]+0x00003174u; // 801D0B4C
  c->r[4]=0u+0x00000000u; // 801D0B50
  c->lr=0x801D0B58u; f_80004350(c); // 801D0B54
  c->lr=0x801D0B5Cu; f_801CC310(c); // 801D0B58
  c->r[3]=0u+0x00000001u; // 801D0B5C
  c->r[4]=c->r[2]+0xFFFFB030u; // 801D0B60
  c->lr=0x801D0B68u; f_801CE4FC(c); // 801D0B64
  c->r[3]=0u+0x00000002u; // 801D0B68
  c->r[4]=c->r[2]+0xFFFFB038u; // 801D0B6C
  c->lr=0x801D0B74u; f_801CE4FC(c); // 801D0B70
  c->lr=0x801D0B78u; f_801CC320(c); // 801D0B74
  c->r[3]=0u+0x0000000Cu; // 801D0B78
  c->lr=0x801D0B80u; f_801CAC80(c); // 801D0B7C
  cmps(c,0,(int32_t)c->r[3],0); // 801D0B80
  if (crb(c,2)) { goto L_801D0BA0; } // 801D0B84
  c->r[0]=0u+0x00000100u; // 801D0B88
  W16(c->r[3]+0x00000000u,c->r[0]); // 801D0B8C
  W32(c->r[3]+0x00000008u,c->r[31]); // 801D0B90
  c->lr=0x801D0B98u; f_801CE510(c); // 801D0B94
  c->r[3]=0u+0x00000000u; // 801D0B98
  goto L_801D0BA4; // 801D0B9C
L_801D0BA0:;
  c->r[3]=0u+0x00000001u; // 801D0BA0
L_801D0BA4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D0BA4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D0BA8
  c->lr=c->r[0]; // 801D0BAC
  c->r[1]=c->r[1]+0x00000010u; // 801D0BB0
  return; // 801D0BB4
}

// BTA_DisableBluetooth
void f_801D0BB8(Ctx* __restrict c) {
  trace_call(0x801D0BB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0BB8
  c->r[0]=c->lr; // 801D0BBC
  c->r[3]=0u+0x00000008u; // 801D0BC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D0BC4
  c->lr=0x801D0BCCu; f_801CAC80(c); // 801D0BC8
  cmps(c,0,(int32_t)c->r[3],0); // 801D0BCC
  if (crb(c,2)) { goto L_801D0BE0; } // 801D0BD0
  c->r[0]=0u+0x00000101u; // 801D0BD4
  W16(c->r[3]+0x00000000u,c->r[0]); // 801D0BD8
  c->lr=0x801D0BE0u; f_801CE510(c); // 801D0BDC
L_801D0BE0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D0BE0
  c->lr=c->r[0]; // 801D0BE4
  c->r[1]=c->r[1]+0x00000010u; // 801D0BE8
  return; // 801D0BEC
}

// BTA_DmIsDeviceUp
void f_801D0BF0(Ctx* __restrict c) {
  trace_call(0x801D0BF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0BF0
  c->r[0]=c->lr; // 801D0BF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D0BF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D0BFC
  c->lr=0x801D0C04u; f_801CC310(c); // 801D0C00
  c->lr=0x801D0C08u; f_801D65D4(c); // 801D0C04
  c->r[31]=c->r[3]|c->r[3]; // 801D0C08
  c->lr=0x801D0C10u; f_801CC320(c); // 801D0C0C
  c->r[3]=c->r[31]|c->r[31]; // 801D0C10
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D0C14
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D0C18
  c->lr=c->r[0]; // 801D0C1C
  c->r[1]=c->r[1]+0x00000010u; // 801D0C20
  return; // 801D0C24
}

// BTA_DmSetDeviceName
void f_801D0C28(Ctx* __restrict c) {
  trace_call(0x801D0C28u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0C28
  c->r[0]=c->lr; // 801D0C2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D0C30
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D0C34
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D0C38
  c->r[30]=c->r[3]|c->r[3]; // 801D0C3C
  c->r[3]=0u+0x00000028u; // 801D0C40
  c->lr=0x801D0C48u; f_801CAC80(c); // 801D0C44
  cmps(c,0,(int32_t)c->r[3],0); // 801D0C48
  c->r[31]=c->r[3]|c->r[3]; // 801D0C4C
  if (crb(c,2)) { goto L_801D0C74; } // 801D0C50
  c->r[0]=0u+0x00000102u; // 801D0C54
  c->r[4]=c->r[30]|c->r[30]; // 801D0C58
  W16(c->r[3]+0x00000000u,c->r[0]); // 801D0C5C
  c->r[5]=0u+0x00000020u; // 801D0C60
  c->r[3]=c->r[3]+0x00000008u; // 801D0C64
  c->lr=0x801D0C6Cu; f_800CA310(c); // 801D0C68
  c->r[3]=c->r[31]|c->r[31]; // 801D0C6C
  c->lr=0x801D0C74u; f_801CE510(c); // 801D0C70
L_801D0C74:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D0C74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D0C78
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D0C7C
  c->lr=c->r[0]; // 801D0C80
  c->r[1]=c->r[1]+0x00000010u; // 801D0C84
  return; // 801D0C88
}

// BTA_DmSetVisibility
void f_801D0C8C(Ctx* __restrict c) {
  trace_call(0x801D0C8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0C8C
  c->r[0]=c->lr; // 801D0C90
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D0C94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D0C98
  c->r[31]=c->r[4]|c->r[4]; // 801D0C9C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D0CA0
  c->r[30]=c->r[3]|c->r[3]; // 801D0CA4
  c->r[3]=0u+0x00000110u; // 801D0CA8
  c->lr=0x801D0CB0u; f_801CAC80(c); // 801D0CAC
  cmps(c,0,(int32_t)c->r[3],0); // 801D0CB0
  if (crb(c,2)) { goto L_801D0CCC; } // 801D0CB4
  c->r[0]=0u+0x00000103u; // 801D0CB8
  W16(c->r[3]+0x00000000u,c->r[0]); // 801D0CBC
  W8(c->r[3]+0x00000008u,c->r[30]); // 801D0CC0
  W8(c->r[3]+0x00000009u,c->r[31]); // 801D0CC4
  c->lr=0x801D0CCCu; f_801CE510(c); // 801D0CC8
L_801D0CCC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D0CCC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D0CD0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D0CD4
  c->lr=c->r[0]; // 801D0CD8
  c->r[1]=c->r[1]+0x00000010u; // 801D0CDC
  return; // 801D0CE0
}

// BTA_DmSearch
void f_801D0CE4(Ctx* __restrict c) {
  trace_call(0x801D0CE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0CE4
  c->r[0]=c->lr; // 801D0CE8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D0CEC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D0CF0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D0CF4
  c->r[30]=c->r[5]|c->r[5]; // 801D0CF8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D0CFC
  c->r[29]=c->r[4]|c->r[4]; // 801D0D00
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D0D04
  c->r[28]=c->r[3]|c->r[3]; // 801D0D08
  c->r[3]=0u+0x0000001Cu; // 801D0D0C
  c->lr=0x801D0D14u; f_801CAC80(c); // 801D0D10
  cmps(c,0,(int32_t)c->r[3],0); // 801D0D14
  c->r[31]=c->r[3]|c->r[3]; // 801D0D18
  if (crb(c,2)) { goto L_801D0D48; } // 801D0D1C
  c->r[0]=0u+0x00000200u; // 801D0D20
  c->r[4]=c->r[28]|c->r[28]; // 801D0D24
  W16(c->r[3]+0x00000000u,c->r[0]); // 801D0D28
  c->r[5]=0u+0x0000000Au; // 801D0D2C
  c->r[3]=c->r[3]+0x00000008u; // 801D0D30
  c->lr=0x801D0D38u; f_80004000(c); // 801D0D34
  W32(c->r[31]+0x00000014u,c->r[29]); // 801D0D38
  c->r[3]=c->r[31]|c->r[31]; // 801D0D3C
  W32(c->r[31]+0x00000018u,c->r[30]); // 801D0D40
  c->lr=0x801D0D48u; f_801CE510(c); // 801D0D44
L_801D0D48:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D0D48
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D0D4C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D0D50
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D0D54
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D0D58
  c->lr=c->r[0]; // 801D0D5C
  c->r[1]=c->r[1]+0x00000020u; // 801D0D60
  return; // 801D0D64
}

// BTA_DmSearchCancel
void f_801D0D68(Ctx* __restrict c) {
  trace_call(0x801D0D68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0D68
  c->r[0]=c->lr; // 801D0D6C
  c->r[3]=0u+0x00000008u; // 801D0D70
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D0D74
  c->lr=0x801D0D7Cu; f_801CAC80(c); // 801D0D78
  cmps(c,0,(int32_t)c->r[3],0); // 801D0D7C
  if (crb(c,2)) { goto L_801D0D90; } // 801D0D80
  c->r[0]=0u+0x00000201u; // 801D0D84
  W16(c->r[3]+0x00000000u,c->r[0]); // 801D0D88
  c->lr=0x801D0D90u; f_801CE510(c); // 801D0D8C
L_801D0D90:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D0D90
  c->lr=c->r[0]; // 801D0D94
  c->r[1]=c->r[1]+0x00000010u; // 801D0D98
  return; // 801D0D9C
}

// BTA_DmPinReply
void f_801D0DA0(Ctx* __restrict c) {
  trace_call(0x801D0DA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0DA0
  c->r[0]=c->lr; // 801D0DA4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D0DA8
  c->r[11]=c->r[1]+0x00000020u; // 801D0DAC
  c->lr=0x801D0DB4u; f_800C2E4C(c); // 801D0DB0
  c->r[27]=c->r[3]|c->r[3]; // 801D0DB4
  c->r[28]=c->r[4]|c->r[4]; // 801D0DB8
  c->r[29]=c->r[5]|c->r[5]; // 801D0DBC
  c->r[30]=c->r[6]|c->r[6]; // 801D0DC0
  c->r[3]=0u+0x00000020u; // 801D0DC4
  c->lr=0x801D0DCCu; f_801CAC80(c); // 801D0DC8
  cmps(c,0,(int32_t)c->r[3],0); // 801D0DCC
  c->r[31]=c->r[3]|c->r[3]; // 801D0DD0
  if (crb(c,2)) { goto L_801D0E14; } // 801D0DD4
  c->r[0]=0u+0x00000107u; // 801D0DD8
  c->r[4]=c->r[27]|c->r[27]; // 801D0DDC
  W16(c->r[3]+0x00000000u,c->r[0]); // 801D0DE0
  c->r[3]=c->r[3]+0x00000008u; // 801D0DE4
  c->lr=0x801D0DECu; f_801CE064(c); // 801D0DE8
  cmps(c,0,(int32_t)c->r[28],0); // 801D0DEC
  W8(c->r[31]+0x0000000Eu,c->r[28]); // 801D0DF0
  if (crb(c,2)) { goto L_801D0E0C; } // 801D0DF4
  W8(c->r[31]+0x0000000Fu,c->r[29]); // 801D0DF8
  c->r[4]=c->r[30]|c->r[30]; // 801D0DFC
  c->r[5]=c->r[29]|c->r[29]; // 801D0E00
  c->r[3]=c->r[31]+0x00000010u; // 801D0E04
  c->lr=0x801D0E0Cu; f_80004000(c); // 801D0E08
L_801D0E0C:;
  c->r[3]=c->r[31]|c->r[31]; // 801D0E0C
  c->lr=0x801D0E14u; f_801CE510(c); // 801D0E10
L_801D0E14:;
  c->r[11]=c->r[1]+0x00000020u; // 801D0E14
  c->lr=0x801D0E1Cu; f_800C2E98(c); // 801D0E18
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D0E1C
  c->lr=c->r[0]; // 801D0E20
  c->r[1]=c->r[1]+0x00000020u; // 801D0E24
  return; // 801D0E28
}

// BTA_DmAddDevice
void f_801D0E2C(Ctx* __restrict c) {
  trace_call(0x801D0E2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0E2C
  c->r[0]=c->lr; // 801D0E30
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D0E34
  c->r[11]=c->r[1]+0x00000030u; // 801D0E38
  c->lr=0x801D0E40u; f_800C2E4C(c); // 801D0E3C
  c->r[28]=c->r[3]|c->r[3]; // 801D0E40
  c->r[29]=c->r[4]|c->r[4]; // 801D0E44
  c->r[30]=c->r[5]|c->r[5]; // 801D0E48
  c->r[27]=c->r[6]|c->r[6]; // 801D0E4C
  c->r[3]=c->r[1]+0x00000008u; // 801D0E50
  c->r[31]=0u+0x00000000u; // 801D0E54
  c->r[4]=0u+0x00000000u; // 801D0E58
  c->r[5]=0u+0x00000008u; // 801D0E5C
  c->lr=0x801D0E64u; f_80004350(c); // 801D0E60
  cmps(c,0,(int32_t)c->r[27],0); // 801D0E64
  if (crb(c,2)) { goto L_801D0ED0; } // 801D0E68
  c->r[7]=0u+0x80380000u; // 801D0E6C
  c->r[5]=c->r[1]+0x00000008u; // 801D0E70
  c->r[7]=c->r[7]+0xFFFFF038u; // 801D0E74
  c->r[3]=0u+0x00000001u; // 801D0E78
  goto L_801D0EBC; // 801D0E7C
L_801D0E80:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801D0E80
  c->r[4]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801D0E84
  c->r[0]=c->r[30]&c->r[4]; cr0(c,c->r[0]); // 801D0E88
  if (crb(c,2)) { goto L_801D0EB8; } // 801D0E8C
  c->r[0]=rotl(c->r[31],2)&0x000003FCu; // 801D0E90
  c->r[30]=c->r[30]&~c->r[4]; // 801D0E94
  c->r[4]=R32(c->r[7]+c->r[0]); // 801D0E98
  c->r[0]=rotl(c->r[4],0)&0x00001FE0u; // 801D0E9C
  c->r[6]=rotl(c->r[4],29)&0x000003FCu; // 801D0EA0
  c->r[0]=c->r[4]-c->r[0]; // 801D0EA4
  c->r[4]=R32(c->r[5]+c->r[6]); // 801D0EA8
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 801D0EAC
  c->r[0]=c->r[4]|c->r[0]; // 801D0EB0
  W32(c->r[5]+c->r[6],c->r[0]); // 801D0EB4
L_801D0EB8:;
  c->r[31]=c->r[31]+0x00000001u; // 801D0EB8
L_801D0EBC:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D0EBC
  if (crb(c,2)) { goto L_801D0ED0; } // 801D0EC0
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801D0EC4
  cmpu(c,0,c->r[0],0x00000017u); // 801D0EC8
  if (crb(c,0)) { IRQCHK(c); goto L_801D0E80; } // 801D0ECC
L_801D0ED0:;
  c->lr=0x801D0ED4u; f_801CC310(c); // 801D0ED0
  c->r[3]=c->r[28]|c->r[28]; // 801D0ED4
  c->r[8]=c->r[29]|c->r[29]; // 801D0ED8
  c->r[7]=c->r[1]+0x00000008u; // 801D0EDC
  c->r[4]=0u+0x00000000u; // 801D0EE0
  c->r[5]=0u+0x00000000u; // 801D0EE4
  c->r[6]=0u+0x00000000u; // 801D0EE8
  c->lr=0x801D0EF0u; f_801D5C74(c); // 801D0EEC
  c->r[28]=c->r[3]|c->r[3]; // 801D0EF0
  c->lr=0x801D0EF8u; f_801CC320(c); // 801D0EF4
  c->r[0]=rotl(c->r[28],0)&0x000000FFu; // 801D0EF8
  c->r[11]=c->r[1]+0x00000030u; // 801D0EFC
  c->r[0]=cntlz(c->r[0]); // 801D0F00
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 801D0F04
  c->lr=0x801D0F0Cu; f_800C2E98(c); // 801D0F08
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D0F0C
  c->lr=c->r[0]; // 801D0F10
  c->r[1]=c->r[1]+0x00000030u; // 801D0F14
  return; // 801D0F18
}

// BTA_DmRemoveDevice
void f_801D0F1C(Ctx* __restrict c) {
  trace_call(0x801D0F1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0F1C
  c->r[0]=c->lr; // 801D0F20
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D0F24
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D0F28
  c->r[31]=c->r[3]|c->r[3]; // 801D0F2C
  c->lr=0x801D0F34u; f_801CC310(c); // 801D0F30
  c->r[3]=c->r[31]|c->r[31]; // 801D0F34
  c->lr=0x801D0F3Cu; f_801D5DFC(c); // 801D0F38
  c->r[31]=c->r[3]|c->r[3]; // 801D0F3C
  c->lr=0x801D0F44u; f_801CC320(c); // 801D0F40
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801D0F44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D0F48
  c->r[0]=cntlz(c->r[0]); // 801D0F4C
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 801D0F50
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D0F54
  c->lr=c->r[0]; // 801D0F58
  c->r[1]=c->r[1]+0x00000010u; // 801D0F5C
  return; // 801D0F60
}

// BTA_DmSendHciReset
void f_801D0F64(Ctx* __restrict c) {
  trace_call(0x801D0F64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0F64
  c->r[0]=c->lr; // 801D0F68
  c->r[3]=0u+0x00000008u; // 801D0F6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D0F70
  c->lr=0x801D0F78u; f_801CAC80(c); // 801D0F74
  cmps(c,0,(int32_t)c->r[3],0); // 801D0F78
  if (crb(c,2)) { goto L_801D0F8C; } // 801D0F7C
  c->r[0]=0u+0x0000010Cu; // 801D0F80
  W16(c->r[3]+0x00000000u,c->r[0]); // 801D0F84
  c->lr=0x801D0F8Cu; f_801CE510(c); // 801D0F88
L_801D0F8C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D0F8C
  c->lr=c->r[0]; // 801D0F90
  c->r[1]=c->r[1]+0x00000010u; // 801D0F94
  return; // 801D0F98
}

// bta_dm_sm_execute
void f_801D0F9C(Ctx* __restrict c) {
  trace_call(0x801D0F9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D0F9C
  c->r[0]=c->lr; // 801D0FA0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D0FA4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D0FA8
  c->r[31]=0u+0x80380000u; // 801D0FAC
  c->r[31]=c->r[31]+0xFFFFF0B0u; // 801D0FB0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D0FB4
  c->r[30]=0u+0x80380000u; // 801D0FB8
  c->r[30]=c->r[30]+0xFFFFF0E4u; // 801D0FBC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D0FC0
  c->r[29]=0u+0x00000000u; // 801D0FC4
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D0FC8
  c->r[28]=c->r[3]|c->r[3]; // 801D0FCC
L_801D0FD0:;
  c->r[3]=R16(c->r[28]+0x00000000u); // 801D0FD0
  c->r[0]=c->r[29]+c->r[30]; // 801D0FD4
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 801D0FD8
  c->r[3]=rotl(c->r[3],2)&0x000003FCu; // 801D0FDC
  c->r[3]=c->r[3]-c->r[4]; // 801D0FE0
  c->r[0]=R8(c->r[3]+c->r[0]); // 801D0FE4
  cmpu(c,0,c->r[0],0x0000000Du); // 801D0FE8
  if (crb(c,2)) { goto L_801D1010; } // 801D0FEC
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 801D0FF0
  c->r[3]=c->r[28]|c->r[28]; // 801D0FF4
  c->r[12]=R32(c->r[31]+c->r[0]); // 801D0FF8
  c->ctr=c->r[12]; // 801D0FFC
  if (true) { c->lr=0x801D1004u; dispatch(c,c->ctr); } // 801D1000
  c->r[29]=c->r[29]+0x00000001u; // 801D1004
  cmps(c,0,(int32_t)c->r[29],2); // 801D1008
  if (crb(c,0)) { IRQCHK(c); goto L_801D0FD0; } // 801D100C
L_801D1010:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D1010
  c->r[3]=0u+0x00000001u; // 801D1014
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D1018
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D101C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D1020
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D1024
  c->lr=c->r[0]; // 801D1028
  c->r[1]=c->r[1]+0x00000020u; // 801D102C
  return; // 801D1030
}

// bta_dm_search_sm_execute
void f_801D1034(Ctx* __restrict c) {
  trace_call(0x801D1034u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1034
  c->r[0]=c->lr; // 801D1038
  c->r[7]=0u+0x80480000u; // 801D103C
  c->r[5]=0u+0x80380000u; // 801D1040
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D1044
  c->r[7]=c->r[7]+0x000030F8u; // 801D1048
  c->r[5]=c->r[5]+0xFFFFF1C8u; // 801D104C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D1050
  c->r[31]=0u+0x80380000u; // 801D1054
  c->r[31]=c->r[31]+0xFFFFF110u; // 801D1058
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D105C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D1060
  c->r[29]=0u+0x00000000u; // 801D1064
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D1068
  c->r[28]=c->r[3]|c->r[3]; // 801D106C
  c->r[6]=R16(c->r[7]+0x00000018u); // 801D1070
  c->r[0]=R16(c->r[3]+0x00000000u); // 801D1074
  c->r[6]=rotl(c->r[6],2)&0xFFFFFFFCu; // 801D1078
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 801D107C
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 801D1080
  c->r[30]=R32(c->r[5]+c->r[6]); // 801D1084
  c->r[0]=c->r[0]-c->r[4]; // 801D1088
  c->r[3]=c->r[30]+c->r[0]; // 801D108C
  c->r[0]=R8(c->r[3]+0x00000002u); // 801D1090
  W16(c->r[7]+0x00000018u,c->r[0]); // 801D1094
L_801D1098:;
  c->r[3]=R16(c->r[28]+0x00000000u); // 801D1098
  c->r[0]=c->r[29]+c->r[30]; // 801D109C
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 801D10A0
  c->r[3]=rotl(c->r[3],2)&0x000003FCu; // 801D10A4
  c->r[3]=c->r[3]-c->r[4]; // 801D10A8
  c->r[0]=R8(c->r[3]+c->r[0]); // 801D10AC
  cmpu(c,0,c->r[0],0x00000012u); // 801D10B0
  if (crb(c,2)) { goto L_801D10D8; } // 801D10B4
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 801D10B8
  c->r[3]=c->r[28]|c->r[28]; // 801D10BC
  c->r[12]=R32(c->r[31]+c->r[0]); // 801D10C0
  c->ctr=c->r[12]; // 801D10C4
  if (true) { c->lr=0x801D10CCu; dispatch(c,c->ctr); } // 801D10C8
  c->r[29]=c->r[29]+0x00000001u; // 801D10CC
  cmps(c,0,(int32_t)c->r[29],2); // 801D10D0
  if (crb(c,0)) { IRQCHK(c); goto L_801D1098; } // 801D10D4
L_801D10D8:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D10D8
  c->r[3]=0u+0x00000001u; // 801D10DC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D10E0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D10E4
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D10E8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D10EC
  c->lr=c->r[0]; // 801D10F0
  c->r[1]=c->r[1]+0x00000020u; // 801D10F4
  return; // 801D10F8
}

// bta_dm_init_pm
void f_801D10FC(Ctx* __restrict c) {
  trace_call(0x801D10FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D10FC
  c->r[0]=c->lr; // 801D1100
  c->r[3]=0u+0x80480000u; // 801D1104
  c->r[4]=0u+0x00000000u; // 801D1108
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D110C
  c->r[3]=c->r[3]+0x00003278u; // 801D1110
  c->r[5]=0u+0x0000002Eu; // 801D1114
  c->lr=0x801D111Cu; f_80004350(c); // 801D1118
  c->r[3]=R32(c->r[13]+0xFFFF8EC8u); // 801D111C
  c->r[0]=R8(c->r[3]+0x00000001u); // 801D1120
  cmps(c,0,(int32_t)c->r[0],0); // 801D1124
  if (crb(c,2)) { goto L_801D1154; } // 801D1128
  c->r[3]=0u+0x801D0000u; // 801D112C
  c->r[3]=c->r[3]+0x0000117Cu; // 801D1130
  c->lr=0x801D1138u; f_801CE158(c); // 801D1134
  c->r[4]=0u+0x80480000u; // 801D1138
  c->r[5]=0u+0x801D0000u; // 801D113C
  c->r[4]=c->r[4]+0x00003174u; // 801D1140
  c->r[3]=0u+0x00000003u; // 801D1144
  c->r[4]=c->r[4]+0x00000095u; // 801D1148
  c->r[5]=c->r[5]+0x0000187Cu; // 801D114C
  c->lr=0x801D1154u; f_801D98F0(c); // 801D1150
L_801D1154:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D1154
  c->lr=c->r[0]; // 801D1158
  c->r[1]=c->r[1]+0x00000010u; // 801D115C
  return; // 801D1160
}

// bta_dm_disable_pm
void f_801D1164(Ctx* __restrict c) {
  trace_call(0x801D1164u);
  c->r[4]=0u+0x80480000u; // 801D1164
  c->r[3]=0u+0x00000004u; // 801D1168
  c->r[4]=c->r[4]+0x00003174u; // 801D116C
  c->r[5]=0u+0x00000000u; // 801D1170
  c->r[4]=c->r[4]+0x00000095u; // 801D1174
  f_801D98F0(c); return; // 801D1178
}

// bta_dm_pm_cback
void f_801D117C(Ctx* __restrict c) {
  trace_call(0x801D117Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D117C
  c->r[0]=c->lr; // 801D1180
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D1184
  c->r[11]=c->r[1]+0x00000040u; // 801D1188
  c->lr=0x801D1190u; f_800C2E3C(c); // 801D118C
  c->r[25]=c->r[3]|c->r[3]; // 801D1190
  c->r[26]=c->r[4]|c->r[4]; // 801D1194
  c->r[27]=c->r[5]|c->r[5]; // 801D1198
  c->r[28]=c->r[6]|c->r[6]; // 801D119C
  c->r[3]=c->r[1]+0x0000000Cu; // 801D11A0
  c->lr=0x801D11A8u; f_801D7388(c); // 801D11A4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D11A8
  if (!crb(c,2)) { goto L_801D1218; } // 801D11AC
  c->r[0]=R16(c->r[1]+0x00000012u); // 801D11B0
  cmpu(c,0,c->r[0],0x0000000Fu); // 801D11B4
  if (!crb(c,2)) { goto L_801D1218; } // 801D11B8
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 801D11BC
  cmpu(c,0,c->r[0],0x00000003u); // 801D11C0
  if (!crb(c,0)) { goto L_801D1218; } // 801D11C4
  cmpu(c,0,c->r[25],0x00000004u); // 801D11C8
  if (!crb(c,2)) { goto L_801D11F4; } // 801D11CC
  c->r[5]=0u+0x80380000u; // 801D11D0
  c->r[3]=c->r[28]|c->r[28]; // 801D11D4
  c->r[5]=c->r[5]+0xFFFFEF68u; // 801D11D8
  c->r[4]=c->r[1]+0x00000008u; // 801D11DC
  c->r[0]=R16(c->r[5]+0x00000004u); // 801D11E0
  c->r[0]=c->r[0]&0x0000000Bu; cr0(c,c->r[0]); // 801D11E4
  W16(c->r[1]+0x00000008u,c->r[0]); // 801D11E8
  c->lr=0x801D11F0u; f_801D4798(c); // 801D11EC
  goto L_801D1218; // 801D11F0
L_801D11F4:;
  cmpu(c,0,c->r[25],0x00000005u); // 801D11F4
  if (!crb(c,2)) { goto L_801D1218; } // 801D11F8
  c->r[5]=0u+0x80380000u; // 801D11FC
  c->r[3]=c->r[28]|c->r[28]; // 801D1200
  c->r[5]=c->r[5]+0xFFFFEF68u; // 801D1204
  c->r[4]=c->r[1]+0x00000008u; // 801D1208
  c->r[0]=R16(c->r[5]+0x00000004u); // 801D120C
  W16(c->r[1]+0x00000008u,c->r[0]); // 801D1210
  c->lr=0x801D1218u; f_801D4798(c); // 801D1214
L_801D1218:;
  c->r[5]=R32(c->r[13]+0xFFFF8EC8u); // 801D1218
  c->r[30]=0u+0x00000001u; // 801D121C
  c->r[4]=R8(c->r[5]+0x00000001u); // 801D1220
  goto L_801D125C; // 801D1224
L_801D1228:;
  c->r[3]=rotl(c->r[30],0)&0x000000FFu; // 801D1228
  c->r[0]=rotl(c->r[30],2)&0x000003FCu; // 801D122C
  c->r[0]=c->r[0]-c->r[3]; // 801D1230
  c->r[3]=c->r[5]+c->r[0]; // 801D1234
  c->r[0]=R8(c->r[5]+c->r[0]); // 801D1238
  cmpu(c,0,c->r[26],c->r[0]); // 801D123C
  if (!crb(c,2)) { goto L_801D1258; } // 801D1240
  c->r[0]=R8(c->r[3]+0x00000001u); // 801D1244
  cmpu(c,0,c->r[0],0x000000FFu); // 801D1248
  if (crb(c,2)) { goto L_801D1268; } // 801D124C
  cmpu(c,0,c->r[27],c->r[0]); // 801D1250
  if (crb(c,2)) { goto L_801D1268; } // 801D1254
L_801D1258:;
  c->r[30]=c->r[30]+0x00000001u; // 801D1258
L_801D125C:;
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 801D125C
  cmpu(c,0,c->r[0],c->r[4]); // 801D1260
  if (!crb(c,1)) { IRQCHK(c); goto L_801D1228; } // 801D1264
L_801D1268:;
  c->r[0]=R8(c->r[5]+0x00000001u); // 801D1268
  c->r[3]=rotl(c->r[30],0)&0x000000FFu; // 801D126C
  cmpu(c,0,c->r[3],c->r[0]); // 801D1270
  if (crb(c,1)) { goto L_801D14E4; } // 801D1274
  c->r[23]=0u+0x80480000u; // 801D1278
  c->r[31]=0u+0x00000000u; // 801D127C
  c->r[23]=c->r[23]+0x00003174u; // 801D1280
L_801D1284:;
  c->r[29]=rotl(c->r[31],5)&0x00001FE0u; // 801D1284
  c->r[24]=c->r[23]+c->r[29]; // 801D1288
  c->r[0]=R8(c->r[24]+0x000000B6u); // 801D128C
  cmps(c,0,(int32_t)c->r[0],0); // 801D1290
  if (crb(c,2)) { goto L_801D12C4; } // 801D1294
  c->r[4]=c->r[28]|c->r[28]; // 801D1298
  c->r[3]=c->r[24]+0x000000B0u; // 801D129C
  c->lr=0x801D12A4u; f_801CE098(c); // 801D12A0
  cmps(c,0,(int32_t)c->r[3],0); // 801D12A4
  if (!crb(c,2)) { goto L_801D12C4; } // 801D12A8
  c->r[3]=c->r[24]|c->r[24]; // 801D12AC
  c->r[3]=c->r[3]+0x00000098u; // 801D12B0
  c->lr=0x801D12B8u; f_801CE54C(c); // 801D12B4
  c->r[0]=0u+0x00000000u; // 801D12B8
  W8(c->r[24]+0x000000B6u,c->r[0]); // 801D12BC
  goto L_801D12D0; // 801D12C0
L_801D12C4:;
  c->r[31]=c->r[31]+0x00000001u; // 801D12C4
  cmpu(c,0,c->r[31],0x00000003u); // 801D12C8
  if (crb(c,0)) { IRQCHK(c); goto L_801D1284; } // 801D12CC
L_801D12D0:;
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 801D12D0
  c->r[3]=rotl(c->r[30],2)&0x000003FCu; // 801D12D4
  c->r[30]=c->r[3]-c->r[4]; // 801D12D8
  c->r[0]=R32(c->r[13]+0xFFFF8EC8u); // 801D12DC
  c->r[4]=R32(c->r[13]+0xFFFF8ECCu); // 801D12E0
  c->r[31]=rotl(c->r[25],3)&0x000007F8u; // 801D12E4
  c->r[3]=c->r[0]+c->r[30]; // 801D12E8
  c->r[0]=R8(c->r[3]+0x00000002u); // 801D12EC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)74); // 801D12F0
  c->r[0]=c->r[4]+c->r[0]; // 801D12F4
  c->r[3]=c->r[0]+c->r[31]; // 801D12F8
  c->r[0]=R8(c->r[3]+0x00000002u); // 801D12FC
  cmps(c,0,(int32_t)c->r[0],0); // 801D1300
  if (crb(c,2)) { goto L_801D14E4; } // 801D1304
  c->r[23]=0u+0x80480000u; // 801D1308
  c->r[29]=0u+0x00000000u; // 801D130C
  c->r[24]=c->r[23]+0x00003278u; // 801D1310
  goto L_801D1358; // 801D1314
L_801D1318:;
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 801D1318
  c->r[0]=rotl(c->r[29],3)&0x000007F8u; // 801D131C
  c->r[0]=c->r[0]+c->r[3]; // 801D1320
  c->r[3]=c->r[24]+c->r[0]; // 801D1324
  c->r[0]=R8(c->r[3]+0x00000007u); // 801D1328
  cmpu(c,0,c->r[26],c->r[0]); // 801D132C
  if (!crb(c,2)) { goto L_801D1354; } // 801D1330
  c->r[0]=R8(c->r[3]+0x00000008u); // 801D1334
  cmpu(c,0,c->r[27],c->r[0]); // 801D1338
  if (!crb(c,2)) { goto L_801D1354; } // 801D133C
  c->r[4]=c->r[28]|c->r[28]; // 801D1340
  c->r[3]=c->r[3]+0x00000001u; // 801D1344
  c->lr=0x801D134Cu; f_801CE098(c); // 801D1348
  cmps(c,0,(int32_t)c->r[3],0); // 801D134C
  if (crb(c,2)) { goto L_801D1368; } // 801D1350
L_801D1354:;
  c->r[29]=c->r[29]+0x00000001u; // 801D1354
L_801D1358:;
  c->r[0]=R8(c->r[23]+0x00003278u); // 801D1358
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 801D135C
  cmpu(c,0,c->r[3],c->r[0]); // 801D1360
  if (crb(c,0)) { IRQCHK(c); goto L_801D1318; } // 801D1364
L_801D1368:;
  c->r[0]=R32(c->r[13]+0xFFFF8EC8u); // 801D1368
  c->r[4]=R32(c->r[13]+0xFFFF8ECCu); // 801D136C
  c->r[3]=c->r[0]+c->r[30]; // 801D1370
  c->r[0]=R8(c->r[3]+0x00000002u); // 801D1374
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)74); // 801D1378
  c->r[0]=c->r[4]+c->r[0]; // 801D137C
  c->r[3]=c->r[0]+c->r[31]; // 801D1380
  c->r[0]=R8(c->r[3]+0x00000002u); // 801D1384
  cmpu(c,0,c->r[0],0x00000010u); // 801D1388
  if (!crb(c,2)) { goto L_801D13FC; } // 801D138C
  c->r[27]=0u+0x80480000u; // 801D1390
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 801D1394
  c->r[0]=R8(c->r[27]+0x00003278u); // 801D1398
  cmpu(c,0,c->r[3],c->r[0]); // 801D139C
  if (crb(c,2)) { goto L_801D1468; } // 801D13A0
  c->r[26]=c->r[27]+0x00003278u; // 801D13A4
  goto L_801D13E0; // 801D13A8
L_801D13AC:;
  c->r[6]=rotl(c->r[29],0)&0x000000FFu; // 801D13AC
  c->r[4]=rotl(c->r[29],3)&0x000007F8u; // 801D13B0
  c->r[3]=c->r[6]+0x00000001u; // 801D13B4
  c->r[5]=0u+0x00000009u; // 801D13B8
  c->r[0]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801D13BC
  c->r[4]=c->r[4]+c->r[6]; // 801D13C0
  c->r[0]=c->r[0]+c->r[3]; // 801D13C4
  c->r[3]=c->r[26]+c->r[4]; // 801D13C8
  c->r[4]=c->r[26]+c->r[0]; // 801D13CC
  c->r[3]=c->r[3]+0x00000001u; // 801D13D0
  c->r[4]=c->r[4]+0x00000001u; // 801D13D4
  c->lr=0x801D13DCu; f_80004000(c); // 801D13D8
  c->r[29]=c->r[29]+0x00000001u; // 801D13DC
L_801D13E0:;
  c->r[3]=R8(c->r[27]+0x00003278u); // 801D13E0
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 801D13E4
  cmpu(c,0,c->r[0],c->r[3]); // 801D13E8
  if (crb(c,0)) { IRQCHK(c); goto L_801D13AC; } // 801D13EC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801D13F0
  W8(c->r[27]+0x00003278u,c->r[0]); // 801D13F4
  goto L_801D1468; // 801D13F8
L_801D13FC:;
  c->r[30]=0u+0x80480000u; // 801D13FC
  c->r[4]=rotl(c->r[29],0)&0x000000FFu; // 801D1400
  c->r[0]=R8(c->r[30]+0x00003278u); // 801D1404
  cmpu(c,0,c->r[4],c->r[0]); // 801D1408
  if (!crb(c,2)) { goto L_801D1468; } // 801D140C
  cmpu(c,0,c->r[0],0x00000005u); // 801D1410
  if (!crb(c,2)) { goto L_801D1438; } // 801D1414
  c->r[0]=R8(c->r[13]+0xFFFF9AF8u); // 801D1418
  cmpu(c,0,c->r[0],0x00000002u); // 801D141C
  if (crb(c,0)) { goto L_801D14E4; } // 801D1420
  c->r[4]=0u+0x803A0000u; // 801D1424
  c->r[3]=0u+0x00000501u; // 801D1428
  c->r[4]=c->r[4]+0xFFFFE4D8u; // 801D142C
  c->lr=0x801D1434u; f_801CD9D0(c); // 801D1430
  goto L_801D14E4; // 801D1434
L_801D1438:;
  c->r[3]=rotl(c->r[29],3)&0x000007F8u; // 801D1438
  c->r[0]=c->r[30]+0x00003278u; // 801D143C
  c->r[3]=c->r[3]+c->r[4]; // 801D1440
  c->r[4]=c->r[28]|c->r[28]; // 801D1444
  c->r[5]=c->r[0]+c->r[3]; // 801D1448
  W8(c->r[5]+0x00000007u,c->r[26]); // 801D144C
  c->r[3]=c->r[5]+0x00000001u; // 801D1450
  W8(c->r[5]+0x00000008u,c->r[27]); // 801D1454
  c->lr=0x801D145Cu; f_801CE064(c); // 801D1458
  c->r[3]=R8(c->r[30]+0x00003278u); // 801D145C
  c->r[0]=c->r[3]+0x00000001u; // 801D1460
  W8(c->r[30]+0x00003278u,c->r[0]); // 801D1464
L_801D1468:;
  c->r[3]=0u+0x80480000u; // 801D1468
  c->r[24]=0u+0x00000000u; // 801D146C
  c->r[26]=c->r[3]+0x00003174u; // 801D1470
  goto L_801D14AC; // 801D1474
L_801D1478:;
  c->r[0]=rotl(c->r[24],0)&0x000000FFu; // 801D1478
  c->r[4]=c->r[28]|c->r[28]; // 801D147C
  c->r[23]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 801D1480
  c->r[3]=c->r[26]+c->r[23]; // 801D1484
  c->lr=0x801D148Cu; f_801CE098(c); // 801D1488
  cmps(c,0,(int32_t)c->r[3],0); // 801D148C
  if (!crb(c,2)) { goto L_801D14A8; } // 801D1490
  c->r[3]=c->r[26]+c->r[23]; // 801D1494
  c->r[0]=0u+0x00000000u; // 801D1498
  W8(c->r[3]+0x00000009u,c->r[0]); // 801D149C
  W8(c->r[3]+0x0000000Au,c->r[0]); // 801D14A0
  goto L_801D14BC; // 801D14A4
L_801D14A8:;
  c->r[24]=c->r[24]+0x00000001u; // 801D14A8
L_801D14AC:;
  c->r[0]=R8(c->r[26]+0x0000004Du); // 801D14AC
  c->r[3]=rotl(c->r[24],0)&0x000000FFu; // 801D14B0
  cmpu(c,0,c->r[3],c->r[0]); // 801D14B4
  if (crb(c,0)) { IRQCHK(c); goto L_801D1478; } // 801D14B8
L_801D14BC:;
  c->r[6]=0u+0x80480000u; // 801D14BC
  c->r[5]=rotl(c->r[29],0)&0x000000FFu; // 801D14C0
  c->r[0]=rotl(c->r[29],3)&0x000007F8u; // 801D14C4
  c->r[3]=c->r[28]|c->r[28]; // 801D14C8
  c->r[6]=c->r[6]+0x00003278u; // 801D14CC
  c->r[4]=0u+0x00000000u; // 801D14D0
  c->r[0]=c->r[0]+c->r[5]; // 801D14D4
  c->r[5]=c->r[6]+c->r[0]; // 801D14D8
  W8(c->r[5]+0x00000009u,c->r[25]); // 801D14DC
  c->lr=0x801D14E4u; f_801D14FC(c); // 801D14E0
L_801D14E4:;
  c->r[11]=c->r[1]+0x00000040u; // 801D14E4
  c->lr=0x801D14ECu; f_800C2E88(c); // 801D14E8
  c->r[0]=R32(c->r[1]+0x00000044u); // 801D14EC
  c->lr=c->r[0]; // 801D14F0
  c->r[1]=c->r[1]+0x00000040u; // 801D14F4
  return; // 801D14F8
}

// bta_dm_pm_set_mode
void f_801D14FC(Ctx* __restrict c) {
  trace_call(0x801D14FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D14FC
  c->r[0]=c->lr; // 801D1500
  W32(c->r[1]+0x00000054u,c->r[0]); // 801D1504
  c->r[11]=c->r[1]+0x00000050u; // 801D1508
  c->lr=0x801D1510u; f_800C2E30(c); // 801D150C
  c->r[5]=0u+0x80480000u; // 801D1510
  c->r[20]=c->r[3]|c->r[3]; // 801D1514
  c->r[28]=c->r[5]+0x00003174u; // 801D1518
  c->r[21]=c->r[4]|c->r[4]; // 801D151C
  c->r[0]=R8(c->r[28]+0x0000004Du); // 801D1520
  c->r[27]=0u+0x00000000u; // 801D1524
  c->r[26]=0u+0x00000000u; // 801D1528
  c->r[25]=0u+0x00000000u; // 801D152C
  cmps(c,0,(int32_t)c->r[0],0); // 801D1530
  c->r[24]=0u+0x00000000u; // 801D1534
  c->r[23]=0u+0x00000000u; // 801D1538
  c->r[22]=0u+0x00000000u; // 801D153C
  if (crb(c,2)) { goto L_801D1864; } // 801D1540
  c->r[30]=0u+0x00000000u; // 801D1544
  goto L_801D1578; // 801D1548
L_801D154C:;
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 801D154C
  c->r[4]=c->r[20]|c->r[20]; // 801D1550
  c->r[29]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 801D1554
  c->r[3]=c->r[28]+c->r[29]; // 801D1558
  c->lr=0x801D1560u; f_801CE098(c); // 801D155C
  cmps(c,0,(int32_t)c->r[3],0); // 801D1560
  if (!crb(c,2)) { goto L_801D1574; } // 801D1564
  c->r[24]=c->r[28]+c->r[29]; // 801D1568
  c->r[25]=R8(c->r[24]+0x0000000Au); // 801D156C
  goto L_801D1588; // 801D1570
L_801D1574:;
  c->r[30]=c->r[30]+0x00000001u; // 801D1574
L_801D1578:;
  c->r[0]=R8(c->r[28]+0x0000004Du); // 801D1578
  c->r[3]=rotl(c->r[30],0)&0x000000FFu; // 801D157C
  cmpu(c,0,c->r[3],c->r[0]); // 801D1580
  if (crb(c,0)) { IRQCHK(c); goto L_801D154C; } // 801D1584
L_801D1588:;
  cmps(c,0,(int32_t)c->r[24],0); // 801D1588
  if (crb(c,2)) { goto L_801D1864; } // 801D158C
  c->r[30]=0u+0x80480000u; // 801D1590
  c->r[28]=0u+0x00000000u; // 801D1594
  c->r[31]=c->r[30]+0x00003278u; // 801D1598
  goto L_801D16CC; // 801D159C
L_801D15A0:;
  c->r[3]=rotl(c->r[28],0)&0x000000FFu; // 801D15A0
  c->r[0]=rotl(c->r[28],3)&0x000007F8u; // 801D15A4
  c->r[29]=c->r[0]+c->r[3]; // 801D15A8
  c->r[4]=c->r[20]|c->r[20]; // 801D15AC
  c->r[3]=c->r[31]+c->r[29]; // 801D15B0
  c->r[3]=c->r[3]+0x00000001u; // 801D15B4
  c->lr=0x801D15BCu; f_801CE098(c); // 801D15B8
  cmps(c,0,(int32_t)c->r[3],0); // 801D15BC
  if (!crb(c,2)) { goto L_801D16C8; } // 801D15C0
  c->r[7]=R32(c->r[13]+0xFFFF8EC8u); // 801D15C4
  c->r[8]=c->r[31]+c->r[29]; // 801D15C8
  c->r[3]=R8(c->r[8]+0x00000008u); // 801D15CC
  c->r[9]=0u+0x00000001u; // 801D15D0
  c->r[6]=R8(c->r[7]+0x00000001u); // 801D15D4
  c->r[4]=R8(c->r[8]+0x00000007u); // 801D15D8
  goto L_801D1614; // 801D15DC
L_801D15E0:;
  c->r[5]=rotl(c->r[9],0)&0x000000FFu; // 801D15E0
  c->r[0]=rotl(c->r[9],2)&0x000003FCu; // 801D15E4
  c->r[0]=c->r[0]-c->r[5]; // 801D15E8
  c->r[5]=c->r[7]+c->r[0]; // 801D15EC
  c->r[0]=R8(c->r[7]+c->r[0]); // 801D15F0
  cmpu(c,0,c->r[0],c->r[4]); // 801D15F4
  if (!crb(c,2)) { goto L_801D1610; } // 801D15F8
  c->r[0]=R8(c->r[5]+0x00000001u); // 801D15FC
  cmpu(c,0,c->r[0],0x000000FFu); // 801D1600
  if (crb(c,2)) { goto L_801D1620; } // 801D1604
  cmpu(c,0,c->r[0],c->r[3]); // 801D1608
  if (crb(c,2)) { goto L_801D1620; } // 801D160C
L_801D1610:;
  c->r[9]=c->r[9]+0x00000001u; // 801D1610
L_801D1614:;
  c->r[0]=rotl(c->r[9],0)&0x000000FFu; // 801D1614
  cmpu(c,0,c->r[0],c->r[6]); // 801D1618
  if (!crb(c,1)) { IRQCHK(c); goto L_801D15E0; } // 801D161C
L_801D1620:;
  c->r[3]=rotl(c->r[9],0)&0x000000FFu; // 801D1620
  c->r[0]=rotl(c->r[9],2)&0x000003FCu; // 801D1624
  c->r[3]=c->r[0]-c->r[3]; // 801D1628
  c->r[0]=R8(c->r[8]+0x00000009u); // 801D162C
  c->r[4]=c->r[7]+c->r[3]; // 801D1630
  c->r[3]=R32(c->r[13]+0xFFFF8ECCu); // 801D1634
  c->r[4]=R8(c->r[4]+0x00000002u); // 801D1638
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801D163C
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)74); // 801D1640
  c->r[5]=c->r[3]+c->r[4]; // 801D1644
  c->r[3]=c->r[5]+c->r[0]; // 801D1648
  c->r[0]=R8(c->r[5]+0x00000000u); // 801D164C
  c->r[4]=R8(c->r[3]+0x00000002u); // 801D1650
  c->r[23]=c->r[23]|c->r[0]; // 801D1654
  c->r[0]=c->r[25]&c->r[4]; cr0(c,c->r[0]); // 801D1658
  if (!crb(c,2)) { goto L_801D1690; } // 801D165C
  c->r[3]=c->r[31]+c->r[29]; // 801D1660
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 801D1664
  c->r[3]=R8(c->r[3]+0x00000009u); // 801D1668
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 801D166C
  c->r[5]=c->r[5]+c->r[3]; // 801D1670
  c->r[3]=R8(c->r[5]+0x00000002u); // 801D1674
  cmpu(c,0,c->r[3],c->r[0]); // 801D1678
  c->r[22]=c->r[22]|c->r[3]; // 801D167C
  if (!crb(c,1)) { goto L_801D16C8; } // 801D1680
  c->r[26]=R16(c->r[5]+0x00000004u); // 801D1684
  c->r[27]=c->r[4]|c->r[4]; // 801D1688
  goto L_801D16C8; // 801D168C
L_801D1690:;
  c->r[3]=R8(c->r[3]+0x00000006u); // 801D1690
  c->r[0]=c->r[25]&c->r[3]; cr0(c,c->r[0]); // 801D1694
  if (!crb(c,2)) { goto L_801D16C8; } // 801D1698
  c->r[4]=c->r[31]+c->r[29]; // 801D169C
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 801D16A0
  c->r[4]=R8(c->r[4]+0x00000009u); // 801D16A4
  c->r[4]=rotl(c->r[4],3)&0xFFFFFFF8u; // 801D16A8
  c->r[5]=c->r[5]+c->r[4]; // 801D16AC
  c->r[4]=R8(c->r[5]+0x00000006u); // 801D16B0
  cmpu(c,0,c->r[4],c->r[0]); // 801D16B4
  c->r[22]=c->r[22]|c->r[4]; // 801D16B8
  if (!crb(c,1)) { goto L_801D16C8; } // 801D16BC
  c->r[27]=c->r[3]|c->r[3]; // 801D16C0
  c->r[26]=R16(c->r[5]+0x00000008u); // 801D16C4
L_801D16C8:;
  c->r[28]=c->r[28]+0x00000001u; // 801D16C8
L_801D16CC:;
  c->r[0]=R8(c->r[30]+0x00003278u); // 801D16CC
  c->r[3]=rotl(c->r[28],0)&0x000000FFu; // 801D16D0
  cmpu(c,0,c->r[3],c->r[0]); // 801D16D4
  if (crb(c,0)) { IRQCHK(c); goto L_801D15A0; } // 801D16D8
  c->r[0]=rotl(c->r[27],0)&0x00000003u; cr0(c,c->r[0]); // 801D16DC
  if (crb(c,2)) { goto L_801D1704; } // 801D16E0
  c->r[3]=rotl(c->r[23],0)&0x000000FFu; // 801D16E4
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 801D16E8
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 801D16EC
  if (!crb(c,2)) { goto L_801D1704; } // 801D16F0
  c->r[0]=c->r[23]&c->r[22]; // 801D16F4
  c->r[27]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[27]); // 801D16F8
  if (!crb(c,2)) { goto L_801D1704; } // 801D16FC
  c->r[26]=0u+0x00000000u; // 801D1700
L_801D1704:;
  cmps(c,0,(int32_t)c->r[21],0); // 801D1704
  if (!crb(c,2)) { goto L_801D17A8; } // 801D1708
  cmps(c,0,(int32_t)c->r[26],0); // 801D170C
  if (crb(c,2)) { goto L_801D17A8; } // 801D1710
  c->r[21]=0u+0x80480000u; // 801D1714
  c->r[0]=0u+0x00000003u; // 801D1718
  c->r[21]=c->r[21]+0x00003174u; // 801D171C
  c->r[4]=0u+0x00000000u; // 801D1720
  c->ctr=c->r[0]; // 801D1724
L_801D1728:;
  c->r[22]=rotl(c->r[4],5)&0x00001FE0u; // 801D1728
  c->r[3]=c->r[21]+c->r[22]; // 801D172C
  c->r[0]=R8(c->r[3]+0x000000B6u); // 801D1730
  cmps(c,0,(int32_t)c->r[0],0); // 801D1734
  if (!crb(c,2)) { goto L_801D1774; } // 801D1738
  c->r[0]=0u+0x00000001u; // 801D173C
  c->r[4]=c->r[20]|c->r[20]; // 801D1740
  W8(c->r[3]+0x000000B6u,c->r[0]); // 801D1744
  c->r[3]=c->r[3]+0x000000B0u; // 801D1748
  c->lr=0x801D1750u; f_801CE064(c); // 801D174C
  c->r[4]=0u+0x801D0000u; // 801D1750
  c->r[3]=c->r[21]+c->r[22]; // 801D1754
  c->r[4]=c->r[4]+0x000018F4u; // 801D1758
  c->r[5]=c->r[26]|c->r[26]; // 801D175C
  W32(c->r[3]+0x000000A0u,c->r[4]); // 801D1760
  c->r[3]=c->r[3]+0x00000098u; // 801D1764
  c->r[4]=0u+0x00000000u; // 801D1768
  c->lr=0x801D1770u; f_801CE52C(c); // 801D176C
  goto L_801D1864; // 801D1770
L_801D1774:;
  c->r[4]=c->r[4]+0x00000001u; // 801D1774
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 801D1778
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D1728; } // 801D177C
  cmpu(c,0,c->r[0],0x00000003u); // 801D1780
  if (!crb(c,2)) { goto L_801D17A8; } // 801D1784
  c->r[0]=R8(c->r[13]+0xFFFF9AF8u); // 801D1788
  cmpu(c,0,c->r[0],0x00000002u); // 801D178C
  if (crb(c,0)) { goto L_801D1864; } // 801D1790
  c->r[4]=0u+0x803A0000u; // 801D1794
  c->r[3]=0u+0x00000501u; // 801D1798
  c->r[4]=c->r[4]+0xFFFFE504u; // 801D179C
  c->lr=0x801D17A4u; f_801CD9D0(c); // 801D17A0
  goto L_801D1864; // 801D17A4
L_801D17A8:;
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; cr0(c,c->r[0]); // 801D17A8
  if (crb(c,2)) { goto L_801D1864; } // 801D17AC
  cmpu(c,0,c->r[0],0x00000001u); // 801D17B0
  if (!crb(c,2)) { goto L_801D17F8; } // 801D17B4
  c->r[0]=0u+0x00000001u; // 801D17B8
  c->r[3]=c->r[20]|c->r[20]; // 801D17BC
  W8(c->r[24]+0x00000009u,c->r[0]); // 801D17C0
  c->r[4]=c->r[1]+0x00000009u; // 801D17C4
  c->lr=0x801D17CCu; f_801D9B7C(c); // 801D17C8
  c->r[0]=R8(c->r[1]+0x00000009u); // 801D17CC
  cmpu(c,0,c->r[0],0x00000003u); // 801D17D0
  if (crb(c,2)) { goto L_801D1864; } // 801D17D4
  c->r[3]=0u+0x80480000u; // 801D17D8
  c->r[5]=R32(c->r[13]+0xFFFF8ED0u); // 801D17DC
  c->r[3]=c->r[3]+0x00003174u; // 801D17E0
  c->r[4]=c->r[20]|c->r[20]; // 801D17E4
  c->r[3]=R8(c->r[3]+0x00000095u); // 801D17E8
  c->r[5]=c->r[5]+0x0000000Au; // 801D17EC
  c->lr=0x801D17F4u; f_801D99AC(c); // 801D17F0
  goto L_801D1864; // 801D17F4
L_801D17F8:;
  cmpu(c,0,c->r[0],0x00000002u); // 801D17F8
  if (!crb(c,2)) { goto L_801D183C; } // 801D17FC
  c->r[0]=0u+0x00000002u; // 801D1800
  c->r[3]=c->r[20]|c->r[20]; // 801D1804
  W8(c->r[24]+0x00000009u,c->r[0]); // 801D1808
  c->r[4]=c->r[1]+0x00000008u; // 801D180C
  c->lr=0x801D1814u; f_801D9B7C(c); // 801D1810
  c->r[0]=R8(c->r[1]+0x00000008u); // 801D1814
  cmpu(c,0,c->r[0],0x00000002u); // 801D1818
  if (crb(c,2)) { goto L_801D1864; } // 801D181C
  c->r[3]=0u+0x80480000u; // 801D1820
  c->r[5]=R32(c->r[13]+0xFFFF8ED0u); // 801D1824
  c->r[3]=c->r[3]+0x00003174u; // 801D1828
  c->r[4]=c->r[20]|c->r[20]; // 801D182C
  c->r[3]=R8(c->r[3]+0x00000095u); // 801D1830
  c->lr=0x801D1838u; f_801D99AC(c); // 801D1834
  goto L_801D1864; // 801D1838
L_801D183C:;
  cmpu(c,0,c->r[0],0x00000004u); // 801D183C
  if (!crb(c,2)) { goto L_801D1864; } // 801D1840
  c->r[3]=0u+0x80480000u; // 801D1844
  c->r[0]=0u+0x00000000u; // 801D1848
  c->r[3]=c->r[3]+0x00003174u; // 801D184C
  W8(c->r[1]+0x00000014u,c->r[0]); // 801D1850
  c->r[3]=R8(c->r[3]+0x00000095u); // 801D1854
  c->r[4]=c->r[20]|c->r[20]; // 801D1858
  c->r[5]=c->r[1]+0x0000000Cu; // 801D185C
  c->lr=0x801D1864u; f_801D99AC(c); // 801D1860
L_801D1864:;
  c->r[11]=c->r[1]+0x00000050u; // 801D1864
  c->lr=0x801D186Cu; f_800C2E7C(c); // 801D1868
  c->r[0]=R32(c->r[1]+0x00000054u); // 801D186C
  c->lr=c->r[0]; // 801D1870
  c->r[1]=c->r[1]+0x00000050u; // 801D1874
  return; // 801D1878
}

// bta_dm_pm_btm_cback
void f_801D187C(Ctx* __restrict c) {
  trace_call(0x801D187Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D187C
  c->r[0]=c->lr; // 801D1880
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D1884
  c->r[11]=c->r[1]+0x00000020u; // 801D1888
  c->lr=0x801D1890u; f_800C2E4C(c); // 801D188C
  c->r[27]=c->r[3]|c->r[3]; // 801D1890
  c->r[28]=c->r[4]|c->r[4]; // 801D1894
  c->r[29]=c->r[5]|c->r[5]; // 801D1898
  c->r[30]=c->r[6]|c->r[6]; // 801D189C
  c->r[3]=0u+0x00000014u; // 801D18A0
  c->lr=0x801D18A8u; f_801CAC80(c); // 801D18A4
  cmps(c,0,(int32_t)c->r[3],0); // 801D18A8
  c->r[31]=c->r[3]|c->r[3]; // 801D18AC
  if (crb(c,2)) { goto L_801D18DC; } // 801D18B0
  c->r[0]=0u+0x00000109u; // 801D18B4
  c->r[4]=c->r[27]|c->r[27]; // 801D18B8
  W16(c->r[3]+0x00000000u,c->r[0]); // 801D18BC
  W8(c->r[3]+0x0000000Eu,c->r[28]); // 801D18C0
  W16(c->r[3]+0x00000010u,c->r[29]); // 801D18C4
  W8(c->r[3]+0x00000012u,c->r[30]); // 801D18C8
  c->r[3]=c->r[3]+0x00000008u; // 801D18CC
  c->lr=0x801D18D4u; f_801CE064(c); // 801D18D0
  c->r[3]=c->r[31]|c->r[31]; // 801D18D4
  c->lr=0x801D18DCu; f_801CE510(c); // 801D18D8
L_801D18DC:;
  c->r[11]=c->r[1]+0x00000020u; // 801D18DC
  c->lr=0x801D18E4u; f_800C2E98(c); // 801D18E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D18E4
  c->lr=c->r[0]; // 801D18E8
  c->r[1]=c->r[1]+0x00000020u; // 801D18EC
  return; // 801D18F0
}

// bta_dm_pm_timer_cback
void f_801D18F4(Ctx* __restrict c) {
  trace_call(0x801D18F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D18F4
  c->r[0]=c->lr; // 801D18F8
  c->r[4]=0u+0x80480000u; // 801D18FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D1900
  c->r[4]=c->r[4]+0x00003174u; // 801D1904
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D1908
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D190C
  c->r[30]=0u+0x00000000u; // 801D1910
  c->r[0]=R8(c->r[4]+0x000000B6u); // 801D1914
  cmps(c,0,(int32_t)c->r[0],0); // 801D1918
  if (crb(c,2)) { goto L_801D1938; } // 801D191C
  c->r[0]=c->r[4]+0x00000098u; // 801D1920
  cmpu(c,0,c->r[0],c->r[3]); // 801D1924
  if (!crb(c,2)) { goto L_801D1938; } // 801D1928
  c->r[0]=0u+0x00000000u; // 801D192C
  W8(c->r[4]+0x000000B6u,c->r[0]); // 801D1930
  goto L_801D198C; // 801D1934
L_801D1938:;
  c->r[0]=R8(c->r[4]+0x000000D6u); // 801D1938
  c->r[30]=0u+0x00000001u; // 801D193C
  cmps(c,0,(int32_t)c->r[0],0); // 801D1940
  if (crb(c,2)) { goto L_801D1960; } // 801D1944
  c->r[0]=c->r[4]+0x000000B8u; // 801D1948
  cmpu(c,0,c->r[0],c->r[3]); // 801D194C
  if (!crb(c,2)) { goto L_801D1960; } // 801D1950
  c->r[0]=0u+0x00000000u; // 801D1954
  W8(c->r[4]+0x000000D6u,c->r[0]); // 801D1958
  goto L_801D198C; // 801D195C
L_801D1960:;
  c->r[0]=R8(c->r[4]+0x000000F6u); // 801D1960
  c->r[30]=0u+0x00000002u; // 801D1964
  cmps(c,0,(int32_t)c->r[0],0); // 801D1968
  if (crb(c,2)) { goto L_801D1988; } // 801D196C
  c->r[0]=c->r[4]+0x000000D8u; // 801D1970
  cmpu(c,0,c->r[0],c->r[3]); // 801D1974
  if (!crb(c,2)) { goto L_801D1988; } // 801D1978
  c->r[0]=0u+0x00000000u; // 801D197C
  W8(c->r[4]+0x000000F6u,c->r[0]); // 801D1980
  goto L_801D198C; // 801D1984
L_801D1988:;
  c->r[30]=0u+0x00000003u; // 801D1988
L_801D198C:;
  cmpu(c,0,c->r[30],0x00000003u); // 801D198C
  if (crb(c,2)) { goto L_801D19D4; } // 801D1990
  c->r[3]=0u+0x0000000Eu; // 801D1994
  c->lr=0x801D199Cu; f_801CAC80(c); // 801D1998
  cmps(c,0,(int32_t)c->r[3],0); // 801D199C
  c->r[31]=c->r[3]|c->r[3]; // 801D19A0
  if (crb(c,2)) { goto L_801D19D4; } // 801D19A4
  c->r[4]=0u+0x80480000u; // 801D19A8
  c->r[5]=0u+0x0000010Au; // 801D19AC
  c->r[4]=c->r[4]+0x00003174u; // 801D19B0
  c->r[0]=rotl(c->r[30],5)&0x00001FE0u; // 801D19B4
  W16(c->r[3]+0x00000000u,c->r[5]); // 801D19B8
  c->r[4]=c->r[4]+c->r[0]; // 801D19BC
  c->r[4]=c->r[4]+0x000000B0u; // 801D19C0
  c->r[3]=c->r[3]+0x00000008u; // 801D19C4
  c->lr=0x801D19CCu; f_801CE064(c); // 801D19C8
  c->r[3]=c->r[31]|c->r[31]; // 801D19CC
  c->lr=0x801D19D4u; f_801CE510(c); // 801D19D0
L_801D19D4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D19D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D19D8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D19DC
  c->lr=c->r[0]; // 801D19E0
  c->r[1]=c->r[1]+0x00000010u; // 801D19E4
  return; // 801D19E8
}

// bta_dm_pm_btm_status
void f_801D19EC(Ctx* __restrict c) {
  trace_call(0x801D19ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D19EC
  c->r[0]=c->lr; // 801D19F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D19F4
  c->r[11]=c->r[1]+0x00000020u; // 801D19F8
  c->lr=0x801D1A00u; f_800C2E4C(c); // 801D19FC
  c->r[30]=0u+0x80480000u; // 801D1A00
  c->r[31]=c->r[3]|c->r[3]; // 801D1A04
  c->r[30]=c->r[30]+0x00003174u; // 801D1A08
  c->r[27]=0u+0x00000000u; // 801D1A0C
L_801D1A10:;
  c->r[28]=rotl(c->r[27],5)&0x00001FE0u; // 801D1A10
  c->r[29]=c->r[30]+c->r[28]; // 801D1A14
  c->r[0]=R8(c->r[29]+0x000000B6u); // 801D1A18
  cmps(c,0,(int32_t)c->r[0],0); // 801D1A1C
  if (crb(c,2)) { goto L_801D1A50; } // 801D1A20
  c->r[3]=c->r[29]+0x000000B0u; // 801D1A24
  c->r[4]=c->r[31]+0x00000008u; // 801D1A28
  c->lr=0x801D1A30u; f_801CE098(c); // 801D1A2C
  cmps(c,0,(int32_t)c->r[3],0); // 801D1A30
  if (!crb(c,2)) { goto L_801D1A50; } // 801D1A34
  c->r[3]=c->r[29]|c->r[29]; // 801D1A38
  c->r[3]=c->r[3]+0x00000098u; // 801D1A3C
  c->lr=0x801D1A44u; f_801CE54C(c); // 801D1A40
  c->r[0]=0u+0x00000000u; // 801D1A44
  W8(c->r[29]+0x000000B6u,c->r[0]); // 801D1A48
  goto L_801D1A5C; // 801D1A4C
L_801D1A50:;
  c->r[27]=c->r[27]+0x00000001u; // 801D1A50
  cmpu(c,0,c->r[27],0x00000003u); // 801D1A54
  if (crb(c,0)) { IRQCHK(c); goto L_801D1A10; } // 801D1A58
L_801D1A5C:;
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 801D1A5C
  cmps(c,0,(int32_t)c->r[0],0); // 801D1A60
  if (crb(c,2)) { goto L_801D1A6C; } // 801D1A64
  goto L_801D1AF4; // 801D1A68
L_801D1A6C:;
  c->r[0]=R8(c->r[31]+0x00000012u); // 801D1A6C
  cmps(c,0,(int32_t)c->r[0],0); // 801D1A70
  if (crb(c,2)) { goto L_801D1AE8; } // 801D1A74
  c->r[3]=0u+0x80480000u; // 801D1A78
  c->r[29]=0u+0x00000000u; // 801D1A7C
  c->r[30]=c->r[3]+0x00003174u; // 801D1A80
  goto L_801D1AD4; // 801D1A84
L_801D1A88:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 801D1A88
  c->r[4]=c->r[31]+0x00000008u; // 801D1A8C
  c->r[28]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 801D1A90
  c->r[3]=c->r[30]+c->r[28]; // 801D1A94
  c->lr=0x801D1A9Cu; f_801CE098(c); // 801D1A98
  cmps(c,0,(int32_t)c->r[3],0); // 801D1A9C
  if (!crb(c,2)) { goto L_801D1AD0; } // 801D1AA0
  c->r[5]=c->r[30]+c->r[28]; // 801D1AA4
  c->r[0]=R8(c->r[5]+0x00000009u); // 801D1AA8
  c->r[6]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[6]); // 801D1AAC
  if (crb(c,2)) { goto L_801D1AF4; } // 801D1AB0
  c->r[0]=R8(c->r[5]+0x0000000Au); // 801D1AB4
  c->r[3]=c->r[31]+0x00000008u; // 801D1AB8
  c->r[4]=0u+0x00000000u; // 801D1ABC
  c->r[0]=c->r[0]|c->r[6]; // 801D1AC0
  W8(c->r[5]+0x0000000Au,c->r[0]); // 801D1AC4
  c->lr=0x801D1ACCu; f_801D14FC(c); // 801D1AC8
  goto L_801D1AF4; // 801D1ACC
L_801D1AD0:;
  c->r[29]=c->r[29]+0x00000001u; // 801D1AD0
L_801D1AD4:;
  c->r[0]=R8(c->r[30]+0x0000004Du); // 801D1AD4
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 801D1AD8
  cmpu(c,0,c->r[3],c->r[0]); // 801D1ADC
  if (crb(c,0)) { IRQCHK(c); goto L_801D1A88; } // 801D1AE0
  goto L_801D1AF4; // 801D1AE4
L_801D1AE8:;
  c->r[3]=c->r[31]+0x00000008u; // 801D1AE8
  c->r[4]=0u+0x00000000u; // 801D1AEC
  c->lr=0x801D1AF4u; f_801D14FC(c); // 801D1AF0
L_801D1AF4:;
  c->r[11]=c->r[1]+0x00000020u; // 801D1AF4
  c->lr=0x801D1AFCu; f_800C2E98(c); // 801D1AF8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D1AFC
  c->lr=c->r[0]; // 801D1B00
  c->r[1]=c->r[1]+0x00000020u; // 801D1B04
  return; // 801D1B08
}

// bta_dm_pm_timer
void f_801D1B0C(Ctx* __restrict c) {
  trace_call(0x801D1B0Cu);
  c->r[4]=0u+0x00000001u; // 801D1B0C
  c->r[3]=c->r[3]+0x00000008u; // 801D1B10
  f_801D14FC(c); return; // 801D1B14
}

// bta_hh_api_enable
void f_801D1B18(Ctx* __restrict c) {
  trace_call(0x801D1B18u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1B18
  c->r[0]=c->lr; // 801D1B1C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D1B20
  c->r[0]=0u+0x00000006u; // 801D1B24
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D1B28
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D1B2C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D1B30
  c->r[29]=c->r[3]|c->r[3]; // 801D1B34
  W8(c->r[1]+0x00000008u,c->r[0]); // 801D1B38
  c->lr=0x801D1B40u; f_801E3A8C(c); // 801D1B3C
  c->r[31]=0u+0x80480000u; // 801D1B40
  c->r[4]=0u+0x00000000u; // 801D1B44
  c->r[3]=c->r[31]+0x000032A8u; // 801D1B48
  c->r[5]=0u+0x00000230u; // 801D1B4C
  c->lr=0x801D1B54u; f_80004350(c); // 801D1B50
  c->r[4]=R8(c->r[29]+0x00000008u); // 801D1B54
  c->r[3]=c->r[13]+0xFFFF8F08u; // 801D1B58
  c->lr=0x801D1B60u; f_801E40CC(c); // 801D1B5C
  c->r[3]=0u+0x801D0000u; // 801D1B60
  c->r[3]=c->r[3]+0x00002FC8u; // 801D1B64
  c->lr=0x801D1B6Cu; f_801E3AD0(c); // 801D1B68
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D1B6C
  if (!crb(c,2)) { goto L_801D1C54; } // 801D1B70
  c->r[4]=R32(c->r[29]+0x00000030u); // 801D1B74
  c->r[12]=c->r[31]+0x000032A8u; // 801D1B78
  c->r[3]=0u+0x00000000u; // 801D1B7C
  c->r[0]=0u+0x00000002u; // 801D1B80
  W32(c->r[12]+0x00000224u,c->r[4]); // 801D1B84
  c->r[29]=0u+0x00000000u; // 801D1B88
  c->r[11]=0u+0x00000001u; // 801D1B8C
  c->r[10]=0u+0x000000FFu; // 801D1B90
  W8(c->r[1]+0x00000008u,c->r[3]); // 801D1B94
  c->r[9]=0u+0x00000010u; // 801D1B98
  c->ctr=c->r[0]; // 801D1B9C
L_801D1BA0:;
  c->r[3]=rotl(c->r[29],5)&0x00001FE0u; // 801D1BA0
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 801D1BA4
  c->r[31]=c->r[12]+c->r[3]; // 801D1BA8
  c->r[8]=c->r[29]+0x00000001u; // 801D1BAC
  W8(c->r[31]+0x0000002Cu,c->r[11]); // 801D1BB0
  c->r[30]=c->r[12]+c->r[0]; // 801D1BB4
  c->r[7]=c->r[29]+0x00000002u; // 801D1BB8
  c->r[6]=c->r[29]+0x00000003u; // 801D1BBC
  W8(c->r[31]+0x00000026u,c->r[10]); // 801D1BC0
  c->r[5]=c->r[29]+0x00000004u; // 801D1BC4
  c->r[4]=c->r[29]+0x00000005u; // 801D1BC8
  c->r[3]=c->r[29]+0x00000006u; // 801D1BCC
  W8(c->r[31]+0x00000022u,c->r[29]); // 801D1BD0
  c->r[0]=c->r[29]+0x00000007u; // 801D1BD4
  c->r[29]=c->r[29]+0x00000008u; // 801D1BD8
  W8(c->r[30]+0x00000214u,c->r[9]); // 801D1BDC
  W8(c->r[31]+0x0000004Cu,c->r[11]); // 801D1BE0
  W8(c->r[31]+0x00000046u,c->r[10]); // 801D1BE4
  W8(c->r[31]+0x00000042u,c->r[8]); // 801D1BE8
  W8(c->r[30]+0x00000215u,c->r[9]); // 801D1BEC
  W8(c->r[31]+0x0000006Cu,c->r[11]); // 801D1BF0
  W8(c->r[31]+0x00000066u,c->r[10]); // 801D1BF4
  W8(c->r[31]+0x00000062u,c->r[7]); // 801D1BF8
  W8(c->r[30]+0x00000216u,c->r[9]); // 801D1BFC
  W8(c->r[31]+0x0000008Cu,c->r[11]); // 801D1C00
  W8(c->r[31]+0x00000086u,c->r[10]); // 801D1C04
  W8(c->r[31]+0x00000082u,c->r[6]); // 801D1C08
  W8(c->r[30]+0x00000217u,c->r[9]); // 801D1C0C
  W8(c->r[31]+0x000000ACu,c->r[11]); // 801D1C10
  W8(c->r[31]+0x000000A6u,c->r[10]); // 801D1C14
  W8(c->r[31]+0x000000A2u,c->r[5]); // 801D1C18
  W8(c->r[30]+0x00000218u,c->r[9]); // 801D1C1C
  W8(c->r[31]+0x000000CCu,c->r[11]); // 801D1C20
  W8(c->r[31]+0x000000C6u,c->r[10]); // 801D1C24
  W8(c->r[31]+0x000000C2u,c->r[4]); // 801D1C28
  W8(c->r[30]+0x00000219u,c->r[9]); // 801D1C2C
  W8(c->r[31]+0x000000ECu,c->r[11]); // 801D1C30
  W8(c->r[31]+0x000000E6u,c->r[10]); // 801D1C34
  W8(c->r[31]+0x000000E2u,c->r[3]); // 801D1C38
  W8(c->r[30]+0x0000021Au,c->r[9]); // 801D1C3C
  W8(c->r[31]+0x0000010Cu,c->r[11]); // 801D1C40
  W8(c->r[31]+0x00000106u,c->r[10]); // 801D1C44
  W8(c->r[31]+0x00000102u,c->r[0]); // 801D1C48
  W8(c->r[30]+0x0000021Bu,c->r[9]); // 801D1C4C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D1BA0; } // 801D1C50
L_801D1C54:;
  c->r[5]=0u+0x80480000u; // 801D1C54
  c->r[4]=c->r[1]+0x00000008u; // 801D1C58
  c->r[5]=c->r[5]+0x000032A8u; // 801D1C5C
  c->r[3]=0u+0x00000000u; // 801D1C60
  c->r[12]=R32(c->r[5]+0x00000224u); // 801D1C64
  c->ctr=c->r[12]; // 801D1C68
  if (true) { c->lr=0x801D1C70u; dispatch(c,c->ctr); } // 801D1C6C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D1C70
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D1C74
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D1C78
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D1C7C
  c->lr=c->r[0]; // 801D1C80
  c->r[1]=c->r[1]+0x00000020u; // 801D1C84
  return; // 801D1C88
}

// bta_hh_api_disable
void f_801D1C8C(Ctx* __restrict c) {
  trace_call(0x801D1C8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1C8C
  c->r[0]=c->lr; // 801D1C90
  c->r[3]=0u+0x80480000u; // 801D1C94
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D1C98
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D1C9C
  c->r[31]=c->r[3]+0x000032A8u; // 801D1CA0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D1CA4
  c->r[0]=R32(c->r[31]+0x00000224u); // 801D1CA8
  cmps(c,0,(int32_t)c->r[0],0); // 801D1CAC
  if (crb(c,2)) { goto L_801D1D78; } // 801D1CB0
  c->r[0]=R8(c->r[31]+0x0000022Du); // 801D1CB4
  cmps(c,0,(int32_t)c->r[0],0); // 801D1CB8
  if (!crb(c,2)) { goto L_801D1D3C; } // 801D1CBC
  c->r[0]=0u+0x00000000u; // 801D1CC0
  W8(c->r[1]+0x00000008u,c->r[0]); // 801D1CC4
  c->lr=0x801D1CCCu; f_801E3B4C(c); // 801D1CC8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D1CCC
  if (crb(c,2)) { goto L_801D1CDC; } // 801D1CD0
  c->r[0]=0u+0x00000006u; // 801D1CD4
  W8(c->r[1]+0x00000008u,c->r[0]); // 801D1CD8
L_801D1CDC:;
  c->r[31]=0u+0x80480000u; // 801D1CDC
  c->r[30]=0u+0x00000000u; // 801D1CE0
  c->r[31]=c->r[31]+0x000032A8u; // 801D1CE4
L_801D1CE8:;
  c->r[0]=rotl(c->r[30],5)&0x00001FE0u; // 801D1CE8
  c->r[3]=c->r[31]+c->r[0]; // 801D1CEC
  c->r[3]=c->r[3]+0x00000014u; // 801D1CF0
  c->lr=0x801D1CF8u; f_801CE7B0(c); // 801D1CF4
  c->r[30]=c->r[30]+0x00000001u; // 801D1CF8
  cmpu(c,0,c->r[30],0x00000010u); // 801D1CFC
  if (crb(c,0)) { IRQCHK(c); goto L_801D1CE8; } // 801D1D00
  c->r[31]=0u+0x80480000u; // 801D1D04
  c->r[31]=c->r[31]+0x000032A8u; // 801D1D08
  c->r[3]=c->r[31]+0x00000228u; // 801D1D0C
  c->lr=0x801D1D14u; f_801CE7B0(c); // 801D1D10
  c->r[12]=R32(c->r[31]+0x00000224u); // 801D1D14
  c->r[4]=c->r[1]+0x00000008u; // 801D1D18
  c->r[3]=0u+0x00000001u; // 801D1D1C
  c->ctr=c->r[12]; // 801D1D20
  if (true) { c->lr=0x801D1D28u; dispatch(c,c->ctr); } // 801D1D24
  c->r[3]=c->r[31]|c->r[31]; // 801D1D28
  c->r[4]=0u+0x00000000u; // 801D1D2C
  c->r[5]=0u+0x00000230u; // 801D1D30
  c->lr=0x801D1D38u; f_80004350(c); // 801D1D34
  goto L_801D1D78; // 801D1D38
L_801D1D3C:;
  c->r[0]=0u+0x00000001u; // 801D1D3C
  c->r[30]=0u+0x00000000u; // 801D1D40
  W8(c->r[31]+0x0000022Eu,c->r[0]); // 801D1D44
L_801D1D48:;
  c->r[0]=rotl(c->r[30],5)&0x00001FE0u; // 801D1D48
  c->r[3]=c->r[31]+c->r[0]; // 801D1D4C
  c->r[0]=R8(c->r[3]+0x0000002Cu); // 801D1D50
  cmpu(c,0,c->r[0],0x00000003u); // 801D1D54
  if (!crb(c,2)) { goto L_801D1D6C; } // 801D1D58
  c->r[3]=c->r[3]+0x00000010u; // 801D1D5C
  c->r[4]=0u+0x00001701u; // 801D1D60
  c->r[5]=0u+0x00000000u; // 801D1D64
  c->lr=0x801D1D6Cu; f_801D3630(c); // 801D1D68
L_801D1D6C:;
  c->r[30]=c->r[30]+0x00000001u; // 801D1D6C
  cmpu(c,0,c->r[30],0x00000010u); // 801D1D70
  if (crb(c,0)) { IRQCHK(c); goto L_801D1D48; } // 801D1D74
L_801D1D78:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D1D78
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D1D7C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D1D80
  c->lr=c->r[0]; // 801D1D84
  c->r[1]=c->r[1]+0x00000020u; // 801D1D88
  return; // 801D1D8C
}

// bta_hh_disc_cmpl
void f_801D1D90(Ctx* __restrict c) {
  trace_call(0x801D1D90u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1D90
  c->r[0]=c->lr; // 801D1D94
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D1D98
  c->r[0]=0u+0x00000000u; // 801D1D9C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D1DA0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D1DA4
  W8(c->r[1]+0x00000008u,c->r[0]); // 801D1DA8
  c->lr=0x801D1DB0u; f_801E3B4C(c); // 801D1DAC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D1DB0
  if (crb(c,2)) { goto L_801D1DC0; } // 801D1DB4
  c->r[0]=0u+0x00000006u; // 801D1DB8
  W8(c->r[1]+0x00000008u,c->r[0]); // 801D1DBC
L_801D1DC0:;
  c->r[31]=0u+0x80480000u; // 801D1DC0
  c->r[30]=0u+0x00000000u; // 801D1DC4
  c->r[31]=c->r[31]+0x000032A8u; // 801D1DC8
L_801D1DCC:;
  c->r[0]=rotl(c->r[30],5)&0x00001FE0u; // 801D1DCC
  c->r[3]=c->r[31]+c->r[0]; // 801D1DD0
  c->r[3]=c->r[3]+0x00000014u; // 801D1DD4
  c->lr=0x801D1DDCu; f_801CE7B0(c); // 801D1DD8
  c->r[30]=c->r[30]+0x00000001u; // 801D1DDC
  cmpu(c,0,c->r[30],0x00000010u); // 801D1DE0
  if (crb(c,0)) { IRQCHK(c); goto L_801D1DCC; } // 801D1DE4
  c->r[31]=0u+0x80480000u; // 801D1DE8
  c->r[31]=c->r[31]+0x000032A8u; // 801D1DEC
  c->r[3]=c->r[31]+0x00000228u; // 801D1DF0
  c->lr=0x801D1DF8u; f_801CE7B0(c); // 801D1DF4
  c->r[12]=R32(c->r[31]+0x00000224u); // 801D1DF8
  c->r[4]=c->r[1]+0x00000008u; // 801D1DFC
  c->r[3]=0u+0x00000001u; // 801D1E00
  c->ctr=c->r[12]; // 801D1E04
  if (true) { c->lr=0x801D1E0Cu; dispatch(c,c->ctr); } // 801D1E08
  c->r[3]=c->r[31]|c->r[31]; // 801D1E0C
  c->r[4]=0u+0x00000000u; // 801D1E10
  c->r[5]=0u+0x00000230u; // 801D1E14
  c->lr=0x801D1E1Cu; f_80004350(c); // 801D1E18
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D1E1C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D1E20
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D1E24
  c->lr=c->r[0]; // 801D1E28
  c->r[1]=c->r[1]+0x00000020u; // 801D1E2C
  return; // 801D1E30
}

// bta_hh_sdp_cback
void f_801D1E34(Ctx* __restrict c) {
  trace_call(0x801D1E34u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1E34
  c->r[0]=c->lr; // 801D1E38
  c->r[6]=0u+0x80480000u; // 801D1E3C
  cmps(c,0,(int32_t)c->r[3],0); // 801D1E40
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D1E44
  c->r[0]=0u+0x00000010u; // 801D1E48
  c->r[6]=c->r[6]+0x000032A8u; // 801D1E4C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D1E50
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D1E54
  c->r[30]=c->r[5]|c->r[5]; // 801D1E58
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D1E5C
  c->r[29]=c->r[4]|c->r[4]; // 801D1E60
  W8(c->r[1]+0x00000008u,c->r[0]); // 801D1E64
  c->r[31]=R32(c->r[6]+0x00000210u); // 801D1E68
  if (!crb(c,2)) { goto L_801D1F2C; } // 801D1E6C
  c->r[0]=R8(c->r[31]+0x00000014u); // 801D1E70
  cmps(c,0,(int32_t)c->r[0],0); // 801D1E74
  if (crb(c,2)) { goto L_801D1E80; } // 801D1E78
  c->r[29]=c->r[4]|0x00008000u; // 801D1E7C
L_801D1E80:;
  c->r[0]=R8(c->r[13]+0xFFFF9AF8u); // 801D1E80
  cmpu(c,0,c->r[0],0x00000004u); // 801D1E84
  if (crb(c,0)) { goto L_801D1EA8; } // 801D1E88
  c->r[4]=0u+0x803A0000u; // 801D1E8C
  c->r[6]=c->r[3]|c->r[3]; // 801D1E90
  c->r[5]=c->r[31]|c->r[31]; // 801D1E94
  c->r[7]=rotl(c->r[29],0)&0x0000FFFFu; // 801D1E98
  c->r[4]=c->r[4]+0xFFFFE528u; // 801D1E9C
  c->r[3]=0u+0x00000503u; // 801D1EA0
  c->lr=0x801D1EA8u; f_801CDA30(c); // 801D1EA4
L_801D1EA8:;
  c->r[4]=R8(c->r[30]+0x00000064u); // 801D1EA8
  c->r[3]=c->r[31]|c->r[31]; // 801D1EAC
  c->lr=0x801D1EB4u; f_801D3DFC(c); // 801D1EB0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D1EB4
  if (crb(c,2)) { goto L_801D1F24; } // 801D1EB8
  c->r[0]=R8(c->r[31]+0x00000016u); // 801D1EBC
  cmpu(c,0,c->r[0],0x000000FFu); // 801D1EC0
  if (!crb(c,2)) { goto L_801D1F2C; } // 801D1EC4
  c->r[3]=c->r[31]+0x00000008u; // 801D1EC8
  c->r[4]=rotl(c->r[29],0)&0x0000FFFFu; // 801D1ECC
  c->r[5]=c->r[1]+0x00000009u; // 801D1ED0
  c->lr=0x801D1ED8u; f_801E3C30(c); // 801D1ED4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D1ED8
  W8(c->r[1]+0x00000008u,c->r[3]); // 801D1EDC
  if (!crb(c,2)) { goto L_801D1F18; } // 801D1EE0
  c->r[3]=0u+0x80480000u; // 801D1EE4
  c->r[4]=R8(c->r[1]+0x00000009u); // 801D1EE8
  c->r[3]=c->r[3]+0x000032A8u; // 801D1EEC
  c->r[0]=R8(c->r[31]+0x00000012u); // 801D1EF0
  c->r[5]=c->r[3]+c->r[4]; // 801D1EF4
  c->r[6]=c->r[30]+0x00000068u; // 801D1EF8
  W8(c->r[5]+0x00000214u,c->r[0]); // 801D1EFC
  c->r[3]=c->r[31]|c->r[31]; // 801D1F00
  c->r[5]=rotl(c->r[29],0)&0x0000FFFFu; // 801D1F04
  c->r[7]=R8(c->r[30]+0x00000064u); // 801D1F08
  c->r[8]=R8(c->r[31]+0x00000015u); // 801D1F0C
  c->lr=0x801D1F14u; f_801D3D40(c); // 801D1F10
  goto L_801D1F2C; // 801D1F14
L_801D1F18:;
  c->r[0]=0u+0x00000000u; // 801D1F18
  W8(c->r[31]+0x00000015u,c->r[0]); // 801D1F1C
  goto L_801D1F2C; // 801D1F20
L_801D1F24:;
  c->r[0]=0u+0x000000FFu; // 801D1F24
  W8(c->r[1]+0x00000008u,c->r[0]); // 801D1F28
L_801D1F2C:;
  c->r[3]=0u+0x80480000u; // 801D1F2C
  c->r[3]=c->r[3]+0x000032A8u; // 801D1F30
  c->r[3]=c->r[3]+0x00000228u; // 801D1F34
  c->lr=0x801D1F3Cu; f_801CE7B0(c); // 801D1F38
  c->r[3]=c->r[31]|c->r[31]; // 801D1F3C
  c->r[5]=c->r[1]+0x00000008u; // 801D1F40
  c->r[4]=0u+0x00001707u; // 801D1F44
  c->lr=0x801D1F4Cu; f_801D3630(c); // 801D1F48
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D1F4C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D1F50
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D1F54
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D1F58
  c->lr=c->r[0]; // 801D1F5C
  c->r[1]=c->r[1]+0x00000020u; // 801D1F60
  return; // 801D1F64
}

// bta_hh_start_sdp
void f_801D1F68(Ctx* __restrict c) {
  trace_call(0x801D1F68u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D1F68
  c->r[0]=c->lr; // 801D1F6C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D1F70
  c->r[0]=0u+0x00000010u; // 801D1F74
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D1F78
  c->r[31]=c->r[3]|c->r[3]; // 801D1F7C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D1F80
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D1F84
  c->r[29]=c->r[4]|c->r[4]; // 801D1F88
  W8(c->r[1]+0x00000009u,c->r[0]); // 801D1F8C
  c->r[5]=R8(c->r[4]+0x0000000Eu); // 801D1F90
  c->r[0]=R8(c->r[3]+0x00000015u); // 801D1F94
  W8(c->r[3]+0x00000014u,c->r[5]); // 801D1F98
  cmps(c,0,(int32_t)c->r[0],0); // 801D1F9C
  c->r[0]=R8(c->r[4]+0x0000000Fu); // 801D1FA0
  W8(c->r[3]+0x0000001Bu,c->r[0]); // 801D1FA4
  if (crb(c,2)) { goto L_801D2040; } // 801D1FA8
  c->r[0]=R8(c->r[13]+0xFFFF9AF8u); // 801D1FAC
  c->r[3]=0u+0x00000000u; // 801D1FB0
  W8(c->r[1]+0x00000009u,c->r[3]); // 801D1FB4
  cmpu(c,0,c->r[0],0x00000005u); // 801D1FB8
  if (crb(c,0)) { goto L_801D1FD0; } // 801D1FBC
  c->r[4]=0u+0x803A0000u; // 801D1FC0
  c->r[3]=0u+0x00000504u; // 801D1FC4
  c->r[4]=c->r[4]+0xFFFFE580u; // 801D1FC8
  c->lr=0x801D1FD0u; f_801CD9D0(c); // 801D1FCC
L_801D1FD0:;
  c->r[0]=R8(c->r[31]+0x00000016u); // 801D1FD0
  cmpu(c,0,c->r[0],0x000000FFu); // 801D1FD4
  if (!crb(c,2)) { goto L_801D202C; } // 801D1FD8
  c->r[4]=R16(c->r[31]+0x0000000Eu); // 801D1FDC
  c->r[3]=c->r[31]+0x00000008u; // 801D1FE0
  c->r[5]=c->r[1]+0x00000008u; // 801D1FE4
  c->lr=0x801D1FECu; f_801E3C30(c); // 801D1FE8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D1FEC
  W8(c->r[1]+0x00000009u,c->r[3]); // 801D1FF0
  if (!crb(c,2)) { goto L_801D202C; } // 801D1FF4
  c->r[4]=R8(c->r[1]+0x00000008u); // 801D1FF8
  c->r[3]=c->r[31]|c->r[31]; // 801D1FFC
  c->r[5]=R16(c->r[31]+0x0000000Eu); // 801D2000
  c->r[6]=0u+0x00000000u; // 801D2004
  c->r[7]=R8(c->r[31]+0x00000013u); // 801D2008
  c->r[8]=R8(c->r[31]+0x00000015u); // 801D200C
  c->lr=0x801D2014u; f_801D3D40(c); // 801D2010
  c->r[3]=0u+0x80480000u; // 801D2014
  c->r[0]=R8(c->r[1]+0x00000008u); // 801D2018
  c->r[3]=c->r[3]+0x000032A8u; // 801D201C
  c->r[4]=R8(c->r[31]+0x00000012u); // 801D2020
  c->r[3]=c->r[3]+c->r[0]; // 801D2024
  W8(c->r[3]+0x00000214u,c->r[4]); // 801D2028
L_801D202C:;
  c->r[3]=c->r[31]|c->r[31]; // 801D202C
  c->r[5]=c->r[1]+0x00000009u; // 801D2030
  c->r[4]=0u+0x00001707u; // 801D2034
  c->lr=0x801D203Cu; f_801D3630(c); // 801D2038
  goto L_801D20E0; // 801D203C
L_801D2040:;
  c->r[30]=0u+0x80480000u; // 801D2040
  c->r[30]=c->r[30]+0x000032A8u; // 801D2044
  c->r[0]=R32(c->r[30]+0x00000228u); // 801D2048
  cmps(c,0,(int32_t)c->r[0],0); // 801D204C
  if (!crb(c,2)) { goto L_801D20C4; } // 801D2050
  c->r[3]=R32(c->r[13]+0xFFFF8EE0u); // 801D2054
  c->r[3]=R16(c->r[3]+0x00000008u); // 801D2058
  c->lr=0x801D2060u; f_801CAC80(c); // 801D205C
  W32(c->r[30]+0x00000228u,c->r[3]); // 801D2060
  c->r[6]=0u+0x801D0000u; // 801D2064
  c->r[5]=R32(c->r[13]+0xFFFF8EE0u); // 801D2068
  c->r[4]=c->r[3]|c->r[3]; // 801D206C
  W32(c->r[30]+0x00000210u,c->r[31]); // 801D2070
  c->r[3]=c->r[29]+0x00000008u; // 801D2074
  c->r[6]=c->r[6]+0x00001E34u; // 801D2078
  c->r[5]=R16(c->r[5]+0x00000008u); // 801D207C
  c->lr=0x801D2084u; f_801E3574(c); // 801D2080
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[5]); // 801D2084
  W8(c->r[1]+0x00000009u,c->r[3]); // 801D2088
  if (crb(c,2)) { goto L_801D20C4; } // 801D208C
  c->r[0]=R8(c->r[13]+0xFFFF9AF8u); // 801D2090
  cmpu(c,0,c->r[0],0x00000005u); // 801D2094
  if (crb(c,0)) { goto L_801D20AC; } // 801D2098
  c->r[4]=0u+0x803A0000u; // 801D209C
  c->r[3]=0u+0x00000504u; // 801D20A0
  c->r[4]=c->r[4]+0xFFFFE5B0u; // 801D20A4
  c->lr=0x801D20ACu; f_801CD9F0(c); // 801D20A8
L_801D20AC:;
  c->r[0]=0u+0x00000007u; // 801D20AC
  c->r[3]=0u+0x80480000u; // 801D20B0
  c->r[3]=c->r[3]+0x000032A8u; // 801D20B4
  W8(c->r[1]+0x00000009u,c->r[0]); // 801D20B8
  c->r[3]=c->r[3]+0x00000228u; // 801D20BC
  c->lr=0x801D20C4u; f_801CE7B0(c); // 801D20C0
L_801D20C4:;
  c->r[0]=R8(c->r[1]+0x00000009u); // 801D20C4
  cmps(c,0,(int32_t)c->r[0],0); // 801D20C8
  if (crb(c,2)) { goto L_801D20E0; } // 801D20CC
  c->r[3]=c->r[31]|c->r[31]; // 801D20D0
  c->r[5]=c->r[1]+0x00000009u; // 801D20D4
  c->r[4]=0u+0x00001707u; // 801D20D8
  c->lr=0x801D20E0u; f_801D3630(c); // 801D20DC
L_801D20E0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D20E0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D20E4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D20E8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D20EC
  c->lr=c->r[0]; // 801D20F0
  c->r[1]=c->r[1]+0x00000020u; // 801D20F4
  return; // 801D20F8
}

// bta_hh_sdp_cmpl
void f_801D20FC(Ctx* __restrict c) {
  trace_call(0x801D20FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D20FC
  c->r[0]=c->lr; // 801D2100
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D2104
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D2108
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D210C
  c->r[30]=c->r[4]|c->r[4]; // 801D2110
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D2114
  c->r[29]=c->r[3]|c->r[3]; // 801D2118
  c->r[0]=R8(c->r[13]+0xFFFF9AF8u); // 801D211C
  cmpu(c,0,c->r[0],0x00000005u); // 801D2120
  if (crb(c,0)) { goto L_801D213C; } // 801D2124
  c->r[4]=0u+0x803A0000u; // 801D2128
  c->r[5]=R8(c->r[30]+0x00000000u); // 801D212C
  c->r[4]=c->r[4]+0xFFFFE600u; // 801D2130
  c->r[3]=0u+0x00000504u; // 801D2134
  c->lr=0x801D213Cu; f_801CD9F0(c); // 801D2138
L_801D213C:;
  c->r[3]=c->r[1]+0x00000008u; // 801D213C
  c->r[4]=0u+0x00000000u; // 801D2140
  c->r[5]=0u+0x00000008u; // 801D2144
  c->lr=0x801D214Cu; f_80004350(c); // 801D2148
  c->r[0]=R8(c->r[29]+0x00000016u); // 801D214C
  c->r[3]=c->r[1]+0x00000008u; // 801D2150
  c->r[4]=c->r[29]+0x00000008u; // 801D2154
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 801D2158
  c->lr=0x801D2160u; f_801CE064(c); // 801D215C
  c->r[31]=R8(c->r[30]+0x00000000u); // 801D2160
  cmps(c,0,(int32_t)c->r[31],0); // 801D2164
  if (!crb(c,2)) { goto L_801D21D0; } // 801D2168
  c->r[0]=R8(c->r[29]+0x00000019u); // 801D216C
  cmps(c,0,(int32_t)c->r[0],0); // 801D2170
  if (!crb(c,2)) { goto L_801D21C0; } // 801D2174
  c->r[4]=R8(c->r[29]+0x00000014u); // 801D2178
  c->r[3]=c->r[13]+0xFFFF8F08u; // 801D217C
  c->lr=0x801D2184u; f_801E40CC(c); // 801D2180
  c->r[3]=R8(c->r[29]+0x00000016u); // 801D2184
  c->lr=0x801D218Cu; f_801E3E88(c); // 801D2188
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[5]); // 801D218C
  c->r[31]=c->r[3]|c->r[3]; // 801D2190
  if (crb(c,2)) { goto L_801D21D0; } // 801D2194
  c->r[0]=R8(c->r[13]+0xFFFF9AF8u); // 801D2198
  cmpu(c,0,c->r[0],0x00000005u); // 801D219C
  if (crb(c,0)) { goto L_801D21B4; } // 801D21A0
  c->r[4]=0u+0x803A0000u; // 801D21A4
  c->r[3]=0u+0x00000504u; // 801D21A8
  c->r[4]=c->r[4]+0xFFFFE620u; // 801D21AC
  c->lr=0x801D21B4u; f_801CD9F0(c); // 801D21B0
L_801D21B4:;
  c->r[3]=R8(c->r[29]+0x00000016u); // 801D21B4
  c->lr=0x801D21BCu; f_801E3DC0(c); // 801D21B8
  goto L_801D21D0; // 801D21BC
L_801D21C0:;
  c->r[3]=c->r[29]|c->r[29]; // 801D21C0
  c->r[4]=0u+0x0000170Bu; // 801D21C4
  c->r[5]=0u+0x00000000u; // 801D21C8
  c->lr=0x801D21D0u; f_801D3630(c); // 801D21CC
L_801D21D0:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; cr0(c,c->r[0]); // 801D21D0
  if (crb(c,2)) { goto L_801D2248; } // 801D21D4
  c->r[0]=R8(c->r[30]+0x00000000u); // 801D21D8
  cmpu(c,0,c->r[0],0x000000FFu); // 801D21DC
  if (!crb(c,2)) { goto L_801D21F0; } // 801D21E0
  c->r[0]=0u+0x0000000Au; // 801D21E4
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801D21E8
  goto L_801D21F8; // 801D21EC
L_801D21F0:;
  c->r[0]=0u+0x00000007u; // 801D21F0
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801D21F4
L_801D21F8:;
  c->r[5]=0u+0x80480000u; // 801D21F8
  c->r[4]=c->r[1]+0x00000008u; // 801D21FC
  c->r[5]=c->r[5]+0x000032A8u; // 801D2200
  c->r[3]=0u+0x00000002u; // 801D2204
  c->r[12]=R32(c->r[5]+0x00000224u); // 801D2208
  c->ctr=c->r[12]; // 801D220C
  if (true) { c->lr=0x801D2214u; dispatch(c,c->ctr); } // 801D2210
  c->r[3]=c->r[29]|c->r[29]; // 801D2214
  c->r[4]=0u+0x00001701u; // 801D2218
  c->r[5]=0u+0x00000000u; // 801D221C
  c->lr=0x801D2224u; f_801D3630(c); // 801D2220
  c->r[0]=R8(c->r[29]+0x00000015u); // 801D2224
  cmps(c,0,(int32_t)c->r[0],0); // 801D2228
  if (!crb(c,2)) { goto L_801D2244; } // 801D222C
  c->r[0]=R8(c->r[29]+0x00000019u); // 801D2230
  cmps(c,0,(int32_t)c->r[0],0); // 801D2234
  if (!crb(c,2)) { goto L_801D2244; } // 801D2238
  c->r[3]=c->r[29]|c->r[29]; // 801D223C
  c->lr=0x801D2244u; f_801D3CC0(c); // 801D2240
L_801D2244:;
  c->lr=0x801D2248u; f_801D3E50(c); // 801D2244
L_801D2248:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D2248
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D224C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D2250
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D2254
  c->lr=c->r[0]; // 801D2258
  c->r[1]=c->r[1]+0x00000020u; // 801D225C
  return; // 801D2260
}

// bta_hh_api_disc_act
void f_801D2264(Ctx* __restrict c) {
  trace_call(0x801D2264u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2264
  c->r[0]=c->lr; // 801D2268
  cmps(c,0,(int32_t)c->r[4],0); // 801D226C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D2270
  if (crb(c,2)) { goto L_801D2284; } // 801D2274
  c->r[0]=R16(c->r[4]+0x00000006u); // 801D2278
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 801D227C
  goto L_801D2288; // 801D2280
L_801D2284:;
  c->r[3]=R8(c->r[3]+0x00000016u); // 801D2284
L_801D2288:;
  c->r[0]=0u+0x00000006u; // 801D2288
  W8(c->r[1]+0x00000009u,c->r[3]); // 801D228C
  W8(c->r[1]+0x00000008u,c->r[0]); // 801D2290
  c->lr=0x801D2298u; f_801E402C(c); // 801D2294
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D2298
  if (crb(c,2)) { goto L_801D22BC; } // 801D229C
  c->r[5]=0u+0x80480000u; // 801D22A0
  c->r[4]=c->r[1]+0x00000008u; // 801D22A4
  c->r[5]=c->r[5]+0x000032A8u; // 801D22A8
  c->r[3]=0u+0x00000003u; // 801D22AC
  c->r[12]=R32(c->r[5]+0x00000224u); // 801D22B0
  c->ctr=c->r[12]; // 801D22B4
  if (true) { c->lr=0x801D22BCu; dispatch(c,c->ctr); } // 801D22B8
L_801D22BC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D22BC
  c->lr=c->r[0]; // 801D22C0
  c->r[1]=c->r[1]+0x00000010u; // 801D22C4
  return; // 801D22C8
}

// bta_hh_open_cmpl_act
void f_801D22CC(Ctx* __restrict c) {
  trace_call(0x801D22CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D22CC
  c->r[0]=c->lr; // 801D22D0
  cmps(c,0,(int32_t)c->r[4],0); // 801D22D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D22D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D22DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D22E0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D22E4
  c->r[29]=c->r[3]|c->r[3]; // 801D22E8
  if (crb(c,2)) { goto L_801D22FC; } // 801D22EC
  c->r[0]=R16(c->r[4]+0x00000006u); // 801D22F0
  c->r[30]=rotl(c->r[0],0)&0x000000FFu; // 801D22F4
  goto L_801D2300; // 801D22F8
L_801D22FC:;
  c->r[30]=R8(c->r[3]+0x00000016u); // 801D22FC
L_801D2300:;
  c->r[3]=c->r[1]+0x00000008u; // 801D2300
  c->r[4]=0u+0x00000000u; // 801D2304
  c->r[5]=0u+0x00000008u; // 801D2308
  c->lr=0x801D2310u; f_80004350(c); // 801D230C
  W8(c->r[1]+0x0000000Fu,c->r[30]); // 801D2310
  c->r[3]=c->r[1]+0x00000008u; // 801D2314
  c->r[4]=c->r[29]+0x00000008u; // 801D2318
  c->lr=0x801D2320u; f_801CE064(c); // 801D231C
  c->r[31]=0u+0x80480000u; // 801D2320
  c->r[31]=c->r[31]+0x000032A8u; // 801D2324
  c->r[3]=R8(c->r[31]+0x0000022Du); // 801D2328
  c->r[0]=c->r[3]+0x00000001u; // 801D232C
  W8(c->r[31]+0x0000022Du,c->r[0]); // 801D2330
  c->r[3]=R8(c->r[29]+0x00000016u); // 801D2334
  c->r[4]=R8(c->r[29]+0x00000013u); // 801D2338
  c->r[5]=R16(c->r[29]+0x0000000Eu); // 801D233C
  c->r[6]=R8(c->r[29]+0x00000015u); // 801D2340
  c->lr=0x801D2348u; f_80277860(c); // 801D2344
  c->r[4]=R8(c->r[29]+0x00000015u); // 801D2348
  c->r[5]=c->r[29]+0x00000008u; // 801D234C
  c->r[3]=0u+0x00000017u; // 801D2350
  c->lr=0x801D2358u; f_801CE168(c); // 801D2354
  c->r[5]=R8(c->r[29]+0x0000001Bu); // 801D2358
  cmps(c,0,(int32_t)c->r[5],0); // 801D235C
  if (crb(c,2)) { goto L_801D23B4; } // 801D2360
  c->r[3]=c->r[30]|c->r[30]; // 801D2364
  c->r[4]=0u+0x00000007u; // 801D2368
  c->r[6]=0u+0x00000000u; // 801D236C
  c->r[7]=0u+0x00000000u; // 801D2370
  c->r[8]=0u+0x00000000u; // 801D2374
  c->lr=0x801D237Cu; f_801E3EEC(c); // 801D2378
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D237C
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 801D2380
  if (crb(c,2)) { goto L_801D23A8; } // 801D2384
  c->r[12]=R32(c->r[31]+0x00000224u); // 801D2388
  c->r[0]=0u+0x00000008u; // 801D238C
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801D2390
  c->r[4]=c->r[1]+0x00000008u; // 801D2394
  c->r[3]=0u+0x00000002u; // 801D2398
  c->ctr=c->r[12]; // 801D239C
  if (true) { c->lr=0x801D23A4u; dispatch(c,c->ctr); } // 801D23A0
  goto L_801D23D0; // 801D23A4
L_801D23A8:;
  c->r[0]=0u+0x00000002u; // 801D23A8
  W16(c->r[29]+0x00000010u,c->r[0]); // 801D23AC
  goto L_801D23D0; // 801D23B0
L_801D23B4:;
  c->r[0]=0u+0x00000001u; // 801D23B4
  c->r[4]=c->r[1]+0x00000008u; // 801D23B8
  W8(c->r[29]+0x0000001Au,c->r[0]); // 801D23BC
  c->r[3]=0u+0x00000002u; // 801D23C0
  c->r[12]=R32(c->r[31]+0x00000224u); // 801D23C4
  c->ctr=c->r[12]; // 801D23C8
  if (true) { c->lr=0x801D23D0u; dispatch(c,c->ctr); } // 801D23CC
L_801D23D0:;
  c->r[0]=0u+0x00000000u; // 801D23D0
  W8(c->r[29]+0x00000019u,c->r[0]); // 801D23D4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D23D8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D23DC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D23E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D23E4
  c->lr=c->r[0]; // 801D23E8
  c->r[1]=c->r[1]+0x00000020u; // 801D23EC
  return; // 801D23F0
}

// bta_hh_open_act
void f_801D23F4(Ctx* __restrict c) {
  trace_call(0x801D23F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D23F4
  c->r[0]=c->lr; // 801D23F8
  cmps(c,0,(int32_t)c->r[4],0); // 801D23FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D2400
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D2404
  c->r[31]=c->r[4]|c->r[4]; // 801D2408
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D240C
  c->r[30]=c->r[3]|c->r[3]; // 801D2410
  if (crb(c,2)) { goto L_801D2424; } // 801D2414
  c->r[0]=R16(c->r[4]+0x00000006u); // 801D2418
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 801D241C
  goto L_801D2428; // 801D2420
L_801D2424:;
  c->r[5]=R8(c->r[3]+0x00000016u); // 801D2424
L_801D2428:;
  c->r[0]=R8(c->r[13]+0xFFFF9AF8u); // 801D2428
  cmpu(c,0,c->r[0],0x00000004u); // 801D242C
  if (crb(c,0)) { goto L_801D2444; } // 801D2430
  c->r[4]=0u+0x803A0000u; // 801D2434
  c->r[3]=0u+0x00000503u; // 801D2438
  c->r[4]=c->r[4]+0xFFFFE66Cu; // 801D243C
  c->lr=0x801D2444u; f_801CD9F0(c); // 801D2440
L_801D2444:;
  c->r[0]=R8(c->r[30]+0x00000015u); // 801D2444
  cmps(c,0,(int32_t)c->r[0],0); // 801D2448
  if (crb(c,2)) { goto L_801D2464; } // 801D244C
  c->r[3]=c->r[30]|c->r[30]; // 801D2450
  c->r[5]=c->r[31]|c->r[31]; // 801D2454
  c->r[4]=0u+0x0000170Bu; // 801D2458
  c->lr=0x801D2460u; f_801D3630(c); // 801D245C
  goto L_801D2494; // 801D2460
L_801D2464:;
  c->r[0]=0u+0x00000001u; // 801D2464
  c->r[3]=c->r[1]+0x00000008u; // 801D2468
  W8(c->r[30]+0x00000019u,c->r[0]); // 801D246C
  c->r[4]=0u+0x00000000u; // 801D2470
  c->r[5]=0u+0x00000010u; // 801D2474
  c->lr=0x801D247Cu; f_80004350(c); // 801D2478
  c->r[3]=c->r[1]+0x00000010u; // 801D247C
  c->r[4]=c->r[30]+0x00000008u; // 801D2480
  c->lr=0x801D2488u; f_801CE064(c); // 801D2484
  c->r[3]=c->r[30]|c->r[30]; // 801D2488
  c->r[4]=c->r[1]+0x00000008u; // 801D248C
  c->lr=0x801D2494u; f_801D1F68(c); // 801D2490
L_801D2494:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D2494
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D2498
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D249C
  c->lr=c->r[0]; // 801D24A0
  c->r[1]=c->r[1]+0x00000020u; // 801D24A4
  return; // 801D24A8
}

// bta_hh_data_act
void f_801D24AC(Ctx* __restrict c) {
  trace_call(0x801D24ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D24AC
  c->r[0]=c->lr; // 801D24B0
  c->r[8]=c->r[3]|c->r[3]; // 801D24B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D24B8
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 801D24BC
  W32(c->r[1]+0x00000008u,c->r[5]); // 801D24C0
  c->r[0]=R16(c->r[5]+0x00000004u); // 801D24C4
  c->r[3]=R16(c->r[4]+0x00000006u); // 801D24C8
  c->r[4]=c->r[5]+c->r[0]; // 801D24CC
  c->r[5]=R16(c->r[5]+0x00000002u); // 801D24D0
  c->r[6]=R8(c->r[8]+0x0000001Bu); // 801D24D4
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 801D24D8
  c->r[7]=R8(c->r[8]+0x00000013u); // 801D24DC
  c->r[4]=c->r[4]+0x00000008u; // 801D24E0
  c->r[8]=R8(c->r[8]+0x00000015u); // 801D24E4
  c->lr=0x801D24ECu; f_80277830(c); // 801D24E8
  c->r[3]=c->r[1]+0x00000008u; // 801D24EC
  c->lr=0x801D24F4u; f_801CE7B0(c); // 801D24F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D24F4
  c->lr=c->r[0]; // 801D24F8
  c->r[1]=c->r[1]+0x00000010u; // 801D24FC
  return; // 801D2500
}

// bta_hh_handsk_act
void f_801D2504(Ctx* __restrict c) {
  trace_call(0x801D2504u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2504
  c->r[0]=c->lr; // 801D2508
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D250C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801D2510
  c->r[31]=c->r[3]|c->r[3]; // 801D2514
  W32(c->r[1]+0x00000038u,c->r[30]); // 801D2518
  c->r[30]=0u+0x803A0000u; // 801D251C
  c->r[30]=c->r[30]+0xFFFFE528u; // 801D2520
  W32(c->r[1]+0x00000034u,c->r[29]); // 801D2524
  c->r[29]=c->r[4]|c->r[4]; // 801D2528
  c->r[0]=R8(c->r[13]+0xFFFF9AF8u); // 801D252C
  cmpu(c,0,c->r[0],0x00000005u); // 801D2530
  if (crb(c,0)) { goto L_801D25A8; } // 801D2534
  c->r[0]=R16(c->r[3]+0x00000010u); // 801D2538
  cmpu(c,0,c->r[0],0x00000009u); // 801D253C
  if (crb(c,1)) { goto L_801D2594; } // 801D2540
  c->r[3]=0u+0x803A0000u; // 801D2544
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D2548
  c->r[3]=c->r[3]+0xFFFFE7A8u; // 801D254C
  c->r[3]=R32(c->r[3]+c->r[0]); // 801D2550
  c->ctr=c->r[3]; // 801D2554
  if (true) { switch (c->ctr) { case 0x801D255Cu: goto L_801D255C; case 0x801D2564u: goto L_801D2564; case 0x801D256Cu: goto L_801D256C; case 0x801D2574u: goto L_801D2574; case 0x801D257Cu: goto L_801D257C; case 0x801D2584u: goto L_801D2584; case 0x801D258Cu: goto L_801D258C; case 0x801D2594u: goto L_801D2594; case 0x801D25CCu: goto L_801D25CC; case 0x801D264Cu: goto L_801D264C; case 0x801D26BCu: goto L_801D26BC; case 0x801D2728u: goto L_801D2728; default: break; } dispatch(c,c->ctr); return; } // 801D2558
L_801D255C:;
  c->r[5]=c->r[30]+0x0000016Cu; // 801D255C
  goto L_801D2598; // 801D2560
L_801D2564:;
  c->r[5]=c->r[30]+0x00000180u; // 801D2564
  goto L_801D2598; // 801D2568
L_801D256C:;
  c->r[5]=c->r[30]+0x00000194u; // 801D256C
  goto L_801D2598; // 801D2570
L_801D2574:;
  c->r[5]=c->r[30]+0x000001ACu; // 801D2574
  goto L_801D2598; // 801D2578
L_801D257C:;
  c->r[5]=c->r[30]+0x000001C4u; // 801D257C
  goto L_801D2598; // 801D2580
L_801D2584:;
  c->r[5]=c->r[30]+0x000001D8u; // 801D2584
  goto L_801D2598; // 801D2588
L_801D258C:;
  c->r[5]=c->r[30]+0x000001F0u; // 801D258C
  goto L_801D2598; // 801D2590
L_801D2594:;
  c->r[5]=c->r[30]+0x00000200u; // 801D2594
L_801D2598:;
  c->r[6]=R32(c->r[29]+0x00000008u); // 801D2598
  c->r[4]=c->r[30]+0x00000210u; // 801D259C
  c->r[3]=0u+0x00000504u; // 801D25A0
  c->lr=0x801D25A8u; f_801CDA10(c); // 801D25A4
L_801D25A8:;
  c->r[0]=R16(c->r[31]+0x00000010u); // 801D25A8
  cmpu(c,0,c->r[0],0x00000009u); // 801D25AC
  if (crb(c,1)) { goto L_801D2728; } // 801D25B0
  c->r[3]=0u+0x803A0000u; // 801D25B4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D25B8
  c->r[3]=c->r[3]+0xFFFFE780u; // 801D25BC
  c->r[3]=R32(c->r[3]+c->r[0]); // 801D25C0
  c->ctr=c->r[3]; // 801D25C4
  if (true) { switch (c->ctr) { case 0x801D255Cu: goto L_801D255C; case 0x801D2564u: goto L_801D2564; case 0x801D256Cu: goto L_801D256C; case 0x801D2574u: goto L_801D2574; case 0x801D257Cu: goto L_801D257C; case 0x801D2584u: goto L_801D2584; case 0x801D258Cu: goto L_801D258C; case 0x801D2594u: goto L_801D2594; case 0x801D25CCu: goto L_801D25CC; case 0x801D264Cu: goto L_801D264C; case 0x801D26BCu: goto L_801D26BC; case 0x801D2728u: goto L_801D2728; default: break; } dispatch(c,c->ctr); return; } // 801D25C8
L_801D25CC:;
  c->r[3]=c->r[1]+0x00000018u; // 801D25CC
  c->r[4]=0u+0x00000000u; // 801D25D0
  c->r[5]=0u+0x0000000Au; // 801D25D4
  c->lr=0x801D25DCu; f_80004350(c); // 801D25D8
  c->r[0]=R8(c->r[31]+0x00000016u); // 801D25DC
  W8(c->r[1]+0x00000019u,c->r[0]); // 801D25E0
  c->r[0]=R32(c->r[29]+0x00000008u); // 801D25E4
  cmps(c,0,(int32_t)c->r[0],5); // 801D25E8
  if (!crb(c,0)) { goto L_801D2600; } // 801D25EC
  cmps(c,0,(int32_t)c->r[0],0); // 801D25F0
  if (crb(c,2)) { goto L_801D260C; } // 801D25F4
  if (!crb(c,0)) { goto L_801D2614; } // 801D25F8
  goto L_801D261C; // 801D25FC
L_801D2600:;
  cmps(c,0,(int32_t)c->r[0],16); // 801D2600
  if (!crb(c,0)) { goto L_801D261C; } // 801D2604
  goto L_801D261C; // 801D2608
L_801D260C:;
  c->r[0]=0u+0x00000000u; // 801D260C
  goto L_801D2620; // 801D2610
L_801D2614:;
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801D2614
  goto L_801D2620; // 801D2618
L_801D261C:;
  c->r[0]=0u+0x00000005u; // 801D261C
L_801D2620:;
  c->r[3]=0u+0x80480000u; // 801D2620
  W8(c->r[1]+0x00000018u,c->r[0]); // 801D2624
  c->r[3]=c->r[3]+0x000032A8u; // 801D2628
  c->r[4]=c->r[1]+0x00000018u; // 801D262C
  c->r[12]=R32(c->r[3]+0x00000224u); // 801D2630
  c->r[3]=R16(c->r[31]+0x00000010u); // 801D2634
  c->ctr=c->r[12]; // 801D2638
  if (true) { c->lr=0x801D2640u; dispatch(c,c->ctr); } // 801D263C
  c->r[0]=0u+0x00000000u; // 801D2640
  W16(c->r[31]+0x00000010u,c->r[0]); // 801D2644
  goto L_801D2740; // 801D2648
L_801D264C:;
  c->r[0]=R8(c->r[31]+0x00000016u); // 801D264C
  W8(c->r[1]+0x00000009u,c->r[0]); // 801D2650
  c->r[0]=R32(c->r[29]+0x00000008u); // 801D2654
  cmps(c,0,(int32_t)c->r[0],5); // 801D2658
  if (!crb(c,0)) { goto L_801D2670; } // 801D265C
  cmps(c,0,(int32_t)c->r[0],0); // 801D2660
  if (crb(c,2)) { goto L_801D267C; } // 801D2664
  if (!crb(c,0)) { goto L_801D2684; } // 801D2668
  goto L_801D268C; // 801D266C
L_801D2670:;
  cmps(c,0,(int32_t)c->r[0],16); // 801D2670
  if (!crb(c,0)) { goto L_801D268C; } // 801D2674
  goto L_801D268C; // 801D2678
L_801D267C:;
  c->r[0]=0u+0x00000000u; // 801D267C
  goto L_801D2690; // 801D2680
L_801D2684:;
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801D2684
  goto L_801D2690; // 801D2688
L_801D268C:;
  c->r[0]=0u+0x00000005u; // 801D268C
L_801D2690:;
  c->r[3]=0u+0x80480000u; // 801D2690
  W8(c->r[1]+0x00000008u,c->r[0]); // 801D2694
  c->r[3]=c->r[3]+0x000032A8u; // 801D2698
  c->r[4]=c->r[1]+0x00000008u; // 801D269C
  c->r[12]=R32(c->r[3]+0x00000224u); // 801D26A0
  c->r[3]=R16(c->r[31]+0x00000010u); // 801D26A4
  c->ctr=c->r[12]; // 801D26A8
  if (true) { c->lr=0x801D26B0u; dispatch(c,c->ctr); } // 801D26AC
  c->r[0]=0u+0x00000000u; // 801D26B0
  W16(c->r[31]+0x00000010u,c->r[0]); // 801D26B4
  goto L_801D2740; // 801D26B8
L_801D26BC:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 801D26BC
  c->r[3]=0u+0x00000000u; // 801D26C0
  cmps(c,0,(int32_t)c->r[0],0); // 801D26C4
  if (crb(c,2)) { goto L_801D26D0; } // 801D26C8
  c->r[3]=0u+0x00000008u; // 801D26CC
L_801D26D0:;
  W8(c->r[1]+0x00000016u,c->r[3]); // 801D26D0
  c->r[3]=c->r[1]+0x00000010u; // 801D26D4
  c->r[4]=c->r[31]+0x00000008u; // 801D26D8
  c->r[0]=R8(c->r[31]+0x00000016u); // 801D26DC
  W8(c->r[1]+0x00000017u,c->r[0]); // 801D26E0
  c->lr=0x801D26E8u; f_801CE064(c); // 801D26E4
  c->r[5]=0u+0x80480000u; // 801D26E8
  c->r[4]=c->r[1]+0x00000010u; // 801D26EC
  c->r[5]=c->r[5]+0x000032A8u; // 801D26F0
  c->r[3]=R16(c->r[31]+0x00000010u); // 801D26F4
  c->r[12]=R32(c->r[5]+0x00000224u); // 801D26F8
  c->ctr=c->r[12]; // 801D26FC
  if (true) { c->lr=0x801D2704u; dispatch(c,c->ctr); } // 801D2700
  c->lr=0x801D2708u; f_801D3E50(c); // 801D2704
  c->r[0]=0u+0x00000000u; // 801D2708
  W16(c->r[31]+0x00000010u,c->r[0]); // 801D270C
  c->r[0]=R8(c->r[1]+0x00000016u); // 801D2710
  cmps(c,0,(int32_t)c->r[0],0); // 801D2714
  if (!crb(c,2)) { goto L_801D2740; } // 801D2718
  c->r[0]=0u+0x00000001u; // 801D271C
  W8(c->r[31]+0x0000001Au,c->r[0]); // 801D2720
  goto L_801D2740; // 801D2724
L_801D2728:;
  c->r[0]=R8(c->r[13]+0xFFFF9AF8u); // 801D2728
  cmpu(c,0,c->r[0],0x00000005u); // 801D272C
  if (crb(c,0)) { goto L_801D2740; } // 801D2730
  c->r[4]=c->r[30]+0x0000023Cu; // 801D2734
  c->r[3]=0u+0x00000504u; // 801D2738
  c->lr=0x801D2740u; f_801CD9D0(c); // 801D273C
L_801D2740:;
  c->r[4]=R8(c->r[31]+0x00000015u); // 801D2740
  c->r[5]=c->r[31]+0x00000008u; // 801D2744
  c->r[3]=0u+0x00000017u; // 801D2748
  c->lr=0x801D2750u; f_801CE324(c); // 801D274C
  c->r[0]=R32(c->r[1]+0x00000044u); // 801D2750
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801D2754
  c->r[30]=R32(c->r[1]+0x00000038u); // 801D2758
  c->r[29]=R32(c->r[1]+0x00000034u); // 801D275C
  c->lr=c->r[0]; // 801D2760
  c->r[1]=c->r[1]+0x00000040u; // 801D2764
  return; // 801D2768
}

// bta_hh_ctrl_dat_act
void f_801D276C(Ctx* __restrict c) {
  trace_call(0x801D276Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D276C
  c->r[0]=c->lr; // 801D2770
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D2774
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801D2778
  c->r[31]=c->r[3]|c->r[3]; // 801D277C
  W32(c->r[1]+0x00000028u,c->r[30]); // 801D2780
  W32(c->r[1]+0x00000024u,c->r[29]); // 801D2784
  c->r[29]=0u+0x803A0000u; // 801D2788
  c->r[29]=c->r[29]+0xFFFFE528u; // 801D278C
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 801D2790
  c->r[0]=R8(c->r[13]+0xFFFF9AF8u); // 801D2794
  W32(c->r[1]+0x00000008u,c->r[4]); // 801D2798
  cmpu(c,0,c->r[0],0x00000005u); // 801D279C
  c->r[0]=R16(c->r[4]+0x00000004u); // 801D27A0
  c->r[30]=c->r[4]+c->r[0]; // 801D27A4
  if (crb(c,0)) { goto L_801D2818; } // 801D27A8
  c->r[0]=R16(c->r[3]+0x00000010u); // 801D27AC
  cmpu(c,0,c->r[0],0x00000009u); // 801D27B0
  if (crb(c,1)) { goto L_801D2808; } // 801D27B4
  c->r[3]=0u+0x803A0000u; // 801D27B8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D27BC
  c->r[3]=c->r[3]+0xFFFFE854u; // 801D27C0
  c->r[3]=R32(c->r[3]+c->r[0]); // 801D27C4
  c->ctr=c->r[3]; // 801D27C8
  if (true) { switch (c->ctr) { case 0x801D27D0u: goto L_801D27D0; case 0x801D27D8u: goto L_801D27D8; case 0x801D27E0u: goto L_801D27E0; case 0x801D27E8u: goto L_801D27E8; case 0x801D27F0u: goto L_801D27F0; case 0x801D27F8u: goto L_801D27F8; case 0x801D2800u: goto L_801D2800; case 0x801D2808u: goto L_801D2808; case 0x801D28B4u: goto L_801D28B4; case 0x801D28BCu: goto L_801D28BC; case 0x801D28C4u: goto L_801D28C4; case 0x801D28CCu: goto L_801D28CC; case 0x801D28D4u: goto L_801D28D4; case 0x801D28DCu: goto L_801D28DC; case 0x801D28E4u: goto L_801D28E4; case 0x801D28ECu: goto L_801D28EC; default: break; } dispatch(c,c->ctr); return; } // 801D27CC
L_801D27D0:;
  c->r[5]=c->r[29]+0x0000016Cu; // 801D27D0
  goto L_801D280C; // 801D27D4
L_801D27D8:;
  c->r[5]=c->r[29]+0x00000180u; // 801D27D8
  goto L_801D280C; // 801D27DC
L_801D27E0:;
  c->r[5]=c->r[29]+0x00000194u; // 801D27E0
  goto L_801D280C; // 801D27E4
L_801D27E8:;
  c->r[5]=c->r[29]+0x000001ACu; // 801D27E8
  goto L_801D280C; // 801D27EC
L_801D27F0:;
  c->r[5]=c->r[29]+0x000001C4u; // 801D27F0
  goto L_801D280C; // 801D27F4
L_801D27F8:;
  c->r[5]=c->r[29]+0x000001D8u; // 801D27F8
  goto L_801D280C; // 801D27FC
L_801D2800:;
  c->r[5]=c->r[29]+0x000001F0u; // 801D2800
  goto L_801D280C; // 801D2804
L_801D2808:;
  c->r[5]=c->r[29]+0x00000200u; // 801D2808
L_801D280C:;
  c->r[4]=c->r[29]+0x000002A8u; // 801D280C
  c->r[3]=0u+0x00000504u; // 801D2810
  c->lr=0x801D2818u; f_801CD9F0(c); // 801D2814
L_801D2818:;
  c->r[0]=0u+0x00000000u; // 801D2818
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801D281C
  c->r[0]=R8(c->r[31]+0x00000016u); // 801D2820
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801D2824
  c->r[4]=R16(c->r[31]+0x00000010u); // 801D2828
  cmps(c,0,(int32_t)c->r[4],7); // 801D282C
  if (crb(c,2)) { goto L_801D2888; } // 801D2830
  if (!crb(c,0)) { goto L_801D2850; } // 801D2834
  cmps(c,0,(int32_t)c->r[4],5); // 801D2838
  if (crb(c,2)) { goto L_801D2888; } // 801D283C
  if (!crb(c,0)) { goto L_801D287C; } // 801D2840
  cmps(c,0,(int32_t)c->r[4],4); // 801D2844
  if (!crb(c,0)) { goto L_801D2868; } // 801D2848
  goto L_801D2888; // 801D284C
L_801D2850:;
  cmps(c,0,(int32_t)c->r[4],9); // 801D2850
  if (crb(c,2)) { goto L_801D2888; } // 801D2854
  if (!crb(c,0)) { goto L_801D2888; } // 801D2858
  c->r[0]=R8(c->r[30]+0x00000008u); // 801D285C
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801D2860
  goto L_801D28FC; // 801D2864
L_801D2868:;
  c->r[4]=R32(c->r[1]+0x00000008u); // 801D2868
  c->r[3]=c->r[1]+0x0000000Eu; // 801D286C
  c->r[5]=0u+0x00000008u; // 801D2870
  c->lr=0x801D2878u; f_80004000(c); // 801D2874
  goto L_801D28FC; // 801D2878
L_801D287C:;
  c->r[0]=R8(c->r[30]+0x00000008u); // 801D287C
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801D2880
  goto L_801D28FC; // 801D2884
L_801D2888:;
  c->r[0]=R8(c->r[13]+0xFFFF9AF8u); // 801D2888
  cmpu(c,0,c->r[0],0x00000005u); // 801D288C
  if (crb(c,0)) { goto L_801D28FC; } // 801D2890
  cmpu(c,0,c->r[4],0x00000009u); // 801D2894
  if (crb(c,1)) { goto L_801D28EC; } // 801D2898
  c->r[3]=0u+0x803A0000u; // 801D289C
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801D28A0
  c->r[3]=c->r[3]+0xFFFFE82Cu; // 801D28A4
  c->r[3]=R32(c->r[3]+c->r[0]); // 801D28A8
  c->ctr=c->r[3]; // 801D28AC
  if (true) { switch (c->ctr) { case 0x801D27D0u: goto L_801D27D0; case 0x801D27D8u: goto L_801D27D8; case 0x801D27E0u: goto L_801D27E0; case 0x801D27E8u: goto L_801D27E8; case 0x801D27F0u: goto L_801D27F0; case 0x801D27F8u: goto L_801D27F8; case 0x801D2800u: goto L_801D2800; case 0x801D2808u: goto L_801D2808; case 0x801D28B4u: goto L_801D28B4; case 0x801D28BCu: goto L_801D28BC; case 0x801D28C4u: goto L_801D28C4; case 0x801D28CCu: goto L_801D28CC; case 0x801D28D4u: goto L_801D28D4; case 0x801D28DCu: goto L_801D28DC; case 0x801D28E4u: goto L_801D28E4; case 0x801D28ECu: goto L_801D28EC; default: break; } dispatch(c,c->ctr); return; } // 801D28B0
L_801D28B4:;
  c->r[5]=c->r[29]+0x0000016Cu; // 801D28B4
  goto L_801D28F0; // 801D28B8
L_801D28BC:;
  c->r[5]=c->r[29]+0x00000180u; // 801D28BC
  goto L_801D28F0; // 801D28C0
L_801D28C4:;
  c->r[5]=c->r[29]+0x00000194u; // 801D28C4
  goto L_801D28F0; // 801D28C8
L_801D28CC:;
  c->r[5]=c->r[29]+0x000001ACu; // 801D28CC
  goto L_801D28F0; // 801D28D0
L_801D28D4:;
  c->r[5]=c->r[29]+0x000001C4u; // 801D28D4
  goto L_801D28F0; // 801D28D8
L_801D28DC:;
  c->r[5]=c->r[29]+0x000001D8u; // 801D28DC
  goto L_801D28F0; // 801D28E0
L_801D28E4:;
  c->r[5]=c->r[29]+0x000001F0u; // 801D28E4
  goto L_801D28F0; // 801D28E8
L_801D28EC:;
  c->r[5]=c->r[29]+0x00000200u; // 801D28EC
L_801D28F0:;
  c->r[4]=c->r[29]+0x000002CCu; // 801D28F0
  c->r[3]=0u+0x00000504u; // 801D28F4
  c->lr=0x801D28FCu; f_801CD9F0(c); // 801D28F8
L_801D28FC:;
  c->r[4]=R8(c->r[31]+0x00000015u); // 801D28FC
  c->r[5]=c->r[31]+0x00000008u; // 801D2900
  c->r[3]=0u+0x00000017u; // 801D2904
  c->lr=0x801D290Cu; f_801CE358(c); // 801D2908
  c->r[4]=R8(c->r[31]+0x00000015u); // 801D290C
  c->r[5]=c->r[31]+0x00000008u; // 801D2910
  c->r[3]=0u+0x00000017u; // 801D2914
  c->lr=0x801D291Cu; f_801CE324(c); // 801D2918
  c->r[5]=0u+0x80480000u; // 801D291C
  c->r[4]=c->r[1]+0x0000000Cu; // 801D2920
  c->r[5]=c->r[5]+0x000032A8u; // 801D2924
  c->r[3]=R16(c->r[31]+0x00000010u); // 801D2928
  c->r[12]=R32(c->r[5]+0x00000224u); // 801D292C
  c->ctr=c->r[12]; // 801D2930
  if (true) { c->lr=0x801D2938u; dispatch(c,c->ctr); } // 801D2934
  c->r[0]=0u+0x00000000u; // 801D2938
  c->r[3]=c->r[1]+0x00000008u; // 801D293C
  W16(c->r[31]+0x00000010u,c->r[0]); // 801D2940
  c->lr=0x801D2948u; f_801CE7B0(c); // 801D2944
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D2948
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801D294C
  c->r[30]=R32(c->r[1]+0x00000028u); // 801D2950
  c->r[29]=R32(c->r[1]+0x00000024u); // 801D2954
  c->lr=c->r[0]; // 801D2958
  c->r[1]=c->r[1]+0x00000030u; // 801D295C
  return; // 801D2960
}

// bta_hh_close_act
void f_801D2964(Ctx* __restrict c) {
  trace_call(0x801D2964u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2964
  c->r[0]=c->lr; // 801D2968
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D296C
  c->r[0]=0u+0x00000000u; // 801D2970
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D2974
  c->r[31]=c->r[3]|c->r[3]; // 801D2978
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D297C
  c->r[30]=0u+0x00000003u; // 801D2980
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 801D2984
  c->r[0]=R8(c->r[3]+0x00000017u); // 801D2988
  c->r[6]=R32(c->r[4]+0x00000008u); // 801D298C
  cmps(c,0,(int32_t)c->r[0],0); // 801D2990
  if (crb(c,2)) { goto L_801D299C; } // 801D2994
  c->r[30]=0u+0x0000000Du; // 801D2998
L_801D299C:;
  c->r[5]=R8(c->r[3]+0x00000016u); // 801D299C
  c->r[0]=rotl(c->r[6],0)&0x00000700u; cr0(c,c->r[0]); // 801D29A0
  W8(c->r[1]+0x0000000Du,c->r[5]); // 801D29A4
  c->r[0]=R32(c->r[4]+0x00000008u); // 801D29A8
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801D29AC
  if (!crb(c,2)) { goto L_801D29D0; } // 801D29B0
  cmpu(c,0,c->r[6],0x0000000Fu); // 801D29B4
  if (crb(c,2)) { goto L_801D29D0; } // 801D29B8
  cmpu(c,0,c->r[6],0x0000000Eu); // 801D29BC
  if (crb(c,2)) { goto L_801D29D0; } // 801D29C0
  c->r[0]=R8(c->r[3]+0x0000001Au); // 801D29C4
  cmps(c,0,(int32_t)c->r[0],0); // 801D29C8
  if (!crb(c,2)) { goto L_801D2A24; } // 801D29CC
L_801D29D0:;
  c->r[3]=R8(c->r[3]+0x00000016u); // 801D29D0
  cmpu(c,0,c->r[6],0x0000000Fu); // 801D29D4
  c->r[0]=0u+0x00000006u; // 801D29D8
  W8(c->r[1]+0x00000017u,c->r[3]); // 801D29DC
  if (!crb(c,2)) { goto L_801D29E8; } // 801D29E0
  c->r[0]=0u+0x0000000Cu; // 801D29E4
L_801D29E8:;
  W8(c->r[1]+0x00000016u,c->r[0]); // 801D29E8
  c->r[3]=c->r[1]+0x00000010u; // 801D29EC
  c->r[4]=c->r[31]+0x00000008u; // 801D29F0
  c->lr=0x801D29F8u; f_801CE064(c); // 801D29F4
  c->r[3]=R8(c->r[31]+0x00000016u); // 801D29F8
  c->lr=0x801D2A00u; f_801E402C(c); // 801D29FC
  c->r[5]=0u+0x80480000u; // 801D2A00
  c->r[4]=c->r[1]+0x00000010u; // 801D2A04
  c->r[5]=c->r[5]+0x000032A8u; // 801D2A08
  c->r[3]=0u+0x00000002u; // 801D2A0C
  c->r[12]=R32(c->r[5]+0x00000224u); // 801D2A10
  c->ctr=c->r[12]; // 801D2A14
  if (true) { c->lr=0x801D2A1Cu; dispatch(c,c->ctr); } // 801D2A18
  c->lr=0x801D2A20u; f_801D3E50(c); // 801D2A1C
  goto L_801D2B4C; // 801D2A20
L_801D2A24:;
  c->r[3]=R8(c->r[3]+0x00000016u); // 801D2A24
  c->r[4]=R8(c->r[31]+0x00000015u); // 801D2A28
  c->lr=0x801D2A30u; f_80277870(c); // 801D2A2C
  c->r[4]=R8(c->r[31]+0x00000015u); // 801D2A30
  c->r[5]=c->r[31]+0x00000008u; // 801D2A34
  c->r[3]=0u+0x00000017u; // 801D2A38
  c->lr=0x801D2A40u; f_801CE22C(c); // 801D2A3C
  c->r[4]=0u+0x80480000u; // 801D2A40
  c->r[0]=0u+0x00000000u; // 801D2A44
  c->r[4]=c->r[4]+0x000032A8u; // 801D2A48
  c->r[3]=R8(c->r[4]+0x0000022Du); // 801D2A4C
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801D2A50
  W8(c->r[4]+0x0000022Du,c->r[3]); // 801D2A54
  W8(c->r[31]+0x0000001Au,c->r[0]); // 801D2A58
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 801D2A5C
  cmps(c,0,(int32_t)c->r[0],0); // 801D2A60
  if (crb(c,2)) { goto L_801D2A70; } // 801D2A64
  c->r[0]=0u+0x00000006u; // 801D2A68
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801D2A6C
L_801D2A70:;
  c->r[5]=0u+0x80480000u; // 801D2A70
  c->r[3]=c->r[30]|c->r[30]; // 801D2A74
  c->r[5]=c->r[5]+0x000032A8u; // 801D2A78
  c->r[4]=c->r[1]+0x0000000Cu; // 801D2A7C
  c->r[12]=R32(c->r[5]+0x00000224u); // 801D2A80
  c->ctr=c->r[12]; // 801D2A84
  if (true) { c->lr=0x801D2A8Cu; dispatch(c,c->ctr); } // 801D2A88
  c->r[0]=R8(c->r[31]+0x00000017u); // 801D2A8C
  cmps(c,0,(int32_t)c->r[0],0); // 801D2A90
  if (crb(c,2)) { goto L_801D2AA8; } // 801D2A94
  c->r[3]=R8(c->r[31]+0x00000016u); // 801D2A98
  c->lr=0x801D2AA0u; f_801E3DC0(c); // 801D2A9C
  c->r[3]=c->r[31]|c->r[31]; // 801D2AA0
  c->lr=0x801D2AA8u; f_801D3CC0(c); // 801D2AA4
L_801D2AA8:;
  c->lr=0x801D2AACu; f_801D3E50(c); // 801D2AA8
  c->r[4]=0u+0x00000000u; // 801D2AAC
  c->r[3]=0u+0x80480000u; // 801D2AB0
  W8(c->r[31]+0x00000017u,c->r[4]); // 801D2AB4
  c->r[3]=c->r[3]+0x000032A8u; // 801D2AB8
  W16(c->r[31]+0x00000010u,c->r[4]); // 801D2ABC
  c->r[0]=R8(c->r[3]+0x0000022Du); // 801D2AC0
  cmps(c,0,(int32_t)c->r[0],0); // 801D2AC4
  if (!crb(c,2)) { goto L_801D2B4C; } // 801D2AC8
  c->r[0]=R8(c->r[3]+0x0000022Eu); // 801D2ACC
  cmps(c,0,(int32_t)c->r[0],0); // 801D2AD0
  if (crb(c,2)) { goto L_801D2B4C; } // 801D2AD4
  W8(c->r[1]+0x00000008u,c->r[4]); // 801D2AD8
  c->lr=0x801D2AE0u; f_801E3B4C(c); // 801D2ADC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D2AE0
  if (crb(c,2)) { goto L_801D2AF0; } // 801D2AE4
  c->r[0]=0u+0x00000006u; // 801D2AE8
  W8(c->r[1]+0x00000008u,c->r[0]); // 801D2AEC
L_801D2AF0:;
  c->r[31]=0u+0x80480000u; // 801D2AF0
  c->r[30]=0u+0x00000000u; // 801D2AF4
  c->r[31]=c->r[31]+0x000032A8u; // 801D2AF8
L_801D2AFC:;
  c->r[0]=rotl(c->r[30],5)&0x00001FE0u; // 801D2AFC
  c->r[3]=c->r[31]+c->r[0]; // 801D2B00
  c->r[3]=c->r[3]+0x00000014u; // 801D2B04
  c->lr=0x801D2B0Cu; f_801CE7B0(c); // 801D2B08
  c->r[30]=c->r[30]+0x00000001u; // 801D2B0C
  cmpu(c,0,c->r[30],0x00000010u); // 801D2B10
  if (crb(c,0)) { IRQCHK(c); goto L_801D2AFC; } // 801D2B14
  c->r[31]=0u+0x80480000u; // 801D2B18
  c->r[31]=c->r[31]+0x000032A8u; // 801D2B1C
  c->r[3]=c->r[31]+0x00000228u; // 801D2B20
  c->lr=0x801D2B28u; f_801CE7B0(c); // 801D2B24
  c->r[12]=R32(c->r[31]+0x00000224u); // 801D2B28
  c->r[4]=c->r[1]+0x00000008u; // 801D2B2C
  c->r[3]=0u+0x00000001u; // 801D2B30
  c->ctr=c->r[12]; // 801D2B34
  if (true) { c->lr=0x801D2B3Cu; dispatch(c,c->ctr); } // 801D2B38
  c->r[3]=c->r[31]|c->r[31]; // 801D2B3C
  c->r[4]=0u+0x00000000u; // 801D2B40
  c->r[5]=0u+0x00000230u; // 801D2B44
  c->lr=0x801D2B4Cu; f_80004350(c); // 801D2B48
L_801D2B4C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D2B4C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D2B50
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D2B54
  c->lr=c->r[0]; // 801D2B58
  c->r[1]=c->r[1]+0x00000020u; // 801D2B5C
  return; // 801D2B60
}

// bta_hh_get_dscp_act
void f_801D2B64(Ctx* __restrict c) {
  trace_call(0x801D2B64u);
  c->r[5]=0u+0x80480000u; // 801D2B64
  c->r[4]=c->r[3]|c->r[3]; // 801D2B68
  c->r[5]=c->r[5]+0x000032A8u; // 801D2B6C
  c->r[3]=0u+0x0000000Au; // 801D2B70
  c->r[12]=R32(c->r[5]+0x00000224u); // 801D2B74
  c->ctr=c->r[12]; // 801D2B78
  if (true) { dispatch(c,c->ctr); return; } // 801D2B7C
}

// bta_hh_maint_dev_act
void f_801D2B80(Ctx* __restrict c) {
  trace_call(0x801D2B80u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2B80
  c->r[0]=c->lr; // 801D2B84
  c->r[5]=0u+0x00000006u; // 801D2B88
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D2B8C
  c->r[0]=0u+0x000000FFu; // 801D2B90
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D2B94
  c->r[31]=c->r[4]|c->r[4]; // 801D2B98
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D2B9C
  c->r[30]=c->r[3]|c->r[3]; // 801D2BA0
  W8(c->r[1]+0x00000016u,c->r[5]); // 801D2BA4
  W8(c->r[1]+0x00000017u,c->r[0]); // 801D2BA8
  c->r[0]=R16(c->r[4]+0x00000010u); // 801D2BAC
  cmps(c,0,(int32_t)c->r[0],12); // 801D2BB0
  if (crb(c,2)) { goto L_801D2C50; } // 801D2BB4
  if (!crb(c,0)) { goto L_801D2C94; } // 801D2BB8
  cmps(c,0,(int32_t)c->r[0],11); // 801D2BBC
  if (!crb(c,0)) { goto L_801D2BC8; } // 801D2BC0
  goto L_801D2C94; // 801D2BC4
L_801D2BC8:;
  c->r[3]=c->r[1]+0x00000010u; // 801D2BC8
  c->r[4]=c->r[4]+0x00000008u; // 801D2BCC
  c->lr=0x801D2BD4u; f_801CE064(c); // 801D2BD0
  c->r[3]=R8(c->r[30]+0x00000016u); // 801D2BD4
  cmpu(c,0,c->r[3],0x000000FFu); // 801D2BD8
  if (!crb(c,2)) { goto L_801D2C3C; } // 801D2BDC
  c->r[4]=R16(c->r[31]+0x0000000Eu); // 801D2BE0
  c->r[3]=c->r[31]+0x00000008u; // 801D2BE4
  c->r[5]=c->r[1]+0x00000008u; // 801D2BE8
  c->lr=0x801D2BF0u; f_801E3C30(c); // 801D2BEC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D2BF0
  if (!crb(c,2)) { goto L_801D2C48; } // 801D2BF4
  c->r[4]=R8(c->r[1]+0x00000008u); // 801D2BF8
  c->r[0]=0u+0x00000000u; // 801D2BFC
  W8(c->r[1]+0x00000016u,c->r[0]); // 801D2C00
  c->r[3]=c->r[30]|c->r[30]; // 801D2C04
  c->r[6]=0u+0x00000000u; // 801D2C08
  W8(c->r[1]+0x00000017u,c->r[4]); // 801D2C0C
  c->r[5]=R16(c->r[31]+0x0000000Eu); // 801D2C10
  c->r[7]=R8(c->r[31]+0x00000012u); // 801D2C14
  c->r[8]=R8(c->r[31]+0x00000013u); // 801D2C18
  c->lr=0x801D2C20u; f_801D3D40(c); // 801D2C1C
  c->r[3]=0u+0x80480000u; // 801D2C20
  c->r[0]=R8(c->r[1]+0x00000008u); // 801D2C24
  c->r[3]=c->r[3]+0x000032A8u; // 801D2C28
  c->r[4]=R8(c->r[30]+0x00000012u); // 801D2C2C
  c->r[3]=c->r[3]+c->r[0]; // 801D2C30
  W8(c->r[3]+0x00000214u,c->r[4]); // 801D2C34
  goto L_801D2C48; // 801D2C38
L_801D2C3C:;
  c->r[0]=0u+0x00000000u; // 801D2C3C
  W8(c->r[1]+0x00000017u,c->r[3]); // 801D2C40
  W8(c->r[1]+0x00000016u,c->r[0]); // 801D2C44
L_801D2C48:;
  c->lr=0x801D2C4Cu; f_801D3E50(c); // 801D2C48
  goto L_801D2CB0; // 801D2C4C
L_801D2C50:;
  c->r[0]=R16(c->r[4]+0x00000006u); // 801D2C50
  c->r[3]=c->r[1]+0x00000010u; // 801D2C54
  c->r[4]=c->r[30]+0x00000008u; // 801D2C58
  W8(c->r[1]+0x00000017u,c->r[0]); // 801D2C5C
  c->lr=0x801D2C64u; f_801CE064(c); // 801D2C60
  c->r[0]=R8(c->r[30]+0x0000001Cu); // 801D2C64
  cmpu(c,0,c->r[0],0x00000003u); // 801D2C68
  if (crb(c,2)) { goto L_801D2CB0; } // 801D2C6C
  c->r[3]=R8(c->r[1]+0x00000017u); // 801D2C70
  c->lr=0x801D2C78u; f_801E3DC0(c); // 801D2C74
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D2C78
  if (!crb(c,2)) { goto L_801D2CB0; } // 801D2C7C
  c->r[0]=0u+0x00000000u; // 801D2C80
  c->r[3]=c->r[30]|c->r[30]; // 801D2C84
  W8(c->r[1]+0x00000016u,c->r[0]); // 801D2C88
  c->lr=0x801D2C90u; f_801D3CC0(c); // 801D2C8C
  goto L_801D2CB0; // 801D2C90
L_801D2C94:;
  c->r[0]=R8(c->r[13]+0xFFFF9AF8u); // 801D2C94
  cmpu(c,0,c->r[0],0x00000005u); // 801D2C98
  if (crb(c,0)) { goto L_801D2CB0; } // 801D2C9C
  c->r[4]=0u+0x803A0000u; // 801D2CA0
  c->r[3]=0u+0x00000504u; // 801D2CA4
  c->r[4]=c->r[4]+0xFFFFE880u; // 801D2CA8
  c->lr=0x801D2CB0u; f_801CD9D0(c); // 801D2CAC
L_801D2CB0:;
  c->r[5]=0u+0x80480000u; // 801D2CB0
  c->r[4]=c->r[1]+0x00000010u; // 801D2CB4
  c->r[5]=c->r[5]+0x000032A8u; // 801D2CB8
  c->r[3]=R16(c->r[31]+0x00000010u); // 801D2CBC
  c->r[12]=R32(c->r[5]+0x00000224u); // 801D2CC0
  c->ctr=c->r[12]; // 801D2CC4
  if (true) { c->lr=0x801D2CCCu; dispatch(c,c->ctr); } // 801D2CC8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D2CCC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D2CD0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D2CD4
  c->lr=c->r[0]; // 801D2CD8
  c->r[1]=c->r[1]+0x00000020u; // 801D2CDC
  return; // 801D2CE0
}

// bta_hh_get_acl_q_info
void f_801D2CE4(Ctx* __restrict c) {
  trace_call(0x801D2CE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2CE4
  c->r[0]=c->lr; // 801D2CE8
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D2CEC
  c->r[11]=c->r[1]+0x00000040u; // 801D2CF0
  c->lr=0x801D2CF8u; f_800C2E4C(c); // 801D2CF4
  c->r[3]=c->r[1]+0x00000008u; // 801D2CF8
  c->r[31]=0u+0x00000000u; // 801D2CFC
  c->r[4]=0u+0x00000000u; // 801D2D00
  c->r[5]=0u+0x0000001Eu; // 801D2D04
  c->lr=0x801D2D0Cu; f_80004350(c); // 801D2D08
  c->r[30]=0u+0x80480000u; // 801D2D0C
  c->r[29]=0u+0x80480000u; // 801D2D10
  c->r[30]=c->r[30]+0x00006198u; // 801D2D14
  c->r[27]=0u+0x00000000u; // 801D2D18
  c->r[29]=c->r[29]+0x000032A8u; // 801D2D1C
L_801D2D20:;
  c->r[0]=rotl(c->r[27],5)&0x00001FE0u; // 801D2D20
  c->r[3]=c->r[29]+c->r[0]; // 801D2D24
  c->r[0]=R8(c->r[3]+0x00000028u); // 801D2D28
  cmps(c,0,(int32_t)c->r[0],0); // 801D2D2C
  if (crb(c,2)) { goto L_801D2DA0; } // 801D2D30
  c->r[0]=R8(c->r[3]+0x0000002Cu); // 801D2D34
  cmpu(c,0,c->r[0],0x00000003u); // 801D2D38
  if (!crb(c,2)) { goto L_801D2DA0; } // 801D2D3C
  c->r[4]=R8(c->r[3]+0x00000026u); // 801D2D40
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801D2D44
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)6); // 801D2D48
  c->r[28]=c->r[1]+0x00000008u; // 801D2D4C
  c->r[3]=0u+0x00000000u; // 801D2D50
  c->r[28]=c->r[28]+c->r[5]; // 801D2D54
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)52); // 801D2D58
  W8(c->r[28]+0x00000006u,c->r[4]); // 801D2D5C
  c->r[4]=c->r[30]+c->r[0]; // 801D2D60
  c->r[4]=R16(c->r[4]+0x00000016u); // 801D2D64
  c->lr=0x801D2D6Cu; f_801EBC48(c); // 801D2D68
  cmps(c,0,(int32_t)c->r[3],0); // 801D2D6C
  if (crb(c,2)) { goto L_801D2D9C; } // 801D2D70
  c->r[3]=R32(c->r[3]+0x00000010u); // 801D2D74
  cmps(c,0,(int32_t)c->r[3],0); // 801D2D78
  if (crb(c,2)) { goto L_801D2D9C; } // 801D2D7C
  c->r[0]=R8(c->r[3]+0x00000000u); // 801D2D80
  cmps(c,0,(int32_t)c->r[0],0); // 801D2D84
  if (crb(c,2)) { goto L_801D2D9C; } // 801D2D88
  c->r[0]=R16(c->r[3]+0x0000004Cu); // 801D2D8C
  W16(c->r[28]+0x00000008u,c->r[0]); // 801D2D90
  c->r[0]=R16(c->r[3]+0x00000038u); // 801D2D94
  W16(c->r[28]+0x0000000Au,c->r[0]); // 801D2D98
L_801D2D9C:;
  c->r[31]=c->r[31]+0x00000001u; // 801D2D9C
L_801D2DA0:;
  c->r[27]=c->r[27]+0x00000001u; // 801D2DA0
  cmpu(c,0,c->r[27],0x00000010u); // 801D2DA4
  if (crb(c,0)) { IRQCHK(c); goto L_801D2D20; } // 801D2DA8
  c->r[4]=0u+0x80480000u; // 801D2DAC
  c->r[3]=0u+0x80480000u; // 801D2DB0
  c->r[4]=c->r[4]+0x000065A0u; // 801D2DB4
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801D2DB8
  c->r[3]=c->r[3]+0x000032A8u; // 801D2DBC
  c->r[6]=R16(c->r[4]+0x00000004u); // 801D2DC0
  c->r[5]=R16(c->r[4]+0x00000002u); // 801D2DC4
  c->r[4]=c->r[1]+0x00000008u; // 801D2DC8
  c->r[12]=R32(c->r[3]+0x00000224u); // 801D2DCC
  c->r[3]=0u+0x0000000Fu; // 801D2DD0
  W16(c->r[1]+0x00000008u,c->r[6]); // 801D2DD4
  W16(c->r[1]+0x0000000Au,c->r[5]); // 801D2DD8
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 801D2DDC
  c->ctr=c->r[12]; // 801D2DE0
  if (true) { c->lr=0x801D2DE8u; dispatch(c,c->ctr); } // 801D2DE4
  c->r[11]=c->r[1]+0x00000040u; // 801D2DE8
  c->lr=0x801D2DF0u; f_800C2E98(c); // 801D2DEC
  c->r[0]=R32(c->r[1]+0x00000044u); // 801D2DF0
  c->lr=c->r[0]; // 801D2DF4
  c->r[1]=c->r[1]+0x00000040u; // 801D2DF8
  return; // 801D2DFC
}

// bta_hh_write_dev_act
void f_801D2E00(Ctx* __restrict c) {
  trace_call(0x801D2E00u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2E00
  c->r[0]=c->lr; // 801D2E04
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D2E08
  c->r[0]=0u+0x00000000u; // 801D2E0C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D2E10
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D2E14
  c->r[30]=c->r[4]|c->r[4]; // 801D2E18
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D2E1C
  c->r[29]=c->r[3]|c->r[3]; // 801D2E20
  W16(c->r[1]+0x00000008u,c->r[0]); // 801D2E24
  c->r[31]=R8(c->r[4]+0x00000008u); // 801D2E28
  c->r[0]=R8(c->r[3]+0x00000016u); // 801D2E2C
  W8(c->r[1]+0x00000009u,c->r[0]); // 801D2E30
  c->r[3]=R8(c->r[3]+0x00000016u); // 801D2E34
  c->r[4]=R8(c->r[4]+0x00000008u); // 801D2E38
  c->r[5]=R8(c->r[30]+0x00000009u); // 801D2E3C
  c->r[6]=R16(c->r[30]+0x0000000Cu); // 801D2E40
  c->r[7]=R8(c->r[30]+0x0000000Au); // 801D2E44
  c->r[8]=R32(c->r[30]+0x00000010u); // 801D2E48
  c->lr=0x801D2E50u; f_801E3EEC(c); // 801D2E4C
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[5]); // 801D2E50
  if (crb(c,2)) { goto L_801D2EDC; } // 801D2E54
  c->r[0]=R8(c->r[13]+0xFFFF9AF8u); // 801D2E58
  cmpu(c,0,c->r[0],0x00000001u); // 801D2E5C
  if (crb(c,0)) { goto L_801D2E74; } // 801D2E60
  c->r[4]=0u+0x803A0000u; // 801D2E64
  c->r[3]=0u+0x00000500u; // 801D2E68
  c->r[4]=c->r[4]+0xFFFFE890u; // 801D2E6C
  c->lr=0x801D2E74u; f_801CD9F0(c); // 801D2E70
L_801D2E74:;
  c->r[0]=0u+0x00000006u; // 801D2E74
  W8(c->r[1]+0x00000008u,c->r[0]); // 801D2E78
  c->r[0]=R8(c->r[30]+0x00000008u); // 801D2E7C
  cmpu(c,0,c->r[0],0x00000001u); // 801D2E80
  if (crb(c,2)) { goto L_801D2EB0; } // 801D2E84
  cmpu(c,0,c->r[0],0x0000000Au); // 801D2E88
  if (crb(c,2)) { goto L_801D2EB0; } // 801D2E8C
  c->r[5]=0u+0x80480000u; // 801D2E90
  c->r[3]=c->r[31]|c->r[31]; // 801D2E94
  c->r[5]=c->r[5]+0x000032A8u; // 801D2E98
  c->r[4]=c->r[1]+0x00000008u; // 801D2E9C
  c->r[12]=R32(c->r[5]+0x00000224u); // 801D2EA0
  c->ctr=c->r[12]; // 801D2EA4
  if (true) { c->lr=0x801D2EACu; dispatch(c,c->ctr); } // 801D2EA8
  goto L_801D2FAC; // 801D2EAC
L_801D2EB0:;
  c->r[0]=R8(c->r[30]+0x00000009u); // 801D2EB0
  cmpu(c,0,c->r[0],0x00000005u); // 801D2EB4
  if (!crb(c,2)) { goto L_801D2FAC; } // 801D2EB8
  c->r[5]=0u+0x80480000u; // 801D2EBC
  c->r[4]=c->r[1]+0x00000008u; // 801D2EC0
  c->r[5]=c->r[5]+0x000032A8u; // 801D2EC4
  c->r[3]=0u+0x0000000Du; // 801D2EC8
  c->r[12]=R32(c->r[5]+0x00000224u); // 801D2ECC
  c->ctr=c->r[12]; // 801D2ED0
  if (true) { c->lr=0x801D2ED8u; dispatch(c,c->ctr); } // 801D2ED4
  goto L_801D2FAC; // 801D2ED8
L_801D2EDC:;
  c->r[5]=R8(c->r[30]+0x00000008u); // 801D2EDC
  cmps(c,0,(int32_t)c->r[5],10); // 801D2EE0
  if (crb(c,2)) { goto L_801D2F10; } // 801D2EE4
  if (!crb(c,0)) { goto L_801D2F28; } // 801D2EE8
  cmps(c,0,(int32_t)c->r[5],1); // 801D2EEC
  if (crb(c,2)) { goto L_801D2F10; } // 801D2EF0
  if (crb(c,0)) { goto L_801D2F28; } // 801D2EF4
  cmps(c,0,(int32_t)c->r[5],4); // 801D2EF8
  if (!crb(c,0)) { goto L_801D2F08; } // 801D2EFC
  goto L_801D2F28; // 801D2F00
  goto L_801D2F28; // 801D2F04
L_801D2F08:;
  W16(c->r[29]+0x00000010u,c->r[31]); // 801D2F08
  goto L_801D2F44; // 801D2F0C
L_801D2F10:;
  c->r[0]=R8(c->r[30]+0x00000009u); // 801D2F10
  cmpu(c,0,c->r[0],0x00000005u); // 801D2F14
  if (!crb(c,2)) { goto L_801D2F44; } // 801D2F18
  c->r[0]=0u+0x00000001u; // 801D2F1C
  W8(c->r[29]+0x00000017u,c->r[0]); // 801D2F20
  goto L_801D2F44; // 801D2F24
L_801D2F28:;
  c->r[0]=R8(c->r[13]+0xFFFF9AF8u); // 801D2F28
  cmpu(c,0,c->r[0],0x00000005u); // 801D2F2C
  if (crb(c,0)) { goto L_801D2F44; } // 801D2F30
  c->r[4]=0u+0x803A0000u; // 801D2F34
  c->r[3]=0u+0x00000504u; // 801D2F38
  c->r[4]=c->r[4]+0xFFFFE8ACu; // 801D2F3C
  c->lr=0x801D2F44u; f_801CD9F0(c); // 801D2F40
L_801D2F44:;
  c->r[0]=R8(c->r[30]+0x00000008u); // 801D2F44
  cmpu(c,0,c->r[0],0x00000001u); // 801D2F48
  if (crb(c,2)) { goto L_801D2F74; } // 801D2F4C
  c->r[4]=R8(c->r[29]+0x00000015u); // 801D2F50
  c->r[5]=c->r[29]+0x00000008u; // 801D2F54
  c->r[3]=0u+0x00000017u; // 801D2F58
  c->lr=0x801D2F60u; f_801CE358(c); // 801D2F5C
  c->r[4]=R8(c->r[29]+0x00000015u); // 801D2F60
  c->r[5]=c->r[29]+0x00000008u; // 801D2F64
  c->r[3]=0u+0x00000017u; // 801D2F68
  c->lr=0x801D2F70u; f_801CE324(c); // 801D2F6C
  goto L_801D2FAC; // 801D2F70
L_801D2F74:;
  c->r[0]=R8(c->r[30]+0x00000009u); // 801D2F74
  cmpu(c,0,c->r[0],0x00000003u); // 801D2F78
  if (!crb(c,2)) { goto L_801D2F94; } // 801D2F7C
  c->r[4]=R8(c->r[29]+0x00000015u); // 801D2F80
  c->r[5]=c->r[29]+0x00000008u; // 801D2F84
  c->r[3]=0u+0x00000017u; // 801D2F88
  c->lr=0x801D2F90u; f_801CE2F0(c); // 801D2F8C
  goto L_801D2FAC; // 801D2F90
L_801D2F94:;
  cmpu(c,0,c->r[0],0x00000004u); // 801D2F94
  if (!crb(c,2)) { goto L_801D2FAC; } // 801D2F98
  c->r[4]=R8(c->r[29]+0x00000015u); // 801D2F9C
  c->r[5]=c->r[29]+0x00000008u; // 801D2FA0
  c->r[3]=0u+0x00000017u; // 801D2FA4
  c->lr=0x801D2FACu; f_801CE358(c); // 801D2FA8
L_801D2FAC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D2FAC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D2FB0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D2FB4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D2FB8
  c->lr=c->r[0]; // 801D2FBC
  c->r[1]=c->r[1]+0x00000020u; // 801D2FC0
  return; // 801D2FC4
}

// bta_hh_cback
void f_801D2FC8(Ctx* __restrict c) {
  trace_call(0x801D2FC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D2FC8
  c->r[0]=c->lr; // 801D2FCC
  c->r[7]=0u+0x803A0000u; // 801D2FD0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D2FD4
  c->r[7]=c->r[7]+0xFFFFE528u; // 801D2FD8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D2FDC
  c->r[31]=0u+0x00001710u; // 801D2FE0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D2FE4
  c->r[30]=c->r[5]|c->r[5]; // 801D2FE8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D2FEC
  c->r[29]=c->r[4]|c->r[4]; // 801D2FF0
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D2FF4
  c->r[28]=c->r[3]|c->r[3]; // 801D2FF8
  c->r[0]=R8(c->r[13]+0xFFFF9AF8u); // 801D2FFC
  W32(c->r[1]+0x00000008u,c->r[6]); // 801D3000
  cmpu(c,0,c->r[0],0x00000005u); // 801D3004
  if (crb(c,0)) { goto L_801D3084; } // 801D3008
  cmpu(c,0,c->r[4],0x00000008u); // 801D300C
  if (crb(c,1)) { goto L_801D3074; } // 801D3010
  c->r[3]=0u+0x803A0000u; // 801D3014
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801D3018
  c->r[3]=c->r[3]+0xFFFFE9FCu; // 801D301C
  c->r[3]=R32(c->r[3]+c->r[0]); // 801D3020
  c->ctr=c->r[3]; // 801D3024
  if (true) { switch (c->ctr) { case 0x801D302Cu: goto L_801D302C; case 0x801D3034u: goto L_801D3034; case 0x801D303Cu: goto L_801D303C; case 0x801D3044u: goto L_801D3044; case 0x801D304Cu: goto L_801D304C; case 0x801D3054u: goto L_801D3054; case 0x801D305Cu: goto L_801D305C; case 0x801D3064u: goto L_801D3064; case 0x801D306Cu: goto L_801D306C; case 0x801D30A4u: goto L_801D30A4; case 0x801D30ACu: goto L_801D30AC; case 0x801D30B4u: goto L_801D30B4; case 0x801D30BCu: goto L_801D30BC; case 0x801D30C4u: goto L_801D30C4; case 0x801D30CCu: goto L_801D30CC; case 0x801D30D8u: goto L_801D30D8; case 0x801D3210u: goto L_801D3210; default: break; } dispatch(c,c->ctr); return; } // 801D3028
L_801D302C:;
  c->r[5]=c->r[7]+0x000003ACu; // 801D302C
  goto L_801D3078; // 801D3030
L_801D3034:;
  c->r[5]=c->r[7]+0x000003C0u; // 801D3034
  goto L_801D3078; // 801D3038
L_801D303C:;
  c->r[5]=c->r[7]+0x000003D4u; // 801D303C
  goto L_801D3078; // 801D3040
L_801D3044:;
  c->r[5]=c->r[7]+0x000003ECu; // 801D3044
  goto L_801D3078; // 801D3048
L_801D304C:;
  c->r[5]=c->r[7]+0x00000404u; // 801D304C
  goto L_801D3078; // 801D3050
L_801D3054:;
  c->r[5]=c->r[7]+0x0000041Cu; // 801D3054
  goto L_801D3078; // 801D3058
L_801D305C:;
  c->r[5]=c->r[7]+0x00000434u; // 801D305C
  goto L_801D3078; // 801D3060
L_801D3064:;
  c->r[5]=c->r[7]+0x0000044Cu; // 801D3064
  goto L_801D3078; // 801D3068
L_801D306C:;
  c->r[5]=c->r[7]+0x00000464u; // 801D306C
  goto L_801D3078; // 801D3070
L_801D3074:;
  c->r[5]=c->r[7]+0x0000047Cu; // 801D3074
L_801D3078:;
  c->r[4]=c->r[7]+0x00000490u; // 801D3078
  c->r[3]=0u+0x00000504u; // 801D307C
  c->lr=0x801D3084u; f_801CD9F0(c); // 801D3080
L_801D3084:;
  cmpu(c,0,c->r[29],0x00000008u); // 801D3084
  if (crb(c,1)) { goto L_801D3210; } // 801D3088
  c->r[3]=0u+0x803A0000u; // 801D308C
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 801D3090
  c->r[3]=c->r[3]+0xFFFFE9D8u; // 801D3094
  c->r[3]=R32(c->r[3]+c->r[0]); // 801D3098
  c->ctr=c->r[3]; // 801D309C
  if (true) { switch (c->ctr) { case 0x801D302Cu: goto L_801D302C; case 0x801D3034u: goto L_801D3034; case 0x801D303Cu: goto L_801D303C; case 0x801D3044u: goto L_801D3044; case 0x801D304Cu: goto L_801D304C; case 0x801D3054u: goto L_801D3054; case 0x801D305Cu: goto L_801D305C; case 0x801D3064u: goto L_801D3064; case 0x801D306Cu: goto L_801D306C; case 0x801D30A4u: goto L_801D30A4; case 0x801D30ACu: goto L_801D30AC; case 0x801D30B4u: goto L_801D30B4; case 0x801D30BCu: goto L_801D30BC; case 0x801D30C4u: goto L_801D30C4; case 0x801D30CCu: goto L_801D30CC; case 0x801D30D8u: goto L_801D30D8; case 0x801D3210u: goto L_801D3210; default: break; } dispatch(c,c->ctr); return; } // 801D30A0
L_801D30A4:;
  c->r[31]=0u+0x00001702u; // 801D30A4
  goto L_801D3210; // 801D30A8
L_801D30AC:;
  c->r[31]=0u+0x00001703u; // 801D30AC
  goto L_801D3210; // 801D30B0
L_801D30B4:;
  c->r[31]=0u+0x00001704u; // 801D30B4
  goto L_801D3210; // 801D30B8
L_801D30BC:;
  c->r[31]=0u+0x00001706u; // 801D30BC
  goto L_801D3210; // 801D30C0
L_801D30C4:;
  c->r[31]=0u+0x00001705u; // 801D30C4
  goto L_801D3210; // 801D30C8
L_801D30CC:;
  c->r[3]=c->r[1]+0x00000008u; // 801D30CC
  c->lr=0x801D30D4u; f_801CE7B0(c); // 801D30D0
  goto L_801D3210; // 801D30D4
L_801D30D8:;
  c->r[4]=0u+0x80480000u; // 801D30D8
  c->r[0]=0u+0x00000002u; // 801D30DC
  c->r[4]=c->r[4]+0x000032A8u; // 801D30E0
  c->r[5]=0u+0x00000000u; // 801D30E4
  c->ctr=c->r[0]; // 801D30E8
L_801D30EC:;
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 801D30EC
  c->r[3]=c->r[4]+c->r[0]; // 801D30F0
  c->r[0]=R8(c->r[3]+0x00000026u); // 801D30F4
  cmpu(c,0,c->r[28],c->r[0]); // 801D30F8
  if (!crb(c,2)) { goto L_801D310C; } // 801D30FC
  c->r[0]=0u+0x00000001u; // 801D3100
  W8(c->r[3]+0x00000027u,c->r[0]); // 801D3104
  goto L_801D3210; // 801D3108
L_801D310C:;
  c->r[5]=c->r[5]+0x00000001u; // 801D310C
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 801D3110
  c->r[3]=c->r[4]+c->r[0]; // 801D3114
  c->r[0]=R8(c->r[3]+0x00000026u); // 801D3118
  cmpu(c,0,c->r[28],c->r[0]); // 801D311C
  if (!crb(c,2)) { goto L_801D3130; } // 801D3120
  c->r[0]=0u+0x00000001u; // 801D3124
  W8(c->r[3]+0x00000027u,c->r[0]); // 801D3128
  goto L_801D3210; // 801D312C
L_801D3130:;
  c->r[5]=c->r[5]+0x00000001u; // 801D3130
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 801D3134
  c->r[3]=c->r[4]+c->r[0]; // 801D3138
  c->r[0]=R8(c->r[3]+0x00000026u); // 801D313C
  cmpu(c,0,c->r[28],c->r[0]); // 801D3140
  if (!crb(c,2)) { goto L_801D3154; } // 801D3144
  c->r[0]=0u+0x00000001u; // 801D3148
  W8(c->r[3]+0x00000027u,c->r[0]); // 801D314C
  goto L_801D3210; // 801D3150
L_801D3154:;
  c->r[5]=c->r[5]+0x00000001u; // 801D3154
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 801D3158
  c->r[3]=c->r[4]+c->r[0]; // 801D315C
  c->r[0]=R8(c->r[3]+0x00000026u); // 801D3160
  cmpu(c,0,c->r[28],c->r[0]); // 801D3164
  if (!crb(c,2)) { goto L_801D3178; } // 801D3168
  c->r[0]=0u+0x00000001u; // 801D316C
  W8(c->r[3]+0x00000027u,c->r[0]); // 801D3170
  goto L_801D3210; // 801D3174
L_801D3178:;
  c->r[5]=c->r[5]+0x00000001u; // 801D3178
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 801D317C
  c->r[3]=c->r[4]+c->r[0]; // 801D3180
  c->r[0]=R8(c->r[3]+0x00000026u); // 801D3184
  cmpu(c,0,c->r[28],c->r[0]); // 801D3188
  if (!crb(c,2)) { goto L_801D319C; } // 801D318C
  c->r[0]=0u+0x00000001u; // 801D3190
  W8(c->r[3]+0x00000027u,c->r[0]); // 801D3194
  goto L_801D3210; // 801D3198
L_801D319C:;
  c->r[5]=c->r[5]+0x00000001u; // 801D319C
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 801D31A0
  c->r[3]=c->r[4]+c->r[0]; // 801D31A4
  c->r[0]=R8(c->r[3]+0x00000026u); // 801D31A8
  cmpu(c,0,c->r[28],c->r[0]); // 801D31AC
  if (!crb(c,2)) { goto L_801D31C0; } // 801D31B0
  c->r[0]=0u+0x00000001u; // 801D31B4
  W8(c->r[3]+0x00000027u,c->r[0]); // 801D31B8
  goto L_801D3210; // 801D31BC
L_801D31C0:;
  c->r[5]=c->r[5]+0x00000001u; // 801D31C0
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 801D31C4
  c->r[3]=c->r[4]+c->r[0]; // 801D31C8
  c->r[0]=R8(c->r[3]+0x00000026u); // 801D31CC
  cmpu(c,0,c->r[28],c->r[0]); // 801D31D0
  if (!crb(c,2)) { goto L_801D31E4; } // 801D31D4
  c->r[0]=0u+0x00000001u; // 801D31D8
  W8(c->r[3]+0x00000027u,c->r[0]); // 801D31DC
  goto L_801D3210; // 801D31E0
L_801D31E4:;
  c->r[5]=c->r[5]+0x00000001u; // 801D31E4
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 801D31E8
  c->r[3]=c->r[4]+c->r[0]; // 801D31EC
  c->r[0]=R8(c->r[3]+0x00000026u); // 801D31F0
  cmpu(c,0,c->r[28],c->r[0]); // 801D31F4
  if (!crb(c,2)) { goto L_801D3208; } // 801D31F8
  c->r[0]=0u+0x00000001u; // 801D31FC
  W8(c->r[3]+0x00000027u,c->r[0]); // 801D3200
  goto L_801D3210; // 801D3204
L_801D3208:;
  c->r[5]=c->r[5]+0x00000001u; // 801D3208
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D30EC; } // 801D320C
L_801D3210:;
  cmpu(c,0,c->r[31],0x00001710u); // 801D3210
  if (crb(c,2)) { goto L_801D3240; } // 801D3214
  c->r[3]=0u+0x00000018u; // 801D3218
  c->lr=0x801D3220u; f_801CAC80(c); // 801D321C
  cmps(c,0,(int32_t)c->r[3],0); // 801D3220
  if (crb(c,2)) { goto L_801D3240; } // 801D3224
  W16(c->r[3]+0x00000000u,c->r[31]); // 801D3228
  W16(c->r[3]+0x00000006u,c->r[28]); // 801D322C
  W32(c->r[3]+0x00000008u,c->r[30]); // 801D3230
  c->r[0]=R32(c->r[1]+0x00000008u); // 801D3234
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801D3238
  c->lr=0x801D3240u; f_801CE510(c); // 801D323C
L_801D3240:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D3240
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D3244
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D3248
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D324C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D3250
  c->lr=c->r[0]; // 801D3254
  c->r[1]=c->r[1]+0x00000020u; // 801D3258
  return; // 801D325C
}

// BTA_HhEnable
void f_801D3260(Ctx* __restrict c) {
  trace_call(0x801D3260u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3260
  c->r[0]=c->lr; // 801D3264
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D3268
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D326C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D3270
  c->r[30]=c->r[4]|c->r[4]; // 801D3274
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D3278
  c->r[29]=c->r[3]|c->r[3]; // 801D327C
  c->lr=0x801D3284u; f_801CC310(c); // 801D3280
  c->r[3]=0u+0x00000017u; // 801D3284
  c->r[4]=c->r[2]+0xFFFFB040u; // 801D3288
  c->lr=0x801D3290u; f_801CE4FC(c); // 801D328C
  c->lr=0x801D3294u; f_801CC320(c); // 801D3290
  c->r[3]=0u+0x00000034u; // 801D3294
  c->lr=0x801D329Cu; f_801CAC80(c); // 801D3298
  cmps(c,0,(int32_t)c->r[3],0); // 801D329C
  c->r[31]=c->r[3]|c->r[3]; // 801D32A0
  if (crb(c,2)) { goto L_801D32CC; } // 801D32A4
  c->r[4]=0u+0x00000000u; // 801D32A8
  c->r[5]=0u+0x00000034u; // 801D32AC
  c->lr=0x801D32B4u; f_80004350(c); // 801D32B0
  c->r[0]=0u+0x0000170Cu; // 801D32B4
  c->r[3]=c->r[31]|c->r[31]; // 801D32B8
  W16(c->r[31]+0x00000000u,c->r[0]); // 801D32BC
  W32(c->r[31]+0x00000030u,c->r[30]); // 801D32C0
  W8(c->r[31]+0x00000008u,c->r[29]); // 801D32C4
  c->lr=0x801D32CCu; f_801CE510(c); // 801D32C8
L_801D32CC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D32CC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D32D0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D32D4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D32D8
  c->lr=c->r[0]; // 801D32DC
  c->r[1]=c->r[1]+0x00000020u; // 801D32E0
  return; // 801D32E4
}

// BTA_HhDisable
void f_801D32E8(Ctx* __restrict c) {
  trace_call(0x801D32E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D32E8
  c->r[0]=c->lr; // 801D32EC
  c->r[3]=0u+0x00000008u; // 801D32F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D32F4
  c->lr=0x801D32FCu; f_801CAC80(c); // 801D32F8
  cmps(c,0,(int32_t)c->r[3],0); // 801D32FC
  if (crb(c,2)) { goto L_801D3310; } // 801D3300
  c->r[0]=0u+0x0000170Du; // 801D3304
  W16(c->r[3]+0x00000000u,c->r[0]); // 801D3308
  c->lr=0x801D3310u; f_801CE510(c); // 801D330C
L_801D3310:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D3310
  c->lr=c->r[0]; // 801D3314
  c->r[1]=c->r[1]+0x00000010u; // 801D3318
  return; // 801D331C
}

// BTA_HhClose
void f_801D3320(Ctx* __restrict c) {
  trace_call(0x801D3320u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3320
  c->r[0]=c->lr; // 801D3324
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D3328
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D332C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D3330
  c->r[30]=c->r[3]|c->r[3]; // 801D3334
  c->r[3]=0u+0x00000008u; // 801D3338
  c->lr=0x801D3340u; f_801CAC80(c); // 801D333C
  cmps(c,0,(int32_t)c->r[3],0); // 801D3340
  c->r[31]=c->r[3]|c->r[3]; // 801D3344
  if (crb(c,2)) { goto L_801D336C; } // 801D3348
  c->r[4]=0u+0x00000000u; // 801D334C
  c->r[5]=0u+0x00000008u; // 801D3350
  c->lr=0x801D3358u; f_80004350(c); // 801D3354
  c->r[0]=0u+0x00001701u; // 801D3358
  c->r[3]=c->r[31]|c->r[31]; // 801D335C
  W16(c->r[31]+0x00000000u,c->r[0]); // 801D3360
  W16(c->r[31]+0x00000006u,c->r[30]); // 801D3364
  c->lr=0x801D336Cu; f_801CE510(c); // 801D3368
L_801D336C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D336C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D3370
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D3374
  c->lr=c->r[0]; // 801D3378
  c->r[1]=c->r[1]+0x00000010u; // 801D337C
  return; // 801D3380
}

// BTA_HhOpen
void f_801D3384(Ctx* __restrict c) {
  trace_call(0x801D3384u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3384
  c->r[0]=c->lr; // 801D3388
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D338C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D3390
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D3394
  c->r[30]=c->r[5]|c->r[5]; // 801D3398
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D339C
  c->r[29]=c->r[4]|c->r[4]; // 801D33A0
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D33A4
  c->r[28]=c->r[3]|c->r[3]; // 801D33A8
  c->r[3]=0u+0x00000010u; // 801D33AC
  c->lr=0x801D33B4u; f_801CAC80(c); // 801D33B0
  cmps(c,0,(int32_t)c->r[3],0); // 801D33B4
  c->r[31]=c->r[3]|c->r[3]; // 801D33B8
  if (crb(c,2)) { goto L_801D33FC; } // 801D33BC
  c->r[4]=0u+0x00000000u; // 801D33C0
  c->r[5]=0u+0x00000010u; // 801D33C4
  c->lr=0x801D33CCu; f_80004350(c); // 801D33C8
  c->r[3]=0u+0x00001700u; // 801D33CC
  c->r[0]=0u+0x000000FFu; // 801D33D0
  W16(c->r[31]+0x00000000u,c->r[3]); // 801D33D4
  c->r[4]=c->r[28]|c->r[28]; // 801D33D8
  c->r[3]=c->r[31]+0x00000008u; // 801D33DC
  W16(c->r[31]+0x00000006u,c->r[0]); // 801D33E0
  W8(c->r[31]+0x0000000Eu,c->r[30]); // 801D33E4
  W8(c->r[31]+0x0000000Fu,c->r[29]); // 801D33E8
  c->lr=0x801D33F0u; f_801CE064(c); // 801D33EC
  c->r[3]=c->r[31]|c->r[31]; // 801D33F0
  c->lr=0x801D33F8u; f_801CE510(c); // 801D33F4
  goto L_801D3418; // 801D33F8
L_801D33FC:;
  c->r[0]=R8(c->r[13]+0xFFFF9AF8u); // 801D33FC
  cmpu(c,0,c->r[0],0x00000001u); // 801D3400
  if (crb(c,0)) { goto L_801D3418; } // 801D3404
  c->r[4]=0u+0x803A0000u; // 801D3408
  c->r[3]=0u+0x00000500u; // 801D340C
  c->r[4]=c->r[4]+0xFFFFEA20u; // 801D3410
  c->lr=0x801D3418u; f_801CD9D0(c); // 801D3414
L_801D3418:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D3418
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D341C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D3420
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D3424
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D3428
  c->lr=c->r[0]; // 801D342C
  c->r[1]=c->r[1]+0x00000020u; // 801D3430
  return; // 801D3434
}

// BTA_HhSendData
void f_801D3438(Ctx* __restrict c) {
  trace_call(0x801D3438u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3438
  c->r[0]=c->lr; // 801D343C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D3440
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D3444
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D3448
  c->r[30]=c->r[4]|c->r[4]; // 801D344C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D3450
  c->r[29]=c->r[3]|c->r[3]; // 801D3454
  c->r[3]=0u+0x00000014u; // 801D3458
  c->lr=0x801D3460u; f_801CAC80(c); // 801D345C
  cmps(c,0,(int32_t)c->r[3],0); // 801D3460
  c->r[31]=c->r[3]|c->r[3]; // 801D3464
  if (crb(c,2)) { goto L_801D34AC; } // 801D3468
  c->r[4]=0u+0x00000000u; // 801D346C
  c->r[5]=0u+0x00000014u; // 801D3470
  c->lr=0x801D3478u; f_80004350(c); // 801D3474
  c->r[0]=0u+0x00001708u; // 801D3478
  c->r[5]=0u+0x0000000Au; // 801D347C
  W16(c->r[31]+0x00000000u,c->r[0]); // 801D3480
  c->r[4]=0u+0x00000000u; // 801D3484
  c->r[0]=0u+0x00000002u; // 801D3488
  c->r[3]=c->r[31]|c->r[31]; // 801D348C
  W16(c->r[31]+0x00000006u,c->r[29]); // 801D3490
  W8(c->r[31]+0x00000008u,c->r[5]); // 801D3494
  W16(c->r[31]+0x0000000Cu,c->r[4]); // 801D3498
  W8(c->r[31]+0x00000009u,c->r[0]); // 801D349C
  W32(c->r[31]+0x00000010u,c->r[30]); // 801D34A0
  W8(c->r[31]+0x0000000Au,c->r[4]); // 801D34A4
  c->lr=0x801D34ACu; f_801CE510(c); // 801D34A8
L_801D34AC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D34AC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D34B0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D34B4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D34B8
  c->lr=c->r[0]; // 801D34BC
  c->r[1]=c->r[1]+0x00000020u; // 801D34C0
  return; // 801D34C4
}

// BTA_HhAddDev
void f_801D34C8(Ctx* __restrict c) {
  trace_call(0x801D34C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D34C8
  c->r[0]=c->lr; // 801D34CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D34D0
  c->r[11]=c->r[1]+0x00000020u; // 801D34D4
  c->lr=0x801D34DCu; f_800C2E48(c); // 801D34D8
  c->r[26]=c->r[3]|c->r[3]; // 801D34DC
  c->r[27]=c->r[4]|c->r[4]; // 801D34E0
  c->r[28]=c->r[5]|c->r[5]; // 801D34E4
  c->r[29]=c->r[6]|c->r[6]; // 801D34E8
  c->r[30]=c->r[7]|c->r[7]; // 801D34EC
  c->r[3]=0u+0x0000001Cu; // 801D34F0
  c->lr=0x801D34F8u; f_801CAC80(c); // 801D34F4
  cmps(c,0,(int32_t)c->r[3],0); // 801D34F8
  c->r[31]=c->r[3]|c->r[3]; // 801D34FC
  if (crb(c,2)) { goto L_801D3558; } // 801D3500
  c->r[4]=0u+0x00000000u; // 801D3504
  c->r[5]=0u+0x0000001Cu; // 801D3508
  c->lr=0x801D3510u; f_80004350(c); // 801D350C
  c->r[0]=0u+0x0000170Au; // 801D3510
  c->r[5]=0u+0x0000000Bu; // 801D3514
  W16(c->r[31]+0x00000000u,c->r[0]); // 801D3518
  c->r[0]=0u+0x000000FFu; // 801D351C
  c->r[4]=c->r[30]|c->r[30]; // 801D3520
  c->r[3]=c->r[31]+0x00000014u; // 801D3524
  W16(c->r[31]+0x00000010u,c->r[5]); // 801D3528
  c->r[5]=0u+0x00000008u; // 801D352C
  W16(c->r[31]+0x00000006u,c->r[0]); // 801D3530
  W16(c->r[31]+0x0000000Eu,c->r[27]); // 801D3534
  W8(c->r[31]+0x00000012u,c->r[28]); // 801D3538
  W8(c->r[31]+0x00000013u,c->r[29]); // 801D353C
  c->lr=0x801D3544u; f_80004000(c); // 801D3540
  c->r[4]=c->r[26]|c->r[26]; // 801D3544
  c->r[3]=c->r[31]+0x00000008u; // 801D3548
  c->lr=0x801D3550u; f_801CE064(c); // 801D354C
  c->r[3]=c->r[31]|c->r[31]; // 801D3550
  c->lr=0x801D3558u; f_801CE510(c); // 801D3554
L_801D3558:;
  c->r[11]=c->r[1]+0x00000020u; // 801D3558
  c->lr=0x801D3560u; f_800C2E94(c); // 801D355C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D3560
  c->lr=c->r[0]; // 801D3564
  c->r[1]=c->r[1]+0x00000020u; // 801D3568
  return; // 801D356C
}

// BTA_HhRemoveDev
void f_801D3570(Ctx* __restrict c) {
  trace_call(0x801D3570u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3570
  c->r[0]=c->lr; // 801D3574
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D3578
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D357C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D3580
  c->r[30]=c->r[3]|c->r[3]; // 801D3584
  c->r[3]=0u+0x0000001Cu; // 801D3588
  c->lr=0x801D3590u; f_801CAC80(c); // 801D358C
  cmps(c,0,(int32_t)c->r[3],0); // 801D3590
  c->r[31]=c->r[3]|c->r[3]; // 801D3594
  if (crb(c,2)) { goto L_801D35C4; } // 801D3598
  c->r[4]=0u+0x00000000u; // 801D359C
  c->r[5]=0u+0x0000001Cu; // 801D35A0
  c->lr=0x801D35A8u; f_80004350(c); // 801D35A4
  c->r[3]=0u+0x0000170Au; // 801D35A8
  c->r[0]=0u+0x0000000Cu; // 801D35AC
  W16(c->r[31]+0x00000000u,c->r[3]); // 801D35B0
  c->r[3]=c->r[31]|c->r[31]; // 801D35B4
  W16(c->r[31]+0x00000010u,c->r[0]); // 801D35B8
  W16(c->r[31]+0x00000006u,c->r[30]); // 801D35BC
  c->lr=0x801D35C4u; f_801CE510(c); // 801D35C0
L_801D35C4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D35C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D35C8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D35CC
  c->lr=c->r[0]; // 801D35D0
  c->r[1]=c->r[1]+0x00000010u; // 801D35D4
  return; // 801D35D8
}

// BTA_HhGetAclQueueInfo
void f_801D35DC(Ctx* __restrict c) {
  trace_call(0x801D35DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D35DC
  c->r[0]=c->lr; // 801D35E0
  c->r[3]=0u+0x00000008u; // 801D35E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D35E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D35EC
  c->lr=0x801D35F4u; f_801CAC80(c); // 801D35F0
  cmps(c,0,(int32_t)c->r[3],0); // 801D35F4
  c->r[31]=c->r[3]|c->r[3]; // 801D35F8
  if (crb(c,2)) { goto L_801D361C; } // 801D35FC
  c->r[4]=0u+0x00000000u; // 801D3600
  c->r[5]=0u+0x00000008u; // 801D3604
  c->lr=0x801D360Cu; f_80004350(c); // 801D3608
  c->r[0]=0u+0x0000170Eu; // 801D360C
  c->r[3]=c->r[31]|c->r[31]; // 801D3610
  W16(c->r[31]+0x00000000u,c->r[0]); // 801D3614
  c->lr=0x801D361Cu; f_801CE510(c); // 801D3618
L_801D361C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D361C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D3620
  c->lr=c->r[0]; // 801D3624
  c->r[1]=c->r[1]+0x00000010u; // 801D3628
  return; // 801D362C
}

// bta_hh_sm_execute
void f_801D3630(Ctx* __restrict c) {
  trace_call(0x801D3630u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3630
  c->r[0]=c->lr; // 801D3634
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D3638
  c->r[11]=c->r[1]+0x00000040u; // 801D363C
  c->lr=0x801D3644u; f_800C2E48(c); // 801D3640
  c->r[31]=0u+0x803A0000u; // 801D3644
  c->r[27]=c->r[3]|c->r[3]; // 801D3648
  c->r[28]=c->r[4]|c->r[4]; // 801D364C
  c->r[29]=c->r[5]|c->r[5]; // 801D3650
  c->r[31]=c->r[31]+0xFFFFEA50u; // 801D3654
  c->r[3]=c->r[1]+0x00000008u; // 801D3658
  c->r[30]=0u+0x00000000u; // 801D365C
  c->r[4]=0u+0x00000000u; // 801D3660
  c->r[5]=0u+0x00000020u; // 801D3664
  c->lr=0x801D366Cu; f_80004350(c); // 801D3668
  cmps(c,0,(int32_t)c->r[27],0); // 801D366C
  if (!crb(c,2)) { goto L_801D37C8; } // 801D3670
  c->r[3]=0u+0x80480000u; // 801D3674
  c->r[3]=c->r[3]+0x000032A8u; // 801D3678
  c->r[0]=R32(c->r[3]+0x00000224u); // 801D367C
  cmps(c,0,(int32_t)c->r[0],0); // 801D3680
  if (crb(c,2)) { goto L_801D396C; } // 801D3684
  cmps(c,0,(int32_t)c->r[28],5896); // 801D3688
  if (crb(c,2)) { goto L_801D371C; } // 801D368C
  if (!crb(c,0)) { goto L_801D36AC; } // 801D3690
  cmps(c,0,(int32_t)c->r[28],5889); // 801D3694
  if (crb(c,2)) { goto L_801D3770; } // 801D3698
  if (!crb(c,0)) { goto L_801D3788; } // 801D369C
  cmps(c,0,(int32_t)c->r[28],5888); // 801D36A0
  if (!crb(c,0)) { goto L_801D36B8; } // 801D36A4
  goto L_801D3788; // 801D36A8
L_801D36AC:;
  cmps(c,0,(int32_t)c->r[28],5898); // 801D36AC
  if (crb(c,2)) { goto L_801D36DC; } // 801D36B0
  goto L_801D3788; // 801D36B4
L_801D36B8:;
  c->r[3]=c->r[1]+0x00000008u; // 801D36B8
  c->r[4]=c->r[29]+0x00000008u; // 801D36BC
  c->r[30]=0u+0x00000002u; // 801D36C0
  c->lr=0x801D36C8u; f_801CE064(c); // 801D36C4
  c->r[3]=0u+0x00000009u; // 801D36C8
  c->r[0]=0u+0x000000FFu; // 801D36CC
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 801D36D0
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 801D36D4
  goto L_801D37A4; // 801D36D8
L_801D36DC:;
  c->r[30]=R16(c->r[29]+0x00000010u); // 801D36DC
  cmpu(c,0,c->r[30],0x0000000Bu); // 801D36E0
  if (!crb(c,2)) { goto L_801D3708; } // 801D36E4
  c->r[3]=c->r[1]+0x00000008u; // 801D36E8
  c->r[4]=c->r[29]+0x00000008u; // 801D36EC
  c->lr=0x801D36F4u; f_801CE064(c); // 801D36F0
  c->r[3]=0u+0x00000009u; // 801D36F4
  c->r[0]=0u+0x000000FFu; // 801D36F8
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 801D36FC
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 801D3700
  goto L_801D37A4; // 801D3704
L_801D3708:;
  c->r[0]=0u+0x0000000Du; // 801D3708
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801D370C
  c->r[0]=R16(c->r[29]+0x00000006u); // 801D3710
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 801D3714
  goto L_801D37A4; // 801D3718
L_801D371C:;
  c->r[30]=R8(c->r[29]+0x00000008u); // 801D371C
  cmpu(c,0,c->r[30],0x00000007u); // 801D3720
  if (crb(c,2)) { goto L_801D3738; } // 801D3724
  cmpu(c,0,c->r[30],0x00000005u); // 801D3728
  if (crb(c,2)) { goto L_801D3738; } // 801D372C
  cmpu(c,0,c->r[30],0x00000009u); // 801D3730
  if (!crb(c,2)) { goto L_801D374C; } // 801D3734
L_801D3738:;
  c->r[0]=0u+0x0000000Du; // 801D3738
  W8(c->r[1]+0x00000008u,c->r[0]); // 801D373C
  c->r[0]=R16(c->r[29]+0x00000006u); // 801D3740
  W8(c->r[1]+0x00000009u,c->r[0]); // 801D3744
  goto L_801D37A4; // 801D3748
L_801D374C:;
  cmpu(c,0,c->r[30],0x0000000Au); // 801D374C
  if (crb(c,2)) { goto L_801D37A4; } // 801D3750
  cmpu(c,0,c->r[30],0x00000001u); // 801D3754
  if (crb(c,2)) { goto L_801D37A4; } // 801D3758
  c->r[3]=R16(c->r[29]+0x00000006u); // 801D375C
  c->r[0]=0u+0x0000000Du; // 801D3760
  W8(c->r[1]+0x00000009u,c->r[3]); // 801D3764
  W8(c->r[1]+0x00000008u,c->r[0]); // 801D3768
  goto L_801D37A4; // 801D376C
L_801D3770:;
  c->r[0]=0u+0x0000000Du; // 801D3770
  c->r[30]=0u+0x00000003u; // 801D3774
  W8(c->r[1]+0x00000008u,c->r[0]); // 801D3778
  c->r[0]=R16(c->r[29]+0x00000006u); // 801D377C
  W8(c->r[1]+0x00000009u,c->r[0]); // 801D3780
  goto L_801D37A4; // 801D3784
L_801D3788:;
  c->r[0]=R8(c->r[13]+0xFFFF9AF8u); // 801D3788
  cmpu(c,0,c->r[0],0x00000001u); // 801D378C
  if (crb(c,0)) { goto L_801D37A4; } // 801D3790
  c->r[5]=R16(c->r[29]+0x00000006u); // 801D3794
  c->r[4]=c->r[31]+0x00000000u; // 801D3798
  c->r[3]=0u+0x00000500u; // 801D379C
  c->lr=0x801D37A4u; f_801CD9F0(c); // 801D37A0
L_801D37A4:;
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; cr0(c,c->r[3]); // 801D37A4
  if (crb(c,2)) { goto L_801D396C; } // 801D37A8
  c->r[5]=0u+0x80480000u; // 801D37AC
  c->r[4]=c->r[1]+0x00000008u; // 801D37B0
  c->r[5]=c->r[5]+0x000032A8u; // 801D37B4
  c->r[12]=R32(c->r[5]+0x00000224u); // 801D37B8
  c->ctr=c->r[12]; // 801D37BC
  if (true) { c->lr=0x801D37C4u; dispatch(c,c->ctr); } // 801D37C0
  goto L_801D396C; // 801D37C4
L_801D37C8:;
  c->r[0]=R8(c->r[13]+0xFFFF9AF8u); // 801D37C8
  c->r[30]=R8(c->r[27]+0x0000001Cu); // 801D37CC
  cmpu(c,0,c->r[0],0x00000004u); // 801D37D0
  if (crb(c,0)) { goto L_801D3844; } // 801D37D4
  cmps(c,0,(int32_t)c->r[30],2); // 801D37D8
  if (crb(c,2)) { goto L_801D3810; } // 801D37DC
  if (!crb(c,0)) { goto L_801D37F4; } // 801D37E0
  cmps(c,0,(int32_t)c->r[30],0); // 801D37E4
  if (crb(c,2)) { goto L_801D3800; } // 801D37E8
  if (!crb(c,0)) { goto L_801D3808; } // 801D37EC
  goto L_801D3820; // 801D37F0
L_801D37F4:;
  cmps(c,0,(int32_t)c->r[30],4); // 801D37F4
  if (!crb(c,0)) { goto L_801D3820; } // 801D37F8
  goto L_801D3818; // 801D37FC
L_801D3800:;
  c->r[26]=c->r[31]+0x0000001Cu; // 801D3800
  goto L_801D3824; // 801D3804
L_801D3808:;
  c->r[26]=c->r[31]+0x0000002Cu; // 801D3808
  goto L_801D3824; // 801D380C
L_801D3810:;
  c->r[26]=c->r[31]+0x0000003Cu; // 801D3810
  goto L_801D3824; // 801D3814
L_801D3818:;
  c->r[26]=c->r[31]+0x00000050u; // 801D3818
  goto L_801D3824; // 801D381C
L_801D3820:;
  c->r[26]=c->r[31]+0x00000060u; // 801D3820
L_801D3824:;
  c->r[3]=c->r[28]|c->r[28]; // 801D3824
  c->lr=0x801D382Cu; f_801D3AD0(c); // 801D3828
  c->r[7]=c->r[3]|c->r[3]; // 801D382C
  c->r[5]=c->r[30]|c->r[30]; // 801D3830
  c->r[6]=c->r[26]|c->r[26]; // 801D3834
  c->r[4]=c->r[31]+0x00000078u; // 801D3838
  c->r[3]=0u+0x00000503u; // 801D383C
  c->lr=0x801D3844u; f_801CDA30(c); // 801D3840
L_801D3844:;
  c->r[4]=R8(c->r[27]+0x0000001Cu); // 801D3844
  c->r[3]=0u+0x80380000u; // 801D3848
  c->r[3]=c->r[3]+0xFFFFF250u; // 801D384C
  c->r[28]=rotl(c->r[28],0)&0x000000FFu; // 801D3850
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801D3854
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D3858
  c->r[4]=rotl(c->r[28],1)&0xFFFFFFFEu; // 801D385C
  c->r[5]=R32(c->r[3]+c->r[0]); // 801D3860
  c->r[3]=c->r[5]+c->r[4]; // 801D3864
  c->r[0]=R8(c->r[3]+0x00000001u); // 801D3868
  W8(c->r[27]+0x0000001Cu,c->r[0]); // 801D386C
  c->r[0]=R8(c->r[5]+c->r[4]); // 801D3870
  cmpu(c,0,c->r[0],0x0000000Cu); // 801D3874
  if (crb(c,2)) { goto L_801D389C; } // 801D3878
  c->r[4]=0u+0x80380000u; // 801D387C
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 801D3880
  c->r[4]=c->r[4]+0xFFFFF1D8u; // 801D3884
  c->r[3]=c->r[27]|c->r[27]; // 801D3888
  c->r[12]=R32(c->r[4]+c->r[0]); // 801D388C
  c->r[4]=c->r[29]|c->r[29]; // 801D3890
  c->ctr=c->r[12]; // 801D3894
  if (true) { c->lr=0x801D389Cu; dispatch(c,c->ctr); } // 801D3898
L_801D389C:;
  c->r[3]=R8(c->r[27]+0x0000001Cu); // 801D389C
  cmpu(c,0,c->r[30],c->r[3]); // 801D38A0
  if (crb(c,2)) { goto L_801D396C; } // 801D38A4
  c->r[0]=R8(c->r[13]+0xFFFF9AF8u); // 801D38A8
  cmpu(c,0,c->r[0],0x00000005u); // 801D38AC
  if (crb(c,0)) { goto L_801D396C; } // 801D38B0
  cmps(c,0,(int32_t)c->r[30],2); // 801D38B4
  if (crb(c,2)) { goto L_801D38EC; } // 801D38B8
  if (!crb(c,0)) { goto L_801D38D0; } // 801D38BC
  cmps(c,0,(int32_t)c->r[30],0); // 801D38C0
  if (crb(c,2)) { goto L_801D38DC; } // 801D38C4
  if (!crb(c,0)) { goto L_801D38E4; } // 801D38C8
  goto L_801D38FC; // 801D38CC
L_801D38D0:;
  cmps(c,0,(int32_t)c->r[30],4); // 801D38D0
  if (!crb(c,0)) { goto L_801D38FC; } // 801D38D4
  goto L_801D38F4; // 801D38D8
L_801D38DC:;
  c->r[26]=c->r[31]+0x0000001Cu; // 801D38DC
  goto L_801D3900; // 801D38E0
L_801D38E4:;
  c->r[26]=c->r[31]+0x0000002Cu; // 801D38E4
  goto L_801D3900; // 801D38E8
L_801D38EC:;
  c->r[26]=c->r[31]+0x0000003Cu; // 801D38EC
  goto L_801D3900; // 801D38F0
L_801D38F4:;
  c->r[26]=c->r[31]+0x00000050u; // 801D38F4
  goto L_801D3900; // 801D38F8
L_801D38FC:;
  c->r[26]=c->r[31]+0x00000060u; // 801D38FC
L_801D3900:;
  cmps(c,0,(int32_t)c->r[3],2); // 801D3900
  if (crb(c,2)) { goto L_801D3938; } // 801D3904
  if (!crb(c,0)) { goto L_801D391C; } // 801D3908
  cmps(c,0,(int32_t)c->r[3],0); // 801D390C
  if (crb(c,2)) { goto L_801D3928; } // 801D3910
  if (!crb(c,0)) { goto L_801D3930; } // 801D3914
  goto L_801D3948; // 801D3918
L_801D391C:;
  cmps(c,0,(int32_t)c->r[3],4); // 801D391C
  if (!crb(c,0)) { goto L_801D3948; } // 801D3920
  goto L_801D3940; // 801D3924
L_801D3928:;
  c->r[27]=c->r[31]+0x0000001Cu; // 801D3928
  goto L_801D394C; // 801D392C
L_801D3930:;
  c->r[27]=c->r[31]+0x0000002Cu; // 801D3930
  goto L_801D394C; // 801D3934
L_801D3938:;
  c->r[27]=c->r[31]+0x0000003Cu; // 801D3938
  goto L_801D394C; // 801D393C
L_801D3940:;
  c->r[27]=c->r[31]+0x00000050u; // 801D3940
  goto L_801D394C; // 801D3944
L_801D3948:;
  c->r[27]=c->r[31]+0x00000060u; // 801D3948
L_801D394C:;
  c->r[3]=c->r[28]|c->r[28]; // 801D394C
  c->lr=0x801D3954u; f_801D3AD0(c); // 801D3950
  c->r[7]=c->r[3]|c->r[3]; // 801D3954
  c->r[5]=c->r[26]|c->r[26]; // 801D3958
  c->r[6]=c->r[27]|c->r[27]; // 801D395C
  c->r[4]=c->r[31]+0x000000ACu; // 801D3960
  c->r[3]=0u+0x00000504u; // 801D3964
  c->lr=0x801D396Cu; f_801CDA30(c); // 801D3968
L_801D396C:;
  c->r[11]=c->r[1]+0x00000040u; // 801D396C
  c->lr=0x801D3974u; f_800C2E94(c); // 801D3970
  c->r[0]=R32(c->r[1]+0x00000044u); // 801D3974
  c->lr=c->r[0]; // 801D3978
  c->r[1]=c->r[1]+0x00000040u; // 801D397C
  return; // 801D3980
}

// bta_hh_hdl_event
void f_801D3984(Ctx* __restrict c) {
  trace_call(0x801D3984u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3984
  c->r[0]=c->lr; // 801D3988
  c->r[6]=0u+0x00000010u; // 801D398C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D3990
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D3994
  c->r[31]=0u+0x00000000u; // 801D3998
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D399C
  c->r[30]=c->r[3]|c->r[3]; // 801D39A0
  c->r[0]=R16(c->r[3]+0x00000000u); // 801D39A4
  cmps(c,0,(int32_t)c->r[0],5902); // 801D39A8
  if (crb(c,2)) { goto L_801D39E8; } // 801D39AC
  if (!crb(c,0)) { goto L_801D39C4; } // 801D39B0
  cmps(c,0,(int32_t)c->r[0],5900); // 801D39B4
  if (crb(c,2)) { goto L_801D39D0; } // 801D39B8
  if (!crb(c,0)) { goto L_801D39D8; } // 801D39BC
  goto L_801D39F0; // 801D39C0
L_801D39C4:;
  cmps(c,0,(int32_t)c->r[0],5904); // 801D39C4
  if (!crb(c,0)) { goto L_801D39F0; } // 801D39C8
  goto L_801D39E0; // 801D39CC
L_801D39D0:;
  c->lr=0x801D39D4u; f_801D1B18(c); // 801D39D0
  goto L_801D3AB4; // 801D39D4
L_801D39D8:;
  c->lr=0x801D39DCu; f_801D1C8C(c); // 801D39D8
  goto L_801D3AB4; // 801D39DC
L_801D39E0:;
  c->lr=0x801D39E4u; f_801D1D90(c); // 801D39E0
  goto L_801D3AB4; // 801D39E4
L_801D39E8:;
  c->lr=0x801D39ECu; f_801D2CE4(c); // 801D39E8
  goto L_801D3AB4; // 801D39EC
L_801D39F0:;
  cmpu(c,0,c->r[0],0x00001700u); // 801D39F0
  if (!crb(c,2)) { goto L_801D3A08; } // 801D39F4
  c->r[3]=c->r[3]+0x00000008u; // 801D39F8
  c->lr=0x801D3A00u; f_801D3B84(c); // 801D39FC
  c->r[6]=c->r[3]|c->r[3]; // 801D3A00
  goto L_801D3A60; // 801D3A04
L_801D3A08:;
  cmpu(c,0,c->r[0],0x0000170Au); // 801D3A08
  if (!crb(c,2)) { goto L_801D3A44; } // 801D3A0C
  c->r[0]=R16(c->r[3]+0x00000010u); // 801D3A10
  cmpu(c,0,c->r[0],0x0000000Bu); // 801D3A14
  if (!crb(c,2)) { goto L_801D3A2C; } // 801D3A18
  c->r[3]=c->r[3]+0x00000008u; // 801D3A1C
  c->lr=0x801D3A24u; f_801D3B84(c); // 801D3A20
  c->r[6]=c->r[3]|c->r[3]; // 801D3A24
  goto L_801D3A60; // 801D3A28
L_801D3A2C:;
  c->r[4]=0u+0x80480000u; // 801D3A2C
  c->r[0]=R16(c->r[3]+0x00000006u); // 801D3A30
  c->r[4]=c->r[4]+0x000032A8u; // 801D3A34
  c->r[3]=c->r[4]+c->r[0]; // 801D3A38
  c->r[6]=R8(c->r[3]+0x00000214u); // 801D3A3C
  goto L_801D3A60; // 801D3A40
L_801D3A44:;
  c->r[0]=R16(c->r[3]+0x00000006u); // 801D3A44
  cmpu(c,0,c->r[0],0x00000010u); // 801D3A48
  if (!crb(c,0)) { goto L_801D3A60; } // 801D3A4C
  c->r[3]=0u+0x80480000u; // 801D3A50
  c->r[3]=c->r[3]+0x000032A8u; // 801D3A54
  c->r[3]=c->r[3]+c->r[0]; // 801D3A58
  c->r[6]=R8(c->r[3]+0x00000214u); // 801D3A5C
L_801D3A60:;
  c->r[0]=rotl(c->r[6],0)&0x000000FFu; // 801D3A60
  cmpu(c,0,c->r[0],0x00000010u); // 801D3A64
  if (crb(c,2)) { goto L_801D3A80; } // 801D3A68
  c->r[3]=0u+0x80480000u; // 801D3A6C
  c->r[0]=rotl(c->r[6],5)&0x00001FE0u; // 801D3A70
  c->r[3]=c->r[3]+0x000032A8u; // 801D3A74
  c->r[3]=c->r[3]+c->r[0]; // 801D3A78
  c->r[31]=c->r[3]+0x00000010u; // 801D3A7C
L_801D3A80:;
  c->r[0]=R8(c->r[13]+0xFFFF9AF8u); // 801D3A80
  cmpu(c,0,c->r[0],0x00000005u); // 801D3A84
  if (crb(c,0)) { goto L_801D3AA4; } // 801D3A88
  c->r[4]=0u+0x803A0000u; // 801D3A8C
  c->r[5]=R16(c->r[30]+0x00000006u); // 801D3A90
  c->r[4]=c->r[4]+0xFFFFEB2Cu; // 801D3A94
  c->r[6]=rotl(c->r[6],0)&0x000000FFu; // 801D3A98
  c->r[3]=0u+0x00000504u; // 801D3A9C
  c->lr=0x801D3AA4u; f_801CDA10(c); // 801D3AA0
L_801D3AA4:;
  c->r[4]=R16(c->r[30]+0x00000000u); // 801D3AA4
  c->r[3]=c->r[31]|c->r[31]; // 801D3AA8
  c->r[5]=c->r[30]|c->r[30]; // 801D3AAC
  c->lr=0x801D3AB4u; f_801D3630(c); // 801D3AB0
L_801D3AB4:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D3AB4
  c->r[3]=0u+0x00000001u; // 801D3AB8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D3ABC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D3AC0
  c->lr=c->r[0]; // 801D3AC4
  c->r[1]=c->r[1]+0x00000010u; // 801D3AC8
  return; // 801D3ACC
}

// bta_hh_evt_code
void f_801D3AD0(Ctx* __restrict c) {
  trace_call(0x801D3AD0u);
  c->r[0]=c->r[3]+0xFFFFE900u; // 801D3AD0
  c->r[4]=0u+0x803A0000u; // 801D3AD4
  cmpu(c,0,c->r[0],0x0000000Fu); // 801D3AD8
  c->r[4]=c->r[4]+0xFFFFEA50u; // 801D3ADC
  if (crb(c,1)) { goto L_801D3B7C; } // 801D3AE0
  c->r[3]=0u+0x803A0000u; // 801D3AE4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801D3AE8
  c->r[3]=c->r[3]+0xFFFFECF0u; // 801D3AEC
  c->r[3]=R32(c->r[3]+c->r[0]); // 801D3AF0
  c->ctr=c->r[3]; // 801D3AF4
  if (true) { switch (c->ctr) { case 0x801D3AFCu: goto L_801D3AFC; case 0x801D3B04u: goto L_801D3B04; case 0x801D3B0Cu: goto L_801D3B0C; case 0x801D3B14u: goto L_801D3B14; case 0x801D3B1Cu: goto L_801D3B1C; case 0x801D3B24u: goto L_801D3B24; case 0x801D3B2Cu: goto L_801D3B2C; case 0x801D3B34u: goto L_801D3B34; case 0x801D3B3Cu: goto L_801D3B3C; case 0x801D3B44u: goto L_801D3B44; case 0x801D3B4Cu: goto L_801D3B4C; case 0x801D3B54u: goto L_801D3B54; case 0x801D3B5Cu: goto L_801D3B5C; case 0x801D3B64u: goto L_801D3B64; case 0x801D3B6Cu: goto L_801D3B6C; case 0x801D3B74u: goto L_801D3B74; default: break; } dispatch(c,c->ctr); return; } // 801D3AF8
L_801D3AFC:;
  c->r[3]=c->r[4]+0x00000108u; // 801D3AFC
  return; // 801D3B00
L_801D3B04:;
  c->r[3]=c->r[4]+0x00000120u; // 801D3B04
  return; // 801D3B08
L_801D3B0C:;
  c->r[3]=c->r[4]+0x00000138u; // 801D3B0C
  return; // 801D3B10
L_801D3B14:;
  c->r[3]=c->r[4]+0x0000014Cu; // 801D3B14
  return; // 801D3B18
L_801D3B1C:;
  c->r[3]=c->r[4]+0x00000164u; // 801D3B1C
  return; // 801D3B20
L_801D3B24:;
  c->r[3]=c->r[4]+0x00000178u; // 801D3B24
  return; // 801D3B28
L_801D3B2C:;
  c->r[3]=c->r[4]+0x00000190u; // 801D3B2C
  return; // 801D3B30
L_801D3B34:;
  c->r[3]=c->r[4]+0x000001A8u; // 801D3B34
  return; // 801D3B38
L_801D3B3C:;
  c->r[3]=c->r[4]+0x000001BCu; // 801D3B3C
  return; // 801D3B40
L_801D3B44:;
  c->r[3]=c->r[4]+0x000001D4u; // 801D3B44
  return; // 801D3B48
L_801D3B4C:;
  c->r[3]=c->r[4]+0x000001F0u; // 801D3B4C
  return; // 801D3B50
L_801D3B54:;
  c->r[3]=c->r[4]+0x00000204u; // 801D3B54
  return; // 801D3B58
L_801D3B5C:;
  c->r[3]=c->r[4]+0x0000021Cu; // 801D3B5C
  return; // 801D3B60
L_801D3B64:;
  c->r[3]=c->r[4]+0x00000238u; // 801D3B64
  return; // 801D3B68
L_801D3B6C:;
  c->r[3]=c->r[4]+0x00000250u; // 801D3B6C
  return; // 801D3B70
L_801D3B74:;
  c->r[3]=c->r[4]+0x00000268u; // 801D3B74
  return; // 801D3B78
L_801D3B7C:;
  c->r[3]=c->r[4]+0x00000284u; // 801D3B7C
  return; // 801D3B80
}

// bta_hh_find_cb
void f_801D3B84(Ctx* __restrict c) {
  trace_call(0x801D3B84u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3B84
  c->r[0]=c->lr; // 801D3B88
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D3B8C
  c->r[11]=c->r[1]+0x00000020u; // 801D3B90
  c->lr=0x801D3B98u; f_800C2E4C(c); // 801D3B94
  c->r[31]=0u+0x80480000u; // 801D3B98
  c->r[30]=0u+0x803A0000u; // 801D3B9C
  c->r[27]=c->r[3]|c->r[3]; // 801D3BA0
  c->r[28]=0u+0x00000000u; // 801D3BA4
  c->r[30]=c->r[30]+0xFFFFED30u; // 801D3BA8
  c->r[31]=c->r[31]+0x000032A8u; // 801D3BAC
L_801D3BB0:;
  c->r[29]=rotl(c->r[28],5)&0x00001FE0u; // 801D3BB0
  c->r[3]=c->r[27]|c->r[27]; // 801D3BB4
  c->r[4]=c->r[31]+c->r[29]; // 801D3BB8
  c->r[4]=c->r[4]+0x00000018u; // 801D3BBC
  c->lr=0x801D3BC4u; f_801CE098(c); // 801D3BC0
  cmps(c,0,(int32_t)c->r[3],0); // 801D3BC4
  if (!crb(c,2)) { goto L_801D3C0C; } // 801D3BC8
  c->r[3]=c->r[27]|c->r[27]; // 801D3BCC
  c->r[4]=c->r[2]+0xFFFFC5D8u; // 801D3BD0
  c->lr=0x801D3BD8u; f_801CE098(c); // 801D3BD4
  cmps(c,0,(int32_t)c->r[3],0); // 801D3BD8
  if (crb(c,2)) { goto L_801D3C0C; } // 801D3BDC
  c->r[0]=R8(c->r[13]+0xFFFF9AF8u); // 801D3BE0
  cmpu(c,0,c->r[0],0x00000005u); // 801D3BE4
  if (crb(c,0)) { goto L_801D3C04; } // 801D3BE8
  c->r[3]=c->r[31]+c->r[29]; // 801D3BEC
  c->r[4]=c->r[30]+0x00000000u; // 801D3BF0
  c->r[6]=R8(c->r[3]+0x00000026u); // 801D3BF4
  c->r[5]=rotl(c->r[28],0)&0x000000FFu; // 801D3BF8
  c->r[3]=0u+0x00000504u; // 801D3BFC
  c->lr=0x801D3C04u; f_801CDA10(c); // 801D3C00
L_801D3C04:;
  c->r[3]=c->r[28]|c->r[28]; // 801D3C04
  goto L_801D3CA8; // 801D3C08
L_801D3C0C:;
  c->r[0]=R8(c->r[13]+0xFFFF9AF8u); // 801D3C0C
  cmpu(c,0,c->r[0],0x00000005u); // 801D3C10
  if (crb(c,0)) { goto L_801D3C38; } // 801D3C14
  c->r[8]=c->r[31]+c->r[29]; // 801D3C18
  c->r[4]=c->r[30]+0x00000024u; // 801D3C1C
  c->r[5]=R8(c->r[8]+0x00000028u); // 801D3C20
  c->r[6]=rotl(c->r[28],0)&0x000000FFu; // 801D3C24
  c->r[7]=R8(c->r[8]+0x00000026u); // 801D3C28
  c->r[3]=0u+0x00000504u; // 801D3C2C
  c->r[8]=R8(c->r[8]+0x0000002Cu); // 801D3C30
  c->lr=0x801D3C38u; f_801CDA50(c); // 801D3C34
L_801D3C38:;
  c->r[28]=c->r[28]+0x00000001u; // 801D3C38
  cmpu(c,0,c->r[28],0x00000010u); // 801D3C3C
  if (crb(c,0)) { IRQCHK(c); goto L_801D3BB0; } // 801D3C40
  c->r[4]=0u+0x80480000u; // 801D3C44
  c->r[0]=0u+0x00000010u; // 801D3C48
  c->r[4]=c->r[4]+0x000032A8u; // 801D3C4C
  c->r[29]=0u+0x00000000u; // 801D3C50
  c->ctr=c->r[0]; // 801D3C54
L_801D3C58:;
  c->r[0]=rotl(c->r[29],5)&0x00001FE0u; // 801D3C58
  c->r[3]=c->r[4]+c->r[0]; // 801D3C5C
  c->r[0]=R8(c->r[3]+0x00000028u); // 801D3C60
  cmps(c,0,(int32_t)c->r[0],0); // 801D3C64
  if (!crb(c,2)) { goto L_801D3C7C; } // 801D3C68
  c->r[4]=c->r[27]|c->r[27]; // 801D3C6C
  c->r[3]=c->r[3]+0x00000018u; // 801D3C70
  c->lr=0x801D3C78u; f_801CE064(c); // 801D3C74
  goto L_801D3C84; // 801D3C78
L_801D3C7C:;
  c->r[29]=c->r[29]+0x00000001u; // 801D3C7C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D3C58; } // 801D3C80
L_801D3C84:;
  c->r[0]=R8(c->r[13]+0xFFFF9AF8u); // 801D3C84
  cmpu(c,0,c->r[0],0x00000005u); // 801D3C88
  if (crb(c,0)) { goto L_801D3CA4; } // 801D3C8C
  c->r[4]=c->r[30]+0x00000058u; // 801D3C90
  c->r[5]=rotl(c->r[29],0)&0x000000FFu; // 801D3C94
  c->r[3]=0u+0x00000504u; // 801D3C98
  c->r[6]=0u+0x00000010u; // 801D3C9C
  c->lr=0x801D3CA4u; f_801CDA10(c); // 801D3CA0
L_801D3CA4:;
  c->r[3]=c->r[29]|c->r[29]; // 801D3CA4
L_801D3CA8:;
  c->r[11]=c->r[1]+0x00000020u; // 801D3CA8
  c->lr=0x801D3CB0u; f_800C2E98(c); // 801D3CAC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D3CB0
  c->lr=c->r[0]; // 801D3CB4
  c->r[1]=c->r[1]+0x00000020u; // 801D3CB8
  return; // 801D3CBC
}

// bta_hh_clean_up_kdev
void f_801D3CC0(Ctx* __restrict c) {
  trace_call(0x801D3CC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3CC0
  c->r[0]=c->lr; // 801D3CC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D3CC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D3CCC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D3CD0
  c->r[30]=c->r[3]|c->r[3]; // 801D3CD4
  c->r[5]=R8(c->r[3]+0x00000016u); // 801D3CD8
  cmpu(c,0,c->r[5],0x000000FFu); // 801D3CDC
  if (crb(c,2)) { goto L_801D3CF8; } // 801D3CE0
  c->r[4]=0u+0x80480000u; // 801D3CE4
  c->r[0]=0u+0x00000010u; // 801D3CE8
  c->r[4]=c->r[4]+0x000032A8u; // 801D3CEC
  c->r[4]=c->r[4]+c->r[5]; // 801D3CF0
  W8(c->r[4]+0x00000214u,c->r[0]); // 801D3CF4
L_801D3CF8:;
  c->r[31]=R8(c->r[3]+0x00000012u); // 801D3CF8
  c->r[3]=c->r[3]+0x00000004u; // 801D3CFC
  c->lr=0x801D3D04u; f_801CE7B0(c); // 801D3D00
  c->r[3]=c->r[30]|c->r[30]; // 801D3D04
  c->r[4]=0u+0x00000000u; // 801D3D08
  c->r[5]=0u+0x00000020u; // 801D3D0C
  c->lr=0x801D3D14u; f_80004350(c); // 801D3D10
  c->r[3]=0u+0x00000001u; // 801D3D14
  c->r[0]=0u+0x000000FFu; // 801D3D18
  W8(c->r[30]+0x00000012u,c->r[31]); // 801D3D1C
  W8(c->r[30]+0x0000001Cu,c->r[3]); // 801D3D20
  W8(c->r[30]+0x00000016u,c->r[0]); // 801D3D24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D3D28
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D3D2C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D3D30
  c->lr=c->r[0]; // 801D3D34
  c->r[1]=c->r[1]+0x00000010u; // 801D3D38
  return; // 801D3D3C
}

// bta_hh_add_device_to_list
void f_801D3D40(Ctx* __restrict c) {
  trace_call(0x801D3D40u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3D40
  c->r[0]=c->lr; // 801D3D44
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D3D48
  c->r[11]=c->r[1]+0x00000020u; // 801D3D4C
  c->lr=0x801D3D54u; f_800C2E48(c); // 801D3D50
  c->r[0]=R8(c->r[13]+0xFFFF9AF8u); // 801D3D54
  c->r[26]=c->r[3]|c->r[3]; // 801D3D58
  c->r[27]=c->r[4]|c->r[4]; // 801D3D5C
  c->r[28]=c->r[5]|c->r[5]; // 801D3D60
  cmpu(c,0,c->r[0],0x00000005u); // 801D3D64
  c->r[29]=c->r[6]|c->r[6]; // 801D3D68
  c->r[30]=c->r[7]|c->r[7]; // 801D3D6C
  c->r[31]=c->r[8]|c->r[8]; // 801D3D70
  if (crb(c,0)) { goto L_801D3D8C; } // 801D3D74
  c->r[4]=0u+0x803A0000u; // 801D3D78
  c->r[5]=c->r[30]|c->r[30]; // 801D3D7C
  c->r[4]=c->r[4]+0xFFFFEDB4u; // 801D3D80
  c->r[3]=0u+0x00000504u; // 801D3D84
  c->lr=0x801D3D8Cu; f_801CD9F0(c); // 801D3D88
L_801D3D8C:;
  c->r[0]=0u+0x00000001u; // 801D3D8C
  cmps(c,0,(int32_t)c->r[29],0); // 801D3D90
  W8(c->r[26]+0x00000016u,c->r[27]); // 801D3D94
  W8(c->r[26]+0x00000018u,c->r[0]); // 801D3D98
  W16(c->r[26]+0x0000000Eu,c->r[28]); // 801D3D9C
  W8(c->r[26]+0x00000013u,c->r[30]); // 801D3DA0
  W8(c->r[26]+0x00000015u,c->r[31]); // 801D3DA4
  if (crb(c,2)) { goto L_801D3DE4; } // 801D3DA8
  c->r[3]=c->r[26]+0x00000004u; // 801D3DAC
  c->lr=0x801D3DB4u; f_801CE7B0(c); // 801D3DB0
  c->r[3]=R16(c->r[29]+0x00000000u); // 801D3DB4
  cmps(c,0,(int32_t)c->r[3],0); // 801D3DB8
  if (crb(c,2)) { goto L_801D3DE4; } // 801D3DBC
  c->lr=0x801D3DC4u; f_801CAC80(c); // 801D3DC0
  cmps(c,0,(int32_t)c->r[3],0); // 801D3DC4
  W32(c->r[26]+0x00000004u,c->r[3]); // 801D3DC8
  if (crb(c,2)) { goto L_801D3DE4; } // 801D3DCC
  c->r[0]=R16(c->r[29]+0x00000000u); // 801D3DD0
  W16(c->r[26]+0x00000000u,c->r[0]); // 801D3DD4
  c->r[4]=R32(c->r[29]+0x00000004u); // 801D3DD8
  c->r[5]=R16(c->r[29]+0x00000000u); // 801D3DDC
  c->lr=0x801D3DE4u; f_80004000(c); // 801D3DE0
L_801D3DE4:;
  c->r[11]=c->r[1]+0x00000020u; // 801D3DE4
  c->lr=0x801D3DECu; f_800C2E94(c); // 801D3DE8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D3DEC
  c->lr=c->r[0]; // 801D3DF0
  c->r[1]=c->r[1]+0x00000020u; // 801D3DF4
  return; // 801D3DF8
}

// bta_hh_tod_spt
void f_801D3DFC(Ctx* __restrict c) {
  trace_call(0x801D3DFCu);
  c->r[7]=R32(c->r[13]+0xFFFF8EE0u); // 801D3DFC
  c->r[9]=rotl(c->r[4],30)&0x0000003Fu; // 801D3E00
  c->r[8]=0u+0x00000000u; // 801D3E04
  c->r[5]=R8(c->r[7]+0x00000000u); // 801D3E08
  goto L_801D3E3C; // 801D3E0C
L_801D3E10:;
  c->r[4]=R32(c->r[7]+0x00000004u); // 801D3E10
  c->r[6]=rotl(c->r[8],1)&0x000001FEu; // 801D3E14
  c->r[0]=R8(c->r[4]+c->r[6]); // 801D3E18
  cmpu(c,0,c->r[9],c->r[0]); // 801D3E1C
  if (!crb(c,2)) { goto L_801D3E38; } // 801D3E20
  c->r[4]=c->r[4]+c->r[6]; // 801D3E24
  c->r[0]=R8(c->r[4]+0x00000001u); // 801D3E28
  W8(c->r[3]+0x00000015u,c->r[0]); // 801D3E2C
  c->r[3]=0u+0x00000001u; // 801D3E30
  return; // 801D3E34
L_801D3E38:;
  c->r[8]=c->r[8]+0x00000001u; // 801D3E38
L_801D3E3C:;
  c->r[0]=rotl(c->r[8],0)&0x000000FFu; // 801D3E3C
  cmpu(c,0,c->r[0],c->r[5]); // 801D3E40
  if (crb(c,0)) { IRQCHK(c); goto L_801D3E10; } // 801D3E44
  c->r[3]=0u+0x00000000u; // 801D3E48
  return; // 801D3E4C
}

// bta_hh_trace_dev_db
void f_801D3E50(Ctx* __restrict c) {
  trace_call(0x801D3E50u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3E50
  c->r[0]=c->lr; // 801D3E54
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D3E58
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D3E5C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D3E60
  c->r[30]=0u+0x803A0000u; // 801D3E64
  c->r[30]=c->r[30]+0xFFFFED30u; // 801D3E68
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D3E6C
  c->r[0]=R8(c->r[13]+0xFFFF9AF8u); // 801D3E70
  cmpu(c,0,c->r[0],0x00000005u); // 801D3E74
  if (crb(c,0)) { goto L_801D3E88; } // 801D3E78
  c->r[4]=c->r[30]+0x000001E4u; // 801D3E7C
  c->r[3]=0u+0x00000504u; // 801D3E80
  c->lr=0x801D3E88u; f_801CD9D0(c); // 801D3E84
L_801D3E88:;
  c->r[3]=0u+0x80480000u; // 801D3E88
  c->r[29]=0u+0x00000000u; // 801D3E8C
  c->r[31]=c->r[3]+0x000032A8u; // 801D3E90
L_801D3E94:;
  c->r[0]=R8(c->r[13]+0xFFFF9AF8u); // 801D3E94
  cmpu(c,0,c->r[0],0x00000005u); // 801D3E98
  if (crb(c,0)) { goto L_801D3EC0; } // 801D3E9C
  c->r[0]=rotl(c->r[29],5)&0x00001FE0u; // 801D3EA0
  c->r[4]=c->r[30]+0x00000220u; // 801D3EA4
  c->r[7]=c->r[31]+c->r[0]; // 801D3EA8
  c->r[5]=rotl(c->r[29],0)&0x000000FFu; // 801D3EAC
  c->r[6]=R8(c->r[7]+0x00000028u); // 801D3EB0
  c->r[3]=0u+0x00000504u; // 801D3EB4
  c->r[7]=R8(c->r[7]+0x00000026u); // 801D3EB8
  c->lr=0x801D3EC0u; f_801CDA30(c); // 801D3EBC
L_801D3EC0:;
  c->r[0]=R8(c->r[13]+0xFFFF9AF8u); // 801D3EC0
  cmpu(c,0,c->r[0],0x00000005u); // 801D3EC4
  if (crb(c,0)) { goto L_801D3EF0; } // 801D3EC8
  c->r[0]=rotl(c->r[29],5)&0x00001FE0u; // 801D3ECC
  c->r[4]=c->r[30]+0x00000244u; // 801D3ED0
  c->r[8]=c->r[31]+c->r[0]; // 801D3ED4
  c->r[3]=0u+0x00000504u; // 801D3ED8
  c->r[5]=R16(c->r[8]+0x0000001Eu); // 801D3EDC
  c->r[6]=R8(c->r[8]+0x0000002Cu); // 801D3EE0
  c->r[7]=R8(c->r[8]+0x00000023u); // 801D3EE4
  c->r[8]=R8(c->r[8]+0x00000022u); // 801D3EE8
  c->lr=0x801D3EF0u; f_801CDA50(c); // 801D3EEC
L_801D3EF0:;
  c->r[29]=c->r[29]+0x00000001u; // 801D3EF0
  cmpu(c,0,c->r[29],0x00000010u); // 801D3EF4
  if (crb(c,0)) { IRQCHK(c); goto L_801D3E94; } // 801D3EF8
  c->r[0]=R8(c->r[13]+0xFFFF9AF8u); // 801D3EFC
  cmpu(c,0,c->r[0],0x00000005u); // 801D3F00
  if (crb(c,0)) { goto L_801D3F14; } // 801D3F04
  c->r[4]=c->r[30]+0x00000280u; // 801D3F08
  c->r[3]=0u+0x00000504u; // 801D3F0C
  c->lr=0x801D3F14u; f_801CD9D0(c); // 801D3F10
L_801D3F14:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D3F14
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D3F18
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D3F1C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D3F20
  c->lr=c->r[0]; // 801D3F24
  c->r[1]=c->r[1]+0x00000020u; // 801D3F28
  return; // 801D3F2C
}

// btm_acl_init
void f_801D3F30(Ctx* __restrict c) {
  trace_call(0x801D3F30u);
  c->r[3]=0u+0x80480000u; // 801D3F30
  c->r[4]=0u+0x00007D00u; // 801D3F34
  c->r[3]=c->r[3]+0x000034D8u; // 801D3F38
  c->r[0]=0u+0x000000FFu; // 801D3F3C
  W16(c->r[3]+0x000004C6u,c->r[4]); // 801D3F40
  W8(c->r[3]+0x000027BFu,c->r[0]); // 801D3F44
  return; // 801D3F48
}

// btm_handle_to_acl_index
void f_801D3F4C(Ctx* __restrict c) {
  trace_call(0x801D3F4Cu);
  c->r[4]=0u+0x80480000u; // 801D3F4C
  c->r[5]=0u+0x00000000u; // 801D3F50
  c->r[4]=c->r[4]+0x000034D8u; // 801D3F54
  c->r[0]=R8(c->r[4]+0x0000014Du); // 801D3F58
  cmps(c,0,(int32_t)c->r[0],0); // 801D3F5C
  if (crb(c,2)) { goto L_801D3F70; } // 801D3F60
  c->r[0]=R16(c->r[4]+0x00000034u); // 801D3F64
  cmpu(c,0,c->r[0],c->r[3]); // 801D3F68
  if (crb(c,2)) { goto L_801D3FC8; } // 801D3F6C
L_801D3F70:;
  c->r[0]=R8(c->r[4]+0x00000269u); // 801D3F70
  c->r[5]=0u+0x00000001u; // 801D3F74
  cmps(c,0,(int32_t)c->r[0],0); // 801D3F78
  if (crb(c,2)) { goto L_801D3F8C; } // 801D3F7C
  c->r[0]=R16(c->r[4]+0x00000150u); // 801D3F80
  cmpu(c,0,c->r[0],c->r[3]); // 801D3F84
  if (crb(c,2)) { goto L_801D3FC8; } // 801D3F88
L_801D3F8C:;
  c->r[0]=R8(c->r[4]+0x00000385u); // 801D3F8C
  c->r[5]=0u+0x00000002u; // 801D3F90
  cmps(c,0,(int32_t)c->r[0],0); // 801D3F94
  if (crb(c,2)) { goto L_801D3FA8; } // 801D3F98
  c->r[0]=R16(c->r[4]+0x0000026Cu); // 801D3F9C
  cmpu(c,0,c->r[0],c->r[3]); // 801D3FA0
  if (crb(c,2)) { goto L_801D3FC8; } // 801D3FA4
L_801D3FA8:;
  c->r[0]=R8(c->r[4]+0x000004A1u); // 801D3FA8
  c->r[5]=0u+0x00000003u; // 801D3FAC
  cmps(c,0,(int32_t)c->r[0],0); // 801D3FB0
  if (crb(c,2)) { goto L_801D3FC4; } // 801D3FB4
  c->r[0]=R16(c->r[4]+0x00000388u); // 801D3FB8
  cmpu(c,0,c->r[0],c->r[3]); // 801D3FBC
  if (crb(c,2)) { goto L_801D3FC8; } // 801D3FC0
L_801D3FC4:;
  c->r[5]=0u+0x00000004u; // 801D3FC4
L_801D3FC8:;
  c->r[3]=c->r[5]|c->r[5]; // 801D3FC8
  return; // 801D3FCC
}

// btm_acl_created
void f_801D3FD0(Ctx* __restrict c) {
  trace_call(0x801D3FD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D3FD0
  c->r[0]=c->lr; // 801D3FD4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D3FD8
  c->r[11]=c->r[1]+0x00000030u; // 801D3FDC
  c->lr=0x801D3FE4u; f_800C2E44(c); // 801D3FE0
  c->r[8]=0u+0x80480000u; // 801D3FE4
  c->r[30]=c->r[3]|c->r[3]; // 801D3FE8
  c->r[8]=c->r[8]+0x000034D8u; // 801D3FEC
  c->r[25]=c->r[4]|c->r[4]; // 801D3FF0
  c->r[26]=c->r[5]|c->r[5]; // 801D3FF4
  c->r[27]=c->r[6]|c->r[6]; // 801D3FF8
  c->r[28]=c->r[7]|c->r[7]; // 801D3FFC
  c->r[29]=c->r[8]+0x00000034u; // 801D4000
  c->r[31]=0u+0x00000000u; // 801D4004
L_801D4008:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 801D4008
  cmps(c,0,(int32_t)c->r[0],0); // 801D400C
  if (crb(c,2)) { goto L_801D4030; } // 801D4010
  c->r[4]=c->r[30]|c->r[30]; // 801D4014
  c->r[3]=c->r[29]+0x00000008u; // 801D4018
  c->r[5]=0u+0x00000006u; // 801D401C
  c->lr=0x801D4024u; f_800C6228(c); // 801D4020
  cmps(c,0,(int32_t)c->r[3],0); // 801D4024
  if (!crb(c,2)) { goto L_801D4030; } // 801D4028
  goto L_801D4044; // 801D402C
L_801D4030:;
  c->r[31]=c->r[31]+0x00000001u; // 801D4030
  c->r[29]=c->r[29]+0x0000011Cu; // 801D4034
  cmpu(c,0,c->r[31],0x00000004u); // 801D4038
  if (crb(c,0)) { IRQCHK(c); goto L_801D4008; } // 801D403C
  c->r[29]=0u+0x00000000u; // 801D4040
L_801D4044:;
  cmps(c,0,(int32_t)c->r[29],0); // 801D4044
  if (crb(c,2)) { goto L_801D4098; } // 801D4048
  W16(c->r[29]+0x00000000u,c->r[27]); // 801D404C
  c->r[3]=0u+0x80480000u; // 801D4050
  c->r[3]=c->r[3]+0x000034D8u; // 801D4054
  W8(c->r[29]+0x0000011Au,c->r[28]); // 801D4058
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801D405C
  cmpu(c,0,c->r[0],0x00000004u); // 801D4060
  if (crb(c,0)) { goto L_801D42CC; } // 801D4064
  c->r[3]=0u+0x000D0000u; // 801D4068
  c->r[4]=0u+0x803A0000u; // 801D406C
  c->r[5]=R8(c->r[30]+0x00000000u); // 801D4070
  c->r[3]=c->r[3]+0x00000003u; // 801D4074
  c->r[6]=R8(c->r[30]+0x00000001u); // 801D4078
  c->r[4]=c->r[4]+0xFFFFEFF0u; // 801D407C
  c->r[7]=R8(c->r[30]+0x00000002u); // 801D4080
  c->r[8]=R8(c->r[30]+0x00000003u); // 801D4084
  c->r[9]=R8(c->r[30]+0x00000004u); // 801D4088
  c->r[10]=R8(c->r[30]+0x00000005u); // 801D408C
  c->lr=0x801D4094u; f_801CDA90(c); // 801D4090
  goto L_801D42CC; // 801D4094
L_801D4098:;
  c->r[3]=0u+0x80480000u; // 801D4098
  c->r[0]=0u+0x00000004u; // 801D409C
  c->r[3]=c->r[3]+0x000034D8u; // 801D40A0
  c->r[4]=0u+0x00000000u; // 801D40A4
  c->r[31]=c->r[3]+0x00000034u; // 801D40A8
  c->ctr=c->r[0]; // 801D40AC
L_801D40B0:;
  c->r[0]=R8(c->r[31]+0x00000119u); // 801D40B0
  cmps(c,0,(int32_t)c->r[0],0); // 801D40B4
  if (!crb(c,2)) { goto L_801D42C0; } // 801D40B8
  c->r[3]=0u+0x00000001u; // 801D40BC
  c->r[0]=0u+0x00000000u; // 801D40C0
  W8(c->r[31]+0x00000119u,c->r[3]); // 801D40C4
  c->r[3]=rotl(c->r[4],0)&0x000000FFu; // 801D40C8
  W16(c->r[31]+0x00000000u,c->r[27]); // 801D40CC
  W8(c->r[31]+0x0000011Au,c->r[28]); // 801D40D0
  W16(c->r[31]+0x00000004u,c->r[0]); // 801D40D4
  c->lr=0x801D40DCu; f_801D9CAC(c); // 801D40D8
  c->r[4]=c->r[30]|c->r[30]; // 801D40DC
  c->r[3]=c->r[31]+0x00000008u; // 801D40E0
  c->r[5]=0u+0x00000006u; // 801D40E4
  c->lr=0x801D40ECu; f_80004000(c); // 801D40E8
  cmps(c,0,(int32_t)c->r[25],0); // 801D40EC
  if (crb(c,2)) { goto L_801D4104; } // 801D40F0
  c->r[4]=c->r[25]|c->r[25]; // 801D40F4
  c->r[3]=c->r[31]+0x0000000Eu; // 801D40F8
  c->r[5]=0u+0x00000003u; // 801D40FC
  c->lr=0x801D4104u; f_80004000(c); // 801D4100
L_801D4104:;
  cmps(c,0,(int32_t)c->r[26],0); // 801D4104
  if (crb(c,2)) { goto L_801D411C; } // 801D4108
  c->r[4]=c->r[26]|c->r[26]; // 801D410C
  c->r[3]=c->r[31]+0x00000011u; // 801D4110
  c->r[5]=0u+0x000000F8u; // 801D4114
  c->lr=0x801D411Cu; f_80004000(c); // 801D4118
L_801D411C:;
  c->r[3]=R16(c->r[31]+0x00000000u); // 801D411C
  c->lr=0x801D4124u; f_801E1630(c); // 801D4120
  c->r[3]=R16(c->r[31]+0x00000000u); // 801D4124
  c->lr=0x801D412Cu; f_801E15B4(c); // 801D4128
  c->r[3]=c->r[27]|c->r[27]; // 801D412C
  c->lr=0x801D4134u; f_801D6068(c); // 801D4130
  cmps(c,0,(int32_t)c->r[3],0); // 801D4134
  c->r[5]=c->r[3]|c->r[3]; // 801D4138
  if (crb(c,2)) { goto L_801D42B4; } // 801D413C
  c->r[0]=0u+0x00000008u; // 801D4140
  c->r[6]=0u+0x00000000u; // 801D4144
  c->ctr=c->r[0]; // 801D4148
L_801D414C:;
  c->r[0]=rotl(c->r[6],0)&0x000000FFu; // 801D414C
  c->r[4]=c->r[3]+c->r[0]; // 801D4150
  c->r[0]=R8(c->r[4]+0x00000077u); // 801D4154
  cmps(c,0,(int32_t)c->r[0],0); // 801D4158
  if (crb(c,2)) { goto L_801D42AC; } // 801D415C
  c->r[4]=c->r[5]+0x00000077u; // 801D4160
  c->r[3]=c->r[31]+0x00000110u; // 801D4164
  c->r[5]=0u+0x00000008u; // 801D4168
  c->lr=0x801D4170u; f_80004000(c); // 801D416C
  c->r[3]=0u+0x80480000u; // 801D4170
  c->r[0]=0u+0xFFFFCCF9u; // 801D4174
  c->r[3]=c->r[3]+0x000034D8u; // 801D4178
  c->r[5]=R16(c->r[3]+0x00000654u); // 801D417C
  c->r[3]=R8(c->r[3]+0x00000636u); // 801D4180
  c->r[4]=c->r[5]&0x0000CC18u; cr0(c,c->r[4]); // 801D4184
  cmpu(c,0,c->r[3],0x00000003u); // 801D4188
  c->r[30]=c->r[4]&c->r[0]; // 801D418C
  if (crb(c,0)) { goto L_801D41A0; } // 801D4190
  c->r[0]=c->r[5]&0x00003306u; cr0(c,c->r[0]); // 801D4194
  c->r[0]=c->r[4]|c->r[0]; // 801D4198
  c->r[30]=rotl(c->r[0],0)&0x0000FFFFu; // 801D419C
L_801D41A0:;
  c->r[3]=0u+0x80480000u; // 801D41A0
  c->r[3]=c->r[3]+0x000034D8u; // 801D41A4
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801D41A8
  cmpu(c,0,c->r[0],0x00000004u); // 801D41AC
  if (crb(c,0)) { goto L_801D41CC; } // 801D41B0
  c->r[3]=0u+0x000D0000u; // 801D41B4
  c->r[4]=0u+0x803A0000u; // 801D41B8
  c->r[3]=c->r[3]+0x00000003u; // 801D41BC
  c->r[5]=rotl(c->r[30],0)&0x0000FFFFu; // 801D41C0
  c->r[4]=c->r[4]+0xFFFFF030u; // 801D41C4
  c->lr=0x801D41CCu; f_801CD9F0(c); // 801D41C8
L_801D41CC:;
  c->r[3]=R16(c->r[31]+0x00000000u); // 801D41CC
  c->r[4]=rotl(c->r[30],0)&0x0000FFFFu; // 801D41D0
  c->lr=0x801D41D8u; f_801E1228(c); // 801D41D4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D41D8
  if (crb(c,2)) { goto L_801D41E4; } // 801D41DC
  W16(c->r[31]+0x00000002u,c->r[30]); // 801D41E0
L_801D41E4:;
  c->r[4]=0u+0x80480000u; // 801D41E4
  c->r[4]=c->r[4]+0x000034D8u; // 801D41E8
  c->r[0]=R16(c->r[4]+0x000004C4u); // 801D41EC
  cmps(c,0,(int32_t)c->r[0],0); // 801D41F0
  if (crb(c,2)) { goto L_801D4204; } // 801D41F4
  c->r[3]=c->r[31]+0x00000008u; // 801D41F8
  c->r[4]=c->r[4]+0x000004C4u; // 801D41FC
  c->lr=0x801D4204u; f_801D4798(c); // 801D4200
L_801D4204:;
  c->r[3]=0u+0x80480000u; // 801D4204
  c->r[29]=0u+0x00000000u; // 801D4208
  c->r[3]=c->r[3]+0x000034D8u; // 801D420C
  c->r[28]=R16(c->r[3]+0x000004C6u); // 801D4210
  c->r[30]=c->r[3]+0x00000034u; // 801D4214
L_801D4218:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 801D4218
  cmps(c,0,(int32_t)c->r[0],0); // 801D421C
  if (crb(c,2)) { goto L_801D4240; } // 801D4220
  c->r[3]=c->r[30]+0x00000008u; // 801D4224
  c->r[4]=c->r[31]+0x00000008u; // 801D4228
  c->r[5]=0u+0x00000006u; // 801D422C
  c->lr=0x801D4234u; f_800C6228(c); // 801D4230
  cmps(c,0,(int32_t)c->r[3],0); // 801D4234
  if (!crb(c,2)) { goto L_801D4240; } // 801D4238
  goto L_801D4254; // 801D423C
L_801D4240:;
  c->r[29]=c->r[29]+0x00000001u; // 801D4240
  c->r[30]=c->r[30]+0x0000011Cu; // 801D4244
  cmpu(c,0,c->r[29],0x00000004u); // 801D4248
  if (crb(c,0)) { IRQCHK(c); goto L_801D4218; } // 801D424C
  c->r[30]=0u+0x00000000u; // 801D4250
L_801D4254:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D4254
  if (crb(c,2)) { goto L_801D4278; } // 801D4258
  W16(c->r[30]+0x0000010Eu,c->r[28]); // 801D425C
  c->r[0]=R8(c->r[30]+0x0000011Au); // 801D4260
  cmps(c,0,(int32_t)c->r[0],0); // 801D4264
  if (!crb(c,2)) { goto L_801D4278; } // 801D4268
  c->r[3]=R16(c->r[30]+0x00000000u); // 801D426C
  c->r[4]=c->r[28]|c->r[28]; // 801D4270
  c->lr=0x801D4278u; f_801E2728(c); // 801D4274
L_801D4278:;
  c->r[3]=0u+0x80480000u; // 801D4278
  c->r[3]=c->r[3]+0x000034D8u; // 801D427C
  c->r[12]=R32(c->r[3]+0x000004C8u); // 801D4280
  cmps(c,0,(int32_t)c->r[12],0); // 801D4284
  if (crb(c,2)) { goto L_801D42CC; } // 801D4288
  c->r[3]=c->r[31]+0x00000008u; // 801D428C
  c->r[4]=c->r[31]+0x0000000Eu; // 801D4290
  c->r[5]=c->r[31]+0x00000011u; // 801D4294
  c->r[6]=c->r[31]+0x00000110u; // 801D4298
  c->r[7]=0u+0x00000001u; // 801D429C
  c->ctr=c->r[12]; // 801D42A0
  if (true) { c->lr=0x801D42A8u; dispatch(c,c->ctr); } // 801D42A4
  goto L_801D42CC; // 801D42A8
L_801D42AC:;
  c->r[6]=c->r[6]+0x00000001u; // 801D42AC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D414C; } // 801D42B0
L_801D42B4:;
  c->r[3]=R16(c->r[31]+0x00000000u); // 801D42B4
  c->lr=0x801D42BCu; f_801E1538(c); // 801D42B8
  goto L_801D42CC; // 801D42BC
L_801D42C0:;
  c->r[4]=c->r[4]+0x00000001u; // 801D42C0
  c->r[31]=c->r[31]+0x0000011Cu; // 801D42C4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D40B0; } // 801D42C8
L_801D42CC:;
  c->r[11]=c->r[1]+0x00000030u; // 801D42CC
  c->lr=0x801D42D4u; f_800C2E90(c); // 801D42D0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D42D4
  c->lr=c->r[0]; // 801D42D8
  c->r[1]=c->r[1]+0x00000030u; // 801D42DC
  return; // 801D42E0
}

// btm_acl_removed
void f_801D42E4(Ctx* __restrict c) {
  trace_call(0x801D42E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D42E4
  c->r[0]=c->lr; // 801D42E8
  c->r[4]=0u+0x80480000u; // 801D42EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D42F0
  c->r[4]=c->r[4]+0x000034D8u; // 801D42F4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D42F8
  c->r[31]=0u+0x00000000u; // 801D42FC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D4300
  c->r[30]=c->r[4]+0x00000034u; // 801D4304
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D4308
  c->r[29]=c->r[3]|c->r[3]; // 801D430C
L_801D4310:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 801D4310
  cmps(c,0,(int32_t)c->r[0],0); // 801D4314
  if (crb(c,2)) { goto L_801D4338; } // 801D4318
  c->r[4]=c->r[29]|c->r[29]; // 801D431C
  c->r[3]=c->r[30]+0x00000008u; // 801D4320
  c->r[5]=0u+0x00000006u; // 801D4324
  c->lr=0x801D432Cu; f_800C6228(c); // 801D4328
  cmps(c,0,(int32_t)c->r[3],0); // 801D432C
  if (!crb(c,2)) { goto L_801D4338; } // 801D4330
  goto L_801D434C; // 801D4334
L_801D4338:;
  c->r[31]=c->r[31]+0x00000001u; // 801D4338
  c->r[30]=c->r[30]+0x0000011Cu; // 801D433C
  cmpu(c,0,c->r[31],0x00000004u); // 801D4340
  if (crb(c,0)) { IRQCHK(c); goto L_801D4310; } // 801D4344
  c->r[30]=0u+0x00000000u; // 801D4348
L_801D434C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D434C
  if (crb(c,2)) { goto L_801D438C; } // 801D4350
  c->r[0]=0u+0x00000000u; // 801D4354
  c->r[3]=0u+0x80480000u; // 801D4358
  W8(c->r[30]+0x00000119u,c->r[0]); // 801D435C
  c->r[3]=c->r[3]+0x000034D8u; // 801D4360
  c->r[12]=R32(c->r[3]+0x000004C8u); // 801D4364
  cmps(c,0,(int32_t)c->r[12],0); // 801D4368
  if (crb(c,2)) { goto L_801D438C; } // 801D436C
  c->r[3]=c->r[29]|c->r[29]; // 801D4370
  c->r[4]=0u+0x00000000u; // 801D4374
  c->r[5]=0u+0x00000000u; // 801D4378
  c->r[6]=0u+0x00000000u; // 801D437C
  c->r[7]=0u+0x00000000u; // 801D4380
  c->ctr=c->r[12]; // 801D4384
  if (true) { c->lr=0x801D438Cu; dispatch(c,c->ctr); } // 801D4388
L_801D438C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D438C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D4390
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D4394
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D4398
  c->lr=c->r[0]; // 801D439C
  c->r[1]=c->r[1]+0x00000020u; // 801D43A0
  return; // 801D43A4
}

// btm_acl_device_down
void f_801D43A8(Ctx* __restrict c) {
  trace_call(0x801D43A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D43A8
  c->r[0]=c->lr; // 801D43AC
  c->r[3]=0u+0x80480000u; // 801D43B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D43B4
  c->r[3]=c->r[3]+0x000034D8u; // 801D43B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D43BC
  c->r[31]=c->r[3]+0x00000034u; // 801D43C0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D43C4
  c->r[30]=0u+0x00000000u; // 801D43C8
L_801D43CC:;
  c->r[0]=R8(c->r[31]+0x00000119u); // 801D43CC
  cmps(c,0,(int32_t)c->r[0],0); // 801D43D0
  if (crb(c,2)) { goto L_801D43E4; } // 801D43D4
  c->r[3]=R16(c->r[31]+0x00000000u); // 801D43D8
  c->r[4]=0u+0x00000003u; // 801D43DC
  c->lr=0x801D43E4u; f_801E881C(c); // 801D43E0
L_801D43E4:;
  c->r[30]=c->r[30]+0x00000001u; // 801D43E4
  c->r[31]=c->r[31]+0x0000011Cu; // 801D43E8
  cmpu(c,0,c->r[30],0x00000004u); // 801D43EC
  if (crb(c,0)) { IRQCHK(c); goto L_801D43CC; } // 801D43F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D43F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D43F8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D43FC
  c->lr=c->r[0]; // 801D4400
  c->r[1]=c->r[1]+0x00000010u; // 801D4404
  return; // 801D4408
}

// BTM_SwitchRole
void f_801D440C(Ctx* __restrict c) {
  trace_call(0x801D440Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D440C
  c->r[0]=c->lr; // 801D4410
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D4414
  c->r[11]=c->r[1]+0x00000030u; // 801D4418
  c->lr=0x801D4420u; f_800C2E4C(c); // 801D441C
  c->r[6]=0u+0x80480000u; // 801D4420
  c->r[28]=c->r[3]|c->r[3]; // 801D4424
  c->r[6]=c->r[6]+0x000034D8u; // 801D4428
  c->r[29]=c->r[4]|c->r[4]; // 801D442C
  c->r[0]=R8(c->r[6]+0x00000640u); // 801D4430
  c->r[30]=c->r[5]|c->r[5]; // 801D4434
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 801D4438
  if (!crb(c,2)) { goto L_801D4448; } // 801D443C
  c->r[3]=0u+0x00000004u; // 801D4440
  goto L_801D4610; // 801D4444
L_801D4448:;
  c->r[31]=c->r[6]+0x00000034u; // 801D4448
  c->r[27]=0u+0x00000000u; // 801D444C
L_801D4450:;
  c->r[0]=R8(c->r[31]+0x00000119u); // 801D4450
  cmps(c,0,(int32_t)c->r[0],0); // 801D4454
  if (crb(c,2)) { goto L_801D4478; } // 801D4458
  c->r[4]=c->r[28]|c->r[28]; // 801D445C
  c->r[3]=c->r[31]+0x00000008u; // 801D4460
  c->r[5]=0u+0x00000006u; // 801D4464
  c->lr=0x801D446Cu; f_800C6228(c); // 801D4468
  cmps(c,0,(int32_t)c->r[3],0); // 801D446C
  if (!crb(c,2)) { goto L_801D4478; } // 801D4470
  goto L_801D448C; // 801D4474
L_801D4478:;
  c->r[27]=c->r[27]+0x00000001u; // 801D4478
  c->r[31]=c->r[31]+0x0000011Cu; // 801D447C
  cmpu(c,0,c->r[27],0x00000004u); // 801D4480
  if (crb(c,0)) { IRQCHK(c); goto L_801D4450; } // 801D4484
  c->r[31]=0u+0x00000000u; // 801D4488
L_801D448C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D448C
  if (!crb(c,2)) { goto L_801D449C; } // 801D4490
  c->r[3]=0u+0x00000007u; // 801D4494
  goto L_801D4610; // 801D4498
L_801D449C:;
  c->r[0]=R8(c->r[31]+0x0000011Au); // 801D449C
  cmpu(c,0,c->r[0],c->r[29]); // 801D44A0
  if (!crb(c,2)) { goto L_801D44B0; } // 801D44A4
  c->r[3]=0u+0x00000000u; // 801D44A8
  goto L_801D4610; // 801D44AC
L_801D44B0:;
  c->r[3]=c->r[28]|c->r[28]; // 801D44B0
  c->lr=0x801D44B8u; f_801DB334(c); // 801D44B4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801D44B8
  cmpu(c,0,c->r[0],0x00000001u); // 801D44BC
  if (!crb(c,2)) { goto L_801D44CC; } // 801D44C0
  c->r[3]=0u+0x00000003u; // 801D44C4
  goto L_801D4610; // 801D44C8
L_801D44CC:;
  c->r[0]=R8(c->r[31]+0x0000011Bu); // 801D44CC
  cmps(c,0,(int32_t)c->r[0],0); // 801D44D0
  if (crb(c,2)) { goto L_801D4508; } // 801D44D4
  c->r[3]=0u+0x80480000u; // 801D44D8
  c->r[3]=c->r[3]+0x000034D8u; // 801D44DC
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801D44E0
  cmpu(c,0,c->r[0],0x00000005u); // 801D44E4
  if (crb(c,0)) { goto L_801D4500; } // 801D44E8
  c->r[3]=0u+0x000D0000u; // 801D44EC
  c->r[4]=0u+0x803A0000u; // 801D44F0
  c->r[3]=c->r[3]+0x00000004u; // 801D44F4
  c->r[4]=c->r[4]+0xFFFFF050u; // 801D44F8
  c->lr=0x801D4500u; f_801CD9D0(c); // 801D44FC
L_801D4500:;
  c->r[3]=0u+0x00000002u; // 801D4500
  goto L_801D4610; // 801D4504
L_801D4508:;
  c->r[3]=0u+0x80480000u; // 801D4508
  c->r[4]=0u+0x00000000u; // 801D450C
  c->r[3]=c->r[3]+0x000034D8u; // 801D4510
  c->r[5]=0u+0x00000008u; // 801D4514
  c->r[3]=c->r[3]+0x00000624u; // 801D4518
  c->lr=0x801D4520u; f_80004350(c); // 801D451C
  c->r[3]=c->r[31]+0x00000008u; // 801D4520
  c->r[4]=c->r[1]+0x00000008u; // 801D4524
  c->lr=0x801D452Cu; f_801D9B7C(c); // 801D4528
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D452C
  if (crb(c,2)) { goto L_801D4538; } // 801D4530
  goto L_801D4610; // 801D4534
L_801D4538:;
  c->r[3]=R8(c->r[1]+0x00000008u); // 801D4538
  c->r[0]=c->r[3]+0x000000FEu; // 801D453C
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801D4540
  cmpu(c,0,c->r[0],0x00000001u); // 801D4544
  if (crb(c,1)) { goto L_801D4584; } // 801D4548
  c->r[0]=0u+0x00000000u; // 801D454C
  c->r[4]=c->r[31]+0x00000008u; // 801D4550
  W8(c->r[1]+0x00000014u,c->r[0]); // 801D4554
  c->r[5]=c->r[1]+0x0000000Cu; // 801D4558
  c->r[3]=0u+0x00000080u; // 801D455C
  c->lr=0x801D4564u; f_801D99AC(c); // 801D4560
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801D4564
  cmpu(c,0,c->r[0],0x00000001u); // 801D4568
  if (crb(c,2)) { goto L_801D4578; } // 801D456C
  c->r[3]=0u+0x00000006u; // 801D4570
  goto L_801D4610; // 801D4574
L_801D4578:;
  c->r[0]=0u+0x00000001u; // 801D4578
  W8(c->r[31]+0x0000011Bu,c->r[0]); // 801D457C
  goto L_801D45EC; // 801D4580
L_801D4584:;
  c->r[3]=c->r[28]|c->r[28]; // 801D4584
  c->lr=0x801D458Cu; f_801D6120(c); // 801D4588
  cmps(c,0,(int32_t)c->r[3],0); // 801D458C
  if (crb(c,2)) { goto L_801D45C8; } // 801D4590
  c->r[0]=R8(c->r[3]+0x00000076u); // 801D4594
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801D4598
  if (crb(c,2)) { goto L_801D45C8; } // 801D459C
  c->r[3]=R16(c->r[31]+0x00000000u); // 801D45A0
  c->r[4]=0u+0x00000000u; // 801D45A4
  c->lr=0x801D45ACu; f_801E1334(c); // 801D45A8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D45AC
  if (!crb(c,2)) { goto L_801D45BC; } // 801D45B0
  c->r[3]=0u+0x00000003u; // 801D45B4
  goto L_801D4610; // 801D45B8
L_801D45BC:;
  c->r[0]=0u+0x00000002u; // 801D45BC
  W8(c->r[31]+0x0000011Bu,c->r[0]); // 801D45C0
  goto L_801D45EC; // 801D45C4
L_801D45C8:;
  c->r[3]=c->r[28]|c->r[28]; // 801D45C8
  c->r[4]=c->r[29]|c->r[29]; // 801D45CC
  c->lr=0x801D45D4u; f_801E1C2C(c); // 801D45D0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D45D4
  if (!crb(c,2)) { goto L_801D45E4; } // 801D45D8
  c->r[3]=0u+0x00000003u; // 801D45DC
  goto L_801D4610; // 801D45E0
L_801D45E4:;
  c->r[0]=0u+0x00000005u; // 801D45E4
  W8(c->r[31]+0x0000011Bu,c->r[0]); // 801D45E8
L_801D45EC:;
  c->r[31]=0u+0x80480000u; // 801D45EC
  c->r[4]=c->r[28]|c->r[28]; // 801D45F0
  c->r[31]=c->r[31]+0x000034D8u; // 801D45F4
  c->r[5]=0u+0x00000006u; // 801D45F8
  c->r[3]=c->r[31]+0x00000626u; // 801D45FC
  c->lr=0x801D4604u; f_80004000(c); // 801D4600
  W8(c->r[31]+0x00000625u,c->r[29]); // 801D4604
  c->r[3]=0u+0x00000001u; // 801D4608
  W32(c->r[31]+0x0000062Cu,c->r[30]); // 801D460C
L_801D4610:;
  c->r[11]=c->r[1]+0x00000030u; // 801D4610
  c->lr=0x801D4618u; f_800C2E98(c); // 801D4614
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D4618
  c->lr=c->r[0]; // 801D461C
  c->r[1]=c->r[1]+0x00000030u; // 801D4620
  return; // 801D4624
}

// btm_acl_encrypt_change
void f_801D4628(Ctx* __restrict c) {
  trace_call(0x801D4628u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4628
  c->r[0]=c->lr; // 801D462C
  c->r[4]=0u+0x80480000u; // 801D4630
  c->r[6]=0u+0x00000000u; // 801D4634
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D4638
  c->r[4]=c->r[4]+0x000034D8u; // 801D463C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D4640
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D4644
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D4648
  c->r[0]=R8(c->r[4]+0x0000014Du); // 801D464C
  cmps(c,0,(int32_t)c->r[0],0); // 801D4650
  if (crb(c,2)) { goto L_801D4664; } // 801D4654
  c->r[0]=R16(c->r[4]+0x00000034u); // 801D4658
  cmpu(c,0,c->r[0],c->r[3]); // 801D465C
  if (crb(c,2)) { goto L_801D46BC; } // 801D4660
L_801D4664:;
  c->r[0]=R8(c->r[4]+0x00000269u); // 801D4664
  c->r[6]=0u+0x00000001u; // 801D4668
  cmps(c,0,(int32_t)c->r[0],0); // 801D466C
  if (crb(c,2)) { goto L_801D4680; } // 801D4670
  c->r[0]=R16(c->r[4]+0x00000150u); // 801D4674
  cmpu(c,0,c->r[0],c->r[3]); // 801D4678
  if (crb(c,2)) { goto L_801D46BC; } // 801D467C
L_801D4680:;
  c->r[0]=R8(c->r[4]+0x00000385u); // 801D4680
  c->r[6]=0u+0x00000002u; // 801D4684
  cmps(c,0,(int32_t)c->r[0],0); // 801D4688
  if (crb(c,2)) { goto L_801D469C; } // 801D468C
  c->r[0]=R16(c->r[4]+0x0000026Cu); // 801D4690
  cmpu(c,0,c->r[0],c->r[3]); // 801D4694
  if (crb(c,2)) { goto L_801D46BC; } // 801D4698
L_801D469C:;
  c->r[0]=R8(c->r[4]+0x000004A1u); // 801D469C
  c->r[6]=0u+0x00000003u; // 801D46A0
  cmps(c,0,(int32_t)c->r[0],0); // 801D46A4
  if (crb(c,2)) { goto L_801D46B8; } // 801D46A8
  c->r[0]=R16(c->r[4]+0x00000388u); // 801D46AC
  cmpu(c,0,c->r[0],c->r[3]); // 801D46B0
  if (crb(c,2)) { goto L_801D46BC; } // 801D46B4
L_801D46B8:;
  c->r[6]=0u+0x00000004u; // 801D46B8
L_801D46BC:;
  cmpu(c,0,c->r[6],0x00000004u); // 801D46BC
  if (!crb(c,0)) { goto L_801D477C; } // 801D46C0
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)284); // 801D46C4
  c->r[30]=0u+0x80480000u; // 801D46C8
  c->r[30]=c->r[30]+0x000034D8u; // 801D46CC
  c->r[29]=c->r[30]+c->r[0]; // 801D46D0
  goto L_801D46DC; // 801D46D4
  goto L_801D477C; // 801D46D8
L_801D46DC:;
  c->r[0]=R8(c->r[29]+0x0000014Fu); // 801D46DC
  cmpu(c,0,c->r[0],0x00000002u); // 801D46E0
  if (!crb(c,2)) { goto L_801D4750; } // 801D46E4
  cmps(c,0,(int32_t)c->r[5],0); // 801D46E8
  if (crb(c,2)) { goto L_801D46FC; } // 801D46EC
  c->r[0]=0u+0x00000000u; // 801D46F0
  W8(c->r[29]+0x0000014Fu,c->r[0]); // 801D46F4
  goto L_801D4704; // 801D46F8
L_801D46FC:;
  c->r[0]=0u+0x00000003u; // 801D46FC
  W8(c->r[29]+0x0000014Fu,c->r[0]); // 801D4700
L_801D4704:;
  c->r[0]=R8(c->r[29]+0x0000014Eu); // 801D4704
  c->r[3]=c->r[29]+0x0000003Cu; // 801D4708
  c->r[0]=cntlz(c->r[0]); // 801D470C
  c->r[4]=rotl(c->r[0],27)&0x000000FFu; // 801D4710
  c->lr=0x801D4718u; f_801E1C2C(c); // 801D4714
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D4718
  if (!crb(c,2)) { goto L_801D477C; } // 801D471C
  c->r[30]=0u+0x00000000u; // 801D4720
  c->r[31]=0u+0x80480000u; // 801D4724
  W8(c->r[29]+0x0000014Fu,c->r[30]); // 801D4728
  c->r[31]=c->r[31]+0x000034D8u; // 801D472C
  c->r[12]=R32(c->r[31]+0x0000062Cu); // 801D4730
  cmps(c,0,(int32_t)c->r[12],0); // 801D4734
  if (crb(c,2)) { goto L_801D477C; } // 801D4738
  c->r[3]=c->r[31]+0x00000624u; // 801D473C
  c->ctr=c->r[12]; // 801D4740
  if (true) { c->lr=0x801D4748u; dispatch(c,c->ctr); } // 801D4744
  W32(c->r[31]+0x0000062Cu,c->r[30]); // 801D4748
  goto L_801D477C; // 801D474C
L_801D4750:;
  cmpu(c,0,c->r[0],0x00000004u); // 801D4750
  if (!crb(c,2)) { goto L_801D477C; } // 801D4754
  c->r[31]=0u+0x00000000u; // 801D4758
  W8(c->r[29]+0x0000014Fu,c->r[31]); // 801D475C
  c->r[12]=R32(c->r[30]+0x0000062Cu); // 801D4760
  cmps(c,0,(int32_t)c->r[12],0); // 801D4764
  if (crb(c,2)) { goto L_801D477C; } // 801D4768
  c->r[3]=c->r[30]+0x00000624u; // 801D476C
  c->ctr=c->r[12]; // 801D4770
  if (true) { c->lr=0x801D4778u; dispatch(c,c->ctr); } // 801D4774
  W32(c->r[30]+0x0000062Cu,c->r[31]); // 801D4778
L_801D477C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D477C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D4780
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D4784
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D4788
  c->lr=c->r[0]; // 801D478C
  c->r[1]=c->r[1]+0x00000020u; // 801D4790
  return; // 801D4794
}

// BTM_SetLinkPolicy
void f_801D4798(Ctx* __restrict c) {
  trace_call(0x801D4798u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4798
  c->r[0]=c->lr; // 801D479C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D47A0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D47A4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D47A8
  c->r[30]=0u+0x803A0000u; // 801D47AC
  c->r[30]=c->r[30]+0xFFFFEFF0u; // 801D47B0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D47B4
  c->r[29]=c->r[4]|c->r[4]; // 801D47B8
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D47BC
  c->r[28]=c->r[3]|c->r[3]; // 801D47C0
  c->lr=0x801D47C8u; f_801D7464(c); // 801D47C4
  c->r[4]=R16(c->r[29]+0x00000000u); // 801D47C8
  c->r[31]=c->r[3]|c->r[3]; // 801D47CC
  cmps(c,0,(int32_t)c->r[4],0); // 801D47D0
  if (crb(c,2)) { goto L_801D48F0; } // 801D47D4
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 801D47D8
  if (crb(c,2)) { goto L_801D4818; } // 801D47DC
  c->r[0]=R8(c->r[3]+0x00000000u); // 801D47E0
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 801D47E4
  if (!crb(c,2)) { goto L_801D4818; } // 801D47E8
  c->r[5]=rotl(c->r[4],0)&0x0000FFFEu; // 801D47EC
  c->r[3]=0u+0x80480000u; // 801D47F0
  W16(c->r[29]+0x00000000u,c->r[5]); // 801D47F4
  c->r[3]=c->r[3]+0x000034D8u; // 801D47F8
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801D47FC
  cmpu(c,0,c->r[0],0x00000003u); // 801D4800
  if (crb(c,0)) { goto L_801D4818; } // 801D4804
  c->r[3]=0u+0x000D0000u; // 801D4808
  c->r[4]=c->r[30]+0x000000BCu; // 801D480C
  c->r[3]=c->r[3]+0x00000002u; // 801D4810
  c->lr=0x801D4818u; f_801CD9F0(c); // 801D4814
L_801D4818:;
  c->r[3]=R16(c->r[29]+0x00000000u); // 801D4818
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 801D481C
  if (crb(c,2)) { goto L_801D4860; } // 801D4820
  c->r[0]=R8(c->r[31]+0x00000000u); // 801D4824
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801D4828
  if (!crb(c,2)) { goto L_801D4860; } // 801D482C
  c->r[5]=rotl(c->r[3],0)&0xFFFFFFFDu; // 801D4830
  c->r[3]=0u+0x80480000u; // 801D4834
  W16(c->r[29]+0x00000000u,c->r[5]); // 801D4838
  c->r[3]=c->r[3]+0x000034D8u; // 801D483C
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801D4840
  cmpu(c,0,c->r[0],0x00000003u); // 801D4844
  if (crb(c,0)) { goto L_801D4860; } // 801D4848
  c->r[3]=0u+0x000D0000u; // 801D484C
  c->r[4]=c->r[30]+0x000000F8u; // 801D4850
  c->r[3]=c->r[3]+0x00000002u; // 801D4854
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 801D4858
  c->lr=0x801D4860u; f_801CD9F0(c); // 801D485C
L_801D4860:;
  c->r[3]=R16(c->r[29]+0x00000000u); // 801D4860
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 801D4864
  if (crb(c,2)) { goto L_801D48A8; } // 801D4868
  c->r[0]=R8(c->r[31]+0x00000000u); // 801D486C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801D4870
  if (!crb(c,2)) { goto L_801D48A8; } // 801D4874
  c->r[5]=rotl(c->r[3],0)&0xFFFFFFFBu; // 801D4878
  c->r[3]=0u+0x80480000u; // 801D487C
  W16(c->r[29]+0x00000000u,c->r[5]); // 801D4880
  c->r[3]=c->r[3]+0x000034D8u; // 801D4884
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801D4888
  cmpu(c,0,c->r[0],0x00000003u); // 801D488C
  if (crb(c,0)) { goto L_801D48A8; } // 801D4890
  c->r[3]=0u+0x000D0000u; // 801D4894
  c->r[4]=c->r[30]+0x00000130u; // 801D4898
  c->r[3]=c->r[3]+0x00000002u; // 801D489C
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 801D48A0
  c->lr=0x801D48A8u; f_801CD9F0(c); // 801D48A4
L_801D48A8:;
  c->r[3]=R16(c->r[29]+0x00000000u); // 801D48A8
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 801D48AC
  if (crb(c,2)) { goto L_801D48F0; } // 801D48B0
  c->r[0]=R8(c->r[31]+0x00000001u); // 801D48B4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801D48B8
  if (!crb(c,2)) { goto L_801D48F0; } // 801D48BC
  c->r[5]=rotl(c->r[3],0)&0xFFFFFFF7u; // 801D48C0
  c->r[3]=0u+0x80480000u; // 801D48C4
  W16(c->r[29]+0x00000000u,c->r[5]); // 801D48C8
  c->r[3]=c->r[3]+0x000034D8u; // 801D48CC
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801D48D0
  cmpu(c,0,c->r[0],0x00000003u); // 801D48D4
  if (crb(c,0)) { goto L_801D48F0; } // 801D48D8
  c->r[3]=0u+0x000D0000u; // 801D48DC
  c->r[4]=c->r[30]+0x00000170u; // 801D48E0
  c->r[3]=c->r[3]+0x00000002u; // 801D48E4
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 801D48E8
  c->lr=0x801D48F0u; f_801CD9F0(c); // 801D48EC
L_801D48F0:;
  c->r[3]=0u+0x80480000u; // 801D48F0
  c->r[30]=0u+0x00000000u; // 801D48F4
  c->r[3]=c->r[3]+0x000034D8u; // 801D48F8
  c->r[31]=c->r[3]+0x00000034u; // 801D48FC
L_801D4900:;
  c->r[0]=R8(c->r[31]+0x00000119u); // 801D4900
  cmps(c,0,(int32_t)c->r[0],0); // 801D4904
  if (crb(c,2)) { goto L_801D4928; } // 801D4908
  c->r[4]=c->r[28]|c->r[28]; // 801D490C
  c->r[3]=c->r[31]+0x00000008u; // 801D4910
  c->r[5]=0u+0x00000006u; // 801D4914
  c->lr=0x801D491Cu; f_800C6228(c); // 801D4918
  cmps(c,0,(int32_t)c->r[3],0); // 801D491C
  if (!crb(c,2)) { goto L_801D4928; } // 801D4920
  goto L_801D493C; // 801D4924
L_801D4928:;
  c->r[30]=c->r[30]+0x00000001u; // 801D4928
  c->r[31]=c->r[31]+0x0000011Cu; // 801D492C
  cmpu(c,0,c->r[30],0x00000004u); // 801D4930
  if (crb(c,0)) { IRQCHK(c); goto L_801D4900; } // 801D4934
  c->r[31]=0u+0x00000000u; // 801D4938
L_801D493C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D493C
  if (crb(c,2)) { goto L_801D4964; } // 801D4940
  c->r[3]=R16(c->r[31]+0x00000000u); // 801D4944
  c->r[4]=R16(c->r[29]+0x00000000u); // 801D4948
  c->lr=0x801D4950u; f_801E1CDC(c); // 801D494C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D4950
  c->r[3]=0u+0x00000003u; // 801D4954
  if (crb(c,2)) { goto L_801D4968; } // 801D4958
  c->r[3]=0u+0x00000001u; // 801D495C
  goto L_801D4968; // 801D4960
L_801D4964:;
  c->r[3]=0u+0x00000007u; // 801D4964
L_801D4968:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D4968
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D496C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D4970
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D4974
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D4978
  c->lr=c->r[0]; // 801D497C
  c->r[1]=c->r[1]+0x00000020u; // 801D4980
  return; // 801D4984
}

// BTM_SetDefaultLinkPolicy
void f_801D4988(Ctx* __restrict c) {
  trace_call(0x801D4988u);
  c->r[4]=0u+0x80480000u; // 801D4988
  c->r[4]=c->r[4]+0x000034D8u; // 801D498C
  W16(c->r[4]+0x000004C4u,c->r[3]); // 801D4990
  return; // 801D4994
}

// btm_read_link_policy_complete
void f_801D4998(Ctx* __restrict c) {
  trace_call(0x801D4998u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4998
  c->r[0]=c->lr; // 801D499C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D49A0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801D49A4
  c->r[31]=0u+0x80480000u; // 801D49A8
  c->r[31]=c->r[31]+0x000034D8u; // 801D49AC
  W32(c->r[1]+0x00000028u,c->r[30]); // 801D49B0
  W32(c->r[1]+0x00000024u,c->r[29]); // 801D49B4
  c->r[29]=c->r[31]+0x00000034u; // 801D49B8
  W32(c->r[1]+0x00000020u,c->r[28]); // 801D49BC
  c->r[28]=c->r[3]|c->r[3]; // 801D49C0
  c->r[3]=c->r[31]+0x000005ACu; // 801D49C4
  c->r[30]=R32(c->r[31]+0x000005C4u); // 801D49C8
  c->lr=0x801D49D0u; f_801CE050(c); // 801D49CC
  c->r[3]=0u+0x00000000u; // 801D49D0
  cmps(c,0,(int32_t)c->r[30],0); // 801D49D4
  W32(c->r[31]+0x000005C4u,c->r[3]); // 801D49D8
  if (crb(c,2)) { goto L_801D4A7C; } // 801D49DC
  c->r[0]=R8(c->r[28]+0x00000000u); // 801D49E0
  cmps(c,0,(int32_t)c->r[0],0); // 801D49E4
  W8(c->r[1]+0x00000009u,c->r[0]); // 801D49E8
  if (!crb(c,2)) { goto L_801D4A64; } // 801D49EC
  W8(c->r[1]+0x00000008u,c->r[3]); // 801D49F0
  c->r[0]=0u+0x00000004u; // 801D49F4
  c->r[7]=0u+0x00000000u; // 801D49F8
  c->r[4]=R8(c->r[28]+0x00000002u); // 801D49FC
  c->r[3]=R8(c->r[28]+0x00000004u); // 801D4A00
  c->r[5]=rotl(c->r[4],8)&0xFFFFFF00u; // 801D4A04
  c->r[6]=R8(c->r[28]+0x00000001u); // 801D4A08
  c->r[4]=R8(c->r[28]+0x00000003u); // 801D4A0C
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 801D4A10
  c->r[5]=c->r[6]+c->r[5]; // 801D4A14
  c->r[3]=c->r[4]+c->r[3]; // 801D4A18
  W16(c->r[1]+0x00000010u,c->r[3]); // 801D4A1C
  c->r[3]=rotl(c->r[5],0)&0x0000FFFFu; // 801D4A20
  c->ctr=c->r[0]; // 801D4A24
L_801D4A28:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 801D4A28
  cmps(c,0,(int32_t)c->r[0],0); // 801D4A2C
  if (crb(c,2)) { goto L_801D4A54; } // 801D4A30
  c->r[0]=R16(c->r[29]+0x00000000u); // 801D4A34
  cmpu(c,0,c->r[3],c->r[0]); // 801D4A38
  if (!crb(c,2)) { goto L_801D4A54; } // 801D4A3C
  c->r[3]=c->r[1]+0x0000000Au; // 801D4A40
  c->r[4]=c->r[29]+0x00000008u; // 801D4A44
  c->r[5]=0u+0x00000006u; // 801D4A48
  c->lr=0x801D4A50u; f_80004000(c); // 801D4A4C
  goto L_801D4A6C; // 801D4A50
L_801D4A54:;
  c->r[7]=c->r[7]+0x00000001u; // 801D4A54
  c->r[29]=c->r[29]+0x0000011Cu; // 801D4A58
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D4A28; } // 801D4A5C
  goto L_801D4A6C; // 801D4A60
L_801D4A64:;
  c->r[0]=0u+0x0000000Au; // 801D4A64
  W8(c->r[1]+0x00000008u,c->r[0]); // 801D4A68
L_801D4A6C:;
  c->r[12]=c->r[30]|c->r[30]; // 801D4A6C
  c->r[3]=c->r[1]+0x00000008u; // 801D4A70
  c->ctr=c->r[12]; // 801D4A74
  if (true) { c->lr=0x801D4A7Cu; dispatch(c,c->ctr); } // 801D4A78
L_801D4A7C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D4A7C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801D4A80
  c->r[30]=R32(c->r[1]+0x00000028u); // 801D4A84
  c->r[29]=R32(c->r[1]+0x00000024u); // 801D4A88
  c->r[28]=R32(c->r[1]+0x00000020u); // 801D4A8C
  c->lr=c->r[0]; // 801D4A90
  c->r[1]=c->r[1]+0x00000030u; // 801D4A94
  return; // 801D4A98
}

// btm_read_remote_version_complete
void f_801D4A9C(Ctx* __restrict c) {
  trace_call(0x801D4A9Cu);
  c->r[0]=R8(c->r[3]+0x00000000u); // 801D4A9C
  c->r[4]=0u+0x80480000u; // 801D4AA0
  c->r[4]=c->r[4]+0x000034D8u; // 801D4AA4
  cmps(c,0,(int32_t)c->r[0],0); // 801D4AA8
  c->r[6]=c->r[4]+0x00000034u; // 801D4AAC
  if (!crb(c,2)) return; // 801D4AB0
  c->r[4]=R8(c->r[3]+0x00000002u); // 801D4AB4
  c->r[0]=0u+0x00000004u; // 801D4AB8
  c->r[5]=R8(c->r[3]+0x00000001u); // 801D4ABC
  c->r[4]=rotl(c->r[4],8)&0xFFFFFF00u; // 801D4AC0
  c->r[4]=c->r[5]+c->r[4]; // 801D4AC4
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 801D4AC8
  c->ctr=c->r[0]; // 801D4ACC
L_801D4AD0:;
  c->r[0]=R8(c->r[6]+0x00000119u); // 801D4AD0
  cmps(c,0,(int32_t)c->r[0],0); // 801D4AD4
  if (crb(c,2)) { goto L_801D4B1C; } // 801D4AD8
  c->r[0]=R16(c->r[6]+0x00000000u); // 801D4ADC
  cmpu(c,0,c->r[0],c->r[4]); // 801D4AE0
  if (!crb(c,2)) { goto L_801D4B1C; } // 801D4AE4
  c->r[0]=R8(c->r[3]+0x00000003u); // 801D4AE8
  W8(c->r[6]+0x00000118u,c->r[0]); // 801D4AEC
  c->r[0]=R8(c->r[3]+0x00000005u); // 801D4AF0
  c->r[4]=R8(c->r[3]+0x00000004u); // 801D4AF4
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801D4AF8
  c->r[0]=c->r[4]+c->r[0]; // 801D4AFC
  W16(c->r[6]+0x0000010Au,c->r[0]); // 801D4B00
  c->r[0]=R8(c->r[3]+0x00000007u); // 801D4B04
  c->r[3]=R8(c->r[3]+0x00000006u); // 801D4B08
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801D4B0C
  c->r[0]=c->r[3]+c->r[0]; // 801D4B10
  W16(c->r[6]+0x0000010Cu,c->r[0]); // 801D4B14
  return; // 801D4B18
L_801D4B1C:;
  c->r[6]=c->r[6]+0x0000011Cu; // 801D4B1C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D4AD0; } // 801D4B20
  return; // 801D4B24
}

// btm_read_remote_features_complete
void f_801D4B28(Ctx* __restrict c) {
  trace_call(0x801D4B28u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4B28
  c->r[0]=c->lr; // 801D4B2C
  c->r[4]=0u+0x80480000u; // 801D4B30
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D4B34
  c->r[4]=c->r[4]+0x000034D8u; // 801D4B38
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D4B3C
  c->r[31]=c->r[4]+0x00000034u; // 801D4B40
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D4B44
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D4B48
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D4B4C
  c->r[0]=R8(c->r[3]+0x00000000u); // 801D4B50
  cmps(c,0,(int32_t)c->r[0],0); // 801D4B54
  if (!crb(c,2)) { goto L_801D4D34; } // 801D4B58
  c->r[4]=R8(c->r[3]+0x00000002u); // 801D4B5C
  c->r[0]=0u+0x00000004u; // 801D4B60
  c->r[5]=R8(c->r[3]+0x00000001u); // 801D4B64
  c->r[4]=rotl(c->r[4],8)&0xFFFFFF00u; // 801D4B68
  c->r[4]=c->r[5]+c->r[4]; // 801D4B6C
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 801D4B70
  c->ctr=c->r[0]; // 801D4B74
L_801D4B78:;
  c->r[0]=R8(c->r[31]+0x00000119u); // 801D4B78
  cmps(c,0,(int32_t)c->r[0],0); // 801D4B7C
  if (crb(c,2)) { goto L_801D4D2C; } // 801D4B80
  c->r[0]=R16(c->r[31]+0x00000000u); // 801D4B84
  cmpu(c,0,c->r[0],c->r[4]); // 801D4B88
  if (!crb(c,2)) { goto L_801D4D2C; } // 801D4B8C
  c->r[0]=R8(c->r[3]+0x00000003u); // 801D4B90
  W8(c->r[31]+0x00000110u,c->r[0]); // 801D4B94
  c->r[0]=R8(c->r[3]+0x00000004u); // 801D4B98
  W8(c->r[31]+0x00000111u,c->r[0]); // 801D4B9C
  c->r[0]=R8(c->r[3]+0x00000005u); // 801D4BA0
  W8(c->r[31]+0x00000112u,c->r[0]); // 801D4BA4
  c->r[0]=R8(c->r[3]+0x00000006u); // 801D4BA8
  W8(c->r[31]+0x00000113u,c->r[0]); // 801D4BAC
  c->r[0]=R8(c->r[3]+0x00000007u); // 801D4BB0
  W8(c->r[31]+0x00000114u,c->r[0]); // 801D4BB4
  c->r[0]=R8(c->r[3]+0x00000008u); // 801D4BB8
  W8(c->r[31]+0x00000115u,c->r[0]); // 801D4BBC
  c->r[0]=R8(c->r[3]+0x00000009u); // 801D4BC0
  W8(c->r[31]+0x00000116u,c->r[0]); // 801D4BC4
  c->r[0]=R8(c->r[3]+0x0000000Au); // 801D4BC8
  c->r[3]=c->r[4]|c->r[4]; // 801D4BCC
  W8(c->r[31]+0x00000117u,c->r[0]); // 801D4BD0
  c->lr=0x801D4BD8u; f_801D6068(c); // 801D4BD4
  cmps(c,0,(int32_t)c->r[3],0); // 801D4BD8
  if (crb(c,2)) { goto L_801D4BF0; } // 801D4BDC
  c->r[4]=c->r[31]+0x00000110u; // 801D4BE0
  c->r[5]=0u+0x00000008u; // 801D4BE4
  c->r[3]=c->r[3]+0x00000077u; // 801D4BE8
  c->lr=0x801D4BF0u; f_80004000(c); // 801D4BEC
L_801D4BF0:;
  c->r[3]=0u+0x80480000u; // 801D4BF0
  c->r[0]=0u+0xFFFFCCF9u; // 801D4BF4
  c->r[3]=c->r[3]+0x000034D8u; // 801D4BF8
  c->r[5]=R16(c->r[3]+0x00000654u); // 801D4BFC
  c->r[3]=R8(c->r[3]+0x00000636u); // 801D4C00
  c->r[4]=c->r[5]&0x0000CC18u; cr0(c,c->r[4]); // 801D4C04
  cmpu(c,0,c->r[3],0x00000003u); // 801D4C08
  c->r[30]=c->r[4]&c->r[0]; // 801D4C0C
  if (crb(c,0)) { goto L_801D4C20; } // 801D4C10
  c->r[0]=c->r[5]&0x00003306u; cr0(c,c->r[0]); // 801D4C14
  c->r[0]=c->r[4]|c->r[0]; // 801D4C18
  c->r[30]=rotl(c->r[0],0)&0x0000FFFFu; // 801D4C1C
L_801D4C20:;
  c->r[3]=0u+0x80480000u; // 801D4C20
  c->r[3]=c->r[3]+0x000034D8u; // 801D4C24
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801D4C28
  cmpu(c,0,c->r[0],0x00000004u); // 801D4C2C
  if (crb(c,0)) { goto L_801D4C4C; } // 801D4C30
  c->r[3]=0u+0x000D0000u; // 801D4C34
  c->r[4]=0u+0x803A0000u; // 801D4C38
  c->r[3]=c->r[3]+0x00000003u; // 801D4C3C
  c->r[5]=rotl(c->r[30],0)&0x0000FFFFu; // 801D4C40
  c->r[4]=c->r[4]+0xFFFFF030u; // 801D4C44
  c->lr=0x801D4C4Cu; f_801CD9F0(c); // 801D4C48
L_801D4C4C:;
  c->r[3]=R16(c->r[31]+0x00000000u); // 801D4C4C
  c->r[4]=rotl(c->r[30],0)&0x0000FFFFu; // 801D4C50
  c->lr=0x801D4C58u; f_801E1228(c); // 801D4C54
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D4C58
  if (crb(c,2)) { goto L_801D4C64; } // 801D4C5C
  W16(c->r[31]+0x00000002u,c->r[30]); // 801D4C60
L_801D4C64:;
  c->r[4]=0u+0x80480000u; // 801D4C64
  c->r[4]=c->r[4]+0x000034D8u; // 801D4C68
  c->r[0]=R16(c->r[4]+0x000004C4u); // 801D4C6C
  cmps(c,0,(int32_t)c->r[0],0); // 801D4C70
  if (crb(c,2)) { goto L_801D4C84; } // 801D4C74
  c->r[3]=c->r[31]+0x00000008u; // 801D4C78
  c->r[4]=c->r[4]+0x000004C4u; // 801D4C7C
  c->lr=0x801D4C84u; f_801D4798(c); // 801D4C80
L_801D4C84:;
  c->r[3]=0u+0x80480000u; // 801D4C84
  c->r[30]=0u+0x00000000u; // 801D4C88
  c->r[3]=c->r[3]+0x000034D8u; // 801D4C8C
  c->r[28]=R16(c->r[3]+0x000004C6u); // 801D4C90
  c->r[29]=c->r[3]+0x00000034u; // 801D4C94
L_801D4C98:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 801D4C98
  cmps(c,0,(int32_t)c->r[0],0); // 801D4C9C
  if (crb(c,2)) { goto L_801D4CC0; } // 801D4CA0
  c->r[3]=c->r[29]+0x00000008u; // 801D4CA4
  c->r[4]=c->r[31]+0x00000008u; // 801D4CA8
  c->r[5]=0u+0x00000006u; // 801D4CAC
  c->lr=0x801D4CB4u; f_800C6228(c); // 801D4CB0
  cmps(c,0,(int32_t)c->r[3],0); // 801D4CB4
  if (!crb(c,2)) { goto L_801D4CC0; } // 801D4CB8
  goto L_801D4CD4; // 801D4CBC
L_801D4CC0:;
  c->r[30]=c->r[30]+0x00000001u; // 801D4CC0
  c->r[29]=c->r[29]+0x0000011Cu; // 801D4CC4
  cmpu(c,0,c->r[30],0x00000004u); // 801D4CC8
  if (crb(c,0)) { IRQCHK(c); goto L_801D4C98; } // 801D4CCC
  c->r[29]=0u+0x00000000u; // 801D4CD0
L_801D4CD4:;
  cmps(c,0,(int32_t)c->r[29],0); // 801D4CD4
  if (crb(c,2)) { goto L_801D4CF8; } // 801D4CD8
  W16(c->r[29]+0x0000010Eu,c->r[28]); // 801D4CDC
  c->r[0]=R8(c->r[29]+0x0000011Au); // 801D4CE0
  cmps(c,0,(int32_t)c->r[0],0); // 801D4CE4
  if (!crb(c,2)) { goto L_801D4CF8; } // 801D4CE8
  c->r[3]=R16(c->r[29]+0x00000000u); // 801D4CEC
  c->r[4]=c->r[28]|c->r[28]; // 801D4CF0
  c->lr=0x801D4CF8u; f_801E2728(c); // 801D4CF4
L_801D4CF8:;
  c->r[3]=0u+0x80480000u; // 801D4CF8
  c->r[3]=c->r[3]+0x000034D8u; // 801D4CFC
  c->r[12]=R32(c->r[3]+0x000004C8u); // 801D4D00
  cmps(c,0,(int32_t)c->r[12],0); // 801D4D04
  if (crb(c,2)) { goto L_801D4D34; } // 801D4D08
  c->r[3]=c->r[31]+0x00000008u; // 801D4D0C
  c->r[4]=c->r[31]+0x0000000Eu; // 801D4D10
  c->r[5]=c->r[31]+0x00000011u; // 801D4D14
  c->r[6]=c->r[31]+0x00000110u; // 801D4D18
  c->r[7]=0u+0x00000001u; // 801D4D1C
  c->ctr=c->r[12]; // 801D4D20
  if (true) { c->lr=0x801D4D28u; dispatch(c,c->ctr); } // 801D4D24
  goto L_801D4D34; // 801D4D28
L_801D4D2C:;
  c->r[31]=c->r[31]+0x0000011Cu; // 801D4D2C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D4B78; } // 801D4D30
L_801D4D34:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D4D34
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D4D38
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D4D3C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D4D40
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D4D44
  c->lr=c->r[0]; // 801D4D48
  c->r[1]=c->r[1]+0x00000020u; // 801D4D4C
  return; // 801D4D50
}

// BTM_SetDefaultLinkSuperTout
void f_801D4D54(Ctx* __restrict c) {
  trace_call(0x801D4D54u);
  c->r[4]=0u+0x80480000u; // 801D4D54
  c->r[4]=c->r[4]+0x000034D8u; // 801D4D58
  W16(c->r[4]+0x000004C6u,c->r[3]); // 801D4D5C
  return; // 801D4D60
}

// BTM_IsAclConnectionUp
void f_801D4D64(Ctx* __restrict c) {
  trace_call(0x801D4D64u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4D64
  c->r[0]=c->lr; // 801D4D68
  c->r[4]=0u+0x80480000u; // 801D4D6C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D4D70
  c->r[4]=c->r[4]+0x000034D8u; // 801D4D74
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D4D78
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D4D7C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D4D80
  c->r[29]=c->r[3]|c->r[3]; // 801D4D84
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801D4D88
  cmpu(c,0,c->r[0],0x00000003u); // 801D4D8C
  if (crb(c,0)) { goto L_801D4DC0; } // 801D4D90
  c->r[3]=0u+0x000D0000u; // 801D4D94
  c->r[4]=0u+0x803A0000u; // 801D4D98
  c->r[5]=R8(c->r[29]+0x00000000u); // 801D4D9C
  c->r[3]=c->r[3]+0x00000002u; // 801D4DA0
  c->r[6]=R8(c->r[29]+0x00000001u); // 801D4DA4
  c->r[4]=c->r[4]+0xFFFFF1D0u; // 801D4DA8
  c->r[7]=R8(c->r[29]+0x00000002u); // 801D4DAC
  c->r[8]=R8(c->r[29]+0x00000003u); // 801D4DB0
  c->r[9]=R8(c->r[29]+0x00000004u); // 801D4DB4
  c->r[10]=R8(c->r[29]+0x00000005u); // 801D4DB8
  c->lr=0x801D4DC0u; f_801CDA90(c); // 801D4DBC
L_801D4DC0:;
  c->r[3]=0u+0x80480000u; // 801D4DC0
  c->r[31]=0u+0x00000000u; // 801D4DC4
  c->r[3]=c->r[3]+0x000034D8u; // 801D4DC8
  c->r[30]=c->r[3]+0x00000034u; // 801D4DCC
L_801D4DD0:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 801D4DD0
  cmps(c,0,(int32_t)c->r[0],0); // 801D4DD4
  if (crb(c,2)) { goto L_801D4DF8; } // 801D4DD8
  c->r[4]=c->r[29]|c->r[29]; // 801D4DDC
  c->r[3]=c->r[30]+0x00000008u; // 801D4DE0
  c->r[5]=0u+0x00000006u; // 801D4DE4
  c->lr=0x801D4DECu; f_800C6228(c); // 801D4DE8
  cmps(c,0,(int32_t)c->r[3],0); // 801D4DEC
  if (!crb(c,2)) { goto L_801D4DF8; } // 801D4DF0
  goto L_801D4E0C; // 801D4DF4
L_801D4DF8:;
  c->r[31]=c->r[31]+0x00000001u; // 801D4DF8
  c->r[30]=c->r[30]+0x0000011Cu; // 801D4DFC
  cmpu(c,0,c->r[31],0x00000004u); // 801D4E00
  if (crb(c,0)) { IRQCHK(c); goto L_801D4DD0; } // 801D4E04
  c->r[30]=0u+0x00000000u; // 801D4E08
L_801D4E0C:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D4E0C
  if (crb(c,2)) { goto L_801D4E1C; } // 801D4E10
  c->r[3]=0u+0x00000001u; // 801D4E14
  goto L_801D4E20; // 801D4E18
L_801D4E1C:;
  c->r[3]=0u+0x00000000u; // 801D4E1C
L_801D4E20:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D4E20
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D4E24
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D4E28
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D4E2C
  c->lr=c->r[0]; // 801D4E30
  c->r[1]=c->r[1]+0x00000020u; // 801D4E34
  return; // 801D4E38
}

// BTM_GetNumAclLinks
void f_801D4E3C(Ctx* __restrict c) {
  trace_call(0x801D4E3Cu);
  c->r[4]=0u+0x80480000u; // 801D4E3C
  c->r[3]=0u+0x00000000u; // 801D4E40
  c->r[4]=c->r[4]+0x000034D8u; // 801D4E44
  c->r[0]=R8(c->r[4]+0x0000014Du); // 801D4E48
  cmps(c,0,(int32_t)c->r[0],0); // 801D4E4C
  if (crb(c,2)) { goto L_801D4E58; } // 801D4E50
  c->r[3]=0u+0x00000001u; // 801D4E54
L_801D4E58:;
  c->r[0]=R8(c->r[4]+0x00000269u); // 801D4E58
  cmps(c,0,(int32_t)c->r[0],0); // 801D4E5C
  if (crb(c,2)) { goto L_801D4E6C; } // 801D4E60
  c->r[0]=c->r[3]+0x00000001u; // 801D4E64
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801D4E68
L_801D4E6C:;
  c->r[0]=R8(c->r[4]+0x00000385u); // 801D4E6C
  cmps(c,0,(int32_t)c->r[0],0); // 801D4E70
  if (crb(c,2)) { goto L_801D4E80; } // 801D4E74
  c->r[0]=c->r[3]+0x00000001u; // 801D4E78
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801D4E7C
L_801D4E80:;
  c->r[0]=R8(c->r[4]+0x000004A1u); // 801D4E80
  cmps(c,0,(int32_t)c->r[0],0); // 801D4E84
  if (crb(c,2)) return; // 801D4E88
  c->r[0]=c->r[3]+0x00000001u; // 801D4E8C
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801D4E90
  return; // 801D4E94
}

// btm_get_acl_disc_reason_code
void f_801D4E98(Ctx* __restrict c) {
  trace_call(0x801D4E98u);
  c->r[3]=0u+0x80480000u; // 801D4E98
  c->r[3]=c->r[3]+0x000034D8u; // 801D4E9C
  c->r[3]=R8(c->r[3]+0x000027BFu); // 801D4EA0
  return; // 801D4EA4
}

// BTM_GetHCIConnHandle
void f_801D4EA8(Ctx* __restrict c) {
  trace_call(0x801D4EA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4EA8
  c->r[0]=c->lr; // 801D4EAC
  c->r[4]=0u+0x80480000u; // 801D4EB0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D4EB4
  c->r[4]=c->r[4]+0x000034D8u; // 801D4EB8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D4EBC
  c->r[31]=0u+0x00000000u; // 801D4EC0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D4EC4
  c->r[30]=c->r[4]+0x00000034u; // 801D4EC8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D4ECC
  c->r[29]=c->r[3]|c->r[3]; // 801D4ED0
L_801D4ED4:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 801D4ED4
  cmps(c,0,(int32_t)c->r[0],0); // 801D4ED8
  if (crb(c,2)) { goto L_801D4EFC; } // 801D4EDC
  c->r[4]=c->r[29]|c->r[29]; // 801D4EE0
  c->r[3]=c->r[30]+0x00000008u; // 801D4EE4
  c->r[5]=0u+0x00000006u; // 801D4EE8
  c->lr=0x801D4EF0u; f_800C6228(c); // 801D4EEC
  cmps(c,0,(int32_t)c->r[3],0); // 801D4EF0
  if (!crb(c,2)) { goto L_801D4EFC; } // 801D4EF4
  goto L_801D4F10; // 801D4EF8
L_801D4EFC:;
  c->r[31]=c->r[31]+0x00000001u; // 801D4EFC
  c->r[30]=c->r[30]+0x0000011Cu; // 801D4F00
  cmpu(c,0,c->r[31],0x00000004u); // 801D4F04
  if (crb(c,0)) { IRQCHK(c); goto L_801D4ED4; } // 801D4F08
  c->r[30]=0u+0x00000000u; // 801D4F0C
L_801D4F10:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D4F10
  if (crb(c,2)) { goto L_801D4F20; } // 801D4F14
  c->r[3]=R16(c->r[30]+0x00000000u); // 801D4F18
  goto L_801D4F28; // 801D4F1C
L_801D4F20:;
  c->r[3]=0u+0x00010000u; // 801D4F20
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801D4F24
L_801D4F28:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D4F28
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D4F2C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D4F30
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D4F34
  c->lr=c->r[0]; // 801D4F38
  c->r[1]=c->r[1]+0x00000020u; // 801D4F3C
  return; // 801D4F40
}

// btm_process_clk_off_comp_evt
void f_801D4F44(Ctx* __restrict c) {
  trace_call(0x801D4F44u);
  c->r[5]=0u+0x80480000u; // 801D4F44
  c->r[6]=0u+0x00000000u; // 801D4F48
  c->r[5]=c->r[5]+0x000034D8u; // 801D4F4C
  c->r[0]=R8(c->r[5]+0x0000014Du); // 801D4F50
  cmps(c,0,(int32_t)c->r[0],0); // 801D4F54
  if (crb(c,2)) { goto L_801D4F68; } // 801D4F58
  c->r[0]=R16(c->r[5]+0x00000034u); // 801D4F5C
  cmpu(c,0,c->r[0],c->r[3]); // 801D4F60
  if (crb(c,2)) { goto L_801D4FC0; } // 801D4F64
L_801D4F68:;
  c->r[0]=R8(c->r[5]+0x00000269u); // 801D4F68
  c->r[6]=0u+0x00000001u; // 801D4F6C
  cmps(c,0,(int32_t)c->r[0],0); // 801D4F70
  if (crb(c,2)) { goto L_801D4F84; } // 801D4F74
  c->r[0]=R16(c->r[5]+0x00000150u); // 801D4F78
  cmpu(c,0,c->r[0],c->r[3]); // 801D4F7C
  if (crb(c,2)) { goto L_801D4FC0; } // 801D4F80
L_801D4F84:;
  c->r[0]=R8(c->r[5]+0x00000385u); // 801D4F84
  c->r[6]=0u+0x00000002u; // 801D4F88
  cmps(c,0,(int32_t)c->r[0],0); // 801D4F8C
  if (crb(c,2)) { goto L_801D4FA0; } // 801D4F90
  c->r[0]=R16(c->r[5]+0x0000026Cu); // 801D4F94
  cmpu(c,0,c->r[0],c->r[3]); // 801D4F98
  if (crb(c,2)) { goto L_801D4FC0; } // 801D4F9C
L_801D4FA0:;
  c->r[0]=R8(c->r[5]+0x000004A1u); // 801D4FA0
  c->r[6]=0u+0x00000003u; // 801D4FA4
  cmps(c,0,(int32_t)c->r[0],0); // 801D4FA8
  if (crb(c,2)) { goto L_801D4FBC; } // 801D4FAC
  c->r[0]=R16(c->r[5]+0x00000388u); // 801D4FB0
  cmpu(c,0,c->r[0],c->r[3]); // 801D4FB4
  if (crb(c,2)) { goto L_801D4FC0; } // 801D4FB8
L_801D4FBC:;
  c->r[6]=0u+0x00000004u; // 801D4FBC
L_801D4FC0:;
  cmpu(c,0,c->r[6],0x00000004u); // 801D4FC0
  if (!crb(c,0)) return; // 801D4FC4
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)284); // 801D4FC8
  c->r[3]=0u+0x80480000u; // 801D4FCC
  c->r[3]=c->r[3]+0x000034D8u; // 801D4FD0
  c->r[3]=c->r[3]+c->r[0]; // 801D4FD4
  W16(c->r[3]+0x0000003Au,c->r[4]); // 801D4FD8
  return; // 801D4FDC
}

// btm_acl_role_changed
void f_801D4FE0(Ctx* __restrict c) {
  trace_call(0x801D4FE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D4FE0
  c->r[0]=c->lr; // 801D4FE4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D4FE8
  c->r[11]=c->r[1]+0x00000030u; // 801D4FEC
  c->lr=0x801D4FF4u; f_800C2E44(c); // 801D4FF0
  cmps(c,0,(int32_t)c->r[4],0); // 801D4FF4
  c->r[25]=c->r[3]|c->r[3]; // 801D4FF8
  c->r[26]=c->r[4]|c->r[4]; // 801D4FFC
  c->r[28]=c->r[5]|c->r[5]; // 801D5000
  if (crb(c,2)) { goto L_801D5010; } // 801D5004
  c->r[27]=c->r[26]|c->r[26]; // 801D5008
  goto L_801D501C; // 801D500C
L_801D5010:;
  c->r[3]=0u+0x80480000u; // 801D5010
  c->r[3]=c->r[3]+0x000034D8u; // 801D5014
  c->r[27]=c->r[3]+0x000027B4u; // 801D5018
L_801D501C:;
  c->r[3]=0u+0x80480000u; // 801D501C
  c->r[30]=0u+0x00000000u; // 801D5020
  c->r[3]=c->r[3]+0x000034D8u; // 801D5024
  c->r[29]=c->r[3]+0x00000034u; // 801D5028
L_801D502C:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 801D502C
  cmps(c,0,(int32_t)c->r[0],0); // 801D5030
  if (crb(c,2)) { goto L_801D5054; } // 801D5034
  c->r[4]=c->r[27]|c->r[27]; // 801D5038
  c->r[3]=c->r[29]+0x00000008u; // 801D503C
  c->r[5]=0u+0x00000006u; // 801D5040
  c->lr=0x801D5048u; f_800C6228(c); // 801D5044
  cmps(c,0,(int32_t)c->r[3],0); // 801D5048
  if (!crb(c,2)) { goto L_801D5054; } // 801D504C
  goto L_801D5068; // 801D5050
L_801D5054:;
  c->r[30]=c->r[30]+0x00000001u; // 801D5054
  c->r[29]=c->r[29]+0x0000011Cu; // 801D5058
  cmpu(c,0,c->r[30],0x00000004u); // 801D505C
  if (crb(c,0)) { IRQCHK(c); goto L_801D502C; } // 801D5060
  c->r[29]=0u+0x00000000u; // 801D5064
L_801D5068:;
  c->r[3]=0u+0x80480000u; // 801D5068
  cmps(c,0,(int32_t)c->r[29],0); // 801D506C
  c->r[3]=c->r[3]+0x000034D8u; // 801D5070
  c->r[31]=c->r[3]+0x00000624u; // 801D5074
  if (crb(c,2)) { goto L_801D51BC; } // 801D5078
  cmps(c,0,(int32_t)c->r[25],0); // 801D507C
  W8(c->r[31]+0x00000000u,c->r[25]); // 801D5080
  if (!crb(c,2)) { goto L_801D50A0; } // 801D5084
  W8(c->r[31]+0x00000001u,c->r[28]); // 801D5088
  c->r[4]=c->r[27]|c->r[27]; // 801D508C
  c->r[3]=c->r[31]+0x00000002u; // 801D5090
  c->r[5]=0u+0x00000006u; // 801D5094
  c->lr=0x801D509Cu; f_80004000(c); // 801D5098
  W8(c->r[29]+0x0000011Au,c->r[28]); // 801D509C
L_801D50A0:;
  cmps(c,0,(int32_t)c->r[26],0); // 801D50A0
  if (crb(c,2)) { goto L_801D511C; } // 801D50A4
  c->r[3]=0u+0x80480000u; // 801D50A8
  c->r[30]=R16(c->r[29]+0x0000010Eu); // 801D50AC
  c->r[3]=c->r[3]+0x000034D8u; // 801D50B0
  c->r[28]=0u+0x00000000u; // 801D50B4
  c->r[27]=c->r[3]+0x00000034u; // 801D50B8
L_801D50BC:;
  c->r[0]=R8(c->r[27]+0x00000119u); // 801D50BC
  cmps(c,0,(int32_t)c->r[0],0); // 801D50C0
  if (crb(c,2)) { goto L_801D50E4; } // 801D50C4
  c->r[3]=c->r[27]+0x00000008u; // 801D50C8
  c->r[4]=c->r[29]+0x00000008u; // 801D50CC
  c->r[5]=0u+0x00000006u; // 801D50D0
  c->lr=0x801D50D8u; f_800C6228(c); // 801D50D4
  cmps(c,0,(int32_t)c->r[3],0); // 801D50D8
  if (!crb(c,2)) { goto L_801D50E4; } // 801D50DC
  goto L_801D50F8; // 801D50E0
L_801D50E4:;
  c->r[28]=c->r[28]+0x00000001u; // 801D50E4
  c->r[27]=c->r[27]+0x0000011Cu; // 801D50E8
  cmpu(c,0,c->r[28],0x00000004u); // 801D50EC
  if (crb(c,0)) { IRQCHK(c); goto L_801D50BC; } // 801D50F0
  c->r[27]=0u+0x00000000u; // 801D50F4
L_801D50F8:;
  cmps(c,0,(int32_t)c->r[27],0); // 801D50F8
  if (crb(c,2)) { goto L_801D511C; } // 801D50FC
  W16(c->r[27]+0x0000010Eu,c->r[30]); // 801D5100
  c->r[0]=R8(c->r[27]+0x0000011Au); // 801D5104
  cmps(c,0,(int32_t)c->r[0],0); // 801D5108
  if (!crb(c,2)) { goto L_801D511C; } // 801D510C
  c->r[3]=R16(c->r[27]+0x00000000u); // 801D5110
  c->r[4]=c->r[30]|c->r[30]; // 801D5114
  c->lr=0x801D511Cu; f_801E2728(c); // 801D5118
L_801D511C:;
  c->r[0]=R8(c->r[29]+0x0000011Bu); // 801D511C
  cmpu(c,0,c->r[0],0x00000003u); // 801D5120
  if (!crb(c,2)) { goto L_801D5148; } // 801D5124
  c->r[3]=R16(c->r[29]+0x00000000u); // 801D5128
  c->r[4]=0u+0x00000001u; // 801D512C
  c->lr=0x801D5134u; f_801E1334(c); // 801D5130
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D5134
  if (crb(c,2)) { goto L_801D5148; } // 801D5138
  c->r[0]=0u+0x00000004u; // 801D513C
  W8(c->r[29]+0x0000011Bu,c->r[0]); // 801D5140
  goto L_801D51BC; // 801D5144
L_801D5148:;
  cmps(c,0,(int32_t)c->r[29],0); // 801D5148
  if (crb(c,2)) { goto L_801D5164; } // 801D514C
  c->r[0]=R8(c->r[29]+0x0000011Bu); // 801D5150
  cmpu(c,0,c->r[0],0x00000005u); // 801D5154
  if (!crb(c,2)) { goto L_801D5164; } // 801D5158
  c->r[0]=0u+0x00000000u; // 801D515C
  W8(c->r[29]+0x0000011Bu,c->r[0]); // 801D5160
L_801D5164:;
  c->r[30]=0u+0x80480000u; // 801D5164
  c->r[30]=c->r[30]+0x000034D8u; // 801D5168
  c->r[12]=R32(c->r[30]+0x0000062Cu); // 801D516C
  cmps(c,0,(int32_t)c->r[12],0); // 801D5170
  if (crb(c,2)) { goto L_801D518C; } // 801D5174
  c->r[3]=c->r[31]|c->r[31]; // 801D5178
  c->ctr=c->r[12]; // 801D517C
  if (true) { c->lr=0x801D5184u; dispatch(c,c->ctr); } // 801D5180
  c->r[0]=0u+0x00000000u; // 801D5184
  W32(c->r[30]+0x0000062Cu,c->r[0]); // 801D5188
L_801D518C:;
  c->r[3]=0u+0x80480000u; // 801D518C
  c->r[3]=c->r[3]+0x000034D8u; // 801D5190
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801D5194
  cmpu(c,0,c->r[0],0x00000004u); // 801D5198
  if (crb(c,0)) { goto L_801D51BC; } // 801D519C
  c->r[3]=0u+0x000D0000u; // 801D51A0
  c->r[4]=0u+0x803A0000u; // 801D51A4
  c->r[5]=R8(c->r[31]+0x00000001u); // 801D51A8
  c->r[3]=c->r[3]+0x00000003u; // 801D51AC
  c->r[6]=R8(c->r[31]+0x00000000u); // 801D51B0
  c->r[4]=c->r[4]+0xFFFFF20Cu; // 801D51B4
  c->lr=0x801D51BCu; f_801CDA10(c); // 801D51B8
L_801D51BC:;
  c->r[11]=c->r[1]+0x00000030u; // 801D51BC
  c->lr=0x801D51C4u; f_800C2E90(c); // 801D51C0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D51C4
  c->lr=c->r[0]; // 801D51C8
  c->r[1]=c->r[1]+0x00000030u; // 801D51CC
  return; // 801D51D0
}

// btm_acl_timeout
void f_801D51D4(Ctx* __restrict c) {
  trace_call(0x801D51D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D51D4
  c->r[0]=c->lr; // 801D51D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D51DC
  c->r[0]=R32(c->r[3]+0x00000010u); // 801D51E0
  cmpu(c,0,c->r[0],0x00000004u); // 801D51E4
  if (!crb(c,2)) { goto L_801D5220; } // 801D51E8
  c->r[4]=0u+0x80480000u; // 801D51EC
  c->r[3]=0u+0x0000000Au; // 801D51F0
  c->r[4]=c->r[4]+0x000034D8u; // 801D51F4
  c->r[0]=0u+0x00000000u; // 801D51F8
  c->r[12]=R32(c->r[4]+0x000005C4u); // 801D51FC
  W8(c->r[1]+0x00000008u,c->r[3]); // 801D5200
  cmps(c,0,(int32_t)c->r[12],0); // 801D5204
  W16(c->r[1]+0x00000010u,c->r[0]); // 801D5208
  W32(c->r[4]+0x000005C4u,c->r[0]); // 801D520C
  if (crb(c,2)) { goto L_801D5220; } // 801D5210
  c->r[3]=c->r[1]+0x00000008u; // 801D5214
  c->ctr=c->r[12]; // 801D5218
  if (true) { c->lr=0x801D5220u; dispatch(c,c->ctr); } // 801D521C
L_801D5220:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D5220
  c->lr=c->r[0]; // 801D5224
  c->r[1]=c->r[1]+0x00000020u; // 801D5228
  return; // 801D522C
}

// btm_get_max_packet_size
void f_801D5230(Ctx* __restrict c) {
  trace_call(0x801D5230u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5230
  c->r[0]=c->lr; // 801D5234
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D5238
  c->r[11]=c->r[1]+0x00000020u; // 801D523C
  c->lr=0x801D5244u; f_800C2E4C(c); // 801D5240
  c->r[4]=0u+0x80480000u; // 801D5244
  c->r[27]=c->r[3]|c->r[3]; // 801D5248
  c->r[4]=c->r[4]+0x000034D8u; // 801D524C
  c->r[30]=0u+0x00000000u; // 801D5250
  c->r[29]=c->r[4]+0x00000034u; // 801D5254
L_801D5258:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 801D5258
  cmps(c,0,(int32_t)c->r[0],0); // 801D525C
  if (crb(c,2)) { goto L_801D5280; } // 801D5260
  c->r[4]=c->r[27]|c->r[27]; // 801D5264
  c->r[3]=c->r[29]+0x00000008u; // 801D5268
  c->r[5]=0u+0x00000006u; // 801D526C
  c->lr=0x801D5274u; f_800C6228(c); // 801D5270
  cmps(c,0,(int32_t)c->r[3],0); // 801D5274
  if (!crb(c,2)) { goto L_801D5280; } // 801D5278
  goto L_801D5294; // 801D527C
L_801D5280:;
  c->r[30]=c->r[30]+0x00000001u; // 801D5280
  c->r[29]=c->r[29]+0x0000011Cu; // 801D5284
  cmpu(c,0,c->r[30],0x00000004u); // 801D5288
  if (crb(c,0)) { IRQCHK(c); goto L_801D5258; } // 801D528C
  c->r[29]=0u+0x00000000u; // 801D5290
L_801D5294:;
  cmps(c,0,(int32_t)c->r[29],0); // 801D5294
  c->r[28]=0u+0x00000000u; // 801D5298
  c->r[31]=0u+0x00000000u; // 801D529C
  if (crb(c,2)) { goto L_801D52AC; } // 801D52A0
  c->r[28]=R16(c->r[29]+0x00000002u); // 801D52A4
  goto L_801D52D0; // 801D52A8
L_801D52AC:;
  c->r[30]=0u+0x80480000u; // 801D52AC
  c->r[4]=c->r[27]|c->r[27]; // 801D52B0
  c->r[30]=c->r[30]+0x000034D8u; // 801D52B4
  c->r[5]=0u+0x00000006u; // 801D52B8
  c->r[3]=c->r[30]+0x00000630u; // 801D52BC
  c->lr=0x801D52C4u; f_800C6228(c); // 801D52C0
  cmps(c,0,(int32_t)c->r[3],0); // 801D52C4
  if (!crb(c,2)) { goto L_801D52D0; } // 801D52C8
  c->r[28]=R16(c->r[30]+0x00000654u); // 801D52CC
L_801D52D0:;
  cmps(c,0,(int32_t)c->r[28],0); // 801D52D0
  if (crb(c,2)) { goto L_801D5394; } // 801D52D4
  c->r[0]=rotl(c->r[28],0)&0x00002000u; cr0(c,c->r[0]); // 801D52D8
  if (!crb(c,2)) { goto L_801D52E8; } // 801D52DC
  c->r[31]=0u+0x000003FDu; // 801D52E0
  goto L_801D5394; // 801D52E4
L_801D52E8:;
  c->r[0]=rotl(c->r[28],0)&0x00001000u; cr0(c,c->r[0]); // 801D52E8
  if (!crb(c,2)) { goto L_801D52F8; } // 801D52EC
  c->r[31]=0u+0x000002A7u; // 801D52F0
  goto L_801D5394; // 801D52F4
L_801D52F8:;
  c->r[0]=rotl(c->r[28],0)&0x00000200u; cr0(c,c->r[0]); // 801D52F8
  if (!crb(c,2)) { goto L_801D5308; } // 801D52FC
  c->r[31]=0u+0x00000228u; // 801D5300
  goto L_801D5394; // 801D5304
L_801D5308:;
  c->r[0]=rotl(c->r[28],0)&0x00008000u; cr0(c,c->r[0]); // 801D5308
  if (crb(c,2)) { goto L_801D5318; } // 801D530C
  c->r[31]=0u+0x00000153u; // 801D5310
  goto L_801D5394; // 801D5314
L_801D5318:;
  c->r[0]=rotl(c->r[28],0)&0x00000100u; cr0(c,c->r[0]); // 801D5318
  if (!crb(c,2)) { goto L_801D5328; } // 801D531C
  c->r[31]=0u+0x0000016Fu; // 801D5320
  goto L_801D5394; // 801D5324
L_801D5328:;
  c->r[0]=rotl(c->r[28],0)&0x00004000u; cr0(c,c->r[0]); // 801D5328
  if (crb(c,2)) { goto L_801D5338; } // 801D532C
  c->r[31]=0u+0x000000E0u; // 801D5330
  goto L_801D5394; // 801D5334
L_801D5338:;
  c->r[0]=rotl(c->r[28],0)&0x00000800u; cr0(c,c->r[0]); // 801D5338
  if (crb(c,2)) { goto L_801D5348; } // 801D533C
  c->r[31]=0u+0x000000B7u; // 801D5340
  goto L_801D5394; // 801D5344
L_801D5348:;
  c->r[0]=rotl(c->r[28],0)&0x00000400u; cr0(c,c->r[0]); // 801D5348
  if (crb(c,2)) { goto L_801D5358; } // 801D534C
  c->r[31]=0u+0x00000079u; // 801D5350
  goto L_801D5394; // 801D5354
L_801D5358:;
  c->r[0]=rotl(c->r[28],0)&0x00000004u; cr0(c,c->r[0]); // 801D5358
  if (!crb(c,2)) { goto L_801D5368; } // 801D535C
  c->r[31]=0u+0x00000053u; // 801D5360
  goto L_801D5394; // 801D5364
L_801D5368:;
  c->r[0]=rotl(c->r[28],0)&0x00000002u; cr0(c,c->r[0]); // 801D5368
  if (!crb(c,2)) { goto L_801D5378; } // 801D536C
  c->r[31]=0u+0x00000036u; // 801D5370
  goto L_801D5394; // 801D5374
L_801D5378:;
  c->r[0]=rotl(c->r[28],0)&0x00000010u; cr0(c,c->r[0]); // 801D5378
  if (crb(c,2)) { goto L_801D5388; } // 801D537C
  c->r[31]=0u+0x0000001Bu; // 801D5380
  goto L_801D5394; // 801D5384
L_801D5388:;
  c->r[0]=rotl(c->r[28],0)&0x00000008u; cr0(c,c->r[0]); // 801D5388
  if (crb(c,2)) { goto L_801D5394; } // 801D538C
  c->r[31]=0u+0x00000011u; // 801D5390
L_801D5394:;
  cmpu(c,0,c->r[31],0x000003FDu); // 801D5394
  if (!crb(c,2)) { goto L_801D53B4; } // 801D5398
  c->r[3]=0u+0x80480000u; // 801D539C
  c->r[3]=c->r[3]+0x00002FB0u; // 801D53A0
  c->r[0]=R16(c->r[3]+0x0000007Cu); // 801D53A4
  cmpu(c,0,c->r[0],0x000003F9u); // 801D53A8
  if (!crb(c,2)) { goto L_801D53B4; } // 801D53AC
  c->r[31]=0u+0x000003F9u; // 801D53B0
L_801D53B4:;
  c->r[11]=c->r[1]+0x00000020u; // 801D53B4
  c->r[3]=c->r[31]|c->r[31]; // 801D53B8
  c->lr=0x801D53C0u; f_800C2E98(c); // 801D53BC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D53C0
  c->lr=c->r[0]; // 801D53C4
  c->r[1]=c->r[1]+0x00000020u; // 801D53C8
  return; // 801D53CC
}

// BTM_AclRegisterForChanges
void f_801D53D0(Ctx* __restrict c) {
  trace_call(0x801D53D0u);
  cmps(c,0,(int32_t)c->r[3],0); // 801D53D0
  if (!crb(c,2)) { goto L_801D53EC; } // 801D53D4
  c->r[3]=0u+0x80480000u; // 801D53D8
  c->r[0]=0u+0x00000000u; // 801D53DC
  c->r[3]=c->r[3]+0x000034D8u; // 801D53E0
  W32(c->r[3]+0x000004C8u,c->r[0]); // 801D53E4
  goto L_801D540C; // 801D53E8
L_801D53EC:;
  c->r[4]=0u+0x80480000u; // 801D53EC
  c->r[4]=c->r[4]+0x000034D8u; // 801D53F0
  c->r[0]=R32(c->r[4]+0x000004C8u); // 801D53F4
  cmps(c,0,(int32_t)c->r[0],0); // 801D53F8
  if (crb(c,2)) { goto L_801D5408; } // 801D53FC
  c->r[3]=0u+0x00000002u; // 801D5400
  return; // 801D5404
L_801D5408:;
  W32(c->r[4]+0x000004C8u,c->r[3]); // 801D5408
L_801D540C:;
  c->r[3]=0u+0x00000000u; // 801D540C
  return; // 801D5410
}

// btm_qos_setup_complete
void f_801D5414(Ctx* __restrict c) {
  trace_call(0x801D5414u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5414
  c->r[0]=c->lr; // 801D5418
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D541C
  c->r[11]=c->r[1]+0x00000040u; // 801D5420
  c->lr=0x801D5428u; f_800C2E4C(c); // 801D5424
  c->r[31]=0u+0x80480000u; // 801D5428
  c->r[27]=c->r[3]|c->r[3]; // 801D542C
  c->r[31]=c->r[31]+0x000034D8u; // 801D5430
  c->r[28]=c->r[4]|c->r[4]; // 801D5434
  c->r[30]=R32(c->r[31]+0x00000618u); // 801D5438
  c->r[29]=c->r[5]|c->r[5]; // 801D543C
  c->r[3]=c->r[31]+0x00000600u; // 801D5440
  c->lr=0x801D5448u; f_801CE050(c); // 801D5444
  c->r[0]=0u+0x00000000u; // 801D5448
  cmps(c,0,(int32_t)c->r[30],0); // 801D544C
  W32(c->r[31]+0x00000618u,c->r[0]); // 801D5450
  if (crb(c,2)) { goto L_801D54D4; } // 801D5454
  cmps(c,0,(int32_t)c->r[29],0); // 801D5458
  W8(c->r[1]+0x00000022u,c->r[27]); // 801D545C
  W16(c->r[1]+0x00000020u,c->r[28]); // 801D5460
  if (crb(c,2)) { goto L_801D5498; } // 801D5464
  c->r[0]=R8(c->r[29]+0x00000000u); // 801D5468
  W8(c->r[1]+0x00000008u,c->r[0]); // 801D546C
  c->r[0]=R8(c->r[29]+0x00000001u); // 801D5470
  W8(c->r[1]+0x00000009u,c->r[0]); // 801D5474
  c->r[0]=R32(c->r[29]+0x00000004u); // 801D5478
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801D547C
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801D5480
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D5484
  c->r[0]=R32(c->r[29]+0x00000010u); // 801D5488
  W32(c->r[1]+0x00000018u,c->r[0]); // 801D548C
  c->r[0]=R32(c->r[29]+0x00000014u); // 801D5490
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801D5494
L_801D5498:;
  c->r[3]=0u+0x80480000u; // 801D5498
  c->r[3]=c->r[3]+0x000034D8u; // 801D549C
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801D54A0
  cmpu(c,0,c->r[0],0x00000005u); // 801D54A4
  if (crb(c,0)) { goto L_801D54C4; } // 801D54A8
  c->r[3]=0u+0x000D0000u; // 801D54AC
  c->r[4]=0u+0x803A0000u; // 801D54B0
  c->r[5]=R32(c->r[29]+0x00000014u); // 801D54B4
  c->r[3]=c->r[3]+0x00000004u; // 801D54B8
  c->r[4]=c->r[4]+0xFFFFF274u; // 801D54BC
  c->lr=0x801D54C4u; f_801CD9F0(c); // 801D54C0
L_801D54C4:;
  c->r[12]=c->r[30]|c->r[30]; // 801D54C4
  c->r[3]=c->r[1]+0x00000008u; // 801D54C8
  c->ctr=c->r[12]; // 801D54CC
  if (true) { c->lr=0x801D54D4u; dispatch(c,c->ctr); } // 801D54D0
L_801D54D4:;
  c->r[11]=c->r[1]+0x00000040u; // 801D54D4
  c->lr=0x801D54DCu; f_800C2E98(c); // 801D54D8
  c->r[0]=R32(c->r[1]+0x00000044u); // 801D54DC
  c->lr=c->r[0]; // 801D54E0
  c->r[1]=c->r[1]+0x00000040u; // 801D54E4
  return; // 801D54E8
}

// BTM_ReadRSSI
void f_801D54EC(Ctx* __restrict c) {
  trace_call(0x801D54ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D54EC
  c->r[0]=c->lr; // 801D54F0
  c->r[5]=0u+0x80480000u; // 801D54F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D54F8
  c->r[5]=c->r[5]+0x000034D8u; // 801D54FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D5500
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D5504
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D5508
  c->r[29]=c->r[4]|c->r[4]; // 801D550C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D5510
  c->r[28]=c->r[3]|c->r[3]; // 801D5514
  c->r[0]=R8(c->r[5]+0x000027C0u); // 801D5518
  cmpu(c,0,c->r[0],0x00000003u); // 801D551C
  if (crb(c,0)) { goto L_801D5550; } // 801D5520
  c->r[3]=0u+0x000D0000u; // 801D5524
  c->r[4]=0u+0x803A0000u; // 801D5528
  c->r[5]=R8(c->r[28]+0x00000000u); // 801D552C
  c->r[3]=c->r[3]+0x00000002u; // 801D5530
  c->r[6]=R8(c->r[28]+0x00000001u); // 801D5534
  c->r[4]=c->r[4]+0xFFFFF29Cu; // 801D5538
  c->r[7]=R8(c->r[28]+0x00000002u); // 801D553C
  c->r[8]=R8(c->r[28]+0x00000003u); // 801D5540
  c->r[9]=R8(c->r[28]+0x00000004u); // 801D5544
  c->r[10]=R8(c->r[28]+0x00000005u); // 801D5548
  c->lr=0x801D5550u; f_801CDA90(c); // 801D554C
L_801D5550:;
  c->r[3]=0u+0x80480000u; // 801D5550
  c->r[3]=c->r[3]+0x000034D8u; // 801D5554
  c->r[0]=R32(c->r[3]+0x000005E0u); // 801D5558
  cmps(c,0,(int32_t)c->r[0],0); // 801D555C
  if (crb(c,2)) { goto L_801D556C; } // 801D5560
  c->r[3]=0u+0x00000002u; // 801D5564
  goto L_801D5608; // 801D5568
L_801D556C:;
  c->r[30]=c->r[3]+0x00000034u; // 801D556C
  c->r[31]=0u+0x00000000u; // 801D5570
L_801D5574:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 801D5574
  cmps(c,0,(int32_t)c->r[0],0); // 801D5578
  if (crb(c,2)) { goto L_801D559C; } // 801D557C
  c->r[4]=c->r[28]|c->r[28]; // 801D5580
  c->r[3]=c->r[30]+0x00000008u; // 801D5584
  c->r[5]=0u+0x00000006u; // 801D5588
  c->lr=0x801D5590u; f_800C6228(c); // 801D558C
  cmps(c,0,(int32_t)c->r[3],0); // 801D5590
  if (!crb(c,2)) { goto L_801D559C; } // 801D5594
  goto L_801D55B0; // 801D5598
L_801D559C:;
  c->r[31]=c->r[31]+0x00000001u; // 801D559C
  c->r[30]=c->r[30]+0x0000011Cu; // 801D55A0
  cmpu(c,0,c->r[31],0x00000004u); // 801D55A4
  if (crb(c,0)) { IRQCHK(c); goto L_801D5574; } // 801D55A8
  c->r[30]=0u+0x00000000u; // 801D55AC
L_801D55B0:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D55B0
  if (crb(c,2)) { goto L_801D5604; } // 801D55B4
  c->r[31]=0u+0x80480000u; // 801D55B8
  c->r[4]=0u+0x00000009u; // 801D55BC
  c->r[31]=c->r[31]+0x000034D8u; // 801D55C0
  c->r[5]=0u+0x00000003u; // 801D55C4
  c->r[3]=c->r[31]+0x000005C8u; // 801D55C8
  c->lr=0x801D55D0u; f_801CDFE0(c); // 801D55CC
  W32(c->r[31]+0x000005E0u,c->r[29]); // 801D55D0
  c->r[3]=R16(c->r[30]+0x00000000u); // 801D55D4
  c->lr=0x801D55DCu; f_801E29EC(c); // 801D55D8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D55DC
  if (!crb(c,2)) { goto L_801D55FC; } // 801D55E0
  c->r[0]=0u+0x00000000u; // 801D55E4
  c->r[3]=c->r[31]+0x000005C8u; // 801D55E8
  W32(c->r[31]+0x000005E0u,c->r[0]); // 801D55EC
  c->lr=0x801D55F4u; f_801CE050(c); // 801D55F0
  c->r[3]=0u+0x00000003u; // 801D55F4
  goto L_801D5608; // 801D55F8
L_801D55FC:;
  c->r[3]=0u+0x00000001u; // 801D55FC
  goto L_801D5608; // 801D5600
L_801D5604:;
  c->r[3]=0u+0x00000007u; // 801D5604
L_801D5608:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D5608
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D560C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D5610
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D5614
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D5618
  c->lr=c->r[0]; // 801D561C
  c->r[1]=c->r[1]+0x00000020u; // 801D5620
  return; // 801D5624
}

// BTM_ReadLinkQuality
void f_801D5628(Ctx* __restrict c) {
  trace_call(0x801D5628u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5628
  c->r[0]=c->lr; // 801D562C
  c->r[5]=0u+0x80480000u; // 801D5630
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D5634
  c->r[5]=c->r[5]+0x000034D8u; // 801D5638
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D563C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D5640
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D5644
  c->r[29]=c->r[4]|c->r[4]; // 801D5648
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D564C
  c->r[28]=c->r[3]|c->r[3]; // 801D5650
  c->r[0]=R8(c->r[5]+0x000027C0u); // 801D5654
  cmpu(c,0,c->r[0],0x00000003u); // 801D5658
  if (crb(c,0)) { goto L_801D568C; } // 801D565C
  c->r[3]=0u+0x000D0000u; // 801D5660
  c->r[4]=0u+0x803A0000u; // 801D5664
  c->r[5]=R8(c->r[28]+0x00000000u); // 801D5668
  c->r[3]=c->r[3]+0x00000002u; // 801D566C
  c->r[6]=R8(c->r[28]+0x00000001u); // 801D5670
  c->r[4]=c->r[4]+0xFFFFF2D0u; // 801D5674
  c->r[7]=R8(c->r[28]+0x00000002u); // 801D5678
  c->r[8]=R8(c->r[28]+0x00000003u); // 801D567C
  c->r[9]=R8(c->r[28]+0x00000004u); // 801D5680
  c->r[10]=R8(c->r[28]+0x00000005u); // 801D5684
  c->lr=0x801D568Cu; f_801CDA90(c); // 801D5688
L_801D568C:;
  c->r[3]=0u+0x80480000u; // 801D568C
  c->r[3]=c->r[3]+0x000034D8u; // 801D5690
  c->r[0]=R32(c->r[3]+0x000005FCu); // 801D5694
  cmps(c,0,(int32_t)c->r[0],0); // 801D5698
  if (crb(c,2)) { goto L_801D56A8; } // 801D569C
  c->r[3]=0u+0x00000002u; // 801D56A0
  goto L_801D5744; // 801D56A4
L_801D56A8:;
  c->r[30]=c->r[3]+0x00000034u; // 801D56A8
  c->r[31]=0u+0x00000000u; // 801D56AC
L_801D56B0:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 801D56B0
  cmps(c,0,(int32_t)c->r[0],0); // 801D56B4
  if (crb(c,2)) { goto L_801D56D8; } // 801D56B8
  c->r[4]=c->r[28]|c->r[28]; // 801D56BC
  c->r[3]=c->r[30]+0x00000008u; // 801D56C0
  c->r[5]=0u+0x00000006u; // 801D56C4
  c->lr=0x801D56CCu; f_800C6228(c); // 801D56C8
  cmps(c,0,(int32_t)c->r[3],0); // 801D56CC
  if (!crb(c,2)) { goto L_801D56D8; } // 801D56D0
  goto L_801D56EC; // 801D56D4
L_801D56D8:;
  c->r[31]=c->r[31]+0x00000001u; // 801D56D8
  c->r[30]=c->r[30]+0x0000011Cu; // 801D56DC
  cmpu(c,0,c->r[31],0x00000004u); // 801D56E0
  if (crb(c,0)) { IRQCHK(c); goto L_801D56B0; } // 801D56E4
  c->r[30]=0u+0x00000000u; // 801D56E8
L_801D56EC:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D56EC
  if (crb(c,2)) { goto L_801D5740; } // 801D56F0
  c->r[31]=0u+0x80480000u; // 801D56F4
  c->r[4]=0u+0x00000009u; // 801D56F8
  c->r[31]=c->r[31]+0x000034D8u; // 801D56FC
  c->r[5]=0u+0x00000003u; // 801D5700
  c->r[3]=c->r[31]+0x000005E4u; // 801D5704
  c->lr=0x801D570Cu; f_801CDFE0(c); // 801D5708
  W32(c->r[31]+0x000005FCu,c->r[29]); // 801D570C
  c->r[3]=R16(c->r[30]+0x00000000u); // 801D5710
  c->lr=0x801D5718u; f_801E2970(c); // 801D5714
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D5718
  if (!crb(c,2)) { goto L_801D5738; } // 801D571C
  c->r[3]=c->r[31]+0x000005E4u; // 801D5720
  c->lr=0x801D5728u; f_801CE050(c); // 801D5724
  c->r[0]=0u+0x00000000u; // 801D5728
  c->r[3]=0u+0x00000003u; // 801D572C
  W32(c->r[31]+0x000005FCu,c->r[0]); // 801D5730
  goto L_801D5744; // 801D5734
L_801D5738:;
  c->r[3]=0u+0x00000001u; // 801D5738
  goto L_801D5744; // 801D573C
L_801D5740:;
  c->r[3]=0u+0x00000007u; // 801D5740
L_801D5744:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D5744
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D5748
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D574C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D5750
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D5754
  c->lr=c->r[0]; // 801D5758
  c->r[1]=c->r[1]+0x00000020u; // 801D575C
  return; // 801D5760
}

// btm_read_rssi_complete
void f_801D5764(Ctx* __restrict c) {
  trace_call(0x801D5764u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5764
  c->r[0]=c->lr; // 801D5768
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D576C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801D5770
  c->r[31]=0u+0x80480000u; // 801D5774
  c->r[31]=c->r[31]+0x000034D8u; // 801D5778
  W32(c->r[1]+0x00000028u,c->r[30]); // 801D577C
  W32(c->r[1]+0x00000024u,c->r[29]); // 801D5780
  c->r[29]=c->r[31]+0x00000034u; // 801D5784
  W32(c->r[1]+0x00000020u,c->r[28]); // 801D5788
  c->r[28]=c->r[3]|c->r[3]; // 801D578C
  c->r[3]=c->r[31]+0x000005C8u; // 801D5790
  c->r[30]=R32(c->r[31]+0x000005E0u); // 801D5794
  c->lr=0x801D579Cu; f_801CE050(c); // 801D5798
  c->r[0]=0u+0x00000000u; // 801D579C
  cmps(c,0,(int32_t)c->r[30],0); // 801D57A0
  W32(c->r[31]+0x000005E0u,c->r[0]); // 801D57A4
  if (crb(c,2)) { goto L_801D5860; } // 801D57A8
  c->r[6]=R8(c->r[28]+0x00000000u); // 801D57AC
  cmps(c,0,(int32_t)c->r[6],0); // 801D57B0
  W8(c->r[1]+0x00000009u,c->r[6]); // 801D57B4
  if (!crb(c,2)) { goto L_801D5848; } // 801D57B8
  W8(c->r[1]+0x00000008u,c->r[0]); // 801D57BC
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801D57C0
  c->r[3]=R8(c->r[28]+0x00000002u); // 801D57C4
  c->r[4]=R8(c->r[28]+0x00000001u); // 801D57C8
  cmpu(c,0,c->r[0],0x00000004u); // 801D57CC
  c->r[5]=R8(c->r[28]+0x00000003u); // 801D57D0
  c->r[0]=rotl(c->r[3],8)&0xFFFFFF00u; // 801D57D4
  c->r[0]=c->r[4]+c->r[0]; // 801D57D8
  W8(c->r[1]+0x0000000Au,c->r[5]); // 801D57DC
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 801D57E0
  if (crb(c,0)) { goto L_801D5800; } // 801D57E4
  c->r[3]=0u+0x000D0000u; // 801D57E8
  c->r[4]=0u+0x803A0000u; // 801D57EC
  c->r[3]=c->r[3]+0x00000003u; // 801D57F0
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 801D57F4
  c->r[4]=c->r[4]+0xFFFFF30Cu; // 801D57F8
  c->lr=0x801D5800u; f_801CDA10(c); // 801D57FC
L_801D5800:;
  c->r[0]=0u+0x00000004u; // 801D5800
  c->r[3]=0u+0x00000000u; // 801D5804
  c->ctr=c->r[0]; // 801D5808
L_801D580C:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 801D580C
  cmps(c,0,(int32_t)c->r[0],0); // 801D5810
  if (crb(c,2)) { goto L_801D5838; } // 801D5814
  c->r[0]=R16(c->r[29]+0x00000000u); // 801D5818
  cmpu(c,0,c->r[31],c->r[0]); // 801D581C
  if (!crb(c,2)) { goto L_801D5838; } // 801D5820
  c->r[3]=c->r[1]+0x0000000Bu; // 801D5824
  c->r[4]=c->r[29]+0x00000008u; // 801D5828
  c->r[5]=0u+0x00000006u; // 801D582C
  c->lr=0x801D5834u; f_80004000(c); // 801D5830
  goto L_801D5850; // 801D5834
L_801D5838:;
  c->r[3]=c->r[3]+0x00000001u; // 801D5838
  c->r[29]=c->r[29]+0x0000011Cu; // 801D583C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D580C; } // 801D5840
  goto L_801D5850; // 801D5844
L_801D5848:;
  c->r[0]=0u+0x0000000Au; // 801D5848
  W8(c->r[1]+0x00000008u,c->r[0]); // 801D584C
L_801D5850:;
  c->r[12]=c->r[30]|c->r[30]; // 801D5850
  c->r[3]=c->r[1]+0x00000008u; // 801D5854
  c->ctr=c->r[12]; // 801D5858
  if (true) { c->lr=0x801D5860u; dispatch(c,c->ctr); } // 801D585C
L_801D5860:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D5860
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801D5864
  c->r[30]=R32(c->r[1]+0x00000028u); // 801D5868
  c->r[29]=R32(c->r[1]+0x00000024u); // 801D586C
  c->r[28]=R32(c->r[1]+0x00000020u); // 801D5870
  c->lr=c->r[0]; // 801D5874
  c->r[1]=c->r[1]+0x00000030u; // 801D5878
  return; // 801D587C
}

// btm_read_link_quality_complete
void f_801D5880(Ctx* __restrict c) {
  trace_call(0x801D5880u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5880
  c->r[0]=c->lr; // 801D5884
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D5888
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801D588C
  c->r[31]=0u+0x80480000u; // 801D5890
  c->r[31]=c->r[31]+0x000034D8u; // 801D5894
  W32(c->r[1]+0x00000028u,c->r[30]); // 801D5898
  W32(c->r[1]+0x00000024u,c->r[29]); // 801D589C
  c->r[29]=c->r[31]+0x00000034u; // 801D58A0
  W32(c->r[1]+0x00000020u,c->r[28]); // 801D58A4
  c->r[28]=c->r[3]|c->r[3]; // 801D58A8
  c->r[3]=c->r[31]+0x000005C8u; // 801D58AC
  c->r[30]=R32(c->r[31]+0x000005FCu); // 801D58B0
  c->lr=0x801D58B8u; f_801CE050(c); // 801D58B4
  c->r[0]=0u+0x00000000u; // 801D58B8
  cmps(c,0,(int32_t)c->r[30],0); // 801D58BC
  W32(c->r[31]+0x000005FCu,c->r[0]); // 801D58C0
  if (crb(c,2)) { goto L_801D5978; } // 801D58C4
  c->r[6]=R8(c->r[28]+0x00000000u); // 801D58C8
  cmps(c,0,(int32_t)c->r[6],0); // 801D58CC
  W8(c->r[1]+0x00000009u,c->r[6]); // 801D58D0
  if (!crb(c,2)) { goto L_801D5960; } // 801D58D4
  W8(c->r[1]+0x00000008u,c->r[0]); // 801D58D8
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801D58DC
  c->r[3]=R8(c->r[28]+0x00000002u); // 801D58E0
  c->r[4]=R8(c->r[28]+0x00000001u); // 801D58E4
  cmpu(c,0,c->r[0],0x00000004u); // 801D58E8
  c->r[5]=R8(c->r[28]+0x00000003u); // 801D58EC
  c->r[0]=rotl(c->r[3],8)&0xFFFFFF00u; // 801D58F0
  c->r[0]=c->r[4]+c->r[0]; // 801D58F4
  W8(c->r[1]+0x0000000Au,c->r[5]); // 801D58F8
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 801D58FC
  if (crb(c,0)) { goto L_801D5918; } // 801D5900
  c->r[3]=0u+0x000D0000u; // 801D5904
  c->r[4]=0u+0x803A0000u; // 801D5908
  c->r[3]=c->r[3]+0x00000003u; // 801D590C
  c->r[4]=c->r[4]+0xFFFFF33Cu; // 801D5910
  c->lr=0x801D5918u; f_801CDA10(c); // 801D5914
L_801D5918:;
  c->r[0]=0u+0x00000004u; // 801D5918
  c->r[3]=0u+0x00000000u; // 801D591C
  c->ctr=c->r[0]; // 801D5920
L_801D5924:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 801D5924
  cmps(c,0,(int32_t)c->r[0],0); // 801D5928
  if (crb(c,2)) { goto L_801D5950; } // 801D592C
  c->r[0]=R16(c->r[29]+0x00000000u); // 801D5930
  cmpu(c,0,c->r[31],c->r[0]); // 801D5934
  if (!crb(c,2)) { goto L_801D5950; } // 801D5938
  c->r[3]=c->r[1]+0x0000000Bu; // 801D593C
  c->r[4]=c->r[29]+0x00000008u; // 801D5940
  c->r[5]=0u+0x00000006u; // 801D5944
  c->lr=0x801D594Cu; f_80004000(c); // 801D5948
  goto L_801D5968; // 801D594C
L_801D5950:;
  c->r[3]=c->r[3]+0x00000001u; // 801D5950
  c->r[29]=c->r[29]+0x0000011Cu; // 801D5954
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D5924; } // 801D5958
  goto L_801D5968; // 801D595C
L_801D5960:;
  c->r[0]=0u+0x0000000Au; // 801D5960
  W8(c->r[1]+0x00000008u,c->r[0]); // 801D5964
L_801D5968:;
  c->r[12]=c->r[30]|c->r[30]; // 801D5968
  c->r[3]=c->r[1]+0x00000008u; // 801D596C
  c->ctr=c->r[12]; // 801D5970
  if (true) { c->lr=0x801D5978u; dispatch(c,c->ctr); } // 801D5974
L_801D5978:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D5978
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801D597C
  c->r[30]=R32(c->r[1]+0x00000028u); // 801D5980
  c->r[29]=R32(c->r[1]+0x00000024u); // 801D5984
  c->r[28]=R32(c->r[1]+0x00000020u); // 801D5988
  c->lr=c->r[0]; // 801D598C
  c->r[1]=c->r[1]+0x00000030u; // 801D5990
  return; // 801D5994
}

// btm_remove_acl
void f_801D5998(Ctx* __restrict c) {
  trace_call(0x801D5998u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5998
  c->r[0]=c->lr; // 801D599C
  c->r[4]=0u+0x80480000u; // 801D59A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D59A4
  c->r[4]=c->r[4]+0x000034D8u; // 801D59A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D59AC
  c->r[31]=0u+0x00000000u; // 801D59B0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D59B4
  c->r[30]=c->r[4]+0x00000034u; // 801D59B8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D59BC
  c->r[29]=c->r[3]|c->r[3]; // 801D59C0
L_801D59C4:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 801D59C4
  cmps(c,0,(int32_t)c->r[0],0); // 801D59C8
  if (crb(c,2)) { goto L_801D59EC; } // 801D59CC
  c->r[4]=c->r[29]|c->r[29]; // 801D59D0
  c->r[3]=c->r[30]+0x00000008u; // 801D59D4
  c->r[5]=0u+0x00000006u; // 801D59D8
  c->lr=0x801D59E0u; f_800C6228(c); // 801D59DC
  cmps(c,0,(int32_t)c->r[3],0); // 801D59E0
  if (!crb(c,2)) { goto L_801D59EC; } // 801D59E4
  goto L_801D5A00; // 801D59E8
L_801D59EC:;
  c->r[31]=c->r[31]+0x00000001u; // 801D59EC
  c->r[30]=c->r[30]+0x0000011Cu; // 801D59F0
  cmpu(c,0,c->r[31],0x00000004u); // 801D59F4
  if (crb(c,0)) { IRQCHK(c); goto L_801D59C4; } // 801D59F8
  c->r[30]=0u+0x00000000u; // 801D59FC
L_801D5A00:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D5A00
  if (crb(c,2)) { goto L_801D5A10; } // 801D5A04
  c->r[3]=R16(c->r[30]+0x00000000u); // 801D5A08
  goto L_801D5A18; // 801D5A0C
L_801D5A10:;
  c->r[3]=0u+0x00010000u; // 801D5A10
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801D5A14
L_801D5A18:;
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 801D5A18
  c->r[4]=0u+0x00000013u; // 801D5A1C
  c->lr=0x801D5A24u; f_801E0B94(c); // 801D5A20
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D5A24
  if (!crb(c,2)) { goto L_801D5A34; } // 801D5A28
  c->r[3]=0u+0x00000003u; // 801D5A2C
  goto L_801D5A38; // 801D5A30
L_801D5A34:;
  c->r[3]=0u+0x00000000u; // 801D5A34
L_801D5A38:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D5A38
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D5A3C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D5A40
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D5A44
  c->lr=c->r[0]; // 801D5A48
  c->r[1]=c->r[1]+0x00000020u; // 801D5A4C
  return; // 801D5A50
}

// btm_chg_all_acl_pkt_types
void f_801D5A54(Ctx* __restrict c) {
  trace_call(0x801D5A54u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5A54
  c->r[0]=c->lr; // 801D5A58
  W32(c->r[1]+0x00000044u,c->r[0]); // 801D5A5C
  c->r[11]=c->r[1]+0x00000040u; // 801D5A60
  c->lr=0x801D5A68u; f_800C2E40(c); // 801D5A64
  c->r[4]=0u+0x80480000u; // 801D5A68
  cmps(c,0,(int32_t)c->r[3],0); // 801D5A6C
  c->r[31]=c->r[4]+0x000034D8u; // 801D5A70
  c->r[30]=0u+0x803A0000u; // 801D5A74
  c->r[30]=c->r[30]+0xFFFFEFF0u; // 801D5A78
  c->r[28]=c->r[31]+0x00000034u; // 801D5A7C
  if (crb(c,2)) { goto L_801D5B48; } // 801D5A80
  c->r[29]=0u+0x00000000u; // 801D5A84
  c->r[26]=0u+0x000D0000u; // 801D5A88
  c->r[24]=0u+0xFFFFCCF9u; // 801D5A8C
L_801D5A90:;
  c->r[0]=R8(c->r[28]+0x00000119u); // 801D5A90
  cmps(c,0,(int32_t)c->r[0],0); // 801D5A94
  if (crb(c,2)) { goto L_801D5B34; } // 801D5A98
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801D5A9C
  cmpu(c,0,c->r[0],0x00000005u); // 801D5AA0
  if (crb(c,0)) { goto L_801D5AB8; } // 801D5AA4
  c->r[5]=R16(c->r[28]+0x00000000u); // 801D5AA8
  c->r[3]=c->r[26]+0x00000004u; // 801D5AAC
  c->r[4]=c->r[30]+0x0000038Cu; // 801D5AB0
  c->lr=0x801D5AB8u; f_801CD9F0(c); // 801D5AB4
L_801D5AB8:;
  c->r[0]=R16(c->r[28]+0x00000002u); // 801D5AB8
  c->r[5]=0u+0x00000018u; // 801D5ABC
  W16(c->r[28]+0x00000004u,c->r[0]); // 801D5AC0
  c->r[3]=R8(c->r[31]+0x00000636u); // 801D5AC4
  cmpu(c,0,c->r[3],0x00000003u); // 801D5AC8
  if (crb(c,0)) { goto L_801D5AD8; } // 801D5ACC
  c->r[0]=c->r[5]|0x00003300u; // 801D5AD0
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 801D5AD4
L_801D5AD8:;
  c->r[4]=R16(c->r[31]+0x00000654u); // 801D5AD8
  cmpu(c,1,c->r[3],0x00000003u); // 801D5ADC
  c->r[0]=c->r[5]&c->r[4]; // 801D5AE0
  c->r[3]=c->r[0]&0x0000CC18u; cr0(c,c->r[3]); // 801D5AE4
  c->r[25]=c->r[3]&c->r[24]; // 801D5AE8
  if (crb(c,4)) { goto L_801D5B00; } // 801D5AEC
  c->r[0]=c->r[5]|c->r[4]; // 801D5AF0
  c->r[0]=c->r[0]&0x00003306u; cr0(c,c->r[0]); // 801D5AF4
  c->r[0]=c->r[3]|c->r[0]; // 801D5AF8
  c->r[25]=rotl(c->r[0],0)&0x0000FFFFu; // 801D5AFC
L_801D5B00:;
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801D5B00
  cmpu(c,0,c->r[0],0x00000004u); // 801D5B04
  if (crb(c,0)) { goto L_801D5B1C; } // 801D5B08
  c->r[3]=c->r[26]+0x00000003u; // 801D5B0C
  c->r[4]=c->r[30]+0x00000040u; // 801D5B10
  c->r[5]=rotl(c->r[25],0)&0x0000FFFFu; // 801D5B14
  c->lr=0x801D5B1Cu; f_801CD9F0(c); // 801D5B18
L_801D5B1C:;
  c->r[3]=R16(c->r[28]+0x00000000u); // 801D5B1C
  c->r[4]=rotl(c->r[25],0)&0x0000FFFFu; // 801D5B20
  c->lr=0x801D5B28u; f_801E1228(c); // 801D5B24
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D5B28
  if (crb(c,2)) { goto L_801D5B34; } // 801D5B2C
  W16(c->r[28]+0x00000002u,c->r[25]); // 801D5B30
L_801D5B34:;
  c->r[29]=c->r[29]+0x00000001u; // 801D5B34
  c->r[28]=c->r[28]+0x0000011Cu; // 801D5B38
  cmpu(c,0,c->r[29],0x00000004u); // 801D5B3C
  if (crb(c,0)) { IRQCHK(c); goto L_801D5A90; } // 801D5B40
  goto L_801D5C5C; // 801D5B44
L_801D5B48:;
  c->r[29]=0u+0x00000000u; // 801D5B48
  c->r[24]=0u+0x000D0000u; // 801D5B4C
  c->r[25]=0u+0x00000000u; // 801D5B50
  c->r[27]=0u+0xFFFFCCF9u; // 801D5B54
L_801D5B58:;
  c->r[0]=R8(c->r[28]+0x00000119u); // 801D5B58
  cmps(c,0,(int32_t)c->r[0],0); // 801D5B5C
  if (crb(c,2)) { goto L_801D5C4C; } // 801D5B60
  c->r[0]=R16(c->r[28]+0x00000004u); // 801D5B64
  cmps(c,0,(int32_t)c->r[0],0); // 801D5B68
  if (crb(c,2)) { goto L_801D5C4C; } // 801D5B6C
  c->r[3]=c->r[28]+0x00000008u; // 801D5B70
  c->r[4]=c->r[1]+0x00000008u; // 801D5B74
  c->lr=0x801D5B7Cu; f_801D9B7C(c); // 801D5B78
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D5B7C
  if (!crb(c,2)) { goto L_801D5C4C; } // 801D5B80
  c->r[0]=R8(c->r[1]+0x00000008u); // 801D5B84
  cmpu(c,0,c->r[0],0x00000002u); // 801D5B88
  if (!crb(c,2)) { goto L_801D5BC4; } // 801D5B8C
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801D5B90
  cmpu(c,0,c->r[0],0x00000005u); // 801D5B94
  if (crb(c,0)) { goto L_801D5BAC; } // 801D5B98
  c->r[5]=R16(c->r[28]+0x00000000u); // 801D5B9C
  c->r[3]=c->r[24]+0x00000004u; // 801D5BA0
  c->r[4]=c->r[30]+0x000003BCu; // 801D5BA4
  c->lr=0x801D5BACu; f_801CD9F0(c); // 801D5BA8
L_801D5BAC:;
  W8(c->r[1]+0x00000014u,c->r[25]); // 801D5BAC
  c->r[4]=c->r[28]+0x00000008u; // 801D5BB0
  c->r[5]=c->r[1]+0x0000000Cu; // 801D5BB4
  c->r[3]=0u+0x00000080u; // 801D5BB8
  c->lr=0x801D5BC0u; f_801D99AC(c); // 801D5BBC
  goto L_801D5C4C; // 801D5BC0
L_801D5BC4:;
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801D5BC4
  cmpu(c,0,c->r[0],0x00000005u); // 801D5BC8
  if (crb(c,0)) { goto L_801D5BE4; } // 801D5BCC
  c->r[5]=R16(c->r[28]+0x00000000u); // 801D5BD0
  c->r[3]=c->r[24]+0x00000004u; // 801D5BD4
  c->r[6]=R16(c->r[28]+0x00000002u); // 801D5BD8
  c->r[4]=c->r[30]+0x000003ECu; // 801D5BDC
  c->lr=0x801D5BE4u; f_801CDA10(c); // 801D5BE0
L_801D5BE4:;
  c->r[4]=R16(c->r[28]+0x00000004u); // 801D5BE4
  c->r[5]=R16(c->r[31]+0x00000654u); // 801D5BE8
  c->r[0]=R8(c->r[31]+0x00000636u); // 801D5BEC
  c->r[3]=c->r[4]&c->r[5]; // 801D5BF0
  c->r[3]=c->r[3]&0x0000CC18u; cr0(c,c->r[3]); // 801D5BF4
  cmpu(c,0,c->r[0],0x00000003u); // 801D5BF8
  c->r[26]=c->r[3]&c->r[27]; // 801D5BFC
  if (crb(c,0)) { goto L_801D5C14; } // 801D5C00
  c->r[0]=c->r[4]|c->r[5]; // 801D5C04
  c->r[0]=c->r[0]&0x00003306u; cr0(c,c->r[0]); // 801D5C08
  c->r[0]=c->r[3]|c->r[0]; // 801D5C0C
  c->r[26]=rotl(c->r[0],0)&0x0000FFFFu; // 801D5C10
L_801D5C14:;
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801D5C14
  cmpu(c,0,c->r[0],0x00000004u); // 801D5C18
  if (crb(c,0)) { goto L_801D5C30; } // 801D5C1C
  c->r[3]=c->r[24]+0x00000003u; // 801D5C20
  c->r[4]=c->r[30]+0x00000040u; // 801D5C24
  c->r[5]=rotl(c->r[26],0)&0x0000FFFFu; // 801D5C28
  c->lr=0x801D5C30u; f_801CD9F0(c); // 801D5C2C
L_801D5C30:;
  c->r[3]=R16(c->r[28]+0x00000000u); // 801D5C30
  c->r[4]=rotl(c->r[26],0)&0x0000FFFFu; // 801D5C34
  c->lr=0x801D5C3Cu; f_801E1228(c); // 801D5C38
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D5C3C
  if (crb(c,2)) { goto L_801D5C48; } // 801D5C40
  W16(c->r[28]+0x00000002u,c->r[26]); // 801D5C44
L_801D5C48:;
  W16(c->r[28]+0x00000004u,c->r[25]); // 801D5C48
L_801D5C4C:;
  c->r[29]=c->r[29]+0x00000001u; // 801D5C4C
  c->r[28]=c->r[28]+0x0000011Cu; // 801D5C50
  cmpu(c,0,c->r[29],0x00000004u); // 801D5C54
  if (crb(c,0)) { IRQCHK(c); goto L_801D5B58; } // 801D5C58
L_801D5C5C:;
  c->r[11]=c->r[1]+0x00000040u; // 801D5C5C
  c->lr=0x801D5C64u; f_800C2E8C(c); // 801D5C60
  c->r[0]=R32(c->r[1]+0x00000044u); // 801D5C64
  c->lr=c->r[0]; // 801D5C68
  c->r[1]=c->r[1]+0x00000040u; // 801D5C6C
  return; // 801D5C70
}

// BTM_SecAddDevice
void f_801D5C74(Ctx* __restrict c) {
  trace_call(0x801D5C74u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5C74
  c->r[0]=c->lr; // 801D5C78
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D5C7C
  c->r[11]=c->r[1]+0x00000030u; // 801D5C80
  c->lr=0x801D5C88u; f_800C2E40(c); // 801D5C84
  c->r[9]=0u+0x80480000u; // 801D5C88
  c->r[24]=c->r[3]|c->r[3]; // 801D5C8C
  c->r[9]=c->r[9]+0x000034D8u; // 801D5C90
  c->r[25]=c->r[4]|c->r[4]; // 801D5C94
  c->r[26]=c->r[5]|c->r[5]; // 801D5C98
  c->r[27]=c->r[6]|c->r[6]; // 801D5C9C
  c->r[28]=c->r[7]|c->r[7]; // 801D5CA0
  c->r[29]=c->r[8]|c->r[8]; // 801D5CA4
  c->r[30]=c->r[9]+0x00001F30u; // 801D5CA8
  c->r[31]=0u+0x00000000u; // 801D5CAC
L_801D5CB0:;
  c->r[0]=R8(c->r[30]+0x00000076u); // 801D5CB0
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801D5CB4
  if (crb(c,2)) { goto L_801D5CD8; } // 801D5CB8
  c->r[4]=c->r[24]|c->r[24]; // 801D5CBC
  c->r[3]=c->r[30]+0x0000001Cu; // 801D5CC0
  c->r[5]=0u+0x00000006u; // 801D5CC4
  c->lr=0x801D5CCCu; f_800C6228(c); // 801D5CC8
  cmps(c,0,(int32_t)c->r[3],0); // 801D5CCC
  if (!crb(c,2)) { goto L_801D5CD8; } // 801D5CD0
  goto L_801D5CEC; // 801D5CD4
L_801D5CD8:;
  c->r[31]=c->r[31]+0x00000001u; // 801D5CD8
  c->r[30]=c->r[30]+0x00000088u; // 801D5CDC
  cmps(c,0,(int32_t)c->r[31],16); // 801D5CE0
  if (crb(c,0)) { IRQCHK(c); goto L_801D5CB0; } // 801D5CE4
  c->r[30]=0u+0x00000000u; // 801D5CE8
L_801D5CEC:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D5CEC
  if (!crb(c,2)) { goto L_801D5D10; } // 801D5CF0
  c->r[3]=c->r[24]|c->r[24]; // 801D5CF4
  c->lr=0x801D5CFCu; f_801D5F48(c); // 801D5CF8
  cmps(c,0,(int32_t)c->r[3],0); // 801D5CFC
  c->r[30]=c->r[3]|c->r[3]; // 801D5D00
  if (!crb(c,2)) { goto L_801D5D28; } // 801D5D04
  c->r[3]=0u+0x00000000u; // 801D5D08
  goto L_801D5DE4; // 801D5D0C
L_801D5D10:;
  c->r[4]=0u+0x80480000u; // 801D5D10
  c->r[4]=c->r[4]+0x000034D8u; // 801D5D14
  c->r[3]=R32(c->r[4]+0x00001974u); // 801D5D18
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 801D5D1C
  c->r[0]=c->r[3]+0x00000001u; // 801D5D20
  W32(c->r[4]+0x00001974u,c->r[0]); // 801D5D24
L_801D5D28:;
  cmps(c,0,(int32_t)c->r[25],0); // 801D5D28
  if (crb(c,2)) { goto L_801D5D40; } // 801D5D2C
  c->r[4]=c->r[25]|c->r[25]; // 801D5D30
  c->r[3]=c->r[30]+0x00000022u; // 801D5D34
  c->r[5]=0u+0x00000003u; // 801D5D38
  c->lr=0x801D5D40u; f_80004000(c); // 801D5D3C
L_801D5D40:;
  c->r[3]=c->r[30]+0x00000035u; // 801D5D40
  c->r[4]=0u+0x00000000u; // 801D5D44
  c->r[5]=0u+0x00000041u; // 801D5D48
  c->lr=0x801D5D50u; f_80004350(c); // 801D5D4C
  cmps(c,0,(int32_t)c->r[26],0); // 801D5D50
  if (crb(c,2)) { goto L_801D5D80; } // 801D5D54
  c->r[0]=R8(c->r[26]+0x00000000u); // 801D5D58
  cmps(c,0,(int32_t)c->r[0],0); // 801D5D5C
  if (crb(c,2)) { goto L_801D5D80; } // 801D5D60
  c->r[0]=R8(c->r[30]+0x00000076u); // 801D5D64
  c->r[4]=c->r[26]|c->r[26]; // 801D5D68
  c->r[3]=c->r[30]+0x00000035u; // 801D5D6C
  c->r[5]=0u+0x00000040u; // 801D5D70
  c->r[0]=c->r[0]|0x00000008u; // 801D5D74
  W8(c->r[30]+0x00000076u,c->r[0]); // 801D5D78
  c->lr=0x801D5D80u; f_800CA310(c); // 801D5D7C
L_801D5D80:;
  cmps(c,0,(int32_t)c->r[27],0); // 801D5D80
  if (crb(c,2)) { goto L_801D5D9C; } // 801D5D84
  c->r[4]=c->r[27]|c->r[27]; // 801D5D88
  c->r[3]=c->r[30]+0x00000077u; // 801D5D8C
  c->r[5]=0u+0x00000008u; // 801D5D90
  c->lr=0x801D5D98u; f_80004000(c); // 801D5D94
  goto L_801D5DAC; // 801D5D98
L_801D5D9C:;
  c->r[3]=c->r[30]+0x00000077u; // 801D5D9C
  c->r[4]=0u+0x00000000u; // 801D5DA0
  c->r[5]=0u+0x00000008u; // 801D5DA4
  c->lr=0x801D5DACu; f_80004350(c); // 801D5DA8
L_801D5DAC:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 801D5DAC
  cmps(c,0,(int32_t)c->r[29],0); // 801D5DB0
  W32(c->r[30]+0x00000010u,c->r[0]); // 801D5DB4
  c->r[0]=R32(c->r[28]+0x00000004u); // 801D5DB8
  W32(c->r[30]+0x00000014u,c->r[0]); // 801D5DBC
  if (crb(c,2)) { goto L_801D5DE0; } // 801D5DC0
  c->r[0]=R8(c->r[30]+0x00000076u); // 801D5DC4
  c->r[4]=c->r[29]|c->r[29]; // 801D5DC8
  c->r[3]=c->r[30]+0x00000025u; // 801D5DCC
  c->r[5]=0u+0x00000010u; // 801D5DD0
  c->r[0]=c->r[0]|0x00000010u; // 801D5DD4
  W8(c->r[30]+0x00000076u,c->r[0]); // 801D5DD8
  c->lr=0x801D5DE0u; f_80004000(c); // 801D5DDC
L_801D5DE0:;
  c->r[3]=0u+0x00000001u; // 801D5DE0
L_801D5DE4:;
  c->r[11]=c->r[1]+0x00000030u; // 801D5DE4
  c->lr=0x801D5DECu; f_800C2E8C(c); // 801D5DE8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D5DEC
  c->lr=c->r[0]; // 801D5DF0
  c->r[1]=c->r[1]+0x00000030u; // 801D5DF4
  return; // 801D5DF8
}

// BTM_SecDeleteDevice
void f_801D5DFC(Ctx* __restrict c) {
  trace_call(0x801D5DFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5DFC
  c->r[0]=c->lr; // 801D5E00
  c->r[4]=0u+0x80480000u; // 801D5E04
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D5E08
  c->r[4]=c->r[4]+0x000034D8u; // 801D5E0C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D5E10
  c->r[31]=0u+0x00000000u; // 801D5E14
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D5E18
  c->r[30]=c->r[4]+0x00001F30u; // 801D5E1C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D5E20
  c->r[29]=c->r[3]|c->r[3]; // 801D5E24
L_801D5E28:;
  c->r[0]=R8(c->r[30]+0x00000076u); // 801D5E28
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801D5E2C
  if (crb(c,2)) { goto L_801D5E50; } // 801D5E30
  c->r[4]=c->r[29]|c->r[29]; // 801D5E34
  c->r[3]=c->r[30]+0x0000001Cu; // 801D5E38
  c->r[5]=0u+0x00000006u; // 801D5E3C
  c->lr=0x801D5E44u; f_800C6228(c); // 801D5E40
  cmps(c,0,(int32_t)c->r[3],0); // 801D5E44
  if (!crb(c,2)) { goto L_801D5E50; } // 801D5E48
  goto L_801D5E64; // 801D5E4C
L_801D5E50:;
  c->r[31]=c->r[31]+0x00000001u; // 801D5E50
  c->r[30]=c->r[30]+0x00000088u; // 801D5E54
  cmps(c,0,(int32_t)c->r[31],16); // 801D5E58
  if (crb(c,0)) { IRQCHK(c); goto L_801D5E28; } // 801D5E5C
  c->r[30]=0u+0x00000000u; // 801D5E60
L_801D5E64:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D5E64
  if (!crb(c,2)) { goto L_801D5E74; } // 801D5E68
  c->r[3]=0u+0x00000000u; // 801D5E6C
  goto L_801D5E8C; // 801D5E70
L_801D5E74:;
  c->r[0]=0u+0x00000000u; // 801D5E74
  c->r[3]=c->r[29]|c->r[29]; // 801D5E78
  W8(c->r[30]+0x00000076u,c->r[0]); // 801D5E7C
  c->r[4]=0u+0x00000000u; // 801D5E80
  c->lr=0x801D5E88u; f_801D790C(c); // 801D5E84
  c->r[3]=0u+0x00000001u; // 801D5E88
L_801D5E8C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D5E8C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D5E90
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D5E94
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D5E98
  c->lr=c->r[0]; // 801D5E9C
  c->r[1]=c->r[1]+0x00000020u; // 801D5EA0
  return; // 801D5EA4
}

// BTM_SecReadDevName
void f_801D5EA8(Ctx* __restrict c) {
  trace_call(0x801D5EA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5EA8
  c->r[0]=c->lr; // 801D5EAC
  c->r[4]=0u+0x80480000u; // 801D5EB0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D5EB4
  c->r[4]=c->r[4]+0x000034D8u; // 801D5EB8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D5EBC
  c->r[31]=0u+0x00000000u; // 801D5EC0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D5EC4
  c->r[30]=c->r[4]+0x00001F30u; // 801D5EC8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D5ECC
  c->r[29]=0u+0x00000000u; // 801D5ED0
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D5ED4
  c->r[28]=c->r[3]|c->r[3]; // 801D5ED8
L_801D5EDC:;
  c->r[0]=R8(c->r[30]+0x00000076u); // 801D5EDC
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801D5EE0
  if (crb(c,2)) { goto L_801D5F04; } // 801D5EE4
  c->r[4]=c->r[28]|c->r[28]; // 801D5EE8
  c->r[3]=c->r[30]+0x0000001Cu; // 801D5EEC
  c->r[5]=0u+0x00000006u; // 801D5EF0
  c->lr=0x801D5EF8u; f_800C6228(c); // 801D5EF4
  cmps(c,0,(int32_t)c->r[3],0); // 801D5EF8
  if (!crb(c,2)) { goto L_801D5F04; } // 801D5EFC
  goto L_801D5F18; // 801D5F00
L_801D5F04:;
  c->r[31]=c->r[31]+0x00000001u; // 801D5F04
  c->r[30]=c->r[30]+0x00000088u; // 801D5F08
  cmps(c,0,(int32_t)c->r[31],16); // 801D5F0C
  if (crb(c,0)) { IRQCHK(c); goto L_801D5EDC; } // 801D5F10
  c->r[30]=0u+0x00000000u; // 801D5F14
L_801D5F18:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D5F18
  if (crb(c,2)) { goto L_801D5F24; } // 801D5F1C
  c->r[29]=c->r[30]+0x00000035u; // 801D5F20
L_801D5F24:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D5F24
  c->r[3]=c->r[29]|c->r[29]; // 801D5F28
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D5F2C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D5F30
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D5F34
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D5F38
  c->lr=c->r[0]; // 801D5F3C
  c->r[1]=c->r[1]+0x00000020u; // 801D5F40
  return; // 801D5F44
}

// btm_sec_alloc_dev
void f_801D5F48(Ctx* __restrict c) {
  trace_call(0x801D5F48u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D5F48
  c->r[0]=c->lr; // 801D5F4C
  c->r[4]=0u+0x80480000u; // 801D5F50
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D5F54
  c->r[0]=0u+0x00000010u; // 801D5F58
  c->r[4]=c->r[4]+0x000034D8u; // 801D5F5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D5F60
  c->r[31]=0u+0x00000000u; // 801D5F64
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D5F68
  c->r[30]=c->r[3]|c->r[3]; // 801D5F6C
  c->r[3]=0u+0x00000000u; // 801D5F70
  c->ctr=c->r[0]; // 801D5F74
L_801D5F78:;
  c->r[0]=R8(c->r[4]+0x00001FA6u); // 801D5F78
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801D5F7C
  if (!crb(c,2)) { goto L_801D5F9C; } // 801D5F80
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)136); // 801D5F84
  c->r[3]=0u+0x80480000u; // 801D5F88
  c->r[3]=c->r[3]+0x000034D8u; // 801D5F8C
  c->r[3]=c->r[3]+c->r[0]; // 801D5F90
  c->r[31]=c->r[3]+0x00001F30u; // 801D5F94
  goto L_801D5FA8; // 801D5F98
L_801D5F9C:;
  c->r[4]=c->r[4]+0x00000088u; // 801D5F9C
  c->r[3]=c->r[3]+0x00000001u; // 801D5FA0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D5F78; } // 801D5FA4
L_801D5FA8:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D5FA8
  if (!crb(c,2)) { goto L_801D5FB8; } // 801D5FAC
  c->lr=0x801D5FB4u; f_801D61A8(c); // 801D5FB0
  c->r[31]=c->r[3]|c->r[3]; // 801D5FB4
L_801D5FB8:;
  c->r[3]=c->r[31]|c->r[31]; // 801D5FB8
  c->r[4]=0u+0x00000000u; // 801D5FBC
  c->r[5]=0u+0x00000088u; // 801D5FC0
  c->lr=0x801D5FC8u; f_80004350(c); // 801D5FC4
  c->r[3]=0u+0x00000080u; // 801D5FC8
  c->r[0]=0u+0x00000000u; // 801D5FCC
  W8(c->r[31]+0x00000076u,c->r[3]); // 801D5FD0
  c->r[3]=c->r[30]|c->r[30]; // 801D5FD4
  W8(c->r[31]+0x00000085u,c->r[0]); // 801D5FD8
  c->lr=0x801D5FE0u; f_801D882C(c); // 801D5FDC
  cmps(c,0,(int32_t)c->r[3],0); // 801D5FE0
  c->r[4]=c->r[3]|c->r[3]; // 801D5FE4
  if (crb(c,2)) { goto L_801D6000; } // 801D5FE8
  c->r[3]=c->r[31]+0x00000022u; // 801D5FEC
  c->r[4]=c->r[4]+0x00000008u; // 801D5FF0
  c->r[5]=0u+0x00000003u; // 801D5FF4
  c->lr=0x801D5FFCu; f_80004000(c); // 801D5FF8
  goto L_801D6018; // 801D5FFC
L_801D6000:;
  c->r[4]=0u+0x80480000u; // 801D6000
  c->r[3]=c->r[31]+0x00000022u; // 801D6004
  c->r[4]=c->r[4]+0x000034D8u; // 801D6008
  c->r[5]=0u+0x00000003u; // 801D600C
  c->r[4]=c->r[4]+0x000027BAu; // 801D6010
  c->lr=0x801D6018u; f_80004000(c); // 801D6014
L_801D6018:;
  c->r[4]=c->r[30]|c->r[30]; // 801D6018
  c->r[3]=c->r[31]+0x0000001Cu; // 801D601C
  c->r[5]=0u+0x00000006u; // 801D6020
  c->lr=0x801D6028u; f_80004000(c); // 801D6024
  c->r[3]=c->r[30]|c->r[30]; // 801D6028
  c->lr=0x801D6030u; f_801D4EA8(c); // 801D602C
  W16(c->r[31]+0x00000018u,c->r[3]); // 801D6030
  c->r[5]=0u+0x80480000u; // 801D6034
  c->r[5]=c->r[5]+0x000034D8u; // 801D6038
  c->r[3]=c->r[31]|c->r[31]; // 801D603C
  c->r[4]=R32(c->r[5]+0x00001974u); // 801D6040
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 801D6044
  c->r[0]=c->r[4]+0x00000001u; // 801D6048
  W32(c->r[5]+0x00001974u,c->r[0]); // 801D604C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D6050
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D6054
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D6058
  c->lr=c->r[0]; // 801D605C
  c->r[1]=c->r[1]+0x00000010u; // 801D6060
  return; // 801D6064
}

// btm_find_dev_by_handle
void f_801D6068(Ctx* __restrict c) {
  trace_call(0x801D6068u);
  c->r[4]=0u+0x80480000u; // 801D6068
  c->r[0]=0u+0x00000004u; // 801D606C
  c->r[4]=c->r[4]+0x000034D8u; // 801D6070
  c->r[5]=0u+0x00000000u; // 801D6074
  c->r[4]=c->r[4]+0x00001F30u; // 801D6078
  c->ctr=c->r[0]; // 801D607C
L_801D6080:;
  c->r[0]=R8(c->r[4]+0x00000076u); // 801D6080
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801D6084
  if (crb(c,2)) { goto L_801D60A0; } // 801D6088
  c->r[0]=R16(c->r[4]+0x00000018u); // 801D608C
  cmpu(c,0,c->r[0],c->r[3]); // 801D6090
  if (!crb(c,2)) { goto L_801D60A0; } // 801D6094
  c->r[3]=c->r[4]|c->r[4]; // 801D6098
  return; // 801D609C
L_801D60A0:;
  c->r[0]=R8(c->r[4]+0x000000FEu); // 801D60A0
  c->r[4]=c->r[4]+0x00000088u; // 801D60A4
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801D60A8
  if (crb(c,2)) { goto L_801D60C4; } // 801D60AC
  c->r[0]=R16(c->r[4]+0x00000018u); // 801D60B0
  cmpu(c,0,c->r[0],c->r[3]); // 801D60B4
  if (!crb(c,2)) { goto L_801D60C4; } // 801D60B8
  c->r[3]=c->r[4]|c->r[4]; // 801D60BC
  return; // 801D60C0
L_801D60C4:;
  c->r[0]=R8(c->r[4]+0x000000FEu); // 801D60C4
  c->r[4]=c->r[4]+0x00000088u; // 801D60C8
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801D60CC
  if (crb(c,2)) { goto L_801D60E8; } // 801D60D0
  c->r[0]=R16(c->r[4]+0x00000018u); // 801D60D4
  cmpu(c,0,c->r[0],c->r[3]); // 801D60D8
  if (!crb(c,2)) { goto L_801D60E8; } // 801D60DC
  c->r[3]=c->r[4]|c->r[4]; // 801D60E0
  return; // 801D60E4
L_801D60E8:;
  c->r[0]=R8(c->r[4]+0x000000FEu); // 801D60E8
  c->r[4]=c->r[4]+0x00000088u; // 801D60EC
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801D60F0
  if (crb(c,2)) { goto L_801D610C; } // 801D60F4
  c->r[0]=R16(c->r[4]+0x00000018u); // 801D60F8
  cmpu(c,0,c->r[0],c->r[3]); // 801D60FC
  if (!crb(c,2)) { goto L_801D610C; } // 801D6100
  c->r[3]=c->r[4]|c->r[4]; // 801D6104
  return; // 801D6108
L_801D610C:;
  c->r[5]=c->r[5]+0x00000003u; // 801D610C
  c->r[4]=c->r[4]+0x00000088u; // 801D6110
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D6080; } // 801D6114
  c->r[3]=0u+0x00000000u; // 801D6118
  return; // 801D611C
}

// btm_find_dev
void f_801D6120(Ctx* __restrict c) {
  trace_call(0x801D6120u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6120
  c->r[0]=c->lr; // 801D6124
  c->r[4]=0u+0x80480000u; // 801D6128
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D612C
  c->r[4]=c->r[4]+0x000034D8u; // 801D6130
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D6134
  c->r[31]=c->r[4]+0x00001F30u; // 801D6138
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D613C
  c->r[30]=0u+0x00000000u; // 801D6140
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D6144
  c->r[29]=c->r[3]|c->r[3]; // 801D6148
L_801D614C:;
  c->r[0]=R8(c->r[31]+0x00000076u); // 801D614C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801D6150
  if (crb(c,2)) { goto L_801D6178; } // 801D6154
  c->r[4]=c->r[29]|c->r[29]; // 801D6158
  c->r[3]=c->r[31]+0x0000001Cu; // 801D615C
  c->r[5]=0u+0x00000006u; // 801D6160
  c->lr=0x801D6168u; f_800C6228(c); // 801D6164
  cmps(c,0,(int32_t)c->r[3],0); // 801D6168
  if (!crb(c,2)) { goto L_801D6178; } // 801D616C
  c->r[3]=c->r[31]|c->r[31]; // 801D6170
  goto L_801D618C; // 801D6174
L_801D6178:;
  c->r[30]=c->r[30]+0x00000001u; // 801D6178
  c->r[31]=c->r[31]+0x00000088u; // 801D617C
  cmps(c,0,(int32_t)c->r[30],16); // 801D6180
  if (crb(c,0)) { IRQCHK(c); goto L_801D614C; } // 801D6184
  c->r[3]=0u+0x00000000u; // 801D6188
L_801D618C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D618C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D6190
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D6194
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D6198
  c->lr=c->r[0]; // 801D619C
  c->r[1]=c->r[1]+0x00000020u; // 801D61A0
  return; // 801D61A4
}

// btm_find_oldest_dev
void f_801D61A8(Ctx* __restrict c) {
  trace_call(0x801D61A8u);
  c->r[3]=0u+0x80480000u; // 801D61A8
  c->r[0]=0u+0x00000004u; // 801D61AC
  c->r[3]=c->r[3]+0x000034D8u; // 801D61B0
  c->r[6]=0u+0xFFFFFFFFu; // 801D61B4
  c->r[5]=c->r[3]+0x00001F30u; // 801D61B8
  c->r[7]=0u+0x00000000u; // 801D61BC
  c->r[3]=c->r[5]|c->r[5]; // 801D61C0
  c->ctr=c->r[0]; // 801D61C4
L_801D61C8:;
  c->r[4]=R8(c->r[5]+0x00000076u); // 801D61C8
  c->r[0]=rotl(c->r[4],0)&0x00000080u; cr0(c,c->r[0]); // 801D61CC
  if (crb(c,2)) { goto L_801D61F0; } // 801D61D0
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 801D61D4
  if (!crb(c,2)) { goto L_801D61F0; } // 801D61D8
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801D61DC
  cmpu(c,0,c->r[0],c->r[6]); // 801D61E0
  if (!crb(c,0)) { goto L_801D61F0; } // 801D61E4
  c->r[3]=c->r[5]|c->r[5]; // 801D61E8
  c->r[6]=c->r[0]|c->r[0]; // 801D61EC
L_801D61F0:;
  c->r[4]=R8(c->r[5]+0x000000FEu); // 801D61F0
  c->r[5]=c->r[5]+0x00000088u; // 801D61F4
  c->r[0]=rotl(c->r[4],0)&0x00000080u; cr0(c,c->r[0]); // 801D61F8
  if (crb(c,2)) { goto L_801D621C; } // 801D61FC
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 801D6200
  if (!crb(c,2)) { goto L_801D621C; } // 801D6204
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801D6208
  cmpu(c,0,c->r[0],c->r[6]); // 801D620C
  if (!crb(c,0)) { goto L_801D621C; } // 801D6210
  c->r[3]=c->r[5]|c->r[5]; // 801D6214
  c->r[6]=c->r[0]|c->r[0]; // 801D6218
L_801D621C:;
  c->r[4]=R8(c->r[5]+0x000000FEu); // 801D621C
  c->r[5]=c->r[5]+0x00000088u; // 801D6220
  c->r[0]=rotl(c->r[4],0)&0x00000080u; cr0(c,c->r[0]); // 801D6224
  if (crb(c,2)) { goto L_801D6248; } // 801D6228
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 801D622C
  if (!crb(c,2)) { goto L_801D6248; } // 801D6230
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801D6234
  cmpu(c,0,c->r[0],c->r[6]); // 801D6238
  if (!crb(c,0)) { goto L_801D6248; } // 801D623C
  c->r[3]=c->r[5]|c->r[5]; // 801D6240
  c->r[6]=c->r[0]|c->r[0]; // 801D6244
L_801D6248:;
  c->r[4]=R8(c->r[5]+0x000000FEu); // 801D6248
  c->r[5]=c->r[5]+0x00000088u; // 801D624C
  c->r[0]=rotl(c->r[4],0)&0x00000080u; cr0(c,c->r[0]); // 801D6250
  if (crb(c,2)) { goto L_801D6274; } // 801D6254
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 801D6258
  if (!crb(c,2)) { goto L_801D6274; } // 801D625C
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 801D6260
  cmpu(c,0,c->r[0],c->r[6]); // 801D6264
  if (!crb(c,0)) { goto L_801D6274; } // 801D6268
  c->r[3]=c->r[5]|c->r[5]; // 801D626C
  c->r[6]=c->r[0]|c->r[0]; // 801D6270
L_801D6274:;
  c->r[7]=c->r[7]+0x00000003u; // 801D6274
  c->r[5]=c->r[5]+0x00000088u; // 801D6278
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D61C8; } // 801D627C
  c->r[0]=c->r[6]+0x00010000u; // 801D6280
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801D6284
  if (!crb(c,2)) return; // 801D6288
  c->r[4]=0u+0x80480000u; // 801D628C
  c->r[0]=0u+0x00000004u; // 801D6290
  c->r[4]=c->r[4]+0x000034D8u; // 801D6294
  c->r[5]=0u+0x00000000u; // 801D6298
  c->r[4]=c->r[4]+0x00001F30u; // 801D629C
  c->ctr=c->r[0]; // 801D62A0
L_801D62A4:;
  c->r[0]=R8(c->r[4]+0x00000076u); // 801D62A4
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801D62A8
  if (crb(c,2)) { goto L_801D62C4; } // 801D62AC
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801D62B0
  cmpu(c,0,c->r[0],c->r[6]); // 801D62B4
  if (!crb(c,0)) { goto L_801D62C4; } // 801D62B8
  c->r[3]=c->r[4]|c->r[4]; // 801D62BC
  c->r[6]=c->r[0]|c->r[0]; // 801D62C0
L_801D62C4:;
  c->r[0]=R8(c->r[4]+0x000000FEu); // 801D62C4
  c->r[4]=c->r[4]+0x00000088u; // 801D62C8
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801D62CC
  if (crb(c,2)) { goto L_801D62E8; } // 801D62D0
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801D62D4
  cmpu(c,0,c->r[0],c->r[6]); // 801D62D8
  if (!crb(c,0)) { goto L_801D62E8; } // 801D62DC
  c->r[3]=c->r[4]|c->r[4]; // 801D62E0
  c->r[6]=c->r[0]|c->r[0]; // 801D62E4
L_801D62E8:;
  c->r[0]=R8(c->r[4]+0x000000FEu); // 801D62E8
  c->r[4]=c->r[4]+0x00000088u; // 801D62EC
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801D62F0
  if (crb(c,2)) { goto L_801D630C; } // 801D62F4
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801D62F8
  cmpu(c,0,c->r[0],c->r[6]); // 801D62FC
  if (!crb(c,0)) { goto L_801D630C; } // 801D6300
  c->r[3]=c->r[4]|c->r[4]; // 801D6304
  c->r[6]=c->r[0]|c->r[0]; // 801D6308
L_801D630C:;
  c->r[0]=R8(c->r[4]+0x000000FEu); // 801D630C
  c->r[4]=c->r[4]+0x00000088u; // 801D6310
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801D6314
  if (crb(c,2)) { goto L_801D6330; } // 801D6318
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801D631C
  cmpu(c,0,c->r[0],c->r[6]); // 801D6320
  if (!crb(c,0)) { goto L_801D6330; } // 801D6324
  c->r[3]=c->r[4]|c->r[4]; // 801D6328
  c->r[6]=c->r[0]|c->r[0]; // 801D632C
L_801D6330:;
  c->r[5]=c->r[5]+0x00000003u; // 801D6330
  c->r[4]=c->r[4]+0x00000088u; // 801D6334
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D62A4; } // 801D6338
  return; // 801D633C
}

// btm_dev_init
void f_801D6340(Ctx* __restrict c) {
  trace_call(0x801D6340u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6340
  c->r[0]=c->lr; // 801D6344
  c->r[4]=c->r[13]+0xFFFF8F10u; // 801D6348
  c->r[5]=0u+0x00000003u; // 801D634C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D6350
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D6354
  c->r[31]=0u+0x80480000u; // 801D6358
  c->r[31]=c->r[31]+0x000034D8u; // 801D635C
  c->r[3]=c->r[31]+0x00000648u; // 801D6360
  c->lr=0x801D6368u; f_80004000(c); // 801D6364
  c->r[3]=0u+0x00010000u; // 801D6368
  c->r[7]=0u+0x000000FFu; // 801D636C
  c->r[9]=c->r[3]+0xFFFFCC18u; // 801D6370
  c->r[12]=0u+0x00000001u; // 801D6374
  c->r[3]=0u+0x00001400u; // 801D6378
  c->r[11]=0u+0x00000002u; // 801D637C
  c->r[10]=0u+0x00000004u; // 801D6380
  c->r[8]=0u+0x0000003Fu; // 801D6384
  c->r[6]=0u+0x00000000u; // 801D6388
  c->r[0]=0u+0x00000005u; // 801D638C
  W16(c->r[31]+0x0000064Cu,c->r[3]); // 801D6390
  c->r[3]=c->r[31]+0x00000574u; // 801D6394
  c->r[4]=0u+0x00000001u; // 801D6398
  c->r[5]=0u+0x00000004u; // 801D639C
  W32(c->r[31]+0x00000584u,c->r[12]); // 801D63A0
  W32(c->r[31]+0x000005A0u,c->r[11]); // 801D63A4
  W32(c->r[31]+0x000005BCu,c->r[10]); // 801D63A8
  W16(c->r[31]+0x00000654u,c->r[9]); // 801D63AC
  W16(c->r[31]+0x00000656u,c->r[8]); // 801D63B0
  W8(c->r[31]+0x000027BDu,c->r[7]); // 801D63B4
  W8(c->r[31]+0x000027BEu,c->r[7]); // 801D63B8
  W8(c->r[31]+0x0000064Eu,c->r[6]); // 801D63BC
  W8(c->r[31]+0x0000064Fu,c->r[0]); // 801D63C0
  c->lr=0x801D63C8u; f_801CDFE0(c); // 801D63C4
  c->lr=0x801D63CCu; f_801E1D70(c); // 801D63C8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D63CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D63D0
  c->lr=c->r[0]; // 801D63D4
  c->r[1]=c->r[1]+0x00000010u; // 801D63D8
  return; // 801D63DC
}

// btm_db_reset
void f_801D63E0(Ctx* __restrict c) {
  trace_call(0x801D63E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D63E0
  c->r[0]=c->lr; // 801D63E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D63E8
  c->r[0]=0u+0x0000000Cu; // 801D63EC
  W8(c->r[1]+0x00000008u,c->r[0]); // 801D63F0
  c->lr=0x801D63F8u; f_801D8BB0(c); // 801D63F4
  c->lr=0x801D63FCu; f_801D7D40(c); // 801D63F8
  c->r[3]=0u+0x80480000u; // 801D63FC
  c->r[3]=c->r[3]+0x000034D8u; // 801D6400
  c->r[12]=R32(c->r[3]+0x000005A8u); // 801D6404
  cmps(c,0,(int32_t)c->r[12],0); // 801D6408
  if (crb(c,2)) { goto L_801D6428; } // 801D640C
  c->r[0]=0u+0x00000000u; // 801D6410
  W32(c->r[3]+0x000005A8u,c->r[0]); // 801D6414
  if (crb(c,2)) { goto L_801D6428; } // 801D6418
  c->r[3]=0u+0x00000000u; // 801D641C
  c->ctr=c->r[12]; // 801D6420
  if (true) { c->lr=0x801D6428u; dispatch(c,c->ctr); } // 801D6424
L_801D6428:;
  c->r[3]=0u+0x80480000u; // 801D6428
  c->r[3]=c->r[3]+0x000034D8u; // 801D642C
  c->r[12]=R32(c->r[3]+0x000005C4u); // 801D6430
  cmps(c,0,(int32_t)c->r[12],0); // 801D6434
  if (crb(c,2)) { goto L_801D6454; } // 801D6438
  c->r[0]=0u+0x00000000u; // 801D643C
  W32(c->r[3]+0x000005C4u,c->r[0]); // 801D6440
  if (crb(c,2)) { goto L_801D6454; } // 801D6444
  c->r[3]=c->r[1]+0x00000008u; // 801D6448
  c->ctr=c->r[12]; // 801D644C
  if (true) { c->lr=0x801D6454u; dispatch(c,c->ctr); } // 801D6450
L_801D6454:;
  c->r[3]=0u+0x80480000u; // 801D6454
  c->r[3]=c->r[3]+0x000034D8u; // 801D6458
  c->r[12]=R32(c->r[3]+0x000005E0u); // 801D645C
  cmps(c,0,(int32_t)c->r[12],0); // 801D6460
  if (crb(c,2)) { goto L_801D6480; } // 801D6464
  c->r[0]=0u+0x00000000u; // 801D6468
  W32(c->r[3]+0x000005E0u,c->r[0]); // 801D646C
  if (crb(c,2)) { goto L_801D6480; } // 801D6470
  c->r[3]=c->r[1]+0x00000008u; // 801D6474
  c->ctr=c->r[12]; // 801D6478
  if (true) { c->lr=0x801D6480u; dispatch(c,c->ctr); } // 801D647C
L_801D6480:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D6480
  c->lr=c->r[0]; // 801D6484
  c->r[1]=c->r[1]+0x00000010u; // 801D6488
  return; // 801D648C
}

// BTM_DeviceReset
void f_801D6490(Ctx* __restrict c) {
  trace_call(0x801D6490u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6490
  c->r[0]=c->lr; // 801D6494
  c->r[4]=0u+0x80480000u; // 801D6498
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D649C
  c->r[4]=c->r[4]+0x000034D8u; // 801D64A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D64A4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D64A8
  c->r[30]=c->r[3]|c->r[3]; // 801D64AC
  c->r[0]=R32(c->r[4]+0x0000058Cu); // 801D64B0
  cmps(c,0,(int32_t)c->r[0],0); // 801D64B4
  if (crb(c,2)) { goto L_801D64C4; } // 801D64B8
  cmpu(c,0,c->r[0],c->r[3]); // 801D64BC
  if (!crb(c,2)) { goto L_801D6514; } // 801D64C0
L_801D64C4:;
  c->lr=0x801D64C8u; f_801D43A8(c); // 801D64C4
  c->lr=0x801D64CCu; f_801D63E0(c); // 801D64C8
  c->r[31]=0u+0x80480000u; // 801D64CC
  c->r[6]=0u+0x00000000u; // 801D64D0
  c->r[31]=c->r[31]+0x000034D8u; // 801D64D4
  c->r[0]=0u+0x00000005u; // 801D64D8
  W32(c->r[31]+0x0000058Cu,c->r[30]); // 801D64DC
  c->r[3]=c->r[31]+0x00000574u; // 801D64E0
  c->r[4]=0u+0x00000001u; // 801D64E4
  c->r[5]=0u+0x00000004u; // 801D64E8
  W8(c->r[31]+0x0000064Eu,c->r[6]); // 801D64EC
  W8(c->r[31]+0x0000064Fu,c->r[0]); // 801D64F0
  c->lr=0x801D64F8u; f_801CDFE0(c); // 801D64F4
  c->lr=0x801D64FCu; f_801E1D70(c); // 801D64F8
  c->r[12]=R32(c->r[31]+0x00000568u); // 801D64FC
  cmps(c,0,(int32_t)c->r[12],0); // 801D6500
  if (crb(c,2)) { goto L_801D6514; } // 801D6504
  c->r[3]=0u+0x00000001u; // 801D6508
  c->ctr=c->r[12]; // 801D650C
  if (true) { c->lr=0x801D6514u; dispatch(c,c->ctr); } // 801D6510
L_801D6514:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D6514
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D6518
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D651C
  c->lr=c->r[0]; // 801D6520
  c->r[1]=c->r[1]+0x00000010u; // 801D6524
  return; // 801D6528
}

// BTM_SendHciReset
void f_801D652C(Ctx* __restrict c) {
  trace_call(0x801D652Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D652C
  c->r[0]=c->lr; // 801D6530
  c->r[4]=0u+0x80480000u; // 801D6534
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D6538
  c->r[4]=c->r[4]+0x000034D8u; // 801D653C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D6540
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D6544
  c->r[30]=c->r[3]|c->r[3]; // 801D6548
  c->r[0]=R32(c->r[4]+0x0000058Cu); // 801D654C
  cmps(c,0,(int32_t)c->r[0],0); // 801D6550
  if (crb(c,2)) { goto L_801D656C; } // 801D6554
  cmpu(c,0,c->r[0],c->r[3]); // 801D6558
  if (crb(c,2)) { goto L_801D656C; } // 801D655C
  c->r[0]=R32(c->r[4]+0x00000620u); // 801D6560
  cmpu(c,0,c->r[0],c->r[3]); // 801D6564
  if (!crb(c,2)) { goto L_801D65BC; } // 801D6568
L_801D656C:;
  c->lr=0x801D6570u; f_801D43A8(c); // 801D656C
  c->lr=0x801D6574u; f_801D63E0(c); // 801D6570
  c->r[31]=0u+0x80480000u; // 801D6574
  c->r[6]=0u+0x00000000u; // 801D6578
  c->r[31]=c->r[31]+0x000034D8u; // 801D657C
  c->r[0]=0u+0x00000005u; // 801D6580
  W32(c->r[31]+0x00000620u,c->r[30]); // 801D6584
  c->r[3]=c->r[31]+0x00000574u; // 801D6588
  c->r[4]=0u+0x00000001u; // 801D658C
  c->r[5]=0u+0x00000004u; // 801D6590
  W8(c->r[31]+0x0000064Eu,c->r[6]); // 801D6594
  W8(c->r[31]+0x0000064Fu,c->r[0]); // 801D6598
  c->lr=0x801D65A0u; f_801CDFE0(c); // 801D659C
  c->lr=0x801D65A4u; f_801E1D70(c); // 801D65A0
  c->r[12]=R32(c->r[31]+0x00000568u); // 801D65A4
  cmps(c,0,(int32_t)c->r[12],0); // 801D65A8
  if (crb(c,2)) { goto L_801D65BC; } // 801D65AC
  c->r[3]=0u+0x00000001u; // 801D65B0
  c->ctr=c->r[12]; // 801D65B4
  if (true) { c->lr=0x801D65BCu; dispatch(c,c->ctr); } // 801D65B8
L_801D65BC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D65BC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D65C0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D65C4
  c->lr=c->r[0]; // 801D65C8
  c->r[1]=c->r[1]+0x00000010u; // 801D65CC
  return; // 801D65D0
}

// BTM_IsDeviceUp
void f_801D65D4(Ctx* __restrict c) {
  trace_call(0x801D65D4u);
  c->r[3]=0u+0x80480000u; // 801D65D4
  c->r[3]=c->r[3]+0x000034D8u; // 801D65D8
  c->r[3]=R8(c->r[3]+0x0000064Eu); // 801D65DC
  c->r[0]=c->r[3]+0xFFFFFFFBu; // 801D65E0
  c->r[0]=cntlz(c->r[0]); // 801D65E4
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 801D65E8
  return; // 801D65EC
}

// BTM_SetAfhChannels
void f_801D65F0(Ctx* __restrict c) {
  trace_call(0x801D65F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D65F0
  c->r[0]=c->lr; // 801D65F4
  c->r[7]=0u+0x80480000u; // 801D65F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D65FC
  c->r[7]=c->r[7]+0x000034D8u; // 801D6600
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D6604
  c->r[31]=c->r[4]|c->r[4]; // 801D6608
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D660C
  c->r[30]=c->r[3]|c->r[3]; // 801D6610
  c->r[0]=R8(c->r[7]+0x000027C0u); // 801D6614
  cmpu(c,0,c->r[0],0x00000003u); // 801D6618
  if (crb(c,0)) { goto L_801D6644; } // 801D661C
  c->r[3]=0u+0x000D0000u; // 801D6620
  c->r[4]=0u+0x803A0000u; // 801D6624
  c->r[6]=R8(c->r[7]+0x000027BDu); // 801D6628
  c->r[5]=c->r[30]|c->r[30]; // 801D662C
  c->r[8]=R8(c->r[7]+0x000027BEu); // 801D6630
  c->r[7]=c->r[31]|c->r[31]; // 801D6634
  c->r[3]=c->r[3]+0x00000002u; // 801D6638
  c->r[4]=c->r[4]+0xFFFFF410u; // 801D663C
  c->lr=0x801D6644u; f_801CDA50(c); // 801D6640
L_801D6644:;
  c->r[3]=0u+0x80480000u; // 801D6644
  c->r[3]=c->r[3]+0x000034D8u; // 801D6648
  c->r[4]=R8(c->r[3]+0x00000645u); // 801D664C
  c->r[0]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[0]); // 801D6650
  if (!crb(c,2)) { goto L_801D6674; } // 801D6654
  c->r[0]=R8(c->r[3]+0x00000644u); // 801D6658
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801D665C
  if (!crb(c,2)) { goto L_801D6674; } // 801D6660
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 801D6664
  if (!crb(c,2)) { goto L_801D6674; } // 801D6668
  c->r[3]=0u+0x00000004u; // 801D666C
  goto L_801D66C8; // 801D6670
L_801D6674:;
  c->r[3]=0u+0x80480000u; // 801D6674
  c->r[3]=c->r[3]+0x000034D8u; // 801D6678
  c->r[0]=R8(c->r[3]+0x000027BDu); // 801D667C
  cmpu(c,0,c->r[0],c->r[30]); // 801D6680
  if (!crb(c,2)) { goto L_801D6694; } // 801D6684
  c->r[0]=R8(c->r[3]+0x000027BEu); // 801D6688
  cmpu(c,0,c->r[0],c->r[31]); // 801D668C
  if (crb(c,2)) { goto L_801D66C4; } // 801D6690
L_801D6694:;
  c->r[3]=c->r[30]|c->r[30]; // 801D6694
  c->r[4]=c->r[31]|c->r[31]; // 801D6698
  c->lr=0x801D66A0u; f_801E2A64(c); // 801D669C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D66A0
  if (crb(c,2)) { goto L_801D66BC; } // 801D66A4
  c->r[3]=0u+0x80480000u; // 801D66A8
  c->r[3]=c->r[3]+0x000034D8u; // 801D66AC
  W8(c->r[3]+0x000027BDu,c->r[30]); // 801D66B0
  W8(c->r[3]+0x000027BEu,c->r[31]); // 801D66B4
  goto L_801D66C4; // 801D66B8
L_801D66BC:;
  c->r[3]=0u+0x00000003u; // 801D66BC
  goto L_801D66C8; // 801D66C0
L_801D66C4:;
  c->r[3]=0u+0x00000000u; // 801D66C4
L_801D66C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D66C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D66CC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D66D0
  c->lr=c->r[0]; // 801D66D4
  c->r[1]=c->r[1]+0x00000010u; // 801D66D8
  return; // 801D66DC
}

// btm_dev_timeout
void f_801D66E0(Ctx* __restrict c) {
  trace_call(0x801D66E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D66E0
  c->r[0]=c->lr; // 801D66E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D66E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D66EC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D66F0
  c->r[0]=R32(c->r[3]+0x00000010u); // 801D66F4
  cmpu(c,0,c->r[0],0x00000001u); // 801D66F8
  if (!crb(c,2)) { goto L_801D6930; } // 801D66FC
  c->r[6]=0u+0x80480000u; // 801D6700
  c->r[6]=c->r[6]+0x000034D8u; // 801D6704
  c->r[0]=R8(c->r[6]+0x0000064Eu); // 801D6708
  cmps(c,0,(int32_t)c->r[0],2); // 801D670C
  if (crb(c,2)) { goto L_801D6870; } // 801D6710
  if (!crb(c,0)) { goto L_801D6728; } // 801D6714
  cmps(c,0,(int32_t)c->r[0],0); // 801D6718
  if (crb(c,2)) { goto L_801D6734; } // 801D671C
  if (!crb(c,0)) { goto L_801D675C; } // 801D6720
  goto L_801D6960; // 801D6724
L_801D6728:;
  cmps(c,0,(int32_t)c->r[0],4); // 801D6728
  if (!crb(c,0)) { goto L_801D6960; } // 801D672C
  goto L_801D68D4; // 801D6730
L_801D6734:;
  c->r[3]=0u+0x00000000u; // 801D6734
  c->r[0]=0u+0x00000005u; // 801D6738
  W8(c->r[6]+0x0000064Eu,c->r[3]); // 801D673C
  c->r[3]=c->r[6]+0x00000574u; // 801D6740
  c->r[4]=0u+0x00000001u; // 801D6744
  c->r[5]=0u+0x00000004u; // 801D6748
  W8(c->r[6]+0x0000064Fu,c->r[0]); // 801D674C
  c->lr=0x801D6754u; f_801CDFE0(c); // 801D6750
  c->lr=0x801D6758u; f_801E1D70(c); // 801D6754
  goto L_801D6960; // 801D6758
L_801D675C:;
  c->r[0]=0u+0x00000004u; // 801D675C
  c->r[3]=0u+0x00000002u; // 801D6760
  W8(c->r[6]+0x0000064Eu,c->r[3]); // 801D6764
  W8(c->r[6]+0x0000064Fu,c->r[0]); // 801D6768
  goto L_801D6784; // 801D676C
  W8(c->r[6]+0x0000064Fu,c->r[0]); // 801D6770
  W8(c->r[6]+0x0000064Eu,c->r[0]); // 801D6774
  c->lr=0x801D677Cu; f_801CDFE0(c); // 801D6778
  c->lr=0x801D6780u; f_801E1D70(c); // 801D677C
  goto L_801D67A8; // 801D6780
L_801D6784:;
  c->r[3]=c->r[6]+0x00000574u; // 801D6784
  c->r[4]=0u+0x00000001u; // 801D6788
  c->r[5]=0u+0x00000001u; // 801D678C
  c->lr=0x801D6794u; f_801CDFE0(c); // 801D6790
  c->r[3]=0u+0x00000002u; // 801D6794
  c->lr=0x801D679Cu; f_801CAE20(c); // 801D6798
  cmps(c,0,(int32_t)c->r[3],0); // 801D679C
  if (crb(c,2)) { goto L_801D67A8; } // 801D67A0
  c->lr=0x801D67A8u; f_801E28E8(c); // 801D67A4
L_801D67A8:;
  c->r[31]=0u+0x80480000u; // 801D67A8
  c->r[5]=0u+0x00000003u; // 801D67AC
  c->r[31]=c->r[31]+0x000034D8u; // 801D67B0
  c->r[3]=c->r[31]+0x00000648u; // 801D67B4
  c->r[4]=c->r[3]|c->r[3]; // 801D67B8
  c->lr=0x801D67C0u; f_80004000(c); // 801D67BC
  c->r[0]=R8(c->r[31]+0x0000064Eu); // 801D67C0
  cmps(c,0,(int32_t)c->r[0],0); // 801D67C4
  if (crb(c,2)) { goto L_801D67EC; } // 801D67C8
  cmpu(c,0,c->r[0],0x00000001u); // 801D67CC
  if (crb(c,2)) { goto L_801D67EC; } // 801D67D0
  c->r[3]=0u+0x00000002u; // 801D67D4
  c->lr=0x801D67DCu; f_801CAE20(c); // 801D67D8
  cmps(c,0,(int32_t)c->r[3],0); // 801D67DC
  if (crb(c,2)) { goto L_801D67EC; } // 801D67E0
  c->r[4]=c->r[31]+0x00000648u; // 801D67E4
  c->lr=0x801D67ECu; f_801E25E4(c); // 801D67E8
L_801D67EC:;
  c->r[0]=0u+0x80480000u; // 801D67EC
  c->r[31]=addc(c,c->r[0],0x000034D8u,0); cr0(c,c->r[31]); // 801D67F0
  if (crb(c,2)) { goto L_801D6854; } // 801D67F4
  c->r[0]=R8(c->r[31]+0x0000064Eu); // 801D67F8
  cmps(c,0,(int32_t)c->r[0],0); // 801D67FC
  if (crb(c,2)) { goto L_801D6854; } // 801D6800
  cmpu(c,0,c->r[0],0x00000001u); // 801D6804
  if (crb(c,2)) { goto L_801D6854; } // 801D6808
  c->r[3]=0u+0x00000002u; // 801D680C
  c->lr=0x801D6814u; f_801CAE20(c); // 801D6810
  cmps(c,0,(int32_t)c->r[3],0); // 801D6814
  c->r[30]=c->r[3]|c->r[3]; // 801D6818
  if (crb(c,2)) { goto L_801D6854; } // 801D681C
  cmpu(c,0,c->r[31],c->r[31]); // 801D6820
  if (crb(c,2)) { goto L_801D6848; } // 801D6824
  c->r[3]=c->r[31]|c->r[31]; // 801D6828
  c->r[4]=0u+0x00000000u; // 801D682C
  c->r[5]=0u+0x00000020u; // 801D6830
  c->lr=0x801D6838u; f_80004350(c); // 801D6834
  c->r[3]=c->r[31]|c->r[31]; // 801D6838
  c->r[4]=c->r[31]|c->r[31]; // 801D683C
  c->r[5]=0u+0x0000001Fu; // 801D6840
  c->lr=0x801D6848u; f_800CA310(c); // 801D6844
L_801D6848:;
  c->r[3]=c->r[30]|c->r[30]; // 801D6848
  c->r[4]=c->r[31]|c->r[31]; // 801D684C
  c->lr=0x801D6854u; f_801E22CC(c); // 801D6850
L_801D6854:;
  c->r[5]=0u+0x80480000u; // 801D6854
  c->r[5]=c->r[5]+0x000034D8u; // 801D6858
  c->r[3]=R8(c->r[5]+0x00000020u); // 801D685C
  c->r[4]=c->r[5]+0x00000022u; // 801D6860
  c->r[5]=R8(c->r[5]+0x00000021u); // 801D6864
  c->lr=0x801D686Cu; f_801DB4D8(c); // 801D6868
  goto L_801D6960; // 801D686C
L_801D6870:;
  c->r[3]=R8(c->r[6]+0x0000064Fu); // 801D6870
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801D6874
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D6878
  W8(c->r[6]+0x0000064Fu,c->r[3]); // 801D687C
  if (!crb(c,2)) { goto L_801D68AC; } // 801D6880
  c->r[3]=0u+0x00000000u; // 801D6884
  c->r[0]=0u+0x00000005u; // 801D6888
  W8(c->r[6]+0x0000064Eu,c->r[3]); // 801D688C
  c->r[3]=c->r[6]+0x00000574u; // 801D6890
  c->r[4]=0u+0x00000001u; // 801D6894
  c->r[5]=0u+0x00000004u; // 801D6898
  W8(c->r[6]+0x0000064Fu,c->r[0]); // 801D689C
  c->lr=0x801D68A4u; f_801CDFE0(c); // 801D68A0
  c->lr=0x801D68A8u; f_801E1D70(c); // 801D68A4
  goto L_801D6960; // 801D68A8
L_801D68AC:;
  c->r[3]=c->r[6]+0x00000574u; // 801D68AC
  c->r[4]=0u+0x00000001u; // 801D68B0
  c->r[5]=0u+0x00000001u; // 801D68B4
  c->lr=0x801D68BCu; f_801CDFE0(c); // 801D68B8
  c->r[3]=0u+0x00000002u; // 801D68BC
  c->lr=0x801D68C4u; f_801CAE20(c); // 801D68C0
  cmps(c,0,(int32_t)c->r[3],0); // 801D68C4
  if (crb(c,2)) { goto L_801D6960; } // 801D68C8
  c->lr=0x801D68D0u; f_801E28E8(c); // 801D68CC
  goto L_801D6960; // 801D68D0
L_801D68D4:;
  c->r[3]=R8(c->r[6]+0x0000064Fu); // 801D68D4
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801D68D8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D68DC
  W8(c->r[6]+0x0000064Fu,c->r[3]); // 801D68E0
  if (!crb(c,2)) { goto L_801D6910; } // 801D68E4
  c->r[3]=0u+0x00000000u; // 801D68E8
  c->r[0]=0u+0x00000005u; // 801D68EC
  W8(c->r[6]+0x0000064Eu,c->r[3]); // 801D68F0
  c->r[3]=c->r[6]+0x00000574u; // 801D68F4
  c->r[4]=0u+0x00000001u; // 801D68F8
  c->r[5]=0u+0x00000004u; // 801D68FC
  W8(c->r[6]+0x0000064Fu,c->r[0]); // 801D6900
  c->lr=0x801D6908u; f_801CDFE0(c); // 801D6904
  c->lr=0x801D690Cu; f_801E1D70(c); // 801D6908
  goto L_801D6960; // 801D690C
L_801D6910:;
  c->r[3]=c->r[6]+0x00000574u; // 801D6910
  c->r[4]=0u+0x00000001u; // 801D6914
  c->r[5]=0u+0x00000001u; // 801D6918
  c->lr=0x801D6920u; f_801CDFE0(c); // 801D691C
  c->lr=0x801D6924u; f_801E282C(c); // 801D6920
  c->lr=0x801D6928u; f_801E2910(c); // 801D6924
  c->lr=0x801D692Cu; f_801D9C34(c); // 801D6928
  goto L_801D6960; // 801D692C
L_801D6930:;
  cmpu(c,0,c->r[0],0x00000002u); // 801D6930
  if (!crb(c,2)) { goto L_801D6960; } // 801D6934
  c->r[3]=0u+0x80480000u; // 801D6938
  c->r[0]=0u+0x00000000u; // 801D693C
  c->r[3]=c->r[3]+0x000034D8u; // 801D6940
  c->r[12]=R32(c->r[3]+0x000005A8u); // 801D6944
  cmps(c,0,(int32_t)c->r[12],0); // 801D6948
  W32(c->r[3]+0x000005A8u,c->r[0]); // 801D694C
  if (crb(c,2)) { goto L_801D6960; } // 801D6950
  c->r[3]=0u+0x00000000u; // 801D6954
  c->ctr=c->r[12]; // 801D6958
  if (true) { c->lr=0x801D6960u; dispatch(c,c->ctr); } // 801D695C
L_801D6960:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D6960
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D6964
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D6968
  c->lr=c->r[0]; // 801D696C
  c->r[1]=c->r[1]+0x00000010u; // 801D6970
  return; // 801D6974
}

// btm_reset_complete
void f_801D6978(Ctx* __restrict c) {
  trace_call(0x801D6978u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6978
  c->r[0]=c->lr; // 801D697C
  c->r[3]=0u+0x80480000u; // 801D6980
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D6984
  c->r[3]=c->r[3]+0x000034D8u; // 801D6988
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D698C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D6990
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801D6994
  cmpu(c,0,c->r[0],0x00000004u); // 801D6998
  if (crb(c,0)) { goto L_801D69B4; } // 801D699C
  c->r[3]=0u+0x000D0000u; // 801D69A0
  c->r[4]=0u+0x803A0000u; // 801D69A4
  c->r[3]=c->r[3]+0x00000003u; // 801D69A8
  c->r[4]=c->r[4]+0xFFFFF440u; // 801D69AC
  c->lr=0x801D69B4u; f_801CD9D0(c); // 801D69B0
L_801D69B4:;
  c->r[31]=0u+0x80480000u; // 801D69B4
  c->r[31]=c->r[31]+0x000034D8u; // 801D69B8
  c->r[12]=R32(c->r[31]+0x00000620u); // 801D69BC
  cmps(c,0,(int32_t)c->r[12],0); // 801D69C0
  if (crb(c,2)) { goto L_801D69E0; } // 801D69C4
  c->r[0]=0u+0x00000000u; // 801D69C8
  c->r[3]=0u+0x00000000u; // 801D69CC
  W32(c->r[31]+0x00000620u,c->r[0]); // 801D69D0
  c->ctr=c->r[12]; // 801D69D4
  if (true) { c->lr=0x801D69DCu; dispatch(c,c->ctr); } // 801D69D8
  goto L_801D6B24; // 801D69DC
L_801D69E0:;
  c->r[0]=R8(c->r[31]+0x0000064Eu); // 801D69E0
  cmps(c,0,(int32_t)c->r[0],0); // 801D69E4
  if (!crb(c,2)) { goto L_801D6B24; } // 801D69E8
  c->lr=0x801D69F0u; f_801EC090(c); // 801D69EC
  c->r[6]=0u+0x00000012u; // 801D69F0
  c->r[5]=0u+0x00000800u; // 801D69F4
  c->r[4]=0u+0x00000000u; // 801D69F8
  c->r[0]=0u+0x00000004u; // 801D69FC
  c->r[3]=0u+0x00000002u; // 801D6A00
  W16(c->r[31]+0x000016A0u,c->r[6]); // 801D6A04
  W16(c->r[31]+0x000016A2u,c->r[5]); // 801D6A08
  W16(c->r[31]+0x000016A4u,c->r[4]); // 801D6A0C
  W16(c->r[31]+0x0000169Cu,c->r[6]); // 801D6A10
  W16(c->r[31]+0x0000169Eu,c->r[5]); // 801D6A14
  W16(c->r[31]+0x000016A6u,c->r[4]); // 801D6A18
  W8(c->r[31]+0x0000064Eu,c->r[3]); // 801D6A1C
  W8(c->r[31]+0x0000064Fu,c->r[0]); // 801D6A20
  goto L_801D6A3C; // 801D6A24
  W8(c->r[31]+0x0000064Eu,c->r[4]); // 801D6A28
  W8(c->r[31]+0x0000064Fu,c->r[0]); // 801D6A2C
  c->lr=0x801D6A34u; f_801CDFE0(c); // 801D6A30
  c->lr=0x801D6A38u; f_801E1D70(c); // 801D6A34
  goto L_801D6A60; // 801D6A38
L_801D6A3C:;
  c->r[3]=c->r[31]+0x00000574u; // 801D6A3C
  c->r[4]=0u+0x00000001u; // 801D6A40
  c->r[5]=0u+0x00000001u; // 801D6A44
  c->lr=0x801D6A4Cu; f_801CDFE0(c); // 801D6A48
  c->r[3]=0u+0x00000002u; // 801D6A4C
  c->lr=0x801D6A54u; f_801CAE20(c); // 801D6A50
  cmps(c,0,(int32_t)c->r[3],0); // 801D6A54
  if (crb(c,2)) { goto L_801D6A60; } // 801D6A58
  c->lr=0x801D6A60u; f_801E28E8(c); // 801D6A5C
L_801D6A60:;
  c->r[31]=0u+0x80480000u; // 801D6A60
  c->r[5]=0u+0x00000003u; // 801D6A64
  c->r[31]=c->r[31]+0x000034D8u; // 801D6A68
  c->r[3]=c->r[31]+0x00000648u; // 801D6A6C
  c->r[4]=c->r[3]|c->r[3]; // 801D6A70
  c->lr=0x801D6A78u; f_80004000(c); // 801D6A74
  c->r[0]=R8(c->r[31]+0x0000064Eu); // 801D6A78
  cmps(c,0,(int32_t)c->r[0],0); // 801D6A7C
  if (crb(c,2)) { goto L_801D6AA4; } // 801D6A80
  cmpu(c,0,c->r[0],0x00000001u); // 801D6A84
  if (crb(c,2)) { goto L_801D6AA4; } // 801D6A88
  c->r[3]=0u+0x00000002u; // 801D6A8C
  c->lr=0x801D6A94u; f_801CAE20(c); // 801D6A90
  cmps(c,0,(int32_t)c->r[3],0); // 801D6A94
  if (crb(c,2)) { goto L_801D6AA4; } // 801D6A98
  c->r[4]=c->r[31]+0x00000648u; // 801D6A9C
  c->lr=0x801D6AA4u; f_801E25E4(c); // 801D6AA0
L_801D6AA4:;
  c->r[0]=0u+0x80480000u; // 801D6AA4
  c->r[31]=addc(c,c->r[0],0x000034D8u,0); cr0(c,c->r[31]); // 801D6AA8
  if (crb(c,2)) { goto L_801D6B0C; } // 801D6AAC
  c->r[0]=R8(c->r[31]+0x0000064Eu); // 801D6AB0
  cmps(c,0,(int32_t)c->r[0],0); // 801D6AB4
  if (crb(c,2)) { goto L_801D6B0C; } // 801D6AB8
  cmpu(c,0,c->r[0],0x00000001u); // 801D6ABC
  if (crb(c,2)) { goto L_801D6B0C; } // 801D6AC0
  c->r[3]=0u+0x00000002u; // 801D6AC4
  c->lr=0x801D6ACCu; f_801CAE20(c); // 801D6AC8
  cmps(c,0,(int32_t)c->r[3],0); // 801D6ACC
  c->r[30]=c->r[3]|c->r[3]; // 801D6AD0
  if (crb(c,2)) { goto L_801D6B0C; } // 801D6AD4
  cmpu(c,0,c->r[31],c->r[31]); // 801D6AD8
  if (crb(c,2)) { goto L_801D6B00; } // 801D6ADC
  c->r[3]=c->r[31]|c->r[31]; // 801D6AE0
  c->r[4]=0u+0x00000000u; // 801D6AE4
  c->r[5]=0u+0x00000020u; // 801D6AE8
  c->lr=0x801D6AF0u; f_80004350(c); // 801D6AEC
  c->r[3]=c->r[31]|c->r[31]; // 801D6AF0
  c->r[4]=c->r[31]|c->r[31]; // 801D6AF4
  c->r[5]=0u+0x0000001Fu; // 801D6AF8
  c->lr=0x801D6B00u; f_800CA310(c); // 801D6AFC
L_801D6B00:;
  c->r[3]=c->r[30]|c->r[30]; // 801D6B00
  c->r[4]=c->r[31]|c->r[31]; // 801D6B04
  c->lr=0x801D6B0Cu; f_801E22CC(c); // 801D6B08
L_801D6B0C:;
  c->r[5]=0u+0x80480000u; // 801D6B0C
  c->r[5]=c->r[5]+0x000034D8u; // 801D6B10
  c->r[3]=R8(c->r[5]+0x00000020u); // 801D6B14
  c->r[4]=c->r[5]+0x00000022u; // 801D6B18
  c->r[5]=R8(c->r[5]+0x00000021u); // 801D6B1C
  c->lr=0x801D6B24u; f_801DB4D8(c); // 801D6B20
L_801D6B24:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D6B24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D6B28
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D6B2C
  c->lr=c->r[0]; // 801D6B30
  c->r[1]=c->r[1]+0x00000010u; // 801D6B34
  return; // 801D6B38
}

// btm_read_hci_buf_size_complete
void f_801D6B3C(Ctx* __restrict c) {
  trace_call(0x801D6B3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6B3C
  c->r[0]=c->lr; // 801D6B40
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D6B44
  c->r[0]=R8(c->r[3]+0x00000000u); // 801D6B48
  cmps(c,0,(int32_t)c->r[0],0); // 801D6B4C
  if (!crb(c,2)) { goto L_801D6BA8; } // 801D6B50
  c->r[0]=R8(c->r[3]+0x00000002u); // 801D6B54
  c->r[6]=0u+0x80480000u; // 801D6B58
  c->r[4]=R8(c->r[3]+0x00000001u); // 801D6B5C
  c->r[6]=c->r[6]+0x00002FB0u; // 801D6B60
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801D6B64
  c->r[0]=c->r[4]+c->r[0]; // 801D6B68
  W16(c->r[6]+0x0000007Cu,c->r[0]); // 801D6B6C
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801D6B70
  c->r[0]=c->r[4]+0x00000004u; // 801D6B74
  c->r[4]=R8(c->r[3]+0x00000005u); // 801D6B78
  c->r[5]=R8(c->r[3]+0x00000004u); // 801D6B7C
  c->r[3]=rotl(c->r[4],8)&0xFFFFFF00u; // 801D6B80
  c->r[3]=c->r[5]+c->r[3]; // 801D6B84
  W16(c->r[6]+0x0000007Eu,c->r[0]); // 801D6B88
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 801D6B8C
  c->lr=0x801D6B94u; f_801E910C(c); // 801D6B90
  c->r[3]=0u+0x0000069Bu; // 801D6B94
  c->r[4]=0u+0x0000001Eu; // 801D6B98
  c->r[5]=0u+0x00000014u; // 801D6B9C
  c->r[6]=0u+0x0000000Au; // 801D6BA0
  c->lr=0x801D6BA8u; f_801E266C(c); // 801D6BA4
L_801D6BA8:;
  c->r[3]=0u+0x80480000u; // 801D6BA8
  c->r[0]=0u+0x00000004u; // 801D6BAC
  c->r[3]=c->r[3]+0x000034D8u; // 801D6BB0
  c->r[4]=0u+0x00000003u; // 801D6BB4
  W8(c->r[3]+0x0000064Eu,c->r[4]); // 801D6BB8
  W8(c->r[3]+0x0000064Fu,c->r[0]); // 801D6BBC
  goto L_801D6BD8; // 801D6BC0
  W8(c->r[3]+0x0000064Fu,c->r[0]); // 801D6BC4
  W8(c->r[3]+0x0000064Eu,c->r[0]); // 801D6BC8
  c->lr=0x801D6BD0u; f_801CDFE0(c); // 801D6BCC
  c->lr=0x801D6BD4u; f_801E1D70(c); // 801D6BD0
  goto L_801D6BF4; // 801D6BD4
L_801D6BD8:;
  c->r[3]=c->r[3]+0x00000574u; // 801D6BD8
  c->r[4]=0u+0x00000001u; // 801D6BDC
  c->r[5]=0u+0x00000001u; // 801D6BE0
  c->lr=0x801D6BE8u; f_801CDFE0(c); // 801D6BE4
  c->lr=0x801D6BECu; f_801E282C(c); // 801D6BE8
  c->lr=0x801D6BF0u; f_801E2910(c); // 801D6BEC
  c->lr=0x801D6BF4u; f_801D9C34(c); // 801D6BF0
L_801D6BF4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D6BF4
  c->lr=c->r[0]; // 801D6BF8
  c->r[1]=c->r[1]+0x00000010u; // 801D6BFC
  return; // 801D6C00
}

// btm_read_local_version_complete
void f_801D6C04(Ctx* __restrict c) {
  trace_call(0x801D6C04u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6C04
  c->r[0]=c->lr; // 801D6C08
  c->r[5]=0u+0x80480000u; // 801D6C0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D6C10
  c->r[5]=c->r[5]+0x000034D8u; // 801D6C14
  c->r[0]=R8(c->r[3]+0x00000000u); // 801D6C18
  cmps(c,0,(int32_t)c->r[0],0); // 801D6C1C
  if (!crb(c,2)) { goto L_801D6C70; } // 801D6C20
  c->r[0]=R8(c->r[3]+0x00000001u); // 801D6C24
  W8(c->r[5]+0x00000636u,c->r[0]); // 801D6C28
  c->r[0]=R8(c->r[3]+0x00000003u); // 801D6C2C
  c->r[4]=R8(c->r[3]+0x00000002u); // 801D6C30
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801D6C34
  c->r[0]=c->r[4]+c->r[0]; // 801D6C38
  W16(c->r[5]+0x00000638u,c->r[0]); // 801D6C3C
  c->r[0]=R8(c->r[3]+0x00000004u); // 801D6C40
  W8(c->r[5]+0x0000063Au,c->r[0]); // 801D6C44
  c->r[0]=R8(c->r[3]+0x00000006u); // 801D6C48
  c->r[4]=R8(c->r[3]+0x00000005u); // 801D6C4C
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801D6C50
  c->r[0]=c->r[4]+c->r[0]; // 801D6C54
  W16(c->r[5]+0x0000063Cu,c->r[0]); // 801D6C58
  c->r[0]=R8(c->r[3]+0x00000008u); // 801D6C5C
  c->r[3]=R8(c->r[3]+0x00000007u); // 801D6C60
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801D6C64
  c->r[0]=c->r[3]+c->r[0]; // 801D6C68
  W16(c->r[5]+0x0000063Eu,c->r[0]); // 801D6C6C
L_801D6C70:;
  c->r[3]=0u+0x80480000u; // 801D6C70
  c->r[0]=0u+0x00000004u; // 801D6C74
  c->r[3]=c->r[3]+0x000034D8u; // 801D6C78
  W8(c->r[3]+0x0000064Eu,c->r[0]); // 801D6C7C
  W8(c->r[3]+0x0000064Fu,c->r[0]); // 801D6C80
  goto L_801D6C9C; // 801D6C84
  W8(c->r[3]+0x0000064Fu,c->r[0]); // 801D6C88
  W8(c->r[3]+0x0000064Eu,c->r[0]); // 801D6C8C
  c->lr=0x801D6C94u; f_801CDFE0(c); // 801D6C90
  c->lr=0x801D6C98u; f_801E1D70(c); // 801D6C94
  goto L_801D6CB0; // 801D6C98
L_801D6C9C:;
  c->r[3]=c->r[3]+0x00000574u; // 801D6C9C
  c->r[4]=0u+0x00000001u; // 801D6CA0
  c->r[5]=0u+0x00000001u; // 801D6CA4
  c->lr=0x801D6CACu; f_801CDFE0(c); // 801D6CA8
  c->lr=0x801D6CB0u; f_801E288C(c); // 801D6CAC
L_801D6CB0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D6CB0
  c->lr=c->r[0]; // 801D6CB4
  c->r[1]=c->r[1]+0x00000010u; // 801D6CB8
  return; // 801D6CBC
}

// btm_read_local_features_complete
void f_801D6CC0(Ctx* __restrict c) {
  trace_call(0x801D6CC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D6CC0
  c->r[0]=c->lr; // 801D6CC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D6CC8
  c->r[11]=c->r[1]+0x00000020u; // 801D6CCC
  c->lr=0x801D6CD4u; f_800C2E4C(c); // 801D6CD0
  c->r[31]=0u+0x80480000u; // 801D6CD4
  c->r[30]=0u+0x803A0000u; // 801D6CD8
  c->r[31]=c->r[31]+0x000034D8u; // 801D6CDC
  c->r[0]=0u+0x00000000u; // 801D6CE0
  c->r[28]=R32(c->r[31]+0x0000058Cu); // 801D6CE4
  c->r[30]=c->r[30]+0xFFFFF410u; // 801D6CE8
  W32(c->r[31]+0x0000058Cu,c->r[0]); // 801D6CEC
  c->r[0]=R8(c->r[3]+0x00000000u); // 801D6CF0
  cmps(c,0,(int32_t)c->r[0],0); // 801D6CF4
  if (!crb(c,2)) { goto L_801D71A4; } // 801D6CF8
  c->r[0]=0u+0x00000005u; // 801D6CFC
  c->r[4]=0u+0x00000018u; // 801D6D00
  W8(c->r[31]+0x0000064Eu,c->r[0]); // 801D6D04
  c->r[0]=R8(c->r[3]+0x00000001u); // 801D6D08
  W8(c->r[31]+0x00000640u,c->r[0]); // 801D6D0C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801D6D10
  c->r[0]=R8(c->r[3]+0x00000002u); // 801D6D14
  W8(c->r[31]+0x00000641u,c->r[0]); // 801D6D18
  c->r[0]=R8(c->r[3]+0x00000003u); // 801D6D1C
  W8(c->r[31]+0x00000642u,c->r[0]); // 801D6D20
  c->r[0]=R8(c->r[3]+0x00000004u); // 801D6D24
  W8(c->r[31]+0x00000643u,c->r[0]); // 801D6D28
  c->r[0]=R8(c->r[3]+0x00000005u); // 801D6D2C
  W8(c->r[31]+0x00000644u,c->r[0]); // 801D6D30
  c->r[0]=R8(c->r[3]+0x00000006u); // 801D6D34
  W8(c->r[31]+0x00000645u,c->r[0]); // 801D6D38
  c->r[0]=R8(c->r[3]+0x00000007u); // 801D6D3C
  W8(c->r[31]+0x00000646u,c->r[0]); // 801D6D40
  c->r[0]=R8(c->r[3]+0x00000008u); // 801D6D44
  W8(c->r[31]+0x00000647u,c->r[0]); // 801D6D48
  W16(c->r[31]+0x00000654u,c->r[4]); // 801D6D4C
  if (crb(c,2)) { goto L_801D6D5C; } // 801D6D50
  c->r[0]=c->r[4]|0x00000C00u; // 801D6D54
  W16(c->r[31]+0x00000654u,c->r[0]); // 801D6D58
L_801D6D5C:;
  c->r[0]=R8(c->r[31]+0x00000640u); // 801D6D5C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801D6D60
  if (crb(c,2)) { goto L_801D6D7C; } // 801D6D64
  c->r[3]=0u+0x80480000u; // 801D6D68
  c->r[3]=c->r[3]+0x000034D8u; // 801D6D6C
  c->r[0]=R16(c->r[3]+0x00000654u); // 801D6D70
  c->r[0]=c->r[0]|0x0000C000u; // 801D6D74
  W16(c->r[3]+0x00000654u,c->r[0]); // 801D6D78
L_801D6D7C:;
  c->r[3]=0u+0x80480000u; // 801D6D7C
  c->r[3]=c->r[3]+0x000034D8u; // 801D6D80
  c->r[0]=R8(c->r[3]+0x00000636u); // 801D6D84
  cmpu(c,0,c->r[0],0x00000003u); // 801D6D88
  if (crb(c,0)) { goto L_801D6E1C; } // 801D6D8C
  c->r[0]=R8(c->r[31]+0x00000643u); // 801D6D90
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801D6D94
  if (!crb(c,2)) { goto L_801D6DA8; } // 801D6D98
  c->r[0]=R16(c->r[3]+0x00000654u); // 801D6D9C
  c->r[0]=c->r[0]|0x00001102u; // 801D6DA0
  W16(c->r[3]+0x00000654u,c->r[0]); // 801D6DA4
L_801D6DA8:;
  c->r[0]=R8(c->r[31]+0x00000643u); // 801D6DA8
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801D6DAC
  if (!crb(c,2)) { goto L_801D6DC8; } // 801D6DB0
  c->r[3]=0u+0x80480000u; // 801D6DB4
  c->r[3]=c->r[3]+0x000034D8u; // 801D6DB8
  c->r[0]=R16(c->r[3]+0x00000654u); // 801D6DBC
  c->r[0]=c->r[0]|0x00002204u; // 801D6DC0
  W16(c->r[3]+0x00000654u,c->r[0]); // 801D6DC4
L_801D6DC8:;
  c->r[3]=R8(c->r[31]+0x00000643u); // 801D6DC8
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 801D6DCC
  if (!crb(c,2)) { goto L_801D6DDC; } // 801D6DD0
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 801D6DD4
  if (crb(c,2)) { goto L_801D6E1C; } // 801D6DD8
L_801D6DDC:;
  c->r[0]=R8(c->r[31]+0x00000644u); // 801D6DDC
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801D6DE0
  if (!crb(c,2)) { goto L_801D6DFC; } // 801D6DE4
  c->r[3]=0u+0x80480000u; // 801D6DE8
  c->r[3]=c->r[3]+0x000034D8u; // 801D6DEC
  c->r[0]=R16(c->r[3]+0x00000654u); // 801D6DF0
  c->r[0]=c->r[0]|0x00000300u; // 801D6DF4
  W16(c->r[3]+0x00000654u,c->r[0]); // 801D6DF8
L_801D6DFC:;
  c->r[0]=R8(c->r[31]+0x00000645u); // 801D6DFC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801D6E00
  if (!crb(c,2)) { goto L_801D6E1C; } // 801D6E04
  c->r[3]=0u+0x80480000u; // 801D6E08
  c->r[3]=c->r[3]+0x000034D8u; // 801D6E0C
  c->r[0]=R16(c->r[3]+0x00000654u); // 801D6E10
  c->r[0]=c->r[0]|0x00003000u; // 801D6E14
  W16(c->r[3]+0x00000654u,c->r[0]); // 801D6E18
L_801D6E1C:;
  c->r[4]=0u+0x80480000u; // 801D6E1C
  c->r[4]=c->r[4]+0x000034D8u; // 801D6E20
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801D6E24
  cmpu(c,0,c->r[0],0x00000005u); // 801D6E28
  if (crb(c,0)) { goto L_801D6E44; } // 801D6E2C
  c->r[3]=0u+0x000D0000u; // 801D6E30
  c->r[5]=R16(c->r[4]+0x00000654u); // 801D6E34
  c->r[3]=c->r[3]+0x00000004u; // 801D6E38
  c->r[4]=c->r[30]+0x00000044u; // 801D6E3C
  c->lr=0x801D6E44u; f_801CD9F0(c); // 801D6E40
L_801D6E44:;
  c->r[3]=R8(c->r[31]+0x00000641u); // 801D6E44
  c->r[4]=0u+0x80480000u; // 801D6E48
  c->r[4]=c->r[4]+0x000034D8u; // 801D6E4C
  c->r[5]=0u+0x00000000u; // 801D6E50
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 801D6E54
  W16(c->r[4]+0x00000656u,c->r[5]); // 801D6E58
  W8(c->r[4]+0x00001908u,c->r[5]); // 801D6E5C
  if (crb(c,2)) { goto L_801D6E9C; } // 801D6E60
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 801D6E64
  c->r[0]=0u+0x00000001u; // 801D6E68
  W16(c->r[4]+0x00000656u,c->r[0]); // 801D6E6C
  if (crb(c,2)) { goto L_801D6E7C; } // 801D6E70
  c->r[0]=c->r[0]|0x00000002u; // 801D6E74
  W16(c->r[4]+0x00000656u,c->r[0]); // 801D6E78
L_801D6E7C:;
  c->r[0]=R8(c->r[31]+0x00000641u); // 801D6E7C
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 801D6E80
  if (crb(c,2)) { goto L_801D6E9C; } // 801D6E84
  c->r[3]=0u+0x80480000u; // 801D6E88
  c->r[3]=c->r[3]+0x000034D8u; // 801D6E8C
  c->r[0]=R16(c->r[3]+0x00000656u); // 801D6E90
  c->r[0]=c->r[0]|0x00000004u; // 801D6E94
  W16(c->r[3]+0x00000656u,c->r[0]); // 801D6E98
L_801D6E9C:;
  c->r[0]=R8(c->r[31]+0x00000643u); // 801D6E9C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801D6EA0
  if (crb(c,2)) { goto L_801D6EBC; } // 801D6EA4
  c->r[3]=0u+0x80480000u; // 801D6EA8
  c->r[3]=c->r[3]+0x000034D8u; // 801D6EAC
  c->r[0]=R16(c->r[3]+0x00000656u); // 801D6EB0
  c->r[0]=c->r[0]|0x00000008u; // 801D6EB4
  W16(c->r[3]+0x00000656u,c->r[0]); // 801D6EB8
L_801D6EBC:;
  c->r[0]=R8(c->r[31]+0x00000644u); // 801D6EBC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801D6EC0
  if (crb(c,2)) { goto L_801D6EDC; } // 801D6EC4
  c->r[3]=0u+0x80480000u; // 801D6EC8
  c->r[3]=c->r[3]+0x000034D8u; // 801D6ECC
  c->r[0]=R16(c->r[3]+0x00000656u); // 801D6ED0
  c->r[0]=c->r[0]|0x00000010u; // 801D6ED4
  W16(c->r[3]+0x00000656u,c->r[0]); // 801D6ED8
L_801D6EDC:;
  c->r[0]=R8(c->r[31]+0x00000644u); // 801D6EDC
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801D6EE0
  if (crb(c,2)) { goto L_801D6EFC; } // 801D6EE4
  c->r[3]=0u+0x80480000u; // 801D6EE8
  c->r[3]=c->r[3]+0x000034D8u; // 801D6EEC
  c->r[0]=R16(c->r[3]+0x00000656u); // 801D6EF0
  c->r[0]=c->r[0]|0x00000020u; // 801D6EF4
  W16(c->r[3]+0x00000656u,c->r[0]); // 801D6EF8
L_801D6EFC:;
  c->r[4]=0u+0x80480000u; // 801D6EFC
  c->r[4]=c->r[4]+0x000034D8u; // 801D6F00
  c->r[3]=R16(c->r[4]+0x00000656u); // 801D6F04
  c->r[0]=rotl(c->r[3],0)&0x00000038u; cr0(c,c->r[0]); // 801D6F08
  if (crb(c,2)) { goto L_801D6F80; } // 801D6F0C
  c->r[5]=R8(c->r[31]+0x00000645u); // 801D6F10
  c->r[0]=0u+0x00000001u; // 801D6F14
  W8(c->r[4]+0x00001908u,c->r[0]); // 801D6F18
  c->r[0]=rotl(c->r[5],0)&0x00000020u; cr0(c,c->r[0]); // 801D6F1C
  if (crb(c,2)) { goto L_801D6F38; } // 801D6F20
  c->r[0]=rotl(c->r[5],0)&0x00000080u; cr0(c,c->r[0]); // 801D6F24
  if (!crb(c,2)) { goto L_801D6F40; } // 801D6F28
  c->r[0]=c->r[3]|0x00000100u; // 801D6F2C
  W16(c->r[4]+0x00000656u,c->r[0]); // 801D6F30
  goto L_801D6F40; // 801D6F34
L_801D6F38:;
  c->r[0]=c->r[3]|0x00000140u; // 801D6F38
  W16(c->r[4]+0x00000656u,c->r[0]); // 801D6F3C
L_801D6F40:;
  c->r[3]=R8(c->r[31]+0x00000645u); // 801D6F40
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 801D6F44
  if (crb(c,2)) { goto L_801D6F6C; } // 801D6F48
  c->r[0]=rotl(c->r[3],0)&0x00000080u; cr0(c,c->r[0]); // 801D6F4C
  if (!crb(c,2)) { goto L_801D6F80; } // 801D6F50
  c->r[3]=0u+0x80480000u; // 801D6F54
  c->r[3]=c->r[3]+0x000034D8u; // 801D6F58
  c->r[0]=R16(c->r[3]+0x00000656u); // 801D6F5C
  c->r[0]=c->r[0]|0x00000200u; // 801D6F60
  W16(c->r[3]+0x00000656u,c->r[0]); // 801D6F64
  goto L_801D6F80; // 801D6F68
L_801D6F6C:;
  c->r[3]=0u+0x80480000u; // 801D6F6C
  c->r[3]=c->r[3]+0x000034D8u; // 801D6F70
  c->r[0]=R16(c->r[3]+0x00000656u); // 801D6F74
  c->r[0]=c->r[0]|0x00000280u; // 801D6F78
  W16(c->r[3]+0x00000656u,c->r[0]); // 801D6F7C
L_801D6F80:;
  c->r[4]=0u+0x80480000u; // 801D6F80
  c->r[4]=c->r[4]+0x000034D8u; // 801D6F84
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801D6F88
  cmpu(c,0,c->r[0],0x00000005u); // 801D6F8C
  if (crb(c,0)) { goto L_801D6FA8; } // 801D6F90
  c->r[3]=0u+0x000D0000u; // 801D6F94
  c->r[5]=R16(c->r[4]+0x00000656u); // 801D6F98
  c->r[3]=c->r[3]+0x00000004u; // 801D6F9C
  c->r[4]=c->r[30]+0x00000070u; // 801D6FA0
  c->lr=0x801D6FA8u; f_801CD9F0(c); // 801D6FA4
L_801D6FA8:;
  c->r[0]=R8(c->r[31]+0x00000640u); // 801D6FA8
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 801D6FAC
  if (crb(c,2)) { goto L_801D6FCC; } // 801D6FB0
  c->r[3]=0u+0x80480000u; // 801D6FB4
  c->r[3]=c->r[3]+0x000034D8u; // 801D6FB8
  c->r[0]=R16(c->r[3]+0x000004C4u); // 801D6FBC
  c->r[0]=c->r[0]|0x00000001u; // 801D6FC0
  W16(c->r[3]+0x000004C4u,c->r[0]); // 801D6FC4
  goto L_801D6FE0; // 801D6FC8
L_801D6FCC:;
  c->r[3]=0u+0x80480000u; // 801D6FCC
  c->r[3]=c->r[3]+0x000034D8u; // 801D6FD0
  c->r[0]=R16(c->r[3]+0x000004C4u); // 801D6FD4
  c->r[0]=rotl(c->r[0],0)&0x0000FFFEu; // 801D6FD8
  W16(c->r[3]+0x000004C4u,c->r[0]); // 801D6FDC
L_801D6FE0:;
  c->r[0]=R8(c->r[31]+0x00000640u); // 801D6FE0
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801D6FE4
  if (crb(c,2)) { goto L_801D7004; } // 801D6FE8
  c->r[3]=0u+0x80480000u; // 801D6FEC
  c->r[3]=c->r[3]+0x000034D8u; // 801D6FF0
  c->r[0]=R16(c->r[3]+0x000004C4u); // 801D6FF4
  c->r[0]=c->r[0]|0x00000002u; // 801D6FF8
  W16(c->r[3]+0x000004C4u,c->r[0]); // 801D6FFC
  goto L_801D7018; // 801D7000
L_801D7004:;
  c->r[3]=0u+0x80480000u; // 801D7004
  c->r[3]=c->r[3]+0x000034D8u; // 801D7008
  c->r[0]=R16(c->r[3]+0x000004C4u); // 801D700C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 801D7010
  W16(c->r[3]+0x000004C4u,c->r[0]); // 801D7014
L_801D7018:;
  c->r[0]=R8(c->r[31]+0x00000640u); // 801D7018
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801D701C
  if (crb(c,2)) { goto L_801D703C; } // 801D7020
  c->r[3]=0u+0x80480000u; // 801D7024
  c->r[3]=c->r[3]+0x000034D8u; // 801D7028
  c->r[0]=R16(c->r[3]+0x000004C4u); // 801D702C
  c->r[0]=c->r[0]|0x00000004u; // 801D7030
  W16(c->r[3]+0x000004C4u,c->r[0]); // 801D7034
  goto L_801D7050; // 801D7038
L_801D703C:;
  c->r[3]=0u+0x80480000u; // 801D703C
  c->r[3]=c->r[3]+0x000034D8u; // 801D7040
  c->r[0]=R16(c->r[3]+0x000004C4u); // 801D7044
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 801D7048
  W16(c->r[3]+0x000004C4u,c->r[0]); // 801D704C
L_801D7050:;
  c->r[0]=R8(c->r[31]+0x00000641u); // 801D7050
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801D7054
  if (crb(c,2)) { goto L_801D7074; } // 801D7058
  c->r[3]=0u+0x80480000u; // 801D705C
  c->r[3]=c->r[3]+0x000034D8u; // 801D7060
  c->r[0]=R16(c->r[3]+0x000004C4u); // 801D7064
  c->r[0]=c->r[0]|0x00000008u; // 801D7068
  W16(c->r[3]+0x000004C4u,c->r[0]); // 801D706C
  goto L_801D7088; // 801D7070
L_801D7074:;
  c->r[3]=0u+0x80480000u; // 801D7074
  c->r[3]=c->r[3]+0x000034D8u; // 801D7078
  c->r[0]=R16(c->r[3]+0x000004C4u); // 801D707C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 801D7080
  W16(c->r[3]+0x000004C4u,c->r[0]); // 801D7084
L_801D7088:;
  c->lr=0x801D708Cu; f_801DC664(c); // 801D7088
  c->r[4]=0u+0x80480000u; // 801D708C
  c->r[4]=c->r[4]+0x000034D8u; // 801D7090
  c->r[29]=R8(c->r[4]+0x000027BEu); // 801D7094
  cmpu(c,0,c->r[29],0x000000FFu); // 801D7098
  if (crb(c,2)) { goto L_801D7148; } // 801D709C
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801D70A0
  c->r[3]=0u+0x000000FFu; // 801D70A4
  c->r[27]=R8(c->r[4]+0x000027BDu); // 801D70A8
  cmpu(c,0,c->r[0],0x00000003u); // 801D70AC
  W8(c->r[4]+0x000027BEu,c->r[3]); // 801D70B0
  W8(c->r[4]+0x000027BDu,c->r[3]); // 801D70B4
  if (crb(c,0)) { goto L_801D70DC; } // 801D70B8
  c->r[3]=0u+0x000D0000u; // 801D70BC
  c->r[5]=c->r[27]|c->r[27]; // 801D70C0
  c->r[7]=c->r[29]|c->r[29]; // 801D70C4
  c->r[4]=c->r[30]+0x00000000u; // 801D70C8
  c->r[3]=c->r[3]+0x00000002u; // 801D70CC
  c->r[6]=0u+0x000000FFu; // 801D70D0
  c->r[8]=0u+0x000000FFu; // 801D70D4
  c->lr=0x801D70DCu; f_801CDA50(c); // 801D70D8
L_801D70DC:;
  c->r[3]=0u+0x80480000u; // 801D70DC
  c->r[3]=c->r[3]+0x000034D8u; // 801D70E0
  c->r[4]=R8(c->r[3]+0x00000645u); // 801D70E4
  c->r[0]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[0]); // 801D70E8
  if (!crb(c,2)) { goto L_801D7104; } // 801D70EC
  c->r[0]=R8(c->r[3]+0x00000644u); // 801D70F0
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801D70F4
  if (!crb(c,2)) { goto L_801D7104; } // 801D70F8
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 801D70FC
  if (crb(c,2)) { goto L_801D7148; } // 801D7100
L_801D7104:;
  c->r[3]=0u+0x80480000u; // 801D7104
  c->r[3]=c->r[3]+0x000034D8u; // 801D7108
  c->r[0]=R8(c->r[3]+0x000027BDu); // 801D710C
  cmpu(c,0,c->r[0],c->r[27]); // 801D7110
  if (!crb(c,2)) { goto L_801D7124; } // 801D7114
  c->r[0]=R8(c->r[3]+0x000027BEu); // 801D7118
  cmpu(c,0,c->r[0],c->r[29]); // 801D711C
  if (crb(c,2)) { goto L_801D7148; } // 801D7120
L_801D7124:;
  c->r[3]=c->r[27]|c->r[27]; // 801D7124
  c->r[4]=c->r[29]|c->r[29]; // 801D7128
  c->lr=0x801D7130u; f_801E2A64(c); // 801D712C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D7130
  if (crb(c,2)) { goto L_801D7148; } // 801D7134
  c->r[3]=0u+0x80480000u; // 801D7138
  c->r[3]=c->r[3]+0x000034D8u; // 801D713C
  W8(c->r[3]+0x000027BDu,c->r[27]); // 801D7140
  W8(c->r[3]+0x000027BEu,c->r[29]); // 801D7144
L_801D7148:;
  c->r[0]=R8(c->r[31]+0x00000643u); // 801D7148
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801D714C
  if (crb(c,2)) { goto L_801D715C; } // 801D7150
  c->r[3]=0u+0x00000001u; // 801D7154
  c->lr=0x801D715Cu; f_801D81E0(c); // 801D7158
L_801D715C:;
  c->r[3]=0u+0x00000001u; // 801D715C
  c->lr=0x801D7164u; f_801D8130(c); // 801D7160
  c->r[3]=0u+0x00000001u; // 801D7164
  c->lr=0x801D716Cu; f_801D8080(c); // 801D7168
  c->r[3]=0u+0x80480000u; // 801D716C
  c->r[3]=c->r[3]+0x000034D8u; // 801D7170
  c->r[12]=R32(c->r[3]+0x00000568u); // 801D7174
  cmps(c,0,(int32_t)c->r[12],0); // 801D7178
  if (crb(c,2)) { goto L_801D718C; } // 801D717C
  c->r[3]=0u+0x00000000u; // 801D7180
  c->ctr=c->r[12]; // 801D7184
  if (true) { c->lr=0x801D718Cu; dispatch(c,c->ctr); } // 801D7188
L_801D718C:;
  cmps(c,0,(int32_t)c->r[28],0); // 801D718C
  if (crb(c,2)) { goto L_801D71A4; } // 801D7190
  c->r[12]=c->r[28]|c->r[28]; // 801D7194
  c->r[3]=0u+0x00000000u; // 801D7198
  c->ctr=c->r[12]; // 801D719C
  if (true) { c->lr=0x801D71A4u; dispatch(c,c->ctr); } // 801D71A0
L_801D71A4:;
  c->r[11]=c->r[1]+0x00000020u; // 801D71A4
  c->lr=0x801D71ACu; f_800C2E98(c); // 801D71A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D71AC
  c->lr=c->r[0]; // 801D71B0
  c->r[1]=c->r[1]+0x00000020u; // 801D71B4
  return; // 801D71B8
}

// BTM_SetLocalDeviceName
void f_801D71BC(Ctx* __restrict c) {
  trace_call(0x801D71BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D71BC
  c->r[0]=c->lr; // 801D71C0
  cmps(c,0,(int32_t)c->r[3],0); // 801D71C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D71C8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D71CC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D71D0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D71D4
  c->r[29]=c->r[3]|c->r[3]; // 801D71D8
  if (!crb(c,2)) { goto L_801D71E8; } // 801D71DC
  c->r[3]=0u+0x00000005u; // 801D71E0
  goto L_801D7258; // 801D71E4
L_801D71E8:;
  c->r[30]=0u+0x80480000u; // 801D71E8
  c->r[30]=c->r[30]+0x000034D8u; // 801D71EC
  c->r[0]=R8(c->r[30]+0x0000064Eu); // 801D71F0
  cmpu(c,0,c->r[0],0x00000001u); // 801D71F4
  if (crb(c,1)) { goto L_801D7204; } // 801D71F8
  c->r[3]=0u+0x0000000Cu; // 801D71FC
  goto L_801D7258; // 801D7200
L_801D7204:;
  c->r[3]=0u+0x00000002u; // 801D7204
  c->lr=0x801D720Cu; f_801CAE20(c); // 801D7208
  cmps(c,0,(int32_t)c->r[3],0); // 801D720C
  c->r[31]=c->r[3]|c->r[3]; // 801D7210
  if (crb(c,2)) { goto L_801D7254; } // 801D7214
  cmpu(c,0,c->r[30],c->r[29]); // 801D7218
  if (crb(c,2)) { goto L_801D7240; } // 801D721C
  c->r[3]=c->r[30]|c->r[30]; // 801D7220
  c->r[4]=0u+0x00000000u; // 801D7224
  c->r[5]=0u+0x00000020u; // 801D7228
  c->lr=0x801D7230u; f_80004350(c); // 801D722C
  c->r[3]=c->r[30]|c->r[30]; // 801D7230
  c->r[4]=c->r[29]|c->r[29]; // 801D7234
  c->r[5]=0u+0x0000001Fu; // 801D7238
  c->lr=0x801D7240u; f_800CA310(c); // 801D723C
L_801D7240:;
  c->r[3]=c->r[31]|c->r[31]; // 801D7240
  c->r[4]=c->r[30]|c->r[30]; // 801D7244
  c->lr=0x801D724Cu; f_801E22CC(c); // 801D7248
  c->r[3]=0u+0x00000001u; // 801D724C
  goto L_801D7258; // 801D7250
L_801D7254:;
  c->r[3]=0u+0x00000003u; // 801D7254
L_801D7258:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D7258
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D725C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D7260
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D7264
  c->lr=c->r[0]; // 801D7268
  c->r[1]=c->r[1]+0x00000020u; // 801D726C
  return; // 801D7270
}

// btm_read_local_name_complete
void f_801D7274(Ctx* __restrict c) {
  trace_call(0x801D7274u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7274
  c->r[0]=c->lr; // 801D7278
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D727C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D7280
  c->r[31]=0u+0x80480000u; // 801D7284
  c->r[31]=c->r[31]+0x000034D8u; // 801D7288
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D728C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D7290
  c->r[29]=c->r[3]|c->r[3]; // 801D7294
  c->r[3]=c->r[31]+0x00000590u; // 801D7298
  c->r[30]=R32(c->r[31]+0x000005A8u); // 801D729C
  c->lr=0x801D72A4u; f_801CE050(c); // 801D72A0
  c->r[0]=0u+0x00000000u; // 801D72A4
  cmps(c,0,(int32_t)c->r[30],0); // 801D72A8
  W32(c->r[31]+0x000005A8u,c->r[0]); // 801D72AC
  if (crb(c,2)) { goto L_801D72E4; } // 801D72B0
  c->r[0]=R8(c->r[29]+0x00000000u); // 801D72B4
  cmps(c,0,(int32_t)c->r[0],0); // 801D72B8
  if (!crb(c,2)) { goto L_801D72D4; } // 801D72BC
  c->r[12]=c->r[30]|c->r[30]; // 801D72C0
  c->r[3]=c->r[29]+0x00000001u; // 801D72C4
  c->ctr=c->r[12]; // 801D72C8
  if (true) { c->lr=0x801D72D0u; dispatch(c,c->ctr); } // 801D72CC
  goto L_801D72E4; // 801D72D0
L_801D72D4:;
  c->r[12]=c->r[30]|c->r[30]; // 801D72D4
  c->r[3]=0u+0x00000000u; // 801D72D8
  c->ctr=c->r[12]; // 801D72DC
  if (true) { c->lr=0x801D72E4u; dispatch(c,c->ctr); } // 801D72E0
L_801D72E4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D72E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D72E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D72EC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D72F0
  c->lr=c->r[0]; // 801D72F4
  c->r[1]=c->r[1]+0x00000020u; // 801D72F8
  return; // 801D72FC
}

// BTM_ReadLocalDeviceAddr
void f_801D7300(Ctx* __restrict c) {
  trace_call(0x801D7300u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7300
  c->r[0]=c->lr; // 801D7304
  cmps(c,0,(int32_t)c->r[3],0); // 801D7308
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D730C
  if (crb(c,2)) { goto L_801D732C; } // 801D7310
  c->r[4]=0u+0x80480000u; // 801D7314
  c->r[12]=c->r[3]|c->r[3]; // 801D7318
  c->r[4]=c->r[4]+0x000034D8u; // 801D731C
  c->r[3]=c->r[4]+0x00000630u; // 801D7320
  c->ctr=c->r[12]; // 801D7324
  if (true) { c->lr=0x801D732Cu; dispatch(c,c->ctr); } // 801D7328
L_801D732C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D732C
  c->r[3]=0u+0x00000000u; // 801D7330
  c->lr=c->r[0]; // 801D7334
  c->r[1]=c->r[1]+0x00000010u; // 801D7338
  return; // 801D733C
}

// btm_read_local_addr_complete
void f_801D7340(Ctx* __restrict c) {
  trace_call(0x801D7340u);
  c->r[0]=R8(c->r[3]+0x00000000u); // 801D7340
  cmps(c,0,(int32_t)c->r[0],0); // 801D7344
  if (!crb(c,2)) return; // 801D7348
  c->r[4]=0u+0x80480000u; // 801D734C
  c->r[0]=R8(c->r[3]+0x00000001u); // 801D7350
  c->r[4]=c->r[4]+0x000034D8u; // 801D7354
  W8(c->r[4]+0x00000635u,c->r[0]); // 801D7358
  c->r[0]=R8(c->r[3]+0x00000002u); // 801D735C
  W8(c->r[4]+0x00000634u,c->r[0]); // 801D7360
  c->r[0]=R8(c->r[3]+0x00000003u); // 801D7364
  W8(c->r[4]+0x00000633u,c->r[0]); // 801D7368
  c->r[0]=R8(c->r[3]+0x00000004u); // 801D736C
  W8(c->r[4]+0x00000632u,c->r[0]); // 801D7370
  c->r[0]=R8(c->r[3]+0x00000005u); // 801D7374
  W8(c->r[4]+0x00000631u,c->r[0]); // 801D7378
  c->r[0]=R8(c->r[3]+0x00000006u); // 801D737C
  W8(c->r[4]+0x00000630u,c->r[0]); // 801D7380
  return; // 801D7384
}

// BTM_ReadLocalVersion
void f_801D7388(Ctx* __restrict c) {
  trace_call(0x801D7388u);
  c->r[5]=0u+0x80480000u; // 801D7388
  c->r[5]=c->r[5]+0x000034D8u; // 801D738C
  c->r[0]=R8(c->r[5]+0x0000064Eu); // 801D7390
  cmpu(c,0,c->r[0],0x00000004u); // 801D7394
  if (!crb(c,0)) { goto L_801D73A4; } // 801D7398
  c->r[3]=0u+0x0000000Cu; // 801D739C
  return; // 801D73A0
L_801D73A4:;
  c->r[4]=R16(c->r[5]+0x00000636u); // 801D73A4
  c->r[0]=R16(c->r[5]+0x00000638u); // 801D73A8
  W16(c->r[3]+0x00000000u,c->r[4]); // 801D73AC
  W16(c->r[3]+0x00000002u,c->r[0]); // 801D73B0
  c->r[4]=R16(c->r[5]+0x0000063Au); // 801D73B4
  c->r[0]=R16(c->r[5]+0x0000063Cu); // 801D73B8
  W16(c->r[3]+0x00000004u,c->r[4]); // 801D73BC
  W16(c->r[3]+0x00000006u,c->r[0]); // 801D73C0
  c->r[0]=R16(c->r[5]+0x0000063Eu); // 801D73C4
  W16(c->r[3]+0x00000008u,c->r[0]); // 801D73C8
  c->r[3]=0u+0x00000000u; // 801D73CC
  return; // 801D73D0
}

// BTM_SetDeviceClass
void f_801D73D4(Ctx* __restrict c) {
  trace_call(0x801D73D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D73D4
  c->r[0]=c->lr; // 801D73D8
  c->r[5]=0u+0x00000003u; // 801D73DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D73E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D73E4
  c->r[31]=0u+0x80480000u; // 801D73E8
  c->r[31]=c->r[31]+0x000034D8u; // 801D73EC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D73F0
  c->r[30]=c->r[3]|c->r[3]; // 801D73F4
  c->r[4]=c->r[30]|c->r[30]; // 801D73F8
  c->r[3]=c->r[31]+0x00000648u; // 801D73FC
  c->lr=0x801D7404u; f_80004000(c); // 801D7400
  c->r[0]=R8(c->r[31]+0x0000064Eu); // 801D7404
  cmpu(c,0,c->r[0],0x00000001u); // 801D7408
  if (crb(c,1)) { goto L_801D7418; } // 801D740C
  c->r[3]=0u+0x0000000Cu; // 801D7410
  goto L_801D743C; // 801D7414
L_801D7418:;
  c->r[3]=0u+0x00000002u; // 801D7418
  c->lr=0x801D7420u; f_801CAE20(c); // 801D741C
  cmps(c,0,(int32_t)c->r[3],0); // 801D7420
  if (crb(c,2)) { goto L_801D7438; } // 801D7424
  c->r[4]=c->r[30]|c->r[30]; // 801D7428
  c->lr=0x801D7430u; f_801E25E4(c); // 801D742C
  c->r[3]=0u+0x00000000u; // 801D7430
  goto L_801D743C; // 801D7434
L_801D7438:;
  c->r[3]=0u+0x00000003u; // 801D7438
L_801D743C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D743C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D7440
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D7444
  c->lr=c->r[0]; // 801D7448
  c->r[1]=c->r[1]+0x00000010u; // 801D744C
  return; // 801D7450
}

// BTM_ReadDeviceClass
void f_801D7454(Ctx* __restrict c) {
  trace_call(0x801D7454u);
  c->r[3]=0u+0x80480000u; // 801D7454
  c->r[3]=c->r[3]+0x000034D8u; // 801D7458
  c->r[3]=c->r[3]+0x00000648u; // 801D745C
  return; // 801D7460
}

// BTM_ReadLocalFeatures
void f_801D7464(Ctx* __restrict c) {
  trace_call(0x801D7464u);
  c->r[3]=0u+0x80480000u; // 801D7464
  c->r[3]=c->r[3]+0x000034D8u; // 801D7468
  c->r[3]=c->r[3]+0x00000640u; // 801D746C
  return; // 801D7470
}

// BTM_RegisterForDeviceStatusNotif
void f_801D7474(Ctx* __restrict c) {
  trace_call(0x801D7474u);
  c->r[4]=0u+0x80480000u; // 801D7474
  c->r[0]=c->r[3]|c->r[3]; // 801D7478
  c->r[4]=c->r[4]+0x000034D8u; // 801D747C
  c->r[3]=R32(c->r[4]+0x00000568u); // 801D7480
  W32(c->r[4]+0x00000568u,c->r[0]); // 801D7484
  return; // 801D7488
}

// BTM_VendorSpecificCommand
void f_801D748C(Ctx* __restrict c) {
  trace_call(0x801D748Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D748C
  c->r[0]=c->lr; // 801D7490
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D7494
  c->r[11]=c->r[1]+0x00000020u; // 801D7498
  c->lr=0x801D74A0u; f_800C2E4C(c); // 801D749C
  c->r[7]=0u+0x80480000u; // 801D74A0
  c->r[27]=c->r[3]|c->r[3]; // 801D74A4
  c->r[7]=c->r[7]+0x000034D8u; // 801D74A8
  c->r[28]=c->r[4]|c->r[4]; // 801D74AC
  c->r[0]=R8(c->r[7]+0x000027C0u); // 801D74B0
  c->r[29]=c->r[5]|c->r[5]; // 801D74B4
  c->r[30]=c->r[6]|c->r[6]; // 801D74B8
  cmpu(c,0,c->r[0],0x00000004u); // 801D74BC
  if (crb(c,0)) { goto L_801D74E0; } // 801D74C0
  c->r[3]=0u+0x000D0000u; // 801D74C4
  c->r[4]=0u+0x803A0000u; // 801D74C8
  c->r[5]=c->r[27]|c->r[27]; // 801D74CC
  c->r[6]=c->r[28]|c->r[28]; // 801D74D0
  c->r[3]=c->r[3]+0x00000003u; // 801D74D4
  c->r[4]=c->r[4]+0xFFFFF4ACu; // 801D74D8
  c->lr=0x801D74E0u; f_801CDA10(c); // 801D74DC
L_801D74E0:;
  c->r[31]=0u+0x80480000u; // 801D74E0
  c->r[31]=c->r[31]+0x000034D8u; // 801D74E4
  c->r[0]=R8(c->r[31]+0x00000650u); // 801D74E8
  cmps(c,0,(int32_t)c->r[0],0); // 801D74EC
  if (crb(c,2)) { goto L_801D751C; } // 801D74F0
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801D74F4
  cmpu(c,0,c->r[0],0x00000004u); // 801D74F8
  if (crb(c,0)) { goto L_801D7514; } // 801D74FC
  c->r[3]=0u+0x000D0000u; // 801D7500
  c->r[4]=0u+0x803A0000u; // 801D7504
  c->r[3]=c->r[3]+0x00000003u; // 801D7508
  c->r[4]=c->r[4]+0xFFFFF4ECu; // 801D750C
  c->lr=0x801D7514u; f_801CD9D0(c); // 801D7510
L_801D7514:;
  c->r[3]=0u+0x00000002u; // 801D7514
  goto L_801D7570; // 801D7518
L_801D751C:;
  c->r[0]=c->r[28]+0x0000000Bu; // 801D751C
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801D7520
  c->lr=0x801D7528u; f_801CAC80(c); // 801D7524
  cmps(c,0,(int32_t)c->r[3],0); // 801D7528
  if (crb(c,2)) { goto L_801D756C; } // 801D752C
  cmps(c,0,(int32_t)c->r[30],0); // 801D7530
  W32(c->r[31]+0x0000061Cu,c->r[30]); // 801D7534
  if (crb(c,2)) { goto L_801D7544; } // 801D7538
  c->r[0]=0u+0x00000001u; // 801D753C
  W8(c->r[31]+0x00000650u,c->r[0]); // 801D7540
L_801D7544:;
  c->r[4]=c->r[27]|c->r[27]; // 801D7544
  c->r[5]=c->r[28]|c->r[28]; // 801D7548
  c->r[6]=c->r[29]|c->r[29]; // 801D754C
  c->lr=0x801D7554u; f_801E2F14(c); // 801D7550
  cmps(c,0,(int32_t)c->r[30],0); // 801D7554
  if (crb(c,2)) { goto L_801D7564; } // 801D7558
  c->r[3]=0u+0x00000001u; // 801D755C
  goto L_801D7570; // 801D7560
L_801D7564:;
  c->r[3]=0u+0x00000000u; // 801D7564
  goto L_801D7570; // 801D7568
L_801D756C:;
  c->r[3]=0u+0x00000003u; // 801D756C
L_801D7570:;
  c->r[11]=c->r[1]+0x00000020u; // 801D7570
  c->lr=0x801D7578u; f_800C2E98(c); // 801D7574
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D7578
  c->lr=c->r[0]; // 801D757C
  c->r[1]=c->r[1]+0x00000020u; // 801D7580
  return; // 801D7584
}

// btm_vsc_complete
void f_801D7588(Ctx* __restrict c) {
  trace_call(0x801D7588u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7588
  c->r[0]=c->lr; // 801D758C
  c->r[6]=0u+0x80480000u; // 801D7590
  c->r[7]=c->r[3]|c->r[3]; // 801D7594
  W32(c->r[1]+0x00000124u,c->r[0]); // 801D7598
  c->r[6]=c->r[6]+0x000034D8u; // 801D759C
  c->r[0]=0u+0x00000000u; // 801D75A0
  c->r[3]=c->r[1]+0x0000000Cu; // 801D75A4
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 801D75A8
  c->r[31]=R32(c->r[6]+0x0000061Cu); // 801D75AC
  W8(c->r[6]+0x00000650u,c->r[0]); // 801D75B0
  cmps(c,0,(int32_t)c->r[31],0); // 801D75B4
  W32(c->r[6]+0x0000061Cu,c->r[0]); // 801D75B8
  if (crb(c,2)) { goto L_801D75E0; } // 801D75BC
  W16(c->r[1]+0x00000008u,c->r[4]); // 801D75C0
  c->r[4]=c->r[7]|c->r[7]; // 801D75C4
  W16(c->r[1]+0x0000000Au,c->r[5]); // 801D75C8
  c->lr=0x801D75D0u; f_80004000(c); // 801D75CC
  c->r[12]=c->r[31]|c->r[31]; // 801D75D0
  c->r[3]=c->r[1]+0x00000008u; // 801D75D4
  c->ctr=c->r[12]; // 801D75D8
  if (true) { c->lr=0x801D75E0u; dispatch(c,c->ctr); } // 801D75DC
L_801D75E0:;
  c->r[0]=R32(c->r[1]+0x00000124u); // 801D75E0
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 801D75E4
  c->lr=c->r[0]; // 801D75E8
  c->r[1]=c->r[1]+0x00000120u; // 801D75EC
  return; // 801D75F0
}

// BTM_RegisterForVSEvents
void f_801D75F4(Ctx* __restrict c) {
  trace_call(0x801D75F4u);
  c->r[4]=0u+0x80480000u; // 801D75F4
  c->r[4]=c->r[4]+0x000034D8u; // 801D75F8
  c->r[0]=R32(c->r[4]+0x0000056Cu); // 801D75FC
  cmps(c,0,(int32_t)c->r[0],0); // 801D7600
  if (crb(c,2)) { goto L_801D7618; } // 801D7604
  cmps(c,0,(int32_t)c->r[3],0); // 801D7608
  if (crb(c,2)) { goto L_801D7618; } // 801D760C
  c->r[3]=0u+0x00000002u; // 801D7610
  return; // 801D7614
L_801D7618:;
  c->r[4]=0u+0x80480000u; // 801D7618
  c->r[4]=c->r[4]+0x000034D8u; // 801D761C
  W32(c->r[4]+0x0000056Cu,c->r[3]); // 801D7620
  c->r[3]=0u+0x00000000u; // 801D7624
  return; // 801D7628
}

// btm_vendor_specific_evt
void f_801D762C(Ctx* __restrict c) {
  trace_call(0x801D762Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D762C
  c->r[0]=c->lr; // 801D7630
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D7634
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D7638
  c->r[31]=0u+0x80480000u; // 801D763C
  c->r[31]=c->r[31]+0x000034D8u; // 801D7640
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D7644
  c->r[30]=c->r[4]|c->r[4]; // 801D7648
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D764C
  c->r[29]=c->r[3]|c->r[3]; // 801D7650
  c->r[0]=R16(c->r[31]+0x0000063Cu); // 801D7654
  cmpu(c,0,c->r[0],0x00000012u); // 801D7658
  if (crb(c,2)) { goto L_801D7680; } // 801D765C
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801D7660
  cmpu(c,0,c->r[0],0x00000004u); // 801D7664
  if (crb(c,0)) { goto L_801D7680; } // 801D7668
  c->r[3]=0u+0x000D0000u; // 801D766C
  c->r[4]=0u+0x803A0000u; // 801D7670
  c->r[3]=c->r[3]+0x00000003u; // 801D7674
  c->r[4]=c->r[4]+0xFFFFF530u; // 801D7678
  c->lr=0x801D7680u; f_801CD9D0(c); // 801D767C
L_801D7680:;
  c->r[12]=R32(c->r[31]+0x0000056Cu); // 801D7680
  c->r[0]=0u+0x00000000u; // 801D7684
  W32(c->r[31]+0x0000061Cu,c->r[0]); // 801D7688
  cmps(c,0,(int32_t)c->r[12],0); // 801D768C
  W8(c->r[31]+0x00000650u,c->r[0]); // 801D7690
  if (crb(c,2)) { goto L_801D76A8; } // 801D7694
  c->r[3]=c->r[30]|c->r[30]; // 801D7698
  c->r[4]=c->r[29]|c->r[29]; // 801D769C
  c->ctr=c->r[12]; // 801D76A0
  if (true) { c->lr=0x801D76A8u; dispatch(c,c->ctr); } // 801D76A4
L_801D76A8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D76A8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D76AC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D76B0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D76B4
  c->lr=c->r[0]; // 801D76B8
  c->r[1]=c->r[1]+0x00000020u; // 801D76BC
  return; // 801D76C0
}

// BTM_WritePageTimeout
void f_801D76C4(Ctx* __restrict c) {
  trace_call(0x801D76C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D76C4
  c->r[0]=c->lr; // 801D76C8
  c->r[4]=0u+0x80480000u; // 801D76CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D76D0
  c->r[4]=c->r[4]+0x000034D8u; // 801D76D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D76D8
  c->r[31]=c->r[3]|c->r[3]; // 801D76DC
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801D76E0
  cmpu(c,0,c->r[0],0x00000004u); // 801D76E4
  if (crb(c,0)) { goto L_801D7704; } // 801D76E8
  c->r[3]=0u+0x000D0000u; // 801D76EC
  c->r[4]=0u+0x803A0000u; // 801D76F0
  c->r[5]=c->r[31]|c->r[31]; // 801D76F4
  c->r[3]=c->r[3]+0x00000003u; // 801D76F8
  c->r[4]=c->r[4]+0xFFFFF570u; // 801D76FC
  c->lr=0x801D7704u; f_801CD9F0(c); // 801D7700
L_801D7704:;
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)625); // 801D7704
  c->r[3]=0u+0x10620000u; // 801D7708
  c->r[4]=0u+0x80480000u; // 801D770C
  c->r[3]=c->r[3]+0x00004DD3u; // 801D7710
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 801D7714
  c->r[4]=c->r[4]+0x000034D8u; // 801D7718
  c->r[3]=0u+0x00000002u; // 801D771C
  c->r[0]=sraw(c,c->r[0],6); // 801D7720
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 801D7724
  c->r[0]=c->r[0]+c->r[5]; // 801D7728
  W16(c->r[4]+0x0000064Cu,c->r[0]); // 801D772C
  c->lr=0x801D7734u; f_801CAE20(c); // 801D7730
  cmps(c,0,(int32_t)c->r[3],0); // 801D7734
  if (crb(c,2)) { goto L_801D774C; } // 801D7738
  c->r[4]=c->r[31]|c->r[31]; // 801D773C
  c->lr=0x801D7744u; f_801E240C(c); // 801D7740
  c->r[3]=0u+0x00000000u; // 801D7744
  goto L_801D7750; // 801D7748
L_801D774C:;
  c->r[3]=0u+0x00000003u; // 801D774C
L_801D7750:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D7750
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D7754
  c->lr=c->r[0]; // 801D7758
  c->r[1]=c->r[1]+0x00000010u; // 801D775C
  return; // 801D7760
}

// BTM_ReadStoredLinkKey
void f_801D7764(Ctx* __restrict c) {
  trace_call(0x801D7764u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7764
  c->r[0]=c->lr; // 801D7768
  c->r[5]=0u+0x80480000u; // 801D776C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D7770
  c->r[5]=c->r[5]+0x000034D8u; // 801D7774
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D7778
  c->r[31]=0u+0x00000000u; // 801D777C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D7780
  c->r[30]=c->r[4]|c->r[4]; // 801D7784
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D7788
  c->r[29]=c->r[3]|c->r[3]; // 801D778C
  c->r[0]=R32(c->r[5]+0x00000570u); // 801D7790
  cmps(c,0,(int32_t)c->r[0],0); // 801D7794
  if (crb(c,2)) { goto L_801D77A4; } // 801D7798
  c->r[3]=0u+0x00000002u; // 801D779C
  goto L_801D7820; // 801D77A0
L_801D77A4:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D77A4
  if (!crb(c,2)) { goto L_801D77B4; } // 801D77A8
  c->r[31]=0u+0x00000001u; // 801D77AC
  c->r[29]=c->r[1]+0x00000008u; // 801D77B0
L_801D77B4:;
  c->r[3]=0u+0x80480000u; // 801D77B4
  c->r[3]=c->r[3]+0x000034D8u; // 801D77B8
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801D77BC
  cmpu(c,0,c->r[0],0x00000004u); // 801D77C0
  if (crb(c,0)) { goto L_801D77EC; } // 801D77C4
  cmps(c,0,(int32_t)c->r[31],0); // 801D77C8
  c->r[3]=0u+0x000D0000u; // 801D77CC
  c->r[4]=0u+0x803A0000u; // 801D77D0
  c->r[5]=c->r[13]+0xFFFF8F1Cu; // 801D77D4
  c->r[3]=c->r[3]+0x00000003u; // 801D77D8
  c->r[4]=c->r[4]+0xFFFFF5E0u; // 801D77DC
  if (crb(c,2)) { goto L_801D77E8; } // 801D77E0
  c->r[5]=c->r[13]+0xFFFF8F14u; // 801D77E4
L_801D77E8:;
  c->lr=0x801D77ECu; f_801CD9F0(c); // 801D77E8
L_801D77EC:;
  c->r[3]=0u+0x00000002u; // 801D77EC
  c->lr=0x801D77F4u; f_801CAE20(c); // 801D77F0
  cmps(c,0,(int32_t)c->r[3],0); // 801D77F4
  if (crb(c,2)) { goto L_801D781C; } // 801D77F8
  c->r[6]=0u+0x80480000u; // 801D77FC
  c->r[4]=c->r[29]|c->r[29]; // 801D7800
  c->r[6]=c->r[6]+0x000034D8u; // 801D7804
  c->r[5]=c->r[31]|c->r[31]; // 801D7808
  W32(c->r[6]+0x00000570u,c->r[30]); // 801D780C
  c->lr=0x801D7814u; f_801E1FFC(c); // 801D7810
  c->r[3]=0u+0x00000000u; // 801D7814
  goto L_801D7820; // 801D7818
L_801D781C:;
  c->r[3]=0u+0x00000003u; // 801D781C
L_801D7820:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D7820
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D7824
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D7828
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D782C
  c->lr=c->r[0]; // 801D7830
  c->r[1]=c->r[1]+0x00000020u; // 801D7834
  return; // 801D7838
}

// BTM_WriteStoredLinkKey
void f_801D783C(Ctx* __restrict c) {
  trace_call(0x801D783Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D783C
  c->r[0]=c->lr; // 801D7840
  c->r[7]=0u+0x80480000u; // 801D7844
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D7848
  c->r[7]=c->r[7]+0x000034D8u; // 801D784C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D7850
  c->r[31]=c->r[6]|c->r[6]; // 801D7854
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D7858
  c->r[30]=c->r[5]|c->r[5]; // 801D785C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D7860
  c->r[29]=c->r[4]|c->r[4]; // 801D7864
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D7868
  c->r[28]=c->r[3]|c->r[3]; // 801D786C
  c->r[0]=R32(c->r[7]+0x00000570u); // 801D7870
  cmps(c,0,(int32_t)c->r[0],0); // 801D7874
  if (crb(c,2)) { goto L_801D7884; } // 801D7878
  c->r[3]=0u+0x00000002u; // 801D787C
  goto L_801D78EC; // 801D7880
L_801D7884:;
  c->r[0]=R8(c->r[7]+0x000027C0u); // 801D7884
  cmpu(c,0,c->r[0],0x00000004u); // 801D7888
  if (crb(c,0)) { goto L_801D78A8; } // 801D788C
  c->r[3]=0u+0x000D0000u; // 801D7890
  c->r[4]=0u+0x803A0000u; // 801D7894
  c->r[5]=c->r[28]|c->r[28]; // 801D7898
  c->r[3]=c->r[3]+0x00000003u; // 801D789C
  c->r[4]=c->r[4]+0xFFFFF60Cu; // 801D78A0
  c->lr=0x801D78A8u; f_801CD9F0(c); // 801D78A4
L_801D78A8:;
  cmpu(c,0,c->r[28],0x0000000Bu); // 801D78A8
  if (!crb(c,1)) { goto L_801D78B4; } // 801D78AC
  c->r[28]=0u+0x0000000Bu; // 801D78B0
L_801D78B4:;
  c->r[3]=0u+0x00000002u; // 801D78B4
  c->lr=0x801D78BCu; f_801CAE20(c); // 801D78B8
  cmps(c,0,(int32_t)c->r[3],0); // 801D78BC
  if (crb(c,2)) { goto L_801D78E8; } // 801D78C0
  c->r[6]=0u+0x80480000u; // 801D78C4
  c->r[4]=c->r[28]|c->r[28]; // 801D78C8
  c->r[6]=c->r[6]+0x000034D8u; // 801D78CC
  c->r[5]=c->r[29]|c->r[29]; // 801D78D0
  W32(c->r[6]+0x00000570u,c->r[31]); // 801D78D4
  c->r[6]=c->r[30]|c->r[30]; // 801D78D8
  c->lr=0x801D78E0u; f_801E205C(c); // 801D78DC
  c->r[3]=0u+0x00000000u; // 801D78E0
  goto L_801D78EC; // 801D78E4
L_801D78E8:;
  c->r[3]=0u+0x00000003u; // 801D78E8
L_801D78EC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D78EC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D78F0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D78F4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D78F8
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D78FC
  c->lr=c->r[0]; // 801D7900
  c->r[1]=c->r[1]+0x00000020u; // 801D7904
  return; // 801D7908
}

// BTM_DeleteStoredLinkKey
void f_801D790C(Ctx* __restrict c) {
  trace_call(0x801D790Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D790C
  c->r[0]=c->lr; // 801D7910
  c->r[5]=0u+0x80480000u; // 801D7914
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D7918
  c->r[5]=c->r[5]+0x000034D8u; // 801D791C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D7920
  c->r[31]=0u+0x00000000u; // 801D7924
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D7928
  c->r[30]=c->r[4]|c->r[4]; // 801D792C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D7930
  c->r[29]=c->r[3]|c->r[3]; // 801D7934
  c->r[0]=R32(c->r[5]+0x00000570u); // 801D7938
  cmps(c,0,(int32_t)c->r[0],0); // 801D793C
  if (crb(c,2)) { goto L_801D794C; } // 801D7940
  c->r[3]=0u+0x00000002u; // 801D7944
  goto L_801D79C0; // 801D7948
L_801D794C:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D794C
  if (!crb(c,2)) { goto L_801D795C; } // 801D7950
  c->r[31]=0u+0x00000001u; // 801D7954
  c->r[29]=c->r[1]+0x00000008u; // 801D7958
L_801D795C:;
  c->r[3]=0u+0x80480000u; // 801D795C
  c->r[3]=c->r[3]+0x000034D8u; // 801D7960
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801D7964
  cmpu(c,0,c->r[0],0x00000004u); // 801D7968
  if (crb(c,0)) { goto L_801D7994; } // 801D796C
  cmps(c,0,(int32_t)c->r[31],0); // 801D7970
  c->r[3]=0u+0x000D0000u; // 801D7974
  c->r[4]=0u+0x803A0000u; // 801D7978
  c->r[5]=c->r[13]+0xFFFF8F1Cu; // 801D797C
  c->r[3]=c->r[3]+0x00000003u; // 801D7980
  c->r[4]=c->r[4]+0xFFFFF638u; // 801D7984
  if (crb(c,2)) { goto L_801D7990; } // 801D7988
  c->r[5]=c->r[13]+0xFFFF8F14u; // 801D798C
L_801D7990:;
  c->lr=0x801D7994u; f_801CD9F0(c); // 801D7990
L_801D7994:;
  c->r[5]=0u+0x80480000u; // 801D7994
  c->r[3]=c->r[29]|c->r[29]; // 801D7998
  c->r[5]=c->r[5]+0x000034D8u; // 801D799C
  c->r[4]=c->r[31]|c->r[31]; // 801D79A0
  W32(c->r[5]+0x00000570u,c->r[30]); // 801D79A4
  c->lr=0x801D79ACu; f_801E221C(c); // 801D79A8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D79AC
  if (!crb(c,2)) { goto L_801D79BC; } // 801D79B0
  c->r[3]=0u+0x00000003u; // 801D79B4
  goto L_801D79C0; // 801D79B8
L_801D79BC:;
  c->r[3]=0u+0x00000000u; // 801D79BC
L_801D79C0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D79C0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D79C4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D79C8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D79CC
  c->lr=c->r[0]; // 801D79D0
  c->r[1]=c->r[1]+0x00000020u; // 801D79D4
  return; // 801D79D8
}

// btm_read_stored_link_key_complete
void f_801D79DC(Ctx* __restrict c) {
  trace_call(0x801D79DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D79DC
  c->r[0]=c->lr; // 801D79E0
  c->r[4]=0u+0x80480000u; // 801D79E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D79E8
  c->r[4]=c->r[4]+0x000034D8u; // 801D79EC
  c->r[0]=0u+0x00000000u; // 801D79F0
  c->r[12]=R32(c->r[4]+0x00000570u); // 801D79F4
  cmps(c,0,(int32_t)c->r[12],0); // 801D79F8
  W32(c->r[4]+0x00000570u,c->r[0]); // 801D79FC
  if (crb(c,2)) { goto L_801D7A48; } // 801D7A00
  c->r[0]=0u+0x00000002u; // 801D7A04
  W8(c->r[1]+0x00000008u,c->r[0]); // 801D7A08
  c->r[0]=R8(c->r[3]+0x00000000u); // 801D7A0C
  W8(c->r[1]+0x00000009u,c->r[0]); // 801D7A10
  c->r[0]=R8(c->r[3]+0x00000002u); // 801D7A14
  c->r[4]=R8(c->r[3]+0x00000001u); // 801D7A18
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801D7A1C
  c->r[0]=c->r[4]+c->r[0]; // 801D7A20
  W16(c->r[1]+0x0000000Au,c->r[0]); // 801D7A24
  c->r[0]=R8(c->r[3]+0x00000004u); // 801D7A28
  c->r[4]=R8(c->r[3]+0x00000003u); // 801D7A2C
  c->r[3]=c->r[1]+0x00000008u; // 801D7A30
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801D7A34
  c->r[0]=c->r[4]+c->r[0]; // 801D7A38
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 801D7A3C
  c->ctr=c->r[12]; // 801D7A40
  if (true) { c->lr=0x801D7A48u; dispatch(c,c->ctr); } // 801D7A44
L_801D7A48:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D7A48
  c->lr=c->r[0]; // 801D7A4C
  c->r[1]=c->r[1]+0x00000010u; // 801D7A50
  return; // 801D7A54
}

// btm_write_stored_link_key_complete
void f_801D7A58(Ctx* __restrict c) {
  trace_call(0x801D7A58u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7A58
  c->r[0]=c->lr; // 801D7A5C
  c->r[4]=0u+0x80480000u; // 801D7A60
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D7A64
  c->r[4]=c->r[4]+0x000034D8u; // 801D7A68
  c->r[0]=0u+0x00000000u; // 801D7A6C
  c->r[12]=R32(c->r[4]+0x00000570u); // 801D7A70
  cmps(c,0,(int32_t)c->r[12],0); // 801D7A74
  W32(c->r[4]+0x00000570u,c->r[0]); // 801D7A78
  if (crb(c,2)) { goto L_801D7AA4; } // 801D7A7C
  c->r[0]=0u+0x00000003u; // 801D7A80
  W8(c->r[1]+0x00000008u,c->r[0]); // 801D7A84
  c->r[0]=R8(c->r[3]+0x00000000u); // 801D7A88
  W8(c->r[1]+0x00000009u,c->r[0]); // 801D7A8C
  c->r[0]=R8(c->r[3]+0x00000001u); // 801D7A90
  c->r[3]=c->r[1]+0x00000008u; // 801D7A94
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801D7A98
  c->ctr=c->r[12]; // 801D7A9C
  if (true) { c->lr=0x801D7AA4u; dispatch(c,c->ctr); } // 801D7AA0
L_801D7AA4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D7AA4
  c->lr=c->r[0]; // 801D7AA8
  c->r[1]=c->r[1]+0x00000010u; // 801D7AAC
  return; // 801D7AB0
}

// btm_delete_stored_link_key_complete
void f_801D7AB4(Ctx* __restrict c) {
  trace_call(0x801D7AB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7AB4
  c->r[0]=c->lr; // 801D7AB8
  c->r[4]=0u+0x80480000u; // 801D7ABC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D7AC0
  c->r[4]=c->r[4]+0x000034D8u; // 801D7AC4
  c->r[0]=0u+0x00000000u; // 801D7AC8
  c->r[12]=R32(c->r[4]+0x00000570u); // 801D7ACC
  cmps(c,0,(int32_t)c->r[12],0); // 801D7AD0
  W32(c->r[4]+0x00000570u,c->r[0]); // 801D7AD4
  if (crb(c,2)) { goto L_801D7B0C; } // 801D7AD8
  c->r[0]=0u+0x00000004u; // 801D7ADC
  W8(c->r[1]+0x00000008u,c->r[0]); // 801D7AE0
  c->r[0]=R8(c->r[3]+0x00000000u); // 801D7AE4
  W8(c->r[1]+0x00000009u,c->r[0]); // 801D7AE8
  c->r[0]=R8(c->r[3]+0x00000002u); // 801D7AEC
  c->r[4]=R8(c->r[3]+0x00000001u); // 801D7AF0
  c->r[3]=c->r[1]+0x00000008u; // 801D7AF4
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801D7AF8
  c->r[0]=c->r[4]+c->r[0]; // 801D7AFC
  W16(c->r[1]+0x0000000Au,c->r[0]); // 801D7B00
  c->ctr=c->r[12]; // 801D7B04
  if (true) { c->lr=0x801D7B0Cu; dispatch(c,c->ctr); } // 801D7B08
L_801D7B0C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D7B0C
  c->lr=c->r[0]; // 801D7B10
  c->r[1]=c->r[1]+0x00000010u; // 801D7B14
  return; // 801D7B18
}

// btm_return_link_keys_evt
void f_801D7B1C(Ctx* __restrict c) {
  trace_call(0x801D7B1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7B1C
  c->r[0]=c->lr; // 801D7B20
  c->r[4]=0u+0x80480000u; // 801D7B24
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D7B28
  c->r[4]=c->r[4]+0x000034D8u; // 801D7B2C
  c->r[12]=R32(c->r[4]+0x00000570u); // 801D7B30
  cmps(c,0,(int32_t)c->r[12],0); // 801D7B34
  if (crb(c,2)) { goto L_801D7C98; } // 801D7B38
  c->r[5]=c->r[3]+0x00000002u; // 801D7B3C
  c->r[4]=0u+0x00000000u; // 801D7B40
  goto L_801D7C80; // 801D7B44
L_801D7B48:;
  c->r[11]=R8(c->r[5]+0x00000000u); // 801D7B48
  c->r[4]=c->r[4]+0x00000001u; // 801D7B4C
  c->r[10]=R8(c->r[5]+0x00000001u); // 801D7B50
  c->r[9]=R8(c->r[5]+0x00000002u); // 801D7B54
  c->r[8]=R8(c->r[5]+0x00000003u); // 801D7B58
  c->r[7]=R8(c->r[5]+0x00000004u); // 801D7B5C
  c->r[6]=R8(c->r[5]+0x00000005u); // 801D7B60
  c->r[0]=R8(c->r[5]+0x00000006u); // 801D7B64
  W8(c->r[1]+0x00000017u,c->r[0]); // 801D7B68
  c->r[0]=R8(c->r[5]+0x00000007u); // 801D7B6C
  W8(c->r[1]+0x00000016u,c->r[0]); // 801D7B70
  c->r[0]=R8(c->r[5]+0x00000008u); // 801D7B74
  W8(c->r[1]+0x00000015u,c->r[0]); // 801D7B78
  c->r[0]=R8(c->r[5]+0x00000009u); // 801D7B7C
  W8(c->r[1]+0x00000014u,c->r[0]); // 801D7B80
  c->r[0]=R8(c->r[5]+0x0000000Au); // 801D7B84
  W8(c->r[1]+0x00000013u,c->r[0]); // 801D7B88
  c->r[0]=R8(c->r[5]+0x0000000Bu); // 801D7B8C
  W8(c->r[1]+0x00000012u,c->r[0]); // 801D7B90
  c->r[0]=R8(c->r[5]+0x0000000Cu); // 801D7B94
  W8(c->r[1]+0x00000011u,c->r[0]); // 801D7B98
  c->r[0]=R8(c->r[5]+0x0000000Du); // 801D7B9C
  W8(c->r[1]+0x00000010u,c->r[0]); // 801D7BA0
  c->r[0]=R8(c->r[5]+0x0000000Eu); // 801D7BA4
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 801D7BA8
  c->r[0]=R8(c->r[5]+0x0000000Fu); // 801D7BAC
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801D7BB0
  c->r[0]=R8(c->r[5]+0x00000010u); // 801D7BB4
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801D7BB8
  c->r[0]=R8(c->r[5]+0x00000011u); // 801D7BBC
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801D7BC0
  c->r[0]=R8(c->r[5]+0x00000012u); // 801D7BC4
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 801D7BC8
  c->r[0]=R8(c->r[5]+0x00000013u); // 801D7BCC
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801D7BD0
  c->r[0]=R8(c->r[5]+0x00000014u); // 801D7BD4
  W8(c->r[1]+0x00000009u,c->r[0]); // 801D7BD8
  c->r[0]=R8(c->r[5]+0x00000015u); // 801D7BDC
  W8(c->r[1]+0x00000008u,c->r[0]); // 801D7BE0
  W8(c->r[5]+0x00000000u,c->r[6]); // 801D7BE4
  W8(c->r[5]+0x00000001u,c->r[7]); // 801D7BE8
  W8(c->r[5]+0x00000002u,c->r[8]); // 801D7BEC
  W8(c->r[5]+0x00000003u,c->r[9]); // 801D7BF0
  W8(c->r[5]+0x00000004u,c->r[10]); // 801D7BF4
  W8(c->r[5]+0x00000005u,c->r[11]); // 801D7BF8
  c->r[0]=R8(c->r[1]+0x00000008u); // 801D7BFC
  W8(c->r[5]+0x00000006u,c->r[0]); // 801D7C00
  c->r[0]=R8(c->r[1]+0x00000009u); // 801D7C04
  W8(c->r[5]+0x00000007u,c->r[0]); // 801D7C08
  c->r[0]=R8(c->r[1]+0x0000000Au); // 801D7C0C
  W8(c->r[5]+0x00000008u,c->r[0]); // 801D7C10
  c->r[0]=R8(c->r[1]+0x0000000Bu); // 801D7C14
  W8(c->r[5]+0x00000009u,c->r[0]); // 801D7C18
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 801D7C1C
  W8(c->r[5]+0x0000000Au,c->r[0]); // 801D7C20
  c->r[0]=R8(c->r[1]+0x0000000Du); // 801D7C24
  W8(c->r[5]+0x0000000Bu,c->r[0]); // 801D7C28
  c->r[0]=R8(c->r[1]+0x0000000Eu); // 801D7C2C
  W8(c->r[5]+0x0000000Cu,c->r[0]); // 801D7C30
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 801D7C34
  W8(c->r[5]+0x0000000Du,c->r[0]); // 801D7C38
  c->r[0]=R8(c->r[1]+0x00000010u); // 801D7C3C
  W8(c->r[5]+0x0000000Eu,c->r[0]); // 801D7C40
  c->r[0]=R8(c->r[1]+0x00000011u); // 801D7C44
  W8(c->r[5]+0x0000000Fu,c->r[0]); // 801D7C48
  c->r[0]=R8(c->r[1]+0x00000012u); // 801D7C4C
  W8(c->r[5]+0x00000010u,c->r[0]); // 801D7C50
  c->r[0]=R8(c->r[1]+0x00000013u); // 801D7C54
  W8(c->r[5]+0x00000011u,c->r[0]); // 801D7C58
  c->r[0]=R8(c->r[1]+0x00000014u); // 801D7C5C
  W8(c->r[5]+0x00000012u,c->r[0]); // 801D7C60
  c->r[0]=R8(c->r[1]+0x00000015u); // 801D7C64
  W8(c->r[5]+0x00000013u,c->r[0]); // 801D7C68
  c->r[0]=R8(c->r[1]+0x00000016u); // 801D7C6C
  W8(c->r[5]+0x00000014u,c->r[0]); // 801D7C70
  c->r[0]=R8(c->r[1]+0x00000017u); // 801D7C74
  W8(c->r[5]+0x00000015u,c->r[0]); // 801D7C78
  c->r[5]=c->r[5]+0x00000016u; // 801D7C7C
L_801D7C80:;
  c->r[0]=R8(c->r[3]+0x00000001u); // 801D7C80
  c->r[6]=rotl(c->r[4],0)&0x000000FFu; // 801D7C84
  cmpu(c,0,c->r[6],c->r[0]); // 801D7C88
  if (crb(c,0)) { IRQCHK(c); goto L_801D7B48; } // 801D7C8C
  c->ctr=c->r[12]; // 801D7C90
  if (true) { c->lr=0x801D7C98u; dispatch(c,c->ctr); } // 801D7C94
L_801D7C98:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D7C98
  c->lr=c->r[0]; // 801D7C9C
  c->r[1]=c->r[1]+0x00000020u; // 801D7CA0
  return; // 801D7CA4
}

// btm_report_device_status
void f_801D7CA8(Ctx* __restrict c) {
  trace_call(0x801D7CA8u);
  c->r[4]=0u+0x80480000u; // 801D7CA8
  c->r[4]=c->r[4]+0x000034D8u; // 801D7CAC
  c->r[12]=R32(c->r[4]+0x00000568u); // 801D7CB0
  cmps(c,0,(int32_t)c->r[12],0); // 801D7CB4
  if (crb(c,2)) return; // 801D7CB8
  c->ctr=c->r[12]; // 801D7CBC
  if (true) { dispatch(c,c->ctr); return; } // 801D7CC0
}

// fn_801D7CC4
void f_801D7CC4(Ctx* __restrict c) {
  trace_call(0x801D7CC4u);
  return; // 801D7CC4
}

// btm_discovery_db_init
void f_801D7CC8(Ctx* __restrict c) {
  trace_call(0x801D7CC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7CC8
  c->r[0]=c->lr; // 801D7CCC
  c->r[4]=0u+0x00000000u; // 801D7CD0
  c->r[5]=0u+0x00001020u; // 801D7CD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D7CD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D7CDC
  c->r[31]=0u+0x80480000u; // 801D7CE0
  c->r[31]=c->r[31]+0x000034D8u; // 801D7CE4
  c->r[0]=c->r[31]+0x000006D4u; // 801D7CE8
  W32(c->r[31]+0x00001678u,c->r[0]); // 801D7CEC
  c->r[3]=c->r[31]+0x00000658u; // 801D7CF0
  c->lr=0x801D7CF8u; f_80004350(c); // 801D7CF4
  c->r[3]=0u+0x00000001u; // 801D7CF8
  c->r[4]=0u+0x00000002u; // 801D7CFC
  c->r[0]=0u+0x00001002u; // 801D7D00
  W16(c->r[31]+0x00000670u,c->r[3]); // 801D7D04
  c->r[3]=R32(c->r[31]+0x00001678u); // 801D7D08
  c->r[6]=c->r[31]+0x00000674u; // 801D7D0C
  W16(c->r[31]+0x00000674u,c->r[4]); // 801D7D10
  c->r[4]=0u+0x00000FA0u; // 801D7D14
  c->r[5]=0u+0x00000001u; // 801D7D18
  c->r[7]=0u+0x00000000u; // 801D7D1C
  W16(c->r[31]+0x00000678u,c->r[0]); // 801D7D20
  c->r[8]=0u+0x00000000u; // 801D7D24
  c->lr=0x801D7D2Cu; f_801F28EC(c); // 801D7D28
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D7D2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D7D30
  c->lr=c->r[0]; // 801D7D34
  c->r[1]=c->r[1]+0x00000010u; // 801D7D38
  return; // 801D7D3C
}

// btm_discovery_db_reset
void f_801D7D40(Ctx* __restrict c) {
  trace_call(0x801D7D40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7D40
  c->r[0]=c->lr; // 801D7D44
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D7D48
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D7D4C
  c->r[31]=0u+0x80480000u; // 801D7D50
  c->r[31]=c->r[31]+0x000034D8u; // 801D7D54
  c->r[3]=c->r[31]+0x00000658u; // 801D7D58
  c->lr=0x801D7D60u; f_801CE050(c); // 801D7D5C
  c->r[0]=R8(c->r[31]+0x00001674u); // 801D7D60
  cmps(c,0,(int32_t)c->r[0],0); // 801D7D64
  if (crb(c,2)) { goto L_801D7D90; } // 801D7D68
  c->r[12]=R32(c->r[31]+0x000006D0u); // 801D7D6C
  c->r[0]=0u+0x00000000u; // 801D7D70
  W8(c->r[31]+0x00001674u,c->r[0]); // 801D7D74
  cmps(c,0,(int32_t)c->r[12],0); // 801D7D78
  W32(c->r[31]+0x000006D0u,c->r[0]); // 801D7D7C
  if (crb(c,2)) { goto L_801D7D90; } // 801D7D80
  c->r[3]=0u+0x00000000u; // 801D7D84
  c->ctr=c->r[12]; // 801D7D88
  if (true) { c->lr=0x801D7D90u; dispatch(c,c->ctr); } // 801D7D8C
L_801D7D90:;
  c->r[31]=0u+0x80480000u; // 801D7D90
  c->r[4]=0u+0x00000000u; // 801D7D94
  c->r[31]=c->r[31]+0x000034D8u; // 801D7D98
  c->r[5]=0u+0x00001020u; // 801D7D9C
  c->r[0]=c->r[31]+0x000006D4u; // 801D7DA0
  W32(c->r[31]+0x00001678u,c->r[0]); // 801D7DA4
  c->r[3]=c->r[31]+0x00000658u; // 801D7DA8
  c->lr=0x801D7DB0u; f_80004350(c); // 801D7DAC
  c->r[3]=0u+0x00000001u; // 801D7DB0
  c->r[4]=0u+0x00000002u; // 801D7DB4
  c->r[0]=0u+0x00001002u; // 801D7DB8
  W16(c->r[31]+0x00000670u,c->r[3]); // 801D7DBC
  c->r[3]=R32(c->r[31]+0x00001678u); // 801D7DC0
  c->r[6]=c->r[31]+0x00000674u; // 801D7DC4
  W16(c->r[31]+0x00000674u,c->r[4]); // 801D7DC8
  c->r[4]=0u+0x00000FA0u; // 801D7DCC
  c->r[5]=0u+0x00000001u; // 801D7DD0
  c->r[7]=0u+0x00000000u; // 801D7DD4
  W16(c->r[31]+0x00000678u,c->r[0]); // 801D7DD8
  c->r[8]=0u+0x00000000u; // 801D7DDC
  c->lr=0x801D7DE4u; f_801F28EC(c); // 801D7DE0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D7DE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D7DE8
  c->lr=c->r[0]; // 801D7DEC
  c->r[1]=c->r[1]+0x00000010u; // 801D7DF0
  return; // 801D7DF4
}

// btm_discovery_timeout
void f_801D7DF8(Ctx* __restrict c) {
  trace_call(0x801D7DF8u);
  return; // 801D7DF8
}

// BTM_SetDiscoverability
void f_801D7DFC(Ctx* __restrict c) {
  trace_call(0x801D7DFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D7DFC
  c->r[0]=c->lr; // 801D7E00
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D7E04
  c->r[11]=c->r[1]+0x00000030u; // 801D7E08
  c->lr=0x801D7E10u; f_800C2E4C(c); // 801D7E0C
  cmps(c,0,(int32_t)c->r[3],0); // 801D7E10
  c->r[31]=c->r[3]|c->r[3]; // 801D7E14
  c->r[27]=c->r[4]|c->r[4]; // 801D7E18
  c->r[28]=c->r[5]|c->r[5]; // 801D7E1C
  c->r[30]=0u+0x00000000u; // 801D7E20
  if (crb(c,2)) { goto L_801D7E40; } // 801D7E24
  cmpu(c,0,c->r[3],0x00000001u); // 801D7E28
  if (crb(c,2)) { goto L_801D7E40; } // 801D7E2C
  cmpu(c,0,c->r[3],0x00000002u); // 801D7E30
  if (crb(c,2)) { goto L_801D7E40; } // 801D7E34
  c->r[3]=0u+0x00000005u; // 801D7E38
  goto L_801D8068; // 801D7E3C
L_801D7E40:;
  c->r[3]=0u+0x80480000u; // 801D7E40
  c->r[3]=c->r[3]+0x000034D8u; // 801D7E44
  c->r[0]=R8(c->r[3]+0x0000064Eu); // 801D7E48
  cmpu(c,0,c->r[0],0x00000003u); // 801D7E4C
  if (!crb(c,0)) { goto L_801D7E5C; } // 801D7E50
  c->r[3]=0u+0x0000000Cu; // 801D7E54
  goto L_801D8068; // 801D7E58
L_801D7E5C:;
  cmps(c,0,(int32_t)c->r[4],0); // 801D7E5C
  if (!crb(c,2)) { goto L_801D7E68; } // 801D7E60
  c->r[27]=0u+0x00000012u; // 801D7E64
L_801D7E68:;
  cmps(c,0,(int32_t)c->r[5],0); // 801D7E68
  if (!crb(c,2)) { goto L_801D7E74; } // 801D7E6C
  c->r[28]=0u+0x00000800u; // 801D7E70
L_801D7E74:;
  c->r[3]=0u+0x80480000u; // 801D7E74
  c->r[3]=c->r[3]+0x000034D8u; // 801D7E78
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801D7E7C
  cmpu(c,0,c->r[0],0x00000003u); // 801D7E80
  if (crb(c,0)) { goto L_801D7EA8; } // 801D7E84
  c->r[3]=0u+0x000D0000u; // 801D7E88
  c->r[4]=0u+0x803A0000u; // 801D7E8C
  c->r[5]=c->r[31]|c->r[31]; // 801D7E90
  c->r[6]=c->r[27]|c->r[27]; // 801D7E94
  c->r[7]=c->r[28]|c->r[28]; // 801D7E98
  c->r[3]=c->r[3]+0x00000002u; // 801D7E9C
  c->r[4]=c->r[4]+0xFFFFF670u; // 801D7EA0
  c->lr=0x801D7EA8u; f_801CDA30(c); // 801D7EA4
L_801D7EA8:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D7EA8
  if (crb(c,2)) { goto L_801D7EE0; } // 801D7EAC
  cmpu(c,0,c->r[27],0x00000012u); // 801D7EB0
  if (crb(c,0)) { goto L_801D7ED8; } // 801D7EB4
  cmpu(c,0,c->r[27],0x00001000u); // 801D7EB8
  if (crb(c,1)) { goto L_801D7ED8; } // 801D7EBC
  cmpu(c,0,c->r[28],0x00000012u); // 801D7EC0
  if (crb(c,0)) { goto L_801D7ED8; } // 801D7EC4
  cmpu(c,0,c->r[28],0x00001000u); // 801D7EC8
  if (crb(c,1)) { goto L_801D7ED8; } // 801D7ECC
  cmpu(c,0,c->r[27],c->r[28]); // 801D7ED0
  if (!crb(c,1)) { goto L_801D7EE0; } // 801D7ED4
L_801D7ED8:;
  c->r[3]=0u+0x00000005u; // 801D7ED8
  goto L_801D8068; // 801D7EDC
L_801D7EE0:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D7EE0
  if (crb(c,2)) { goto L_801D7F54; } // 801D7EE4
  c->r[3]=0u+0x00000002u; // 801D7EE8
  c->lr=0x801D7EF0u; f_801CAE20(c); // 801D7EEC
  cmps(c,0,(int32_t)c->r[3],0); // 801D7EF0
  c->r[29]=c->r[3]|c->r[3]; // 801D7EF4
  if (crb(c,2)) { goto L_801D7F4C; } // 801D7EF8
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 801D7EFC
  if (crb(c,2)) { goto L_801D7F38; } // 801D7F00
  c->r[3]=c->r[1]+0x0000000Cu; // 801D7F04
  c->r[4]=c->r[2]+0xFFFFB04Cu; // 801D7F08
  c->r[5]=0u+0x00000003u; // 801D7F0C
  c->lr=0x801D7F14u; f_80004000(c); // 801D7F10
  c->r[3]=c->r[1]+0x0000000Fu; // 801D7F14
  c->r[4]=c->r[2]+0xFFFFB048u; // 801D7F18
  c->r[5]=0u+0x00000003u; // 801D7F1C
  c->lr=0x801D7F24u; f_80004000(c); // 801D7F20
  c->r[3]=c->r[29]|c->r[29]; // 801D7F24
  c->r[5]=c->r[1]+0x0000000Cu; // 801D7F28
  c->r[4]=0u+0x00000002u; // 801D7F2C
  c->lr=0x801D7F34u; f_801E27BC(c); // 801D7F30
  goto L_801D7F44; // 801D7F34
L_801D7F38:;
  c->r[4]=0u+0x00000001u; // 801D7F38
  c->r[5]=c->r[2]+0xFFFFB048u; // 801D7F3C
  c->lr=0x801D7F44u; f_801E27BC(c); // 801D7F40
L_801D7F44:;
  c->r[30]=c->r[30]|0x00000001u; // 801D7F44
  goto L_801D7F54; // 801D7F48
L_801D7F4C:;
  c->r[3]=0u+0x00000003u; // 801D7F4C
  goto L_801D8068; // 801D7F50
L_801D7F54:;
  c->r[3]=0u+0x80480000u; // 801D7F54
  c->r[3]=c->r[3]+0x000034D8u; // 801D7F58
  c->r[0]=R16(c->r[3]+0x000016A0u); // 801D7F5C
  cmpu(c,0,c->r[27],c->r[0]); // 801D7F60
  if (!crb(c,2)) { goto L_801D7F74; } // 801D7F64
  c->r[0]=R16(c->r[3]+0x000016A2u); // 801D7F68
  cmpu(c,0,c->r[28],c->r[0]); // 801D7F6C
  if (crb(c,2)) { goto L_801D7FAC; } // 801D7F70
L_801D7F74:;
  c->r[3]=0u+0x00000002u; // 801D7F74
  c->lr=0x801D7F7Cu; f_801CAE20(c); // 801D7F78
  cmps(c,0,(int32_t)c->r[3],0); // 801D7F7C
  if (crb(c,2)) { goto L_801D7FA4; } // 801D7F80
  c->r[6]=0u+0x80480000u; // 801D7F84
  c->r[4]=c->r[28]|c->r[28]; // 801D7F88
  c->r[6]=c->r[6]+0x000034D8u; // 801D7F8C
  c->r[5]=c->r[27]|c->r[27]; // 801D7F90
  W16(c->r[6]+0x000016A0u,c->r[27]); // 801D7F94
  W16(c->r[6]+0x000016A2u,c->r[28]); // 801D7F98
  c->lr=0x801D7FA0u; f_801E24B8(c); // 801D7F9C
  goto L_801D7FAC; // 801D7FA0
L_801D7FA4:;
  c->r[3]=0u+0x00000003u; // 801D7FA4
  goto L_801D8068; // 801D7FA8
L_801D7FAC:;
  c->r[3]=0u+0x00000002u; // 801D7FAC
  c->lr=0x801D7FB4u; f_801CAE20(c); // 801D7FB0
  cmps(c,0,(int32_t)c->r[3],0); // 801D7FB4
  if (crb(c,2)) { goto L_801D7FF0; } // 801D7FB8
  c->r[4]=0u+0x80480000u; // 801D7FBC
  c->r[4]=c->r[4]+0x000034D8u; // 801D7FC0
  c->r[0]=R16(c->r[4]+0x0000169Au); // 801D7FC4
  cmps(c,0,(int32_t)c->r[0],0); // 801D7FC8
  if (crb(c,2)) { goto L_801D7FD8; } // 801D7FCC
  c->r[0]=c->r[30]|0x00000002u; // 801D7FD0
  c->r[30]=rotl(c->r[0],0)&0x000000FFu; // 801D7FD4
L_801D7FD8:;
  c->r[5]=0u+0x80480000u; // 801D7FD8
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 801D7FDC
  c->r[5]=c->r[5]+0x000034D8u; // 801D7FE0
  W16(c->r[5]+0x00001698u,c->r[31]); // 801D7FE4
  c->lr=0x801D7FECu; f_801E2444(c); // 801D7FE8
  goto L_801D7FF8; // 801D7FEC
L_801D7FF0:;
  c->r[3]=0u+0x00000003u; // 801D7FF0
  goto L_801D8068; // 801D7FF4
L_801D7FF8:;
  c->lr=0x801D7FFCu; f_801D7454(c); // 801D7FF8
  c->r[4]=R8(c->r[3]+0x00000000u); // 801D7FFC
  c->r[6]=rotl(c->r[31],0)&0x00000001u; // 801D8000
  c->r[5]=R8(c->r[3]+0x00000001u); // 801D8004
  c->r[4]=rotl(c->r[4],8)&0x0000FF00u; // 801D8008
  c->r[0]=rotl(c->r[5],0)&0x000000E0u; // 801D800C
  c->r[4]=c->r[4]+c->r[0]; // 801D8010
  c->r[0]=rotl(c->r[4],27)&0x00000001u; // 801D8014
  c->r[0]=c->r[6]^c->r[0]; cr0(c,c->r[0]); // 801D8018
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 801D801C
  if (crb(c,2)) { goto L_801D8064; } // 801D8020
  c->r[3]=R8(c->r[3]+0x00000002u); // 801D8024
  cmps(c,0,(int32_t)c->r[6],0); // 801D8028
  c->r[0]=rotl(c->r[4],0)&0xFFFFFFDFu; // 801D802C
  c->r[5]=rotl(c->r[5],0)&0x0000001Fu; // 801D8030
  c->r[6]=rotl(c->r[3],0)&0x000000FCu; // 801D8034
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801D8038
  if (crb(c,2)) { goto L_801D8044; } // 801D803C
  c->r[0]=c->r[4]|0x00000020u; // 801D8040
L_801D8044:;
  c->r[3]=rotl(c->r[0],0)&0x000000E0u; // 801D8044
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 801D8048
  c->r[4]=c->r[5]+c->r[3]; // 801D804C
  W8(c->r[1]+0x0000000Au,c->r[6]); // 801D8050
  c->r[3]=c->r[1]+0x00000008u; // 801D8054
  W8(c->r[1]+0x00000009u,c->r[4]); // 801D8058
  W8(c->r[1]+0x00000008u,c->r[0]); // 801D805C
  c->lr=0x801D8064u; f_801D73D4(c); // 801D8060
L_801D8064:;
  c->r[3]=0u+0x00000000u; // 801D8064
L_801D8068:;
  c->r[11]=c->r[1]+0x00000030u; // 801D8068
  c->lr=0x801D8070u; f_800C2E98(c); // 801D806C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D8070
  c->lr=c->r[0]; // 801D8074
  c->r[1]=c->r[1]+0x00000030u; // 801D8078
  return; // 801D807C
}

// BTM_SetInquiryScanType
void f_801D8080(Ctx* __restrict c) {
  trace_call(0x801D8080u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8080
  c->r[0]=c->lr; // 801D8084
  cmps(c,0,(int32_t)c->r[3],0); // 801D8088
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D808C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D8090
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D8094
  c->r[30]=c->r[3]|c->r[3]; // 801D8098
  if (crb(c,2)) { goto L_801D80B0; } // 801D809C
  cmpu(c,0,c->r[3],0x00000001u); // 801D80A0
  if (crb(c,2)) { goto L_801D80B0; } // 801D80A4
  c->r[3]=0u+0x00000005u; // 801D80A8
  goto L_801D8118; // 801D80AC
L_801D80B0:;
  c->r[31]=0u+0x80480000u; // 801D80B0
  c->r[31]=c->r[31]+0x000034D8u; // 801D80B4
  c->r[0]=R8(c->r[31]+0x00000643u); // 801D80B8
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801D80BC
  if (!crb(c,2)) { goto L_801D80CC; } // 801D80C0
  c->r[3]=0u+0x00000004u; // 801D80C4
  goto L_801D8118; // 801D80C8
L_801D80CC:;
  c->r[0]=R16(c->r[31]+0x000016A4u); // 801D80CC
  cmpu(c,0,c->r[3],c->r[0]); // 801D80D0
  if (crb(c,2)) { goto L_801D8114; } // 801D80D4
  c->lr=0x801D80DCu; f_801D65D4(c); // 801D80D8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D80DC
  if (crb(c,2)) { goto L_801D810C; } // 801D80E0
  c->r[3]=0u+0x00000002u; // 801D80E4
  c->lr=0x801D80ECu; f_801CAE20(c); // 801D80E8
  cmps(c,0,(int32_t)c->r[3],0); // 801D80EC
  if (crb(c,2)) { goto L_801D8104; } // 801D80F0
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 801D80F4
  c->lr=0x801D80FCu; f_801E2E84(c); // 801D80F8
  W16(c->r[31]+0x000016A4u,c->r[30]); // 801D80FC
  goto L_801D8114; // 801D8100
L_801D8104:;
  c->r[3]=0u+0x00000003u; // 801D8104
  goto L_801D8118; // 801D8108
L_801D810C:;
  c->r[3]=0u+0x00000006u; // 801D810C
  goto L_801D8118; // 801D8110
L_801D8114:;
  c->r[3]=0u+0x00000000u; // 801D8114
L_801D8118:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D8118
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D811C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D8120
  c->lr=c->r[0]; // 801D8124
  c->r[1]=c->r[1]+0x00000010u; // 801D8128
  return; // 801D812C
}

// BTM_SetPageScanType
void f_801D8130(Ctx* __restrict c) {
  trace_call(0x801D8130u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8130
  c->r[0]=c->lr; // 801D8134
  cmps(c,0,(int32_t)c->r[3],0); // 801D8138
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D813C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D8140
  W32(c->r[1]+0x00000008u,c->r[30]); // 801D8144
  c->r[30]=c->r[3]|c->r[3]; // 801D8148
  if (crb(c,2)) { goto L_801D8160; } // 801D814C
  cmpu(c,0,c->r[3],0x00000001u); // 801D8150
  if (crb(c,2)) { goto L_801D8160; } // 801D8154
  c->r[3]=0u+0x00000005u; // 801D8158
  goto L_801D81C8; // 801D815C
L_801D8160:;
  c->r[31]=0u+0x80480000u; // 801D8160
  c->r[31]=c->r[31]+0x000034D8u; // 801D8164
  c->r[0]=R8(c->r[31]+0x00000643u); // 801D8168
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 801D816C
  if (!crb(c,2)) { goto L_801D817C; } // 801D8170
  c->r[3]=0u+0x00000004u; // 801D8174
  goto L_801D81C8; // 801D8178
L_801D817C:;
  c->r[0]=R16(c->r[31]+0x000016A6u); // 801D817C
  cmpu(c,0,c->r[3],c->r[0]); // 801D8180
  if (crb(c,2)) { goto L_801D81C4; } // 801D8184
  c->lr=0x801D818Cu; f_801D65D4(c); // 801D8188
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D818C
  if (crb(c,2)) { goto L_801D81BC; } // 801D8190
  c->r[3]=0u+0x00000002u; // 801D8194
  c->lr=0x801D819Cu; f_801CAE20(c); // 801D8198
  cmps(c,0,(int32_t)c->r[3],0); // 801D819C
  if (crb(c,2)) { goto L_801D81B4; } // 801D81A0
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 801D81A4
  c->lr=0x801D81ACu; f_801E2EE4(c); // 801D81A8
  W16(c->r[31]+0x000016A6u,c->r[30]); // 801D81AC
  goto L_801D81C4; // 801D81B0
L_801D81B4:;
  c->r[3]=0u+0x00000003u; // 801D81B4
  goto L_801D81C8; // 801D81B8
L_801D81BC:;
  c->r[3]=0u+0x00000006u; // 801D81BC
  goto L_801D81C8; // 801D81C0
L_801D81C4:;
  c->r[3]=0u+0x00000000u; // 801D81C4
L_801D81C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D81C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D81CC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801D81D0
  c->lr=c->r[0]; // 801D81D4
  c->r[1]=c->r[1]+0x00000010u; // 801D81D8
  return; // 801D81DC
}

// BTM_SetInquiryMode
void f_801D81E0(Ctx* __restrict c) {
  trace_call(0x801D81E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D81E0
  c->r[0]=c->lr; // 801D81E4
  cmps(c,0,(int32_t)c->r[3],0); // 801D81E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D81EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D81F0
  c->r[31]=c->r[3]|c->r[3]; // 801D81F4
  if (crb(c,2)) { goto L_801D820C; } // 801D81F8
  cmpu(c,0,c->r[3],0x00000001u); // 801D81FC
  if (crb(c,2)) { goto L_801D820C; } // 801D8200
  c->r[3]=0u+0x00000005u; // 801D8204
  goto L_801D8264; // 801D8208
L_801D820C:;
  c->r[3]=0u+0x80480000u; // 801D820C
  c->r[3]=c->r[3]+0x000034D8u; // 801D8210
  c->r[0]=R8(c->r[3]+0x00000643u); // 801D8214
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801D8218
  if (!crb(c,2)) { goto L_801D8228; } // 801D821C
  c->r[3]=0u+0x00000004u; // 801D8220
  goto L_801D8264; // 801D8224
L_801D8228:;
  c->lr=0x801D822Cu; f_801D65D4(c); // 801D8228
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D822C
  if (!crb(c,2)) { goto L_801D823C; } // 801D8230
  c->r[3]=0u+0x00000006u; // 801D8234
  goto L_801D8264; // 801D8238
L_801D823C:;
  c->r[3]=0u+0x00000002u; // 801D823C
  c->lr=0x801D8244u; f_801CAE20(c); // 801D8240
  cmps(c,0,(int32_t)c->r[3],0); // 801D8244
  if (crb(c,2)) { goto L_801D8258; } // 801D8248
  c->r[4]=c->r[31]|c->r[31]; // 801D824C
  c->lr=0x801D8254u; f_801E2EB4(c); // 801D8250
  goto L_801D8260; // 801D8254
L_801D8258:;
  c->r[3]=0u+0x00000003u; // 801D8258
  goto L_801D8264; // 801D825C
L_801D8260:;
  c->r[3]=0u+0x00000000u; // 801D8260
L_801D8264:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D8264
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D8268
  c->lr=c->r[0]; // 801D826C
  c->r[1]=c->r[1]+0x00000010u; // 801D8270
  return; // 801D8274
}

// BTM_SetConnectability
void f_801D8278(Ctx* __restrict c) {
  trace_call(0x801D8278u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8278
  c->r[0]=c->lr; // 801D827C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D8280
  c->r[11]=c->r[1]+0x00000020u; // 801D8284
  c->lr=0x801D828Cu; f_800C2E4C(c); // 801D8288
  cmps(c,0,(int32_t)c->r[3],0); // 801D828C
  c->r[31]=0u+0x80480000u; // 801D8290
  c->r[27]=c->r[3]|c->r[3]; // 801D8294
  c->r[28]=c->r[4]|c->r[4]; // 801D8298
  c->r[29]=c->r[5]|c->r[5]; // 801D829C
  c->r[31]=c->r[31]+0x000034D8u; // 801D82A0
  c->r[30]=0u+0x00000000u; // 801D82A4
  if (crb(c,2)) { goto L_801D82BC; } // 801D82A8
  cmpu(c,0,c->r[3],0x00000001u); // 801D82AC
  if (crb(c,2)) { goto L_801D82BC; } // 801D82B0
  c->r[3]=0u+0x00000005u; // 801D82B4
  goto L_801D83E8; // 801D82B8
L_801D82BC:;
  c->r[3]=0u+0x80480000u; // 801D82BC
  c->r[3]=c->r[3]+0x000034D8u; // 801D82C0
  c->r[0]=R8(c->r[3]+0x0000064Eu); // 801D82C4
  cmpu(c,0,c->r[0],0x00000003u); // 801D82C8
  if (!crb(c,0)) { goto L_801D82D8; } // 801D82CC
  c->r[3]=0u+0x0000000Cu; // 801D82D0
  goto L_801D83E8; // 801D82D4
L_801D82D8:;
  cmps(c,0,(int32_t)c->r[4],0); // 801D82D8
  if (!crb(c,2)) { goto L_801D82E4; } // 801D82DC
  c->r[28]=0u+0x00000012u; // 801D82E0
L_801D82E4:;
  cmps(c,0,(int32_t)c->r[5],0); // 801D82E4
  if (!crb(c,2)) { goto L_801D82F0; } // 801D82E8
  c->r[29]=0u+0x00000800u; // 801D82EC
L_801D82F0:;
  c->r[3]=0u+0x80480000u; // 801D82F0
  c->r[3]=c->r[3]+0x000034D8u; // 801D82F4
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801D82F8
  cmpu(c,0,c->r[0],0x00000003u); // 801D82FC
  if (crb(c,0)) { goto L_801D8324; } // 801D8300
  c->r[3]=0u+0x000D0000u; // 801D8304
  c->r[4]=0u+0x803A0000u; // 801D8308
  c->r[5]=c->r[27]|c->r[27]; // 801D830C
  c->r[6]=c->r[28]|c->r[28]; // 801D8310
  c->r[7]=c->r[29]|c->r[29]; // 801D8314
  c->r[3]=c->r[3]+0x00000002u; // 801D8318
  c->r[4]=c->r[4]+0xFFFFF6CCu; // 801D831C
  c->lr=0x801D8324u; f_801CDA30(c); // 801D8320
L_801D8324:;
  cmpu(c,0,c->r[27],0x00000001u); // 801D8324
  if (!crb(c,2)) { goto L_801D8360; } // 801D8328
  cmpu(c,0,c->r[28],0x00000012u); // 801D832C
  if (crb(c,0)) { goto L_801D8354; } // 801D8330
  cmpu(c,0,c->r[28],0x00001000u); // 801D8334
  if (crb(c,1)) { goto L_801D8354; } // 801D8338
  cmpu(c,0,c->r[29],0x00000012u); // 801D833C
  if (crb(c,0)) { goto L_801D8354; } // 801D8340
  cmpu(c,0,c->r[29],0x00001000u); // 801D8344
  if (crb(c,1)) { goto L_801D8354; } // 801D8348
  cmpu(c,0,c->r[28],c->r[29]); // 801D834C
  if (!crb(c,1)) { goto L_801D835C; } // 801D8350
L_801D8354:;
  c->r[3]=0u+0x00000005u; // 801D8354
  goto L_801D83E8; // 801D8358
L_801D835C:;
  c->r[30]=c->r[30]|0x00000002u; // 801D835C
L_801D8360:;
  c->r[0]=R16(c->r[31]+0x0000169Cu); // 801D8360
  cmpu(c,0,c->r[28],c->r[0]); // 801D8364
  if (!crb(c,2)) { goto L_801D8378; } // 801D8368
  c->r[0]=R16(c->r[31]+0x0000169Eu); // 801D836C
  cmpu(c,0,c->r[29],c->r[0]); // 801D8370
  if (crb(c,2)) { goto L_801D83A8; } // 801D8374
L_801D8378:;
  c->r[3]=0u+0x00000002u; // 801D8378
  c->lr=0x801D8380u; f_801CAE20(c); // 801D837C
  cmps(c,0,(int32_t)c->r[3],0); // 801D8380
  if (crb(c,2)) { goto L_801D83A0; } // 801D8384
  W16(c->r[31]+0x0000169Cu,c->r[28]); // 801D8388
  c->r[4]=c->r[29]|c->r[29]; // 801D838C
  c->r[5]=c->r[28]|c->r[28]; // 801D8390
  W16(c->r[31]+0x0000169Eu,c->r[29]); // 801D8394
  c->lr=0x801D839Cu; f_801E2474(c); // 801D8398
  goto L_801D83A8; // 801D839C
L_801D83A0:;
  c->r[3]=0u+0x00000003u; // 801D83A0
  goto L_801D83E8; // 801D83A4
L_801D83A8:;
  c->r[3]=0u+0x00000002u; // 801D83A8
  c->lr=0x801D83B0u; f_801CAE20(c); // 801D83AC
  cmps(c,0,(int32_t)c->r[3],0); // 801D83B0
  if (crb(c,2)) { goto L_801D83DC; } // 801D83B4
  c->r[0]=R16(c->r[31]+0x00001698u); // 801D83B8
  cmps(c,0,(int32_t)c->r[0],0); // 801D83BC
  if (crb(c,2)) { goto L_801D83CC; } // 801D83C0
  c->r[0]=c->r[30]|0x00000001u; // 801D83C4
  c->r[30]=rotl(c->r[0],0)&0x000000FFu; // 801D83C8
L_801D83CC:;
  W16(c->r[31]+0x0000169Au,c->r[27]); // 801D83CC
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 801D83D0
  c->lr=0x801D83D8u; f_801E2444(c); // 801D83D4
  goto L_801D83E4; // 801D83D8
L_801D83DC:;
  c->r[3]=0u+0x00000003u; // 801D83DC
  goto L_801D83E8; // 801D83E0
L_801D83E4:;
  c->r[3]=0u+0x00000000u; // 801D83E4
L_801D83E8:;
  c->r[11]=c->r[1]+0x00000020u; // 801D83E8
  c->lr=0x801D83F0u; f_800C2E98(c); // 801D83EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D83F0
  c->lr=c->r[0]; // 801D83F4
  c->r[1]=c->r[1]+0x00000020u; // 801D83F8
  return; // 801D83FC
}

// BTM_IsInquiryActive
void f_801D8400(Ctx* __restrict c) {
  trace_call(0x801D8400u);
  c->r[3]=0u+0x80480000u; // 801D8400
  c->r[3]=c->r[3]+0x000034D8u; // 801D8404
  c->r[3]=R8(c->r[3]+0x00001848u); // 801D8408
  return; // 801D840C
}

// BTM_CancelInquiry
void f_801D8410(Ctx* __restrict c) {
  trace_call(0x801D8410u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8410
  c->r[0]=c->lr; // 801D8414
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D8418
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D841C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D8420
  c->r[30]=0u+0x80480000u; // 801D8424
  c->r[30]=c->r[30]+0x000034D8u; // 801D8428
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D842C
  c->r[29]=0u+0x00000000u; // 801D8430
  c->r[0]=R8(c->r[30]+0x000027C0u); // 801D8434
  cmpu(c,0,c->r[0],0x00000003u); // 801D8438
  if (crb(c,0)) { goto L_801D8454; } // 801D843C
  c->r[3]=0u+0x000D0000u; // 801D8440
  c->r[4]=0u+0x803A0000u; // 801D8444
  c->r[3]=c->r[3]+0x00000002u; // 801D8448
  c->r[4]=c->r[4]+0xFFFFF720u; // 801D844C
  c->lr=0x801D8454u; f_801CD9D0(c); // 801D8450
L_801D8454:;
  c->lr=0x801D8458u; f_801D65D4(c); // 801D8454
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D8458
  if (!crb(c,2)) { goto L_801D8468; } // 801D845C
  c->r[3]=0u+0x00000006u; // 801D8460
  goto L_801D84FC; // 801D8464
L_801D8468:;
  c->r[0]=R8(c->r[30]+0x00001848u); // 801D8468
  cmps(c,0,(int32_t)c->r[0],0); // 801D846C
  if (crb(c,2)) { goto L_801D84F8; } // 801D8470
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801D8474
  if (!crb(c,2)) { goto L_801D84F8; } // 801D8478
  c->r[0]=R8(c->r[30]+0x00001844u); // 801D847C
  c->r[4]=0u+0x00000000u; // 801D8480
  W8(c->r[30]+0x00001848u,c->r[4]); // 801D8484
  cmps(c,0,(int32_t)c->r[0],0); // 801D8488
  W8(c->r[30]+0x00001847u,c->r[4]); // 801D848C
  W32(c->r[30]+0x000016B4u,c->r[4]); // 801D8490
  W32(c->r[30]+0x000016B0u,c->r[4]); // 801D8494
  if (crb(c,2)) { goto L_801D84B0; } // 801D8498
  c->r[3]=R8(c->r[30]+0x00001845u); // 801D849C
  W8(c->r[30]+0x00001844u,c->r[4]); // 801D84A0
  c->r[0]=c->r[3]+0x00000001u; // 801D84A4
  W8(c->r[30]+0x00001845u,c->r[0]); // 801D84A8
  goto L_801D84C0; // 801D84AC
L_801D84B0:;
  c->lr=0x801D84B4u; f_801E0994(c); // 801D84B0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D84B4
  if (!crb(c,2)) { goto L_801D84C0; } // 801D84B8
  c->r[29]=0u+0x00000003u; // 801D84BC
L_801D84C0:;
  c->r[31]=0u+0x80480000u; // 801D84C0
  c->r[4]=R32(c->r[30]+0x000016C0u); // 801D84C4
  c->r[31]=c->r[31]+0x000034D8u; // 801D84C8
  c->r[3]=R32(c->r[31]+0x000016DCu); // 801D84CC
  c->r[0]=c->r[4]+0x00000001u; // 801D84D0
  W32(c->r[30]+0x000016C0u,c->r[0]); // 801D84D4
  cmps(c,0,(int32_t)c->r[3],0); // 801D84D8
  if (crb(c,2)) { goto L_801D84EC; } // 801D84DC
  c->lr=0x801D84E4u; f_801CAF10(c); // 801D84E0
  c->r[0]=0u+0x00000000u; // 801D84E4
  W32(c->r[31]+0x000016DCu,c->r[0]); // 801D84E8
L_801D84EC:;
  c->r[0]=0u+0x00000000u; // 801D84EC
  W16(c->r[31]+0x000016E0u,c->r[0]); // 801D84F0
  W16(c->r[31]+0x000016E2u,c->r[0]); // 801D84F4
L_801D84F8:;
  c->r[3]=c->r[29]|c->r[29]; // 801D84F8
L_801D84FC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D84FC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D8500
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D8504
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D8508
  c->lr=c->r[0]; // 801D850C
  c->r[1]=c->r[1]+0x00000020u; // 801D8510
  return; // 801D8514
}

// BTM_StartInquiry
void f_801D8518(Ctx* __restrict c) {
  trace_call(0x801D8518u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8518
  c->r[0]=c->lr; // 801D851C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D8520
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D8524
  c->r[31]=0u+0x80480000u; // 801D8528
  c->r[31]=c->r[31]+0x000034D8u; // 801D852C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D8530
  c->r[30]=c->r[5]|c->r[5]; // 801D8534
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D8538
  c->r[29]=c->r[4]|c->r[4]; // 801D853C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D8540
  c->r[28]=c->r[3]|c->r[3]; // 801D8544
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801D8548
  cmpu(c,0,c->r[0],0x00000003u); // 801D854C
  if (crb(c,0)) { goto L_801D8578; } // 801D8550
  c->r[3]=0u+0x000D0000u; // 801D8554
  c->r[4]=0u+0x803A0000u; // 801D8558
  c->r[5]=R8(c->r[28]+0x00000000u); // 801D855C
  c->r[3]=c->r[3]+0x00000002u; // 801D8560
  c->r[6]=R8(c->r[28]+0x00000001u); // 801D8564
  c->r[4]=c->r[4]+0xFFFFF73Cu; // 801D8568
  c->r[7]=R8(c->r[28]+0x00000002u); // 801D856C
  c->r[8]=R8(c->r[28]+0x00000003u); // 801D8570
  c->lr=0x801D8578u; f_801CDA50(c); // 801D8574
L_801D8578:;
  c->r[0]=R8(c->r[31]+0x00001848u); // 801D8578
  cmps(c,0,(int32_t)c->r[0],0); // 801D857C
  if (!crb(c,2)) { goto L_801D8590; } // 801D8580
  c->r[0]=R8(c->r[31]+0x00001844u); // 801D8584
  cmps(c,0,(int32_t)c->r[0],0); // 801D8588
  if (crb(c,2)) { goto L_801D8598; } // 801D858C
L_801D8590:;
  c->r[3]=0u+0x00000002u; // 801D8590
  goto L_801D86AC; // 801D8594
L_801D8598:;
  c->r[0]=R8(c->r[28]+0x00000000u); // 801D8598
  cmps(c,0,(int32_t)c->r[0],0); // 801D859C
  if (crb(c,2)) { goto L_801D85B4; } // 801D85A0
  cmpu(c,0,c->r[0],0x00000001u); // 801D85A4
  if (crb(c,2)) { goto L_801D85B4; } // 801D85A8
  c->r[3]=0u+0x00000005u; // 801D85AC
  goto L_801D86AC; // 801D85B0
L_801D85B4:;
  c->lr=0x801D85B8u; f_801D65D4(c); // 801D85B4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D85B8
  if (!crb(c,2)) { goto L_801D85C8; } // 801D85BC
  c->r[3]=0u+0x00000006u; // 801D85C0
  goto L_801D86AC; // 801D85C4
L_801D85C8:;
  c->r[5]=R8(c->r[28]+0x00000000u); // 801D85C8
  c->r[0]=0u+0x00000003u; // 801D85CC
  c->r[3]=R8(c->r[28]+0x00000001u); // 801D85D0
  c->r[6]=0u+0x00000000u; // 801D85D4
  c->r[4]=0u+0x00000001u; // 801D85D8
  W8(c->r[31]+0x00001834u,c->r[5]); // 801D85DC
  W8(c->r[31]+0x00001835u,c->r[3]); // 801D85E0
  c->r[5]=R8(c->r[28]+0x00000002u); // 801D85E4
  c->r[3]=R8(c->r[28]+0x00000003u); // 801D85E8
  W8(c->r[31]+0x00001836u,c->r[5]); // 801D85EC
  W8(c->r[31]+0x00001837u,c->r[3]); // 801D85F0
  c->r[5]=R8(c->r[28]+0x00000004u); // 801D85F4
  c->r[3]=R8(c->r[28]+0x00000005u); // 801D85F8
  W8(c->r[31]+0x00001838u,c->r[5]); // 801D85FC
  W8(c->r[31]+0x00001839u,c->r[3]); // 801D8600
  c->r[5]=R8(c->r[28]+0x00000006u); // 801D8604
  c->r[3]=R8(c->r[28]+0x00000007u); // 801D8608
  W8(c->r[31]+0x0000183Au,c->r[5]); // 801D860C
  W8(c->r[31]+0x0000183Bu,c->r[3]); // 801D8610
  c->r[3]=R8(c->r[28]+0x00000008u); // 801D8614
  W8(c->r[31]+0x0000183Cu,c->r[3]); // 801D8618
  c->r[3]=R8(c->r[28]+0x00000009u); // 801D861C
  W8(c->r[31]+0x0000183Du,c->r[3]); // 801D8620
  W8(c->r[31]+0x00001847u,c->r[0]); // 801D8624
  W32(c->r[31]+0x000016B0u,c->r[30]); // 801D8628
  W32(c->r[31]+0x000016B4u,c->r[29]); // 801D862C
  W8(c->r[31]+0x0000183Fu,c->r[6]); // 801D8630
  c->r[5]=R8(c->r[28]+0x00000000u); // 801D8634
  c->r[3]=c->r[5]+0xFFFFFFFFu; // 801D8638
  c->r[0]=addc(c,~c->r[5],0x00000001u,1); // 801D863C
  c->r[0]=~(c->r[3]|c->r[0]); // 801D8640
  c->r[3]=sraw(c,c->r[0],31); // 801D8644
  c->r[0]=c->r[3]+0x00000002u; // 801D8648
  W8(c->r[31]+0x00001848u,c->r[0]); // 801D864C
  c->r[0]=R8(c->r[28]+0x00000003u); // 801D8650
  cmps(c,0,(int32_t)c->r[0],0); // 801D8654
  if (crb(c,2)) { goto L_801D866C; } // 801D8658
  if (crb(c,0)) { goto L_801D8684; } // 801D865C
  cmps(c,0,(int32_t)c->r[0],3); // 801D8660
  if (!crb(c,0)) { goto L_801D8684; } // 801D8664
  goto L_801D8678; // 801D8668
L_801D866C:;
  c->r[0]=0u+0x00000002u; // 801D866C
  W8(c->r[31]+0x00001847u,c->r[0]); // 801D8670
  goto L_801D868C; // 801D8674
L_801D8678:;
  W8(c->r[31]+0x00001847u,c->r[4]); // 801D8678
  W8(c->r[28]+0x00000003u,c->r[6]); // 801D867C
  goto L_801D868C; // 801D8680
L_801D8684:;
  c->r[3]=0u+0x00000005u; // 801D8684
  goto L_801D86AC; // 801D8688
L_801D868C:;
  c->r[3]=R8(c->r[28]+0x00000003u); // 801D868C
  c->r[4]=c->r[28]+0x00000004u; // 801D8690
  c->lr=0x801D8698u; f_801D8F2C(c); // 801D8694
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801D8698
  cmpu(c,0,c->r[0],0x00000001u); // 801D869C
  if (crb(c,2)) { goto L_801D86AC; } // 801D86A0
  c->r[0]=0u+0x00000000u; // 801D86A4
  W8(c->r[31]+0x00001847u,c->r[0]); // 801D86A8
L_801D86AC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D86AC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D86B0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D86B4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D86B8
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D86BC
  c->lr=c->r[0]; // 801D86C0
  c->r[1]=c->r[1]+0x00000020u; // 801D86C4
  return; // 801D86C8
}

// BTM_ReadRemoteDeviceName
void f_801D86CC(Ctx* __restrict c) {
  trace_call(0x801D86CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D86CC
  c->r[0]=c->lr; // 801D86D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D86D4
  c->r[11]=c->r[1]+0x00000020u; // 801D86D8
  c->lr=0x801D86E0u; f_800C2E4C(c); // 801D86DC
  c->r[5]=0u+0x80480000u; // 801D86E0
  c->r[27]=c->r[3]|c->r[3]; // 801D86E4
  c->r[5]=c->r[5]+0x000034D8u; // 801D86E8
  c->r[28]=c->r[4]|c->r[4]; // 801D86EC
  c->r[0]=R8(c->r[5]+0x000027C0u); // 801D86F0
  c->r[29]=0u+0x00000000u; // 801D86F4
  cmpu(c,0,c->r[0],0x00000003u); // 801D86F8
  if (crb(c,0)) { goto L_801D872C; } // 801D86FC
  c->r[3]=0u+0x000D0000u; // 801D8700
  c->r[4]=0u+0x803A0000u; // 801D8704
  c->r[5]=R8(c->r[27]+0x00000000u); // 801D8708
  c->r[3]=c->r[3]+0x00000002u; // 801D870C
  c->r[6]=R8(c->r[27]+0x00000001u); // 801D8710
  c->r[4]=c->r[4]+0xFFFFF774u; // 801D8714
  c->r[7]=R8(c->r[27]+0x00000002u); // 801D8718
  c->r[8]=R8(c->r[27]+0x00000003u); // 801D871C
  c->r[9]=R8(c->r[27]+0x00000004u); // 801D8720
  c->r[10]=R8(c->r[27]+0x00000005u); // 801D8724
  c->lr=0x801D872Cu; f_801CDA90(c); // 801D8728
L_801D872C:;
  c->r[3]=0u+0x80480000u; // 801D872C
  c->r[30]=0u+0x00000000u; // 801D8730
  c->r[3]=c->r[3]+0x000034D8u; // 801D8734
  c->r[31]=c->r[3]+0x000016E4u; // 801D8738
L_801D873C:;
  c->r[0]=R8(c->r[31]+0x0000001Au); // 801D873C
  cmps(c,0,(int32_t)c->r[0],0); // 801D8740
  if (crb(c,2)) { goto L_801D8764; } // 801D8744
  c->r[4]=c->r[27]|c->r[27]; // 801D8748
  c->r[3]=c->r[31]+0x0000000Au; // 801D874C
  c->r[5]=0u+0x00000006u; // 801D8750
  c->lr=0x801D8758u; f_800C6228(c); // 801D8754
  cmps(c,0,(int32_t)c->r[3],0); // 801D8758
  if (!crb(c,2)) { goto L_801D8764; } // 801D875C
  goto L_801D8778; // 801D8760
L_801D8764:;
  c->r[30]=c->r[30]+0x00000001u; // 801D8764
  c->r[31]=c->r[31]+0x0000001Cu; // 801D8768
  cmpu(c,0,c->r[30],0x0000000Cu); // 801D876C
  if (crb(c,0)) { IRQCHK(c); goto L_801D873C; } // 801D8770
  c->r[31]=0u+0x00000000u; // 801D8774
L_801D8778:;
  cmps(c,0,(int32_t)c->r[31],0); // 801D8778
  if (crb(c,2)) { goto L_801D8784; } // 801D877C
  c->r[29]=c->r[31]+0x00000008u; // 801D8780
L_801D8784:;
  c->r[3]=c->r[27]|c->r[27]; // 801D8784
  c->r[4]=c->r[29]|c->r[29]; // 801D8788
  c->r[7]=c->r[28]|c->r[28]; // 801D878C
  c->r[5]=0u+0x00000001u; // 801D8790
  c->r[6]=0u+0x00000028u; // 801D8794
  c->lr=0x801D879Cu; f_801D95AC(c); // 801D8798
  c->r[11]=c->r[1]+0x00000020u; // 801D879C
  c->lr=0x801D87A4u; f_800C2E98(c); // 801D87A0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D87A4
  c->lr=c->r[0]; // 801D87A8
  c->r[1]=c->r[1]+0x00000020u; // 801D87AC
  return; // 801D87B0
}

// BTM_CancelRemoteDeviceName
void f_801D87B4(Ctx* __restrict c) {
  trace_call(0x801D87B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D87B4
  c->r[0]=c->lr; // 801D87B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D87BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D87C0
  c->r[31]=0u+0x80480000u; // 801D87C4
  c->r[31]=c->r[31]+0x000034D8u; // 801D87C8
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801D87CC
  cmpu(c,0,c->r[0],0x00000003u); // 801D87D0
  if (crb(c,0)) { goto L_801D87EC; } // 801D87D4
  c->r[3]=0u+0x000D0000u; // 801D87D8
  c->r[4]=0u+0x803A0000u; // 801D87DC
  c->r[3]=c->r[3]+0x00000002u; // 801D87E0
  c->r[4]=c->r[4]+0xFFFFF7B4u; // 801D87E4
  c->lr=0x801D87ECu; f_801CD9D0(c); // 801D87E8
L_801D87EC:;
  c->r[0]=R8(c->r[31]+0x000016AEu); // 801D87EC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801D87F0
  if (crb(c,2)) { goto L_801D8814; } // 801D87F4
  c->r[3]=c->r[31]+0x000016A8u; // 801D87F8
  c->lr=0x801D8800u; f_801E1498(c); // 801D87FC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D8800
  c->r[3]=0u+0x00000003u; // 801D8804
  if (crb(c,2)) { goto L_801D8818; } // 801D8808
  c->r[3]=0u+0x00000001u; // 801D880C
  goto L_801D8818; // 801D8810
L_801D8814:;
  c->r[3]=0u+0x00000006u; // 801D8814
L_801D8818:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D8818
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D881C
  c->lr=c->r[0]; // 801D8820
  c->r[1]=c->r[1]+0x00000010u; // 801D8824
  return; // 801D8828
}

// BTM_InqDbRead
void f_801D882C(Ctx* __restrict c) {
  trace_call(0x801D882Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D882C
  c->r[0]=c->lr; // 801D8830
  c->r[4]=0u+0x80480000u; // 801D8834
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D8838
  c->r[4]=c->r[4]+0x000034D8u; // 801D883C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D8840
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D8844
  c->r[30]=c->r[4]+0x000016E4u; // 801D8848
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D884C
  c->r[29]=c->r[3]|c->r[3]; // 801D8850
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801D8854
  cmpu(c,0,c->r[0],0x00000003u); // 801D8858
  if (crb(c,0)) { goto L_801D888C; } // 801D885C
  c->r[3]=0u+0x000D0000u; // 801D8860
  c->r[4]=0u+0x803A0000u; // 801D8864
  c->r[5]=R8(c->r[29]+0x00000000u); // 801D8868
  c->r[3]=c->r[3]+0x00000002u; // 801D886C
  c->r[6]=R8(c->r[29]+0x00000001u); // 801D8870
  c->r[4]=c->r[4]+0xFFFFF7D4u; // 801D8874
  c->r[7]=R8(c->r[29]+0x00000002u); // 801D8878
  c->r[8]=R8(c->r[29]+0x00000003u); // 801D887C
  c->r[9]=R8(c->r[29]+0x00000004u); // 801D8880
  c->r[10]=R8(c->r[29]+0x00000005u); // 801D8884
  c->lr=0x801D888Cu; f_801CDA90(c); // 801D8888
L_801D888C:;
  c->r[31]=0u+0x00000000u; // 801D888C
L_801D8890:;
  c->r[0]=R8(c->r[30]+0x0000001Au); // 801D8890
  cmps(c,0,(int32_t)c->r[0],0); // 801D8894
  if (crb(c,2)) { goto L_801D88BC; } // 801D8898
  c->r[4]=c->r[29]|c->r[29]; // 801D889C
  c->r[3]=c->r[30]+0x0000000Au; // 801D88A0
  c->r[5]=0u+0x00000006u; // 801D88A4
  c->lr=0x801D88ACu; f_800C6228(c); // 801D88A8
  cmps(c,0,(int32_t)c->r[3],0); // 801D88AC
  if (!crb(c,2)) { goto L_801D88BC; } // 801D88B0
  c->r[3]=c->r[30]+0x00000008u; // 801D88B4
  goto L_801D88D0; // 801D88B8
L_801D88BC:;
  c->r[31]=c->r[31]+0x00000001u; // 801D88BC
  c->r[30]=c->r[30]+0x0000001Cu; // 801D88C0
  cmpu(c,0,c->r[31],0x0000000Cu); // 801D88C4
  if (crb(c,0)) { IRQCHK(c); goto L_801D8890; } // 801D88C8
  c->r[3]=0u+0x00000000u; // 801D88CC
L_801D88D0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D88D0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D88D4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D88D8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D88DC
  c->lr=c->r[0]; // 801D88E0
  c->r[1]=c->r[1]+0x00000020u; // 801D88E4
  return; // 801D88E8
}

// BTM_InqDbFirst
void f_801D88EC(Ctx* __restrict c) {
  trace_call(0x801D88ECu);
  c->r[3]=0u+0x80480000u; // 801D88EC
  c->r[0]=0u+0x00000002u; // 801D88F0
  c->r[3]=c->r[3]+0x000034D8u; // 801D88F4
  c->r[4]=0u+0x00000000u; // 801D88F8
  c->r[3]=c->r[3]+0x000016E4u; // 801D88FC
  c->ctr=c->r[0]; // 801D8900
L_801D8904:;
  c->r[0]=R8(c->r[3]+0x0000001Au); // 801D8904
  cmps(c,0,(int32_t)c->r[0],0); // 801D8908
  if (crb(c,2)) { goto L_801D8918; } // 801D890C
  c->r[3]=c->r[3]+0x00000008u; // 801D8910
  return; // 801D8914
L_801D8918:;
  c->r[0]=R8(c->r[3]+0x00000036u); // 801D8918
  c->r[4]=c->r[4]+0x00000001u; // 801D891C
  cmps(c,0,(int32_t)c->r[0],0); // 801D8920
  if (crb(c,2)) { goto L_801D8930; } // 801D8924
  c->r[3]=c->r[3]+0x00000024u; // 801D8928
  return; // 801D892C
L_801D8930:;
  c->r[0]=R8(c->r[3]+0x00000052u); // 801D8930
  c->r[4]=c->r[4]+0x00000001u; // 801D8934
  cmps(c,0,(int32_t)c->r[0],0); // 801D8938
  if (crb(c,2)) { goto L_801D8948; } // 801D893C
  c->r[3]=c->r[3]+0x00000040u; // 801D8940
  return; // 801D8944
L_801D8948:;
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 801D8948
  c->r[4]=c->r[4]+0x00000001u; // 801D894C
  cmps(c,0,(int32_t)c->r[0],0); // 801D8950
  if (crb(c,2)) { goto L_801D8960; } // 801D8954
  c->r[3]=c->r[3]+0x0000005Cu; // 801D8958
  return; // 801D895C
L_801D8960:;
  c->r[0]=R8(c->r[3]+0x0000008Au); // 801D8960
  c->r[4]=c->r[4]+0x00000001u; // 801D8964
  cmps(c,0,(int32_t)c->r[0],0); // 801D8968
  if (crb(c,2)) { goto L_801D8978; } // 801D896C
  c->r[3]=c->r[3]+0x00000078u; // 801D8970
  return; // 801D8974
L_801D8978:;
  c->r[0]=R8(c->r[3]+0x000000A6u); // 801D8978
  c->r[4]=c->r[4]+0x00000001u; // 801D897C
  cmps(c,0,(int32_t)c->r[0],0); // 801D8980
  if (crb(c,2)) { goto L_801D8990; } // 801D8984
  c->r[3]=c->r[3]+0x00000094u; // 801D8988
  return; // 801D898C
L_801D8990:;
  c->r[4]=c->r[4]+0x00000001u; // 801D8990
  c->r[3]=c->r[3]+0x000000A8u; // 801D8994
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D8904; } // 801D8998
  c->r[3]=0u+0x00000000u; // 801D899C
  return; // 801D89A0
}

// BTM_InqDbNext
void f_801D89A4(Ctx* __restrict c) {
  trace_call(0x801D89A4u);
  cmps(c,0,(int32_t)c->r[3],0); // 801D89A4
  if (crb(c,2)) { goto L_801D8A28; } // 801D89A8
  c->r[5]=0u+0x80480000u; // 801D89AC
  c->r[4]=0u+0x92490000u; // 801D89B0
  c->r[5]=c->r[5]+0x000034D8u; // 801D89B4
  c->r[0]=c->r[3]+0xFFFFFFF8u; // 801D89B8
  c->r[3]=c->r[5]+0x000016E4u; // 801D89BC
  c->r[4]=c->r[4]+0x00002493u; // 801D89C0
  c->r[0]=c->r[0]-c->r[3]; // 801D89C4
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 801D89C8
  c->r[0]=c->r[3]+c->r[0]; // 801D89CC
  c->r[0]=sraw(c,c->r[0],4); // 801D89D0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801D89D4
  c->r[3]=c->r[0]+c->r[3]; // 801D89D8
  c->r[0]=c->r[3]+0x00000001u; // 801D89DC
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801D89E0
  c->r[3]=(uint32_t)((int32_t)c->r[4]*(int32_t)28); // 801D89E4
  c->r[0]=addc(c,~c->r[4],0x0000000Cu,1); // 801D89E8
  c->r[3]=c->r[5]+c->r[3]; // 801D89EC
  c->r[3]=c->r[3]+0x000016E4u; // 801D89F0
  c->ctr=c->r[0]; // 801D89F4
  cmpu(c,0,c->r[4],0x0000000Cu); // 801D89F8
  if (!crb(c,0)) { goto L_801D8A20; } // 801D89FC
L_801D8A00:;
  c->r[0]=R8(c->r[3]+0x0000001Au); // 801D8A00
  cmps(c,0,(int32_t)c->r[0],0); // 801D8A04
  if (crb(c,2)) { goto L_801D8A14; } // 801D8A08
  c->r[3]=c->r[3]+0x00000008u; // 801D8A0C
  return; // 801D8A10
L_801D8A14:;
  c->r[4]=c->r[4]+0x00000001u; // 801D8A14
  c->r[3]=c->r[3]+0x0000001Cu; // 801D8A18
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D8A00; } // 801D8A1C
L_801D8A20:;
  c->r[3]=0u+0x00000000u; // 801D8A20
  return; // 801D8A24
L_801D8A28:;
  c->r[3]=0u+0x80480000u; // 801D8A28
  c->r[0]=0u+0x00000002u; // 801D8A2C
  c->r[3]=c->r[3]+0x000034D8u; // 801D8A30
  c->r[4]=0u+0x00000000u; // 801D8A34
  c->r[3]=c->r[3]+0x000016E4u; // 801D8A38
  c->ctr=c->r[0]; // 801D8A3C
L_801D8A40:;
  c->r[0]=R8(c->r[3]+0x0000001Au); // 801D8A40
  cmps(c,0,(int32_t)c->r[0],0); // 801D8A44
  if (crb(c,2)) { goto L_801D8A54; } // 801D8A48
  c->r[3]=c->r[3]+0x00000008u; // 801D8A4C
  return; // 801D8A50
L_801D8A54:;
  c->r[0]=R8(c->r[3]+0x00000036u); // 801D8A54
  c->r[4]=c->r[4]+0x00000001u; // 801D8A58
  cmps(c,0,(int32_t)c->r[0],0); // 801D8A5C
  if (crb(c,2)) { goto L_801D8A6C; } // 801D8A60
  c->r[3]=c->r[3]+0x00000024u; // 801D8A64
  return; // 801D8A68
L_801D8A6C:;
  c->r[0]=R8(c->r[3]+0x00000052u); // 801D8A6C
  c->r[4]=c->r[4]+0x00000001u; // 801D8A70
  cmps(c,0,(int32_t)c->r[0],0); // 801D8A74
  if (crb(c,2)) { goto L_801D8A84; } // 801D8A78
  c->r[3]=c->r[3]+0x00000040u; // 801D8A7C
  return; // 801D8A80
L_801D8A84:;
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 801D8A84
  c->r[4]=c->r[4]+0x00000001u; // 801D8A88
  cmps(c,0,(int32_t)c->r[0],0); // 801D8A8C
  if (crb(c,2)) { goto L_801D8A9C; } // 801D8A90
  c->r[3]=c->r[3]+0x0000005Cu; // 801D8A94
  return; // 801D8A98
L_801D8A9C:;
  c->r[0]=R8(c->r[3]+0x0000008Au); // 801D8A9C
  c->r[4]=c->r[4]+0x00000001u; // 801D8AA0
  cmps(c,0,(int32_t)c->r[0],0); // 801D8AA4
  if (crb(c,2)) { goto L_801D8AB4; } // 801D8AA8
  c->r[3]=c->r[3]+0x00000078u; // 801D8AAC
  return; // 801D8AB0
L_801D8AB4:;
  c->r[0]=R8(c->r[3]+0x000000A6u); // 801D8AB4
  c->r[4]=c->r[4]+0x00000001u; // 801D8AB8
  cmps(c,0,(int32_t)c->r[0],0); // 801D8ABC
  if (crb(c,2)) { goto L_801D8ACC; } // 801D8AC0
  c->r[3]=c->r[3]+0x00000094u; // 801D8AC4
  return; // 801D8AC8
L_801D8ACC:;
  c->r[4]=c->r[4]+0x00000001u; // 801D8ACC
  c->r[3]=c->r[3]+0x000000A8u; // 801D8AD0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D8A40; } // 801D8AD4
  c->r[3]=0u+0x00000000u; // 801D8AD8
  return; // 801D8ADC
}

// BTM_ClearInqDb
void f_801D8AE0(Ctx* __restrict c) {
  trace_call(0x801D8AE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8AE0
  c->r[0]=c->lr; // 801D8AE4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D8AE8
  c->r[11]=c->r[1]+0x00000020u; // 801D8AEC
  c->lr=0x801D8AF4u; f_800C2E4C(c); // 801D8AF0
  c->r[4]=0u+0x80480000u; // 801D8AF4
  c->r[27]=c->r[3]|c->r[3]; // 801D8AF8
  c->r[30]=c->r[4]+0x000034D8u; // 801D8AFC
  c->r[0]=R8(c->r[30]+0x00001848u); // 801D8B00
  cmps(c,0,(int32_t)c->r[0],0); // 801D8B04
  if (!crb(c,2)) { goto L_801D8B24; } // 801D8B08
  c->r[0]=R8(c->r[30]+0x000016AEu); // 801D8B0C
  cmps(c,0,(int32_t)c->r[0],0); // 801D8B10
  if (!crb(c,2)) { goto L_801D8B24; } // 801D8B14
  c->r[0]=R8(c->r[30]+0x00001844u); // 801D8B18
  cmps(c,0,(int32_t)c->r[0],0); // 801D8B1C
  if (crb(c,2)) { goto L_801D8B2C; } // 801D8B20
L_801D8B24:;
  c->r[3]=0u+0x00000002u; // 801D8B24
  goto L_801D8B98; // 801D8B28
L_801D8B2C:;
  c->r[28]=c->r[30]+0x000016E4u; // 801D8B2C
  c->r[29]=0u+0x00000000u; // 801D8B30
  c->r[31]=0u+0x00000000u; // 801D8B34
L_801D8B38:;
  c->r[0]=R8(c->r[28]+0x0000001Au); // 801D8B38
  cmps(c,0,(int32_t)c->r[0],0); // 801D8B3C
  if (crb(c,2)) { goto L_801D8B84; } // 801D8B40
  cmps(c,0,(int32_t)c->r[27],0); // 801D8B44
  if (crb(c,2)) { goto L_801D8B64; } // 801D8B48
  c->r[4]=c->r[27]|c->r[27]; // 801D8B4C
  c->r[3]=c->r[28]+0x0000000Au; // 801D8B50
  c->r[5]=0u+0x00000006u; // 801D8B54
  c->lr=0x801D8B5Cu; f_800C6228(c); // 801D8B58
  cmps(c,0,(int32_t)c->r[3],0); // 801D8B5C
  if (!crb(c,2)) { goto L_801D8B84; } // 801D8B60
L_801D8B64:;
  W8(c->r[28]+0x0000001Au,c->r[31]); // 801D8B64
  c->r[12]=R32(c->r[30]+0x000016BCu); // 801D8B68
  cmps(c,0,(int32_t)c->r[12],0); // 801D8B6C
  if (crb(c,2)) { goto L_801D8B84; } // 801D8B70
  c->r[3]=c->r[28]+0x00000008u; // 801D8B74
  c->r[4]=0u+0x00000000u; // 801D8B78
  c->ctr=c->r[12]; // 801D8B7C
  if (true) { c->lr=0x801D8B84u; dispatch(c,c->ctr); } // 801D8B80
L_801D8B84:;
  c->r[29]=c->r[29]+0x00000001u; // 801D8B84
  c->r[28]=c->r[28]+0x0000001Cu; // 801D8B88
  cmpu(c,0,c->r[29],0x0000000Cu); // 801D8B8C
  if (crb(c,0)) { IRQCHK(c); goto L_801D8B38; } // 801D8B90
  c->r[3]=0u+0x00000000u; // 801D8B94
L_801D8B98:;
  c->r[11]=c->r[1]+0x00000020u; // 801D8B98
  c->lr=0x801D8BA0u; f_800C2E98(c); // 801D8B9C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D8BA0
  c->lr=c->r[0]; // 801D8BA4
  c->r[1]=c->r[1]+0x00000020u; // 801D8BA8
  return; // 801D8BAC
}

// btm_inq_db_reset
void f_801D8BB0(Ctx* __restrict c) {
  trace_call(0x801D8BB0u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8BB0
  c->r[0]=c->lr; // 801D8BB4
  W32(c->r[1]+0x00000124u,c->r[0]); // 801D8BB8
  c->r[11]=c->r[1]+0x00000120u; // 801D8BBC
  c->lr=0x801D8BC4u; f_800C2E4C(c); // 801D8BC0
  c->r[29]=0u+0x80480000u; // 801D8BC4
  c->r[29]=c->r[29]+0x000034D8u; // 801D8BC8
  c->r[3]=c->r[29]+0x000016C4u; // 801D8BCC
  c->lr=0x801D8BD4u; f_801CE050(c); // 801D8BD0
  c->r[3]=R8(c->r[29]+0x00001848u); // 801D8BD4
  cmps(c,0,(int32_t)c->r[3],0); // 801D8BD8
  if (crb(c,2)) { goto L_801D8C14; } // 801D8BDC
  c->r[0]=c->r[3]+0x000000FFu; // 801D8BE0
  c->r[3]=0u+0x00000000u; // 801D8BE4
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801D8BE8
  W8(c->r[29]+0x00001848u,c->r[3]); // 801D8BEC
  cmpu(c,0,c->r[0],0x00000001u); // 801D8BF0
  if (crb(c,1)) { goto L_801D8C14; } // 801D8BF4
  c->r[12]=R32(c->r[29]+0x000016B0u); // 801D8BF8
  cmps(c,0,(int32_t)c->r[12],0); // 801D8BFC
  if (crb(c,2)) { goto L_801D8C14; } // 801D8C00
  W8(c->r[1]+0x00000009u,c->r[3]); // 801D8C04
  c->r[3]=c->r[1]+0x00000009u; // 801D8C08
  c->ctr=c->r[12]; // 801D8C0C
  if (true) { c->lr=0x801D8C14u; dispatch(c,c->ctr); } // 801D8C10
L_801D8C14:;
  c->r[0]=R8(c->r[29]+0x000016AEu); // 801D8C14
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801D8C18
  if (crb(c,2)) { goto L_801D8C64; } // 801D8C1C
  c->r[3]=c->r[29]+0x00001680u; // 801D8C20
  c->lr=0x801D8C28u; f_801CE050(c); // 801D8C24
  c->r[30]=0u+0x00000000u; // 801D8C28
  c->r[3]=c->r[29]+0x000016A8u; // 801D8C2C
  W8(c->r[29]+0x000016AEu,c->r[30]); // 801D8C30
  c->r[4]=0u+0x00000000u; // 801D8C34
  c->r[5]=0u+0x00000006u; // 801D8C38
  c->lr=0x801D8C40u; f_80004350(c); // 801D8C3C
  c->r[12]=R32(c->r[29]+0x0000167Cu); // 801D8C40
  cmps(c,0,(int32_t)c->r[12],0); // 801D8C44
  if (crb(c,2)) { goto L_801D8C64; } // 801D8C48
  c->r[0]=0u+0x0000000Cu; // 801D8C4C
  c->r[3]=c->r[1]+0x0000000Cu; // 801D8C50
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 801D8C54
  c->ctr=c->r[12]; // 801D8C58
  if (true) { c->lr=0x801D8C60u; dispatch(c,c->ctr); } // 801D8C5C
  W32(c->r[29]+0x0000167Cu,c->r[30]); // 801D8C60
L_801D8C64:;
  c->r[0]=R8(c->r[29]+0x00001844u); // 801D8C64
  cmps(c,0,(int32_t)c->r[0],0); // 801D8C68
  if (crb(c,2)) { goto L_801D8C98; } // 801D8C6C
  c->r[12]=R32(c->r[29]+0x000016B8u); // 801D8C70
  c->r[0]=0u+0x00000000u; // 801D8C74
  W8(c->r[29]+0x00001844u,c->r[0]); // 801D8C78
  cmps(c,0,(int32_t)c->r[12],0); // 801D8C7C
  if (crb(c,2)) { goto L_801D8C98; } // 801D8C80
  c->r[0]=0u+0x0000000Cu; // 801D8C84
  c->r[3]=c->r[1]+0x00000008u; // 801D8C88
  W8(c->r[1]+0x00000008u,c->r[0]); // 801D8C8C
  c->ctr=c->r[12]; // 801D8C90
  if (true) { c->lr=0x801D8C98u; dispatch(c,c->ctr); } // 801D8C94
L_801D8C98:;
  c->r[30]=0u+0x00000000u; // 801D8C98
  c->r[31]=0u+0x80480000u; // 801D8C9C
  c->r[31]=c->r[31]+0x000034D8u; // 801D8CA0
  W8(c->r[29]+0x00001847u,c->r[30]); // 801D8CA4
  c->r[28]=0u+0x00000000u; // 801D8CA8
  W8(c->r[29]+0x00001845u,c->r[30]); // 801D8CAC
  c->r[27]=c->r[31]+0x000016E4u; // 801D8CB0
  W32(c->r[29]+0x000016B4u,c->r[30]); // 801D8CB4
L_801D8CB8:;
  c->r[0]=R8(c->r[27]+0x0000001Au); // 801D8CB8
  cmps(c,0,(int32_t)c->r[0],0); // 801D8CBC
  if (crb(c,2)) { goto L_801D8CE4; } // 801D8CC0
  W8(c->r[27]+0x0000001Au,c->r[30]); // 801D8CC4
  c->r[12]=R32(c->r[31]+0x000016BCu); // 801D8CC8
  cmps(c,0,(int32_t)c->r[12],0); // 801D8CCC
  if (crb(c,2)) { goto L_801D8CE4; } // 801D8CD0
  c->r[3]=c->r[27]+0x00000008u; // 801D8CD4
  c->r[4]=0u+0x00000000u; // 801D8CD8
  c->ctr=c->r[12]; // 801D8CDC
  if (true) { c->lr=0x801D8CE4u; dispatch(c,c->ctr); } // 801D8CE0
L_801D8CE4:;
  c->r[28]=c->r[28]+0x00000001u; // 801D8CE4
  c->r[27]=c->r[27]+0x0000001Cu; // 801D8CE8
  cmpu(c,0,c->r[28],0x0000000Cu); // 801D8CEC
  if (crb(c,0)) { IRQCHK(c); goto L_801D8CB8; } // 801D8CF0
  c->r[31]=0u+0x80480000u; // 801D8CF4
  c->r[31]=c->r[31]+0x000034D8u; // 801D8CF8
  c->r[3]=R32(c->r[31]+0x000016DCu); // 801D8CFC
  cmps(c,0,(int32_t)c->r[3],0); // 801D8D00
  if (crb(c,2)) { goto L_801D8D14; } // 801D8D04
  c->lr=0x801D8D0Cu; f_801CAF10(c); // 801D8D08
  c->r[0]=0u+0x00000000u; // 801D8D0C
  W32(c->r[31]+0x000016DCu,c->r[0]); // 801D8D10
L_801D8D14:;
  c->r[0]=0u+0x00000000u; // 801D8D14
  c->r[11]=c->r[1]+0x00000120u; // 801D8D18
  W16(c->r[31]+0x000016E0u,c->r[0]); // 801D8D1C
  W16(c->r[31]+0x000016E2u,c->r[0]); // 801D8D20
  W16(c->r[29]+0x00001698u,c->r[0]); // 801D8D24
  W16(c->r[29]+0x0000169Au,c->r[0]); // 801D8D28
  W16(c->r[29]+0x000016A6u,c->r[0]); // 801D8D2C
  W16(c->r[29]+0x000016A4u,c->r[0]); // 801D8D30
  c->lr=0x801D8D38u; f_800C2E98(c); // 801D8D34
  c->r[0]=R32(c->r[1]+0x00000124u); // 801D8D38
  c->lr=c->r[0]; // 801D8D3C
  c->r[1]=c->r[1]+0x00000120u; // 801D8D40
  return; // 801D8D44
}

// btm_inq_db_init
void f_801D8D48(Ctx* __restrict c) {
  trace_call(0x801D8D48u);
  return; // 801D8D48
}

// btm_inq_find_bdaddr
void f_801D8D4C(Ctx* __restrict c) {
  trace_call(0x801D8D4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8D4C
  c->r[0]=c->lr; // 801D8D50
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D8D54
  c->r[11]=c->r[1]+0x00000020u; // 801D8D58
  c->lr=0x801D8D60u; f_800C2E4C(c); // 801D8D5C
  c->r[31]=0u+0x80480000u; // 801D8D60
  c->r[27]=c->r[3]|c->r[3]; // 801D8D64
  c->r[31]=c->r[31]+0x000034D8u; // 801D8D68
  c->r[0]=R8(c->r[31]+0x00001848u); // 801D8D6C
  c->r[29]=R32(c->r[31]+0x000016DCu); // 801D8D70
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801D8D74
  if (!crb(c,2)) { goto L_801D8D84; } // 801D8D78
  cmps(c,0,(int32_t)c->r[29],0); // 801D8D7C
  if (!crb(c,2)) { goto L_801D8D8C; } // 801D8D80
L_801D8D84:;
  c->r[3]=0u+0x00000000u; // 801D8D84
  goto L_801D8E10; // 801D8D88
L_801D8D8C:;
  c->r[30]=R16(c->r[31]+0x000016E0u); // 801D8D8C
  c->r[28]=0u+0x00000000u; // 801D8D90
  goto L_801D8DD0; // 801D8D94
L_801D8D98:;
  c->r[4]=c->r[27]|c->r[27]; // 801D8D98
  c->r[3]=c->r[29]+0x00000004u; // 801D8D9C
  c->r[5]=0u+0x00000006u; // 801D8DA0
  c->lr=0x801D8DA8u; f_800C6228(c); // 801D8DA4
  cmps(c,0,(int32_t)c->r[3],0); // 801D8DA8
  if (!crb(c,2)) { goto L_801D8DC8; } // 801D8DAC
  c->r[3]=R32(c->r[29]+0x00000000u); // 801D8DB0
  c->r[0]=R32(c->r[31]+0x000016C0u); // 801D8DB4
  cmpu(c,0,c->r[3],c->r[0]); // 801D8DB8
  if (!crb(c,2)) { goto L_801D8DC8; } // 801D8DBC
  c->r[3]=0u+0x00000001u; // 801D8DC0
  goto L_801D8E10; // 801D8DC4
L_801D8DC8:;
  c->r[28]=c->r[28]+0x00000001u; // 801D8DC8
  c->r[29]=c->r[29]+0x0000000Cu; // 801D8DCC
L_801D8DD0:;
  c->r[3]=rotl(c->r[28],0)&0x0000FFFFu; // 801D8DD0
  cmpu(c,0,c->r[3],c->r[30]); // 801D8DD4
  if (crb(c,0)) { IRQCHK(c); goto L_801D8D98; } // 801D8DD8
  c->r[0]=R16(c->r[31]+0x000016E2u); // 801D8DDC
  cmpu(c,0,c->r[3],c->r[0]); // 801D8DE0
  if (!crb(c,0)) { goto L_801D8E0C; } // 801D8DE4
  c->r[0]=R32(c->r[31]+0x000016C0u); // 801D8DE8
  c->r[4]=c->r[27]|c->r[27]; // 801D8DEC
  c->r[3]=c->r[29]+0x00000004u; // 801D8DF0
  c->r[5]=0u+0x00000006u; // 801D8DF4
  W32(c->r[29]+0x00000000u,c->r[0]); // 801D8DF8
  c->lr=0x801D8E00u; f_80004000(c); // 801D8DFC
  c->r[3]=R16(c->r[31]+0x000016E0u); // 801D8E00
  c->r[0]=c->r[3]+0x00000001u; // 801D8E04
  W16(c->r[31]+0x000016E0u,c->r[0]); // 801D8E08
L_801D8E0C:;
  c->r[3]=0u+0x00000000u; // 801D8E0C
L_801D8E10:;
  c->r[11]=c->r[1]+0x00000020u; // 801D8E10
  c->lr=0x801D8E18u; f_800C2E98(c); // 801D8E14
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D8E18
  c->lr=c->r[0]; // 801D8E1C
  c->r[1]=c->r[1]+0x00000020u; // 801D8E20
  return; // 801D8E24
}

// btm_inq_db_new
void f_801D8E28(Ctx* __restrict c) {
  trace_call(0x801D8E28u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8E28
  c->r[0]=c->lr; // 801D8E2C
  c->r[4]=0u+0x80480000u; // 801D8E30
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D8E34
  c->r[4]=c->r[4]+0x000034D8u; // 801D8E38
  c->r[0]=0u+0x0000000Cu; // 801D8E3C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D8E40
  c->r[31]=c->r[4]+0x000016E4u; // 801D8E44
  c->r[4]=0u+0xFFFFFFFFu; // 801D8E48
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D8E4C
  c->r[30]=c->r[31]|c->r[31]; // 801D8E50
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D8E54
  c->r[29]=c->r[3]|c->r[3]; // 801D8E58
  c->r[3]=0u+0x00000000u; // 801D8E5C
  c->ctr=c->r[0]; // 801D8E60
L_801D8E64:;
  c->r[0]=R8(c->r[31]+0x0000001Au); // 801D8E64
  cmps(c,0,(int32_t)c->r[0],0); // 801D8E68
  if (!crb(c,2)) { goto L_801D8EA0; } // 801D8E6C
  c->r[3]=c->r[31]|c->r[31]; // 801D8E70
  c->r[4]=0u+0x00000000u; // 801D8E74
  c->r[5]=0u+0x0000001Cu; // 801D8E78
  c->lr=0x801D8E80u; f_80004350(c); // 801D8E7C
  c->r[4]=c->r[29]|c->r[29]; // 801D8E80
  c->r[3]=c->r[31]+0x0000000Au; // 801D8E84
  c->r[5]=0u+0x00000006u; // 801D8E88
  c->lr=0x801D8E90u; f_80004000(c); // 801D8E8C
  c->r[0]=0u+0x00000001u; // 801D8E90
  c->r[3]=c->r[31]|c->r[31]; // 801D8E94
  W8(c->r[31]+0x0000001Au,c->r[0]); // 801D8E98
  goto L_801D8F10; // 801D8E9C
L_801D8EA0:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 801D8EA0
  cmpu(c,0,c->r[0],c->r[4]); // 801D8EA4
  if (!crb(c,0)) { goto L_801D8EB4; } // 801D8EA8
  c->r[30]=c->r[31]|c->r[31]; // 801D8EAC
  c->r[4]=c->r[0]|c->r[0]; // 801D8EB0
L_801D8EB4:;
  c->r[3]=c->r[3]+0x00000001u; // 801D8EB4
  c->r[31]=c->r[31]+0x0000001Cu; // 801D8EB8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D8E64; } // 801D8EBC
  c->r[3]=0u+0x80480000u; // 801D8EC0
  c->r[3]=c->r[3]+0x000034D8u; // 801D8EC4
  c->r[12]=R32(c->r[3]+0x000016BCu); // 801D8EC8
  cmps(c,0,(int32_t)c->r[12],0); // 801D8ECC
  if (crb(c,2)) { goto L_801D8EE4; } // 801D8ED0
  c->r[3]=c->r[30]+0x00000008u; // 801D8ED4
  c->r[4]=0u+0x00000000u; // 801D8ED8
  c->ctr=c->r[12]; // 801D8EDC
  if (true) { c->lr=0x801D8EE4u; dispatch(c,c->ctr); } // 801D8EE0
L_801D8EE4:;
  c->r[3]=c->r[30]|c->r[30]; // 801D8EE4
  c->r[4]=0u+0x00000000u; // 801D8EE8
  c->r[5]=0u+0x0000001Cu; // 801D8EEC
  c->lr=0x801D8EF4u; f_80004350(c); // 801D8EF0
  c->r[4]=c->r[29]|c->r[29]; // 801D8EF4
  c->r[3]=c->r[30]+0x0000000Au; // 801D8EF8
  c->r[5]=0u+0x00000006u; // 801D8EFC
  c->lr=0x801D8F04u; f_80004000(c); // 801D8F00
  c->r[0]=0u+0x00000001u; // 801D8F04
  c->r[3]=c->r[30]|c->r[30]; // 801D8F08
  W8(c->r[30]+0x0000001Au,c->r[0]); // 801D8F0C
L_801D8F10:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D8F10
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D8F14
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D8F18
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D8F1C
  c->lr=c->r[0]; // 801D8F20
  c->r[1]=c->r[1]+0x00000020u; // 801D8F24
  return; // 801D8F28
}

// btm_set_inq_event_filter
void f_801D8F2C(Ctx* __restrict c) {
  trace_call(0x801D8F2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D8F2C
  c->r[0]=c->lr; // 801D8F30
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D8F34
  c->r[11]=c->r[1]+0x00000030u; // 801D8F38
  c->lr=0x801D8F40u; f_800C2E4C(c); // 801D8F3C
  c->r[27]=c->r[3]|c->r[3]; // 801D8F40
  c->r[28]=c->r[4]|c->r[4]; // 801D8F44
  c->r[29]=c->r[1]+0x00000008u; // 801D8F48
  c->r[30]=0u+0x00000006u; // 801D8F4C
  c->r[3]=0u+0x00000002u; // 801D8F50
  c->lr=0x801D8F58u; f_801CAE20(c); // 801D8F54
  cmps(c,0,(int32_t)c->r[3],0); // 801D8F58
  c->r[31]=c->r[3]|c->r[3]; // 801D8F5C
  if (crb(c,2)) { goto L_801D8FF4; } // 801D8F60
  cmps(c,0,(int32_t)c->r[27],1); // 801D8F64
  if (crb(c,2)) { goto L_801D8F88; } // 801D8F68
  if (!crb(c,0)) { goto L_801D8F7C; } // 801D8F6C
  cmps(c,0,(int32_t)c->r[27],0); // 801D8F70
  if (!crb(c,0)) { goto L_801D8FB4; } // 801D8F74
  goto L_801D8FBC; // 801D8F78
L_801D8F7C:;
  cmps(c,0,(int32_t)c->r[27],3); // 801D8F7C
  if (!crb(c,0)) { goto L_801D8FBC; } // 801D8F80
  goto L_801D8FAC; // 801D8F84
L_801D8F88:;
  c->r[3]=c->r[29]|c->r[29]; // 801D8F88
  c->r[4]=c->r[28]|c->r[28]; // 801D8F8C
  c->r[5]=0u+0x00000003u; // 801D8F90
  c->lr=0x801D8F98u; f_80004000(c); // 801D8F94
  c->r[3]=c->r[1]+0x0000000Bu; // 801D8F98
  c->r[4]=c->r[28]+0x00000003u; // 801D8F9C
  c->r[5]=0u+0x00000003u; // 801D8FA0
  c->lr=0x801D8FA8u; f_80004000(c); // 801D8FA4
  goto L_801D8FC4; // 801D8FA8
L_801D8FAC:;
  c->r[29]=c->r[28]|c->r[28]; // 801D8FAC
  goto L_801D8FC4; // 801D8FB0
L_801D8FB4:;
  c->r[30]=0u+0x00000000u; // 801D8FB4
  goto L_801D8FC4; // 801D8FB8
L_801D8FBC:;
  c->r[3]=0u+0x00000005u; // 801D8FBC
  goto L_801D8FF8; // 801D8FC0
L_801D8FC4:;
  c->r[4]=0u+0x80480000u; // 801D8FC4
  c->r[0]=0u+0x00000001u; // 801D8FC8
  c->r[4]=c->r[4]+0x000034D8u; // 801D8FCC
  c->r[3]=c->r[31]|c->r[31]; // 801D8FD0
  W8(c->r[4]+0x00001844u,c->r[0]); // 801D8FD4
  c->r[5]=c->r[27]|c->r[27]; // 801D8FD8
  c->r[6]=c->r[29]|c->r[29]; // 801D8FDC
  c->r[7]=c->r[30]|c->r[30]; // 801D8FE0
  c->r[4]=0u+0x00000001u; // 801D8FE4
  c->lr=0x801D8FECu; f_801E1DCC(c); // 801D8FE8
  c->r[3]=0u+0x00000001u; // 801D8FEC
  goto L_801D8FF8; // 801D8FF0
L_801D8FF4:;
  c->r[3]=0u+0x00000003u; // 801D8FF4
L_801D8FF8:;
  c->r[11]=c->r[1]+0x00000030u; // 801D8FF8
  c->lr=0x801D9000u; f_800C2E98(c); // 801D8FFC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D9000
  c->lr=c->r[0]; // 801D9004
  c->r[1]=c->r[1]+0x00000030u; // 801D9008
  return; // 801D900C
}

// btm_event_filter_complete
void f_801D9010(Ctx* __restrict c) {
  trace_call(0x801D9010u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9010
  c->r[0]=c->lr; // 801D9014
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D9018
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D901C
  c->r[31]=0u+0x80480000u; // 801D9020
  c->r[31]=c->r[31]+0x000034D8u; // 801D9024
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D9028
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D902C
  c->r[4]=R8(c->r[31]+0x00001845u); // 801D9030
  c->r[29]=R32(c->r[31]+0x000016B8u); // 801D9034
  cmps(c,0,(int32_t)c->r[4],0); // 801D9038
  if (crb(c,2)) { goto L_801D904C; } // 801D903C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801D9040
  W8(c->r[31]+0x00001845u,c->r[0]); // 801D9044
  goto L_801D9214; // 801D9048
L_801D904C:;
  c->r[0]=R8(c->r[31]+0x00001844u); // 801D904C
  cmpu(c,0,c->r[0],0x00000001u); // 801D9050
  if (!crb(c,2)) { goto L_801D9214; } // 801D9054
  c->r[5]=R8(c->r[3]+0x00000000u); // 801D9058
  cmps(c,0,(int32_t)c->r[5],0); // 801D905C
  if (crb(c,2)) { goto L_801D9090; } // 801D9060
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801D9064
  cmpu(c,0,c->r[0],0x00000002u); // 801D9068
  if (crb(c,0)) { goto L_801D9084; } // 801D906C
  c->r[3]=0u+0x000D0000u; // 801D9070
  c->r[4]=0u+0x803A0000u; // 801D9074
  c->r[3]=c->r[3]+0x00000001u; // 801D9078
  c->r[4]=c->r[4]+0xFFFFF808u; // 801D907C
  c->lr=0x801D9084u; f_801CD9F0(c); // 801D9080
L_801D9084:;
  c->r[0]=0u+0x0000000Au; // 801D9084
  W8(c->r[1]+0x00000008u,c->r[0]); // 801D9088
  goto L_801D9098; // 801D908C
L_801D9090:;
  c->r[0]=0u+0x00000000u; // 801D9090
  W8(c->r[1]+0x00000008u,c->r[0]); // 801D9094
L_801D9098:;
  c->r[3]=R8(c->r[31]+0x00001847u); // 801D9098
  cmps(c,0,(int32_t)c->r[3],0); // 801D909C
  if (!crb(c,2)) { goto L_801D90C8; } // 801D90A0
  c->r[0]=0u+0x00000000u; // 801D90A4
  cmps(c,0,(int32_t)c->r[29],0); // 801D90A8
  W8(c->r[31]+0x00001844u,c->r[0]); // 801D90AC
  if (crb(c,2)) { goto L_801D9214; } // 801D90B0
  c->r[12]=c->r[29]|c->r[29]; // 801D90B4
  c->r[3]=c->r[1]+0x00000008u; // 801D90B8
  c->ctr=c->r[12]; // 801D90BC
  if (true) { c->lr=0x801D90C4u; dispatch(c,c->ctr); } // 801D90C0
  goto L_801D9214; // 801D90C4
L_801D90C8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801D90C8
  if (crb(c,2)) { goto L_801D90EC; } // 801D90CC
  c->r[3]=0u+0x0000000Au; // 801D90D0
  c->lr=0x801D90D8u; f_801D94A8(c); // 801D90D4
  c->r[0]=0u+0x00000000u; // 801D90D8
  W8(c->r[31]+0x00001844u,c->r[0]); // 801D90DC
  W8(c->r[31]+0x00001848u,c->r[0]); // 801D90E0
  W8(c->r[31]+0x00001847u,c->r[0]); // 801D90E4
  goto L_801D9214; // 801D90E8
L_801D90EC:;
  cmpu(c,0,c->r[3],0x00000001u); // 801D90EC
  if (!crb(c,2)) { goto L_801D9130; } // 801D90F0
  c->r[3]=R8(c->r[31]+0x00001837u); // 801D90F4
  c->r[4]=c->r[31]+0x00001838u; // 801D90F8
  c->lr=0x801D9100u; f_801D8F2C(c); // 801D90FC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801D9100
  W8(c->r[1]+0x00000008u,c->r[3]); // 801D9104
  cmpu(c,0,c->r[0],0x00000001u); // 801D9108
  if (!crb(c,2)) { goto L_801D911C; } // 801D910C
  c->r[0]=0u+0x00000002u; // 801D9110
  W8(c->r[31]+0x00001847u,c->r[0]); // 801D9114
  goto L_801D9214; // 801D9118
L_801D911C:;
  c->r[0]=0u+0x00000000u; // 801D911C
  c->r[3]=0u+0x0000000Au; // 801D9120
  W8(c->r[31]+0x00001844u,c->r[0]); // 801D9124
  c->lr=0x801D912Cu; f_801D94A8(c); // 801D9128
  goto L_801D9214; // 801D912C
L_801D9130:;
  c->r[4]=R8(c->r[31]+0x00001836u); // 801D9130
  c->r[0]=0u+0x00000003u; // 801D9134
  c->r[3]=0u+0x00000000u; // 801D9138
  W8(c->r[31]+0x00001847u,c->r[0]); // 801D913C
  cmpu(c,0,c->r[4],0x0000000Cu); // 801D9140
  c->r[0]=0u+0x0000000Cu; // 801D9144
  W8(c->r[31]+0x00001844u,c->r[3]); // 801D9148
  if (crb(c,1)) { goto L_801D9154; } // 801D914C
  c->r[0]=c->r[4]|c->r[4]; // 801D9150
L_801D9154:;
  c->r[3]=R8(c->r[31]+0x00001848u); // 801D9154
  c->r[29]=c->r[2]+0xFFFFB048u; // 801D9158
  W8(c->r[31]+0x00001836u,c->r[0]); // 801D915C
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801D9160
  if (crb(c,2)) { goto L_801D916C; } // 801D9164
  c->r[29]=c->r[2]+0xFFFFB04Cu; // 801D9168
L_801D916C:;
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 801D916C
  if (crb(c,2)) { goto L_801D91A0; } // 801D9170
  c->r[3]=R16(c->r[31]+0x00001842u); // 801D9174
  c->r[5]=c->r[29]|c->r[29]; // 801D9178
  c->r[4]=R16(c->r[31]+0x00001840u); // 801D917C
  c->r[6]=R8(c->r[31]+0x00001835u); // 801D9180
  c->r[7]=R8(c->r[31]+0x00001836u); // 801D9184
  c->lr=0x801D918Cu; f_801E09F4(c); // 801D9188
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D918C
  if (!crb(c,2)) { goto L_801D9214; } // 801D9190
  c->r[3]=0u+0x00000003u; // 801D9194
  c->lr=0x801D919Cu; f_801D94A8(c); // 801D9198
  goto L_801D9214; // 801D919C
L_801D91A0:;
  c->r[30]=0u+0x80480000u; // 801D91A0
  c->r[30]=c->r[30]+0x000034D8u; // 801D91A4
  c->r[3]=R32(c->r[30]+0x000016DCu); // 801D91A8
  cmps(c,0,(int32_t)c->r[3],0); // 801D91AC
  if (crb(c,2)) { goto L_801D91C0; } // 801D91B0
  c->lr=0x801D91B8u; f_801CAF10(c); // 801D91B4
  c->r[0]=0u+0x00000000u; // 801D91B8
  W32(c->r[30]+0x000016DCu,c->r[0]); // 801D91BC
L_801D91C0:;
  c->r[0]=0u+0x00000000u; // 801D91C0
  c->r[3]=0u+0x00000708u; // 801D91C4
  W16(c->r[30]+0x000016E0u,c->r[0]); // 801D91C8
  W16(c->r[30]+0x000016E2u,c->r[0]); // 801D91CC
  c->lr=0x801D91D4u; f_801CAC80(c); // 801D91D0
  cmps(c,0,(int32_t)c->r[3],0); // 801D91D4
  W32(c->r[31]+0x000016DCu,c->r[3]); // 801D91D8
  if (crb(c,2)) { goto L_801D91F4; } // 801D91DC
  c->r[0]=0u+0x00000096u; // 801D91E0
  c->r[4]=0u+0x00000000u; // 801D91E4
  W16(c->r[31]+0x000016E2u,c->r[0]); // 801D91E8
  c->r[5]=0u+0x00000708u; // 801D91EC
  c->lr=0x801D91F4u; f_80004350(c); // 801D91F0
L_801D91F4:;
  c->r[4]=R8(c->r[31]+0x00001835u); // 801D91F4
  c->r[3]=c->r[29]|c->r[29]; // 801D91F8
  c->r[5]=0u+0x00000000u; // 801D91FC
  c->lr=0x801D9204u; f_801E08EC(c); // 801D9200
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D9204
  if (!crb(c,2)) { goto L_801D9214; } // 801D9208
  c->r[3]=0u+0x00000003u; // 801D920C
  c->lr=0x801D9214u; f_801D94A8(c); // 801D9210
L_801D9214:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D9214
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D9218
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D921C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D9220
  c->lr=c->r[0]; // 801D9224
  c->r[1]=c->r[1]+0x00000020u; // 801D9228
  return; // 801D922C
}

// btm_process_inq_results
void f_801D9230(Ctx* __restrict c) {
  trace_call(0x801D9230u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9230
  c->r[0]=c->lr; // 801D9234
  W32(c->r[1]+0x00000064u,c->r[0]); // 801D9238
  c->r[11]=c->r[1]+0x00000060u; // 801D923C
  c->lr=0x801D9244u; f_800C2E20(c); // 801D9240
  c->r[5]=0u+0x80480000u; // 801D9244
  c->r[18]=c->r[4]|c->r[4]; // 801D9248
  c->r[27]=c->r[5]+0x000034D8u; // 801D924C
  c->r[23]=0u+0x00000001u; // 801D9250
  c->r[0]=R8(c->r[27]+0x00001848u); // 801D9254
  c->r[21]=0u+0x00000000u; // 801D9258
  c->r[22]=R32(c->r[27]+0x000016B4u); // 801D925C
  c->r[20]=0u+0x00000000u; // 801D9260
  cmps(c,0,(int32_t)c->r[0],0); // 801D9264
  if (crb(c,2)) { goto L_801D9490; } // 801D9268
  c->r[28]=R8(c->r[3]+0x00000000u); // 801D926C
  c->r[17]=c->r[3]+0x00000001u; // 801D9270
  c->r[26]=0u+0x00000000u; // 801D9274
  c->r[31]=0u+0x0000007Fu; // 801D9278
  c->r[16]=0u+0x00000000u; // 801D927C
  goto L_801D9484; // 801D9280
L_801D9284:;
  c->r[0]=R8(c->r[17]+0x00000000u); // 801D9284
  cmps(c,0,(int32_t)c->r[18],0); // 801D9288
  W8(c->r[1]+0x00000011u,c->r[0]); // 801D928C
  c->r[0]=R8(c->r[17]+0x00000001u); // 801D9290
  W8(c->r[1]+0x00000010u,c->r[0]); // 801D9294
  c->r[0]=R8(c->r[17]+0x00000002u); // 801D9298
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 801D929C
  c->r[0]=R8(c->r[17]+0x00000003u); // 801D92A0
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801D92A4
  c->r[0]=R8(c->r[17]+0x00000004u); // 801D92A8
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801D92AC
  c->r[0]=R8(c->r[17]+0x00000005u); // 801D92B0
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801D92B4
  c->r[29]=R8(c->r[17]+0x00000006u); // 801D92B8
  c->r[30]=R8(c->r[17]+0x00000007u); // 801D92BC
  c->r[17]=c->r[17]+0x00000008u; // 801D92C0
  if (!crb(c,2)) { goto L_801D92D0; } // 801D92C4
  c->r[21]=R8(c->r[17]+0x00000000u); // 801D92C8
  c->r[17]=c->r[17]+0x00000001u; // 801D92CC
L_801D92D0:;
  c->r[0]=R8(c->r[17]+0x00000000u); // 801D92D0
  cmps(c,0,(int32_t)c->r[18],0); // 801D92D4
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801D92D8
  c->r[0]=R8(c->r[17]+0x00000001u); // 801D92DC
  W8(c->r[1]+0x00000009u,c->r[0]); // 801D92E0
  c->r[0]=R8(c->r[17]+0x00000002u); // 801D92E4
  W8(c->r[1]+0x00000008u,c->r[0]); // 801D92E8
  c->r[0]=R8(c->r[17]+0x00000004u); // 801D92EC
  c->r[3]=R8(c->r[17]+0x00000003u); // 801D92F0
  c->r[17]=c->r[17]+0x00000005u; // 801D92F4
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801D92F8
  c->r[0]=c->r[3]+c->r[0]; // 801D92FC
  c->r[19]=rotl(c->r[0],0)&0x0000FFFFu; // 801D9300
  if (crb(c,2)) { goto L_801D9310; } // 801D9304
  c->r[20]=R8(c->r[17]+0x00000000u); // 801D9308
  c->r[17]=c->r[17]+0x00000001u; // 801D930C
L_801D9310:;
  c->r[3]=c->r[1]+0x0000000Cu; // 801D9310
  c->lr=0x801D9318u; f_801D8D4C(c); // 801D9314
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D9318
  if (!crb(c,2)) { goto L_801D9480; } // 801D931C
  c->r[12]=R32(c->r[27]+0x0000184Cu); // 801D9320
  cmps(c,0,(int32_t)c->r[12],0); // 801D9324
  if (crb(c,2)) { goto L_801D9344; } // 801D9328
  c->r[3]=c->r[1]+0x0000000Cu; // 801D932C
  c->r[4]=c->r[1]+0x00000008u; // 801D9330
  c->ctr=c->r[12]; // 801D9334
  if (true) { c->lr=0x801D933Cu; dispatch(c,c->ctr); } // 801D9338
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D933C
  if (crb(c,2)) { goto L_801D9480; } // 801D9340
L_801D9344:;
  c->r[25]=c->r[27]+0x000016E4u; // 801D9344
  c->r[24]=0u+0x00000000u; // 801D9348
L_801D934C:;
  c->r[0]=R8(c->r[25]+0x0000001Au); // 801D934C
  cmps(c,0,(int32_t)c->r[0],0); // 801D9350
  if (crb(c,2)) { goto L_801D9374; } // 801D9354
  c->r[3]=c->r[25]+0x0000000Au; // 801D9358
  c->r[4]=c->r[1]+0x0000000Cu; // 801D935C
  c->r[5]=0u+0x00000006u; // 801D9360
  c->lr=0x801D9368u; f_800C6228(c); // 801D9364
  cmps(c,0,(int32_t)c->r[3],0); // 801D9368
  if (!crb(c,2)) { goto L_801D9374; } // 801D936C
  goto L_801D9388; // 801D9370
L_801D9374:;
  c->r[24]=c->r[24]+0x00000001u; // 801D9374
  c->r[25]=c->r[25]+0x0000001Cu; // 801D9378
  cmpu(c,0,c->r[24],0x0000000Cu); // 801D937C
  if (crb(c,0)) { IRQCHK(c); goto L_801D934C; } // 801D9380
  c->r[25]=0u+0x00000000u; // 801D9384
L_801D9388:;
  cmps(c,0,(int32_t)c->r[25],0); // 801D9388
  if (!crb(c,2)) { goto L_801D93A4; } // 801D938C
  c->r[3]=c->r[1]+0x0000000Cu; // 801D9390
  c->lr=0x801D9398u; f_801D8E28(c); // 801D9394
  c->r[25]=c->r[3]|c->r[3]; // 801D9398
  c->r[23]=0u+0x00000001u; // 801D939C
  goto L_801D93B8; // 801D93A0
L_801D93A4:;
  c->r[3]=R32(c->r[25]+0x00000004u); // 801D93A4
  c->r[0]=R32(c->r[27]+0x000016C0u); // 801D93A8
  cmpu(c,0,c->r[3],c->r[0]); // 801D93AC
  if (!crb(c,2)) { goto L_801D93B8; } // 801D93B0
  c->r[23]=0u+0x00000000u; // 801D93B4
L_801D93B8:;
  cmpu(c,0,c->r[23],0x00000001u); // 801D93B8
  if (!crb(c,2)) { goto L_801D9480; } // 801D93BC
  W8(c->r[25]+0x00000013u,c->r[29]); // 801D93C0
  cmps(c,0,(int32_t)c->r[18],0); // 801D93C4
  c->r[5]=R8(c->r[1]+0x00000008u); // 801D93C8
  c->r[0]=c->r[19]|0x00008000u; // 801D93CC
  W8(c->r[25]+0x00000014u,c->r[30]); // 801D93D0
  c->r[24]=c->r[25]+0x00000008u; // 801D93D4
  c->r[4]=R8(c->r[1]+0x00000009u); // 801D93D8
  W8(c->r[25]+0x00000015u,c->r[21]); // 801D93DC
  c->r[3]=R8(c->r[1]+0x0000000Au); // 801D93E0
  W8(c->r[25]+0x00000010u,c->r[5]); // 801D93E4
  W8(c->r[25]+0x00000011u,c->r[4]); // 801D93E8
  W8(c->r[25]+0x00000012u,c->r[3]); // 801D93EC
  W16(c->r[25]+0x00000008u,c->r[0]); // 801D93F0
  if (crb(c,2)) { goto L_801D9400; } // 801D93F4
  W8(c->r[24]+0x0000000Eu,c->r[20]); // 801D93F8
  goto L_801D9404; // 801D93FC
L_801D9400:;
  W8(c->r[24]+0x0000000Eu,c->r[31]); // 801D9400
L_801D9404:;
  c->lr=0x801D9408u; f_801CBCF0(c); // 801D9404
  W32(c->r[25]+0x00000000u,c->r[3]); // 801D9408
  c->r[0]=R32(c->r[27]+0x000016C0u); // 801D940C
  W32(c->r[25]+0x00000004u,c->r[0]); // 801D9410
  c->r[0]=R8(c->r[27]+0x00001848u); // 801D9414
  c->r[3]=R8(c->r[27]+0x0000183Fu); // 801D9418
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801D941C
  c->r[0]=c->r[3]+0x00000001u; // 801D9420
  W8(c->r[27]+0x0000183Fu,c->r[0]); // 801D9424
  if (!crb(c,2)) { goto L_801D9448; } // 801D9428
  c->r[3]=R8(c->r[27]+0x00001836u); // 801D942C
  cmps(c,0,(int32_t)c->r[3],0); // 801D9430
  if (crb(c,2)) { goto L_801D9448; } // 801D9434
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801D9438
  cmpu(c,0,c->r[0],c->r[3]); // 801D943C
  if (!crb(c,2)) { goto L_801D9448; } // 801D9440
  c->lr=0x801D9448u; f_801E0994(c); // 801D9444
L_801D9448:;
  cmps(c,0,(int32_t)c->r[22],0); // 801D9448
  W8(c->r[25]+0x00000018u,c->r[16]); // 801D944C
  if (crb(c,2)) { goto L_801D9464; } // 801D9450
  c->r[12]=c->r[22]|c->r[22]; // 801D9454
  c->r[3]=c->r[24]|c->r[24]; // 801D9458
  c->ctr=c->r[12]; // 801D945C
  if (true) { c->lr=0x801D9464u; dispatch(c,c->ctr); } // 801D9460
L_801D9464:;
  c->r[12]=R32(c->r[27]+0x000016BCu); // 801D9464
  cmps(c,0,(int32_t)c->r[12],0); // 801D9468
  if (crb(c,2)) { goto L_801D9480; } // 801D946C
  c->r[3]=c->r[25]+0x00000008u; // 801D9470
  c->r[4]=0u+0x00000001u; // 801D9474
  c->ctr=c->r[12]; // 801D9478
  if (true) { c->lr=0x801D9480u; dispatch(c,c->ctr); } // 801D947C
L_801D9480:;
  c->r[26]=c->r[26]+0x00000001u; // 801D9480
L_801D9484:;
  c->r[0]=rotl(c->r[26],0)&0x000000FFu; // 801D9484
  cmpu(c,0,c->r[0],c->r[28]); // 801D9488
  if (crb(c,0)) { IRQCHK(c); goto L_801D9284; } // 801D948C
L_801D9490:;
  c->r[11]=c->r[1]+0x00000060u; // 801D9490
  c->lr=0x801D9498u; f_800C2E6C(c); // 801D9494
  c->r[0]=R32(c->r[1]+0x00000064u); // 801D9498
  c->lr=c->r[0]; // 801D949C
  c->r[1]=c->r[1]+0x00000060u; // 801D94A0
  return; // 801D94A4
}

// btm_process_inq_complete
void f_801D94A8(Ctx* __restrict c) {
  trace_call(0x801D94A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D94A8
  c->r[0]=c->lr; // 801D94AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D94B0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D94B4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D94B8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D94BC
  c->r[29]=0u+0x80480000u; // 801D94C0
  c->r[29]=c->r[29]+0x000034D8u; // 801D94C4
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D94C8
  c->r[0]=R8(c->r[29]+0x00001848u); // 801D94CC
  c->r[28]=R32(c->r[29]+0x000016B0u); // 801D94D0
  cmps(c,0,(int32_t)c->r[0],0); // 801D94D4
  if (crb(c,2)) { goto L_801D958C; } // 801D94D8
  c->r[4]=R32(c->r[29]+0x000016C0u); // 801D94DC
  cmps(c,0,(int32_t)c->r[3],0); // 801D94E0
  c->r[3]=0u+0x0000000Au; // 801D94E4
  c->r[0]=c->r[4]+0x00000001u; // 801D94E8
  W32(c->r[29]+0x000016C0u,c->r[0]); // 801D94EC
  if (!crb(c,2)) { goto L_801D94F8; } // 801D94F0
  c->r[3]=0u+0x00000000u; // 801D94F4
L_801D94F8:;
  c->r[0]=R8(c->r[29]+0x00001848u); // 801D94F8
  W8(c->r[29]+0x0000183Eu,c->r[3]); // 801D94FC
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801D9500
  if (!crb(c,2)) { goto L_801D958C; } // 801D9504
  c->r[31]=0u+0x80480000u; // 801D9508
  c->r[30]=0u+0x00000000u; // 801D950C
  c->r[31]=c->r[31]+0x000034D8u; // 801D9510
  W32(c->r[29]+0x000016B4u,c->r[30]); // 801D9514
  c->r[3]=R32(c->r[31]+0x000016DCu); // 801D9518
  W8(c->r[29]+0x00001848u,c->r[30]); // 801D951C
  cmps(c,0,(int32_t)c->r[3],0); // 801D9520
  W8(c->r[29]+0x00001847u,c->r[30]); // 801D9524
  W32(c->r[29]+0x000016B0u,c->r[30]); // 801D9528
  if (crb(c,2)) { goto L_801D9538; } // 801D952C
  c->lr=0x801D9534u; f_801CAF10(c); // 801D9530
  W32(c->r[31]+0x000016DCu,c->r[30]); // 801D9534
L_801D9538:;
  c->r[3]=0u+0x80480000u; // 801D9538
  c->r[4]=0u+0x00000000u; // 801D953C
  c->r[3]=c->r[3]+0x000034D8u; // 801D9540
  W16(c->r[31]+0x000016E0u,c->r[4]); // 801D9544
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801D9548
  W16(c->r[31]+0x000016E2u,c->r[4]); // 801D954C
  cmpu(c,0,c->r[0],0x00000005u); // 801D9550
  if (crb(c,0)) { goto L_801D9574; } // 801D9554
  c->r[3]=0u+0x000D0000u; // 801D9558
  c->r[4]=0u+0x803A0000u; // 801D955C
  c->r[5]=R8(c->r[29]+0x0000183Eu); // 801D9560
  c->r[3]=c->r[3]+0x00000004u; // 801D9564
  c->r[6]=R8(c->r[29]+0x0000183Fu); // 801D9568
  c->r[4]=c->r[4]+0xFFFFF844u; // 801D956C
  c->lr=0x801D9574u; f_801CDA10(c); // 801D9570
L_801D9574:;
  cmps(c,0,(int32_t)c->r[28],0); // 801D9574
  if (crb(c,2)) { goto L_801D958C; } // 801D9578
  c->r[12]=c->r[28]|c->r[28]; // 801D957C
  c->r[3]=c->r[29]+0x0000183Eu; // 801D9580
  c->ctr=c->r[12]; // 801D9584
  if (true) { c->lr=0x801D958Cu; dispatch(c,c->ctr); } // 801D9588
L_801D958C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D958C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D9590
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D9594
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D9598
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D959C
  c->lr=c->r[0]; // 801D95A0
  c->r[1]=c->r[1]+0x00000020u; // 801D95A4
  return; // 801D95A8
}

// btm_initiate_rem_name
void f_801D95AC(Ctx* __restrict c) {
  trace_call(0x801D95ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D95AC
  c->r[0]=c->lr; // 801D95B0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801D95B4
  c->r[11]=c->r[1]+0x00000030u; // 801D95B8
  c->lr=0x801D95C0u; f_800C2E3C(c); // 801D95BC
  c->r[31]=0u+0x80480000u; // 801D95C0
  c->r[23]=c->r[3]|c->r[3]; // 801D95C4
  c->r[24]=c->r[4]|c->r[4]; // 801D95C8
  c->r[25]=c->r[5]|c->r[5]; // 801D95CC
  c->r[26]=c->r[6]|c->r[6]; // 801D95D0
  c->r[27]=c->r[7]|c->r[7]; // 801D95D4
  c->r[31]=c->r[31]+0x000034D8u; // 801D95D8
  c->r[30]=0u+0x00000001u; // 801D95DC
  c->r[29]=0u+0x00000001u; // 801D95E0
  c->r[28]=0u+0x00000001u; // 801D95E4
  c->lr=0x801D95ECu; f_801D65D4(c); // 801D95E8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801D95EC
  if (!crb(c,2)) { goto L_801D95FC; } // 801D95F0
  c->r[3]=0u+0x00000006u; // 801D95F4
  goto L_801D96E4; // 801D95F8
L_801D95FC:;
  c->r[3]=R8(c->r[31]+0x000016AEu); // 801D95FC
  c->r[0]=c->r[3]&c->r[25]; cr0(c,c->r[0]); // 801D9600
  if (!crb(c,2)) { goto L_801D96DC; } // 801D9604
  cmpu(c,0,c->r[25],0x00000001u); // 801D9608
  if (!crb(c,2)) { goto L_801D9648; } // 801D960C
  cmps(c,0,(int32_t)c->r[3],0); // 801D9610
  if (crb(c,2)) { goto L_801D9640; } // 801D9614
  c->r[3]=c->r[23]|c->r[23]; // 801D9618
  c->r[4]=c->r[31]+0x000016A8u; // 801D961C
  c->r[5]=0u+0x00000006u; // 801D9620
  c->lr=0x801D9628u; f_800C6228(c); // 801D9624
  cmps(c,0,(int32_t)c->r[3],0); // 801D9628
  if (!crb(c,2)) { goto L_801D9638; } // 801D962C
  c->r[30]=0u+0x00000000u; // 801D9630
  goto L_801D9640; // 801D9634
L_801D9638:;
  c->r[3]=0u+0x00000002u; // 801D9638
  goto L_801D96E4; // 801D963C
L_801D9640:;
  W32(c->r[31]+0x0000167Cu,c->r[27]); // 801D9640
  goto L_801D9658; // 801D9644
L_801D9648:;
  cmps(c,0,(int32_t)c->r[3],0); // 801D9648
  if (crb(c,2)) { goto L_801D9658; } // 801D964C
  c->r[3]=0u+0x00000002u; // 801D9650
  goto L_801D96E4; // 801D9654
L_801D9658:;
  cmps(c,0,(int32_t)c->r[30],0); // 801D9658
  if (crb(c,2)) { goto L_801D96BC; } // 801D965C
  c->r[4]=c->r[23]|c->r[23]; // 801D9660
  c->r[3]=c->r[31]+0x000016A8u; // 801D9664
  c->r[5]=0u+0x00000006u; // 801D9668
  c->lr=0x801D9670u; f_80004000(c); // 801D966C
  c->r[5]=c->r[26]|c->r[26]; // 801D9670
  c->r[3]=c->r[31]+0x00001680u; // 801D9674
  c->r[4]=0u+0x0000000Au; // 801D9678
  c->lr=0x801D9680u; f_801CDFE0(c); // 801D967C
  cmps(c,0,(int32_t)c->r[24],0); // 801D9680
  if (crb(c,2)) { goto L_801D96A4; } // 801D9684
  c->r[0]=R16(c->r[24]+0x00000000u); // 801D9688
  c->r[3]=c->r[23]|c->r[23]; // 801D968C
  c->r[4]=R8(c->r[24]+0x0000000Bu); // 801D9690
  c->r[5]=R8(c->r[24]+0x0000000Du); // 801D9694
  c->r[6]=c->r[0]|0x00008000u; // 801D9698
  c->lr=0x801D96A0u; f_801E13C0(c); // 801D969C
  goto L_801D96B8; // 801D96A0
L_801D96A4:;
  c->r[3]=c->r[23]|c->r[23]; // 801D96A4
  c->r[4]=0u+0x00000001u; // 801D96A8
  c->r[5]=0u+0x00000000u; // 801D96AC
  c->r[6]=0u+0x00000000u; // 801D96B0
  c->lr=0x801D96B8u; f_801E13C0(c); // 801D96B4
L_801D96B8:;
  c->r[29]=c->r[3]|c->r[3]; // 801D96B8
L_801D96BC:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; cr0(c,c->r[0]); // 801D96BC
  if (crb(c,2)) { goto L_801D96D4; } // 801D96C0
  c->r[0]=R8(c->r[31]+0x000016AEu); // 801D96C4
  c->r[0]=c->r[0]|c->r[25]; // 801D96C8
  W8(c->r[31]+0x000016AEu,c->r[0]); // 801D96CC
  goto L_801D96E0; // 801D96D0
L_801D96D4:;
  c->r[28]=0u+0x00000003u; // 801D96D4
  goto L_801D96E0; // 801D96D8
L_801D96DC:;
  c->r[28]=0u+0x00000002u; // 801D96DC
L_801D96E0:;
  c->r[3]=c->r[28]|c->r[28]; // 801D96E0
L_801D96E4:;
  c->r[11]=c->r[1]+0x00000030u; // 801D96E4
  c->lr=0x801D96ECu; f_800C2E88(c); // 801D96E8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801D96EC
  c->lr=c->r[0]; // 801D96F0
  c->r[1]=c->r[1]+0x00000030u; // 801D96F4
  return; // 801D96F8
}

// btm_process_remote_name
void f_801D96FC(Ctx* __restrict c) {
  trace_call(0x801D96FCu);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D96FC
  c->r[0]=c->lr; // 801D9700
  W32(c->r[1]+0x00000124u,c->r[0]); // 801D9704
  c->r[11]=c->r[1]+0x00000120u; // 801D9708
  c->lr=0x801D9710u; f_800C2E48(c); // 801D970C
  c->r[31]=0u+0x80480000u; // 801D9710
  c->r[26]=c->r[4]|c->r[4]; // 801D9714
  c->r[31]=c->r[31]+0x000034D8u; // 801D9718
  c->r[27]=c->r[5]|c->r[5]; // 801D971C
  c->r[30]=R32(c->r[31]+0x0000167Cu); // 801D9720
  c->r[28]=c->r[6]|c->r[6]; // 801D9724
  c->r[29]=R8(c->r[31]+0x000016AEu); // 801D9728
  c->r[3]=c->r[31]+0x00001680u; // 801D972C
  c->lr=0x801D9734u; f_801CE050(c); // 801D9730
  c->r[3]=0u+0x00000000u; // 801D9734
  cmps(c,0,(int32_t)c->r[28],0); // 801D9738
  W8(c->r[31]+0x000016AEu,c->r[3]); // 801D973C
  if (!crb(c,2)) { goto L_801D97F4; } // 801D9740
  cmpu(c,0,c->r[27],0x000000F8u); // 801D9744
  c->r[4]=c->r[1]+0x0000000Cu; // 801D9748
  c->r[3]=0u+0x000000F8u; // 801D974C
  if (!crb(c,0)) { goto L_801D9758; } // 801D9750
  c->r[3]=c->r[27]|c->r[27]; // 801D9754
L_801D9758:;
  c->r[5]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[5]); // 801D9758
  c->r[0]=0u+0x00000000u; // 801D975C
  W16(c->r[1]+0x0000000Au,c->r[3]); // 801D9760
  W16(c->r[1]+0x00000008u,c->r[0]); // 801D9764
  c->r[3]=c->r[5]|c->r[5]; // 801D9768
  if (crb(c,2)) { goto L_801D9804; } // 801D976C
  c->r[0]=rotl(c->r[5],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 801D9770
  c->ctr=c->r[0]; // 801D9774
  if (crb(c,2)) { goto L_801D97D4; } // 801D9778
L_801D977C:;
  c->r[0]=R8(c->r[26]+0x00000000u); // 801D977C
  c->r[5]=c->r[5]+0xFFFFFFF8u; // 801D9780
  W8(c->r[4]+0x00000000u,c->r[0]); // 801D9784
  c->r[0]=R8(c->r[26]+0x00000001u); // 801D9788
  W8(c->r[4]+0x00000001u,c->r[0]); // 801D978C
  c->r[0]=R8(c->r[26]+0x00000002u); // 801D9790
  W8(c->r[4]+0x00000002u,c->r[0]); // 801D9794
  c->r[0]=R8(c->r[26]+0x00000003u); // 801D9798
  W8(c->r[4]+0x00000003u,c->r[0]); // 801D979C
  c->r[0]=R8(c->r[26]+0x00000004u); // 801D97A0
  W8(c->r[4]+0x00000004u,c->r[0]); // 801D97A4
  c->r[0]=R8(c->r[26]+0x00000005u); // 801D97A8
  W8(c->r[4]+0x00000005u,c->r[0]); // 801D97AC
  c->r[0]=R8(c->r[26]+0x00000006u); // 801D97B0
  W8(c->r[4]+0x00000006u,c->r[0]); // 801D97B4
  c->r[0]=R8(c->r[26]+0x00000007u); // 801D97B8
  c->r[26]=c->r[26]+0x00000008u; // 801D97BC
  W8(c->r[4]+0x00000007u,c->r[0]); // 801D97C0
  c->r[4]=c->r[4]+0x00000008u; // 801D97C4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D977C; } // 801D97C8
  c->r[3]=c->r[3]&0x00000007u; cr0(c,c->r[3]); // 801D97CC
  if (crb(c,2)) { goto L_801D9804; } // 801D97D0
L_801D97D4:;
  c->ctr=c->r[3]; // 801D97D4
L_801D97D8:;
  c->r[0]=R8(c->r[26]+0x00000000u); // 801D97D8
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801D97DC
  c->r[26]=c->r[26]+0x00000001u; // 801D97E0
  W8(c->r[4]+0x00000000u,c->r[0]); // 801D97E4
  c->r[4]=c->r[4]+0x00000001u; // 801D97E8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D97D8; } // 801D97EC
  goto L_801D9804; // 801D97F0
L_801D97F4:;
  c->r[0]=0u+0x00000009u; // 801D97F4
  W16(c->r[1]+0x0000000Au,c->r[3]); // 801D97F8
  W16(c->r[1]+0x00000008u,c->r[0]); // 801D97FC
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 801D9800
L_801D9804:;
  c->r[3]=c->r[31]+0x000016A8u; // 801D9804
  c->r[4]=0u+0x00000000u; // 801D9808
  c->r[5]=0u+0x00000006u; // 801D980C
  c->lr=0x801D9814u; f_80004350(c); // 801D9810
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 801D9814
  if (crb(c,2)) { goto L_801D983C; } // 801D9818
  c->r[0]=0u+0x00000000u; // 801D981C
  cmps(c,0,(int32_t)c->r[30],0); // 801D9820
  W32(c->r[31]+0x0000167Cu,c->r[0]); // 801D9824
  if (crb(c,2)) { goto L_801D983C; } // 801D9828
  c->r[12]=c->r[30]|c->r[30]; // 801D982C
  c->r[3]=c->r[1]+0x00000008u; // 801D9830
  c->ctr=c->r[12]; // 801D9834
  if (true) { c->lr=0x801D983Cu; dispatch(c,c->ctr); } // 801D9838
L_801D983C:;
  c->r[11]=c->r[1]+0x00000120u; // 801D983C
  c->lr=0x801D9844u; f_800C2E94(c); // 801D9840
  c->r[0]=R32(c->r[1]+0x00000124u); // 801D9844
  c->lr=c->r[0]; // 801D9848
  c->r[1]=c->r[1]+0x00000120u; // 801D984C
  return; // 801D9850
}

// btm_inq_rmt_name_failed
void f_801D9854(Ctx* __restrict c) {
  trace_call(0x801D9854u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9854
  c->r[0]=c->lr; // 801D9858
  c->r[3]=0u+0x00000000u; // 801D985C
  c->r[4]=0u+0x00000000u; // 801D9860
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D9864
  c->r[5]=0u+0x00000000u; // 801D9868
  c->r[6]=0u+0x0000001Fu; // 801D986C
  c->lr=0x801D9874u; f_801D96FC(c); // 801D9870
  c->r[3]=0u+0x00000000u; // 801D9874
  c->r[4]=0u+0x00000000u; // 801D9878
  c->r[5]=0u+0x0000001Fu; // 801D987C
  c->lr=0x801D9884u; f_801DC758(c); // 801D9880
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D9884
  c->lr=c->r[0]; // 801D9888
  c->r[1]=c->r[1]+0x00000010u; // 801D988C
  return; // 801D9890
}

// btm_init
void f_801D9894(Ctx* __restrict c) {
  trace_call(0x801D9894u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9894
  c->r[0]=c->lr; // 801D9898
  c->r[4]=0u+0x00000000u; // 801D989C
  c->r[5]=0u+0x000027C4u; // 801D98A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D98A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D98A8
  c->r[31]=0u+0x80480000u; // 801D98AC
  c->r[3]=c->r[31]+0x000034D8u; // 801D98B0
  c->lr=0x801D98B8u; f_80004350(c); // 801D98B4
  c->r[3]=c->r[31]+0x000034D8u; // 801D98B8
  c->r[0]=0u+0x00000000u; // 801D98BC
  W8(c->r[3]+0x000027C0u,c->r[0]); // 801D98C0
  c->lr=0x801D98C8u; f_801D8D48(c); // 801D98C4
  c->lr=0x801D98CCu; f_801D3F30(c); // 801D98C8
  c->r[3]=0u+0x00000002u; // 801D98CC
  c->lr=0x801D98D4u; f_801DC648(c); // 801D98D0
  c->lr=0x801D98D8u; f_801DA584(c); // 801D98D4
  c->lr=0x801D98DCu; f_801D6340(c); // 801D98D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D98DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D98E0
  c->lr=c->r[0]; // 801D98E4
  c->r[1]=c->r[1]+0x00000010u; // 801D98E8
  return; // 801D98EC
}

// BTM_PmRegister
void f_801D98F0(Ctx* __restrict c) {
  trace_call(0x801D98F0u);
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 801D98F0
  if (crb(c,2)) { goto L_801D992C; } // 801D98F4
  c->r[0]=R8(c->r[4]+0x00000000u); // 801D98F8
  cmpu(c,0,c->r[0],0x00000002u); // 801D98FC
  if (crb(c,0)) { goto L_801D990C; } // 801D9900
  c->r[3]=0u+0x00000005u; // 801D9904
  return; // 801D9908
L_801D990C:;
  c->r[3]=0u+0x80480000u; // 801D990C
  c->r[0]=rotl(c->r[0],3)&0x000007F8u; // 801D9910
  c->r[3]=c->r[3]+0x000034D8u; // 801D9914
  c->r[5]=0u+0x00000000u; // 801D9918
  c->r[4]=c->r[3]+c->r[0]; // 801D991C
  W8(c->r[4]+0x00000558u,c->r[5]); // 801D9920
  c->r[3]=0u+0x00000000u; // 801D9924
  return; // 801D9928
L_801D992C:;
  c->r[6]=0u+0x80480000u; // 801D992C
  c->r[0]=0u+0x00000002u; // 801D9930
  c->r[6]=c->r[6]+0x000034D8u; // 801D9934
  c->r[7]=0u+0x00000000u; // 801D9938
  c->ctr=c->r[0]; // 801D993C
L_801D9940:;
  c->r[0]=R8(c->r[6]+0x00000558u); // 801D9940
  cmps(c,0,(int32_t)c->r[0],0); // 801D9944
  if (!crb(c,2)) { goto L_801D9998; } // 801D9948
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 801D994C
  if (crb(c,2)) { goto L_801D9978; } // 801D9950
  cmps(c,0,(int32_t)c->r[5],0); // 801D9954
  if (!crb(c,2)) { goto L_801D9964; } // 801D9958
  c->r[3]=0u+0x00000005u; // 801D995C
  return; // 801D9960
L_801D9964:;
  c->r[6]=0u+0x80480000u; // 801D9964
  c->r[0]=rotl(c->r[7],3)&0xFFFFFFF8u; // 801D9968
  c->r[6]=c->r[6]+0x000034D8u; // 801D996C
  c->r[6]=c->r[6]+c->r[0]; // 801D9970
  W32(c->r[6]+0x00000554u,c->r[5]); // 801D9974
L_801D9978:;
  c->r[5]=0u+0x80480000u; // 801D9978
  c->r[0]=rotl(c->r[7],3)&0xFFFFFFF8u; // 801D997C
  c->r[5]=c->r[5]+0x000034D8u; // 801D9980
  c->r[5]=c->r[5]+c->r[0]; // 801D9984
  W8(c->r[5]+0x00000558u,c->r[3]); // 801D9988
  c->r[3]=0u+0x00000000u; // 801D998C
  W8(c->r[4]+0x00000000u,c->r[7]); // 801D9990
  return; // 801D9994
L_801D9998:;
  c->r[6]=c->r[6]+0x00000008u; // 801D9998
  c->r[7]=c->r[7]+0x00000001u; // 801D999C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801D9940; } // 801D99A0
  c->r[3]=0u+0x00000003u; // 801D99A4
  return; // 801D99A8
}

// BTM_SetPowerMode
void f_801D99AC(Ctx* __restrict c) {
  trace_call(0x801D99ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D99AC
  c->r[0]=c->lr; // 801D99B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D99B4
  c->r[11]=c->r[1]+0x00000020u; // 801D99B8
  c->lr=0x801D99C0u; f_800C2E48(c); // 801D99BC
  cmpu(c,0,c->r[3],0x00000002u); // 801D99C0
  c->r[27]=c->r[3]|c->r[3]; // 801D99C4
  c->r[26]=c->r[4]|c->r[4]; // 801D99C8
  c->r[28]=c->r[5]|c->r[5]; // 801D99CC
  if (crb(c,0)) { goto L_801D99D8; } // 801D99D0
  c->r[27]=0u+0x00000080u; // 801D99D4
L_801D99D8:;
  cmps(c,0,(int32_t)c->r[5],0); // 801D99D8
  if (!crb(c,2)) { goto L_801D99E8; } // 801D99DC
  c->r[3]=0u+0x00000005u; // 801D99E0
  goto L_801D9B64; // 801D99E4
L_801D99E8:;
  c->r[0]=R8(c->r[5]+0x00000008u); // 801D99E8
  c->r[3]=0u+0x80480000u; // 801D99EC
  c->r[3]=c->r[3]+0x000034D8u; // 801D99F0
  c->r[29]=0u+0x00000000u; // 801D99F4
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFEFu; // 801D99F8
  c->r[30]=c->r[3]+0x00000034u; // 801D99FC
L_801D9A00:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 801D9A00
  cmps(c,0,(int32_t)c->r[0],0); // 801D9A04
  if (crb(c,2)) { goto L_801D9A24; } // 801D9A08
  c->r[4]=c->r[26]|c->r[26]; // 801D9A0C
  c->r[3]=c->r[30]+0x00000008u; // 801D9A10
  c->r[5]=0u+0x00000006u; // 801D9A14
  c->lr=0x801D9A1Cu; f_800C6228(c); // 801D9A18
  cmps(c,0,(int32_t)c->r[3],0); // 801D9A1C
  if (crb(c,2)) { goto L_801D9A34; } // 801D9A20
L_801D9A24:;
  c->r[29]=c->r[29]+0x00000001u; // 801D9A24
  c->r[30]=c->r[30]+0x0000011Cu; // 801D9A28
  cmpu(c,0,c->r[29],0x00000004u); // 801D9A2C
  if (crb(c,0)) { IRQCHK(c); goto L_801D9A00; } // 801D9A30
L_801D9A34:;
  c->r[30]=rotl(c->r[29],0)&0x000000FFu; // 801D9A34
  cmps(c,0,(int32_t)c->r[30],4); // 801D9A38
  if (!crb(c,2)) { goto L_801D9A48; } // 801D9A3C
  c->r[3]=0u+0x00000007u; // 801D9A40
  goto L_801D9B64; // 801D9A44
L_801D9A48:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)34); // 801D9A48
  c->r[4]=0u+0x80480000u; // 801D9A4C
  c->r[3]=rotl(c->r[31],0)&0x000000FFu; cr0(c,c->r[3]); // 801D9A50
  c->r[4]=c->r[4]+0x000034D8u; // 801D9A54
  c->r[4]=c->r[4]+c->r[0]; // 801D9A58
  c->r[29]=c->r[4]+0x000004CCu; // 801D9A5C
  if (crb(c,2)) { goto L_801D9A90; } // 801D9A60
  c->r[26]=c->r[3]+0xFFFFFFFFu; // 801D9A64
  c->lr=0x801D9A6Cu; f_801D7464(c); // 801D9A68
  c->r[4]=c->r[2]+0xFFFFB050u; // 801D9A6C
  c->r[5]=c->r[2]+0xFFFFB054u; // 801D9A70
  c->r[0]=R8(c->r[4]+c->r[26]); // 801D9A74
  c->r[4]=R8(c->r[5]+c->r[26]); // 801D9A78
  c->r[0]=R8(c->r[3]+c->r[0]); // 801D9A7C
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 801D9A80
  if (!crb(c,2)) { goto L_801D9A90; } // 801D9A84
  c->r[3]=0u+0x00000004u; // 801D9A88
  goto L_801D9B64; // 801D9A8C
L_801D9A90:;
  c->r[0]=R8(c->r[29]+0x00000020u); // 801D9A90
  c->r[3]=rotl(c->r[31],0)&0x000000FFu; // 801D9A94
  cmpu(c,0,c->r[3],c->r[0]); // 801D9A98
  if (!crb(c,2)) { goto L_801D9ACC; } // 801D9A9C
  cmps(c,0,(int32_t)c->r[3],0); // 801D9AA0
  if (crb(c,2)) { goto L_801D9AC4; } // 801D9AA4
  c->r[3]=R16(c->r[29]+0x0000001Eu); // 801D9AA8
  c->r[0]=R16(c->r[28]+0x00000000u); // 801D9AAC
  cmpu(c,0,c->r[0],c->r[3]); // 801D9AB0
  if (crb(c,0)) { goto L_801D9ACC; } // 801D9AB4
  c->r[0]=R16(c->r[28]+0x00000002u); // 801D9AB8
  cmpu(c,0,c->r[0],c->r[3]); // 801D9ABC
  if (crb(c,1)) { goto L_801D9ACC; } // 801D9AC0
L_801D9AC4:;
  c->r[3]=0u+0x00000000u; // 801D9AC4
  goto L_801D9B64; // 801D9AC8
L_801D9ACC:;
  cmpu(c,0,c->r[27],0x00000080u); // 801D9ACC
  if (crb(c,2)) { goto L_801D9B24; } // 801D9AD0
  c->r[3]=0u+0x80480000u; // 801D9AD4
  c->r[0]=rotl(c->r[27],3)&0x000007F8u; // 801D9AD8
  c->r[3]=c->r[3]+0x000034D8u; // 801D9ADC
  c->r[3]=c->r[3]+c->r[0]; // 801D9AE0
  c->r[0]=R8(c->r[3]+0x00000558u); // 801D9AE4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801D9AE8
  if (crb(c,2)) { goto L_801D9B24; } // 801D9AEC
  c->r[4]=R16(c->r[28]+0x00000000u); // 801D9AF0
  c->r[5]=(uint32_t)((int32_t)c->r[27]*(int32_t)10); // 801D9AF4
  c->r[3]=R16(c->r[28]+0x00000002u); // 801D9AF8
  c->r[0]=0u+0x00000001u; // 801D9AFC
  {uint32_t ea=c->r[5]+c->r[29]; W16(ea,c->r[4]); c->r[5]=ea;} // 801D9B00
  W16(c->r[5]+0x00000002u,c->r[3]); // 801D9B04
  c->r[4]=R16(c->r[28]+0x00000004u); // 801D9B08
  c->r[3]=R16(c->r[28]+0x00000006u); // 801D9B0C
  W16(c->r[5]+0x00000004u,c->r[4]); // 801D9B10
  W16(c->r[5]+0x00000006u,c->r[3]); // 801D9B14
  c->r[3]=R16(c->r[28]+0x00000008u); // 801D9B18
  W16(c->r[5]+0x00000008u,c->r[3]); // 801D9B1C
  W8(c->r[29]+0x00000021u,c->r[0]); // 801D9B20
L_801D9B24:;
  c->r[0]=R8(c->r[29]+0x00000020u); // 801D9B24
  cmpu(c,0,c->r[0],0x00000001u); // 801D9B28
  if (crb(c,2)) { goto L_801D9B4C; } // 801D9B2C
  cmpu(c,0,c->r[0],0x00000004u); // 801D9B30
  if (crb(c,2)) { goto L_801D9B4C; } // 801D9B34
  c->r[3]=0u+0x80480000u; // 801D9B38
  c->r[3]=c->r[3]+0x000034D8u; // 801D9B3C
  c->r[0]=R8(c->r[3]+0x00000564u); // 801D9B40
  cmpu(c,0,c->r[0],0x00000004u); // 801D9B44
  if (crb(c,2)) { goto L_801D9B54; } // 801D9B48
L_801D9B4C:;
  c->r[3]=0u+0x0000000Du; // 801D9B4C
  goto L_801D9B64; // 801D9B50
L_801D9B54:;
  c->r[3]=c->r[27]|c->r[27]; // 801D9B54
  c->r[4]=c->r[30]|c->r[30]; // 801D9B58
  c->r[5]=c->r[28]|c->r[28]; // 801D9B5C
  c->lr=0x801D9B64u; f_801DA078(c); // 801D9B60
L_801D9B64:;
  c->r[11]=c->r[1]+0x00000020u; // 801D9B64
  c->lr=0x801D9B6Cu; f_800C2E94(c); // 801D9B68
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D9B6C
  c->lr=c->r[0]; // 801D9B70
  c->r[1]=c->r[1]+0x00000020u; // 801D9B74
  return; // 801D9B78
}

// BTM_ReadPowerMode
void f_801D9B7C(Ctx* __restrict c) {
  trace_call(0x801D9B7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9B7C
  c->r[0]=c->lr; // 801D9B80
  c->r[5]=0u+0x80480000u; // 801D9B84
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D9B88
  c->r[5]=c->r[5]+0x000034D8u; // 801D9B8C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801D9B90
  c->r[31]=0u+0x00000000u; // 801D9B94
  W32(c->r[1]+0x00000018u,c->r[30]); // 801D9B98
  c->r[30]=c->r[5]+0x00000034u; // 801D9B9C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801D9BA0
  c->r[29]=c->r[4]|c->r[4]; // 801D9BA4
  W32(c->r[1]+0x00000010u,c->r[28]); // 801D9BA8
  c->r[28]=c->r[3]|c->r[3]; // 801D9BAC
L_801D9BB0:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 801D9BB0
  cmps(c,0,(int32_t)c->r[0],0); // 801D9BB4
  if (crb(c,2)) { goto L_801D9BD4; } // 801D9BB8
  c->r[4]=c->r[28]|c->r[28]; // 801D9BBC
  c->r[3]=c->r[30]+0x00000008u; // 801D9BC0
  c->r[5]=0u+0x00000006u; // 801D9BC4
  c->lr=0x801D9BCCu; f_800C6228(c); // 801D9BC8
  cmps(c,0,(int32_t)c->r[3],0); // 801D9BCC
  if (crb(c,2)) { goto L_801D9BE4; } // 801D9BD0
L_801D9BD4:;
  c->r[31]=c->r[31]+0x00000001u; // 801D9BD4
  c->r[30]=c->r[30]+0x0000011Cu; // 801D9BD8
  cmpu(c,0,c->r[31],0x00000004u); // 801D9BDC
  if (crb(c,0)) { IRQCHK(c); goto L_801D9BB0; } // 801D9BE0
L_801D9BE4:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801D9BE4
  cmps(c,0,(int32_t)c->r[0],4); // 801D9BE8
  if (!crb(c,2)) { goto L_801D9BF8; } // 801D9BEC
  c->r[3]=0u+0x00000007u; // 801D9BF0
  goto L_801D9C14; // 801D9BF4
L_801D9BF8:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)34); // 801D9BF8
  c->r[4]=0u+0x80480000u; // 801D9BFC
  c->r[3]=0u+0x00000000u; // 801D9C00
  c->r[4]=c->r[4]+0x000034D8u; // 801D9C04
  c->r[4]=c->r[4]+c->r[0]; // 801D9C08
  c->r[0]=R8(c->r[4]+0x000004ECu); // 801D9C0C
  W8(c->r[29]+0x00000000u,c->r[0]); // 801D9C10
L_801D9C14:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801D9C14
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801D9C18
  c->r[30]=R32(c->r[1]+0x00000018u); // 801D9C1C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801D9C20
  c->r[28]=R32(c->r[1]+0x00000010u); // 801D9C24
  c->lr=c->r[0]; // 801D9C28
  c->r[1]=c->r[1]+0x00000020u; // 801D9C2C
  return; // 801D9C30
}

// btm_pm_reset
void f_801D9C34(Ctx* __restrict c) {
  trace_call(0x801D9C34u);
  c->r[3]=0u+0x80480000u; // 801D9C34
  c->r[12]=0u+0x00000000u; // 801D9C38
  c->r[3]=c->r[3]+0x000034D8u; // 801D9C3C
  c->r[0]=R8(c->r[3]+0x00000565u); // 801D9C40
  cmpu(c,0,c->r[0],0x00000080u); // 801D9C44
  if (crb(c,2)) { goto L_801D9C64; } // 801D9C48
  c->r[0]=rotl(c->r[0],3)&0x000007F8u; // 801D9C4C
  c->r[3]=c->r[3]+c->r[0]; // 801D9C50
  c->r[0]=R8(c->r[3]+0x00000558u); // 801D9C54
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801D9C58
  if (crb(c,2)) { goto L_801D9C64; } // 801D9C5C
  c->r[12]=R32(c->r[3]+0x00000554u); // 801D9C60
L_801D9C64:;
  c->r[3]=0u+0x80480000u; // 801D9C64
  cmps(c,0,(int32_t)c->r[12],0); // 801D9C68
  c->r[3]=c->r[3]+0x000034D8u; // 801D9C6C
  c->r[0]=0u+0x00000000u; // 801D9C70
  c->r[4]=0u+0x00000004u; // 801D9C74
  W8(c->r[3]+0x00000558u,c->r[0]); // 801D9C78
  W8(c->r[3]+0x00000564u,c->r[4]); // 801D9C7C
  W8(c->r[3]+0x00000560u,c->r[0]); // 801D9C80
  if (crb(c,2)) return; // 801D9C84
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)284); // 801D9C88
  c->r[4]=0u+0x00000005u; // 801D9C8C
  c->r[5]=0u+0x0000000Cu; // 801D9C90
  c->r[6]=0u+0x00000000u; // 801D9C94
  c->r[3]=c->r[3]+c->r[0]; // 801D9C98
  c->r[3]=c->r[3]+0x0000003Cu; // 801D9C9C
  c->ctr=c->r[12]; // 801D9CA0
  if (true) { dispatch(c,c->ctr); return; } // 801D9CA4
}

// fn_801D9CA8
void f_801D9CA8(Ctx* __restrict c) {
  trace_call(0x801D9CA8u);
  return; // 801D9CA8
}

// btm_pm_sm_alloc
void f_801D9CAC(Ctx* __restrict c) {
  trace_call(0x801D9CACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9CAC
  c->r[0]=c->lr; // 801D9CB0
  c->r[4]=0u+0x00000000u; // 801D9CB4
  c->r[5]=0u+0x00000022u; // 801D9CB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801D9CBC
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)34); // 801D9CC0
  c->r[3]=0u+0x80480000u; // 801D9CC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801D9CC8
  c->r[3]=c->r[3]+0x000034D8u; // 801D9CCC
  c->r[3]=c->r[3]+c->r[0]; // 801D9CD0
  c->r[31]=c->r[3]+0x000004CCu; // 801D9CD4
  c->r[3]=c->r[31]|c->r[31]; // 801D9CD8
  c->lr=0x801D9CE0u; f_80004350(c); // 801D9CDC
  c->r[0]=0u+0x00000000u; // 801D9CE0
  W8(c->r[31]+0x00000020u,c->r[0]); // 801D9CE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801D9CE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801D9CEC
  c->lr=c->r[0]; // 801D9CF0
  c->r[1]=c->r[1]+0x00000010u; // 801D9CF4
  return; // 801D9CF8
}

// btm_pm_compare_modes
void f_801D9CFC(Ctx* __restrict c) {
  trace_call(0x801D9CFCu);
  cmps(c,0,(int32_t)c->r[3],0); // 801D9CFC
  if (!crb(c,2)) { goto L_801D9D34; } // 801D9D00
  c->r[6]=R16(c->r[4]+0x00000000u); // 801D9D04
  c->r[3]=c->r[4]|c->r[4]; // 801D9D08
  c->r[0]=R16(c->r[4]+0x00000002u); // 801D9D0C
  W16(c->r[5]+0x00000000u,c->r[6]); // 801D9D10
  W16(c->r[5]+0x00000002u,c->r[0]); // 801D9D14
  c->r[6]=R16(c->r[4]+0x00000004u); // 801D9D18
  c->r[0]=R16(c->r[4]+0x00000006u); // 801D9D1C
  W16(c->r[5]+0x00000004u,c->r[6]); // 801D9D20
  W16(c->r[5]+0x00000006u,c->r[0]); // 801D9D24
  c->r[0]=R16(c->r[4]+0x00000008u); // 801D9D28
  W16(c->r[5]+0x00000008u,c->r[0]); // 801D9D2C
  return; // 801D9D30
L_801D9D34:;
  c->r[9]=R8(c->r[4]+0x00000008u); // 801D9D34
  cmps(c,0,(int32_t)c->r[9],0); // 801D9D38
  if (crb(c,2)) { goto L_801D9D4C; } // 801D9D3C
  c->r[8]=R8(c->r[3]+0x00000008u); // 801D9D40
  cmps(c,0,(int32_t)c->r[8],0); // 801D9D44
  if (!crb(c,2)) { goto L_801D9D54; } // 801D9D48
L_801D9D4C:;
  c->r[3]=0u+0x00000000u; // 801D9D4C
  return; // 801D9D50
L_801D9D54:;
  c->r[0]=rotl(c->r[8],0)&0x00000010u; cr0(c,c->r[0]); // 801D9D54
  if (crb(c,2)) { goto L_801D9D98; } // 801D9D58
  c->r[4]=R16(c->r[3]+0x00000000u); // 801D9D5C
  c->r[0]=R16(c->r[3]+0x00000002u); // 801D9D60
  W16(c->r[5]+0x00000000u,c->r[4]); // 801D9D64
  W16(c->r[5]+0x00000002u,c->r[0]); // 801D9D68
  c->r[4]=R16(c->r[3]+0x00000004u); // 801D9D6C
  c->r[0]=R16(c->r[3]+0x00000006u); // 801D9D70
  W16(c->r[5]+0x00000004u,c->r[4]); // 801D9D74
  W16(c->r[5]+0x00000006u,c->r[0]); // 801D9D78
  c->r[0]=R16(c->r[3]+0x00000008u); // 801D9D7C
  c->r[3]=c->r[5]|c->r[5]; // 801D9D80
  W16(c->r[5]+0x00000008u,c->r[0]); // 801D9D84
  c->r[0]=R8(c->r[5]+0x00000008u); // 801D9D88
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 801D9D8C
  W8(c->r[5]+0x00000008u,c->r[0]); // 801D9D90
  return; // 801D9D94
L_801D9D98:;
  c->r[0]=rotl(c->r[9],0)&0x00000010u; cr0(c,c->r[0]); // 801D9D98
  if (crb(c,2)) { goto L_801D9DDC; } // 801D9D9C
  c->r[6]=R16(c->r[4]+0x00000000u); // 801D9DA0
  c->r[3]=c->r[5]|c->r[5]; // 801D9DA4
  c->r[0]=R16(c->r[4]+0x00000002u); // 801D9DA8
  W16(c->r[5]+0x00000000u,c->r[6]); // 801D9DAC
  W16(c->r[5]+0x00000002u,c->r[0]); // 801D9DB0
  c->r[6]=R16(c->r[4]+0x00000004u); // 801D9DB4
  c->r[0]=R16(c->r[4]+0x00000006u); // 801D9DB8
  W16(c->r[5]+0x00000004u,c->r[6]); // 801D9DBC
  W16(c->r[5]+0x00000006u,c->r[0]); // 801D9DC0
  c->r[0]=R16(c->r[4]+0x00000008u); // 801D9DC4
  W16(c->r[5]+0x00000008u,c->r[0]); // 801D9DC8
  c->r[0]=R8(c->r[5]+0x00000008u); // 801D9DCC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 801D9DD0
  W8(c->r[5]+0x00000008u,c->r[0]); // 801D9DD4
  return; // 801D9DD8
L_801D9DDC:;
  c->r[7]=c->r[8]+0xFFFFFFFFu; // 801D9DDC
  c->r[6]=0u+0x80380000u; // 801D9DE0
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 801D9DE4
  c->r[0]=c->r[0]-c->r[7]; // 801D9DE8
  c->r[6]=c->r[6]+0xFFFFF260u; // 801D9DEC
  c->r[7]=c->r[9]+c->r[0]; // 801D9DF0
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 801D9DF4
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801D9DF8
  c->r[0]=R8(c->r[6]+c->r[0]); // 801D9DFC
  cmps(c,0,(int32_t)c->r[0],2); // 801D9E00
  if (crb(c,2)) { goto L_801D9E50; } // 801D9E04
  if (!crb(c,0)) { goto L_801D9E18; } // 801D9E08
  cmps(c,0,(int32_t)c->r[0],1); // 801D9E0C
  if (!crb(c,0)) { goto L_801D9E24; } // 801D9E10
  goto L_801D9F10; // 801D9E14
L_801D9E18:;
  cmps(c,0,(int32_t)c->r[0],4); // 801D9E18
  if (!crb(c,0)) { goto L_801D9F10; } // 801D9E1C
  goto L_801D9E80; // 801D9E20
L_801D9E24:;
  c->r[4]=R16(c->r[3]+0x00000000u); // 801D9E24
  c->r[0]=R16(c->r[3]+0x00000002u); // 801D9E28
  W16(c->r[5]+0x00000000u,c->r[4]); // 801D9E2C
  W16(c->r[5]+0x00000002u,c->r[0]); // 801D9E30
  c->r[4]=R16(c->r[3]+0x00000004u); // 801D9E34
  c->r[0]=R16(c->r[3]+0x00000006u); // 801D9E38
  W16(c->r[5]+0x00000004u,c->r[4]); // 801D9E3C
  W16(c->r[5]+0x00000006u,c->r[0]); // 801D9E40
  c->r[0]=R16(c->r[3]+0x00000008u); // 801D9E44
  W16(c->r[5]+0x00000008u,c->r[0]); // 801D9E48
  return; // 801D9E4C
L_801D9E50:;
  c->r[6]=R16(c->r[4]+0x00000000u); // 801D9E50
  c->r[3]=c->r[4]|c->r[4]; // 801D9E54
  c->r[0]=R16(c->r[4]+0x00000002u); // 801D9E58
  W16(c->r[5]+0x00000000u,c->r[6]); // 801D9E5C
  W16(c->r[5]+0x00000002u,c->r[0]); // 801D9E60
  c->r[6]=R16(c->r[4]+0x00000004u); // 801D9E64
  c->r[0]=R16(c->r[4]+0x00000006u); // 801D9E68
  W16(c->r[5]+0x00000004u,c->r[6]); // 801D9E6C
  W16(c->r[5]+0x00000006u,c->r[0]); // 801D9E70
  c->r[0]=R16(c->r[4]+0x00000008u); // 801D9E74
  W16(c->r[5]+0x00000008u,c->r[0]); // 801D9E78
  return; // 801D9E7C
L_801D9E80:;
  W8(c->r[5]+0x00000008u,c->r[8]); // 801D9E80
  c->r[6]=R16(c->r[4]+0x00000000u); // 801D9E84
  c->r[0]=R16(c->r[3]+0x00000000u); // 801D9E88
  cmpu(c,0,c->r[0],c->r[6]); // 801D9E8C
  if (!crb(c,0)) { goto L_801D9E98; } // 801D9E90
  c->r[6]=c->r[0]|c->r[0]; // 801D9E94
L_801D9E98:;
  W16(c->r[5]+0x00000000u,c->r[6]); // 801D9E98
  c->r[7]=R16(c->r[4]+0x00000002u); // 801D9E9C
  c->r[0]=R16(c->r[3]+0x00000002u); // 801D9EA0
  cmpu(c,0,c->r[0],c->r[7]); // 801D9EA4
  if (!crb(c,1)) { goto L_801D9EB0; } // 801D9EA8
  c->r[7]=c->r[0]|c->r[0]; // 801D9EAC
L_801D9EB0:;
  c->r[6]=R16(c->r[5]+0x00000000u); // 801D9EB0
  c->r[0]=rotl(c->r[7],0)&0x0000FFFFu; // 801D9EB4
  W16(c->r[5]+0x00000002u,c->r[7]); // 801D9EB8
  cmpu(c,0,c->r[6],c->r[0]); // 801D9EBC
  if (!crb(c,0)) { goto L_801D9ECC; } // 801D9EC0
  c->r[3]=0u+0x00000000u; // 801D9EC4
  return; // 801D9EC8
L_801D9ECC:;
  c->r[0]=R8(c->r[5]+0x00000008u); // 801D9ECC
  cmpu(c,0,c->r[0],0x00000002u); // 801D9ED0
  if (!crb(c,2)) { goto L_801D9F08; } // 801D9ED4
  c->r[6]=R16(c->r[4]+0x00000004u); // 801D9ED8
  c->r[0]=R16(c->r[3]+0x00000004u); // 801D9EDC
  cmpu(c,0,c->r[0],c->r[6]); // 801D9EE0
  if (!crb(c,1)) { goto L_801D9EEC; } // 801D9EE4
  c->r[6]=c->r[0]|c->r[0]; // 801D9EE8
L_801D9EEC:;
  W16(c->r[5]+0x00000004u,c->r[6]); // 801D9EEC
  c->r[4]=R16(c->r[4]+0x00000006u); // 801D9EF0
  c->r[0]=R16(c->r[3]+0x00000006u); // 801D9EF4
  cmpu(c,0,c->r[0],c->r[4]); // 801D9EF8
  if (!crb(c,1)) { goto L_801D9F04; } // 801D9EFC
  c->r[4]=c->r[0]|c->r[0]; // 801D9F00
L_801D9F04:;
  W16(c->r[5]+0x00000006u,c->r[4]); // 801D9F04
L_801D9F08:;
  c->r[3]=c->r[5]|c->r[5]; // 801D9F08
  return; // 801D9F0C
L_801D9F10:;
  c->r[3]=0u+0x00000000u; // 801D9F10
  return; // 801D9F14
}

// btm_pm_get_set_mode
void f_801D9F18(Ctx* __restrict c) {
  trace_call(0x801D9F18u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801D9F18
  c->r[0]=c->lr; // 801D9F1C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801D9F20
  c->r[11]=c->r[1]+0x00000020u; // 801D9F24
  c->lr=0x801D9F2Cu; f_800C2E48(c); // 801D9F28
  cmps(c,0,(int32_t)c->r[5],0); // 801D9F2C
  c->r[26]=c->r[3]|c->r[3]; // 801D9F30
  c->r[27]=c->r[5]|c->r[5]; // 801D9F34
  c->r[28]=c->r[6]|c->r[6]; // 801D9F38
  c->r[7]=0u+0x00000000u; // 801D9F3C
  if (crb(c,2)) { goto L_801D9F88; } // 801D9F40
  c->r[0]=R8(c->r[5]+0x00000008u); // 801D9F44
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801D9F48
  if (crb(c,2)) { goto L_801D9F88; } // 801D9F4C
  c->r[3]=R16(c->r[5]+0x00000000u); // 801D9F50
  c->r[0]=R16(c->r[5]+0x00000002u); // 801D9F54
  W16(c->r[6]+0x00000000u,c->r[3]); // 801D9F58
  W16(c->r[6]+0x00000002u,c->r[0]); // 801D9F5C
  c->r[3]=R16(c->r[5]+0x00000004u); // 801D9F60
  c->r[0]=R16(c->r[5]+0x00000006u); // 801D9F64
  W16(c->r[6]+0x00000004u,c->r[3]); // 801D9F68
  W16(c->r[6]+0x00000006u,c->r[0]); // 801D9F6C
  c->r[0]=R16(c->r[5]+0x00000008u); // 801D9F70
  W16(c->r[6]+0x00000008u,c->r[0]); // 801D9F74
  c->r[0]=R8(c->r[6]+0x00000008u); // 801D9F78
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFEFu; // 801D9F7C
  W8(c->r[6]+0x00000008u,c->r[3]); // 801D9F80
  goto L_801DA060; // 801D9F84
L_801D9F88:;
  c->r[31]=0u+0x80480000u; // 801D9F88
  c->r[30]=c->r[4]|c->r[4]; // 801D9F8C
  c->r[31]=c->r[31]+0x000034D8u; // 801D9F90
  c->r[29]=0u+0x00000000u; // 801D9F94
L_801D9F98:;
  c->r[0]=R8(c->r[31]+0x00000558u); // 801D9F98
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801D9F9C
  if (crb(c,2)) { goto L_801D9FDC; } // 801D9FA0
  c->r[0]=R8(c->r[30]+0x00000008u); // 801D9FA4
  cmps(c,0,(int32_t)c->r[0],0); // 801D9FA8
  if (!crb(c,2)) { goto L_801D9FB8; } // 801D9FAC
  c->r[3]=0u+0x00000000u; // 801D9FB0
  goto L_801DA060; // 801D9FB4
L_801D9FB8:;
  c->r[3]=c->r[7]|c->r[7]; // 801D9FB8
  c->r[4]=c->r[30]|c->r[30]; // 801D9FBC
  c->r[5]=c->r[28]|c->r[28]; // 801D9FC0
  c->lr=0x801D9FC8u; f_801D9CFC(c); // 801D9FC4
  cmps(c,0,(int32_t)c->r[3],0); // 801D9FC8
  if (!crb(c,2)) { goto L_801D9FD8; } // 801D9FCC
  c->r[3]=0u+0x00000000u; // 801D9FD0
  goto L_801DA060; // 801D9FD4
L_801D9FD8:;
  c->r[7]=c->r[28]|c->r[28]; // 801D9FD8
L_801D9FDC:;
  c->r[29]=c->r[29]+0x00000001u; // 801D9FDC
  c->r[30]=c->r[30]+0x0000000Au; // 801D9FE0
  cmps(c,0,(int32_t)c->r[29],2); // 801D9FE4
  c->r[31]=c->r[31]+0x00000008u; // 801D9FE8
  if (crb(c,0)) { IRQCHK(c); goto L_801D9F98; } // 801D9FEC
  cmps(c,0,(int32_t)c->r[7],0); // 801D9FF0
  if (!crb(c,2)) { goto L_801DA034; } // 801D9FF4
  cmps(c,0,(int32_t)c->r[27],0); // 801D9FF8
  if (crb(c,2)) { goto L_801DA02C; } // 801D9FFC
  c->r[3]=R16(c->r[27]+0x00000000u); // 801DA000
  c->r[0]=R16(c->r[27]+0x00000002u); // 801DA004
  W16(c->r[28]+0x00000000u,c->r[3]); // 801DA008
  W16(c->r[28]+0x00000002u,c->r[0]); // 801DA00C
  c->r[3]=R16(c->r[27]+0x00000004u); // 801DA010
  c->r[0]=R16(c->r[27]+0x00000006u); // 801DA014
  W16(c->r[28]+0x00000004u,c->r[3]); // 801DA018
  W16(c->r[28]+0x00000006u,c->r[0]); // 801DA01C
  c->r[0]=R16(c->r[27]+0x00000008u); // 801DA020
  W16(c->r[28]+0x00000008u,c->r[0]); // 801DA024
  goto L_801DA05C; // 801DA028
L_801DA02C:;
  c->r[3]=0u+0x00000000u; // 801DA02C
  goto L_801DA060; // 801DA030
L_801DA034:;
  cmpu(c,0,c->r[26],0x00000080u); // 801DA034
  if (!crb(c,2)) { goto L_801DA05C; } // 801DA038
  c->r[3]=c->r[27]|c->r[27]; // 801DA03C
  c->r[4]=c->r[7]|c->r[7]; // 801DA040
  c->r[5]=c->r[28]|c->r[28]; // 801DA044
  c->lr=0x801DA04Cu; f_801D9CFC(c); // 801DA048
  cmps(c,0,(int32_t)c->r[3],0); // 801DA04C
  if (!crb(c,2)) { goto L_801DA05C; } // 801DA050
  c->r[3]=0u+0x00000000u; // 801DA054
  goto L_801DA060; // 801DA058
L_801DA05C:;
  c->r[3]=R8(c->r[28]+0x00000008u); // 801DA05C
L_801DA060:;
  c->r[11]=c->r[1]+0x00000020u; // 801DA060
  c->lr=0x801DA068u; f_800C2E94(c); // 801DA064
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DA068
  c->lr=c->r[0]; // 801DA06C
  c->r[1]=c->r[1]+0x00000020u; // 801DA070
  return; // 801DA074
}

// btm_pm_snd_md_req
void f_801DA078(Ctx* __restrict c) {
  trace_call(0x801DA078u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA078
  c->r[0]=c->lr; // 801DA07C
  c->r[6]=0u+0x80480000u; // 801DA080
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DA084
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)34); // 801DA088
  c->r[6]=c->r[6]+0x000034D8u; // 801DA08C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801DA090
  c->r[31]=0u+0x00000000u; // 801DA094
  W32(c->r[1]+0x00000028u,c->r[30]); // 801DA098
  c->r[30]=c->r[4]|c->r[4]; // 801DA09C
  W32(c->r[1]+0x00000024u,c->r[29]); // 801DA0A0
  c->r[29]=c->r[3]|c->r[3]; // 801DA0A4
  c->r[3]=c->r[6]+c->r[0]; // 801DA0A8
  c->r[6]=c->r[1]+0x00000008u; // 801DA0AC
  W32(c->r[1]+0x00000020u,c->r[28]); // 801DA0B0
  c->r[28]=c->r[3]+0x000004CCu; // 801DA0B4
  c->r[3]=c->r[29]|c->r[29]; // 801DA0B8
  c->r[4]=c->r[28]|c->r[28]; // 801DA0BC
  c->lr=0x801DA0C4u; f_801D9F18(c); // 801DA0C0
  c->r[4]=R8(c->r[28]+0x00000020u); // 801DA0C4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801DA0C8
  W8(c->r[1]+0x00000010u,c->r[3]); // 801DA0CC
  cmpu(c,0,c->r[4],c->r[0]); // 801DA0D0
  if (!crb(c,2)) { goto L_801DA108; } // 801DA0D4
  cmps(c,0,(int32_t)c->r[0],0); // 801DA0D8
  if (crb(c,2)) { goto L_801DA0FC; } // 801DA0DC
  c->r[4]=R16(c->r[28]+0x0000001Eu); // 801DA0E0
  c->r[0]=R16(c->r[1]+0x00000008u); // 801DA0E4
  cmpu(c,0,c->r[0],c->r[4]); // 801DA0E8
  if (crb(c,0)) { goto L_801DA104; } // 801DA0EC
  c->r[0]=R16(c->r[1]+0x0000000Au); // 801DA0F0
  cmpu(c,0,c->r[0],c->r[4]); // 801DA0F4
  if (crb(c,1)) { goto L_801DA104; } // 801DA0F8
L_801DA0FC:;
  c->r[3]=0u+0x0000000Du; // 801DA0FC
  goto L_801DA28C; // 801DA100
L_801DA104:;
  c->r[31]=0u+0x00000001u; // 801DA104
L_801DA108:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801DA108
  W8(c->r[28]+0x00000021u,c->r[31]); // 801DA10C
  if (crb(c,2)) { goto L_801DA128; } // 801DA110
  c->r[0]=R8(c->r[28]+0x00000020u); // 801DA114
  cmps(c,0,(int32_t)c->r[0],0); // 801DA118
  if (crb(c,2)) { goto L_801DA128; } // 801DA11C
  c->r[0]=0u+0x00000001u; // 801DA120
  W8(c->r[28]+0x00000021u,c->r[0]); // 801DA124
L_801DA128:;
  c->r[3]=0u+0x00000002u; // 801DA128
  c->lr=0x801DA130u; f_801CAE20(c); // 801DA12C
  cmps(c,0,(int32_t)c->r[3],0); // 801DA130
  c->r[31]=c->r[3]|c->r[3]; // 801DA134
  if (!crb(c,2)) { goto L_801DA144; } // 801DA138
  c->r[3]=0u+0x00000003u; // 801DA13C
  goto L_801DA28C; // 801DA140
L_801DA144:;
  c->r[0]=R8(c->r[28]+0x00000021u); // 801DA144
  cmpu(c,0,c->r[0],0x00000001u); // 801DA148
  if (!crb(c,2)) { goto L_801DA158; } // 801DA14C
  c->r[0]=0u+0x00000000u; // 801DA150
  W8(c->r[1]+0x00000010u,c->r[0]); // 801DA154
L_801DA158:;
  c->r[0]=R8(c->r[1]+0x00000010u); // 801DA158
  c->r[4]=0u+0x80480000u; // 801DA15C
  c->r[4]=c->r[4]+0x000034D8u; // 801DA160
  cmps(c,0,(int32_t)c->r[0],2); // 801DA164
  W8(c->r[4]+0x00000564u,c->r[30]); // 801DA168
  W8(c->r[4]+0x00000565u,c->r[29]); // 801DA16C
  if (crb(c,2)) { goto L_801DA214; } // 801DA170
  if (!crb(c,0)) { goto L_801DA188; } // 801DA174
  cmps(c,0,(int32_t)c->r[0],0); // 801DA178
  if (crb(c,2)) { goto L_801DA194; } // 801DA17C
  if (!crb(c,0)) { goto L_801DA1F4; } // 801DA180
  goto L_801DA25C; // 801DA184
L_801DA188:;
  cmps(c,0,(int32_t)c->r[0],4); // 801DA188
  if (!crb(c,0)) { goto L_801DA25C; } // 801DA18C
  goto L_801DA23C; // 801DA190
L_801DA194:;
  c->r[0]=R8(c->r[28]+0x00000020u); // 801DA194
  cmps(c,0,(int32_t)c->r[0],3); // 801DA198
  if (crb(c,2)) { goto L_801DA1C8; } // 801DA19C
  if (!crb(c,0)) { goto L_801DA1E0; } // 801DA1A0
  cmps(c,0,(int32_t)c->r[0],2); // 801DA1A4
  if (!crb(c,0)) { goto L_801DA1B0; } // 801DA1A8
  goto L_801DA1E0; // 801DA1AC
L_801DA1B0:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)284); // 801DA1B0
  c->r[3]=c->r[31]|c->r[31]; // 801DA1B4
  c->r[4]=c->r[4]+c->r[0]; // 801DA1B8
  c->r[4]=R16(c->r[4]+0x00000034u); // 801DA1BC
  c->lr=0x801DA1C4u; f_801E1A70(c); // 801DA1C0
  goto L_801DA26C; // 801DA1C4
L_801DA1C8:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)284); // 801DA1C8
  c->r[3]=c->r[31]|c->r[31]; // 801DA1CC
  c->r[4]=c->r[4]+c->r[0]; // 801DA1D0
  c->r[4]=R16(c->r[4]+0x00000034u); // 801DA1D4
  c->lr=0x801DA1DCu; f_801E1BA8(c); // 801DA1D8
  goto L_801DA26C; // 801DA1DC
L_801DA1E0:;
  c->r[3]=0u+0x80480000u; // 801DA1E0
  c->r[0]=0u+0x00000004u; // 801DA1E4
  c->r[3]=c->r[3]+0x000034D8u; // 801DA1E8
  W8(c->r[3]+0x00000564u,c->r[0]); // 801DA1EC
  goto L_801DA26C; // 801DA1F0
L_801DA1F4:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)284); // 801DA1F4
  c->r[5]=R16(c->r[1]+0x00000008u); // 801DA1F8
  c->r[6]=R16(c->r[1]+0x0000000Au); // 801DA1FC
  c->r[3]=c->r[31]|c->r[31]; // 801DA200
  c->r[4]=c->r[4]+c->r[0]; // 801DA204
  c->r[4]=R16(c->r[4]+0x00000034u); // 801DA208
  c->lr=0x801DA210u; f_801E18F0(c); // 801DA20C
  goto L_801DA26C; // 801DA210
L_801DA214:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)284); // 801DA214
  c->r[5]=R16(c->r[1]+0x00000008u); // 801DA218
  c->r[6]=R16(c->r[1]+0x0000000Au); // 801DA21C
  c->r[3]=c->r[31]|c->r[31]; // 801DA220
  c->r[7]=R16(c->r[1]+0x0000000Cu); // 801DA224
  c->r[4]=c->r[4]+c->r[0]; // 801DA228
  c->r[4]=R16(c->r[4]+0x00000034u); // 801DA22C
  c->r[8]=R16(c->r[1]+0x0000000Eu); // 801DA230
  c->lr=0x801DA238u; f_801E19A4(c); // 801DA234
  goto L_801DA26C; // 801DA238
L_801DA23C:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)284); // 801DA23C
  c->r[5]=R16(c->r[1]+0x00000008u); // 801DA240
  c->r[6]=R16(c->r[1]+0x0000000Au); // 801DA244
  c->r[3]=c->r[31]|c->r[31]; // 801DA248
  c->r[4]=c->r[4]+c->r[0]; // 801DA24C
  c->r[4]=R16(c->r[4]+0x00000034u); // 801DA250
  c->lr=0x801DA258u; f_801E1AF4(c); // 801DA254
  goto L_801DA26C; // 801DA258
L_801DA25C:;
  c->r[3]=0u+0x80480000u; // 801DA25C
  c->r[0]=0u+0x00000004u; // 801DA260
  c->r[3]=c->r[3]+0x000034D8u; // 801DA264
  W8(c->r[3]+0x00000564u,c->r[0]); // 801DA268
L_801DA26C:;
  c->r[3]=0u+0x80480000u; // 801DA26C
  c->r[3]=c->r[3]+0x000034D8u; // 801DA270
  c->r[0]=R8(c->r[3]+0x00000564u); // 801DA274
  cmpu(c,0,c->r[0],0x00000004u); // 801DA278
  if (!crb(c,2)) { goto L_801DA288; } // 801DA27C
  c->r[3]=c->r[31]|c->r[31]; // 801DA280
  c->lr=0x801DA288u; f_801CAF10(c); // 801DA284
L_801DA288:;
  c->r[3]=0u+0x00000001u; // 801DA288
L_801DA28C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801DA28C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801DA290
  c->r[30]=R32(c->r[1]+0x00000028u); // 801DA294
  c->r[29]=R32(c->r[1]+0x00000024u); // 801DA298
  c->r[28]=R32(c->r[1]+0x00000020u); // 801DA29C
  c->lr=c->r[0]; // 801DA2A0
  c->r[1]=c->r[1]+0x00000030u; // 801DA2A4
  return; // 801DA2A8
}

// btm_pm_proc_cmd_status
void f_801DA2AC(Ctx* __restrict c) {
  trace_call(0x801DA2ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA2AC
  c->r[0]=c->lr; // 801DA2B0
  c->r[4]=0u+0x80480000u; // 801DA2B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DA2B8
  c->r[4]=c->r[4]+0x000034D8u; // 801DA2BC
  c->r[0]=R8(c->r[4]+0x00000564u); // 801DA2C0
  cmpu(c,0,c->r[0],0x00000004u); // 801DA2C4
  if (!crb(c,0)) { goto L_801DA34C; } // 801DA2C8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)34); // 801DA2CC
  cmps(c,0,(int32_t)c->r[3],0); // 801DA2D0
  c->r[5]=c->r[4]+c->r[0]; // 801DA2D4
  if (!crb(c,2)) { goto L_801DA2EC; } // 801DA2D8
  c->r[0]=0u+0x00000004u; // 801DA2DC
  c->r[4]=0u+0x00000004u; // 801DA2E0
  W8(c->r[5]+0x000004ECu,c->r[0]); // 801DA2E4
  goto L_801DA2F0; // 801DA2E8
L_801DA2EC:;
  c->r[4]=0u+0x00000005u; // 801DA2EC
L_801DA2F0:;
  c->r[7]=0u+0x80480000u; // 801DA2F0
  c->r[7]=c->r[7]+0x000034D8u; // 801DA2F4
  c->r[0]=R8(c->r[7]+0x00000565u); // 801DA2F8
  cmpu(c,0,c->r[0],0x00000080u); // 801DA2FC
  if (crb(c,2)) { goto L_801DA33C; } // 801DA300
  c->r[0]=rotl(c->r[0],3)&0x000007F8u; // 801DA304
  c->r[5]=c->r[7]+c->r[0]; // 801DA308
  c->r[0]=R8(c->r[5]+0x00000558u); // 801DA30C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801DA310
  if (crb(c,2)) { goto L_801DA33C; } // 801DA314
  c->r[0]=R8(c->r[7]+0x00000564u); // 801DA318
  c->r[6]=c->r[3]|c->r[3]; // 801DA31C
  c->r[12]=R32(c->r[5]+0x00000554u); // 801DA320
  c->r[5]=0u+0x00000000u; // 801DA324
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)284); // 801DA328
  c->r[3]=c->r[7]+c->r[0]; // 801DA32C
  c->r[3]=c->r[3]+0x0000003Cu; // 801DA330
  c->ctr=c->r[12]; // 801DA334
  if (true) { c->lr=0x801DA33Cu; dispatch(c,c->ctr); } // 801DA338
L_801DA33C:;
  c->r[3]=0u+0x80480000u; // 801DA33C
  c->r[0]=0u+0x00000004u; // 801DA340
  c->r[3]=c->r[3]+0x000034D8u; // 801DA344
  W8(c->r[3]+0x00000564u,c->r[0]); // 801DA348
L_801DA34C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DA34C
  c->lr=c->r[0]; // 801DA350
  c->r[1]=c->r[1]+0x00000010u; // 801DA354
  return; // 801DA358
}

// btm_pm_proc_mode_change
void f_801DA35C(Ctx* __restrict c) {
  trace_call(0x801DA35Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA35C
  c->r[0]=c->lr; // 801DA360
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DA364
  c->r[11]=c->r[1]+0x00000030u; // 801DA368
  c->lr=0x801DA370u; f_800C2E40(c); // 801DA36C
  c->r[26]=c->r[4]|c->r[4]; // 801DA370
  c->r[25]=c->r[3]|c->r[3]; // 801DA374
  c->r[27]=c->r[5]|c->r[5]; // 801DA378
  c->r[28]=c->r[6]|c->r[6]; // 801DA37C
  c->r[3]=c->r[26]|c->r[26]; // 801DA380
  c->lr=0x801DA388u; f_801D3F4C(c); // 801DA384
  c->r[29]=rotl(c->r[3],0)&0x000000FFu; // 801DA388
  cmps(c,0,(int32_t)c->r[29],4); // 801DA38C
  if (!crb(c,0)) { goto L_801DA56C; } // 801DA390
  c->r[30]=(uint32_t)((int32_t)c->r[29]*(int32_t)284); // 801DA394
  c->r[24]=0u+0x80480000u; // 801DA398
  cmps(c,0,(int32_t)c->r[27],0); // 801DA39C
  c->r[24]=c->r[24]+0x000034D8u; // 801DA3A0
  c->r[31]=c->r[24]+c->r[30]; // 801DA3A4
  if (!crb(c,2)) { goto L_801DA400; } // 801DA3A8
  c->r[0]=R16(c->r[31]+0x00000038u); // 801DA3AC
  cmps(c,0,(int32_t)c->r[0],0); // 801DA3B0
  if (crb(c,2)) { goto L_801DA400; } // 801DA3B4
  c->lr=0x801DA3BCu; f_801DB2D4(c); // 801DA3B8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801DA3BC
  if (!crb(c,2)) { goto L_801DA400; } // 801DA3C0
  c->r[0]=0u+0x00000000u; // 801DA3C4
  W16(c->r[31]+0x00000038u,c->r[0]); // 801DA3C8
  c->r[0]=R8(c->r[24]+0x000027C0u); // 801DA3CC
  cmpu(c,0,c->r[0],0x00000005u); // 801DA3D0
  if (crb(c,0)) { goto L_801DA3F4; } // 801DA3D4
  c->r[3]=0u+0x000D0000u; // 801DA3D8
  c->r[4]=0u+0x803A0000u; // 801DA3DC
  c->r[6]=R16(c->r[31]+0x00000036u); // 801DA3E0
  c->r[5]=c->r[26]|c->r[26]; // 801DA3E4
  c->r[3]=c->r[3]+0x00000004u; // 801DA3E8
  c->r[4]=c->r[4]+0xFFFFF880u; // 801DA3EC
  c->lr=0x801DA3F4u; f_801CDA10(c); // 801DA3F0
L_801DA3F4:;
  c->r[3]=R16(c->r[31]+0x00000034u); // 801DA3F4
  c->r[4]=R16(c->r[31]+0x00000036u); // 801DA3F8
  c->lr=0x801DA400u; f_801E1228(c); // 801DA3FC
L_801DA400:;
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)34); // 801DA400
  c->r[3]=0u+0x80480000u; // 801DA404
  cmps(c,0,(int32_t)c->r[27],0); // 801DA408
  c->r[3]=c->r[3]+0x000034D8u; // 801DA40C
  c->r[4]=c->r[3]+c->r[0]; // 801DA410
  W8(c->r[4]+0x000004ECu,c->r[27]); // 801DA414
  c->r[0]=0u+0x00000000u; // 801DA418
  W16(c->r[4]+0x000004EAu,c->r[28]); // 801DA41C
  if (!crb(c,2)) { goto L_801DA434; } // 801DA420
  c->r[3]=R8(c->r[4]+0x000004D4u); // 801DA424
  cmpu(c,0,c->r[3],0x00000001u); // 801DA428
  if (!crb(c,2)) { goto L_801DA434; } // 801DA42C
  W8(c->r[4]+0x000004D4u,c->r[0]); // 801DA430
L_801DA434:;
  cmps(c,0,(int32_t)c->r[27],0); // 801DA434
  c->r[5]=c->r[4]+0x000004D6u; // 801DA438
  if (!crb(c,2)) { goto L_801DA450; } // 801DA43C
  c->r[3]=R8(c->r[5]+0x00000008u); // 801DA440
  cmpu(c,0,c->r[3],0x00000001u); // 801DA444
  if (!crb(c,2)) { goto L_801DA450; } // 801DA448
  W8(c->r[5]+0x00000008u,c->r[0]); // 801DA44C
L_801DA450:;
  c->r[0]=R8(c->r[4]+0x000004EDu); // 801DA450
  cmpu(c,0,c->r[0],0x00000001u); // 801DA454
  if (!crb(c,2)) { goto L_801DA46C; } // 801DA458
  c->r[4]=c->r[29]|c->r[29]; // 801DA45C
  c->r[3]=0u+0x00000080u; // 801DA460
  c->r[5]=0u+0x00000000u; // 801DA464
  c->lr=0x801DA46Cu; f_801DA078(c); // 801DA468
L_801DA46C:;
  c->r[24]=0u+0x80480000u; // 801DA46C
  c->r[29]=0u+0x00000000u; // 801DA470
  c->r[24]=c->r[24]+0x000034D8u; // 801DA474
L_801DA478:;
  c->r[0]=R8(c->r[24]+0x00000558u); // 801DA478
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801DA47C
  if (crb(c,2)) { goto L_801DA4A0; } // 801DA480
  c->r[12]=R32(c->r[24]+0x00000554u); // 801DA484
  c->r[4]=c->r[27]|c->r[27]; // 801DA488
  c->r[5]=c->r[28]|c->r[28]; // 801DA48C
  c->r[6]=c->r[25]|c->r[25]; // 801DA490
  c->r[3]=c->r[31]+0x0000003Cu; // 801DA494
  c->ctr=c->r[12]; // 801DA498
  if (true) { c->lr=0x801DA4A0u; dispatch(c,c->ctr); } // 801DA49C
L_801DA4A0:;
  c->r[29]=c->r[29]+0x00000001u; // 801DA4A0
  c->r[24]=c->r[24]+0x00000008u; // 801DA4A4
  cmps(c,0,(int32_t)c->r[29],2); // 801DA4A8
  if (crb(c,0)) { IRQCHK(c); goto L_801DA478; } // 801DA4AC
  c->r[3]=0u+0x80480000u; // 801DA4B0
  c->r[3]=c->r[3]+0x000034D8u; // 801DA4B4
  c->r[28]=c->r[3]+c->r[30]; // 801DA4B8
  c->r[0]=R8(c->r[28]+0x0000014Fu); // 801DA4BC
  cmpu(c,0,c->r[0],0x00000001u); // 801DA4C0
  if (!crb(c,2)) { goto L_801DA56C; } // 801DA4C4
  c->r[24]=c->r[28]+0x0000003Cu; // 801DA4C8
  c->r[3]=c->r[24]|c->r[24]; // 801DA4CC
  c->lr=0x801DA4D4u; f_801D6120(c); // 801DA4D0
  cmps(c,0,(int32_t)c->r[3],0); // 801DA4D4
  if (crb(c,2)) { goto L_801DA508; } // 801DA4D8
  c->r[0]=R8(c->r[3]+0x00000076u); // 801DA4DC
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801DA4E0
  if (crb(c,2)) { goto L_801DA508; } // 801DA4E4
  c->r[3]=c->r[26]|c->r[26]; // 801DA4E8
  c->r[4]=0u+0x00000000u; // 801DA4EC
  c->lr=0x801DA4F4u; f_801E1334(c); // 801DA4F0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801DA4F4
  if (crb(c,2)) { goto L_801DA53C; } // 801DA4F8
  c->r[0]=0u+0x00000002u; // 801DA4FC
  W8(c->r[28]+0x0000014Fu,c->r[0]); // 801DA500
  goto L_801DA56C; // 801DA504
L_801DA508:;
  c->r[4]=0u+0x80480000u; // 801DA508
  c->r[3]=c->r[24]|c->r[24]; // 801DA50C
  c->r[4]=c->r[4]+0x000034D8u; // 801DA510
  c->r[4]=c->r[4]+c->r[30]; // 801DA514
  c->r[0]=R8(c->r[4]+0x0000014Eu); // 801DA518
  c->r[0]=cntlz(c->r[0]); // 801DA51C
  c->r[4]=rotl(c->r[0],27)&0x000000FFu; // 801DA520
  c->lr=0x801DA528u; f_801E1C2C(c); // 801DA524
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801DA528
  if (crb(c,2)) { goto L_801DA53C; } // 801DA52C
  c->r[0]=0u+0x00000000u; // 801DA530
  W8(c->r[28]+0x0000014Fu,c->r[0]); // 801DA534
  goto L_801DA56C; // 801DA538
L_801DA53C:;
  c->r[27]=0u+0x00000000u; // 801DA53C
  c->r[26]=0u+0x80480000u; // 801DA540
  W8(c->r[28]+0x0000014Fu,c->r[27]); // 801DA544
  c->r[26]=c->r[26]+0x000034D8u; // 801DA548
  c->r[12]=R32(c->r[26]+0x0000062Cu); // 801DA54C
  cmps(c,0,(int32_t)c->r[12],0); // 801DA550
  if (crb(c,2)) { goto L_801DA56C; } // 801DA554
  W8(c->r[26]+0x00000624u,c->r[25]); // 801DA558
  c->r[3]=c->r[26]+0x00000624u; // 801DA55C
  c->ctr=c->r[12]; // 801DA560
  if (true) { c->lr=0x801DA568u; dispatch(c,c->ctr); } // 801DA564
  W32(c->r[26]+0x0000062Cu,c->r[27]); // 801DA568
L_801DA56C:;
  c->r[11]=c->r[1]+0x00000030u; // 801DA56C
  c->lr=0x801DA574u; f_800C2E8C(c); // 801DA570
  c->r[0]=R32(c->r[1]+0x00000034u); // 801DA574
  c->lr=c->r[0]; // 801DA578
  c->r[1]=c->r[1]+0x00000030u; // 801DA57C
  return; // 801DA580
}

// btm_sco_init
void f_801DA584(Ctx* __restrict c) {
  trace_call(0x801DA584u);
  c->r[3]=0u+0x80380000u; // 801DA584
  {uint32_t ea=c->r[3]+0xFFFFF270u; c->r[6]=R32(ea); c->r[3]=ea;} // 801DA588
  c->r[4]=0u+0x00010000u; // 801DA58C
  c->r[7]=0u+0x80480000u; // 801DA590
  c->r[8]=c->r[4]+0xFFFFFFFFu; // 801DA594
  c->r[5]=R32(c->r[3]+0x00000004u); // 801DA598
  c->r[7]=c->r[7]+0x000034D8u; // 801DA59C
  c->r[4]=R32(c->r[3]+0x00000008u); // 801DA5A0
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801DA5A4
  c->r[0]=0u+0x00000002u; // 801DA5A8
  W16(c->r[7]+0x000018F6u,c->r[8]); // 801DA5AC
  W32(c->r[7]+0x000018F8u,c->r[6]); // 801DA5B0
  W32(c->r[7]+0x000018FCu,c->r[5]); // 801DA5B4
  W32(c->r[7]+0x00001900u,c->r[4]); // 801DA5B8
  W32(c->r[7]+0x00001904u,c->r[3]); // 801DA5BC
  W8(c->r[7]+0x00001909u,c->r[0]); // 801DA5C0
  return; // 801DA5C4
}

// btm_esco_conn_rsp
void f_801DA5C8(Ctx* __restrict c) {
  trace_call(0x801DA5C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA5C8
  c->r[0]=c->lr; // 801DA5CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DA5D0
  c->r[11]=c->r[1]+0x00000020u; // 801DA5D4
  c->lr=0x801DA5DCu; f_800C2E48(c); // 801DA5D8
  c->r[26]=c->r[3]|c->r[3]; // 801DA5DC
  c->r[27]=c->r[4]|c->r[4]; // 801DA5E0
  c->r[29]=c->r[5]|c->r[5]; // 801DA5E4
  c->r[28]=c->r[6]|c->r[6]; // 801DA5E8
  c->r[31]=0u+0x00000000u; // 801DA5EC
  c->r[3]=0u+0x00000002u; // 801DA5F0
  c->lr=0x801DA5F8u; f_801CAE20(c); // 801DA5F4
  cmps(c,0,(int32_t)c->r[3],0); // 801DA5F8
  c->r[30]=c->r[3]|c->r[3]; // 801DA5FC
  if (!crb(c,2)) { goto L_801DA62C; } // 801DA600
  c->r[3]=0u+0x80480000u; // 801DA604
  c->r[3]=c->r[3]+0x000034D8u; // 801DA608
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801DA60C
  cmpu(c,0,c->r[0],0x00000001u); // 801DA610
  if (crb(c,0)) { goto L_801DA78C; } // 801DA614
  c->r[4]=0u+0x803A0000u; // 801DA618
  c->r[3]=0u+0x000D0000u; // 801DA61C
  c->r[4]=c->r[4]+0xFFFFF8C0u; // 801DA620
  c->lr=0x801DA628u; f_801CD9D0(c); // 801DA624
  goto L_801DA78C; // 801DA628
L_801DA62C:;
  cmpu(c,0,c->r[26],0x00000003u); // 801DA62C
  if (!crb(c,0)) { goto L_801DA648; } // 801DA630
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)52); // 801DA634
  c->r[3]=0u+0x80480000u; // 801DA638
  c->r[3]=c->r[3]+0x000034D8u; // 801DA63C
  c->r[3]=c->r[3]+c->r[0]; // 801DA640
  c->r[31]=c->r[3]+0x00001854u; // 801DA644
L_801DA648:;
  cmps(c,0,(int32_t)c->r[27],0); // 801DA648
  if (crb(c,2)) { goto L_801DA6A8; } // 801DA64C
  cmps(c,0,(int32_t)c->r[31],0); // 801DA650
  if (crb(c,2)) { goto L_801DA66C; } // 801DA654
  c->r[3]=R16(c->r[31]+0x00000008u); // 801DA658
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 801DA65C
  c->r[0]=cntlz(c->r[0]); // 801DA660
  c->r[0]=rotl(c->r[0],27)&0x0000FFFFu; // 801DA664
  W16(c->r[31]+0x00000008u,c->r[0]); // 801DA668
L_801DA66C:;
  c->r[3]=0u+0x80480000u; // 801DA66C
  c->r[3]=c->r[3]+0x000034D8u; // 801DA670
  c->r[0]=R8(c->r[3]+0x00001908u); // 801DA674
  cmps(c,0,(int32_t)c->r[0],0); // 801DA678
  if (!crb(c,2)) { goto L_801DA694; } // 801DA67C
  c->r[3]=c->r[30]|c->r[30]; // 801DA680
  c->r[4]=c->r[29]|c->r[29]; // 801DA684
  c->r[5]=c->r[27]|c->r[27]; // 801DA688
  c->lr=0x801DA690u; f_801E0D08(c); // 801DA68C
  goto L_801DA78C; // 801DA690
L_801DA694:;
  c->r[3]=c->r[30]|c->r[30]; // 801DA694
  c->r[4]=c->r[29]|c->r[29]; // 801DA698
  c->r[5]=c->r[27]|c->r[27]; // 801DA69C
  c->lr=0x801DA6A4u; f_801E1890(c); // 801DA6A0
  goto L_801DA78C; // 801DA6A4
L_801DA6A8:;
  c->r[3]=0u+0x00000001u; // 801DA6A8
  c->lr=0x801DA6B0u; f_801D5A54(c); // 801DA6AC
  c->r[0]=0u+0x00000003u; // 801DA6B0
  c->r[3]=0u+0x80480000u; // 801DA6B4
  W16(c->r[31]+0x00000008u,c->r[0]); // 801DA6B8
  c->r[3]=c->r[3]+0x000034D8u; // 801DA6BC
  c->r[0]=R8(c->r[3]+0x00001908u); // 801DA6C0
  cmps(c,0,(int32_t)c->r[0],0); // 801DA6C4
  if (crb(c,2)) { goto L_801DA77C; } // 801DA6C8
  c->r[0]=R8(c->r[31]+0x0000002Eu); // 801DA6CC
  cmpu(c,0,c->r[0],0x00000002u); // 801DA6D0
  if (!crb(c,2)) { goto L_801DA77C; } // 801DA6D4
  cmps(c,0,(int32_t)c->r[28],0); // 801DA6D8
  if (crb(c,2)) { goto L_801DA700; } // 801DA6DC
  c->r[3]=R32(c->r[28]+0x00000000u); // 801DA6E0
  c->r[0]=R32(c->r[28]+0x00000004u); // 801DA6E4
  W32(c->r[31]+0x00000014u,c->r[3]); // 801DA6E8
  W32(c->r[31]+0x00000018u,c->r[0]); // 801DA6EC
  c->r[3]=R32(c->r[28]+0x00000008u); // 801DA6F0
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 801DA6F4
  W32(c->r[31]+0x0000001Cu,c->r[3]); // 801DA6F8
  W32(c->r[31]+0x00000020u,c->r[0]); // 801DA6FC
L_801DA700:;
  c->r[3]=0u+0x80480000u; // 801DA700
  c->r[3]=c->r[3]+0x000034D8u; // 801DA704
  c->r[4]=R16(c->r[3]+0x00001904u); // 801DA708
  W16(c->r[31]+0x00000020u,c->r[4]); // 801DA70C
  c->r[5]=R16(c->r[3]+0x00000656u); // 801DA710
  c->r[3]=c->r[4]&c->r[5]; // 801DA714
  c->r[0]=rotl(c->r[3],0)&0x00000038u; cr0(c,c->r[0]); // 801DA718
  c->r[28]=rotl(c->r[3],0)&0x0000003Fu; // 801DA71C
  if (!crb(c,2)) { goto L_801DA72C; } // 801DA720
  c->r[0]=c->r[28]|0x00000008u; // 801DA724
  c->r[28]=rotl(c->r[0],0)&0x0000FFFFu; // 801DA728
L_801DA72C:;
  c->r[3]=0u+0x80480000u; // 801DA72C
  c->r[3]=c->r[3]+0x000034D8u; // 801DA730
  c->r[0]=R8(c->r[3]+0x00000636u); // 801DA734
  cmpu(c,0,c->r[0],0x00000003u); // 801DA738
  if (crb(c,0)) { goto L_801DA750; } // 801DA73C
  c->r[0]=c->r[4]|c->r[5]; // 801DA740
  c->r[0]=rotl(c->r[0],0)&0x000003C0u; // 801DA744
  c->r[0]=c->r[28]|c->r[0]; // 801DA748
  c->r[28]=rotl(c->r[0],0)&0x0000FFFFu; // 801DA74C
L_801DA750:;
  c->r[5]=R32(c->r[31]+0x00000014u); // 801DA750
  c->r[3]=c->r[30]|c->r[30]; // 801DA754
  c->r[6]=R32(c->r[31]+0x00000018u); // 801DA758
  c->r[4]=c->r[29]|c->r[29]; // 801DA75C
  c->r[7]=R16(c->r[31]+0x0000001Cu); // 801DA760
  c->r[10]=rotl(c->r[28],0)&0x0000FFFFu; // 801DA764
  c->r[8]=R16(c->r[31]+0x0000001Eu); // 801DA768
  c->r[9]=R8(c->r[31]+0x00000022u); // 801DA76C
  c->lr=0x801DA774u; f_801E17A8(c); // 801DA770
  W16(c->r[31]+0x00000020u,c->r[28]); // 801DA774
  goto L_801DA78C; // 801DA778
L_801DA77C:;
  c->r[3]=c->r[30]|c->r[30]; // 801DA77C
  c->r[4]=c->r[29]|c->r[29]; // 801DA780
  c->r[5]=0u+0x00000000u; // 801DA784
  c->lr=0x801DA78Cu; f_801E0CA8(c); // 801DA788
L_801DA78C:;
  c->r[11]=c->r[1]+0x00000020u; // 801DA78C
  c->lr=0x801DA794u; f_800C2E94(c); // 801DA790
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DA794
  c->lr=c->r[0]; // 801DA798
  c->r[1]=c->r[1]+0x00000020u; // 801DA79C
  return; // 801DA7A0
}

// btm_sco_chk_pend_unpark
void f_801DA7A4(Ctx* __restrict c) {
  trace_call(0x801DA7A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA7A4
  c->r[0]=c->lr; // 801DA7A8
  W32(c->r[1]+0x00000044u,c->r[0]); // 801DA7AC
  c->r[11]=c->r[1]+0x00000040u; // 801DA7B0
  c->lr=0x801DA7B8u; f_800C2E30(c); // 801DA7B4
  c->r[28]=0u+0x80480000u; // 801DA7B8
  c->r[23]=c->r[3]|c->r[3]; // 801DA7BC
  c->r[28]=c->r[28]+0x000034D8u; // 801DA7C0
  c->r[24]=c->r[4]|c->r[4]; // 801DA7C4
  c->r[25]=c->r[5]|c->r[5]; // 801DA7C8
  c->r[27]=0u+0x00000000u; // 801DA7CC
  c->r[26]=c->r[28]+0x00001854u; // 801DA7D0
  c->r[30]=0u+0x000D0000u; // 801DA7D4
  c->r[31]=0u+0x803A0000u; // 801DA7D8
  c->r[21]=0u+0x803A0000u; // 801DA7DC
  c->r[22]=0u+0x00000003u; // 801DA7E0
L_801DA7E4:;
  c->r[0]=R16(c->r[26]+0x00000008u); // 801DA7E4
  cmpu(c,0,c->r[0],0x00000006u); // 801DA7E8
  if (!crb(c,2)) { goto L_801DA908; } // 801DA7EC
  cmps(c,0,(int32_t)c->r[25],0); // 801DA7F0
  if (!crb(c,2)) { goto L_801DA908; } // 801DA7F4
  cmps(c,0,(int32_t)c->r[23],0); // 801DA7F8
  if (!crb(c,2)) { goto L_801DA908; } // 801DA7FC
  c->r[3]=c->r[26]+0x00000028u; // 801DA800
  c->lr=0x801DA808u; f_801D4EA8(c); // 801DA804
  c->r[5]=rotl(c->r[3],0)&0x0000FFFFu; // 801DA808
  c->r[29]=c->r[3]|c->r[3]; // 801DA80C
  cmpu(c,0,c->r[24],c->r[5]); // 801DA810
  if (!crb(c,2)) { goto L_801DA908; } // 801DA814
  c->r[0]=R8(c->r[28]+0x000027C0u); // 801DA818
  cmpu(c,0,c->r[0],0x00000003u); // 801DA81C
  if (crb(c,0)) { goto L_801DA834; } // 801DA820
  c->r[6]=R8(c->r[28]+0x00001909u); // 801DA824
  c->r[3]=c->r[30]+0x00000002u; // 801DA828
  c->r[4]=c->r[31]+0xFFFFF99Cu; // 801DA82C
  c->lr=0x801DA834u; f_801CDA10(c); // 801DA830
L_801DA834:;
  c->r[3]=0u+0x00000001u; // 801DA834
  c->lr=0x801DA83Cu; f_801D5A54(c); // 801DA838
  c->r[0]=R8(c->r[28]+0x00001908u); // 801DA83C
  cmps(c,0,(int32_t)c->r[0],0); // 801DA840
  if (!crb(c,2)) { goto L_801DA868; } // 801DA844
  c->r[0]=R16(c->r[26]+0x00000020u); // 801DA848
  c->r[3]=rotl(c->r[29],0)&0x0000FFFFu; // 801DA84C
  c->r[4]=rotl(c->r[0],5)&0x000000E0u; // 801DA850
  c->lr=0x801DA858u; f_801E0C1C(c); // 801DA854
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801DA858
  if (!crb(c,2)) { goto L_801DA8F8; } // 801DA85C
  c->r[0]=0u+0x00000003u; // 801DA860
  goto L_801DA8FC; // 801DA864
L_801DA868:;
  c->r[0]=R8(c->r[28]+0x00000636u); // 801DA868
  c->r[3]=R16(c->r[28]+0x00000656u); // 801DA86C
  c->r[4]=R16(c->r[26]+0x00000020u); // 801DA870
  cmpu(c,0,c->r[0],0x00000003u); // 801DA874
  c->r[0]=c->r[4]&c->r[3]; // 801DA878
  c->r[20]=rotl(c->r[0],0)&0x0000003Fu; // 801DA87C
  if (crb(c,0)) { goto L_801DA894; } // 801DA880
  c->r[0]=c->r[4]|c->r[3]; // 801DA884
  c->r[0]=rotl(c->r[0],0)&0x000003C0u; // 801DA888
  c->r[0]=c->r[20]|c->r[0]; // 801DA88C
  c->r[20]=rotl(c->r[0],0)&0x0000FFFFu; // 801DA890
L_801DA894:;
  c->r[0]=R8(c->r[28]+0x000027C0u); // 801DA894
  cmpu(c,0,c->r[0],0x00000003u); // 801DA898
  if (crb(c,0)) { goto L_801DA8C4; } // 801DA89C
  c->r[5]=R32(c->r[26]+0x00000014u); // 801DA8A0
  c->r[3]=c->r[30]+0x00000002u; // 801DA8A4
  c->r[6]=R32(c->r[26]+0x00000018u); // 801DA8A8
  c->r[4]=c->r[21]+0xFFFFF94Cu; // 801DA8AC
  c->r[7]=R16(c->r[26]+0x0000001Cu); // 801DA8B0
  c->r[10]=rotl(c->r[20],0)&0x0000FFFFu; // 801DA8B4
  c->r[8]=R16(c->r[26]+0x0000001Eu); // 801DA8B8
  c->r[9]=R8(c->r[26]+0x00000022u); // 801DA8BC
  c->lr=0x801DA8C4u; f_801CDA90(c); // 801DA8C0
L_801DA8C4:;
  c->r[4]=R32(c->r[26]+0x00000014u); // 801DA8C4
  c->r[3]=rotl(c->r[29],0)&0x0000FFFFu; // 801DA8C8
  c->r[5]=R32(c->r[26]+0x00000018u); // 801DA8CC
  c->r[9]=rotl(c->r[20],0)&0x0000FFFFu; // 801DA8D0
  c->r[6]=R16(c->r[26]+0x0000001Cu); // 801DA8D4
  c->r[7]=R16(c->r[26]+0x0000001Eu); // 801DA8D8
  c->r[8]=R8(c->r[26]+0x00000022u); // 801DA8DC
  c->lr=0x801DA8E4u; f_801E16AC(c); // 801DA8E0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801DA8E4
  if (!crb(c,2)) { goto L_801DA8F4; } // 801DA8E8
  c->r[0]=0u+0x00000003u; // 801DA8EC
  goto L_801DA8FC; // 801DA8F0
L_801DA8F4:;
  W16(c->r[26]+0x00000020u,c->r[20]); // 801DA8F4
L_801DA8F8:;
  c->r[0]=0u+0x00000001u; // 801DA8F8
L_801DA8FC:;
  cmpu(c,0,c->r[0],0x00000001u); // 801DA8FC
  if (!crb(c,2)) { goto L_801DA908; } // 801DA900
  W16(c->r[26]+0x00000008u,c->r[22]); // 801DA904
L_801DA908:;
  c->r[27]=c->r[27]+0x00000001u; // 801DA908
  c->r[26]=c->r[26]+0x00000034u; // 801DA90C
  cmpu(c,0,c->r[27],0x00000003u); // 801DA910
  if (crb(c,0)) { IRQCHK(c); goto L_801DA7E4; } // 801DA914
  c->r[11]=c->r[1]+0x00000040u; // 801DA918
  c->lr=0x801DA920u; f_800C2E7C(c); // 801DA91C
  c->r[0]=R32(c->r[1]+0x00000044u); // 801DA920
  c->lr=c->r[0]; // 801DA924
  c->r[1]=c->r[1]+0x00000040u; // 801DA928
  return; // 801DA92C
}

// btm_sco_conn_req
void f_801DA930(Ctx* __restrict c) {
  trace_call(0x801DA930u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DA930
  c->r[0]=c->lr; // 801DA934
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DA938
  c->r[11]=c->r[1]+0x00000030u; // 801DA93C
  c->lr=0x801DA944u; f_800C2E4C(c); // 801DA940
  c->r[6]=0u+0x80480000u; // 801DA944
  c->r[30]=c->r[3]|c->r[3]; // 801DA948
  c->r[6]=c->r[6]+0x000034D8u; // 801DA94C
  c->r[29]=c->r[4]|c->r[4]; // 801DA950
  c->r[31]=c->r[5]|c->r[5]; // 801DA954
  c->r[28]=0u+0x00000000u; // 801DA958
  c->r[27]=c->r[6]+0x00001854u; // 801DA95C
L_801DA960:;
  c->r[3]=R16(c->r[27]+0x00000008u); // 801DA960
  cmpu(c,0,c->r[3],0x00000001u); // 801DA964
  if (!crb(c,2)) { goto L_801DA978; } // 801DA968
  c->r[0]=R8(c->r[27]+0x0000000Du); // 801DA96C
  cmps(c,0,(int32_t)c->r[0],0); // 801DA970
  if (!crb(c,2)) { goto L_801DA980; } // 801DA974
L_801DA978:;
  cmpu(c,0,c->r[3],0x00000003u); // 801DA978
  if (!crb(c,2)) { goto L_801DAA20; } // 801DA97C
L_801DA980:;
  c->r[4]=c->r[30]|c->r[30]; // 801DA980
  c->r[3]=c->r[27]+0x00000028u; // 801DA984
  c->r[5]=0u+0x00000006u; // 801DA988
  c->lr=0x801DA990u; f_800C6228(c); // 801DA98C
  cmps(c,0,(int32_t)c->r[3],0); // 801DA990
  if (!crb(c,2)) { goto L_801DAA20; } // 801DA994
  c->r[0]=0u+0x00000001u; // 801DA998
  c->r[4]=c->r[30]|c->r[30]; // 801DA99C
  W8(c->r[27]+0x0000000Du,c->r[0]); // 801DA9A0
  c->r[3]=c->r[27]+0x00000028u; // 801DA9A4
  c->r[5]=0u+0x00000006u; // 801DA9A8
  W8(c->r[27]+0x0000002Eu,c->r[31]); // 801DA9AC
  c->lr=0x801DA9B4u; f_80004000(c); // 801DA9B0
  c->r[0]=R32(c->r[27]+0x00000010u); // 801DA9B4
  cmps(c,0,(int32_t)c->r[0],0); // 801DA9B8
  if (!crb(c,2)) { goto L_801DA9D8; } // 801DA9BC
  c->r[5]=c->r[30]|c->r[30]; // 801DA9C0
  c->r[3]=rotl(c->r[28],0)&0x0000FFFFu; // 801DA9C4
  c->r[4]=0u+0x00000000u; // 801DA9C8
  c->r[6]=0u+0x00000000u; // 801DA9CC
  c->lr=0x801DA9D4u; f_801DA5C8(c); // 801DA9D0
  goto L_801DAAF8; // 801DA9D4
L_801DA9D8:;
  c->r[4]=c->r[30]|c->r[30]; // 801DA9D8
  c->r[3]=c->r[1]+0x0000000Au; // 801DA9DC
  c->r[5]=0u+0x00000006u; // 801DA9E0
  c->lr=0x801DA9E8u; f_80004000(c); // 801DA9E4
  c->r[4]=c->r[29]|c->r[29]; // 801DA9E8
  c->r[3]=c->r[1]+0x00000010u; // 801DA9EC
  c->r[5]=0u+0x00000003u; // 801DA9F0
  c->lr=0x801DA9F8u; f_80004000(c); // 801DA9F4
  c->r[0]=0u+0x00000002u; // 801DA9F8
  W8(c->r[1]+0x00000013u,c->r[31]); // 801DA9FC
  c->r[4]=c->r[1]+0x00000008u; // 801DAA00
  c->r[3]=0u+0x00000002u; // 801DAA04
  W16(c->r[27]+0x00000008u,c->r[0]); // 801DAA08
  c->r[12]=R32(c->r[27]+0x00000010u); // 801DAA0C
  W16(c->r[1]+0x00000008u,c->r[28]); // 801DAA10
  c->ctr=c->r[12]; // 801DAA14
  if (true) { c->lr=0x801DAA1Cu; dispatch(c,c->ctr); } // 801DAA18
  goto L_801DAAF8; // 801DAA1C
L_801DAA20:;
  c->r[28]=c->r[28]+0x00000001u; // 801DAA20
  c->r[27]=c->r[27]+0x00000034u; // 801DAA24
  cmpu(c,0,c->r[28],0x00000003u); // 801DAA28
  if (crb(c,0)) { IRQCHK(c); goto L_801DA960; } // 801DAA2C
  c->r[3]=0u+0x80480000u; // 801DAA30
  c->r[3]=c->r[3]+0x000034D8u; // 801DAA34
  c->r[0]=R32(c->r[3]+0x00001850u); // 801DAA38
  cmps(c,0,(int32_t)c->r[0],0); // 801DAA3C
  if (crb(c,2)) { goto L_801DAABC; } // 801DAA40
  c->r[0]=0u+0x00000003u; // 801DAA44
  c->r[28]=c->r[3]+0x00001854u; // 801DAA48
  c->r[27]=0u+0x00000000u; // 801DAA4C
  c->ctr=c->r[0]; // 801DAA50
L_801DAA54:;
  c->r[0]=R16(c->r[28]+0x00000008u); // 801DAA54
  cmps(c,0,(int32_t)c->r[0],0); // 801DAA58
  if (!crb(c,2)) { goto L_801DAA8C; } // 801DAA5C
  c->r[0]=0u+0x00000000u; // 801DAA60
  c->r[29]=0u+0x00000001u; // 801DAA64
  W8(c->r[28]+0x0000000Cu,c->r[0]); // 801DAA68
  c->r[4]=c->r[30]|c->r[30]; // 801DAA6C
  c->r[3]=c->r[28]+0x00000028u; // 801DAA70
  c->r[5]=0u+0x00000006u; // 801DAA74
  W16(c->r[28]+0x00000008u,c->r[29]); // 801DAA78
  W8(c->r[28]+0x0000002Eu,c->r[31]); // 801DAA7C
  c->lr=0x801DAA84u; f_80004000(c); // 801DAA80
  W8(c->r[28]+0x0000000Du,c->r[29]); // 801DAA84
  goto L_801DAA98; // 801DAA88
L_801DAA8C:;
  c->r[27]=c->r[27]+0x00000001u; // 801DAA8C
  c->r[28]=c->r[28]+0x00000034u; // 801DAA90
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DAA54; } // 801DAA94
L_801DAA98:;
  c->r[3]=rotl(c->r[27],0)&0x0000FFFFu; // 801DAA98
  cmpu(c,0,c->r[3],0x00000003u); // 801DAA9C
  if (!crb(c,0)) { goto L_801DAABC; } // 801DAAA0
  c->r[4]=0u+0x80480000u; // 801DAAA4
  c->r[4]=c->r[4]+0x000034D8u; // 801DAAA8
  c->r[12]=R32(c->r[4]+0x00001850u); // 801DAAAC
  c->ctr=c->r[12]; // 801DAAB0
  if (true) { c->lr=0x801DAAB8u; dispatch(c,c->ctr); } // 801DAAB4
  goto L_801DAAF8; // 801DAAB8
L_801DAABC:;
  c->r[3]=0u+0x80480000u; // 801DAABC
  c->r[3]=c->r[3]+0x000034D8u; // 801DAAC0
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801DAAC4
  cmpu(c,0,c->r[0],0x00000002u); // 801DAAC8
  if (crb(c,0)) { goto L_801DAAE4; } // 801DAACC
  c->r[3]=0u+0x000D0000u; // 801DAAD0
  c->r[4]=0u+0x803A0000u; // 801DAAD4
  c->r[3]=c->r[3]+0x00000001u; // 801DAAD8
  c->r[4]=c->r[4]+0xFFFFF9ECu; // 801DAADC
  c->lr=0x801DAAE4u; f_801CD9D0(c); // 801DAAE0
L_801DAAE4:;
  c->r[5]=c->r[30]|c->r[30]; // 801DAAE4
  c->r[3]=0u+0x00000003u; // 801DAAE8
  c->r[4]=0u+0x0000000Du; // 801DAAEC
  c->r[6]=0u+0x00000000u; // 801DAAF0
  c->lr=0x801DAAF8u; f_801DA5C8(c); // 801DAAF4
L_801DAAF8:;
  c->r[11]=c->r[1]+0x00000030u; // 801DAAF8
  c->lr=0x801DAB00u; f_800C2E98(c); // 801DAAFC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801DAB00
  c->lr=c->r[0]; // 801DAB04
  c->r[1]=c->r[1]+0x00000030u; // 801DAB08
  return; // 801DAB0C
}

// btm_sco_connected
void f_801DAB10(Ctx* __restrict c) {
  trace_call(0x801DAB10u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DAB10
  c->r[0]=c->lr; // 801DAB14
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DAB18
  c->r[11]=c->r[1]+0x00000030u; // 801DAB1C
  c->lr=0x801DAB24u; f_800C2E40(c); // 801DAB20
  c->r[7]=0u+0x80480000u; // 801DAB24
  c->r[24]=c->r[3]|c->r[3]; // 801DAB28
  c->r[7]=c->r[7]+0x000034D8u; // 801DAB2C
  c->r[25]=c->r[4]|c->r[4]; // 801DAB30
  W16(c->r[7]+0x000018F6u,c->r[3]); // 801DAB34
  c->r[26]=c->r[5]|c->r[5]; // 801DAB38
  c->r[29]=c->r[6]|c->r[6]; // 801DAB3C
  c->r[31]=c->r[7]+0x00001854u; // 801DAB40
  c->r[27]=0u+0x00000000u; // 801DAB44
  c->r[30]=0u+0x00000000u; // 801DAB48
L_801DAB4C:;
  c->r[28]=R16(c->r[31]+0x00000008u); // 801DAB4C
  c->r[3]=c->r[28]+0x00010000u; // 801DAB50
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801DAB54
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801DAB58
  cmpu(c,0,c->r[0],0x00000002u); // 801DAB5C
  if (crb(c,1)) { goto L_801DAC88; } // 801DAB60
  c->r[0]=R8(c->r[31]+0x0000000Du); // 801DAB64
  cmps(c,0,(int32_t)c->r[0],0); // 801DAB68
  if (crb(c,2)) { goto L_801DAC88; } // 801DAB6C
  cmps(c,0,(int32_t)c->r[25],0); // 801DAB70
  if (crb(c,2)) { goto L_801DAB90; } // 801DAB74
  c->r[4]=c->r[25]|c->r[25]; // 801DAB78
  c->r[3]=c->r[31]+0x00000028u; // 801DAB7C
  c->r[5]=0u+0x00000006u; // 801DAB80
  c->lr=0x801DAB88u; f_800C6228(c); // 801DAB84
  cmps(c,0,(int32_t)c->r[3],0); // 801DAB88
  if (!crb(c,2)) { goto L_801DAC88; } // 801DAB8C
L_801DAB90:;
  cmps(c,0,(int32_t)c->r[24],0); // 801DAB90
  if (crb(c,2)) { goto L_801DABD0; } // 801DAB94
  cmpu(c,0,c->r[28],0x00000003u); // 801DAB98
  if (!crb(c,2)) { goto L_801DABC4; } // 801DAB9C
  cmpu(c,0,c->r[24],0x00000023u); // 801DABA0
  if (crb(c,2)) { goto L_801DAC98; } // 801DABA4
  c->r[0]=0u+0x00000000u; // 801DABA8
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; // 801DABAC
  W16(c->r[31]+0x00000008u,c->r[0]); // 801DABB0
  c->r[12]=R32(c->r[31]+0x00000004u); // 801DABB4
  c->ctr=c->r[12]; // 801DABB8
  if (true) { c->lr=0x801DABC0u; dispatch(c,c->ctr); } // 801DABBC
  goto L_801DAC98; // 801DABC0
L_801DABC4:;
  c->r[0]=0u+0x00000001u; // 801DABC4
  W16(c->r[31]+0x00000008u,c->r[0]); // 801DABC8
  goto L_801DAC98; // 801DABCC
L_801DABD0:;
  cmpu(c,0,c->r[28],0x00000001u); // 801DABD0
  if (!crb(c,2)) { goto L_801DABDC; } // 801DABD4
  c->r[27]=0u+0x00000001u; // 801DABD8
L_801DABDC:;
  c->r[0]=0u+0x00000004u; // 801DABDC
  c->r[3]=0u+0x80480000u; // 801DABE0
  W16(c->r[31]+0x00000008u,c->r[0]); // 801DABE4
  c->r[3]=c->r[3]+0x000034D8u; // 801DABE8
  W16(c->r[31]+0x0000000Au,c->r[26]); // 801DABEC
  c->r[0]=R8(c->r[3]+0x00001908u); // 801DABF0
  cmps(c,0,(int32_t)c->r[0],0); // 801DABF4
  if (!crb(c,2)) { goto L_801DAC34; } // 801DABF8
  c->r[0]=0u+0x00000000u; // 801DABFC
  cmps(c,0,(int32_t)c->r[27],0); // 801DAC00
  W8(c->r[31]+0x0000002Eu,c->r[0]); // 801DAC04
  if (crb(c,2)) { goto L_801DAC74; } // 801DAC08
  c->r[6]=R16(c->r[31]+0x00000020u); // 801DAC0C
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; // 801DAC10
  c->r[5]=R16(c->r[31]+0x0000001Cu); // 801DAC14
  c->r[4]=c->r[1]+0x00000008u; // 801DAC18
  c->r[0]=R8(c->r[31]+0x00000022u); // 801DAC1C
  W16(c->r[1]+0x0000000Au,c->r[6]); // 801DAC20
  W16(c->r[1]+0x00000008u,c->r[5]); // 801DAC24
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801DAC28
  c->lr=0x801DAC30u; f_801DAFB8(c); // 801DAC2C
  goto L_801DAC74; // 801DAC30
L_801DAC34:;
  cmps(c,0,(int32_t)c->r[29],0); // 801DAC34
  if (crb(c,2)) { goto L_801DAC74; } // 801DAC38
  c->r[3]=R16(c->r[29]+0x00000000u); // 801DAC3C
  c->r[0]=R16(c->r[29]+0x00000002u); // 801DAC40
  W16(c->r[31]+0x00000024u,c->r[3]); // 801DAC44
  W16(c->r[31]+0x00000026u,c->r[0]); // 801DAC48
  c->r[3]=R16(c->r[29]+0x00000004u); // 801DAC4C
  c->r[0]=R16(c->r[29]+0x00000006u); // 801DAC50
  W16(c->r[31]+0x00000028u,c->r[3]); // 801DAC54
  W16(c->r[31]+0x0000002Au,c->r[0]); // 801DAC58
  c->r[0]=R16(c->r[29]+0x00000008u); // 801DAC5C
  W16(c->r[31]+0x0000002Cu,c->r[0]); // 801DAC60
  c->r[0]=R16(c->r[29]+0x0000000Au); // 801DAC64
  W16(c->r[31]+0x0000002Eu,c->r[0]); // 801DAC68
  c->r[0]=R16(c->r[29]+0x0000000Cu); // 801DAC6C
  W16(c->r[31]+0x00000030u,c->r[0]); // 801DAC70
L_801DAC74:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 801DAC74
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; // 801DAC78
  c->ctr=c->r[12]; // 801DAC7C
  if (true) { c->lr=0x801DAC84u; dispatch(c,c->ctr); } // 801DAC80
  goto L_801DAC98; // 801DAC84
L_801DAC88:;
  c->r[30]=c->r[30]+0x00000001u; // 801DAC88
  c->r[31]=c->r[31]+0x00000034u; // 801DAC8C
  cmpu(c,0,c->r[30],0x00000003u); // 801DAC90
  if (crb(c,0)) { IRQCHK(c); goto L_801DAB4C; } // 801DAC94
L_801DAC98:;
  c->r[11]=c->r[1]+0x00000030u; // 801DAC98
  c->lr=0x801DACA0u; f_800C2E8C(c); // 801DAC9C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801DACA0
  c->lr=c->r[0]; // 801DACA4
  c->r[1]=c->r[1]+0x00000030u; // 801DACA8
  return; // 801DACAC
}

// BTM_RemoveSco
void f_801DACB0(Ctx* __restrict c) {
  trace_call(0x801DACB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DACB0
  c->r[0]=c->lr; // 801DACB4
  c->r[4]=0u+0x80480000u; // 801DACB8
  cmpu(c,0,c->r[3],0x00000003u); // 801DACBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DACC0
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)52); // 801DACC4
  c->r[4]=c->r[4]+0x000034D8u; // 801DACC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DACCC
  c->r[31]=c->r[4]+c->r[0]; // 801DACD0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DACD4
  if (!crb(c,0)) { goto L_801DACE8; } // 801DACD8
  c->r[30]=R16(c->r[31]+0x0000185Cu); // 801DACDC
  cmps(c,0,(int32_t)c->r[30],0); // 801DACE0
  if (!crb(c,2)) { goto L_801DACF0; } // 801DACE4
L_801DACE8:;
  c->r[3]=0u+0x00000007u; // 801DACE8
  goto L_801DAD50; // 801DACEC
L_801DACF0:;
  c->r[0]=R16(c->r[31]+0x0000185Eu); // 801DACF0
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801DACF4
  if (crb(c,2)) { goto L_801DAD04; } // 801DACF8
  cmpu(c,0,c->r[30],0x00000006u); // 801DACFC
  if (!crb(c,2)) { goto L_801DAD24; } // 801DAD00
L_801DAD04:;
  c->r[3]=0u+0x00010000u; // 801DAD04
  c->r[0]=0u+0x00000000u; // 801DAD08
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 801DAD0C
  W16(c->r[31]+0x0000185Eu,c->r[4]); // 801DAD10
  c->r[3]=0u+0x00000000u; // 801DAD14
  W16(c->r[31]+0x0000185Cu,c->r[0]); // 801DAD18
  W32(c->r[31]+0x00001864u,c->r[0]); // 801DAD1C
  goto L_801DAD50; // 801DAD20
L_801DAD24:;
  c->r[0]=0u+0x00000005u; // 801DAD24
  c->r[4]=0u+0x00000013u; // 801DAD28
  W16(c->r[31]+0x0000185Cu,c->r[0]); // 801DAD2C
  c->r[3]=R16(c->r[31]+0x0000185Eu); // 801DAD30
  c->lr=0x801DAD38u; f_801E0B94(c); // 801DAD34
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801DAD38
  if (!crb(c,2)) { goto L_801DAD4C; } // 801DAD3C
  W16(c->r[31]+0x0000185Cu,c->r[30]); // 801DAD40
  c->r[3]=0u+0x00000003u; // 801DAD44
  goto L_801DAD50; // 801DAD48
L_801DAD4C:;
  c->r[3]=0u+0x00000001u; // 801DAD4C
L_801DAD50:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DAD50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DAD54
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DAD58
  c->lr=c->r[0]; // 801DAD5C
  c->r[1]=c->r[1]+0x00000010u; // 801DAD60
  return; // 801DAD64
}

// btm_remove_sco_links
void f_801DAD68(Ctx* __restrict c) {
  trace_call(0x801DAD68u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DAD68
  c->r[0]=c->lr; // 801DAD6C
  c->r[4]=0u+0x80480000u; // 801DAD70
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DAD74
  c->r[4]=c->r[4]+0x000034D8u; // 801DAD78
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DAD7C
  c->r[31]=c->r[4]+0x00001854u; // 801DAD80
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DAD84
  c->r[30]=0u+0x00000000u; // 801DAD88
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DAD8C
  c->r[29]=c->r[3]|c->r[3]; // 801DAD90
L_801DAD94:;
  c->r[0]=R8(c->r[31]+0x0000000Du); // 801DAD94
  cmps(c,0,(int32_t)c->r[0],0); // 801DAD98
  if (crb(c,2)) { goto L_801DADC0; } // 801DAD9C
  c->r[4]=c->r[29]|c->r[29]; // 801DADA0
  c->r[3]=c->r[31]+0x00000028u; // 801DADA4
  c->r[5]=0u+0x00000006u; // 801DADA8
  c->lr=0x801DADB0u; f_800C6228(c); // 801DADAC
  cmps(c,0,(int32_t)c->r[3],0); // 801DADB0
  if (!crb(c,2)) { goto L_801DADC0; } // 801DADB4
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; // 801DADB8
  c->lr=0x801DADC0u; f_801DACB0(c); // 801DADBC
L_801DADC0:;
  c->r[30]=c->r[30]+0x00000001u; // 801DADC0
  c->r[31]=c->r[31]+0x00000034u; // 801DADC4
  cmpu(c,0,c->r[30],0x00000003u); // 801DADC8
  if (crb(c,0)) { IRQCHK(c); goto L_801DAD94; } // 801DADCC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DADD0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DADD4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DADD8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DADDC
  c->lr=c->r[0]; // 801DADE0
  c->r[1]=c->r[1]+0x00000020u; // 801DADE4
  return; // 801DADE8
}

// btm_sco_removed
void f_801DADEC(Ctx* __restrict c) {
  trace_call(0x801DADECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DADEC
  c->r[0]=c->lr; // 801DADF0
  c->r[5]=0u+0x80480000u; // 801DADF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DADF8
  c->r[5]=c->r[5]+0x000034D8u; // 801DADFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DAE00
  c->r[31]=c->r[3]|c->r[3]; // 801DAE04
  c->r[3]=0u+0x00000000u; // 801DAE08
  W16(c->r[5]+0x000018F6u,c->r[4]); // 801DAE0C
  c->r[0]=R16(c->r[5]+0x0000185Cu); // 801DAE10
  cmps(c,0,(int32_t)c->r[0],7); // 801DAE14
  if (!crb(c,0)) { goto L_801DAE2C; } // 801DAE18
  cmps(c,0,(int32_t)c->r[0],2); // 801DAE1C
  if (!crb(c,0)) { goto L_801DAE28; } // 801DAE20
  goto L_801DAE2C; // 801DAE24
L_801DAE28:;
  c->r[3]=0u+0x00000001u; // 801DAE28
L_801DAE2C:;
  c->r[0]=R16(c->r[5]+0x00001890u); // 801DAE2C
  cmps(c,0,(int32_t)c->r[0],7); // 801DAE30
  if (!crb(c,0)) { goto L_801DAE48; } // 801DAE34
  cmps(c,0,(int32_t)c->r[0],2); // 801DAE38
  if (!crb(c,0)) { goto L_801DAE44; } // 801DAE3C
  goto L_801DAE48; // 801DAE40
L_801DAE44:;
  c->r[3]=c->r[3]+0x00000001u; // 801DAE44
L_801DAE48:;
  c->r[0]=R16(c->r[5]+0x000018C4u); // 801DAE48
  cmps(c,0,(int32_t)c->r[0],7); // 801DAE4C
  if (!crb(c,0)) { goto L_801DAE64; } // 801DAE50
  cmps(c,0,(int32_t)c->r[0],2); // 801DAE54
  if (!crb(c,0)) { goto L_801DAE60; } // 801DAE58
  goto L_801DAE64; // 801DAE5C
L_801DAE60:;
  c->r[3]=c->r[3]+0x00000001u; // 801DAE60
L_801DAE64:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801DAE64
  cmpu(c,0,c->r[0],0x00000001u); // 801DAE68
  if (crb(c,1)) { goto L_801DAE78; } // 801DAE6C
  c->r[3]=0u+0x00000000u; // 801DAE70
  c->lr=0x801DAE78u; f_801D5A54(c); // 801DAE74
L_801DAE78:;
  c->r[3]=0u+0x80480000u; // 801DAE78
  c->r[0]=0u+0x00000003u; // 801DAE7C
  c->r[3]=c->r[3]+0x000034D8u; // 801DAE80
  c->r[6]=0u+0x00000000u; // 801DAE84
  c->r[5]=c->r[3]+0x00001854u; // 801DAE88
  c->ctr=c->r[0]; // 801DAE8C
L_801DAE90:;
  c->r[0]=R16(c->r[5]+0x00000008u); // 801DAE90
  cmps(c,0,(int32_t)c->r[0],0); // 801DAE94
  if (crb(c,2)) { goto L_801DAEE0; } // 801DAE98
  cmpu(c,0,c->r[0],0x00000001u); // 801DAE9C
  if (crb(c,2)) { goto L_801DAEE0; } // 801DAEA0
  c->r[0]=R16(c->r[5]+0x0000000Au); // 801DAEA4
  cmpu(c,0,c->r[0],c->r[31]); // 801DAEA8
  if (!crb(c,2)) { goto L_801DAEE0; } // 801DAEAC
  c->r[4]=0u+0x00000000u; // 801DAEB0
  c->r[3]=0u+0x00010000u; // 801DAEB4
  W16(c->r[5]+0x00000008u,c->r[4]); // 801DAEB8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801DAEBC
  c->r[3]=rotl(c->r[6],0)&0x0000FFFFu; // 801DAEC0
  W16(c->r[5]+0x0000000Au,c->r[0]); // 801DAEC4
  W8(c->r[5]+0x0000000Du,c->r[4]); // 801DAEC8
  W32(c->r[5]+0x00000010u,c->r[4]); // 801DAECC
  c->r[12]=R32(c->r[5]+0x00000004u); // 801DAED0
  c->ctr=c->r[12]; // 801DAED4
  if (true) { c->lr=0x801DAEDCu; dispatch(c,c->ctr); } // 801DAED8
  goto L_801DAEEC; // 801DAEDC
L_801DAEE0:;
  c->r[6]=c->r[6]+0x00000001u; // 801DAEE0
  c->r[5]=c->r[5]+0x00000034u; // 801DAEE4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DAE90; } // 801DAEE8
L_801DAEEC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DAEEC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DAEF0
  c->lr=c->r[0]; // 801DAEF4
  c->r[1]=c->r[1]+0x00000010u; // 801DAEF8
  return; // 801DAEFC
}

// btm_sco_acl_removed
void f_801DAF00(Ctx* __restrict c) {
  trace_call(0x801DAF00u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DAF00
  c->r[0]=c->lr; // 801DAF04
  c->r[4]=0u+0x80480000u; // 801DAF08
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DAF0C
  c->r[4]=c->r[4]+0x000034D8u; // 801DAF10
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DAF14
  c->r[31]=0u+0x00000000u; // 801DAF18
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DAF1C
  c->r[30]=c->r[4]+0x00001854u; // 801DAF20
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DAF24
  c->r[29]=0u+0x00000000u; // 801DAF28
  W32(c->r[1]+0x00000010u,c->r[28]); // 801DAF2C
  c->r[28]=c->r[3]|c->r[3]; // 801DAF30
L_801DAF34:;
  c->r[0]=R16(c->r[30]+0x00000008u); // 801DAF34
  cmps(c,0,(int32_t)c->r[0],0); // 801DAF38
  if (crb(c,2)) { goto L_801DAF84; } // 801DAF3C
  cmps(c,0,(int32_t)c->r[28],0); // 801DAF40
  if (crb(c,2)) { goto L_801DAF6C; } // 801DAF44
  c->r[4]=c->r[28]|c->r[28]; // 801DAF48
  c->r[3]=c->r[30]+0x00000028u; // 801DAF4C
  c->r[5]=0u+0x00000006u; // 801DAF50
  c->lr=0x801DAF58u; f_800C6228(c); // 801DAF54
  cmps(c,0,(int32_t)c->r[3],0); // 801DAF58
  if (!crb(c,2)) { goto L_801DAF84; } // 801DAF5C
  c->r[0]=R8(c->r[30]+0x0000000Du); // 801DAF60
  cmps(c,0,(int32_t)c->r[0],0); // 801DAF64
  if (crb(c,2)) { goto L_801DAF84; } // 801DAF68
L_801DAF6C:;
  W16(c->r[30]+0x00000008u,c->r[31]); // 801DAF6C
  c->r[3]=rotl(c->r[29],0)&0x0000FFFFu; // 801DAF70
  W32(c->r[30]+0x00000010u,c->r[31]); // 801DAF74
  c->r[12]=R32(c->r[30]+0x00000004u); // 801DAF78
  c->ctr=c->r[12]; // 801DAF7C
  if (true) { c->lr=0x801DAF84u; dispatch(c,c->ctr); } // 801DAF80
L_801DAF84:;
  c->r[29]=c->r[29]+0x00000001u; // 801DAF84
  c->r[30]=c->r[30]+0x00000034u; // 801DAF88
  cmpu(c,0,c->r[29],0x00000003u); // 801DAF8C
  if (crb(c,0)) { IRQCHK(c); goto L_801DAF34; } // 801DAF90
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DAF94
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DAF98
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DAF9C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DAFA0
  c->r[28]=R32(c->r[1]+0x00000010u); // 801DAFA4
  c->lr=c->r[0]; // 801DAFA8
  c->r[1]=c->r[1]+0x00000020u; // 801DAFAC
  return; // 801DAFB0
}

// btm_route_sco_data
void f_801DAFB4(Ctx* __restrict c) {
  trace_call(0x801DAFB4u);
  f_801CAF10(c); return; // 801DAFB4
}

// BTM_ChangeEScoLinkParms
void f_801DAFB8(Ctx* __restrict c) {
  trace_call(0x801DAFB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DAFB8
  c->r[0]=c->lr; // 801DAFBC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DAFC0
  c->r[11]=c->r[1]+0x00000020u; // 801DAFC4
  c->lr=0x801DAFCCu; f_800C2E4C(c); // 801DAFC8
  cmpu(c,0,c->r[3],0x00000003u); // 801DAFCC
  c->r[30]=0u+0x803A0000u; // 801DAFD0
  c->r[28]=c->r[4]|c->r[4]; // 801DAFD4
  c->r[30]=c->r[30]+0xFFFFF8C0u; // 801DAFD8
  if (!crb(c,0)) { goto L_801DAFFC; } // 801DAFDC
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)52); // 801DAFE0
  c->r[3]=0u+0x80480000u; // 801DAFE4
  c->r[3]=c->r[3]+0x000034D8u; // 801DAFE8
  c->r[31]=c->r[3]+c->r[0]; // 801DAFEC
  c->r[0]=R16(c->r[31]+0x0000185Cu); // 801DAFF0
  cmpu(c,0,c->r[0],0x00000004u); // 801DAFF4
  if (crb(c,2)) { goto L_801DB004; } // 801DAFF8
L_801DAFFC:;
  c->r[3]=0u+0x00000006u; // 801DAFFC
  goto L_801DB148; // 801DB000
L_801DB004:;
  c->r[0]=R8(c->r[31]+0x00001882u); // 801DB004
  c->r[29]=c->r[31]+0x00001868u; // 801DB008
  cmps(c,0,(int32_t)c->r[0],0); // 801DB00C
  if (crb(c,2)) { goto L_801DB020; } // 801DB010
  c->r[0]=R8(c->r[3]+0x00001908u); // 801DB014
  cmps(c,0,(int32_t)c->r[0],0); // 801DB018
  if (!crb(c,2)) { goto L_801DB080; } // 801DB01C
L_801DB020:;
  c->r[3]=0u+0x80480000u; // 801DB020
  c->r[4]=R16(c->r[4]+0x00000002u); // 801DB024
  c->r[3]=c->r[3]+0x000034D8u; // 801DB028
  c->r[0]=R16(c->r[3]+0x00000656u); // 801DB02C
  c->r[0]=rotl(c->r[0],0)&0x00000007u; // 801DB030
  c->r[0]=c->r[4]&c->r[0]; // 801DB034
  W16(c->r[29]+0x0000000Cu,c->r[0]); // 801DB038
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801DB03C
  cmpu(c,0,c->r[0],0x00000003u); // 801DB040
  if (crb(c,0)) { goto L_801DB060; } // 801DB044
  c->r[3]=0u+0x000D0000u; // 801DB048
  c->r[5]=R16(c->r[31]+0x0000185Eu); // 801DB04C
  c->r[6]=R16(c->r[29]+0x0000000Cu); // 801DB050
  c->r[3]=c->r[3]+0x00000002u; // 801DB054
  c->r[4]=c->r[30]+0x00000248u; // 801DB058
  c->lr=0x801DB060u; f_801CDA10(c); // 801DB05C
L_801DB060:;
  c->r[0]=R16(c->r[29]+0x0000000Cu); // 801DB060
  c->r[3]=R16(c->r[31]+0x0000185Eu); // 801DB064
  c->r[4]=rotl(c->r[0],5)&0x000000E0u; // 801DB068
  c->lr=0x801DB070u; f_801E1228(c); // 801DB06C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801DB070
  if (!crb(c,2)) { goto L_801DB144; } // 801DB074
  c->r[3]=0u+0x00000003u; // 801DB078
  goto L_801DB148; // 801DB07C
L_801DB080:;
  c->r[0]=R8(c->r[3]+0x00000636u); // 801DB080
  c->r[3]=R16(c->r[3]+0x00000656u); // 801DB084
  c->r[4]=R16(c->r[4]+0x00000002u); // 801DB088
  cmpu(c,0,c->r[0],0x00000003u); // 801DB08C
  c->r[0]=c->r[4]&c->r[3]; // 801DB090
  c->r[27]=rotl(c->r[0],0)&0x0000003Fu; // 801DB094
  if (crb(c,0)) { goto L_801DB0AC; } // 801DB098
  c->r[0]=c->r[4]|c->r[3]; // 801DB09C
  c->r[0]=rotl(c->r[0],0)&0x000003C0u; // 801DB0A0
  c->r[0]=c->r[27]|c->r[0]; // 801DB0A4
  c->r[27]=rotl(c->r[0],0)&0x0000FFFFu; // 801DB0A8
L_801DB0AC:;
  c->r[3]=0u+0x80480000u; // 801DB0AC
  c->r[3]=c->r[3]+0x000034D8u; // 801DB0B0
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801DB0B4
  cmpu(c,0,c->r[0],0x00000003u); // 801DB0B8
  if (crb(c,0)) { goto L_801DB0D4; } // 801DB0BC
  c->r[3]=0u+0x000D0000u; // 801DB0C0
  c->r[5]=R16(c->r[31]+0x0000185Eu); // 801DB0C4
  c->r[3]=c->r[3]+0x00000002u; // 801DB0C8
  c->r[4]=c->r[30]+0x0000028Cu; // 801DB0CC
  c->lr=0x801DB0D4u; f_801CD9F0(c); // 801DB0D0
L_801DB0D4:;
  c->r[3]=0u+0x80480000u; // 801DB0D4
  c->r[3]=c->r[3]+0x000034D8u; // 801DB0D8
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801DB0DC
  cmpu(c,0,c->r[0],0x00000003u); // 801DB0E0
  if (crb(c,0)) { goto L_801DB110; } // 801DB0E4
  c->r[3]=0u+0x000D0000u; // 801DB0E8
  c->r[5]=R32(c->r[29]+0x00000000u); // 801DB0EC
  c->r[6]=R32(c->r[29]+0x00000004u); // 801DB0F0
  c->r[3]=c->r[3]+0x00000002u; // 801DB0F4
  c->r[7]=R16(c->r[28]+0x00000000u); // 801DB0F8
  c->r[4]=c->r[30]+0x0000008Cu; // 801DB0FC
  c->r[8]=R16(c->r[29]+0x0000000Au); // 801DB100
  c->r[10]=rotl(c->r[27],0)&0x0000FFFFu; // 801DB104
  c->r[9]=R8(c->r[28]+0x00000004u); // 801DB108
  c->lr=0x801DB110u; f_801CDA90(c); // 801DB10C
L_801DB110:;
  c->r[3]=R16(c->r[31]+0x0000185Eu); // 801DB110
  c->r[9]=rotl(c->r[27],0)&0x0000FFFFu; // 801DB114
  c->r[4]=R32(c->r[29]+0x00000000u); // 801DB118
  c->r[5]=R32(c->r[29]+0x00000004u); // 801DB11C
  c->r[6]=R16(c->r[28]+0x00000000u); // 801DB120
  c->r[7]=R16(c->r[29]+0x0000000Au); // 801DB124
  c->r[8]=R8(c->r[28]+0x00000004u); // 801DB128
  c->lr=0x801DB130u; f_801E16AC(c); // 801DB12C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801DB130
  if (!crb(c,2)) { goto L_801DB140; } // 801DB134
  c->r[3]=0u+0x00000003u; // 801DB138
  goto L_801DB148; // 801DB13C
L_801DB140:;
  W16(c->r[28]+0x00000002u,c->r[27]); // 801DB140
L_801DB144:;
  c->r[3]=0u+0x00000001u; // 801DB144
L_801DB148:;
  c->r[11]=c->r[1]+0x00000020u; // 801DB148
  c->lr=0x801DB150u; f_800C2E98(c); // 801DB14C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DB150
  c->lr=c->r[0]; // 801DB154
  c->r[1]=c->r[1]+0x00000020u; // 801DB158
  return; // 801DB15C
}

// btm_esco_proc_conn_chg
void f_801DB160(Ctx* __restrict c) {
  trace_call(0x801DB160u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB160
  c->r[0]=c->lr; // 801DB164
  W32(c->r[1]+0x00000044u,c->r[0]); // 801DB168
  c->r[11]=c->r[1]+0x00000040u; // 801DB16C
  c->lr=0x801DB174u; f_800C2E40(c); // 801DB170
  c->r[9]=0u+0x80480000u; // 801DB174
  c->r[24]=c->r[3]|c->r[3]; // 801DB178
  c->r[9]=c->r[9]+0x000034D8u; // 801DB17C
  c->r[25]=c->r[4]|c->r[4]; // 801DB180
  c->r[0]=R8(c->r[9]+0x000027C0u); // 801DB184
  c->r[26]=c->r[5]|c->r[5]; // 801DB188
  c->r[27]=c->r[6]|c->r[6]; // 801DB18C
  c->r[28]=c->r[7]|c->r[7]; // 801DB190
  cmpu(c,0,c->r[0],0x00000004u); // 801DB194
  c->r[29]=c->r[8]|c->r[8]; // 801DB198
  c->r[31]=c->r[9]+0x00001854u; // 801DB19C
  if (crb(c,0)) { goto L_801DB1C0; } // 801DB1A0
  c->r[3]=0u+0x000D0000u; // 801DB1A4
  c->r[4]=0u+0x803A0000u; // 801DB1A8
  c->r[5]=c->r[25]|c->r[25]; // 801DB1AC
  c->r[6]=c->r[24]|c->r[24]; // 801DB1B0
  c->r[3]=c->r[3]+0x00000003u; // 801DB1B4
  c->r[4]=c->r[4]+0xFFFFFB84u; // 801DB1B8
  c->lr=0x801DB1C0u; f_801CDA10(c); // 801DB1BC
L_801DB1C0:;
  c->r[0]=0u+0x00000003u; // 801DB1C0
  c->r[30]=0u+0x00000000u; // 801DB1C4
  c->ctr=c->r[0]; // 801DB1C8
L_801DB1CC:;
  c->r[0]=R16(c->r[31]+0x00000008u); // 801DB1CC
  cmpu(c,0,c->r[0],0x00000004u); // 801DB1D0
  if (!crb(c,2)) { goto L_801DB240; } // 801DB1D4
  c->r[0]=R16(c->r[31]+0x0000000Au); // 801DB1D8
  cmpu(c,0,c->r[25],c->r[0]); // 801DB1DC
  if (!crb(c,2)) { goto L_801DB240; } // 801DB1E0
  c->r[0]=R32(c->r[31]+0x00000010u); // 801DB1E4
  cmps(c,0,(int32_t)c->r[0],0); // 801DB1E8
  if (crb(c,2)) { goto L_801DB24C; } // 801DB1EC
  c->r[3]=c->r[1]+0x0000000Eu; // 801DB1F0
  c->r[4]=c->r[31]+0x00000028u; // 801DB1F4
  c->r[5]=0u+0x00000006u; // 801DB1F8
  c->lr=0x801DB200u; f_80004000(c); // 801DB1FC
  W16(c->r[31]+0x00000024u,c->r[28]); // 801DB200
  c->r[4]=c->r[1]+0x00000008u; // 801DB204
  c->r[3]=0u+0x00000001u; // 801DB208
  W16(c->r[31]+0x00000026u,c->r[29]); // 801DB20C
  W8(c->r[31]+0x0000002Fu,c->r[26]); // 801DB210
  W8(c->r[31]+0x00000030u,c->r[27]); // 801DB214
  c->r[12]=R32(c->r[31]+0x00000010u); // 801DB218
  W8(c->r[1]+0x00000014u,c->r[24]); // 801DB21C
  W16(c->r[1]+0x00000008u,c->r[30]); // 801DB220
  W16(c->r[1]+0x0000000Au,c->r[28]); // 801DB224
  W16(c->r[1]+0x0000000Cu,c->r[29]); // 801DB228
  W8(c->r[1]+0x00000015u,c->r[26]); // 801DB22C
  W8(c->r[1]+0x00000016u,c->r[27]); // 801DB230
  c->ctr=c->r[12]; // 801DB234
  if (true) { c->lr=0x801DB23Cu; dispatch(c,c->ctr); } // 801DB238
  goto L_801DB24C; // 801DB23C
L_801DB240:;
  c->r[30]=c->r[30]+0x00000001u; // 801DB240
  c->r[31]=c->r[31]+0x00000034u; // 801DB244
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DB1CC; } // 801DB248
L_801DB24C:;
  c->r[11]=c->r[1]+0x00000040u; // 801DB24C
  c->lr=0x801DB254u; f_800C2E8C(c); // 801DB250
  c->r[0]=R32(c->r[1]+0x00000044u); // 801DB254
  c->lr=c->r[0]; // 801DB258
  c->r[1]=c->r[1]+0x00000040u; // 801DB25C
  return; // 801DB260
}

// btm_is_sco_active
void f_801DB264(Ctx* __restrict c) {
  trace_call(0x801DB264u);
  c->r[4]=0u+0x80480000u; // 801DB264
  c->r[4]=c->r[4]+0x000034D8u; // 801DB268
  c->r[0]=R16(c->r[4]+0x0000185Eu); // 801DB26C
  cmpu(c,0,c->r[3],c->r[0]); // 801DB270
  if (!crb(c,2)) { goto L_801DB28C; } // 801DB274
  c->r[0]=R16(c->r[4]+0x0000185Cu); // 801DB278
  cmpu(c,0,c->r[0],0x00000004u); // 801DB27C
  if (!crb(c,2)) { goto L_801DB28C; } // 801DB280
  c->r[3]=0u+0x00000001u; // 801DB284
  return; // 801DB288
L_801DB28C:;
  c->r[0]=R16(c->r[4]+0x00001892u); // 801DB28C
  cmpu(c,0,c->r[3],c->r[0]); // 801DB290
  if (!crb(c,2)) { goto L_801DB2AC; } // 801DB294
  c->r[0]=R16(c->r[4]+0x00001890u); // 801DB298
  cmpu(c,0,c->r[0],0x00000004u); // 801DB29C
  if (!crb(c,2)) { goto L_801DB2AC; } // 801DB2A0
  c->r[3]=0u+0x00000001u; // 801DB2A4
  return; // 801DB2A8
L_801DB2AC:;
  c->r[0]=R16(c->r[4]+0x000018C6u); // 801DB2AC
  cmpu(c,0,c->r[3],c->r[0]); // 801DB2B0
  if (!crb(c,2)) { goto L_801DB2CC; } // 801DB2B4
  c->r[0]=R16(c->r[4]+0x000018C4u); // 801DB2B8
  cmpu(c,0,c->r[0],0x00000004u); // 801DB2BC
  if (!crb(c,2)) { goto L_801DB2CC; } // 801DB2C0
  c->r[3]=0u+0x00000001u; // 801DB2C4
  return; // 801DB2C8
L_801DB2CC:;
  c->r[3]=0u+0x00000000u; // 801DB2CC
  return; // 801DB2D0
}

// btm_num_sco_links_active
void f_801DB2D4(Ctx* __restrict c) {
  trace_call(0x801DB2D4u);
  c->r[4]=0u+0x80480000u; // 801DB2D4
  c->r[3]=0u+0x00000000u; // 801DB2D8
  c->r[4]=c->r[4]+0x000034D8u; // 801DB2DC
  c->r[0]=R16(c->r[4]+0x0000185Cu); // 801DB2E0
  cmps(c,0,(int32_t)c->r[0],7); // 801DB2E4
  if (!crb(c,0)) { goto L_801DB2FC; } // 801DB2E8
  cmps(c,0,(int32_t)c->r[0],2); // 801DB2EC
  if (!crb(c,0)) { goto L_801DB2F8; } // 801DB2F0
  goto L_801DB2FC; // 801DB2F4
L_801DB2F8:;
  c->r[3]=0u+0x00000001u; // 801DB2F8
L_801DB2FC:;
  c->r[0]=R16(c->r[4]+0x00001890u); // 801DB2FC
  cmps(c,0,(int32_t)c->r[0],7); // 801DB300
  if (!crb(c,0)) { goto L_801DB318; } // 801DB304
  cmps(c,0,(int32_t)c->r[0],2); // 801DB308
  if (!crb(c,0)) { goto L_801DB314; } // 801DB30C
  goto L_801DB318; // 801DB310
L_801DB314:;
  c->r[3]=c->r[3]+0x00000001u; // 801DB314
L_801DB318:;
  c->r[0]=R16(c->r[4]+0x000018C4u); // 801DB318
  cmps(c,0,(int32_t)c->r[0],7); // 801DB31C
  if (!crb(c,0)) return; // 801DB320
  cmps(c,0,(int32_t)c->r[0],2); // 801DB324
  if (crb(c,0)) return; // 801DB328
  c->r[3]=c->r[3]+0x00000001u; // 801DB32C
  return; // 801DB330
}

// btm_is_sco_active_by_bdaddr
void f_801DB334(Ctx* __restrict c) {
  trace_call(0x801DB334u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB334
  c->r[0]=c->lr; // 801DB338
  c->r[4]=0u+0x80480000u; // 801DB33C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DB340
  c->r[4]=c->r[4]+0x000034D8u; // 801DB344
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DB348
  c->r[31]=0u+0x00000000u; // 801DB34C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DB350
  c->r[30]=c->r[4]+0x00001854u; // 801DB354
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DB358
  c->r[29]=c->r[3]|c->r[3]; // 801DB35C
L_801DB360:;
  c->r[4]=c->r[29]|c->r[29]; // 801DB360
  c->r[3]=c->r[30]+0x00000028u; // 801DB364
  c->r[5]=0u+0x00000006u; // 801DB368
  c->lr=0x801DB370u; f_800C6228(c); // 801DB36C
  cmps(c,0,(int32_t)c->r[3],0); // 801DB370
  if (!crb(c,2)) { goto L_801DB38C; } // 801DB374
  c->r[0]=R16(c->r[30]+0x00000008u); // 801DB378
  cmpu(c,0,c->r[0],0x00000004u); // 801DB37C
  if (!crb(c,2)) { goto L_801DB38C; } // 801DB380
  c->r[3]=0u+0x00000001u; // 801DB384
  goto L_801DB3A0; // 801DB388
L_801DB38C:;
  c->r[31]=c->r[31]+0x00000001u; // 801DB38C
  c->r[30]=c->r[30]+0x00000034u; // 801DB390
  cmpu(c,0,c->r[31],0x00000003u); // 801DB394
  if (crb(c,0)) { IRQCHK(c); goto L_801DB360; } // 801DB398
  c->r[3]=0u+0x00000000u; // 801DB39C
L_801DB3A0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DB3A0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DB3A4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DB3A8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DB3AC
  c->lr=c->r[0]; // 801DB3B0
  c->r[1]=c->r[1]+0x00000020u; // 801DB3B4
  return; // 801DB3B8
}

// BTM_SecRegister
void f_801DB3BC(Ctx* __restrict c) {
  trace_call(0x801DB3BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB3BC
  c->r[0]=c->lr; // 801DB3C0
  c->r[6]=0u+0x80480000u; // 801DB3C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DB3C8
  c->r[6]=c->r[6]+0x000034D8u; // 801DB3CC
  c->r[5]=R32(c->r[3]+0x00000000u); // 801DB3D0
  c->r[4]=R32(c->r[3]+0x00000004u); // 801DB3D4
  c->r[0]=R8(c->r[6]+0x000027C0u); // 801DB3D8
  W32(c->r[6]+0x0000190Cu,c->r[5]); // 801DB3DC
  cmpu(c,0,c->r[0],0x00000004u); // 801DB3E0
  W32(c->r[6]+0x00001910u,c->r[4]); // 801DB3E4
  c->r[4]=R32(c->r[3]+0x00000008u); // 801DB3E8
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801DB3EC
  W32(c->r[6]+0x00001914u,c->r[4]); // 801DB3F0
  W32(c->r[6]+0x00001918u,c->r[0]); // 801DB3F4
  c->r[4]=R32(c->r[3]+0x00000010u); // 801DB3F8
  c->r[0]=R32(c->r[3]+0x00000014u); // 801DB3FC
  W32(c->r[6]+0x0000191Cu,c->r[4]); // 801DB400
  W32(c->r[6]+0x00001920u,c->r[0]); // 801DB404
  if (crb(c,0)) { goto L_801DB420; } // 801DB408
  c->r[3]=0u+0x000D0000u; // 801DB40C
  c->r[4]=0u+0x803A0000u; // 801DB410
  c->r[3]=c->r[3]+0x00000003u; // 801DB414
  c->r[4]=c->r[4]+0xFFFFFBC0u; // 801DB418
  c->lr=0x801DB420u; f_801CD9D0(c); // 801DB41C
L_801DB420:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DB420
  c->r[3]=0u+0x00000001u; // 801DB424
  c->lr=c->r[0]; // 801DB428
  c->r[1]=c->r[1]+0x00000010u; // 801DB42C
  return; // 801DB430
}

// BTM_SecAddRmtNameNotifyCallback
void f_801DB434(Ctx* __restrict c) {
  trace_call(0x801DB434u);
  c->r[4]=0u+0x80480000u; // 801DB434
  c->r[0]=0u+0x00000002u; // 801DB438
  c->r[4]=c->r[4]+0x000034D8u; // 801DB43C
  c->r[5]=0u+0x00000000u; // 801DB440
  c->ctr=c->r[0]; // 801DB444
L_801DB448:;
  c->r[0]=R32(c->r[4]+0x0000192Cu); // 801DB448
  cmps(c,0,(int32_t)c->r[0],0); // 801DB44C
  if (!crb(c,2)) { goto L_801DB470; } // 801DB450
  c->r[4]=0u+0x80480000u; // 801DB454
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801DB458
  c->r[4]=c->r[4]+0x000034D8u; // 801DB45C
  c->r[4]=c->r[4]+c->r[0]; // 801DB460
  W32(c->r[4]+0x0000192Cu,c->r[3]); // 801DB464
  c->r[3]=0u+0x00000001u; // 801DB468
  return; // 801DB46C
L_801DB470:;
  c->r[4]=c->r[4]+0x00000004u; // 801DB470
  c->r[5]=c->r[5]+0x00000001u; // 801DB474
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DB448; } // 801DB478
  c->r[3]=0u+0x00000000u; // 801DB47C
  return; // 801DB480
}

// BTM_SecDeleteRmtNameNotifyCallback
void f_801DB484(Ctx* __restrict c) {
  trace_call(0x801DB484u);
  c->r[4]=0u+0x80480000u; // 801DB484
  c->r[0]=0u+0x00000002u; // 801DB488
  c->r[4]=c->r[4]+0x000034D8u; // 801DB48C
  c->r[5]=0u+0x00000000u; // 801DB490
  c->ctr=c->r[0]; // 801DB494
L_801DB498:;
  c->r[0]=R32(c->r[4]+0x0000192Cu); // 801DB498
  cmpu(c,0,c->r[0],c->r[3]); // 801DB49C
  if (!crb(c,2)) { goto L_801DB4C4; } // 801DB4A0
  c->r[3]=0u+0x80480000u; // 801DB4A4
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801DB4A8
  c->r[3]=c->r[3]+0x000034D8u; // 801DB4AC
  c->r[5]=0u+0x00000000u; // 801DB4B0
  c->r[4]=c->r[3]+c->r[0]; // 801DB4B4
  W32(c->r[4]+0x0000192Cu,c->r[5]); // 801DB4B8
  c->r[3]=0u+0x00000001u; // 801DB4BC
  return; // 801DB4C0
L_801DB4C4:;
  c->r[4]=c->r[4]+0x00000004u; // 801DB4C4
  c->r[5]=c->r[5]+0x00000001u; // 801DB4C8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DB498; } // 801DB4CC
  c->r[3]=0u+0x00000000u; // 801DB4D0
  return; // 801DB4D4
}

// BTM_SetPinType
void f_801DB4D8(Ctx* __restrict c) {
  trace_call(0x801DB4D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB4D8
  c->r[0]=c->lr; // 801DB4DC
  c->r[6]=0u+0x80480000u; // 801DB4E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DB4E4
  c->r[6]=c->r[6]+0x000034D8u; // 801DB4E8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DB4EC
  c->r[31]=c->r[5]|c->r[5]; // 801DB4F0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DB4F4
  c->r[30]=c->r[4]|c->r[4]; // 801DB4F8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DB4FC
  c->r[29]=c->r[3]|c->r[3]; // 801DB500
  c->r[0]=R8(c->r[6]+0x000027C0u); // 801DB504
  cmpu(c,0,c->r[0],0x00000003u); // 801DB508
  if (crb(c,0)) { goto L_801DB530; } // 801DB50C
  c->r[3]=0u+0x000D0000u; // 801DB510
  c->r[4]=0u+0x803A0000u; // 801DB514
  c->r[5]=c->r[29]|c->r[29]; // 801DB518
  c->r[6]=c->r[30]|c->r[30]; // 801DB51C
  c->r[7]=c->r[31]|c->r[31]; // 801DB520
  c->r[3]=c->r[3]+0x00000002u; // 801DB524
  c->r[4]=c->r[4]+0xFFFFFC58u; // 801DB528
  c->lr=0x801DB530u; f_801CDA30(c); // 801DB52C
L_801DB530:;
  c->r[3]=0u+0x80480000u; // 801DB530
  c->r[3]=c->r[3]+0x000034D8u; // 801DB534
  c->r[0]=R8(c->r[3]+0x0000064Eu); // 801DB538
  cmpu(c,0,c->r[0],0x00000001u); // 801DB53C
  if (!crb(c,1)) { goto L_801DB54C; } // 801DB540
  c->r[3]=c->r[29]|c->r[29]; // 801DB544
  c->lr=0x801DB54Cu; f_801E1F88(c); // 801DB548
L_801DB54C:;
  c->r[6]=0u+0x80480000u; // 801DB54C
  c->r[4]=c->r[30]|c->r[30]; // 801DB550
  c->r[6]=c->r[6]+0x000034D8u; // 801DB554
  c->r[5]=c->r[31]|c->r[31]; // 801DB558
  W8(c->r[6]+0x00000020u,c->r[29]); // 801DB55C
  c->r[3]=c->r[6]+0x00000022u; // 801DB560
  W8(c->r[6]+0x00000021u,c->r[31]); // 801DB564
  c->lr=0x801DB56Cu; f_80004000(c); // 801DB568
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DB56C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DB570
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DB574
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DB578
  c->lr=c->r[0]; // 801DB57C
  c->r[1]=c->r[1]+0x00000020u; // 801DB580
  return; // 801DB584
}

// BTM_SetSecurityLevel
void f_801DB588(Ctx* __restrict c) {
  trace_call(0x801DB588u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB588
  c->r[0]=c->lr; // 801DB58C
  W32(c->r[1]+0x00000044u,c->r[0]); // 801DB590
  c->r[11]=c->r[1]+0x00000040u; // 801DB594
  c->lr=0x801DB59Cu; f_800C2E30(c); // 801DB598
  c->r[10]=0u+0x80480000u; // 801DB59C
  c->r[31]=0u+0x803A0000u; // 801DB5A0
  c->r[10]=c->r[10]+0x000034D8u; // 801DB5A4
  c->r[11]=0u+0x00010000u; // 801DB5A8
  c->r[20]=c->r[3]|c->r[3]; // 801DB5AC
  c->r[21]=c->r[4]|c->r[4]; // 801DB5B0
  c->r[22]=c->r[5]|c->r[5]; // 801DB5B4
  c->r[23]=c->r[6]|c->r[6]; // 801DB5B8
  c->r[24]=c->r[7]|c->r[7]; // 801DB5BC
  c->r[25]=c->r[8]|c->r[8]; // 801DB5C0
  c->r[26]=c->r[9]|c->r[9]; // 801DB5C4
  c->r[31]=c->r[31]+0xFFFFFBC0u; // 801DB5C8
  c->r[28]=c->r[11]+0xFFFFFFFFu; // 801DB5CC
  c->r[30]=c->r[10]+0x00001990u; // 801DB5D0
  c->r[27]=0u+0x00000000u; // 801DB5D4
  c->r[29]=0u+0x00000000u; // 801DB5D8
L_801DB5DC:;
  c->r[0]=R8(c->r[30]+0x0000000Eu); // 801DB5DC
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801DB5E0
  if (crb(c,2)) { goto L_801DB644; } // 801DB5E4
  c->r[0]=R16(c->r[30]+0x0000000Cu); // 801DB5E8
  cmpu(c,0,c->r[0],c->r[24]); // 801DB5EC
  if (!crb(c,2)) { goto L_801DB654; } // 801DB5F0
  c->r[0]=R32(c->r[30]+0x00000000u); // 801DB5F4
  cmpu(c,0,c->r[0],c->r[25]); // 801DB5F8
  if (!crb(c,2)) { goto L_801DB654; } // 801DB5FC
  c->r[0]=R8(c->r[30]+0x0000000Fu); // 801DB600
  cmpu(c,0,c->r[22],c->r[0]); // 801DB604
  if (!crb(c,2)) { goto L_801DB654; } // 801DB608
  c->r[3]=c->r[21]|c->r[21]; // 801DB60C
  c->r[4]=c->r[30]+0x00000010u; // 801DB610
  c->r[5]=0u+0x00000015u; // 801DB614
  c->lr=0x801DB61Cu; f_800CA49C(c); // 801DB618
  cmps(c,0,(int32_t)c->r[3],0); // 801DB61C
  if (crb(c,2)) { goto L_801DB63C; } // 801DB620
  c->r[3]=c->r[21]|c->r[21]; // 801DB624
  c->r[4]=c->r[30]+0x00000026u; // 801DB628
  c->r[5]=0u+0x00000015u; // 801DB62C
  c->lr=0x801DB634u; f_800CA49C(c); // 801DB630
  cmps(c,0,(int32_t)c->r[3],0); // 801DB634
  if (!crb(c,2)) { goto L_801DB654; } // 801DB638
L_801DB63C:;
  c->r[27]=0u+0x00000001u; // 801DB63C
  goto L_801DB664; // 801DB640
L_801DB644:;
  cmps(c,0,(int32_t)c->r[27],0); // 801DB644
  if (!crb(c,2)) { goto L_801DB654; } // 801DB648
  c->r[27]=0u+0x00000001u; // 801DB64C
  c->r[28]=c->r[29]|c->r[29]; // 801DB650
L_801DB654:;
  c->r[29]=c->r[29]+0x00000001u; // 801DB654
  c->r[30]=c->r[30]+0x0000003Cu; // 801DB658
  cmpu(c,0,c->r[29],0x00000018u); // 801DB65C
  if (crb(c,0)) { IRQCHK(c); goto L_801DB5DC; } // 801DB660
L_801DB664:;
  cmps(c,0,(int32_t)c->r[27],0); // 801DB664
  if (crb(c,2)) { goto L_801DB76C; } // 801DB668
  c->r[0]=rotl(c->r[29],0)&0x0000FFFFu; // 801DB66C
  cmpu(c,0,c->r[0],0x00000018u); // 801DB670
  if (crb(c,0)) { goto L_801DB694; } // 801DB674
  c->r[0]=rotl(c->r[28],0)&0x0000FFFFu; // 801DB678
  c->r[3]=0u+0x80480000u; // 801DB67C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)60); // 801DB680
  c->r[29]=c->r[28]|c->r[28]; // 801DB684
  c->r[3]=c->r[3]+0x000034D8u; // 801DB688
  c->r[3]=c->r[3]+c->r[0]; // 801DB68C
  c->r[30]=c->r[3]+0x00001990u; // 801DB690
L_801DB694:;
  W16(c->r[30]+0x0000000Cu,c->r[24]); // 801DB694
  cmps(c,0,(int32_t)c->r[20],0); // 801DB698
  W8(c->r[30]+0x0000000Fu,c->r[22]); // 801DB69C
  W32(c->r[30]+0x00000000u,c->r[25]); // 801DB6A0
  if (crb(c,2)) { goto L_801DB6CC; } // 801DB6A4
  W32(c->r[30]+0x00000004u,c->r[26]); // 801DB6A8
  c->r[4]=c->r[21]|c->r[21]; // 801DB6AC
  c->r[3]=c->r[30]+0x00000010u; // 801DB6B0
  c->r[5]=0u+0x00000015u; // 801DB6B4
  c->r[0]=R8(c->r[30]+0x0000000Eu); // 801DB6B8
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFC7u; // 801DB6BC
  W8(c->r[30]+0x0000000Eu,c->r[0]); // 801DB6C0
  c->lr=0x801DB6C8u; f_800CA310(c); // 801DB6C4
  goto L_801DB6EC; // 801DB6C8
L_801DB6CC:;
  W32(c->r[30]+0x00000008u,c->r[26]); // 801DB6CC
  c->r[4]=c->r[21]|c->r[21]; // 801DB6D0
  c->r[3]=c->r[30]+0x00000026u; // 801DB6D4
  c->r[5]=0u+0x00000015u; // 801DB6D8
  c->r[0]=R8(c->r[30]+0x0000000Eu); // 801DB6DC
  c->r[0]=rotl(c->r[0],0)&0x000000F8u; // 801DB6E0
  W8(c->r[30]+0x0000000Eu,c->r[0]); // 801DB6E4
  c->lr=0x801DB6ECu; f_800CA310(c); // 801DB6E8
L_801DB6EC:;
  c->r[4]=R8(c->r[30]+0x0000000Eu); // 801DB6EC
  c->r[0]=c->r[23]|0x00000080u; // 801DB6F0
  c->r[3]=0u+0x80480000u; // 801DB6F4
  c->r[0]=c->r[4]|c->r[0]; // 801DB6F8
  W8(c->r[30]+0x0000000Eu,c->r[0]); // 801DB6FC
  c->r[3]=c->r[3]+0x000034D8u; // 801DB700
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801DB704
  cmpu(c,0,c->r[0],0x00000003u); // 801DB708
  if (crb(c,0)) { goto L_801DB738; } // 801DB70C
  c->r[3]=0u+0x000D0000u; // 801DB710
  c->r[6]=c->r[22]|c->r[22]; // 801DB714
  c->r[7]=c->r[20]|c->r[20]; // 801DB718
  c->r[8]=c->r[24]|c->r[24]; // 801DB71C
  c->r[9]=c->r[25]|c->r[25]; // 801DB720
  c->r[10]=c->r[26]|c->r[26]; // 801DB724
  c->r[3]=c->r[3]+0x00000002u; // 801DB728
  c->r[4]=c->r[31]+0x000000E0u; // 801DB72C
  c->r[5]=rotl(c->r[29],0)&0x0000FFFFu; // 801DB730
  c->lr=0x801DB738u; f_801CDA90(c); // 801DB734
L_801DB738:;
  c->r[3]=0u+0x80480000u; // 801DB738
  c->r[3]=c->r[3]+0x000034D8u; // 801DB73C
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801DB740
  cmpu(c,0,c->r[0],0x00000003u); // 801DB744
  if (crb(c,0)) { goto L_801DB794; } // 801DB748
  c->r[3]=0u+0x000D0000u; // 801DB74C
  c->r[5]=R8(c->r[30]+0x0000000Eu); // 801DB750
  c->r[6]=c->r[21]|c->r[21]; // 801DB754
  c->r[4]=c->r[31]+0x00000128u; // 801DB758
  c->r[3]=c->r[3]+0x00000002u; // 801DB75C
  c->r[7]=0u+0x00000015u; // 801DB760
  c->lr=0x801DB768u; f_801CDA30(c); // 801DB764
  goto L_801DB794; // 801DB768
L_801DB76C:;
  c->r[3]=0u+0x80480000u; // 801DB76C
  c->r[3]=c->r[3]+0x000034D8u; // 801DB770
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801DB774
  cmpu(c,0,c->r[0],0x00000002u); // 801DB778
  if (crb(c,0)) { goto L_801DB794; } // 801DB77C
  c->r[3]=0u+0x000D0000u; // 801DB780
  c->r[4]=c->r[31]+0x00000170u; // 801DB784
  c->r[3]=c->r[3]+0x00000001u; // 801DB788
  c->r[5]=0u+0x00000018u; // 801DB78C
  c->lr=0x801DB794u; f_801CD9F0(c); // 801DB790
L_801DB794:;
  c->r[11]=c->r[1]+0x00000040u; // 801DB794
  c->r[3]=c->r[27]|c->r[27]; // 801DB798
  c->lr=0x801DB7A0u; f_800C2E7C(c); // 801DB79C
  c->r[0]=R32(c->r[1]+0x00000044u); // 801DB7A0
  c->lr=c->r[0]; // 801DB7A4
  c->r[1]=c->r[1]+0x00000040u; // 801DB7A8
  return; // 801DB7AC
}

// BTM_PINCodeReply
void f_801DB7B0(Ctx* __restrict c) {
  trace_call(0x801DB7B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB7B0
  c->r[0]=c->lr; // 801DB7B4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DB7B8
  c->r[11]=c->r[1]+0x00000030u; // 801DB7BC
  c->lr=0x801DB7C4u; f_800C2E44(c); // 801DB7C0
  c->r[30]=0u+0x80480000u; // 801DB7C4
  c->r[25]=c->r[3]|c->r[3]; // 801DB7C8
  c->r[30]=c->r[30]+0x000034D8u; // 801DB7CC
  c->r[26]=c->r[4]|c->r[4]; // 801DB7D0
  c->r[0]=R32(c->r[30]+0x0000194Cu); // 801DB7D4
  c->r[27]=c->r[5]|c->r[5]; // 801DB7D8
  c->r[28]=c->r[6]|c->r[6]; // 801DB7DC
  c->r[29]=c->r[7]|c->r[7]; // 801DB7E0
  cmps(c,0,(int32_t)c->r[0],0); // 801DB7E4
  if (crb(c,2)) { goto L_801DB85C; } // 801DB7E8
  c->r[3]=c->r[30]+0x0000193Cu; // 801DB7EC
  c->lr=0x801DB7F4u; f_801CE050(c); // 801DB7F0
  c->r[31]=0u+0x00000000u; // 801DB7F4
  c->r[3]=c->r[30]+0x00001954u; // 801DB7F8
  W32(c->r[30]+0x0000194Cu,c->r[31]); // 801DB7FC
  c->r[4]=0u+0x000000FFu; // 801DB800
  c->r[5]=0u+0x00000006u; // 801DB804
  c->lr=0x801DB80Cu; f_80004350(c); // 801DB808
  cmps(c,0,(int32_t)c->r[26],0); // 801DB80C
  if (crb(c,2)) { goto L_801DB828; } // 801DB810
  c->r[0]=0u+0x0000000Eu; // 801DB814
  c->r[3]=c->r[25]|c->r[25]; // 801DB818
  W8(c->r[30]+0x000027BFu,c->r[0]); // 801DB81C
  c->lr=0x801DB824u; f_801E1188(c); // 801DB820
  goto L_801DB85C; // 801DB824
L_801DB828:;
  W8(c->r[30]+0x000027BFu,c->r[31]); // 801DB828
  c->r[3]=c->r[25]|c->r[25]; // 801DB82C
  c->r[4]=c->r[27]|c->r[27]; // 801DB830
  c->r[5]=c->r[28]|c->r[28]; // 801DB834
  c->lr=0x801DB83Cu; f_801E0FA4(c); // 801DB838
  c->r[3]=c->r[25]|c->r[25]; // 801DB83C
  c->lr=0x801DB844u; f_801D6120(c); // 801DB840
  cmps(c,0,(int32_t)c->r[3],0); // 801DB844
  if (crb(c,2)) { goto L_801DB85C; } // 801DB848
  c->r[0]=R32(c->r[29]+0x00000000u); // 801DB84C
  W32(c->r[3]+0x00000010u,c->r[0]); // 801DB850
  c->r[0]=R32(c->r[29]+0x00000004u); // 801DB854
  W32(c->r[3]+0x00000014u,c->r[0]); // 801DB858
L_801DB85C:;
  c->r[11]=c->r[1]+0x00000030u; // 801DB85C
  c->lr=0x801DB864u; f_800C2E90(c); // 801DB860
  c->r[0]=R32(c->r[1]+0x00000034u); // 801DB864
  c->lr=c->r[0]; // 801DB868
  c->r[1]=c->r[1]+0x00000030u; // 801DB86C
  return; // 801DB870
}

// BTM_DeviceAuthorized
void f_801DB874(Ctx* __restrict c) {
  trace_call(0x801DB874u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DB874
  c->r[0]=c->lr; // 801DB878
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DB87C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DB880
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DB884
  c->r[30]=c->r[3]|c->r[3]; // 801DB888
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DB88C
  c->r[29]=c->r[5]|c->r[5]; // 801DB890
  W32(c->r[1]+0x00000010u,c->r[28]); // 801DB894
  c->r[28]=c->r[4]|c->r[4]; // 801DB898
  c->lr=0x801DB8A0u; f_801D6120(c); // 801DB89C
  cmps(c,1,(int32_t)c->r[3],0); // 801DB8A0
  c->r[31]=c->r[3]|c->r[3]; // 801DB8A4
  if (!crb(c,6)) { goto L_801DB8F0; } // 801DB8A8
  c->r[3]=0u+0x80480000u; // 801DB8AC
  c->r[3]=c->r[3]+0x000034D8u; // 801DB8B0
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801DB8B4
  cmpu(c,0,c->r[0],0x00000002u); // 801DB8B8
  if (crb(c,0)) { goto L_801DBA30; } // 801DB8BC
  c->r[3]=0u+0x000D0000u; // 801DB8C0
  c->r[4]=0u+0x803A0000u; // 801DB8C4
  c->r[5]=R8(c->r[30]+0x00000000u); // 801DB8C8
  c->r[3]=c->r[3]+0x00000001u; // 801DB8CC
  c->r[6]=R8(c->r[30]+0x00000001u); // 801DB8D0
  c->r[4]=c->r[4]+0xFFFFFD60u; // 801DB8D4
  c->r[7]=R8(c->r[30]+0x00000002u); // 801DB8D8
  c->r[8]=R8(c->r[30]+0x00000003u); // 801DB8DC
  c->r[9]=R8(c->r[30]+0x00000004u); // 801DB8E0
  c->r[10]=R8(c->r[30]+0x00000005u); // 801DB8E4
  c->lr=0x801DB8ECu; f_801CDA90(c); // 801DB8E8
  goto L_801DBA30; // 801DB8EC
L_801DB8F0:;
  c->r[3]=0u+0x80480000u; // 801DB8F0
  c->r[3]=c->r[3]+0x000034D8u; // 801DB8F4
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801DB8F8
  cmpu(c,0,c->r[0],0x00000004u); // 801DB8FC
  if (crb(c,0)) { goto L_801DB92C; } // 801DB900
  c->r[3]=0u+0x000D0000u; // 801DB904
  c->r[4]=0u+0x803A0000u; // 801DB908
  c->r[5]=c->r[28]|c->r[28]; // 801DB90C
  c->r[3]=c->r[3]+0x00000003u; // 801DB910
  c->r[4]=c->r[4]+0xFFFFFDC0u; // 801DB914
  if (crb(c,6)) { goto L_801DB924; } // 801DB918
  c->r[6]=R8(c->r[31]+0x0000007Fu); // 801DB91C
  goto L_801DB928; // 801DB920
L_801DB924:;
  c->r[6]=0u+0x00000000u; // 801DB924
L_801DB928:;
  c->lr=0x801DB92Cu; f_801CDA10(c); // 801DB928
L_801DB92C:;
  cmps(c,0,(int32_t)c->r[28],0); // 801DB92C
  if (!crb(c,2)) { goto L_801DB950; } // 801DB930
  c->r[0]=R8(c->r[31]+0x00000076u); // 801DB934
  c->r[0]=c->r[0]|0x00000001u; // 801DB938
  W8(c->r[31]+0x00000076u,c->r[0]); // 801DB93C
  c->r[0]=R32(c->r[29]+0x00000000u); // 801DB940
  W32(c->r[31]+0x00000010u,c->r[0]); // 801DB944
  c->r[0]=R32(c->r[29]+0x00000004u); // 801DB948
  W32(c->r[31]+0x00000014u,c->r[0]); // 801DB94C
L_801DB950:;
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 801DB950
  cmpu(c,0,c->r[0],0x00000004u); // 801DB954
  if (!crb(c,2)) { goto L_801DBA30; } // 801DB958
  c->r[29]=0u+0x00000000u; // 801DB95C
  cmps(c,0,(int32_t)c->r[28],0); // 801DB960
  W8(c->r[31]+0x0000007Fu,c->r[29]); // 801DB964
  if (crb(c,2)) { goto L_801DB9C4; } // 801DB968
  c->r[0]=R32(c->r[31]+0x00000004u); // 801DB96C
  cmps(c,0,(int32_t)c->r[0],0); // 801DB970
  if (crb(c,2)) { goto L_801DBA30; } // 801DB974
  c->r[0]=R8(c->r[31]+0x00000080u); // 801DB978
  cmps(c,0,(int32_t)c->r[0],0); // 801DB97C
  if (crb(c,2)) { goto L_801DB9A0; } // 801DB980
  c->r[3]=R32(c->r[31]+0x00000000u); // 801DB984
  cmps(c,0,(int32_t)c->r[3],0); // 801DB988
  if (crb(c,2)) { goto L_801DB9A0; } // 801DB98C
  c->r[0]=R32(c->r[3]+0x00000000u); // 801DB990
  cmpu(c,0,c->r[0],0x00000003u); // 801DB994
  if (!crb(c,2)) { goto L_801DB9A0; } // 801DB998
  W32(c->r[3]+0x00000004u,c->r[29]); // 801DB99C
L_801DB9A0:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 801DB9A0
  c->r[3]=c->r[30]|c->r[30]; // 801DB9A4
  c->r[5]=c->r[28]|c->r[28]; // 801DB9A8
  c->r[4]=R32(c->r[31]+0x00000008u); // 801DB9AC
  c->ctr=c->r[12]; // 801DB9B0
  if (true) { c->lr=0x801DB9B8u; dispatch(c,c->ctr); } // 801DB9B4
  c->r[0]=0u+0x00000000u; // 801DB9B8
  W32(c->r[31]+0x00000004u,c->r[0]); // 801DB9BC
  goto L_801DBA30; // 801DB9C0
L_801DB9C4:;
  c->r[3]=c->r[31]|c->r[31]; // 801DB9C4
  c->lr=0x801DB9CCu; f_801DDD70(c); // 801DB9C8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801DB9CC
  c->r[4]=c->r[3]|c->r[3]; // 801DB9D0
  cmpu(c,0,c->r[0],0x00000001u); // 801DB9D4
  if (crb(c,2)) { goto L_801DBA30; } // 801DB9D8
  c->r[0]=R32(c->r[31]+0x00000004u); // 801DB9DC
  cmps(c,0,(int32_t)c->r[0],0); // 801DB9E0
  if (crb(c,2)) { goto L_801DBA30; } // 801DB9E4
  c->r[0]=R8(c->r[31]+0x00000080u); // 801DB9E8
  cmps(c,0,(int32_t)c->r[0],0); // 801DB9EC
  if (crb(c,2)) { goto L_801DBA10; } // 801DB9F0
  c->r[3]=R32(c->r[31]+0x00000000u); // 801DB9F4
  cmps(c,0,(int32_t)c->r[3],0); // 801DB9F8
  if (crb(c,2)) { goto L_801DBA10; } // 801DB9FC
  c->r[0]=R32(c->r[3]+0x00000000u); // 801DBA00
  cmpu(c,0,c->r[0],0x00000003u); // 801DBA04
  if (!crb(c,2)) { goto L_801DBA10; } // 801DBA08
  W32(c->r[3]+0x00000004u,c->r[29]); // 801DBA0C
L_801DBA10:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 801DBA10
  c->r[5]=rotl(c->r[4],0)&0x000000FFu; // 801DBA14
  c->r[3]=c->r[30]|c->r[30]; // 801DBA18
  c->r[4]=R32(c->r[31]+0x00000008u); // 801DBA1C
  c->ctr=c->r[12]; // 801DBA20
  if (true) { c->lr=0x801DBA28u; dispatch(c,c->ctr); } // 801DBA24
  c->r[0]=0u+0x00000000u; // 801DBA28
  W32(c->r[31]+0x00000004u,c->r[0]); // 801DBA2C
L_801DBA30:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DBA30
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DBA34
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DBA38
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DBA3C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801DBA40
  c->lr=c->r[0]; // 801DBA44
  c->r[1]=c->r[1]+0x00000020u; // 801DBA48
  return; // 801DBA4C
}

// BTM_SecBond
void f_801DBA50(Ctx* __restrict c) {
  trace_call(0x801DBA50u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DBA50
  c->r[0]=c->lr; // 801DBA54
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DBA58
  c->r[11]=c->r[1]+0x00000020u; // 801DBA5C
  c->lr=0x801DBA64u; f_800C2E48(c); // 801DBA60
  c->r[7]=0u+0x80480000u; // 801DBA64
  c->r[31]=0u+0x803A0000u; // 801DBA68
  c->r[7]=c->r[7]+0x000034D8u; // 801DBA6C
  c->r[28]=c->r[3]|c->r[3]; // 801DBA70
  c->r[0]=R8(c->r[7]+0x000027C0u); // 801DBA74
  c->r[29]=c->r[4]|c->r[4]; // 801DBA78
  c->r[26]=c->r[5]|c->r[5]; // 801DBA7C
  c->r[27]=c->r[6]|c->r[6]; // 801DBA80
  cmpu(c,0,c->r[0],0x00000003u); // 801DBA84
  c->r[31]=c->r[31]+0xFFFFFBC0u; // 801DBA88
  if (crb(c,0)) { goto L_801DBAB8; } // 801DBA8C
  c->r[3]=0u+0x000D0000u; // 801DBA90
  c->r[5]=R8(c->r[28]+0x00000000u); // 801DBA94
  c->r[6]=R8(c->r[28]+0x00000001u); // 801DBA98
  c->r[3]=c->r[3]+0x00000002u; // 801DBA9C
  c->r[7]=R8(c->r[28]+0x00000002u); // 801DBAA0
  c->r[4]=c->r[31]+0x00000230u; // 801DBAA4
  c->r[8]=R8(c->r[28]+0x00000003u); // 801DBAA8
  c->r[9]=R8(c->r[28]+0x00000004u); // 801DBAAC
  c->r[10]=R8(c->r[28]+0x00000005u); // 801DBAB0
  c->lr=0x801DBAB8u; f_801CDA90(c); // 801DBAB4
L_801DBAB8:;
  cmpu(c,0,c->r[29],0x00000010u); // 801DBAB8
  if (!crb(c,1)) { goto L_801DBAEC; } // 801DBABC
  c->r[3]=0u+0x80480000u; // 801DBAC0
  c->r[3]=c->r[3]+0x000034D8u; // 801DBAC4
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801DBAC8
  cmpu(c,0,c->r[0],0x00000001u); // 801DBACC
  if (crb(c,0)) { goto L_801DBAE4; } // 801DBAD0
  c->r[5]=c->r[29]|c->r[29]; // 801DBAD4
  c->r[4]=c->r[31]+0x00000260u; // 801DBAD8
  c->r[3]=0u+0x000D0000u; // 801DBADC
  c->lr=0x801DBAE4u; f_801CD9F0(c); // 801DBAE0
L_801DBAE4:;
  c->r[3]=0u+0x00000005u; // 801DBAE4
  goto L_801DBE04; // 801DBAE8
L_801DBAEC:;
  c->r[3]=c->r[28]|c->r[28]; // 801DBAEC
  c->lr=0x801DBAF4u; f_801D6120(c); // 801DBAF0
  cmps(c,0,(int32_t)c->r[3],0); // 801DBAF4
  c->r[30]=c->r[3]|c->r[3]; // 801DBAF8
  if (!crb(c,2)) { goto L_801DBB3C; } // 801DBAFC
  c->r[3]=c->r[28]|c->r[28]; // 801DBB00
  c->lr=0x801DBB08u; f_801D5F48(c); // 801DBB04
  cmps(c,0,(int32_t)c->r[3],0); // 801DBB08
  c->r[30]=c->r[3]|c->r[3]; // 801DBB0C
  if (!crb(c,2)) { goto L_801DBB3C; } // 801DBB10
  c->r[3]=0u+0x80480000u; // 801DBB14
  c->r[3]=c->r[3]+0x000034D8u; // 801DBB18
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801DBB1C
  cmpu(c,0,c->r[0],0x00000001u); // 801DBB20
  if (crb(c,0)) { goto L_801DBB34; } // 801DBB24
  c->r[4]=c->r[31]+0x00000280u; // 801DBB28
  c->r[3]=0u+0x000D0000u; // 801DBB2C
  c->lr=0x801DBB34u; f_801CD9D0(c); // 801DBB30
L_801DBB34:;
  c->r[3]=0u+0x00000003u; // 801DBB34
  goto L_801DBE04; // 801DBB38
L_801DBB3C:;
  c->r[0]=R16(c->r[30]+0x00000018u); // 801DBB3C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801DBB40
  if (crb(c,2)) { goto L_801DBB80; } // 801DBB44
  c->r[0]=R8(c->r[30]+0x00000076u); // 801DBB48
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801DBB4C
  if (crb(c,2)) { goto L_801DBB80; } // 801DBB50
  c->r[3]=0u+0x80480000u; // 801DBB54
  c->r[3]=c->r[3]+0x000034D8u; // 801DBB58
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801DBB5C
  cmpu(c,0,c->r[0],0x00000002u); // 801DBB60
  if (crb(c,0)) { goto L_801DBB78; } // 801DBB64
  c->r[3]=0u+0x000D0000u; // 801DBB68
  c->r[4]=c->r[31]+0x000002A0u; // 801DBB6C
  c->r[3]=c->r[3]+0x00000001u; // 801DBB70
  c->lr=0x801DBB78u; f_801CD9D0(c); // 801DBB74
L_801DBB78:;
  c->r[3]=0u+0x00000000u; // 801DBB78
  goto L_801DBE04; // 801DBB7C
L_801DBB80:;
  c->r[3]=c->r[28]|c->r[28]; // 801DBB80
  c->r[4]=0u+0x00000000u; // 801DBB84
  c->lr=0x801DBB8Cu; f_801D790C(c); // 801DBB88
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801DBB8C
  if (crb(c,2)) { goto L_801DBB9C; } // 801DBB90
  c->r[3]=0u+0x00000003u; // 801DBB94
  goto L_801DBE04; // 801DBB98
L_801DBB9C:;
  c->r[0]=0u+0x00000050u; // 801DBB9C
  c->r[3]=0u+0x80480000u; // 801DBBA0
  W8(c->r[30]+0x00000081u,c->r[0]); // 801DBBA4
  c->r[0]=0u+0x00000001u; // 801DBBA8
  cmps(c,0,(int32_t)c->r[29],0); // 801DBBAC
  c->r[3]=c->r[3]+0x000034D8u; // 801DBBB0
  W8(c->r[30]+0x00000080u,c->r[0]); // 801DBBB4
  c->r[0]=R32(c->r[27]+0x00000000u); // 801DBBB8
  W32(c->r[30]+0x00000010u,c->r[0]); // 801DBBBC
  c->r[0]=R32(c->r[27]+0x00000004u); // 801DBBC0
  W32(c->r[30]+0x00000014u,c->r[0]); // 801DBBC4
  W8(c->r[3]+0x0000197Fu,c->r[29]); // 801DBBC8
  if (crb(c,2)) { goto L_801DBBE0; } // 801DBBCC
  c->r[4]=c->r[26]|c->r[26]; // 801DBBD0
  c->r[5]=c->r[29]|c->r[29]; // 801DBBD4
  c->r[3]=c->r[3]+0x00001980u; // 801DBBD8
  c->lr=0x801DBBE0u; f_80004000(c); // 801DBBDC
L_801DBBE0:;
  c->r[3]=R8(c->r[30]+0x00000076u); // 801DBBE0
  c->r[0]=0u+0xFFFFFFE9u; // 801DBBE4
  c->r[0]=c->r[3]&c->r[0]; // 801DBBE8
  W8(c->r[30]+0x00000076u,c->r[0]); // 801DBBEC
  c->r[0]=R8(c->r[30]+0x00000023u); // 801DBBF0
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; // 801DBBF4
  cmps(c,0,(int32_t)c->r[0],5); // 801DBBF8
  if (!crb(c,2)) { goto L_801DBC30; } // 801DBBFC
  c->r[0]=R8(c->r[30]+0x00000024u); // 801DBC00
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801DBC04
  if (crb(c,2)) { goto L_801DBC30; } // 801DBC08
  c->r[4]=0u+0x80480000u; // 801DBC0C
  c->r[4]=c->r[4]+0x000034D8u; // 801DBC10
  c->r[0]=R8(c->r[4]+0x00000020u); // 801DBC14
  cmpu(c,0,c->r[0],0x00000001u); // 801DBC18
  if (crb(c,2)) { goto L_801DBC30; } // 801DBC1C
  c->r[0]=0u+0x00000001u; // 801DBC20
  c->r[3]=0u+0x00000001u; // 801DBC24
  W8(c->r[4]+0x0000197Cu,c->r[0]); // 801DBC28
  c->lr=0x801DBC30u; f_801E1F88(c); // 801DBC2C
L_801DBC30:;
  c->r[29]=0u+0x80480000u; // 801DBC30
  c->r[27]=0u+0x00000000u; // 801DBC34
  c->r[29]=c->r[29]+0x000034D8u; // 801DBC38
  W8(c->r[29]+0x0000197Eu,c->r[27]); // 801DBC3C
  c->r[0]=R16(c->r[30]+0x00000018u); // 801DBC40
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801DBC44
  if (crb(c,2)) { goto L_801DBC84; } // 801DBC48
  c->r[3]=R8(c->r[30]+0x00000076u); // 801DBC4C
  c->r[0]=0u+0x00000001u; // 801DBC50
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFEFu; // 801DBC54
  W8(c->r[30]+0x00000076u,c->r[3]); // 801DBC58
  W8(c->r[30]+0x0000007Fu,c->r[0]); // 801DBC5C
  c->r[3]=R16(c->r[30]+0x00000018u); // 801DBC60
  c->lr=0x801DBC68u; f_801E12B8(c); // 801DBC64
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801DBC68
  if (!crb(c,2)) { goto L_801DBC78; } // 801DBC6C
  c->r[3]=0u+0x00000003u; // 801DBC70
  goto L_801DBE04; // 801DBC74
L_801DBC78:;
  W8(c->r[29]+0x0000197Du,c->r[27]); // 801DBC78
  c->r[3]=0u+0x00000001u; // 801DBC7C
  goto L_801DBE04; // 801DBC80
L_801DBC84:;
  c->r[0]=R8(c->r[29]+0x00001978u); // 801DBC84
  cmpu(c,0,c->r[0],0x00000003u); // 801DBC88
  if (crb(c,2)) { goto L_801DBCF4; } // 801DBC8C
  c->r[0]=R8(c->r[29]+0x000027C0u); // 801DBC90
  cmpu(c,0,c->r[0],0x00000005u); // 801DBC94
  if (crb(c,0)) { goto L_801DBCAC; } // 801DBC98
  c->r[3]=0u+0x000D0000u; // 801DBC9C
  c->r[4]=c->r[31]+0x000002C0u; // 801DBCA0
  c->r[3]=c->r[3]+0x00000004u; // 801DBCA4
  c->lr=0x801DBCACu; f_801CD9D0(c); // 801DBCA8
L_801DBCAC:;
  c->r[3]=0u+0x00000001u; // 801DBCAC
  c->lr=0x801DBCB4u; f_801E24FC(c); // 801DBCB0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801DBCB4
  if (!crb(c,2)) { goto L_801DBCE4; } // 801DBCB8
  c->r[3]=0u+0x80480000u; // 801DBCBC
  c->r[3]=c->r[3]+0x000034D8u; // 801DBCC0
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801DBCC4
  cmpu(c,0,c->r[0],0x00000001u); // 801DBCC8
  if (crb(c,0)) { goto L_801DBCDC; } // 801DBCCC
  c->r[4]=c->r[31]+0x000002E4u; // 801DBCD0
  c->r[3]=0u+0x000D0000u; // 801DBCD4
  c->lr=0x801DBCDCu; f_801CD9D0(c); // 801DBCD8
L_801DBCDC:;
  c->r[3]=0u+0x00000003u; // 801DBCDC
  goto L_801DBE04; // 801DBCE0
L_801DBCE4:;
  c->r[3]=0u+0x80480000u; // 801DBCE4
  c->r[0]=0u+0x00000001u; // 801DBCE8
  c->r[3]=c->r[3]+0x000034D8u; // 801DBCEC
  W8(c->r[3]+0x0000197Bu,c->r[0]); // 801DBCF0
L_801DBCF4:;
  c->r[3]=0u+0x80480000u; // 801DBCF4
  c->r[0]=0u+0x00000001u; // 801DBCF8
  c->r[3]=c->r[3]+0x000034D8u; // 801DBCFC
  W8(c->r[3]+0x0000197Du,c->r[0]); // 801DBD00
  c->lr=0x801DBD08u; f_801D7464(c); // 801DBD04
  c->r[4]=R8(c->r[3]+0x00000000u); // 801DBD08
  c->r[0]=0u+0x00000000u; // 801DBD0C
  c->r[3]=c->r[28]|c->r[28]; // 801DBD10
  W8(c->r[30]+0x00000085u,c->r[0]); // 801DBD14
  c->r[27]=rotl(c->r[4],27)&0x00000001u; // 801DBD18
  c->lr=0x801DBD20u; f_801D882C(c); // 801DBD1C
  cmps(c,0,(int32_t)c->r[3],0); // 801DBD20
  c->r[4]=c->r[3]|c->r[3]; // 801DBD24
  if (crb(c,2)) { goto L_801DBD50; } // 801DBD28
  c->r[0]=R16(c->r[4]+0x00000000u); // 801DBD2C
  c->r[3]=c->r[28]|c->r[28]; // 801DBD30
  c->r[5]=R8(c->r[4]+0x0000000Bu); // 801DBD34
  c->r[8]=c->r[27]|c->r[27]; // 801DBD38
  c->r[6]=R8(c->r[4]+0x0000000Du); // 801DBD3C
  c->r[7]=c->r[0]|0x00008000u; // 801DBD40
  c->r[4]=0u+0x00000018u; // 801DBD44
  c->lr=0x801DBD4Cu; f_801E0AB4(c); // 801DBD48
  goto L_801DBD6C; // 801DBD4C
L_801DBD50:;
  c->r[7]=R16(c->r[30]+0x0000001Au); // 801DBD50
  c->r[3]=c->r[28]|c->r[28]; // 801DBD54
  c->r[8]=c->r[27]|c->r[27]; // 801DBD58
  c->r[4]=0u+0x00000018u; // 801DBD5C
  c->r[5]=0u+0x00000001u; // 801DBD60
  c->r[6]=0u+0x00000000u; // 801DBD64
  c->lr=0x801DBD6Cu; f_801E0AB4(c); // 801DBD68
L_801DBD6C:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801DBD6C
  if (crb(c,2)) { goto L_801DBD7C; } // 801DBD70
  c->r[3]=0u+0x00000001u; // 801DBD74
  goto L_801DBE04; // 801DBD78
L_801DBD7C:;
  c->r[3]=0u+0x80480000u; // 801DBD7C
  c->r[3]=c->r[3]+0x000034D8u; // 801DBD80
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801DBD84
  cmpu(c,0,c->r[0],0x00000001u); // 801DBD88
  if (crb(c,0)) { goto L_801DBD9C; } // 801DBD8C
  c->r[4]=c->r[31]+0x000002E4u; // 801DBD90
  c->r[3]=0u+0x000D0000u; // 801DBD94
  c->lr=0x801DBD9Cu; f_801CD9D0(c); // 801DBD98
L_801DBD9C:;
  c->r[4]=0u+0x80480000u; // 801DBD9C
  c->r[4]=c->r[4]+0x000034D8u; // 801DBDA0
  c->r[0]=R8(c->r[4]+0x0000197Bu); // 801DBDA4
  cmps(c,0,(int32_t)c->r[0],0); // 801DBDA8
  if (crb(c,2)) { goto L_801DBE00; } // 801DBDAC
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801DBDB0
  c->r[3]=0u+0x00000000u; // 801DBDB4
  W8(c->r[4]+0x0000197Bu,c->r[3]); // 801DBDB8
  cmpu(c,0,c->r[0],0x00000005u); // 801DBDBC
  if (crb(c,0)) { goto L_801DBDE4; } // 801DBDC0
  c->r[5]=R8(c->r[4]+0x00001978u); // 801DBDC4
  c->r[3]=0u+0x000D0000u; // 801DBDC8
  c->r[3]=c->r[3]+0x00000004u; // 801DBDCC
  c->r[4]=c->r[31]+0x000002FCu; // 801DBDD0
  c->r[0]=c->r[5]+0xFFFFFFFDu; // 801DBDD4
  c->r[0]=cntlz(c->r[0]); // 801DBDD8
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 801DBDDC
  c->lr=0x801DBDE4u; f_801CD9F0(c); // 801DBDE0
L_801DBDE4:;
  c->r[3]=0u+0x80480000u; // 801DBDE4
  c->r[3]=c->r[3]+0x000034D8u; // 801DBDE8
  c->r[3]=R8(c->r[3]+0x00001978u); // 801DBDEC
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 801DBDF0
  c->r[0]=cntlz(c->r[0]); // 801DBDF4
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 801DBDF8
  c->lr=0x801DBE00u; f_801E24FC(c); // 801DBDFC
L_801DBE00:;
  c->r[3]=0u+0x00000003u; // 801DBE00
L_801DBE04:;
  c->r[11]=c->r[1]+0x00000020u; // 801DBE04
  c->lr=0x801DBE0Cu; f_800C2E94(c); // 801DBE08
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DBE0C
  c->lr=c->r[0]; // 801DBE10
  c->r[1]=c->r[1]+0x00000020u; // 801DBE14
  return; // 801DBE18
}

// btm_sec_l2cap_access_req
void f_801DBE1C(Ctx* __restrict c) {
  trace_call(0x801DBE1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DBE1C
  c->r[0]=c->lr; // 801DBE20
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DBE24
  c->r[11]=c->r[1]+0x00000030u; // 801DBE28
  c->lr=0x801DBE30u; f_800C2E40(c); // 801DBE2C
  c->r[31]=0u+0x803A0000u; // 801DBE30
  c->r[24]=c->r[3]|c->r[3]; // 801DBE34
  c->r[25]=c->r[4]|c->r[4]; // 801DBE38
  c->r[26]=c->r[5]|c->r[5]; // 801DBE3C
  c->r[27]=c->r[6]|c->r[6]; // 801DBE40
  c->r[28]=c->r[7]|c->r[7]; // 801DBE44
  c->r[31]=c->r[31]+0xFFFFFBC0u; // 801DBE48
  c->lr=0x801DBE50u; f_801D6120(c); // 801DBE4C
  cmps(c,0,(int32_t)c->r[3],0); // 801DBE50
  c->r[30]=c->r[3]|c->r[3]; // 801DBE54
  if (!crb(c,2)) { goto L_801DBEC0; } // 801DBE58
  c->r[3]=c->r[24]|c->r[24]; // 801DBE5C
  c->lr=0x801DBE64u; f_801D5F48(c); // 801DBE60
  cmps(c,0,(int32_t)c->r[3],0); // 801DBE64
  c->r[30]=c->r[3]|c->r[3]; // 801DBE68
  if (!crb(c,2)) { goto L_801DBEC0; } // 801DBE6C
  c->r[3]=0u+0x80480000u; // 801DBE70
  c->r[3]=c->r[3]+0x000034D8u; // 801DBE74
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801DBE78
  cmpu(c,0,c->r[0],0x00000002u); // 801DBE7C
  if (crb(c,0)) { goto L_801DBE98; } // 801DBE80
  c->r[3]=0u+0x000D0000u; // 801DBE84
  c->r[5]=c->r[25]|c->r[25]; // 801DBE88
  c->r[3]=c->r[3]+0x00000001u; // 801DBE8C
  c->r[4]=c->r[31]+0x00000410u; // 801DBE90
  c->lr=0x801DBE98u; f_801CD9F0(c); // 801DBE94
L_801DBE98:;
  cmps(c,0,(int32_t)c->r[28],0); // 801DBE98
  if (crb(c,2)) { goto L_801DBEB8; } // 801DBE9C
  c->r[12]=c->r[28]|c->r[28]; // 801DBEA0
  c->r[3]=c->r[24]|c->r[24]; // 801DBEA4
  c->r[4]=0u+0x00000000u; // 801DBEA8
  c->r[5]=0u+0x00000003u; // 801DBEAC
  c->ctr=c->r[12]; // 801DBEB0
  if (true) { c->lr=0x801DBEB8u; dispatch(c,c->ctr); } // 801DBEB4
L_801DBEB8:;
  c->r[3]=0u+0x00000003u; // 801DBEB8
  goto L_801DC268; // 801DBEBC
L_801DBEC0:;
  c->r[3]=0u+0x80480000u; // 801DBEC0
  c->r[0]=0u+0x00000004u; // 801DBEC4
  c->r[3]=c->r[3]+0x000034D8u; // 801DBEC8
  W16(c->r[30]+0x00000018u,c->r[26]); // 801DBECC
  c->r[4]=c->r[3]+0x00001990u; // 801DBED0
  c->r[3]=0u+0x00000000u; // 801DBED4
  c->ctr=c->r[0]; // 801DBED8
L_801DBEDC:;
  c->r[0]=R8(c->r[4]+0x0000000Eu); // 801DBEDC
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801DBEE0
  if (crb(c,2)) { goto L_801DBEF8; } // 801DBEE4
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801DBEE8
  cmpu(c,0,c->r[0],c->r[25]); // 801DBEEC
  if (!crb(c,2)) { goto L_801DBEF8; } // 801DBEF0
  goto L_801DBFA8; // 801DBEF4
L_801DBEF8:;
  c->r[0]=R8(c->r[4]+0x0000004Au); // 801DBEF8
  c->r[4]=c->r[4]+0x0000003Cu; // 801DBEFC
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801DBF00
  if (crb(c,2)) { goto L_801DBF18; } // 801DBF04
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801DBF08
  cmpu(c,0,c->r[0],c->r[25]); // 801DBF0C
  if (!crb(c,2)) { goto L_801DBF18; } // 801DBF10
  goto L_801DBFA8; // 801DBF14
L_801DBF18:;
  c->r[0]=R8(c->r[4]+0x0000004Au); // 801DBF18
  c->r[4]=c->r[4]+0x0000003Cu; // 801DBF1C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801DBF20
  if (crb(c,2)) { goto L_801DBF38; } // 801DBF24
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801DBF28
  cmpu(c,0,c->r[0],c->r[25]); // 801DBF2C
  if (!crb(c,2)) { goto L_801DBF38; } // 801DBF30
  goto L_801DBFA8; // 801DBF34
L_801DBF38:;
  c->r[0]=R8(c->r[4]+0x0000004Au); // 801DBF38
  c->r[4]=c->r[4]+0x0000003Cu; // 801DBF3C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801DBF40
  if (crb(c,2)) { goto L_801DBF58; } // 801DBF44
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801DBF48
  cmpu(c,0,c->r[0],c->r[25]); // 801DBF4C
  if (!crb(c,2)) { goto L_801DBF58; } // 801DBF50
  goto L_801DBFA8; // 801DBF54
L_801DBF58:;
  c->r[0]=R8(c->r[4]+0x0000004Au); // 801DBF58
  c->r[4]=c->r[4]+0x0000003Cu; // 801DBF5C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801DBF60
  if (crb(c,2)) { goto L_801DBF78; } // 801DBF64
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801DBF68
  cmpu(c,0,c->r[0],c->r[25]); // 801DBF6C
  if (!crb(c,2)) { goto L_801DBF78; } // 801DBF70
  goto L_801DBFA8; // 801DBF74
L_801DBF78:;
  c->r[0]=R8(c->r[4]+0x0000004Au); // 801DBF78
  c->r[4]=c->r[4]+0x0000003Cu; // 801DBF7C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801DBF80
  if (crb(c,2)) { goto L_801DBF98; } // 801DBF84
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801DBF88
  cmpu(c,0,c->r[0],c->r[25]); // 801DBF8C
  if (!crb(c,2)) { goto L_801DBF98; } // 801DBF90
  goto L_801DBFA8; // 801DBF94
L_801DBF98:;
  c->r[3]=c->r[3]+0x00000005u; // 801DBF98
  c->r[4]=c->r[4]+0x0000003Cu; // 801DBF9C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DBEDC; } // 801DBFA0
  c->r[4]=0u+0x00000000u; // 801DBFA4
L_801DBFA8:;
  cmps(c,0,(int32_t)c->r[4],0); // 801DBFA8
  if (!crb(c,2)) { goto L_801DC000; } // 801DBFAC
  c->r[3]=0u+0x80480000u; // 801DBFB0
  c->r[3]=c->r[3]+0x000034D8u; // 801DBFB4
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801DBFB8
  cmpu(c,0,c->r[0],0x00000002u); // 801DBFBC
  if (crb(c,0)) { goto L_801DBFD8; } // 801DBFC0
  c->r[3]=0u+0x000D0000u; // 801DBFC4
  c->r[5]=c->r[25]|c->r[25]; // 801DBFC8
  c->r[3]=c->r[3]+0x00000001u; // 801DBFCC
  c->r[4]=c->r[31]+0x00000448u; // 801DBFD0
  c->lr=0x801DBFD8u; f_801CD9F0(c); // 801DBFD4
L_801DBFD8:;
  cmps(c,0,(int32_t)c->r[28],0); // 801DBFD8
  if (crb(c,2)) { goto L_801DBFF8; } // 801DBFDC
  c->r[12]=c->r[28]|c->r[28]; // 801DBFE0
  c->r[3]=c->r[24]|c->r[24]; // 801DBFE4
  c->r[4]=0u+0x00000000u; // 801DBFE8
  c->r[5]=0u+0x00000004u; // 801DBFEC
  c->ctr=c->r[12]; // 801DBFF0
  if (true) { c->lr=0x801DBFF8u; dispatch(c,c->ctr); } // 801DBFF4
L_801DBFF8:;
  c->r[3]=0u+0x00000004u; // 801DBFF8
  goto L_801DC268; // 801DBFFC
L_801DC000:;
  cmps(c,0,(int32_t)c->r[27],0); // 801DC000
  if (crb(c,2)) { goto L_801DC018; } // 801DC004
  if (crb(c,2)) { goto L_801DC01C; } // 801DC008
  c->r[0]=R32(c->r[30]+0x00000000u); // 801DC00C
  cmps(c,0,(int32_t)c->r[0],0); // 801DC010
  if (!crb(c,2)) { goto L_801DC01C; } // 801DC014
L_801DC018:;
  W32(c->r[30]+0x00000000u,c->r[4]); // 801DC018
L_801DC01C:;
  c->r[3]=0u+0x80480000u; // 801DC01C
  c->r[0]=0u+0x00000006u; // 801DC020
  c->r[3]=c->r[3]+0x000034D8u; // 801DC024
  c->r[29]=R8(c->r[4]+0x0000000Eu); // 801DC028
  c->r[7]=c->r[3]+0x00001990u; // 801DC02C
  c->r[6]=0u+0x00000000u; // 801DC030
  c->r[5]=0u+0x00000000u; // 801DC034
  c->ctr=c->r[0]; // 801DC038
L_801DC03C:;
  c->r[0]=R8(c->r[7]+0x0000000Eu); // 801DC03C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801DC040
  if (crb(c,2)) { goto L_801DC074; } // 801DC044
  c->r[3]=R16(c->r[7]+0x0000000Cu); // 801DC048
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801DC04C
  cmpu(c,0,c->r[3],c->r[0]); // 801DC050
  if (!crb(c,2)) { goto L_801DC074; } // 801DC054
  cmps(c,0,(int32_t)c->r[6],0); // 801DC058
  if (!crb(c,2)) { goto L_801DC138; } // 801DC05C
  cmpu(c,0,c->r[4],c->r[7]); // 801DC060
  if (!crb(c,2)) { goto L_801DC074; } // 801DC064
  c->r[6]=0u+0x00000001u; // 801DC068
  goto L_801DC074; // 801DC06C
  goto L_801DC138; // 801DC070
L_801DC074:;
  c->r[0]=R8(c->r[7]+0x0000004Au); // 801DC074
  c->r[7]=c->r[7]+0x0000003Cu; // 801DC078
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801DC07C
  if (crb(c,2)) { goto L_801DC0B0; } // 801DC080
  c->r[3]=R16(c->r[7]+0x0000000Cu); // 801DC084
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801DC088
  cmpu(c,0,c->r[3],c->r[0]); // 801DC08C
  if (!crb(c,2)) { goto L_801DC0B0; } // 801DC090
  cmps(c,0,(int32_t)c->r[6],0); // 801DC094
  if (!crb(c,2)) { goto L_801DC138; } // 801DC098
  cmpu(c,0,c->r[4],c->r[7]); // 801DC09C
  if (!crb(c,2)) { goto L_801DC0B0; } // 801DC0A0
  c->r[6]=0u+0x00000001u; // 801DC0A4
  goto L_801DC0B0; // 801DC0A8
  goto L_801DC138; // 801DC0AC
L_801DC0B0:;
  c->r[0]=R8(c->r[7]+0x0000004Au); // 801DC0B0
  c->r[7]=c->r[7]+0x0000003Cu; // 801DC0B4
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801DC0B8
  if (crb(c,2)) { goto L_801DC0EC; } // 801DC0BC
  c->r[3]=R16(c->r[7]+0x0000000Cu); // 801DC0C0
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801DC0C4
  cmpu(c,0,c->r[3],c->r[0]); // 801DC0C8
  if (!crb(c,2)) { goto L_801DC0EC; } // 801DC0CC
  cmps(c,0,(int32_t)c->r[6],0); // 801DC0D0
  if (!crb(c,2)) { goto L_801DC138; } // 801DC0D4
  cmpu(c,0,c->r[4],c->r[7]); // 801DC0D8
  if (!crb(c,2)) { goto L_801DC0EC; } // 801DC0DC
  c->r[6]=0u+0x00000001u; // 801DC0E0
  goto L_801DC0EC; // 801DC0E4
  goto L_801DC138; // 801DC0E8
L_801DC0EC:;
  c->r[0]=R8(c->r[7]+0x0000004Au); // 801DC0EC
  c->r[7]=c->r[7]+0x0000003Cu; // 801DC0F0
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801DC0F4
  if (crb(c,2)) { goto L_801DC128; } // 801DC0F8
  c->r[3]=R16(c->r[7]+0x0000000Cu); // 801DC0FC
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801DC100
  cmpu(c,0,c->r[3],c->r[0]); // 801DC104
  if (!crb(c,2)) { goto L_801DC128; } // 801DC108
  cmps(c,0,(int32_t)c->r[6],0); // 801DC10C
  if (!crb(c,2)) { goto L_801DC138; } // 801DC110
  cmpu(c,0,c->r[4],c->r[7]); // 801DC114
  if (!crb(c,2)) { goto L_801DC128; } // 801DC118
  c->r[6]=0u+0x00000001u; // 801DC11C
  goto L_801DC128; // 801DC120
  goto L_801DC138; // 801DC124
L_801DC128:;
  c->r[5]=c->r[5]+0x00000003u; // 801DC128
  c->r[7]=c->r[7]+0x0000003Cu; // 801DC12C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DC03C; } // 801DC130
  c->r[7]=0u+0x00000000u; // 801DC134
L_801DC138:;
  cmps(c,0,(int32_t)c->r[7],0); // 801DC138
  if (crb(c,2)) { goto L_801DC190; } // 801DC13C
  c->r[3]=0u+0x80480000u; // 801DC140
  c->r[3]=c->r[3]+0x000034D8u; // 801DC144
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801DC148
  cmpu(c,0,c->r[0],0x00000004u); // 801DC14C
  if (crb(c,0)) { goto L_801DC168; } // 801DC150
  c->r[3]=0u+0x000D0000u; // 801DC154
  c->r[5]=c->r[25]|c->r[25]; // 801DC158
  c->r[3]=c->r[3]+0x00000003u; // 801DC15C
  c->r[4]=c->r[31]+0x0000048Cu; // 801DC160
  c->lr=0x801DC168u; f_801CD9F0(c); // 801DC164
L_801DC168:;
  cmps(c,0,(int32_t)c->r[28],0); // 801DC168
  if (crb(c,2)) { goto L_801DC188; } // 801DC16C
  c->r[12]=c->r[28]|c->r[28]; // 801DC170
  c->r[3]=c->r[24]|c->r[24]; // 801DC174
  c->r[4]=0u+0x00000000u; // 801DC178
  c->r[5]=0u+0x00000000u; // 801DC17C
  c->ctr=c->r[12]; // 801DC180
  if (true) { c->lr=0x801DC188u; dispatch(c,c->ctr); } // 801DC184
L_801DC188:;
  c->r[3]=0u+0x00000000u; // 801DC188
  goto L_801DC268; // 801DC18C
L_801DC190:;
  W32(c->r[30]+0x00000004u,c->r[28]); // 801DC190
  c->r[0]=0u+0x00000000u; // 801DC194
  c->r[3]=0u+0x80480000u; // 801DC198
  W32(c->r[30]+0x00000008u,c->r[0]); // 801DC19C
  c->r[3]=c->r[3]+0x000034D8u; // 801DC1A0
  W8(c->r[30]+0x00000081u,c->r[29]); // 801DC1A4
  W8(c->r[30]+0x00000080u,c->r[27]); // 801DC1A8
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801DC1AC
  cmpu(c,0,c->r[0],0x00000004u); // 801DC1B0
  if (crb(c,0)) { goto L_801DC1DC; } // 801DC1B4
  c->r[3]=0u+0x000D0000u; // 801DC1B8
  c->r[7]=R8(c->r[30]+0x0000007Fu); // 801DC1BC
  c->r[8]=R8(c->r[30]+0x00000076u); // 801DC1C0
  c->r[5]=c->r[25]|c->r[25]; // 801DC1C4
  c->r[6]=c->r[26]|c->r[26]; // 801DC1C8
  c->r[9]=c->r[29]|c->r[29]; // 801DC1CC
  c->r[3]=c->r[3]+0x00000003u; // 801DC1D0
  c->r[4]=c->r[31]+0x000004D0u; // 801DC1D4
  c->lr=0x801DC1DCu; f_801CDA70(c); // 801DC1D8
L_801DC1DC:;
  cmps(c,0,(int32_t)c->r[27],0); // 801DC1DC
  if (!crb(c,2)) { goto L_801DC228; } // 801DC1E0
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 801DC1E4
  if (crb(c,2)) { goto L_801DC228; } // 801DC1E8
  c->r[0]=R8(c->r[30]+0x00000076u); // 801DC1EC
  c->r[3]=0u+0x80480000u; // 801DC1F0
  c->r[3]=c->r[3]+0x000034D8u; // 801DC1F4
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 801DC1F8
  W8(c->r[30]+0x00000076u,c->r[0]); // 801DC1FC
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801DC200
  cmpu(c,0,c->r[0],0x00000004u); // 801DC204
  if (crb(c,0)) { goto L_801DC228; } // 801DC208
  c->r[3]=0u+0x000D0000u; // 801DC20C
  c->r[5]=R32(c->r[30]+0x00000014u); // 801DC210
  c->r[6]=R32(c->r[30]+0x00000010u); // 801DC214
  c->r[3]=c->r[3]+0x00000003u; // 801DC218
  c->r[7]=R8(c->r[30]+0x00000076u); // 801DC21C
  c->r[4]=c->r[31]+0x00000528u; // 801DC220
  c->lr=0x801DC228u; f_801CDA30(c); // 801DC224
L_801DC228:;
  c->r[3]=c->r[30]|c->r[30]; // 801DC228
  c->lr=0x801DC230u; f_801DDD70(c); // 801DC22C
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; // 801DC230
  c->r[25]=c->r[3]|c->r[3]; // 801DC234
  cmpu(c,0,c->r[5],0x00000001u); // 801DC238
  if (crb(c,2)) { goto L_801DC264; } // 801DC23C
  cmps(c,0,(int32_t)c->r[28],0); // 801DC240
  if (crb(c,2)) { goto L_801DC264; } // 801DC244
  c->r[12]=c->r[28]|c->r[28]; // 801DC248
  c->r[3]=c->r[24]|c->r[24]; // 801DC24C
  c->r[4]=R32(c->r[30]+0x00000008u); // 801DC250
  c->ctr=c->r[12]; // 801DC254
  if (true) { c->lr=0x801DC25Cu; dispatch(c,c->ctr); } // 801DC258
  c->r[0]=0u+0x00000000u; // 801DC25C
  W32(c->r[30]+0x00000004u,c->r[0]); // 801DC260
L_801DC264:;
  c->r[3]=c->r[25]|c->r[25]; // 801DC264
L_801DC268:;
  c->r[11]=c->r[1]+0x00000030u; // 801DC268
  c->lr=0x801DC270u; f_800C2E8C(c); // 801DC26C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801DC270
  c->lr=c->r[0]; // 801DC274
  c->r[1]=c->r[1]+0x00000030u; // 801DC278
  return; // 801DC27C
}

// btm_sec_mx_access_request
void f_801DC280(Ctx* __restrict c) {
  trace_call(0x801DC280u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DC280
  c->r[0]=c->lr; // 801DC284
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DC288
  c->r[11]=c->r[1]+0x00000030u; // 801DC28C
  c->lr=0x801DC294u; f_800C2E40(c); // 801DC290
  c->r[24]=c->r[3]|c->r[3]; // 801DC294
  c->r[25]=c->r[4]|c->r[4]; // 801DC298
  c->r[26]=c->r[5]|c->r[5]; // 801DC29C
  c->r[27]=c->r[6]|c->r[6]; // 801DC2A0
  c->r[28]=c->r[7]|c->r[7]; // 801DC2A4
  c->r[29]=c->r[8]|c->r[8]; // 801DC2A8
  c->r[30]=c->r[9]|c->r[9]; // 801DC2AC
  c->lr=0x801DC2B4u; f_801D6120(c); // 801DC2B0
  cmps(c,0,(int32_t)c->r[3],0); // 801DC2B4
  c->r[31]=c->r[3]|c->r[3]; // 801DC2B8
  if (!crb(c,2)) { goto L_801DC2F8; } // 801DC2BC
  c->r[3]=c->r[24]|c->r[24]; // 801DC2C0
  c->lr=0x801DC2C8u; f_801D5F48(c); // 801DC2C4
  cmps(c,0,(int32_t)c->r[3],0); // 801DC2C8
  c->r[31]=c->r[3]|c->r[3]; // 801DC2CC
  if (!crb(c,2)) { goto L_801DC2F8; } // 801DC2D0
  cmps(c,0,(int32_t)c->r[29],0); // 801DC2D4
  if (crb(c,2)) { goto L_801DC504; } // 801DC2D8
  c->r[12]=c->r[29]|c->r[29]; // 801DC2DC
  c->r[3]=c->r[24]|c->r[24]; // 801DC2E0
  c->r[4]=c->r[30]|c->r[30]; // 801DC2E4
  c->r[5]=0u+0x00000003u; // 801DC2E8
  c->ctr=c->r[12]; // 801DC2EC
  if (true) { c->lr=0x801DC2F4u; dispatch(c,c->ctr); } // 801DC2F0
  goto L_801DC504; // 801DC2F4
L_801DC2F8:;
  c->r[3]=0u+0x80480000u; // 801DC2F8
  c->r[0]=0u+0x00000008u; // 801DC2FC
  c->r[3]=c->r[3]+0x000034D8u; // 801DC300
  c->r[4]=0u+0x00000000u; // 801DC304
  c->r[5]=c->r[3]+0x00001990u; // 801DC308
  c->ctr=c->r[0]; // 801DC30C
L_801DC310:;
  c->r[0]=R8(c->r[5]+0x0000000Eu); // 801DC310
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801DC314
  if (crb(c,2)) { goto L_801DC360; } // 801DC318
  c->r[0]=R16(c->r[5]+0x0000000Cu); // 801DC31C
  cmpu(c,0,c->r[0],c->r[25]); // 801DC320
  if (!crb(c,2)) { goto L_801DC360; } // 801DC324
  c->r[0]=R32(c->r[5]+0x00000000u); // 801DC328
  cmpu(c,0,c->r[0],c->r[27]); // 801DC32C
  if (!crb(c,2)) { goto L_801DC360; } // 801DC330
  cmps(c,0,(int32_t)c->r[26],0); // 801DC334
  if (crb(c,2)) { goto L_801DC348; } // 801DC338
  c->r[0]=R32(c->r[5]+0x00000004u); // 801DC33C
  cmpu(c,0,c->r[0],c->r[28]); // 801DC340
  if (crb(c,2)) { goto L_801DC418; } // 801DC344
L_801DC348:;
  cmps(c,0,(int32_t)c->r[26],0); // 801DC348
  if (!crb(c,2)) { goto L_801DC360; } // 801DC34C
  c->r[0]=R32(c->r[5]+0x00000008u); // 801DC350
  cmpu(c,0,c->r[0],c->r[28]); // 801DC354
  if (!crb(c,2)) { goto L_801DC360; } // 801DC358
  goto L_801DC418; // 801DC35C
L_801DC360:;
  c->r[0]=R8(c->r[5]+0x0000004Au); // 801DC360
  c->r[5]=c->r[5]+0x0000003Cu; // 801DC364
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801DC368
  if (crb(c,2)) { goto L_801DC3B4; } // 801DC36C
  c->r[0]=R16(c->r[5]+0x0000000Cu); // 801DC370
  cmpu(c,0,c->r[0],c->r[25]); // 801DC374
  if (!crb(c,2)) { goto L_801DC3B4; } // 801DC378
  c->r[0]=R32(c->r[5]+0x00000000u); // 801DC37C
  cmpu(c,0,c->r[0],c->r[27]); // 801DC380
  if (!crb(c,2)) { goto L_801DC3B4; } // 801DC384
  cmps(c,0,(int32_t)c->r[26],0); // 801DC388
  if (crb(c,2)) { goto L_801DC39C; } // 801DC38C
  c->r[0]=R32(c->r[5]+0x00000004u); // 801DC390
  cmpu(c,0,c->r[0],c->r[28]); // 801DC394
  if (crb(c,2)) { goto L_801DC418; } // 801DC398
L_801DC39C:;
  cmps(c,0,(int32_t)c->r[26],0); // 801DC39C
  if (!crb(c,2)) { goto L_801DC3B4; } // 801DC3A0
  c->r[0]=R32(c->r[5]+0x00000008u); // 801DC3A4
  cmpu(c,0,c->r[0],c->r[28]); // 801DC3A8
  if (!crb(c,2)) { goto L_801DC3B4; } // 801DC3AC
  goto L_801DC418; // 801DC3B0
L_801DC3B4:;
  c->r[0]=R8(c->r[5]+0x0000004Au); // 801DC3B4
  c->r[5]=c->r[5]+0x0000003Cu; // 801DC3B8
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801DC3BC
  if (crb(c,2)) { goto L_801DC408; } // 801DC3C0
  c->r[0]=R16(c->r[5]+0x0000000Cu); // 801DC3C4
  cmpu(c,0,c->r[0],c->r[25]); // 801DC3C8
  if (!crb(c,2)) { goto L_801DC408; } // 801DC3CC
  c->r[0]=R32(c->r[5]+0x00000000u); // 801DC3D0
  cmpu(c,0,c->r[0],c->r[27]); // 801DC3D4
  if (!crb(c,2)) { goto L_801DC408; } // 801DC3D8
  cmps(c,0,(int32_t)c->r[26],0); // 801DC3DC
  if (crb(c,2)) { goto L_801DC3F0; } // 801DC3E0
  c->r[0]=R32(c->r[5]+0x00000004u); // 801DC3E4
  cmpu(c,0,c->r[0],c->r[28]); // 801DC3E8
  if (crb(c,2)) { goto L_801DC418; } // 801DC3EC
L_801DC3F0:;
  cmps(c,0,(int32_t)c->r[26],0); // 801DC3F0
  if (!crb(c,2)) { goto L_801DC408; } // 801DC3F4
  c->r[0]=R32(c->r[5]+0x00000008u); // 801DC3F8
  cmpu(c,0,c->r[0],c->r[28]); // 801DC3FC
  if (!crb(c,2)) { goto L_801DC408; } // 801DC400
  goto L_801DC418; // 801DC404
L_801DC408:;
  c->r[4]=c->r[4]+0x00000002u; // 801DC408
  c->r[5]=c->r[5]+0x0000003Cu; // 801DC40C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DC310; } // 801DC410
  c->r[5]=0u+0x00000000u; // 801DC414
L_801DC418:;
  cmps(c,0,(int32_t)c->r[5],0); // 801DC418
  if (!crb(c,2)) { goto L_801DC474; } // 801DC41C
  cmps(c,0,(int32_t)c->r[29],0); // 801DC420
  if (crb(c,2)) { goto L_801DC440; } // 801DC424
  c->r[12]=c->r[29]|c->r[29]; // 801DC428
  c->r[3]=c->r[24]|c->r[24]; // 801DC42C
  c->r[4]=c->r[30]|c->r[30]; // 801DC430
  c->r[5]=0u+0x00000004u; // 801DC434
  c->ctr=c->r[12]; // 801DC438
  if (true) { c->lr=0x801DC440u; dispatch(c,c->ctr); } // 801DC43C
L_801DC440:;
  c->r[3]=0u+0x80480000u; // 801DC440
  c->r[3]=c->r[3]+0x000034D8u; // 801DC444
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801DC448
  cmpu(c,0,c->r[0],0x00000001u); // 801DC44C
  if (crb(c,0)) { goto L_801DC504; } // 801DC450
  c->r[4]=0u+0x803A0000u; // 801DC454
  c->r[5]=c->r[25]|c->r[25]; // 801DC458
  c->r[6]=c->r[27]|c->r[27]; // 801DC45C
  c->r[7]=c->r[28]|c->r[28]; // 801DC460
  c->r[4]=c->r[4]+0x00000118u; // 801DC464
  c->r[3]=0u+0x000D0000u; // 801DC468
  c->lr=0x801DC470u; f_801CDA30(c); // 801DC46C
  goto L_801DC504; // 801DC470
L_801DC474:;
  W32(c->r[31]+0x00000000u,c->r[5]); // 801DC474
  c->r[3]=c->r[31]|c->r[31]; // 801DC478
  c->r[0]=R8(c->r[5]+0x0000000Eu); // 801DC47C
  W8(c->r[31]+0x00000081u,c->r[0]); // 801DC480
  W8(c->r[31]+0x00000080u,c->r[26]); // 801DC484
  W32(c->r[31]+0x00000004u,c->r[29]); // 801DC488
  W32(c->r[31]+0x00000008u,c->r[30]); // 801DC48C
  c->r[0]=R8(c->r[31]+0x00000076u); // 801DC490
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 801DC494
  W8(c->r[31]+0x00000076u,c->r[0]); // 801DC498
  c->lr=0x801DC4A0u; f_801DDD70(c); // 801DC49C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801DC4A0
  c->r[5]=c->r[3]|c->r[3]; // 801DC4A4
  cmpu(c,0,c->r[0],0x00000001u); // 801DC4A8
  if (crb(c,2)) { goto L_801DC504; } // 801DC4AC
  cmps(c,0,(int32_t)c->r[29],0); // 801DC4B0
  if (crb(c,2)) { goto L_801DC504; } // 801DC4B4
  c->r[0]=R8(c->r[31]+0x00000080u); // 801DC4B8
  cmps(c,0,(int32_t)c->r[0],0); // 801DC4BC
  if (crb(c,2)) { goto L_801DC4E4; } // 801DC4C0
  c->r[3]=R32(c->r[31]+0x00000000u); // 801DC4C4
  cmps(c,0,(int32_t)c->r[3],0); // 801DC4C8
  if (crb(c,2)) { goto L_801DC4E4; } // 801DC4CC
  c->r[0]=R32(c->r[3]+0x00000000u); // 801DC4D0
  cmpu(c,0,c->r[0],0x00000003u); // 801DC4D4
  if (!crb(c,2)) { goto L_801DC4E4; } // 801DC4D8
  c->r[0]=0u+0x00000000u; // 801DC4DC
  W32(c->r[3]+0x00000004u,c->r[0]); // 801DC4E0
L_801DC4E4:;
  c->r[12]=c->r[29]|c->r[29]; // 801DC4E4
  c->r[3]=c->r[24]|c->r[24]; // 801DC4E8
  c->r[4]=c->r[30]|c->r[30]; // 801DC4EC
  c->r[5]=rotl(c->r[5],0)&0x000000FFu; // 801DC4F0
  c->ctr=c->r[12]; // 801DC4F4
  if (true) { c->lr=0x801DC4FCu; dispatch(c,c->ctr); } // 801DC4F8
  c->r[0]=0u+0x00000000u; // 801DC4FC
  W32(c->r[31]+0x00000004u,c->r[0]); // 801DC500
L_801DC504:;
  c->r[11]=c->r[1]+0x00000030u; // 801DC504
  c->lr=0x801DC50Cu; f_800C2E8C(c); // 801DC508
  c->r[0]=R32(c->r[1]+0x00000034u); // 801DC50C
  c->lr=c->r[0]; // 801DC510
  c->r[1]=c->r[1]+0x00000030u; // 801DC514
  return; // 801DC518
}

// btm_sec_conn_req
void f_801DC51C(Ctx* __restrict c) {
  trace_call(0x801DC51Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DC51C
  c->r[0]=c->lr; // 801DC520
  c->r[5]=0u+0x80480000u; // 801DC524
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DC528
  c->r[5]=c->r[5]+0x000034D8u; // 801DC52C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DC530
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DC534
  c->r[30]=c->r[4]|c->r[4]; // 801DC538
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DC53C
  c->r[29]=c->r[3]|c->r[3]; // 801DC540
  c->r[0]=R8(c->r[5]+0x0000197Au); // 801DC544
  cmps(c,0,(int32_t)c->r[0],0); // 801DC548
  if (crb(c,2)) { goto L_801DC5B0; } // 801DC54C
  c->lr=0x801DC554u; f_801D6120(c); // 801DC550
  cmps(c,0,(int32_t)c->r[3],0); // 801DC554
  if (crb(c,2)) { goto L_801DC568; } // 801DC558
  c->r[0]=R8(c->r[3]+0x00000076u); // 801DC55C
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801DC560
  if (!crb(c,2)) { goto L_801DC5B0; } // 801DC564
L_801DC568:;
  c->r[3]=0u+0x80480000u; // 801DC568
  c->r[3]=c->r[3]+0x000034D8u; // 801DC56C
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801DC570
  cmpu(c,0,c->r[0],0x00000004u); // 801DC574
  if (crb(c,0)) { goto L_801DC590; } // 801DC578
  c->r[3]=0u+0x000D0000u; // 801DC57C
  c->r[4]=0u+0x803A0000u; // 801DC580
  c->r[3]=c->r[3]+0x00000003u; // 801DC584
  c->r[4]=c->r[4]+0x00000158u; // 801DC588
  c->lr=0x801DC590u; f_801CD9D0(c); // 801DC58C
L_801DC590:;
  c->r[3]=0u+0x00000002u; // 801DC590
  c->lr=0x801DC598u; f_801CAE20(c); // 801DC594
  cmps(c,0,(int32_t)c->r[3],0); // 801DC598
  if (crb(c,2)) { goto L_801DC62C; } // 801DC59C
  c->r[4]=c->r[29]|c->r[29]; // 801DC5A0
  c->r[5]=0u+0x0000000Fu; // 801DC5A4
  c->lr=0x801DC5ACu; f_801E0D08(c); // 801DC5A8
  goto L_801DC62C; // 801DC5AC
L_801DC5B0:;
  c->r[3]=0u+0x80480000u; // 801DC5B0
  c->r[3]=c->r[3]+0x000034D8u; // 801DC5B4
  c->r[12]=R32(c->r[3]+0x00001934u); // 801DC5B8
  cmps(c,0,(int32_t)c->r[12],0); // 801DC5BC
  if (crb(c,2)) { goto L_801DC5FC; } // 801DC5C0
  c->r[3]=c->r[29]|c->r[29]; // 801DC5C4
  c->r[4]=c->r[30]|c->r[30]; // 801DC5C8
  c->ctr=c->r[12]; // 801DC5CC
  if (true) { c->lr=0x801DC5D4u; dispatch(c,c->ctr); } // 801DC5D0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801DC5D4
  if (!crb(c,2)) { goto L_801DC5FC; } // 801DC5D8
  c->r[3]=0u+0x00000002u; // 801DC5DC
  c->lr=0x801DC5E4u; f_801CAE20(c); // 801DC5E0
  cmps(c,0,(int32_t)c->r[3],0); // 801DC5E4
  if (crb(c,2)) { goto L_801DC62C; } // 801DC5E8
  c->r[4]=c->r[29]|c->r[29]; // 801DC5EC
  c->r[5]=0u+0x0000000Fu; // 801DC5F0
  c->lr=0x801DC5F8u; f_801E0D08(c); // 801DC5F4
  goto L_801DC62C; // 801DC5F8
L_801DC5FC:;
  c->r[31]=0u+0x80480000u; // 801DC5FC
  c->r[4]=c->r[29]|c->r[29]; // 801DC600
  c->r[31]=c->r[31]+0x000034D8u; // 801DC604
  c->r[5]=0u+0x00000006u; // 801DC608
  c->r[3]=c->r[31]+0x000027B4u; // 801DC60C
  c->lr=0x801DC614u; f_80004000(c); // 801DC610
  c->r[4]=c->r[30]|c->r[30]; // 801DC614
  c->r[3]=c->r[31]+0x000027BAu; // 801DC618
  c->r[5]=0u+0x00000003u; // 801DC61C
  c->lr=0x801DC624u; f_80004000(c); // 801DC620
  c->r[3]=c->r[29]|c->r[29]; // 801DC624
  c->lr=0x801DC62Cu; f_801E83DC(c); // 801DC628
L_801DC62C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DC62C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DC630
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DC634
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DC638
  c->lr=c->r[0]; // 801DC63C
  c->r[1]=c->r[1]+0x00000020u; // 801DC640
  return; // 801DC644
}

// btm_sec_init
void f_801DC648(Ctx* __restrict c) {
  trace_call(0x801DC648u);
  c->r[6]=0u+0x80480000u; // 801DC648
  c->r[4]=0u+0x000000FFu; // 801DC64C
  c->r[6]=c->r[6]+0x000034D8u; // 801DC650
  c->r[5]=0u+0x00000006u; // 801DC654
  W8(c->r[6]+0x00001978u,c->r[3]); // 801DC658
  c->r[3]=c->r[6]+0x00001954u; // 801DC65C
  f_80004350(c); return; // 801DC660
}

// btm_sec_dev_reset
void f_801DC664(Ctx* __restrict c) {
  trace_call(0x801DC664u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DC664
  c->r[0]=c->lr; // 801DC668
  c->r[3]=0u+0x80480000u; // 801DC66C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DC670
  c->r[3]=c->r[3]+0x000034D8u; // 801DC674
  c->r[0]=R8(c->r[3]+0x00001978u); // 801DC678
  cmpu(c,0,c->r[0],0x00000003u); // 801DC67C
  if (!crb(c,2)) { goto L_801DC694; } // 801DC680
  c->r[3]=0u+0x00000001u; // 801DC684
  c->lr=0x801DC68Cu; f_801E24FC(c); // 801DC688
  c->r[3]=0u+0x00000001u; // 801DC68C
  c->lr=0x801DC694u; f_801E2570(c); // 801DC690
L_801DC694:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DC694
  c->lr=c->r[0]; // 801DC698
  c->r[1]=c->r[1]+0x00000010u; // 801DC69C
  return; // 801DC6A0
}

// btm_sec_abort_access_req
void f_801DC6A4(Ctx* __restrict c) {
  trace_call(0x801DC6A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DC6A4
  c->r[0]=c->lr; // 801DC6A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DC6AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DC6B0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DC6B4
  c->r[30]=c->r[3]|c->r[3]; // 801DC6B8
  c->lr=0x801DC6C0u; f_801D6120(c); // 801DC6BC
  cmps(c,0,(int32_t)c->r[3],0); // 801DC6C0
  c->r[31]=c->r[3]|c->r[3]; // 801DC6C4
  if (crb(c,2)) { goto L_801DC740; } // 801DC6C8
  c->r[3]=0u+0x80480000u; // 801DC6CC
  c->r[3]=c->r[3]+0x000034D8u; // 801DC6D0
  c->r[12]=R32(c->r[3]+0x00001920u); // 801DC6D4
  cmps(c,0,(int32_t)c->r[12],0); // 801DC6D8
  if (crb(c,2)) { goto L_801DC6F4; } // 801DC6DC
  c->r[3]=c->r[30]|c->r[30]; // 801DC6E0
  c->r[4]=c->r[31]+0x00000022u; // 801DC6E4
  c->r[5]=c->r[31]+0x00000035u; // 801DC6E8
  c->ctr=c->r[12]; // 801DC6EC
  if (true) { c->lr=0x801DC6F4u; dispatch(c,c->ctr); } // 801DC6F0
L_801DC6F4:;
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 801DC6F4
  cmpu(c,0,c->r[0],0x00000004u); // 801DC6F8
  if (crb(c,2)) { goto L_801DC708; } // 801DC6FC
  cmpu(c,0,c->r[0],0x00000001u); // 801DC700
  if (!crb(c,2)) { goto L_801DC740; } // 801DC704
L_801DC708:;
  c->r[3]=0u+0x00000000u; // 801DC708
  W8(c->r[31]+0x0000007Fu,c->r[3]); // 801DC70C
  c->r[0]=R8(c->r[31]+0x00000080u); // 801DC710
  cmps(c,0,(int32_t)c->r[0],0); // 801DC714
  if (crb(c,2)) { goto L_801DC738; } // 801DC718
  c->r[4]=R32(c->r[31]+0x00000000u); // 801DC71C
  cmps(c,0,(int32_t)c->r[4],0); // 801DC720
  if (crb(c,2)) { goto L_801DC738; } // 801DC724
  c->r[0]=R32(c->r[4]+0x00000000u); // 801DC728
  cmpu(c,0,c->r[0],0x00000003u); // 801DC72C
  if (!crb(c,2)) { goto L_801DC738; } // 801DC730
  W32(c->r[4]+0x00000004u,c->r[3]); // 801DC734
L_801DC738:;
  c->r[0]=0u+0x00000000u; // 801DC738
  W32(c->r[31]+0x00000004u,c->r[0]); // 801DC73C
L_801DC740:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DC740
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DC744
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DC748
  c->lr=c->r[0]; // 801DC74C
  c->r[1]=c->r[1]+0x00000010u; // 801DC750
  return; // 801DC754
}

// btm_sec_rmt_name_request_complete
void f_801DC758(Ctx* __restrict c) {
  trace_call(0x801DC758u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DC758
  c->r[0]=c->lr; // 801DC75C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DC760
  c->r[11]=c->r[1]+0x00000020u; // 801DC764
  c->lr=0x801DC76Cu; f_800C2E4C(c); // 801DC768
  cmps(c,0,(int32_t)c->r[3],0); // 801DC76C
  c->r[27]=c->r[3]|c->r[3]; // 801DC770
  c->r[28]=c->r[4]|c->r[4]; // 801DC774
  c->r[30]=c->r[5]|c->r[5]; // 801DC778
  if (crb(c,2)) { goto L_801DC78C; } // 801DC77C
  c->lr=0x801DC784u; f_801D6120(c); // 801DC780
  c->r[31]=c->r[3]|c->r[3]; // 801DC784
  goto L_801DC834; // 801DC788
L_801DC78C:;
  c->r[3]=0u+0x80480000u; // 801DC78C
  c->r[0]=0u+0x00000004u; // 801DC790
  c->r[3]=c->r[3]+0x000034D8u; // 801DC794
  c->r[4]=0u+0x00000000u; // 801DC798
  c->r[31]=c->r[3]+0x00001F30u; // 801DC79C
  c->ctr=c->r[0]; // 801DC7A0
L_801DC7A4:;
  c->r[0]=R8(c->r[31]+0x00000076u); // 801DC7A4
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801DC7A8
  if (crb(c,2)) { goto L_801DC7BC; } // 801DC7AC
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 801DC7B0
  cmpu(c,0,c->r[0],0x00000003u); // 801DC7B4
  if (crb(c,2)) { goto L_801DC828; } // 801DC7B8
L_801DC7BC:;
  c->r[0]=R8(c->r[31]+0x000000FEu); // 801DC7BC
  c->r[4]=c->r[4]+0x00000001u; // 801DC7C0
  c->r[31]=c->r[31]+0x00000088u; // 801DC7C4
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801DC7C8
  if (crb(c,2)) { goto L_801DC7DC; } // 801DC7CC
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 801DC7D0
  cmpu(c,0,c->r[0],0x00000003u); // 801DC7D4
  if (crb(c,2)) { goto L_801DC828; } // 801DC7D8
L_801DC7DC:;
  c->r[0]=R8(c->r[31]+0x000000FEu); // 801DC7DC
  c->r[4]=c->r[4]+0x00000001u; // 801DC7E0
  c->r[31]=c->r[31]+0x00000088u; // 801DC7E4
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801DC7E8
  if (crb(c,2)) { goto L_801DC7FC; } // 801DC7EC
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 801DC7F0
  cmpu(c,0,c->r[0],0x00000003u); // 801DC7F4
  if (crb(c,2)) { goto L_801DC828; } // 801DC7F8
L_801DC7FC:;
  c->r[0]=R8(c->r[31]+0x000000FEu); // 801DC7FC
  c->r[4]=c->r[4]+0x00000001u; // 801DC800
  c->r[31]=c->r[31]+0x00000088u; // 801DC804
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801DC808
  if (crb(c,2)) { goto L_801DC81C; } // 801DC80C
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 801DC810
  cmpu(c,0,c->r[0],0x00000003u); // 801DC814
  if (crb(c,2)) { goto L_801DC828; } // 801DC818
L_801DC81C:;
  c->r[4]=c->r[4]+0x00000001u; // 801DC81C
  c->r[31]=c->r[31]+0x00000088u; // 801DC820
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DC7A4; } // 801DC824
L_801DC828:;
  cmps(c,0,(int32_t)c->r[4],16); // 801DC828
  if (!crb(c,2)) { goto L_801DC834; } // 801DC82C
  c->r[31]=0u+0x00000000u; // 801DC830
L_801DC834:;
  c->r[3]=0u+0x80480000u; // 801DC834
  c->r[3]=c->r[3]+0x000034D8u; // 801DC838
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801DC83C
  cmpu(c,0,c->r[0],0x00000004u); // 801DC840
  if (crb(c,0)) { goto L_801DC874; } // 801DC844
  cmps(c,0,(int32_t)c->r[31],0); // 801DC848
  c->r[3]=0u+0x000D0000u; // 801DC84C
  c->r[4]=0u+0x803A0000u; // 801DC850
  c->r[5]=c->r[30]|c->r[30]; // 801DC854
  c->r[3]=c->r[3]+0x00000003u; // 801DC858
  c->r[4]=c->r[4]+0x00000194u; // 801DC85C
  if (crb(c,2)) { goto L_801DC86C; } // 801DC860
  c->r[6]=R8(c->r[31]+0x0000007Fu); // 801DC864
  goto L_801DC870; // 801DC868
L_801DC86C:;
  c->r[6]=0u+0x00000000u; // 801DC86C
L_801DC870:;
  c->lr=0x801DC874u; f_801CDA10(c); // 801DC870
L_801DC874:;
  cmps(c,0,(int32_t)c->r[31],0); // 801DC874
  if (crb(c,2)) { goto L_801DCA28; } // 801DC878
  cmps(c,0,(int32_t)c->r[30],0); // 801DC87C
  if (!crb(c,2)) { goto L_801DC8DC; } // 801DC880
  c->r[4]=c->r[28]|c->r[28]; // 801DC884
  c->r[3]=c->r[31]+0x00000035u; // 801DC888
  c->r[5]=0u+0x00000040u; // 801DC88C
  c->lr=0x801DC894u; f_80004000(c); // 801DC890
  c->r[0]=R8(c->r[31]+0x00000076u); // 801DC894
  c->r[29]=0u+0x80480000u; // 801DC898
  c->r[29]=c->r[29]+0x000034D8u; // 801DC89C
  c->r[28]=0u+0x00000000u; // 801DC8A0
  c->r[0]=c->r[0]|0x00000008u; // 801DC8A4
  W8(c->r[31]+0x00000076u,c->r[0]); // 801DC8A8
L_801DC8AC:;
  c->r[12]=R32(c->r[29]+0x0000192Cu); // 801DC8AC
  cmps(c,0,(int32_t)c->r[12],0); // 801DC8B0
  if (crb(c,2)) { goto L_801DC8CC; } // 801DC8B4
  c->r[3]=c->r[27]|c->r[27]; // 801DC8B8
  c->r[4]=c->r[31]+0x00000022u; // 801DC8BC
  c->r[5]=c->r[31]+0x00000035u; // 801DC8C0
  c->ctr=c->r[12]; // 801DC8C4
  if (true) { c->lr=0x801DC8CCu; dispatch(c,c->ctr); } // 801DC8C8
L_801DC8CC:;
  c->r[28]=c->r[28]+0x00000001u; // 801DC8CC
  c->r[29]=c->r[29]+0x00000004u; // 801DC8D0
  cmps(c,0,(int32_t)c->r[28],2); // 801DC8D4
  if (crb(c,0)) { IRQCHK(c); goto L_801DC8AC; } // 801DC8D8
L_801DC8DC:;
  c->r[0]=R8(c->r[31]+0x00000082u); // 801DC8DC
  cmps(c,0,(int32_t)c->r[0],0); // 801DC8E0
  if (crb(c,2)) { goto L_801DC97C; } // 801DC8E4
  c->r[0]=R8(c->r[31]+0x00000081u); // 801DC8E8
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801DC8EC
  if (crb(c,2)) { goto L_801DC900; } // 801DC8F0
  c->r[0]=R8(c->r[31]+0x00000085u); // 801DC8F4
  cmps(c,0,(int32_t)c->r[0],0); // 801DC8F8
  if (crb(c,2)) { goto L_801DCA28; } // 801DC8FC
L_801DC900:;
  c->r[0]=0u+0x00000000u; // 801DC900
  c->r[3]=0u+0x80480000u; // 801DC904
  W8(c->r[31]+0x00000082u,c->r[0]); // 801DC908
  c->r[3]=c->r[3]+0x000034D8u; // 801DC90C
  c->r[12]=R32(c->r[3]+0x00001914u); // 801DC910
  cmps(c,0,(int32_t)c->r[12],0); // 801DC914
  if (crb(c,2)) { goto L_801DC938; } // 801DC918
  c->r[3]=c->r[31]+0x0000001Cu; // 801DC91C
  c->r[4]=c->r[31]+0x00000022u; // 801DC920
  c->r[5]=c->r[31]+0x00000035u; // 801DC924
  c->r[6]=c->r[31]+0x00000025u; // 801DC928
  c->r[7]=R8(c->r[31]+0x00000083u); // 801DC92C
  c->ctr=c->r[12]; // 801DC930
  if (true) { c->lr=0x801DC938u; dispatch(c,c->ctr); } // 801DC934
L_801DC938:;
  c->r[29]=0u+0x80480000u; // 801DC938
  c->r[28]=0u+0x00000000u; // 801DC93C
  c->r[29]=c->r[29]+0x000034D8u; // 801DC940
L_801DC944:;
  c->r[12]=R32(c->r[29]+0x00001924u); // 801DC944
  cmps(c,0,(int32_t)c->r[12],0); // 801DC948
  if (crb(c,2)) { goto L_801DC96C; } // 801DC94C
  c->r[3]=c->r[31]+0x0000001Cu; // 801DC950
  c->r[4]=c->r[31]+0x00000022u; // 801DC954
  c->r[5]=c->r[31]+0x00000035u; // 801DC958
  c->r[6]=c->r[31]+0x00000025u; // 801DC95C
  c->r[7]=R8(c->r[31]+0x00000083u); // 801DC960
  c->ctr=c->r[12]; // 801DC964
  if (true) { c->lr=0x801DC96Cu; dispatch(c,c->ctr); } // 801DC968
L_801DC96C:;
  c->r[28]=c->r[28]+0x00000001u; // 801DC96C
  c->r[29]=c->r[29]+0x00000004u; // 801DC970
  cmps(c,0,(int32_t)c->r[28],2); // 801DC974
  if (crb(c,0)) { IRQCHK(c); goto L_801DC944; } // 801DC978
L_801DC97C:;
  c->r[3]=R8(c->r[31]+0x00000081u); // 801DC97C
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 801DC980
  if (crb(c,2)) { goto L_801DC9B0; } // 801DC984
  c->r[0]=R8(c->r[31]+0x00000076u); // 801DC988
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801DC98C
  if (crb(c,2)) { goto L_801DC9B0; } // 801DC990
  c->r[0]=0u+0xFFFFFFAFu; // 801DC994
  c->r[4]=0u+0x00000013u; // 801DC998
  c->r[0]=c->r[3]&c->r[0]; // 801DC99C
  W8(c->r[31]+0x00000081u,c->r[0]); // 801DC9A0
  c->r[3]=R16(c->r[31]+0x00000018u); // 801DC9A4
  c->lr=0x801DC9ACu; f_801E0B94(c); // 801DC9A8
  goto L_801DCA28; // 801DC9AC
L_801DC9B0:;
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 801DC9B0
  cmpu(c,0,c->r[0],0x00000003u); // 801DC9B4
  if (!crb(c,2)) { goto L_801DCA28; } // 801DC9B8
  c->r[29]=0u+0x00000000u; // 801DC9BC
  cmps(c,0,(int32_t)c->r[30],0); // 801DC9C0
  W8(c->r[31]+0x0000007Fu,c->r[29]); // 801DC9C4
  if (crb(c,2)) { goto L_801DC9F4; } // 801DC9C8
  c->r[12]=R32(c->r[31]+0x00000004u); // 801DC9CC
  cmps(c,0,(int32_t)c->r[12],0); // 801DC9D0
  if (crb(c,2)) { goto L_801DCA28; } // 801DC9D4
  c->r[3]=c->r[31]+0x0000001Cu; // 801DC9D8
  c->r[4]=R32(c->r[31]+0x00000008u); // 801DC9DC
  c->r[5]=0u+0x0000000Au; // 801DC9E0
  c->ctr=c->r[12]; // 801DC9E4
  if (true) { c->lr=0x801DC9ECu; dispatch(c,c->ctr); } // 801DC9E8
  W32(c->r[31]+0x00000004u,c->r[29]); // 801DC9EC
  goto L_801DCA28; // 801DC9F0
L_801DC9F4:;
  c->r[3]=c->r[31]|c->r[31]; // 801DC9F4
  c->lr=0x801DC9FCu; f_801DDD70(c); // 801DC9F8
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; // 801DC9FC
  cmpu(c,0,c->r[5],0x00000001u); // 801DCA00
  if (crb(c,2)) { goto L_801DCA28; } // 801DCA04
  c->r[12]=R32(c->r[31]+0x00000004u); // 801DCA08
  cmps(c,0,(int32_t)c->r[12],0); // 801DCA0C
  if (crb(c,2)) { goto L_801DCA28; } // 801DCA10
  c->r[3]=c->r[31]+0x0000001Cu; // 801DCA14
  c->r[4]=R32(c->r[31]+0x00000008u); // 801DCA18
  c->ctr=c->r[12]; // 801DCA1C
  if (true) { c->lr=0x801DCA24u; dispatch(c,c->ctr); } // 801DCA20
  W32(c->r[31]+0x00000004u,c->r[29]); // 801DCA24
L_801DCA28:;
  c->r[11]=c->r[1]+0x00000020u; // 801DCA28
  c->lr=0x801DCA30u; f_800C2E98(c); // 801DCA2C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DCA30
  c->lr=c->r[0]; // 801DCA34
  c->r[1]=c->r[1]+0x00000020u; // 801DCA38
  return; // 801DCA3C
}

// btm_sec_auth_complete
void f_801DCA40(Ctx* __restrict c) {
  trace_call(0x801DCA40u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DCA40
  c->r[0]=c->lr; // 801DCA44
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DCA48
  c->r[11]=c->r[1]+0x00000020u; // 801DCA4C
  c->lr=0x801DCA54u; f_800C2E48(c); // 801DCA50
  c->r[29]=c->r[3]|c->r[3]; // 801DCA54
  c->r[30]=c->r[4]|c->r[4]; // 801DCA58
  c->lr=0x801DCA60u; f_801D6068(c); // 801DCA5C
  c->r[4]=0u+0x80480000u; // 801DCA60
  c->r[31]=c->r[3]|c->r[3]; // 801DCA64
  c->r[4]=c->r[4]+0x000034D8u; // 801DCA68
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801DCA6C
  cmpu(c,0,c->r[0],0x00000004u); // 801DCA70
  if (crb(c,0)) { goto L_801DCAA4; } // 801DCA74
  cmps(c,0,(int32_t)c->r[31],0); // 801DCA78
  c->r[3]=0u+0x000D0000u; // 801DCA7C
  c->r[4]=0u+0x803A0000u; // 801DCA80
  c->r[5]=c->r[30]|c->r[30]; // 801DCA84
  c->r[3]=c->r[3]+0x00000003u; // 801DCA88
  c->r[4]=c->r[4]+0x000001CCu; // 801DCA8C
  if (crb(c,2)) { goto L_801DCA9C; } // 801DCA90
  c->r[6]=R8(c->r[31]+0x0000007Fu); // 801DCA94
  goto L_801DCAA0; // 801DCA98
L_801DCA9C:;
  c->r[6]=0u+0x00000000u; // 801DCA9C
L_801DCAA0:;
  c->lr=0x801DCAA4u; f_801CDA10(c); // 801DCAA0
L_801DCAA4:;
  c->r[4]=0u+0x80480000u; // 801DCAA4
  c->r[4]=c->r[4]+0x000034D8u; // 801DCAA8
  c->r[0]=R8(c->r[4]+0x0000197Bu); // 801DCAAC
  cmps(c,0,(int32_t)c->r[0],0); // 801DCAB0
  if (crb(c,2)) { goto L_801DCB0C; } // 801DCAB4
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801DCAB8
  c->r[3]=0u+0x00000000u; // 801DCABC
  W8(c->r[4]+0x0000197Bu,c->r[3]); // 801DCAC0
  cmpu(c,0,c->r[0],0x00000005u); // 801DCAC4
  if (crb(c,0)) { goto L_801DCAF0; } // 801DCAC8
  c->r[3]=R8(c->r[4]+0x00001978u); // 801DCACC
  c->r[4]=0u+0x803A0000u; // 801DCAD0
  c->r[5]=0u+0x000D0000u; // 801DCAD4
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 801DCAD8
  c->r[4]=c->r[4]+0xFFFFFEBCu; // 801DCADC
  c->r[0]=cntlz(c->r[0]); // 801DCAE0
  c->r[3]=c->r[5]+0x00000004u; // 801DCAE4
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 801DCAE8
  c->lr=0x801DCAF0u; f_801CD9F0(c); // 801DCAEC
L_801DCAF0:;
  c->r[3]=0u+0x80480000u; // 801DCAF0
  c->r[3]=c->r[3]+0x000034D8u; // 801DCAF4
  c->r[3]=R8(c->r[3]+0x00001978u); // 801DCAF8
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 801DCAFC
  c->r[0]=cntlz(c->r[0]); // 801DCB00
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 801DCB04
  c->lr=0x801DCB0Cu; f_801E24FC(c); // 801DCB08
L_801DCB0C:;
  c->r[4]=0u+0x80480000u; // 801DCB0C
  c->r[4]=c->r[4]+0x000034D8u; // 801DCB10
  c->r[0]=R8(c->r[4]+0x0000197Cu); // 801DCB14
  cmps(c,0,(int32_t)c->r[0],0); // 801DCB18
  if (crb(c,2)) { goto L_801DCB30; } // 801DCB1C
  c->r[0]=0u+0x00000000u; // 801DCB20
  c->r[3]=R8(c->r[4]+0x00000020u); // 801DCB24
  W8(c->r[4]+0x0000197Cu,c->r[0]); // 801DCB28
  c->lr=0x801DCB30u; f_801E1F88(c); // 801DCB2C
L_801DCB30:;
  cmps(c,0,(int32_t)c->r[31],0); // 801DCB30
  if (crb(c,2)) { goto L_801DCBC4; } // 801DCB34
  c->r[3]=R8(c->r[31]+0x00000081u); // 801DCB38
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 801DCB3C
  if (crb(c,2)) { goto L_801DCBC4; } // 801DCB40
  c->r[27]=0u+0x80480000u; // 801DCB44
  c->r[27]=c->r[27]+0x000034D8u; // 801DCB48
  c->r[0]=R8(c->r[27]+0x0000197Du); // 801DCB4C
  cmps(c,0,(int32_t)c->r[0],0); // 801DCB50
  if (!crb(c,2)) { goto L_801DCBC4; } // 801DCB54
  c->r[0]=0u+0xFFFFFFAFu; // 801DCB58
  c->r[0]=c->r[3]&c->r[0]; // 801DCB5C
  W8(c->r[31]+0x00000081u,c->r[0]); // 801DCB60
  c->r[26]=R8(c->r[27]+0x0000197Eu); // 801DCB64
  cmps(c,0,(int32_t)c->r[26],0); // 801DCB68
  if (crb(c,2)) { goto L_801DCBC4; } // 801DCB6C
  c->r[3]=c->r[29]|c->r[29]; // 801DCB70
  c->lr=0x801DCB78u; f_801D6068(c); // 801DCB74
  cmps(c,0,(int32_t)c->r[3],0); // 801DCB78
  c->r[28]=c->r[3]|c->r[3]; // 801DCB7C
  if (crb(c,2)) { goto L_801DCBC4; } // 801DCB80
  c->r[0]=R8(c->r[3]+0x00000081u); // 801DCB84
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801DCB88
  if (crb(c,2)) { goto L_801DCB98; } // 801DCB8C
  W8(c->r[27]+0x0000197Eu,c->r[26]); // 801DCB90
  goto L_801DCBC4; // 801DCB94
L_801DCB98:;
  c->r[27]=R8(c->r[3]+0x0000007Fu); // 801DCB98
  cmpu(c,0,c->r[27],0x00000005u); // 801DCB9C
  if (crb(c,2)) { goto L_801DCBC4; } // 801DCBA0
  c->r[0]=0u+0x00000005u; // 801DCBA4
  c->r[4]=c->r[26]|c->r[26]; // 801DCBA8
  W8(c->r[3]+0x0000007Fu,c->r[0]); // 801DCBAC
  c->r[3]=c->r[29]|c->r[29]; // 801DCBB0
  c->lr=0x801DCBB8u; f_801E0B94(c); // 801DCBB4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801DCBB8
  if (!crb(c,2)) { goto L_801DCBC4; } // 801DCBBC
  W8(c->r[28]+0x0000007Fu,c->r[27]); // 801DCBC0
L_801DCBC4:;
  cmps(c,0,(int32_t)c->r[31],0); // 801DCBC4
  if (crb(c,2)) { goto L_801DCD6C; } // 801DCBC8
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 801DCBCC
  cmpu(c,0,c->r[0],0x00000001u); // 801DCBD0
  if (crb(c,2)) { goto L_801DCC10; } // 801DCBD4
  c->r[3]=0u+0x80480000u; // 801DCBD8
  c->r[3]=c->r[3]+0x000034D8u; // 801DCBDC
  c->r[12]=R32(c->r[3]+0x0000191Cu); // 801DCBE0
  cmps(c,0,(int32_t)c->r[12],0); // 801DCBE4
  if (crb(c,2)) { goto L_801DCD6C; } // 801DCBE8
  cmps(c,0,(int32_t)c->r[30],0); // 801DCBEC
  if (crb(c,2)) { goto L_801DCD6C; } // 801DCBF0
  c->r[6]=c->r[30]|c->r[30]; // 801DCBF4
  c->r[3]=c->r[31]+0x0000001Cu; // 801DCBF8
  c->r[4]=c->r[31]+0x00000022u; // 801DCBFC
  c->r[5]=c->r[31]+0x00000035u; // 801DCC00
  c->ctr=c->r[12]; // 801DCC04
  if (true) { c->lr=0x801DCC0Cu; dispatch(c,c->ctr); } // 801DCC08
  goto L_801DCD6C; // 801DCC0C
L_801DCC10:;
  cmpu(c,0,c->r[30],0x0000000Cu); // 801DCC10
  if (!crb(c,2)) { goto L_801DCC2C; } // 801DCC14
  c->r[0]=R8(c->r[31]+0x00000076u); // 801DCC18
  c->r[0]=rotl(c->r[0],0)&0x00000006u; // 801DCC1C
  cmps(c,0,(int32_t)c->r[0],6); // 801DCC20
  if (!crb(c,2)) { goto L_801DCC2C; } // 801DCC24
  c->r[30]=0u+0x00000000u; // 801DCC28
L_801DCC2C:;
  c->r[3]=0u+0x80480000u; // 801DCC2C
  c->r[3]=c->r[3]+0x000034D8u; // 801DCC30
  c->r[12]=R32(c->r[3]+0x0000191Cu); // 801DCC34
  cmps(c,0,(int32_t)c->r[12],0); // 801DCC38
  if (crb(c,2)) { goto L_801DCC58; } // 801DCC3C
  c->r[6]=c->r[30]|c->r[30]; // 801DCC40
  c->r[3]=c->r[31]+0x0000001Cu; // 801DCC44
  c->r[4]=c->r[31]+0x00000022u; // 801DCC48
  c->r[5]=c->r[31]+0x00000035u; // 801DCC4C
  c->ctr=c->r[12]; // 801DCC50
  if (true) { c->lr=0x801DCC58u; dispatch(c,c->ctr); } // 801DCC54
L_801DCC58:;
  c->r[29]=0u+0x00000000u; // 801DCC58
  W8(c->r[31]+0x0000007Fu,c->r[29]); // 801DCC5C
  c->r[3]=R8(c->r[31]+0x00000081u); // 801DCC60
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 801DCC64
  if (crb(c,2)) { goto L_801DCC88; } // 801DCC68
  c->r[0]=0u+0xFFFFFFAFu; // 801DCC6C
  c->r[4]=0u+0x00000013u; // 801DCC70
  c->r[0]=c->r[3]&c->r[0]; // 801DCC74
  W8(c->r[31]+0x00000081u,c->r[0]); // 801DCC78
  c->r[3]=R16(c->r[31]+0x00000018u); // 801DCC7C
  c->lr=0x801DCC84u; f_801E0B94(c); // 801DCC80
  goto L_801DCD6C; // 801DCC84
L_801DCC88:;
  cmps(c,0,(int32_t)c->r[30],0); // 801DCC88
  if (crb(c,2)) { goto L_801DCCF4; } // 801DCC8C
  c->r[0]=R32(c->r[31]+0x00000004u); // 801DCC90
  cmps(c,0,(int32_t)c->r[0],0); // 801DCC94
  if (crb(c,2)) { goto L_801DCCE4; } // 801DCC98
  c->r[0]=R8(c->r[31]+0x00000080u); // 801DCC9C
  cmps(c,0,(int32_t)c->r[0],0); // 801DCCA0
  if (crb(c,2)) { goto L_801DCCC4; } // 801DCCA4
  c->r[3]=R32(c->r[31]+0x00000000u); // 801DCCA8
  cmps(c,0,(int32_t)c->r[3],0); // 801DCCAC
  if (crb(c,2)) { goto L_801DCCC4; } // 801DCCB0
  c->r[0]=R32(c->r[3]+0x00000000u); // 801DCCB4
  cmpu(c,0,c->r[0],0x00000003u); // 801DCCB8
  if (!crb(c,2)) { goto L_801DCCC4; } // 801DCCBC
  W32(c->r[3]+0x00000004u,c->r[29]); // 801DCCC0
L_801DCCC4:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 801DCCC4
  c->r[3]=c->r[31]+0x0000001Cu; // 801DCCC8
  c->r[4]=R32(c->r[31]+0x00000008u); // 801DCCCC
  c->r[5]=0u+0x0000000Au; // 801DCCD0
  c->ctr=c->r[12]; // 801DCCD4
  if (true) { c->lr=0x801DCCDCu; dispatch(c,c->ctr); } // 801DCCD8
  c->r[0]=0u+0x00000000u; // 801DCCDC
  W32(c->r[31]+0x00000004u,c->r[0]); // 801DCCE0
L_801DCCE4:;
  c->r[3]=R16(c->r[31]+0x00000018u); // 801DCCE4
  c->r[4]=0u+0x00000005u; // 801DCCE8
  c->lr=0x801DCCF0u; f_801E0B94(c); // 801DCCEC
  goto L_801DCD6C; // 801DCCF0
L_801DCCF4:;
  c->r[0]=R8(c->r[31]+0x00000076u); // 801DCCF4
  c->r[3]=c->r[31]|c->r[31]; // 801DCCF8
  c->r[0]=c->r[0]|0x00000002u; // 801DCCFC
  W8(c->r[31]+0x00000076u,c->r[0]); // 801DCD00
  c->lr=0x801DCD08u; f_801DDD70(c); // 801DCD04
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801DCD08
  c->r[4]=c->r[3]|c->r[3]; // 801DCD0C
  cmpu(c,0,c->r[0],0x00000001u); // 801DCD10
  if (crb(c,2)) { goto L_801DCD6C; } // 801DCD14
  c->r[0]=R32(c->r[31]+0x00000004u); // 801DCD18
  cmps(c,0,(int32_t)c->r[0],0); // 801DCD1C
  if (crb(c,2)) { goto L_801DCD6C; } // 801DCD20
  c->r[0]=R8(c->r[31]+0x00000080u); // 801DCD24
  cmps(c,0,(int32_t)c->r[0],0); // 801DCD28
  if (crb(c,2)) { goto L_801DCD4C; } // 801DCD2C
  c->r[3]=R32(c->r[31]+0x00000000u); // 801DCD30
  cmps(c,0,(int32_t)c->r[3],0); // 801DCD34
  if (crb(c,2)) { goto L_801DCD4C; } // 801DCD38
  c->r[0]=R32(c->r[3]+0x00000000u); // 801DCD3C
  cmpu(c,0,c->r[0],0x00000003u); // 801DCD40
  if (!crb(c,2)) { goto L_801DCD4C; } // 801DCD44
  W32(c->r[3]+0x00000004u,c->r[29]); // 801DCD48
L_801DCD4C:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 801DCD4C
  c->r[5]=rotl(c->r[4],0)&0x000000FFu; // 801DCD50
  c->r[3]=c->r[31]+0x0000001Cu; // 801DCD54
  c->r[4]=R32(c->r[31]+0x00000008u); // 801DCD58
  c->ctr=c->r[12]; // 801DCD5C
  if (true) { c->lr=0x801DCD64u; dispatch(c,c->ctr); } // 801DCD60
  c->r[0]=0u+0x00000000u; // 801DCD64
  W32(c->r[31]+0x00000004u,c->r[0]); // 801DCD68
L_801DCD6C:;
  c->r[11]=c->r[1]+0x00000020u; // 801DCD6C
  c->lr=0x801DCD74u; f_800C2E94(c); // 801DCD70
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DCD74
  c->lr=c->r[0]; // 801DCD78
  c->r[1]=c->r[1]+0x00000020u; // 801DCD7C
  return; // 801DCD80
}

// btm_sec_mkey_comp_event
void f_801DCD84(Ctx* __restrict c) {
  trace_call(0x801DCD84u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DCD84
  c->r[0]=c->lr; // 801DCD88
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DCD8C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DCD90
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DCD94
  c->r[30]=c->r[5]|c->r[5]; // 801DCD98
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DCD9C
  c->r[29]=c->r[4]|c->r[4]; // 801DCDA0
  c->lr=0x801DCDA8u; f_801D6068(c); // 801DCDA4
  c->r[4]=0u+0x80480000u; // 801DCDA8
  c->r[7]=R8(c->r[2]+0xFFFFB058u); // 801DCDAC
  c->r[4]=c->r[4]+0x000034D8u; // 801DCDB0
  c->r[6]=R8(c->r[2]+0xFFFFB059u); // 801DCDB4
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801DCDB8
  c->r[31]=c->r[3]|c->r[3]; // 801DCDBC
  c->r[5]=R8(c->r[2]+0xFFFFB05Au); // 801DCDC0
  c->r[4]=R8(c->r[2]+0xFFFFB05Bu); // 801DCDC4
  cmpu(c,0,c->r[0],0x00000004u); // 801DCDC8
  c->r[3]=R8(c->r[2]+0xFFFFB05Cu); // 801DCDCC
  c->r[0]=R8(c->r[2]+0xFFFFB05Du); // 801DCDD0
  W8(c->r[1]+0x00000008u,c->r[7]); // 801DCDD4
  W8(c->r[1]+0x00000009u,c->r[6]); // 801DCDD8
  W8(c->r[1]+0x0000000Au,c->r[5]); // 801DCDDC
  W8(c->r[1]+0x0000000Bu,c->r[4]); // 801DCDE0
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 801DCDE4
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801DCDE8
  if (crb(c,0)) { goto L_801DCE1C; } // 801DCDEC
  cmps(c,0,(int32_t)c->r[31],0); // 801DCDF0
  c->r[3]=0u+0x000D0000u; // 801DCDF4
  c->r[4]=0u+0x803A0000u; // 801DCDF8
  c->r[5]=c->r[29]|c->r[29]; // 801DCDFC
  c->r[3]=c->r[3]+0x00000003u; // 801DCE00
  c->r[4]=c->r[4]+0x00000200u; // 801DCE04
  if (crb(c,2)) { goto L_801DCE14; } // 801DCE08
  c->r[6]=R8(c->r[31]+0x0000007Fu); // 801DCE0C
  goto L_801DCE18; // 801DCE10
L_801DCE14:;
  c->r[6]=0u+0x00000000u; // 801DCE14
L_801DCE18:;
  c->lr=0x801DCE1Cu; f_801CDA10(c); // 801DCE18
L_801DCE1C:;
  c->r[3]=0u+0x80480000u; // 801DCE1C
  c->r[3]=c->r[3]+0x000034D8u; // 801DCE20
  c->r[12]=R32(c->r[3]+0x000027B0u); // 801DCE24
  cmps(c,0,(int32_t)c->r[12],0); // 801DCE28
  if (crb(c,2)) { goto L_801DCE64; } // 801DCE2C
  cmps(c,0,(int32_t)c->r[31],0); // 801DCE30
  if (!crb(c,2)) { goto L_801DCE50; } // 801DCE34
  c->r[4]=c->r[29]|c->r[29]; // 801DCE38
  c->r[5]=c->r[30]|c->r[30]; // 801DCE3C
  c->r[3]=c->r[1]+0x00000008u; // 801DCE40
  c->ctr=c->r[12]; // 801DCE44
  if (true) { c->lr=0x801DCE4Cu; dispatch(c,c->ctr); } // 801DCE48
  goto L_801DCE64; // 801DCE4C
L_801DCE50:;
  c->r[4]=c->r[29]|c->r[29]; // 801DCE50
  c->r[5]=c->r[30]|c->r[30]; // 801DCE54
  c->r[3]=c->r[31]+0x0000001Cu; // 801DCE58
  c->ctr=c->r[12]; // 801DCE5C
  if (true) { c->lr=0x801DCE64u; dispatch(c,c->ctr); } // 801DCE60
L_801DCE64:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DCE64
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DCE68
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DCE6C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DCE70
  c->lr=c->r[0]; // 801DCE74
  c->r[1]=c->r[1]+0x00000020u; // 801DCE78
  return; // 801DCE7C
}

// btm_sec_encrypt_change
void f_801DCE80(Ctx* __restrict c) {
  trace_call(0x801DCE80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DCE80
  c->r[0]=c->lr; // 801DCE84
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DCE88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DCE8C
  c->r[31]=c->r[4]|c->r[4]; // 801DCE90
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DCE94
  c->lr=0x801DCE9Cu; f_801D6068(c); // 801DCE98
  c->r[4]=0u+0x80480000u; // 801DCE9C
  c->r[30]=c->r[3]|c->r[3]; // 801DCEA0
  c->r[4]=c->r[4]+0x000034D8u; // 801DCEA4
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801DCEA8
  cmpu(c,0,c->r[0],0x00000004u); // 801DCEAC
  if (crb(c,0)) { goto L_801DCEE0; } // 801DCEB0
  cmps(c,0,(int32_t)c->r[30],0); // 801DCEB4
  c->r[3]=0u+0x000D0000u; // 801DCEB8
  c->r[4]=0u+0x803A0000u; // 801DCEBC
  c->r[5]=c->r[31]|c->r[31]; // 801DCEC0
  c->r[3]=c->r[3]+0x00000003u; // 801DCEC4
  c->r[4]=c->r[4]+0x00000230u; // 801DCEC8
  if (crb(c,2)) { goto L_801DCED8; } // 801DCECC
  c->r[6]=R8(c->r[30]+0x0000007Fu); // 801DCED0
  goto L_801DCEDC; // 801DCED4
L_801DCED8:;
  c->r[6]=0u+0x00000000u; // 801DCED8
L_801DCEDC:;
  c->lr=0x801DCEE0u; f_801CDA10(c); // 801DCEDC
L_801DCEE0:;
  cmps(c,0,(int32_t)c->r[30],0); // 801DCEE0
  if (crb(c,2)) { goto L_801DCFA4; } // 801DCEE4
  cmpu(c,0,c->r[31],0x00000023u); // 801DCEE8
  if (!crb(c,2)) { goto L_801DCF1C; } // 801DCEEC
  c->r[7]=0u+0x80480000u; // 801DCEF0
  c->r[6]=0u+0x801E0000u; // 801DCEF4
  c->r[7]=c->r[7]+0x000034D8u; // 801DCEF8
  c->r[4]=0u+0x00000016u; // 801DCEFC
  c->r[6]=c->r[6]+0xFFFFE26Cu; // 801DCF00
  W32(c->r[7]+0x00001938u,c->r[30]); // 801DCF04
  c->r[3]=c->r[7]+0x0000195Cu; // 801DCF08
  c->r[5]=0u+0x00000001u; // 801DCF0C
  W32(c->r[7]+0x0000196Cu,c->r[6]); // 801DCF10
  c->lr=0x801DCF18u; f_801CDFE0(c); // 801DCF14
  goto L_801DCFA4; // 801DCF18
L_801DCF1C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801DCF1C
  if (crb(c,2)) { goto L_801DCF50; } // 801DCF20
  c->r[12]=R32(c->r[30]+0x00000004u); // 801DCF24
  cmps(c,0,(int32_t)c->r[12],0); // 801DCF28
  if (crb(c,2)) { goto L_801DCFA4; } // 801DCF2C
  c->r[3]=c->r[30]+0x0000001Cu; // 801DCF30
  c->r[4]=R32(c->r[30]+0x00000008u); // 801DCF34
  c->r[5]=0u+0x0000000Au; // 801DCF38
  c->ctr=c->r[12]; // 801DCF3C
  if (true) { c->lr=0x801DCF44u; dispatch(c,c->ctr); } // 801DCF40
  c->r[0]=0u+0x00000000u; // 801DCF44
  W32(c->r[30]+0x00000004u,c->r[0]); // 801DCF48
  goto L_801DCFA4; // 801DCF4C
L_801DCF50:;
  c->r[0]=R8(c->r[30]+0x00000076u); // 801DCF50
  c->r[0]=c->r[0]|0x00000006u; // 801DCF54
  W8(c->r[30]+0x00000076u,c->r[0]); // 801DCF58
  c->r[0]=R8(c->r[30]+0x0000007Fu); // 801DCF5C
  cmpu(c,0,c->r[0],0x00000002u); // 801DCF60
  if (!crb(c,2)) { goto L_801DCFA4; } // 801DCF64
  c->r[31]=0u+0x00000000u; // 801DCF68
  c->r[3]=c->r[30]|c->r[30]; // 801DCF6C
  W8(c->r[30]+0x0000007Fu,c->r[31]); // 801DCF70
  c->lr=0x801DCF78u; f_801DDD70(c); // 801DCF74
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; // 801DCF78
  cmpu(c,0,c->r[5],0x00000001u); // 801DCF7C
  if (crb(c,2)) { goto L_801DCFA4; } // 801DCF80
  c->r[12]=R32(c->r[30]+0x00000004u); // 801DCF84
  cmps(c,0,(int32_t)c->r[12],0); // 801DCF88
  if (crb(c,2)) { goto L_801DCFA4; } // 801DCF8C
  c->r[3]=c->r[30]+0x0000001Cu; // 801DCF90
  c->r[4]=R32(c->r[30]+0x00000008u); // 801DCF94
  c->ctr=c->r[12]; // 801DCF98
  if (true) { c->lr=0x801DCFA0u; dispatch(c,c->ctr); } // 801DCF9C
  W32(c->r[30]+0x00000004u,c->r[31]); // 801DCFA0
L_801DCFA4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DCFA4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DCFA8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DCFAC
  c->lr=c->r[0]; // 801DCFB0
  c->r[1]=c->r[1]+0x00000010u; // 801DCFB4
  return; // 801DCFB8
}

// btm_sec_is_bonding
void f_801DCFBC(Ctx* __restrict c) {
  trace_call(0x801DCFBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DCFBC
  c->r[0]=c->lr; // 801DCFC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DCFC4
  c->lr=0x801DCFCCu; f_801D6068(c); // 801DCFC8
  cmps(c,0,(int32_t)c->r[3],0); // 801DCFCC
  if (crb(c,2)) { goto L_801DCFE8; } // 801DCFD0
  c->r[0]=R8(c->r[3]+0x00000081u); // 801DCFD4
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801DCFD8
  if (crb(c,2)) { goto L_801DCFE8; } // 801DCFDC
  c->r[3]=0u+0x00000001u; // 801DCFE0
  goto L_801DCFEC; // 801DCFE4
L_801DCFE8:;
  c->r[3]=0u+0x00000000u; // 801DCFE8
L_801DCFEC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DCFEC
  c->lr=c->r[0]; // 801DCFF0
  c->r[1]=c->r[1]+0x00000010u; // 801DCFF4
  return; // 801DCFF8
}

// btm_sec_connected
void f_801DCFFC(Ctx* __restrict c) {
  trace_call(0x801DCFFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DCFFC
  c->r[0]=c->lr; // 801DD000
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DD004
  c->r[11]=c->r[1]+0x00000020u; // 801DD008
  c->lr=0x801DD010u; f_800C2E4C(c); // 801DD00C
  c->r[27]=c->r[3]|c->r[3]; // 801DD010
  c->r[28]=c->r[4]|c->r[4]; // 801DD014
  c->r[29]=c->r[5]|c->r[5]; // 801DD018
  c->r[30]=c->r[6]|c->r[6]; // 801DD01C
  c->lr=0x801DD024u; f_801D6120(c); // 801DD020
  c->r[4]=0u+0x80480000u; // 801DD024
  c->r[31]=c->r[3]|c->r[3]; // 801DD028
  c->r[4]=c->r[4]+0x000034D8u; // 801DD02C
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801DD030
  cmpu(c,0,c->r[0],0x00000004u); // 801DD034
  if (crb(c,0)) { goto L_801DD05C; } // 801DD038
  c->r[3]=0u+0x000D0000u; // 801DD03C
  c->r[4]=0u+0x803A0000u; // 801DD040
  c->r[5]=c->r[28]|c->r[28]; // 801DD044
  c->r[6]=c->r[29]|c->r[29]; // 801DD048
  c->r[7]=c->r[30]|c->r[30]; // 801DD04C
  c->r[3]=c->r[3]+0x00000003u; // 801DD050
  c->r[4]=c->r[4]+0x00000264u; // 801DD054
  c->lr=0x801DD05Cu; f_801CDA30(c); // 801DD058
L_801DD05C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801DD05C
  if (!crb(c,2)) { goto L_801DD088; } // 801DD060
  cmps(c,0,(int32_t)c->r[29],0); // 801DD064
  if (!crb(c,2)) { goto L_801DD464; } // 801DD068
  c->r[3]=c->r[27]|c->r[27]; // 801DD06C
  c->lr=0x801DD074u; f_801D5F48(c); // 801DD070
  cmps(c,0,(int32_t)c->r[3],0); // 801DD074
  c->r[31]=c->r[3]|c->r[3]; // 801DD078
  if (!crb(c,2)) { goto L_801DD0A8; } // 801DD07C
  goto L_801DD464; // 801DD080
  goto L_801DD464; // 801DD084
L_801DD088:;
  c->r[4]=0u+0x80480000u; // 801DD088
  c->r[0]=0u+0x00000001u; // 801DD08C
  c->r[4]=c->r[4]+0x000034D8u; // 801DD090
  c->r[3]=R32(c->r[4]+0x00001974u); // 801DD094
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 801DD098
  c->r[3]=c->r[3]+0x00000001u; // 801DD09C
  W32(c->r[4]+0x00001974u,c->r[3]); // 801DD0A0
  W8(c->r[31]+0x00000085u,c->r[0]); // 801DD0A4
L_801DD0A8:;
  c->r[0]=R8(c->r[31]+0x00000081u); // 801DD0A8
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801DD0AC
  if (crb(c,2)) { goto L_801DD140; } // 801DD0B0
  c->r[4]=0u+0x80480000u; // 801DD0B4
  c->r[4]=c->r[4]+0x000034D8u; // 801DD0B8
  c->r[0]=R8(c->r[4]+0x0000197Bu); // 801DD0BC
  cmps(c,0,(int32_t)c->r[0],0); // 801DD0C0
  if (crb(c,2)) { goto L_801DD11C; } // 801DD0C4
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801DD0C8
  c->r[3]=0u+0x00000000u; // 801DD0CC
  W8(c->r[4]+0x0000197Bu,c->r[3]); // 801DD0D0
  cmpu(c,0,c->r[0],0x00000005u); // 801DD0D4
  if (crb(c,0)) { goto L_801DD100; } // 801DD0D8
  c->r[3]=R8(c->r[4]+0x00001978u); // 801DD0DC
  c->r[4]=0u+0x803A0000u; // 801DD0E0
  c->r[5]=0u+0x000D0000u; // 801DD0E4
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 801DD0E8
  c->r[4]=c->r[4]+0xFFFFFEBCu; // 801DD0EC
  c->r[0]=cntlz(c->r[0]); // 801DD0F0
  c->r[3]=c->r[5]+0x00000004u; // 801DD0F4
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 801DD0F8
  c->lr=0x801DD100u; f_801CD9F0(c); // 801DD0FC
L_801DD100:;
  c->r[3]=0u+0x80480000u; // 801DD100
  c->r[3]=c->r[3]+0x000034D8u; // 801DD104
  c->r[3]=R8(c->r[3]+0x00001978u); // 801DD108
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 801DD10C
  c->r[0]=cntlz(c->r[0]); // 801DD110
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 801DD114
  c->lr=0x801DD11Cu; f_801E24FC(c); // 801DD118
L_801DD11C:;
  c->r[4]=0u+0x80480000u; // 801DD11C
  c->r[4]=c->r[4]+0x000034D8u; // 801DD120
  c->r[0]=R8(c->r[4]+0x0000197Cu); // 801DD124
  cmps(c,0,(int32_t)c->r[0],0); // 801DD128
  if (crb(c,2)) { goto L_801DD140; } // 801DD12C
  c->r[0]=0u+0x00000000u; // 801DD130
  c->r[3]=R8(c->r[4]+0x00000020u); // 801DD134
  W8(c->r[4]+0x0000197Cu,c->r[0]); // 801DD138
  c->lr=0x801DD140u; f_801E1F88(c); // 801DD13C
L_801DD140:;
  cmps(c,0,(int32_t)c->r[29],0); // 801DD140
  if (crb(c,2)) { goto L_801DD2B0; } // 801DD144
  cmpu(c,0,c->r[29],0x00000005u); // 801DD148
  if (crb(c,2)) { goto L_801DD19C; } // 801DD14C
  cmpu(c,0,c->r[29],0x00000006u); // 801DD150
  if (crb(c,2)) { goto L_801DD19C; } // 801DD154
  cmpu(c,0,c->r[29],0x0000000Eu); // 801DD158
  if (crb(c,2)) { goto L_801DD19C; } // 801DD15C
  cmpu(c,0,c->r[29],0x00000018u); // 801DD160
  if (crb(c,2)) { goto L_801DD19C; } // 801DD164
  cmpu(c,0,c->r[29],0x00000026u); // 801DD168
  if (crb(c,2)) { goto L_801DD19C; } // 801DD16C
  cmpu(c,0,c->r[29],0x00000029u); // 801DD170
  if (crb(c,2)) { goto L_801DD19C; } // 801DD174
  cmpu(c,0,c->r[29],0x00000025u); // 801DD178
  if (crb(c,2)) { goto L_801DD19C; } // 801DD17C
  cmpu(c,0,c->r[29],0x00000017u); // 801DD180
  if (crb(c,2)) { goto L_801DD19C; } // 801DD184
  cmpu(c,0,c->r[29],0x00000022u); // 801DD188
  if (crb(c,2)) { goto L_801DD19C; } // 801DD18C
  c->r[0]=R8(c->r[31]+0x00000081u); // 801DD190
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801DD194
  if (crb(c,2)) { goto L_801DD228; } // 801DD198
L_801DD19C:;
  c->r[3]=R8(c->r[31]+0x00000081u); // 801DD19C
  c->r[0]=0u+0xFFFFFFAFu; // 801DD1A0
  c->r[28]=0u+0x80480000u; // 801DD1A4
  c->r[0]=c->r[3]&c->r[0]; // 801DD1A8
  W8(c->r[31]+0x00000081u,c->r[0]); // 801DD1AC
  c->r[28]=c->r[28]+0x000034D8u; // 801DD1B0
  c->r[0]=R8(c->r[31]+0x00000076u); // 801DD1B4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 801DD1B8
  W8(c->r[31]+0x00000076u,c->r[0]); // 801DD1BC
  c->r[0]=R32(c->r[28]+0x0000194Cu); // 801DD1C0
  cmps(c,0,(int32_t)c->r[0],0); // 801DD1C4
  if (crb(c,2)) { goto L_801DD1E0; } // 801DD1C8
  c->r[3]=c->r[28]+0x0000193Cu; // 801DD1CC
  c->lr=0x801DD1D4u; f_801CE050(c); // 801DD1D0
  c->r[0]=0u+0x00000000u; // 801DD1D4
  c->r[29]=0u+0x0000000Eu; // 801DD1D8
  W32(c->r[28]+0x0000194Cu,c->r[0]); // 801DD1DC
L_801DD1E0:;
  c->r[3]=0u+0x80480000u; // 801DD1E0
  c->r[3]=c->r[3]+0x000034D8u; // 801DD1E4
  c->r[0]=R8(c->r[3]+0x000027BFu); // 801DD1E8
  cmpu(c,0,c->r[0],0x0000000Eu); // 801DD1EC
  if (!crb(c,2)) { goto L_801DD1F8; } // 801DD1F0
  c->r[29]=0u+0x0000000Eu; // 801DD1F4
L_801DD1F8:;
  c->r[3]=0u+0x80480000u; // 801DD1F8
  c->r[3]=c->r[3]+0x000034D8u; // 801DD1FC
  c->r[12]=R32(c->r[3]+0x0000191Cu); // 801DD200
  cmps(c,0,(int32_t)c->r[12],0); // 801DD204
  if (crb(c,2)) { goto L_801DD464; } // 801DD208
  c->r[6]=c->r[29]|c->r[29]; // 801DD20C
  c->r[3]=c->r[31]+0x0000001Cu; // 801DD210
  c->r[4]=c->r[31]+0x00000022u; // 801DD214
  c->r[5]=c->r[31]+0x00000035u; // 801DD218
  c->ctr=c->r[12]; // 801DD21C
  if (true) { c->lr=0x801DD224u; dispatch(c,c->ctr); } // 801DD220
  goto L_801DD464; // 801DD224
L_801DD228:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 801DD228
  cmps(c,0,(int32_t)c->r[0],0); // 801DD22C
  if (crb(c,2)) { goto L_801DD464; } // 801DD230
  c->r[0]=R8(c->r[31]+0x00000080u); // 801DD234
  cmps(c,0,(int32_t)c->r[0],0); // 801DD238
  if (crb(c,2)) { goto L_801DD260; } // 801DD23C
  c->r[3]=R32(c->r[31]+0x00000000u); // 801DD240
  cmps(c,0,(int32_t)c->r[3],0); // 801DD244
  if (crb(c,2)) { goto L_801DD260; } // 801DD248
  c->r[0]=R32(c->r[3]+0x00000000u); // 801DD24C
  cmpu(c,0,c->r[0],0x00000003u); // 801DD250
  if (!crb(c,2)) { goto L_801DD260; } // 801DD254
  c->r[0]=0u+0x00000000u; // 801DD258
  W32(c->r[3]+0x00000004u,c->r[0]); // 801DD25C
L_801DD260:;
  cmpu(c,0,c->r[29],0x00000008u); // 801DD260
  if (crb(c,2)) { goto L_801DD278; } // 801DD264
  cmpu(c,0,c->r[29],0x0000001Fu); // 801DD268
  if (crb(c,2)) { goto L_801DD278; } // 801DD26C
  cmpu(c,0,c->r[29],0x00000004u); // 801DD270
  if (!crb(c,2)) { goto L_801DD294; } // 801DD274
L_801DD278:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 801DD278
  c->r[3]=c->r[31]+0x0000001Cu; // 801DD27C
  c->r[4]=R32(c->r[31]+0x00000008u); // 801DD280
  c->r[5]=0u+0x00000008u; // 801DD284
  c->ctr=c->r[12]; // 801DD288
  if (true) { c->lr=0x801DD290u; dispatch(c,c->ctr); } // 801DD28C
  goto L_801DD464; // 801DD290
L_801DD294:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 801DD294
  c->r[3]=c->r[31]+0x0000001Cu; // 801DD298
  c->r[4]=R32(c->r[31]+0x00000008u); // 801DD29C
  c->r[5]=0u+0x0000000Au; // 801DD2A0
  c->ctr=c->r[12]; // 801DD2A4
  if (true) { c->lr=0x801DD2ACu; dispatch(c,c->ctr); } // 801DD2A8
  goto L_801DD464; // 801DD2AC
L_801DD2B0:;
  c->r[0]=R8(c->r[31]+0x00000081u); // 801DD2B0
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801DD2B4
  if (crb(c,2)) { goto L_801DD390; } // 801DD2B8
  c->r[0]=R8(c->r[31]+0x00000082u); // 801DD2BC
  cmps(c,0,(int32_t)c->r[0],0); // 801DD2C0
  if (crb(c,2)) { goto L_801DD390; } // 801DD2C4
  c->r[0]=0u+0x00000000u; // 801DD2C8
  c->r[3]=0u+0x80480000u; // 801DD2CC
  W8(c->r[31]+0x00000082u,c->r[0]); // 801DD2D0
  c->r[3]=c->r[3]+0x000034D8u; // 801DD2D4
  c->r[12]=R32(c->r[3]+0x00001914u); // 801DD2D8
  cmps(c,0,(int32_t)c->r[12],0); // 801DD2DC
  if (crb(c,2)) { goto L_801DD300; } // 801DD2E0
  c->r[3]=c->r[31]+0x0000001Cu; // 801DD2E4
  c->r[4]=c->r[31]+0x00000022u; // 801DD2E8
  c->r[5]=c->r[31]+0x00000035u; // 801DD2EC
  c->r[6]=c->r[31]+0x00000025u; // 801DD2F0
  c->r[7]=R8(c->r[31]+0x00000083u); // 801DD2F4
  c->ctr=c->r[12]; // 801DD2F8
  if (true) { c->lr=0x801DD300u; dispatch(c,c->ctr); } // 801DD2FC
L_801DD300:;
  c->r[29]=0u+0x80480000u; // 801DD300
  c->r[30]=0u+0x00000000u; // 801DD304
  c->r[29]=c->r[29]+0x000034D8u; // 801DD308
L_801DD30C:;
  c->r[12]=R32(c->r[29]+0x00001924u); // 801DD30C
  cmps(c,0,(int32_t)c->r[12],0); // 801DD310
  if (crb(c,2)) { goto L_801DD334; } // 801DD314
  c->r[3]=c->r[31]+0x0000001Cu; // 801DD318
  c->r[4]=c->r[31]+0x00000022u; // 801DD31C
  c->r[5]=c->r[31]+0x00000035u; // 801DD320
  c->r[6]=c->r[31]+0x00000025u; // 801DD324
  c->r[7]=R8(c->r[31]+0x00000083u); // 801DD328
  c->ctr=c->r[12]; // 801DD32C
  if (true) { c->lr=0x801DD334u; dispatch(c,c->ctr); } // 801DD330
L_801DD334:;
  c->r[30]=c->r[30]+0x00000001u; // 801DD334
  c->r[29]=c->r[29]+0x00000004u; // 801DD338
  cmps(c,0,(int32_t)c->r[30],2); // 801DD33C
  if (crb(c,0)) { IRQCHK(c); goto L_801DD30C; } // 801DD340
  c->r[3]=0u+0x80480000u; // 801DD344
  c->r[3]=c->r[3]+0x000034D8u; // 801DD348
  c->r[12]=R32(c->r[3]+0x0000191Cu); // 801DD34C
  cmps(c,0,(int32_t)c->r[12],0); // 801DD350
  if (crb(c,2)) { goto L_801DD370; } // 801DD354
  c->r[3]=c->r[31]+0x0000001Cu; // 801DD358
  c->r[4]=c->r[31]+0x00000022u; // 801DD35C
  c->r[5]=c->r[31]+0x00000035u; // 801DD360
  c->r[6]=0u+0x00000000u; // 801DD364
  c->ctr=c->r[12]; // 801DD368
  if (true) { c->lr=0x801DD370u; dispatch(c,c->ctr); } // 801DD36C
L_801DD370:;
  c->r[5]=R8(c->r[31]+0x00000081u); // 801DD370
  c->r[0]=0u+0xFFFFFFAFu; // 801DD374
  c->r[3]=c->r[28]|c->r[28]; // 801DD378
  c->r[4]=0u+0x00000013u; // 801DD37C
  c->r[0]=c->r[5]&c->r[0]; // 801DD380
  W8(c->r[31]+0x00000081u,c->r[0]); // 801DD384
  c->lr=0x801DD38Cu; f_801E0B94(c); // 801DD388
  goto L_801DD464; // 801DD38C
L_801DD390:;
  W16(c->r[31]+0x00000018u,c->r[28]); // 801DD390
  cmps(c,0,(int32_t)c->r[30],0); // 801DD394
  c->r[0]=R8(c->r[31]+0x00000076u); // 801DD398
  c->r[0]=rotl(c->r[0],0)&0x000000F8u; // 801DD39C
  W8(c->r[31]+0x00000076u,c->r[0]); // 801DD3A0
  if (crb(c,2)) { goto L_801DD3B4; } // 801DD3A4
  c->r[0]=R8(c->r[31]+0x00000076u); // 801DD3A8
  c->r[0]=c->r[0]|0x00000006u; // 801DD3AC
  W8(c->r[31]+0x00000076u,c->r[0]); // 801DD3B0
L_801DD3B4:;
  c->r[3]=0u+0x80480000u; // 801DD3B4
  c->r[3]=c->r[3]+0x000034D8u; // 801DD3B8
  c->r[0]=R8(c->r[3]+0x00001978u); // 801DD3BC
  cmpu(c,0,c->r[0],0x00000003u); // 801DD3C0
  if (!crb(c,2)) { goto L_801DD3D4; } // 801DD3C4
  c->r[0]=R8(c->r[31]+0x00000076u); // 801DD3C8
  c->r[0]=c->r[0]|0x00000002u; // 801DD3CC
  W8(c->r[31]+0x00000076u,c->r[0]); // 801DD3D0
L_801DD3D4:;
  c->r[0]=0u+0x00000000u; // 801DD3D4
  W8(c->r[31]+0x00000084u,c->r[0]); // 801DD3D8
  c->r[0]=R8(c->r[31]+0x00000076u); // 801DD3DC
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801DD3E0
  if (crb(c,2)) { goto L_801DD3F4; } // 801DD3E4
  c->r[0]=R8(c->r[31]+0x00000080u); // 801DD3E8
  cmps(c,0,(int32_t)c->r[0],0); // 801DD3EC
  if (crb(c,2)) { goto L_801DD464; } // 801DD3F0
L_801DD3F4:;
  c->r[3]=c->r[31]|c->r[31]; // 801DD3F4
  c->lr=0x801DD3FCu; f_801DDD70(c); // 801DD3F8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801DD3FC
  c->r[4]=c->r[3]|c->r[3]; // 801DD400
  cmpu(c,0,c->r[0],0x00000001u); // 801DD404
  if (crb(c,2)) { goto L_801DD464; } // 801DD408
  c->r[0]=R32(c->r[31]+0x00000004u); // 801DD40C
  cmps(c,0,(int32_t)c->r[0],0); // 801DD410
  if (crb(c,2)) { goto L_801DD464; } // 801DD414
  c->r[0]=R8(c->r[31]+0x00000080u); // 801DD418
  cmps(c,0,(int32_t)c->r[0],0); // 801DD41C
  if (crb(c,2)) { goto L_801DD444; } // 801DD420
  c->r[3]=R32(c->r[31]+0x00000000u); // 801DD424
  cmps(c,0,(int32_t)c->r[3],0); // 801DD428
  if (crb(c,2)) { goto L_801DD444; } // 801DD42C
  c->r[0]=R32(c->r[3]+0x00000000u); // 801DD430
  cmpu(c,0,c->r[0],0x00000003u); // 801DD434
  if (!crb(c,2)) { goto L_801DD444; } // 801DD438
  c->r[0]=0u+0x00000000u; // 801DD43C
  W32(c->r[3]+0x00000004u,c->r[0]); // 801DD440
L_801DD444:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 801DD444
  c->r[5]=rotl(c->r[4],0)&0x000000FFu; // 801DD448
  c->r[3]=c->r[31]+0x0000001Cu; // 801DD44C
  c->r[4]=R32(c->r[31]+0x00000008u); // 801DD450
  c->ctr=c->r[12]; // 801DD454
  if (true) { c->lr=0x801DD45Cu; dispatch(c,c->ctr); } // 801DD458
  c->r[0]=0u+0x00000000u; // 801DD45C
  W32(c->r[31]+0x00000004u,c->r[0]); // 801DD460
L_801DD464:;
  c->r[11]=c->r[1]+0x00000020u; // 801DD464
  c->lr=0x801DD46Cu; f_800C2E98(c); // 801DD468
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DD46C
  c->lr=c->r[0]; // 801DD470
  c->r[1]=c->r[1]+0x00000020u; // 801DD474
  return; // 801DD478
}

// btm_sec_disconnect
void f_801DD47C(Ctx* __restrict c) {
  trace_call(0x801DD47Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DD47C
  c->r[0]=c->lr; // 801DD480
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DD484
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DD488
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DD48C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DD490
  c->r[29]=c->r[4]|c->r[4]; // 801DD494
  W32(c->r[1]+0x00000010u,c->r[28]); // 801DD498
  c->r[28]=c->r[3]|c->r[3]; // 801DD49C
  c->lr=0x801DD4A4u; f_801D6068(c); // 801DD4A0
  cmps(c,0,(int32_t)c->r[3],0); // 801DD4A4
  c->r[31]=c->r[3]|c->r[3]; // 801DD4A8
  if (!crb(c,2)) { goto L_801DD4B8; } // 801DD4AC
  c->r[3]=0u+0x00000005u; // 801DD4B0
  goto L_801DD518; // 801DD4B4
L_801DD4B8:;
  c->r[0]=R8(c->r[3]+0x00000081u); // 801DD4B8
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801DD4BC
  if (crb(c,2)) { goto L_801DD4D8; } // 801DD4C0
  c->r[4]=0u+0x80480000u; // 801DD4C4
  c->r[3]=0u+0x00000000u; // 801DD4C8
  c->r[4]=c->r[4]+0x000034D8u; // 801DD4CC
  W8(c->r[4]+0x0000197Eu,c->r[29]); // 801DD4D0
  goto L_801DD518; // 801DD4D4
L_801DD4D8:;
  c->r[30]=R8(c->r[3]+0x0000007Fu); // 801DD4D8
  cmpu(c,0,c->r[30],0x00000005u); // 801DD4DC
  if (!crb(c,2)) { goto L_801DD4EC; } // 801DD4E0
  c->r[3]=0u+0x00000001u; // 801DD4E4
  goto L_801DD518; // 801DD4E8
L_801DD4EC:;
  c->r[0]=0u+0x00000005u; // 801DD4EC
  c->r[4]=c->r[29]|c->r[29]; // 801DD4F0
  W8(c->r[3]+0x0000007Fu,c->r[0]); // 801DD4F4
  c->r[3]=c->r[28]|c->r[28]; // 801DD4F8
  c->lr=0x801DD500u; f_801E0B94(c); // 801DD4FC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801DD500
  if (crb(c,2)) { goto L_801DD510; } // 801DD504
  c->r[3]=0u+0x00000001u; // 801DD508
  goto L_801DD518; // 801DD50C
L_801DD510:;
  W8(c->r[31]+0x0000007Fu,c->r[30]); // 801DD510
  c->r[3]=0u+0x00000003u; // 801DD514
L_801DD518:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DD518
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DD51C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DD520
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DD524
  c->r[28]=R32(c->r[1]+0x00000010u); // 801DD528
  c->lr=c->r[0]; // 801DD52C
  c->r[1]=c->r[1]+0x00000020u; // 801DD530
  return; // 801DD534
}

// btm_sec_disconnected
void f_801DD538(Ctx* __restrict c) {
  trace_call(0x801DD538u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DD538
  c->r[0]=c->lr; // 801DD53C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DD540
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DD544
  c->r[31]=c->r[4]|c->r[4]; // 801DD548
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DD54C
  c->lr=0x801DD554u; f_801D6068(c); // 801DD550
  cmps(c,0,(int32_t)c->r[3],0); // 801DD554
  c->r[30]=c->r[3]|c->r[3]; // 801DD558
  if (crb(c,2)) { goto L_801DD65C; } // 801DD55C
  c->r[0]=R8(c->r[3]+0x00000081u); // 801DD560
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801DD564
  if (crb(c,2)) { goto L_801DD5BC; } // 801DD568
  c->r[4]=0u+0x80480000u; // 801DD56C
  c->r[4]=c->r[4]+0x000034D8u; // 801DD570
  c->r[12]=R32(c->r[4]+0x0000191Cu); // 801DD574
  cmps(c,0,(int32_t)c->r[12],0); // 801DD578
  if (crb(c,2)) { goto L_801DD5BC; } // 801DD57C
  cmpu(c,0,c->r[31],0x00000017u); // 801DD580
  if (!crb(c,2)) { goto L_801DD5A4; } // 801DD584
  c->r[4]=c->r[3]+0x00000022u; // 801DD588
  c->r[5]=c->r[3]+0x00000035u; // 801DD58C
  c->r[6]=0u+0x00000017u; // 801DD590
  c->ctr=c->r[12]; // 801DD594
  c->r[3]=c->r[3]+0x0000001Cu; // 801DD598
  if (true) { c->lr=0x801DD5A0u; dispatch(c,c->ctr); } // 801DD59C
  goto L_801DD5BC; // 801DD5A0
L_801DD5A4:;
  c->r[4]=c->r[3]+0x00000022u; // 801DD5A4
  c->r[5]=c->r[3]+0x00000035u; // 801DD5A8
  c->r[6]=0u+0x00000005u; // 801DD5AC
  c->ctr=c->r[12]; // 801DD5B0
  c->r[3]=c->r[3]+0x0000001Cu; // 801DD5B4
  if (true) { c->lr=0x801DD5BCu; dispatch(c,c->ctr); } // 801DD5B8
L_801DD5BC:;
  c->r[31]=0u+0x80480000u; // 801DD5BC
  c->r[31]=c->r[31]+0x000034D8u; // 801DD5C0
  c->r[0]=R32(c->r[31]+0x0000194Cu); // 801DD5C4
  cmps(c,0,(int32_t)c->r[0],0); // 801DD5C8
  if (crb(c,2)) { goto L_801DD62C; } // 801DD5CC
  c->r[3]=c->r[31]+0x00001954u; // 801DD5D0
  c->r[4]=c->r[30]+0x0000001Cu; // 801DD5D4
  c->r[5]=0u+0x00000006u; // 801DD5D8
  c->lr=0x801DD5E0u; f_800C6228(c); // 801DD5DC
  cmps(c,0,(int32_t)c->r[3],0); // 801DD5E0
  if (!crb(c,2)) { goto L_801DD62C; } // 801DD5E4
  c->r[3]=c->r[31]+0x0000193Cu; // 801DD5E8
  c->lr=0x801DD5F0u; f_801CE050(c); // 801DD5EC
  c->r[0]=0u+0x00000000u; // 801DD5F0
  c->r[3]=c->r[31]+0x00001954u; // 801DD5F4
  W32(c->r[31]+0x0000194Cu,c->r[0]); // 801DD5F8
  c->r[4]=0u+0x000000FFu; // 801DD5FC
  c->r[5]=0u+0x00000006u; // 801DD600
  c->lr=0x801DD608u; f_80004350(c); // 801DD604
  c->r[12]=R32(c->r[31]+0x0000191Cu); // 801DD608
  cmps(c,0,(int32_t)c->r[12],0); // 801DD60C
  if (crb(c,2)) { goto L_801DD62C; } // 801DD610
  c->r[3]=c->r[30]+0x0000001Cu; // 801DD614
  c->r[4]=c->r[30]+0x00000022u; // 801DD618
  c->r[5]=c->r[30]+0x00000035u; // 801DD61C
  c->r[6]=0u+0x0000000Eu; // 801DD620
  c->ctr=c->r[12]; // 801DD624
  if (true) { c->lr=0x801DD62Cu; dispatch(c,c->ctr); } // 801DD628
L_801DD62C:;
  c->r[4]=0u+0x00010000u; // 801DD62C
  c->r[3]=0u+0x00000000u; // 801DD630
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801DD634
  W16(c->r[30]+0x00000018u,c->r[0]); // 801DD638
  W8(c->r[30]+0x0000007Fu,c->r[3]); // 801DD63C
  c->r[0]=R8(c->r[30]+0x00000076u); // 801DD640
  c->r[0]=rotl(c->r[0],0)&0x000000F8u; // 801DD644
  W8(c->r[30]+0x00000076u,c->r[0]); // 801DD648
  c->r[0]=R8(c->r[30]+0x00000081u); // 801DD64C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; // 801DD650
  W8(c->r[30]+0x00000081u,c->r[0]); // 801DD654
  W32(c->r[30]+0x00000004u,c->r[3]); // 801DD658
L_801DD65C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DD65C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DD660
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DD664
  c->lr=c->r[0]; // 801DD668
  c->r[1]=c->r[1]+0x00000010u; // 801DD66C
  return; // 801DD670
}

// btm_sec_link_key_notification
void f_801DD674(Ctx* __restrict c) {
  trace_call(0x801DD674u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DD674
  c->r[0]=c->lr; // 801DD678
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DD67C
  c->r[11]=c->r[1]+0x00000020u; // 801DD680
  c->lr=0x801DD688u; f_800C2E4C(c); // 801DD684
  c->r[29]=c->r[3]|c->r[3]; // 801DD688
  c->r[30]=c->r[4]|c->r[4]; // 801DD68C
  c->r[27]=c->r[5]|c->r[5]; // 801DD690
  c->lr=0x801DD698u; f_801D6120(c); // 801DD694
  cmps(c,0,(int32_t)c->r[3],0); // 801DD698
  c->r[31]=c->r[3]|c->r[3]; // 801DD69C
  if (!crb(c,2)) { goto L_801DD6B8; } // 801DD6A0
  c->r[3]=c->r[29]|c->r[29]; // 801DD6A4
  c->lr=0x801DD6ACu; f_801D5F48(c); // 801DD6A8
  cmps(c,0,(int32_t)c->r[3],0); // 801DD6AC
  c->r[31]=c->r[3]|c->r[3]; // 801DD6B0
  if (crb(c,2)) { goto L_801DD808; } // 801DD6B4
L_801DD6B8:;
  c->r[3]=0u+0x80480000u; // 801DD6B8
  c->r[3]=c->r[3]+0x000034D8u; // 801DD6BC
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801DD6C0
  cmpu(c,0,c->r[0],0x00000004u); // 801DD6C4
  if (crb(c,0)) { goto L_801DD6F8; } // 801DD6C8
  c->r[3]=0u+0x000D0000u; // 801DD6CC
  c->r[4]=0u+0x803A0000u; // 801DD6D0
  c->r[5]=R8(c->r[29]+0x00000000u); // 801DD6D4
  c->r[3]=c->r[3]+0x00000003u; // 801DD6D8
  c->r[6]=R8(c->r[29]+0x00000001u); // 801DD6DC
  c->r[4]=c->r[4]+0x000002A8u; // 801DD6E0
  c->r[7]=R8(c->r[29]+0x00000002u); // 801DD6E4
  c->r[8]=R8(c->r[29]+0x00000003u); // 801DD6E8
  c->r[9]=R8(c->r[29]+0x00000004u); // 801DD6EC
  c->r[10]=R8(c->r[29]+0x00000005u); // 801DD6F0
  c->lr=0x801DD6F8u; f_801CDA90(c); // 801DD6F4
L_801DD6F8:;
  c->r[3]=0u+0x80480000u; // 801DD6F8
  c->r[3]=c->r[3]+0x000034D8u; // 801DD6FC
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801DD700
  cmpu(c,0,c->r[0],0x00000004u); // 801DD704
  if (crb(c,0)) { goto L_801DD724; } // 801DD708
  c->r[3]=0u+0x000D0000u; // 801DD70C
  c->r[4]=0u+0x803A0000u; // 801DD710
  c->r[5]=c->r[27]|c->r[27]; // 801DD714
  c->r[3]=c->r[3]+0x00000003u; // 801DD718
  c->r[4]=c->r[4]+0x000002ECu; // 801DD71C
  c->lr=0x801DD724u; f_801CD9F0(c); // 801DD720
L_801DD724:;
  c->r[3]=0u+0x80480000u; // 801DD724
  c->r[3]=c->r[3]+0x000034D8u; // 801DD728
  c->r[0]=R8(c->r[3]+0x00000636u); // 801DD72C
  cmpu(c,0,c->r[0],0x00000001u); // 801DD730
  if (!crb(c,0)) { goto L_801DD744; } // 801DD734
  c->r[0]=0u+0x000000FFu; // 801DD738
  W8(c->r[31]+0x00000083u,c->r[0]); // 801DD73C
  goto L_801DD748; // 801DD740
L_801DD744:;
  W8(c->r[31]+0x00000083u,c->r[27]); // 801DD744
L_801DD748:;
  c->r[0]=R8(c->r[31]+0x00000076u); // 801DD748
  c->r[4]=c->r[30]|c->r[30]; // 801DD74C
  c->r[3]=c->r[31]+0x00000025u; // 801DD750
  c->r[5]=0u+0x00000010u; // 801DD754
  c->r[0]=c->r[0]|0x00000010u; // 801DD758
  W8(c->r[31]+0x00000076u,c->r[0]); // 801DD75C
  c->lr=0x801DD764u; f_80004000(c); // 801DD760
  c->r[0]=R8(c->r[31]+0x00000076u); // 801DD764
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801DD768
  if (crb(c,2)) { goto L_801DD788; } // 801DD76C
  c->r[0]=R8(c->r[31]+0x00000081u); // 801DD770
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801DD774
  if (crb(c,2)) { goto L_801DD794; } // 801DD778
  c->r[0]=R8(c->r[31]+0x00000085u); // 801DD77C
  cmps(c,0,(int32_t)c->r[0],0); // 801DD780
  if (!crb(c,2)) { goto L_801DD794; } // 801DD784
L_801DD788:;
  c->r[0]=0u+0x00000001u; // 801DD788
  W8(c->r[31]+0x00000082u,c->r[0]); // 801DD78C
  goto L_801DD808; // 801DD790
L_801DD794:;
  c->r[3]=0u+0x80480000u; // 801DD794
  c->r[3]=c->r[3]+0x000034D8u; // 801DD798
  c->r[12]=R32(c->r[3]+0x00001914u); // 801DD79C
  cmps(c,0,(int32_t)c->r[12],0); // 801DD7A0
  if (crb(c,2)) { goto L_801DD7C4; } // 801DD7A4
  c->r[3]=c->r[29]|c->r[29]; // 801DD7A8
  c->r[6]=c->r[30]|c->r[30]; // 801DD7AC
  c->r[4]=c->r[31]+0x00000022u; // 801DD7B0
  c->r[5]=c->r[31]+0x00000035u; // 801DD7B4
  c->r[7]=R8(c->r[31]+0x00000083u); // 801DD7B8
  c->ctr=c->r[12]; // 801DD7BC
  if (true) { c->lr=0x801DD7C4u; dispatch(c,c->ctr); } // 801DD7C0
L_801DD7C4:;
  c->r[28]=0u+0x80480000u; // 801DD7C4
  c->r[27]=0u+0x00000000u; // 801DD7C8
  c->r[28]=c->r[28]+0x000034D8u; // 801DD7CC
L_801DD7D0:;
  c->r[12]=R32(c->r[28]+0x00001924u); // 801DD7D0
  cmps(c,0,(int32_t)c->r[12],0); // 801DD7D4
  if (crb(c,2)) { goto L_801DD7F8; } // 801DD7D8
  c->r[3]=c->r[29]|c->r[29]; // 801DD7DC
  c->r[6]=c->r[30]|c->r[30]; // 801DD7E0
  c->r[4]=c->r[31]+0x00000022u; // 801DD7E4
  c->r[5]=c->r[31]+0x00000035u; // 801DD7E8
  c->r[7]=R8(c->r[31]+0x00000083u); // 801DD7EC
  c->ctr=c->r[12]; // 801DD7F0
  if (true) { c->lr=0x801DD7F8u; dispatch(c,c->ctr); } // 801DD7F4
L_801DD7F8:;
  c->r[27]=c->r[27]+0x00000001u; // 801DD7F8
  c->r[28]=c->r[28]+0x00000004u; // 801DD7FC
  cmps(c,0,(int32_t)c->r[27],2); // 801DD800
  if (crb(c,0)) { IRQCHK(c); goto L_801DD7D0; } // 801DD804
L_801DD808:;
  c->r[11]=c->r[1]+0x00000020u; // 801DD808
  c->lr=0x801DD810u; f_800C2E98(c); // 801DD80C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DD810
  c->lr=c->r[0]; // 801DD814
  c->r[1]=c->r[1]+0x00000020u; // 801DD818
  return; // 801DD81C
}

// btm_sec_link_key_request
void f_801DD820(Ctx* __restrict c) {
  trace_call(0x801DD820u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DD820
  c->r[0]=c->lr; // 801DD824
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DD828
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DD82C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DD830
  c->r[30]=c->r[3]|c->r[3]; // 801DD834
  c->lr=0x801DD83Cu; f_801D6120(c); // 801DD838
  c->r[4]=0u+0x80480000u; // 801DD83C
  c->r[31]=c->r[3]|c->r[3]; // 801DD840
  c->r[4]=c->r[4]+0x000034D8u; // 801DD844
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801DD848
  cmpu(c,0,c->r[0],0x00000004u); // 801DD84C
  if (crb(c,0)) { goto L_801DD880; } // 801DD850
  c->r[3]=0u+0x000D0000u; // 801DD854
  c->r[4]=0u+0x803A0000u; // 801DD858
  c->r[5]=R8(c->r[30]+0x00000000u); // 801DD85C
  c->r[3]=c->r[3]+0x00000003u; // 801DD860
  c->r[6]=R8(c->r[30]+0x00000001u); // 801DD864
  c->r[4]=c->r[4]+0x00000318u; // 801DD868
  c->r[7]=R8(c->r[30]+0x00000002u); // 801DD86C
  c->r[8]=R8(c->r[30]+0x00000003u); // 801DD870
  c->r[9]=R8(c->r[30]+0x00000004u); // 801DD874
  c->r[10]=R8(c->r[30]+0x00000005u); // 801DD878
  c->lr=0x801DD880u; f_801CDA90(c); // 801DD87C
L_801DD880:;
  cmps(c,0,(int32_t)c->r[31],0); // 801DD880
  if (crb(c,2)) { goto L_801DD8A4; } // 801DD884
  c->r[0]=R8(c->r[31]+0x00000076u); // 801DD888
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801DD88C
  if (crb(c,2)) { goto L_801DD8A4; } // 801DD890
  c->r[3]=c->r[30]|c->r[30]; // 801DD894
  c->r[4]=c->r[31]+0x00000025u; // 801DD898
  c->lr=0x801DD8A0u; f_801E0D64(c); // 801DD89C
  goto L_801DD938; // 801DD8A0
L_801DD8A4:;
  cmps(c,0,(int32_t)c->r[31],0); // 801DD8A4
  if (!crb(c,2)) { goto L_801DD8B8; } // 801DD8A8
  c->r[3]=c->r[30]|c->r[30]; // 801DD8AC
  c->lr=0x801DD8B4u; f_801D5F48(c); // 801DD8B0
  c->r[31]=c->r[3]|c->r[3]; // 801DD8B4
L_801DD8B8:;
  c->r[0]=R8(c->r[31]+0x00000081u); // 801DD8B8
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801DD8BC
  if (!crb(c,2)) { goto L_801DD930; } // 801DD8C0
  c->r[3]=0u+0x80480000u; // 801DD8C4
  c->r[3]=c->r[3]+0x000034D8u; // 801DD8C8
  c->r[12]=R32(c->r[3]+0x00001918u); // 801DD8CC
  cmps(c,0,(int32_t)c->r[12],0); // 801DD8D0
  if (crb(c,2)) { goto L_801DD930; } // 801DD8D4
  cmps(c,0,(int32_t)c->r[31],0); // 801DD8D8
  if (crb(c,2)) { goto L_801DD908; } // 801DD8DC
  c->r[3]=c->r[30]|c->r[30]; // 801DD8E0
  c->r[4]=c->r[31]+0x00000025u; // 801DD8E4
  c->ctr=c->r[12]; // 801DD8E8
  if (true) { c->lr=0x801DD8F0u; dispatch(c,c->ctr); } // 801DD8EC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801DD8F0
  if (!crb(c,2)) { goto L_801DD930; } // 801DD8F4
  c->r[3]=c->r[30]|c->r[30]; // 801DD8F8
  c->r[4]=c->r[31]+0x00000025u; // 801DD8FC
  c->lr=0x801DD904u; f_801E0D64(c); // 801DD900
  goto L_801DD938; // 801DD904
L_801DD908:;
  c->r[3]=c->r[30]|c->r[30]; // 801DD908
  c->r[4]=c->r[1]+0x00000008u; // 801DD90C
  c->ctr=c->r[12]; // 801DD910
  if (true) { c->lr=0x801DD918u; dispatch(c,c->ctr); } // 801DD914
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801DD918
  if (!crb(c,2)) { goto L_801DD930; } // 801DD91C
  c->r[3]=c->r[30]|c->r[30]; // 801DD920
  c->r[4]=c->r[1]+0x00000008u; // 801DD924
  c->lr=0x801DD92Cu; f_801E0D64(c); // 801DD928
  goto L_801DD938; // 801DD92C
L_801DD930:;
  c->r[3]=c->r[30]|c->r[30]; // 801DD930
  c->lr=0x801DD938u; f_801E0F04(c); // 801DD934
L_801DD938:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DD938
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DD93C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DD940
  c->lr=c->r[0]; // 801DD944
  c->r[1]=c->r[1]+0x00000020u; // 801DD948
  return; // 801DD94C
}

// btm_sec_pin_code_request_timeout
void f_801DD950(Ctx* __restrict c) {
  trace_call(0x801DD950u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DD950
  c->r[0]=c->lr; // 801DD954
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DD958
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DD95C
  c->r[31]=0u+0x80480000u; // 801DD960
  c->r[31]=c->r[31]+0x000034D8u; // 801DD964
  c->r[0]=R8(c->r[31]+0x000027C0u); // 801DD968
  cmpu(c,0,c->r[0],0x00000004u); // 801DD96C
  if (crb(c,0)) { goto L_801DD988; } // 801DD970
  c->r[3]=0u+0x000D0000u; // 801DD974
  c->r[4]=0u+0x803A0000u; // 801DD978
  c->r[3]=c->r[3]+0x00000003u; // 801DD97C
  c->r[4]=c->r[4]+0x00000358u; // 801DD980
  c->lr=0x801DD988u; f_801CD9D0(c); // 801DD984
L_801DD988:;
  c->r[0]=0u+0x00000000u; // 801DD988
  c->r[3]=0u+0x80480000u; // 801DD98C
  c->r[3]=c->r[3]+0x000034D8u; // 801DD990
  W32(c->r[31]+0x0000194Cu,c->r[0]); // 801DD994
  c->r[3]=c->r[3]+0x00001954u; // 801DD998
  c->r[4]=0u+0x000000FFu; // 801DD99C
  c->r[5]=0u+0x00000006u; // 801DD9A0
  c->lr=0x801DD9A8u; f_80004350(c); // 801DD9A4
  c->r[3]=c->r[31]+0x000027B4u; // 801DD9A8
  c->lr=0x801DD9B0u; f_801E1188(c); // 801DD9AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DD9B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DD9B4
  c->lr=c->r[0]; // 801DD9B8
  c->r[1]=c->r[1]+0x00000010u; // 801DD9BC
  return; // 801DD9C0
}

// btm_sec_pin_code_request
void f_801DD9C4(Ctx* __restrict c) {
  trace_call(0x801DD9C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DD9C4
  c->r[0]=c->lr; // 801DD9C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DD9CC
  c->r[11]=c->r[1]+0x00000020u; // 801DD9D0
  c->lr=0x801DD9D8u; f_800C2E4C(c); // 801DD9D4
  c->r[29]=0u+0x80480000u; // 801DD9D8
  c->r[31]=0u+0x803A0000u; // 801DD9DC
  c->r[29]=c->r[29]+0x000034D8u; // 801DD9E0
  c->r[27]=c->r[3]|c->r[3]; // 801DD9E4
  c->r[0]=R8(c->r[29]+0x000027C0u); // 801DD9E8
  c->r[31]=c->r[31]+0xFFFFFBC0u; // 801DD9EC
  c->r[28]=0u+0x00000000u; // 801DD9F0
  c->r[30]=0u+0x00000000u; // 801DD9F4
  cmpu(c,0,c->r[0],0x00000004u); // 801DD9F8
  if (crb(c,0)) { goto L_801DDA28; } // 801DD9FC
  c->r[3]=0u+0x000D0000u; // 801DDA00
  c->r[5]=R8(c->r[27]+0x00000000u); // 801DDA04
  c->r[6]=R8(c->r[27]+0x00000001u); // 801DDA08
  c->r[3]=c->r[3]+0x00000003u; // 801DDA0C
  c->r[7]=R8(c->r[27]+0x00000002u); // 801DDA10
  c->r[4]=c->r[31]+0x000007BCu; // 801DDA14
  c->r[8]=R8(c->r[27]+0x00000003u); // 801DDA18
  c->r[9]=R8(c->r[27]+0x00000004u); // 801DDA1C
  c->r[10]=R8(c->r[27]+0x00000005u); // 801DDA20
  c->lr=0x801DDA28u; f_801CDA90(c); // 801DDA24
L_801DDA28:;
  c->r[0]=R8(c->r[29]+0x00001979u); // 801DDA28
  cmps(c,0,(int32_t)c->r[0],0); // 801DDA2C
  if (!crb(c,2)) { goto L_801DDB14; } // 801DDA30
  c->r[0]=R8(c->r[29]+0x00000020u); // 801DDA34
  cmpu(c,0,c->r[0],0x00000001u); // 801DDA38
  if (!crb(c,2)) { goto L_801DDB14; } // 801DDA3C
  c->r[3]=c->r[27]|c->r[27]; // 801DDA40
  c->lr=0x801DDA48u; f_801D6120(c); // 801DDA44
  cmps(c,0,(int32_t)c->r[3],0); // 801DDA48
  if (!crb(c,2)) { goto L_801DDAEC; } // 801DDA4C
  c->r[3]=0u+0x80480000u; // 801DDA50
  c->r[0]=0u+0x00000002u; // 801DDA54
  c->r[3]=c->r[3]+0x000034D8u; // 801DDA58
  c->r[3]=c->r[3]+0x00001F30u; // 801DDA5C
  c->ctr=c->r[0]; // 801DDA60
L_801DDA64:;
  c->r[0]=R8(c->r[3]+0x00000076u); // 801DDA64
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801DDA68
  if (crb(c,2)) { goto L_801DDAEC; } // 801DDA6C
  c->r[0]=R8(c->r[3]+0x000000FEu); // 801DDA70
  c->r[30]=c->r[30]+0x00000001u; // 801DDA74
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801DDA78
  if (crb(c,2)) { goto L_801DDAEC; } // 801DDA7C
  c->r[0]=R8(c->r[3]+0x00000186u); // 801DDA80
  c->r[30]=c->r[30]+0x00000001u; // 801DDA84
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801DDA88
  if (crb(c,2)) { goto L_801DDAEC; } // 801DDA8C
  c->r[0]=R8(c->r[3]+0x0000020Eu); // 801DDA90
  c->r[30]=c->r[30]+0x00000001u; // 801DDA94
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801DDA98
  if (crb(c,2)) { goto L_801DDAEC; } // 801DDA9C
  c->r[0]=R8(c->r[3]+0x00000296u); // 801DDAA0
  c->r[30]=c->r[30]+0x00000001u; // 801DDAA4
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801DDAA8
  if (crb(c,2)) { goto L_801DDAEC; } // 801DDAAC
  c->r[0]=R8(c->r[3]+0x0000031Eu); // 801DDAB0
  c->r[30]=c->r[30]+0x00000001u; // 801DDAB4
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801DDAB8
  if (crb(c,2)) { goto L_801DDAEC; } // 801DDABC
  c->r[0]=R8(c->r[3]+0x000003A6u); // 801DDAC0
  c->r[30]=c->r[30]+0x00000001u; // 801DDAC4
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801DDAC8
  if (crb(c,2)) { goto L_801DDAEC; } // 801DDACC
  c->r[0]=R8(c->r[3]+0x0000042Eu); // 801DDAD0
  c->r[30]=c->r[30]+0x00000001u; // 801DDAD4
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801DDAD8
  if (crb(c,2)) { goto L_801DDAEC; } // 801DDADC
  c->r[30]=c->r[30]+0x00000001u; // 801DDAE0
  c->r[3]=c->r[3]+0x00000440u; // 801DDAE4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DDA64; } // 801DDAE8
L_801DDAEC:;
  cmps(c,0,(int32_t)c->r[30],16); // 801DDAEC
  if (crb(c,0)) { goto L_801DDB00; } // 801DDAF0
  c->r[3]=c->r[27]|c->r[27]; // 801DDAF4
  c->lr=0x801DDAFCu; f_801E1188(c); // 801DDAF8
  goto L_801DDD08; // 801DDAFC
L_801DDB00:;
  c->r[4]=R8(c->r[29]+0x00000021u); // 801DDB00
  c->r[3]=c->r[27]|c->r[27]; // 801DDB04
  c->r[5]=c->r[29]+0x00000022u; // 801DDB08
  c->lr=0x801DDB10u; f_801E0FA4(c); // 801DDB0C
  goto L_801DDD08; // 801DDB10
L_801DDB14:;
  c->r[3]=c->r[27]|c->r[27]; // 801DDB14
  c->lr=0x801DDB1Cu; f_801D6120(c); // 801DDB18
  cmps(c,0,(int32_t)c->r[3],0); // 801DDB1C
  c->r[30]=c->r[3]|c->r[3]; // 801DDB20
  if (!crb(c,2)) { goto L_801DDB34; } // 801DDB24
  c->r[3]=c->r[27]|c->r[27]; // 801DDB28
  c->lr=0x801DDB30u; f_801D5F48(c); // 801DDB2C
  c->r[30]=c->r[3]|c->r[3]; // 801DDB30
L_801DDB34:;
  c->r[3]=0u+0x80480000u; // 801DDB34
  c->r[4]=c->r[27]|c->r[27]; // 801DDB38
  c->r[3]=c->r[3]+0x000034D8u; // 801DDB3C
  c->r[5]=0u+0x00000006u; // 801DDB40
  c->r[3]=c->r[3]+0x00001954u; // 801DDB44
  c->lr=0x801DDB4Cu; f_80004000(c); // 801DDB48
  cmps(c,0,(int32_t)c->r[30],0); // 801DDB4C
  if (crb(c,2)) { goto L_801DDCC4; } // 801DDB50
  c->r[3]=c->r[27]|c->r[27]; // 801DDB54
  c->r[4]=c->r[29]+0x000027B4u; // 801DDB58
  c->r[5]=0u+0x00000006u; // 801DDB5C
  c->lr=0x801DDB64u; f_800C6228(c); // 801DDB60
  cmps(c,0,(int32_t)c->r[3],0); // 801DDB64
  if (!crb(c,2)) { goto L_801DDB7C; } // 801DDB68
  c->r[3]=c->r[30]+0x00000022u; // 801DDB6C
  c->r[4]=c->r[29]+0x000027BAu; // 801DDB70
  c->r[5]=0u+0x00000003u; // 801DDB74
  c->lr=0x801DDB7Cu; f_80004000(c); // 801DDB78
L_801DDB7C:;
  c->r[0]=R8(c->r[30]+0x00000081u); // 801DDB7C
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801DDB80
  if (crb(c,2)) { goto L_801DDC24; } // 801DDB84
  c->r[3]=0u+0x80480000u; // 801DDB88
  c->r[3]=c->r[3]+0x000034D8u; // 801DDB8C
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801DDB90
  cmpu(c,0,c->r[0],0x00000004u); // 801DDB94
  if (crb(c,0)) { goto L_801DDBAC; } // 801DDB98
  c->r[3]=0u+0x000D0000u; // 801DDB9C
  c->r[4]=c->r[31]+0x000007FCu; // 801DDBA0
  c->r[3]=c->r[3]+0x00000003u; // 801DDBA4
  c->lr=0x801DDBACu; f_801CD9D0(c); // 801DDBA8
L_801DDBAC:;
  c->r[4]=R8(c->r[29]+0x0000197Fu); // 801DDBAC
  c->r[3]=c->r[27]|c->r[27]; // 801DDBB0
  c->r[5]=c->r[29]+0x00001980u; // 801DDBB4
  c->lr=0x801DDBBCu; f_801E0FA4(c); // 801DDBB8
  c->r[4]=0u+0x80480000u; // 801DDBBC
  c->r[4]=c->r[4]+0x000034D8u; // 801DDBC0
  c->r[0]=R8(c->r[4]+0x0000197Bu); // 801DDBC4
  cmps(c,0,(int32_t)c->r[0],0); // 801DDBC8
  if (crb(c,2)) { goto L_801DDCC8; } // 801DDBCC
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801DDBD0
  c->r[3]=0u+0x00000000u; // 801DDBD4
  W8(c->r[4]+0x0000197Bu,c->r[3]); // 801DDBD8
  cmpu(c,0,c->r[0],0x00000005u); // 801DDBDC
  if (crb(c,0)) { goto L_801DDC04; } // 801DDBE0
  c->r[5]=R8(c->r[4]+0x00001978u); // 801DDBE4
  c->r[3]=0u+0x000D0000u; // 801DDBE8
  c->r[3]=c->r[3]+0x00000004u; // 801DDBEC
  c->r[4]=c->r[31]+0x0000082Cu; // 801DDBF0
  c->r[0]=c->r[5]+0xFFFFFFFDu; // 801DDBF4
  c->r[0]=cntlz(c->r[0]); // 801DDBF8
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 801DDBFC
  c->lr=0x801DDC04u; f_801CD9F0(c); // 801DDC00
L_801DDC04:;
  c->r[3]=0u+0x80480000u; // 801DDC04
  c->r[3]=c->r[3]+0x000034D8u; // 801DDC08
  c->r[3]=R8(c->r[3]+0x00001978u); // 801DDC0C
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 801DDC10
  c->r[0]=cntlz(c->r[0]); // 801DDC14
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 801DDC18
  c->lr=0x801DDC20u; f_801E24FC(c); // 801DDC1C
  goto L_801DDCC8; // 801DDC20
L_801DDC24:;
  c->r[0]=R8(c->r[29]+0x00001979u); // 801DDC24
  cmps(c,0,(int32_t)c->r[0],0); // 801DDC28
  if (!crb(c,2)) { goto L_801DDC64; } // 801DDC2C
  c->r[0]=R32(c->r[29]+0x00001910u); // 801DDC30
  cmps(c,0,(int32_t)c->r[0],0); // 801DDC34
  if (crb(c,2)) { goto L_801DDC64; } // 801DDC38
  c->r[0]=R8(c->r[30]+0x00000080u); // 801DDC3C
  cmps(c,0,(int32_t)c->r[0],0); // 801DDC40
  if (!crb(c,2)) { goto L_801DDC6C; } // 801DDC44
  c->r[0]=R8(c->r[30]+0x00000023u); // 801DDC48
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; // 801DDC4C
  cmps(c,0,(int32_t)c->r[0],5); // 801DDC50
  if (!crb(c,2)) { goto L_801DDC6C; } // 801DDC54
  c->r[0]=R8(c->r[30]+0x00000024u); // 801DDC58
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801DDC5C
  if (crb(c,2)) { goto L_801DDC6C; } // 801DDC60
L_801DDC64:;
  c->r[28]=0u+0x00000001u; // 801DDC64
  goto L_801DDCC8; // 801DDC68
L_801DDC6C:;
  c->r[4]=c->r[27]|c->r[27]; // 801DDC6C
  c->r[3]=c->r[29]+0x000027B4u; // 801DDC70
  c->r[5]=0u+0x00000006u; // 801DDC74
  c->lr=0x801DDC7Cu; f_80004000(c); // 801DDC78
  c->r[3]=c->r[29]+0x000027BAu; // 801DDC7C
  c->r[4]=c->r[30]+0x00000022u; // 801DDC80
  c->r[5]=0u+0x00000003u; // 801DDC84
  c->lr=0x801DDC8Cu; f_80004000(c); // 801DDC88
  c->r[5]=0u+0x801E0000u; // 801DDC8C
  c->r[3]=c->r[29]+0x0000193Cu; // 801DDC90
  c->r[5]=c->r[5]+0xFFFFD950u; // 801DDC94
  c->r[4]=0u+0x00000016u; // 801DDC98
  W32(c->r[29]+0x0000194Cu,c->r[5]); // 801DDC9C
  c->r[5]=0u+0x0000003Cu; // 801DDCA0
  c->lr=0x801DDCA8u; f_801CDFE0(c); // 801DDCA4
  c->r[12]=R32(c->r[29]+0x00001910u); // 801DDCA8
  c->r[3]=c->r[27]|c->r[27]; // 801DDCAC
  c->r[4]=c->r[30]+0x00000022u; // 801DDCB0
  c->r[5]=c->r[30]+0x00000035u; // 801DDCB4
  c->ctr=c->r[12]; // 801DDCB8
  if (true) { c->lr=0x801DDCC0u; dispatch(c,c->ctr); } // 801DDCBC
  goto L_801DDCC8; // 801DDCC0
L_801DDCC4:;
  c->r[28]=0u+0x00000001u; // 801DDCC4
L_801DDCC8:;
  cmps(c,0,(int32_t)c->r[28],0); // 801DDCC8
  if (crb(c,2)) { goto L_801DDD08; } // 801DDCCC
  c->r[3]=0u+0x80480000u; // 801DDCD0
  c->r[3]=c->r[3]+0x000034D8u; // 801DDCD4
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801DDCD8
  cmpu(c,0,c->r[0],0x00000002u); // 801DDCDC
  if (crb(c,0)) { goto L_801DDD00; } // 801DDCE0
  c->r[3]=0u+0x000D0000u; // 801DDCE4
  c->r[5]=R8(c->r[29]+0x00001979u); // 801DDCE8
  c->r[6]=R32(c->r[29]+0x00001910u); // 801DDCEC
  c->r[7]=c->r[30]|c->r[30]; // 801DDCF0
  c->r[3]=c->r[3]+0x00000001u; // 801DDCF4
  c->r[4]=c->r[31]+0x0000085Cu; // 801DDCF8
  c->lr=0x801DDD00u; f_801CDA30(c); // 801DDCFC
L_801DDD00:;
  c->r[3]=c->r[27]|c->r[27]; // 801DDD00
  c->lr=0x801DDD08u; f_801E1188(c); // 801DDD04
L_801DDD08:;
  c->r[11]=c->r[1]+0x00000020u; // 801DDD08
  c->lr=0x801DDD10u; f_800C2E98(c); // 801DDD0C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DDD10
  c->lr=c->r[0]; // 801DDD14
  c->r[1]=c->r[1]+0x00000020u; // 801DDD18
  return; // 801DDD1C
}

// btm_sec_update_clock_offset
void f_801DDD20(Ctx* __restrict c) {
  trace_call(0x801DDD20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DDD20
  c->r[0]=c->lr; // 801DDD24
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DDD28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DDD2C
  c->r[31]=c->r[4]|c->r[4]; // 801DDD30
  c->lr=0x801DDD38u; f_801D6068(c); // 801DDD34
  cmps(c,0,(int32_t)c->r[3],0); // 801DDD38
  if (crb(c,2)) { goto L_801DDD5C; } // 801DDD3C
  c->r[31]=c->r[31]|0x00008000u; // 801DDD40
  W16(c->r[3]+0x0000001Au,c->r[31]); // 801DDD44
  c->r[3]=c->r[3]+0x0000001Cu; // 801DDD48
  c->lr=0x801DDD50u; f_801D882C(c); // 801DDD4C
  cmps(c,0,(int32_t)c->r[3],0); // 801DDD50
  if (crb(c,2)) { goto L_801DDD5C; } // 801DDD54
  W16(c->r[3]+0x00000000u,c->r[31]); // 801DDD58
L_801DDD5C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DDD5C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DDD60
  c->lr=c->r[0]; // 801DDD64
  c->r[1]=c->r[1]+0x00000010u; // 801DDD68
  return; // 801DDD6C
}

// btm_sec_execute_procedure
void f_801DDD70(Ctx* __restrict c) {
  trace_call(0x801DDD70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DDD70
  c->r[0]=c->lr; // 801DDD74
  c->r[4]=0u+0x80480000u; // 801DDD78
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DDD7C
  c->r[4]=c->r[4]+0x000034D8u; // 801DDD80
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DDD84
  c->r[31]=0u+0x803A0000u; // 801DDD88
  c->r[31]=c->r[31]+0xFFFFFBC0u; // 801DDD8C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DDD90
  c->r[30]=c->r[3]|c->r[3]; // 801DDD94
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DDD98
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801DDD9C
  cmpu(c,0,c->r[0],0x00000004u); // 801DDDA0
  if (crb(c,0)) { goto L_801DDDC4; } // 801DDDA4
  c->r[3]=0u+0x000D0000u; // 801DDDA8
  c->r[5]=R8(c->r[30]+0x00000081u); // 801DDDAC
  c->r[6]=R8(c->r[30]+0x00000076u); // 801DDDB0
  c->r[3]=c->r[3]+0x00000003u; // 801DDDB4
  c->r[7]=R8(c->r[30]+0x0000007Fu); // 801DDDB8
  c->r[4]=c->r[31]+0x000008ACu; // 801DDDBC
  c->lr=0x801DDDC4u; f_801CDA30(c); // 801DDDC0
L_801DDDC4:;
  c->r[0]=R8(c->r[30]+0x0000007Fu); // 801DDDC4
  cmps(c,0,(int32_t)c->r[0],0); // 801DDDC8
  if (crb(c,2)) { goto L_801DDDD8; } // 801DDDCC
  c->r[3]=0u+0x00000001u; // 801DDDD0
  goto L_801DE134; // 801DDDD4
L_801DDDD8:;
  c->r[0]=R16(c->r[30]+0x00000018u); // 801DDDD8
  cmpu(c,1,c->r[0],0x0000FFFFu); // 801DDDDC
  if (!crb(c,6)) { goto L_801DDE40; } // 801DDDE0
  c->r[3]=c->r[30]+0x0000001Cu; // 801DDDE4
  c->lr=0x801DDDECu; f_801EA598(c); // 801DDDE8
  cmps(c,0,(int32_t)c->r[3],0); // 801DDDEC
  if (!crb(c,2)) { goto L_801DDE1C; } // 801DDDF0
  c->r[3]=0u+0x80480000u; // 801DDDF4
  c->r[0]=R8(c->r[3]+0x000065A0u); // 801DDDF8
  cmpu(c,0,c->r[0],0x00000002u); // 801DDDFC
  if (crb(c,0)) { goto L_801DDE14; } // 801DDE00
  c->r[3]=0u+0x00080000u; // 801DDE04
  c->r[4]=c->r[31]+0x000008ECu; // 801DDE08
  c->r[3]=c->r[3]+0x00000001u; // 801DDE0C
  c->lr=0x801DDE14u; f_801CD9D0(c); // 801DDE10
L_801DDE14:;
  c->r[3]=0u+0x00000003u; // 801DDE14
  goto L_801DE134; // 801DDE18
L_801DDE1C:;
  c->lr=0x801DDE20u; f_801EC0FC(c); // 801DDE1C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801DDE20
  if (!crb(c,2)) { goto L_801DDE30; } // 801DDE24
  c->r[3]=0u+0x00000003u; // 801DDE28
  goto L_801DE134; // 801DDE2C
L_801DDE30:;
  c->r[0]=0u+0x00000001u; // 801DDE30
  c->r[3]=0u+0x00000001u; // 801DDE34
  W8(c->r[30]+0x00000080u,c->r[0]); // 801DDE38
  goto L_801DE134; // 801DDE3C
L_801DDE40:;
  c->r[0]=R8(c->r[30]+0x00000076u); // 801DDE40
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801DDE44
  if (!crb(c,2)) { goto L_801DDED0; } // 801DDE48
  if (crb(c,6)) { goto L_801DDED0; } // 801DDE4C
  c->r[3]=0u+0x80480000u; // 801DDE50
  c->r[3]=c->r[3]+0x000034D8u; // 801DDE54
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801DDE58
  cmpu(c,0,c->r[0],0x00000004u); // 801DDE5C
  if (crb(c,0)) { goto L_801DDE74; } // 801DDE60
  c->r[3]=0u+0x000D0000u; // 801DDE64
  c->r[4]=c->r[31]+0x00000910u; // 801DDE68
  c->r[3]=c->r[3]+0x00000003u; // 801DDE6C
  c->lr=0x801DDE74u; f_801CD9D0(c); // 801DDE70
L_801DDE74:;
  c->r[29]=R8(c->r[30]+0x0000007Fu); // 801DDE74
  c->r[0]=0u+0x00000003u; // 801DDE78
  c->r[3]=c->r[30]+0x0000001Cu; // 801DDE7C
  c->r[4]=0u+0x00000000u; // 801DDE80
  W8(c->r[30]+0x0000007Fu,c->r[0]); // 801DDE84
  c->r[5]=0u+0x00000002u; // 801DDE88
  c->r[6]=0u+0x0000001Eu; // 801DDE8C
  c->r[7]=0u+0x00000000u; // 801DDE90
  c->lr=0x801DDE98u; f_801D95AC(c); // 801DDE94
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801DDE98
  cmpu(c,0,c->r[0],0x00000001u); // 801DDE9C
  if (crb(c,2)) { goto L_801DDEB0; } // 801DDEA0
  W8(c->r[30]+0x0000007Fu,c->r[29]); // 801DDEA4
  c->r[0]=0u+0x00000000u; // 801DDEA8
  goto L_801DDEB4; // 801DDEAC
L_801DDEB0:;
  c->r[0]=0u+0x00000001u; // 801DDEB0
L_801DDEB4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DDEB4
  if (crb(c,2)) { goto L_801DDEC4; } // 801DDEB8
  c->r[3]=0u+0x00000001u; // 801DDEBC
  goto L_801DE134; // 801DDEC0
L_801DDEC4:;
  c->r[0]=R8(c->r[30]+0x00000076u); // 801DDEC4
  c->r[0]=c->r[0]|0x00000008u; // 801DDEC8
  W8(c->r[30]+0x00000076u,c->r[0]); // 801DDECC
L_801DDED0:;
  c->r[4]=R8(c->r[30]+0x00000076u); // 801DDED0
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 801DDED4
  if (!crb(c,2)) { goto L_801DDF60; } // 801DDED8
  c->r[3]=R8(c->r[30]+0x00000080u); // 801DDEDC
  cmps(c,0,(int32_t)c->r[3],0); // 801DDEE0
  if (crb(c,2)) { goto L_801DDEF4; } // 801DDEE4
  c->r[0]=R8(c->r[30]+0x00000081u); // 801DDEE8
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801DDEEC
  if (!crb(c,2)) { goto L_801DDF08; } // 801DDEF0
L_801DDEF4:;
  cmps(c,0,(int32_t)c->r[3],0); // 801DDEF4
  if (!crb(c,2)) { goto L_801DDF60; } // 801DDEF8
  c->r[0]=R8(c->r[30]+0x00000081u); // 801DDEFC
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801DDF00
  if (crb(c,2)) { goto L_801DDF60; } // 801DDF04
L_801DDF08:;
  c->r[0]=R16(c->r[30]+0x00000018u); // 801DDF08
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801DDF0C
  if (crb(c,2)) { goto L_801DDF60; } // 801DDF10
  c->r[3]=0u+0x80480000u; // 801DDF14
  c->r[3]=c->r[3]+0x000034D8u; // 801DDF18
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801DDF1C
  cmpu(c,0,c->r[0],0x00000004u); // 801DDF20
  if (crb(c,0)) { goto L_801DDF38; } // 801DDF24
  c->r[3]=0u+0x000D0000u; // 801DDF28
  c->r[4]=c->r[31]+0x00000934u; // 801DDF2C
  c->r[3]=c->r[3]+0x00000003u; // 801DDF30
  c->lr=0x801DDF38u; f_801CD9D0(c); // 801DDF34
L_801DDF38:;
  c->r[0]=0u+0x00000001u; // 801DDF38
  c->r[3]=R16(c->r[30]+0x00000018u); // 801DDF3C
  W8(c->r[30]+0x0000007Fu,c->r[0]); // 801DDF40
  c->lr=0x801DDF48u; f_801E12B8(c); // 801DDF44
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801DDF48
  if (!crb(c,2)) { goto L_801DDF58; } // 801DDF4C
  c->r[3]=0u+0x00000003u; // 801DDF50
  goto L_801DE134; // 801DDF54
L_801DDF58:;
  c->r[3]=0u+0x00000001u; // 801DDF58
  goto L_801DE134; // 801DDF5C
L_801DDF60:;
  c->r[0]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[0]); // 801DDF60
  if (!crb(c,2)) { goto L_801DE004; } // 801DDF64
  c->r[3]=R8(c->r[30]+0x00000080u); // 801DDF68
  cmps(c,0,(int32_t)c->r[3],0); // 801DDF6C
  if (crb(c,2)) { goto L_801DDF80; } // 801DDF70
  c->r[0]=R8(c->r[30]+0x00000081u); // 801DDF74
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 801DDF78
  if (!crb(c,2)) { goto L_801DDF94; } // 801DDF7C
L_801DDF80:;
  cmps(c,0,(int32_t)c->r[3],0); // 801DDF80
  if (!crb(c,2)) { goto L_801DE004; } // 801DDF84
  c->r[0]=R8(c->r[30]+0x00000081u); // 801DDF88
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801DDF8C
  if (crb(c,2)) { goto L_801DE004; } // 801DDF90
L_801DDF94:;
  c->r[0]=R16(c->r[30]+0x00000018u); // 801DDF94
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801DDF98
  if (crb(c,2)) { goto L_801DE004; } // 801DDF9C
  c->r[3]=0u+0x80480000u; // 801DDFA0
  c->r[3]=c->r[3]+0x000034D8u; // 801DDFA4
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801DDFA8
  cmpu(c,0,c->r[0],0x00000004u); // 801DDFAC
  if (crb(c,0)) { goto L_801DDFC4; } // 801DDFB0
  c->r[3]=0u+0x000D0000u; // 801DDFB4
  c->r[4]=c->r[31]+0x0000095Cu; // 801DDFB8
  c->r[3]=c->r[3]+0x00000003u; // 801DDFBC
  c->lr=0x801DDFC4u; f_801CD9D0(c); // 801DDFC0
L_801DDFC4:;
  c->r[3]=R16(c->r[30]+0x00000018u); // 801DDFC4
  c->r[4]=0u+0x00000001u; // 801DDFC8
  c->lr=0x801DDFD0u; f_801E1334(c); // 801DDFCC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801DDFD0
  if (!crb(c,2)) { goto L_801DDFE0; } // 801DDFD4
  c->r[3]=0u+0x00000000u; // 801DDFD8
  goto L_801DDFEC; // 801DDFDC
L_801DDFE0:;
  c->r[0]=0u+0x00000002u; // 801DDFE0
  c->r[3]=0u+0x00000001u; // 801DDFE4
  W8(c->r[30]+0x0000007Fu,c->r[0]); // 801DDFE8
L_801DDFEC:;
  cmps(c,0,(int32_t)c->r[3],0); // 801DDFEC
  if (!crb(c,2)) { goto L_801DDFFC; } // 801DDFF0
  c->r[3]=0u+0x00000003u; // 801DDFF4
  goto L_801DE134; // 801DDFF8
L_801DDFFC:;
  c->r[3]=0u+0x00000001u; // 801DDFFC
  goto L_801DE134; // 801DE000
L_801DE004:;
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 801DE004
  if (!crb(c,2)) { goto L_801DE0D4; } // 801DE008
  c->r[3]=R8(c->r[30]+0x00000080u); // 801DE00C
  cmps(c,0,(int32_t)c->r[3],0); // 801DE010
  if (crb(c,2)) { goto L_801DE024; } // 801DE014
  c->r[0]=R8(c->r[30]+0x00000081u); // 801DE018
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801DE01C
  if (!crb(c,2)) { goto L_801DE038; } // 801DE020
L_801DE024:;
  cmps(c,0,(int32_t)c->r[3],0); // 801DE024
  if (!crb(c,2)) { goto L_801DE0D4; } // 801DE028
  c->r[0]=R8(c->r[30]+0x00000081u); // 801DE02C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801DE030
  if (crb(c,2)) { goto L_801DE0D4; } // 801DE034
L_801DE038:;
  c->r[3]=R32(c->r[30]+0x00000010u); // 801DE038
  c->r[0]=c->r[3]+0x00010000u; // 801DE03C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801DE040
  if (crb(c,2)) { goto L_801DE050; } // 801DE044
  c->r[0]=0u+0x00000000u; // 801DE048
  goto L_801DE06C; // 801DE04C
L_801DE050:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 801DE050
  c->r[0]=c->r[3]+0x00010000u; // 801DE054
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801DE058
  if (crb(c,2)) { goto L_801DE068; } // 801DE05C
  c->r[0]=0u+0x00000000u; // 801DE060
  goto L_801DE06C; // 801DE064
L_801DE068:;
  c->r[0]=0u+0x00000001u; // 801DE068
L_801DE06C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801DE06C
  if (!crb(c,2)) { goto L_801DE0D4; } // 801DE070
  c->r[3]=R32(c->r[30]+0x00000000u); // 801DE074
  c->r[3]=R8(c->r[3]+0x0000000Fu); // 801DE078
  cmpu(c,0,c->r[3],0x0000002Eu); // 801DE07C
  if (!crb(c,0)) { goto L_801DE0D4; } // 801DE080
  c->r[0]=rotl(c->r[3],29)&0x0000001Cu; // 801DE084
  c->r[4]=rotl(c->r[3],0)&0x0000001Fu; // 801DE088
  c->r[3]=c->r[30]+c->r[0]; // 801DE08C
  c->r[5]=0u+0x00000001u; // 801DE090
  c->r[0]=R32(c->r[3]+0x00000010u); // 801DE094
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[5]<<((c->r[4])&31)); // 801DE098
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 801DE09C
  if (!crb(c,2)) { goto L_801DE0D4; } // 801DE0A0
  c->r[3]=0u+0x80480000u; // 801DE0A4
  c->r[3]=c->r[3]+0x000034D8u; // 801DE0A8
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801DE0AC
  cmpu(c,0,c->r[0],0x00000004u); // 801DE0B0
  if (crb(c,0)) { goto L_801DE0C8; } // 801DE0B4
  c->r[3]=0u+0x000D0000u; // 801DE0B8
  c->r[4]=c->r[31]+0x00000980u; // 801DE0BC
  c->r[3]=c->r[3]+0x00000003u; // 801DE0C0
  c->lr=0x801DE0C8u; f_801CD9D0(c); // 801DE0C4
L_801DE0C8:;
  c->r[3]=c->r[30]|c->r[30]; // 801DE0C8
  c->lr=0x801DE0D0u; f_801DE150(c); // 801DE0CC
  goto L_801DE134; // 801DE0D0
L_801DE0D4:;
  c->r[0]=R8(c->r[30]+0x00000081u); // 801DE0D4
  c->r[3]=0u+0x80480000u; // 801DE0D8
  c->r[3]=c->r[3]+0x000034D8u; // 801DE0DC
  c->r[0]=rotl(c->r[0],0)&0x000000C0u; // 801DE0E0
  W8(c->r[30]+0x00000081u,c->r[0]); // 801DE0E4
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801DE0E8
  cmpu(c,0,c->r[0],0x00000004u); // 801DE0EC
  if (crb(c,0)) { goto L_801DE10C; } // 801DE0F0
  c->r[3]=0u+0x000D0000u; // 801DE0F4
  c->r[5]=R32(c->r[30]+0x00000014u); // 801DE0F8
  c->r[6]=R32(c->r[30]+0x00000010u); // 801DE0FC
  c->r[3]=c->r[3]+0x00000003u; // 801DE100
  c->r[4]=c->r[31]+0x000009A8u; // 801DE104
  c->lr=0x801DE10Cu; f_801CDA10(c); // 801DE108
L_801DE10C:;
  c->r[3]=0u+0x80480000u; // 801DE10C
  c->r[3]=c->r[3]+0x000034D8u; // 801DE110
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801DE114
  cmpu(c,0,c->r[0],0x00000004u); // 801DE118
  if (crb(c,0)) { goto L_801DE130; } // 801DE11C
  c->r[3]=0u+0x000D0000u; // 801DE120
  c->r[4]=c->r[31]+0x000009D0u; // 801DE124
  c->r[3]=c->r[3]+0x00000003u; // 801DE128
  c->lr=0x801DE130u; f_801CD9D0(c); // 801DE12C
L_801DE130:;
  c->r[3]=0u+0x00000000u; // 801DE130
L_801DE134:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DE134
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DE138
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DE13C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DE140
  c->lr=c->r[0]; // 801DE144
  c->r[1]=c->r[1]+0x00000020u; // 801DE148
  return; // 801DE14C
}

// btm_sec_start_authorization
void f_801DE150(Ctx* __restrict c) {
  trace_call(0x801DE150u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE150
  c->r[0]=c->lr; // 801DE154
  c->r[6]=0u+0x00000000u; // 801DE158
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DE15C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DE160
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DE164
  c->r[30]=c->r[3]|c->r[3]; // 801DE168
  c->r[0]=R8(c->r[3]+0x00000076u); // 801DE16C
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801DE170
  if (!crb(c,2)) { goto L_801DE184; } // 801DE174
  c->r[0]=R16(c->r[3]+0x00000018u); // 801DE178
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801DE17C
  if (!crb(c,2)) { goto L_801DE21C; } // 801DE180
L_801DE184:;
  c->r[4]=0u+0x80480000u; // 801DE184
  c->r[4]=c->r[4]+0x000034D8u; // 801DE188
  c->r[0]=R32(c->r[4]+0x0000190Cu); // 801DE18C
  cmps(c,0,(int32_t)c->r[0],0); // 801DE190
  if (!crb(c,2)) { goto L_801DE1A0; } // 801DE194
  c->r[3]=0u+0x00000004u; // 801DE198
  goto L_801DE254; // 801DE19C
L_801DE1A0:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 801DE1A0
  cmps(c,0,(int32_t)c->r[4],0); // 801DE1A4
  if (crb(c,2)) { goto L_801DE1CC; } // 801DE1A8
  c->r[0]=R8(c->r[3]+0x00000080u); // 801DE1AC
  cmps(c,0,(int32_t)c->r[0],0); // 801DE1B0
  if (crb(c,2)) { goto L_801DE1C0; } // 801DE1B4
  c->r[6]=c->r[4]+0x00000010u; // 801DE1B8
  goto L_801DE1C4; // 801DE1BC
L_801DE1C0:;
  c->r[6]=c->r[4]+0x00000026u; // 801DE1C0
L_801DE1C4:;
  c->r[7]=R8(c->r[4]+0x0000000Fu); // 801DE1C4
  goto L_801DE1D0; // 801DE1C8
L_801DE1CC:;
  c->r[7]=0u+0x00000000u; // 801DE1CC
L_801DE1D0:;
  c->r[0]=0u+0x00000004u; // 801DE1D0
  c->r[4]=0u+0x80480000u; // 801DE1D4
  W8(c->r[3]+0x0000007Fu,c->r[0]); // 801DE1D8
  c->r[4]=c->r[4]+0x000034D8u; // 801DE1DC
  c->r[5]=c->r[3]+0x00000035u; // 801DE1E0
  c->r[8]=R8(c->r[3]+0x00000080u); // 801DE1E4
  c->r[12]=R32(c->r[4]+0x0000190Cu); // 801DE1E8
  c->r[4]=c->r[3]+0x00000022u; // 801DE1EC
  c->ctr=c->r[12]; // 801DE1F0
  c->r[3]=c->r[3]+0x0000001Cu; // 801DE1F4
  if (true) { c->lr=0x801DE1FCu; dispatch(c,c->ctr); } // 801DE1F8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801DE1FC
  if (!crb(c,2)) { goto L_801DE254; } // 801DE200
  c->r[4]=R8(c->r[30]+0x00000076u); // 801DE204
  c->r[0]=0u+0x00000000u; // 801DE208
  W8(c->r[30]+0x0000007Fu,c->r[0]); // 801DE20C
  c->r[0]=c->r[4]|0x00000001u; // 801DE210
  W8(c->r[30]+0x00000076u,c->r[0]); // 801DE214
  goto L_801DE254; // 801DE218
L_801DE21C:;
  c->r[31]=R8(c->r[3]+0x0000007Fu); // 801DE21C
  c->r[0]=0u+0x00000003u; // 801DE220
  c->r[4]=0u+0x00000000u; // 801DE224
  c->r[5]=0u+0x00000002u; // 801DE228
  W8(c->r[3]+0x0000007Fu,c->r[0]); // 801DE22C
  c->r[6]=0u+0x0000001Eu; // 801DE230
  c->r[7]=0u+0x00000000u; // 801DE234
  c->r[3]=c->r[3]+0x0000001Cu; // 801DE238
  c->lr=0x801DE240u; f_801D95AC(c); // 801DE23C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801DE240
  cmpu(c,0,c->r[0],0x00000001u); // 801DE244
  if (crb(c,2)) { goto L_801DE250; } // 801DE248
  W8(c->r[30]+0x0000007Fu,c->r[31]); // 801DE24C
L_801DE250:;
  c->r[3]=0u+0x00000001u; // 801DE250
L_801DE254:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DE254
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DE258
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DE25C
  c->lr=c->r[0]; // 801DE260
  c->r[1]=c->r[1]+0x00000010u; // 801DE264
  return; // 801DE268
}

// btm_sec_collision_timeout
void f_801DE26C(Ctx* __restrict c) {
  trace_call(0x801DE26Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE26C
  c->r[0]=c->lr; // 801DE270
  c->r[3]=0u+0x80480000u; // 801DE274
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DE278
  c->r[3]=c->r[3]+0x000034D8u; // 801DE27C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DE280
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DE284
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801DE288
  cmpu(c,0,c->r[0],0x00000004u); // 801DE28C
  if (crb(c,0)) { goto L_801DE2A8; } // 801DE290
  c->r[3]=0u+0x000D0000u; // 801DE294
  c->r[4]=0u+0x803A0000u; // 801DE298
  c->r[3]=c->r[3]+0x00000003u; // 801DE29C
  c->r[4]=c->r[4]+0x000005B4u; // 801DE2A0
  c->lr=0x801DE2A8u; f_801CD9D0(c); // 801DE2A4
L_801DE2A8:;
  c->r[31]=0u+0x80480000u; // 801DE2A8
  c->r[30]=0u+0x00000000u; // 801DE2AC
  c->r[31]=c->r[31]+0x000034D8u; // 801DE2B0
  W32(c->r[31]+0x0000196Cu,c->r[30]); // 801DE2B4
  c->r[3]=R32(c->r[31]+0x00001938u); // 801DE2B8
  c->lr=0x801DE2C0u; f_801DDD70(c); // 801DE2BC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801DE2C0
  cmpu(c,0,c->r[0],0x00000001u); // 801DE2C4
  if (crb(c,2)) { goto L_801DE334; } // 801DE2C8
  c->r[4]=R32(c->r[31]+0x00001938u); // 801DE2CC
  c->r[0]=R32(c->r[4]+0x00000004u); // 801DE2D0
  cmps(c,0,(int32_t)c->r[0],0); // 801DE2D4
  if (crb(c,2)) { goto L_801DE334; } // 801DE2D8
  c->r[0]=R8(c->r[4]+0x00000080u); // 801DE2DC
  cmps(c,0,(int32_t)c->r[0],0); // 801DE2E0
  if (crb(c,2)) { goto L_801DE304; } // 801DE2E4
  c->r[4]=R32(c->r[4]+0x00000000u); // 801DE2E8
  cmps(c,0,(int32_t)c->r[4],0); // 801DE2EC
  if (crb(c,2)) { goto L_801DE304; } // 801DE2F0
  c->r[0]=R32(c->r[4]+0x00000000u); // 801DE2F4
  cmpu(c,0,c->r[0],0x00000003u); // 801DE2F8
  if (!crb(c,2)) { goto L_801DE304; } // 801DE2FC
  W32(c->r[4]+0x00000004u,c->r[30]); // 801DE300
L_801DE304:;
  c->r[31]=0u+0x80480000u; // 801DE304
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; // 801DE308
  c->r[31]=c->r[31]+0x000034D8u; // 801DE30C
  c->r[4]=R32(c->r[31]+0x00001938u); // 801DE310
  c->r[12]=R32(c->r[4]+0x00000004u); // 801DE314
  c->r[3]=c->r[4]+0x0000001Cu; // 801DE318
  c->r[4]=R32(c->r[4]+0x00000008u); // 801DE31C
  c->ctr=c->r[12]; // 801DE320
  if (true) { c->lr=0x801DE328u; dispatch(c,c->ctr); } // 801DE324
  c->r[3]=R32(c->r[31]+0x00001938u); // 801DE328
  c->r[0]=0u+0x00000000u; // 801DE32C
  W32(c->r[3]+0x00000004u,c->r[0]); // 801DE330
L_801DE334:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DE334
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DE338
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DE33C
  c->lr=c->r[0]; // 801DE340
  c->r[1]=c->r[1]+0x00000010u; // 801DE344
  return; // 801DE348
}

// btm_read_trusted_mask
void f_801DE34C(Ctx* __restrict c) {
  trace_call(0x801DE34Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE34C
  c->r[0]=c->lr; // 801DE350
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DE354
  c->lr=0x801DE35Cu; f_801D6120(c); // 801DE358
  cmps(c,0,(int32_t)c->r[3],0); // 801DE35C
  if (crb(c,2)) { goto L_801DE36C; } // 801DE360
  c->r[3]=c->r[3]+0x00000010u; // 801DE364
  goto L_801DE370; // 801DE368
L_801DE36C:;
  c->r[3]=0u+0x00000000u; // 801DE36C
L_801DE370:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DE370
  c->lr=c->r[0]; // 801DE374
  c->r[1]=c->r[1]+0x00000010u; // 801DE378
  return; // 801DE37C
}

// btu_hcif_process_event
void f_801DE380(Ctx* __restrict c) {
  trace_call(0x801DE380u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE380
  c->r[0]=c->lr; // 801DE384
  c->r[4]=0u+0x80480000u; // 801DE388
  W32(c->r[1]+0x00000044u,c->r[0]); // 801DE38C
  c->r[4]=c->r[4]+0x000034D8u; // 801DE390
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 801DE394
  W32(c->r[1]+0x00000038u,c->r[30]); // 801DE398
  W32(c->r[1]+0x00000034u,c->r[29]); // 801DE39C
  W32(c->r[1]+0x00000030u,c->r[28]); // 801DE3A0
  c->r[5]=R16(c->r[3]+0x00000004u); // 801DE3A4
  c->r[0]=R8(c->r[4]+0x0000064Eu); // 801DE3A8
  c->r[7]=c->r[3]+c->r[5]; // 801DE3AC
  cmps(c,0,(int32_t)c->r[0],0); // 801DE3B0
  c->r[3]=R8(c->r[7]+0x00000008u); // 801DE3B4
  c->r[4]=R8(c->r[7]+0x00000009u); // 801DE3B8
  if (!crb(c,2)) { goto L_801DE3D0; } // 801DE3BC
  cmpu(c,0,c->r[3],0x0000000Eu); // 801DE3C0
  if (crb(c,2)) { goto L_801DE3D0; } // 801DE3C4
  cmpu(c,0,c->r[3],0x0000000Fu); // 801DE3C8
  if (!crb(c,2)) { goto L_801DE918; } // 801DE3CC
L_801DE3D0:;
  cmps(c,0,(int32_t)c->r[3],20); // 801DE3D0
  if (crb(c,2)) { goto L_801DE734; } // 801DE3D4
  if (!crb(c,0)) { goto L_801DE46C; } // 801DE3D8
  cmps(c,0,(int32_t)c->r[3],10); // 801DE3DC
  if (crb(c,2)) { goto L_801DE640; } // 801DE3E0
  if (!crb(c,0)) { goto L_801DE430; } // 801DE3E4
  cmps(c,0,(int32_t)c->r[3],5); // 801DE3E8
  if (crb(c,2)) { goto L_801DE534; } // 801DE3EC
  if (!crb(c,0)) { goto L_801DE418; } // 801DE3F0
  cmps(c,0,(int32_t)c->r[3],2); // 801DE3F4
  if (crb(c,2)) { goto L_801DE4FC; } // 801DE3F8
  if (!crb(c,0)) { goto L_801DE40C; } // 801DE3FC
  cmps(c,0,(int32_t)c->r[3],1); // 801DE400
  if (!crb(c,0)) { goto L_801DE4F0; } // 801DE404
  goto L_801DE918; // 801DE408
L_801DE40C:;
  cmps(c,0,(int32_t)c->r[3],4); // 801DE40C
  if (!crb(c,0)) { goto L_801DE528; } // 801DE410
  goto L_801DE51C; // 801DE414
L_801DE418:;
  cmps(c,0,(int32_t)c->r[3],8); // 801DE418
  if (crb(c,2)) { goto L_801DE600; } // 801DE41C
  if (!crb(c,0)) { goto L_801DE918; } // 801DE420
  cmps(c,0,(int32_t)c->r[3],7); // 801DE424
  if (!crb(c,0)) { goto L_801DE59C; } // 801DE428
  goto L_801DE57C; // 801DE42C
L_801DE430:;
  cmps(c,0,(int32_t)c->r[3],15); // 801DE430
  if (crb(c,2)) { goto L_801DE694; } // 801DE434
  if (!crb(c,0)) { goto L_801DE454; } // 801DE438
  cmps(c,0,(int32_t)c->r[3],13); // 801DE43C
  if (crb(c,2)) { goto L_801DE67C; } // 801DE440
  if (!crb(c,0)) { goto L_801DE688; } // 801DE444
  cmps(c,0,(int32_t)c->r[3],12); // 801DE448
  if (!crb(c,0)) { goto L_801DE670; } // 801DE44C
  goto L_801DE664; // 801DE450
L_801DE454:;
  cmps(c,0,(int32_t)c->r[3],18); // 801DE454
  if (crb(c,2)) { goto L_801DE6C8; } // 801DE458
  if (!crb(c,0)) { goto L_801DE728; } // 801DE45C
  cmps(c,0,(int32_t)c->r[3],17); // 801DE460
  if (!crb(c,0)) { goto L_801DE918; } // 801DE464
  goto L_801DE6A0; // 801DE468
L_801DE46C:;
  cmps(c,0,(int32_t)c->r[3],33); // 801DE46C
  if (crb(c,2)) { goto L_801DE918; } // 801DE470
  if (!crb(c,0)) { goto L_801DE4B4; } // 801DE474
  cmps(c,0,(int32_t)c->r[3],28); // 801DE478
  if (crb(c,2)) { goto L_801DE848; } // 801DE47C
  if (!crb(c,0)) { goto L_801DE4A8; } // 801DE480
  cmps(c,0,(int32_t)c->r[3],23); // 801DE484
  if (crb(c,2)) { goto L_801DE800; } // 801DE488
  if (!crb(c,0)) { goto L_801DE49C; } // 801DE48C
  cmps(c,0,(int32_t)c->r[3],22); // 801DE490
  if (!crb(c,0)) { goto L_801DE7BC; } // 801DE494
  goto L_801DE79C; // 801DE498
L_801DE49C:;
  cmps(c,0,(int32_t)c->r[3],25); // 801DE49C
  if (!crb(c,0)) { goto L_801DE918; } // 801DE4A0
  goto L_801DE83C; // 801DE4A4
L_801DE4A8:;
  cmps(c,0,(int32_t)c->r[3],30); // 801DE4A8
  if (crb(c,2)) { goto L_801DE898; } // 801DE4AC
  goto L_801DE918; // 801DE4B0
L_801DE4B4:;
  cmps(c,0,(int32_t)c->r[3],239); // 801DE4B4
  if (crb(c,2)) { goto L_801DE910; } // 801DE4B8
  if (!crb(c,0)) { goto L_801DE4E4; } // 801DE4BC
  cmps(c,0,(int32_t)c->r[3],44); // 801DE4C0
  if (crb(c,2)) { goto L_801DE8B4; } // 801DE4C4
  if (!crb(c,0)) { goto L_801DE4D8; } // 801DE4C8
  cmps(c,0,(int32_t)c->r[3],35); // 801DE4CC
  if (!crb(c,0)) { goto L_801DE918; } // 801DE4D0
  goto L_801DE50C; // 801DE4D4
L_801DE4D8:;
  cmps(c,0,(int32_t)c->r[3],46); // 801DE4D8
  if (!crb(c,0)) { goto L_801DE918; } // 801DE4DC
  goto L_801DE8C0; // 801DE4E0
L_801DE4E4:;
  cmps(c,0,(int32_t)c->r[3],255); // 801DE4E4
  if (crb(c,2)) { goto L_801DE910; } // 801DE4E8
  goto L_801DE918; // 801DE4EC
L_801DE4F0:;
  c->r[3]=R8(c->r[7]+0x0000000Au); // 801DE4F0
  c->lr=0x801DE4F8u; f_801D94A8(c); // 801DE4F4
  goto L_801DE918; // 801DE4F8
L_801DE4FC:;
  c->r[3]=c->r[7]+0x0000000Au; // 801DE4FC
  c->r[4]=0u+0x00000000u; // 801DE500
  c->lr=0x801DE508u; f_801D9230(c); // 801DE504
  goto L_801DE918; // 801DE508
L_801DE50C:;
  c->r[3]=c->r[7]+0x0000000Au; // 801DE50C
  c->r[4]=0u+0x00000001u; // 801DE510
  c->lr=0x801DE518u; f_801D9230(c); // 801DE514
  goto L_801DE918; // 801DE518
L_801DE51C:;
  c->r[3]=c->r[7]+0x0000000Au; // 801DE51C
  c->lr=0x801DE524u; f_801DEAC4(c); // 801DE520
  goto L_801DE918; // 801DE524
L_801DE528:;
  c->r[3]=c->r[7]+0x0000000Au; // 801DE528
  c->lr=0x801DE530u; f_801DEBA0(c); // 801DE52C
  goto L_801DE918; // 801DE530
L_801DE534:;
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 801DE534
  c->r[3]=R8(c->r[7]+0x0000000Bu); // 801DE538
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801DE53C
  c->r[31]=R8(c->r[7]+0x0000000Du); // 801DE540
  c->r[0]=c->r[3]+c->r[0]; // 801DE544
  c->r[28]=rotl(c->r[0],0)&0x00000FFFu; // 801DE548
  c->r[4]=c->r[31]|c->r[31]; // 801DE54C
  c->r[3]=c->r[28]|c->r[28]; // 801DE550
  c->lr=0x801DE558u; f_801E881C(c); // 801DE554
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801DE558
  if (!crb(c,2)) { goto L_801DE56C; } // 801DE55C
  c->r[3]=c->r[28]|c->r[28]; // 801DE560
  c->r[4]=c->r[31]|c->r[31]; // 801DE564
  c->lr=0x801DE56Cu; f_801DADEC(c); // 801DE568
L_801DE56C:;
  c->r[3]=c->r[28]|c->r[28]; // 801DE56C
  c->r[4]=c->r[31]|c->r[31]; // 801DE570
  c->lr=0x801DE578u; f_801DD538(c); // 801DE574
  goto L_801DE918; // 801DE578
L_801DE57C:;
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 801DE57C
  c->r[3]=R8(c->r[7]+0x0000000Bu); // 801DE580
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801DE584
  c->r[4]=R8(c->r[7]+0x0000000Au); // 801DE588
  c->r[0]=c->r[3]+c->r[0]; // 801DE58C
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801DE590
  c->lr=0x801DE598u; f_801DCA40(c); // 801DE594
  goto L_801DE918; // 801DE598
L_801DE59C:;
  c->r[30]=R8(c->r[7]+0x0000000Au); // 801DE59C
  c->r[0]=c->r[4]+0xFFFFFFF9u; // 801DE5A0
  c->r[3]=R8(c->r[7]+0x0000000Bu); // 801DE5A4
  c->r[31]=c->r[7]+0x00000011u; // 801DE5A8
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 801DE5AC
  c->r[6]=c->r[30]|c->r[30]; // 801DE5B0
  W8(c->r[1]+0x00000025u,c->r[3]); // 801DE5B4
  c->r[4]=c->r[31]|c->r[31]; // 801DE5B8
  c->r[3]=c->r[1]+0x00000020u; // 801DE5BC
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 801DE5C0
  W8(c->r[1]+0x00000024u,c->r[0]); // 801DE5C4
  c->r[0]=R8(c->r[7]+0x0000000Du); // 801DE5C8
  W8(c->r[1]+0x00000023u,c->r[0]); // 801DE5CC
  c->r[0]=R8(c->r[7]+0x0000000Eu); // 801DE5D0
  W8(c->r[1]+0x00000022u,c->r[0]); // 801DE5D4
  c->r[0]=R8(c->r[7]+0x0000000Fu); // 801DE5D8
  W8(c->r[1]+0x00000021u,c->r[0]); // 801DE5DC
  c->r[0]=R8(c->r[7]+0x00000010u); // 801DE5E0
  W8(c->r[1]+0x00000020u,c->r[0]); // 801DE5E4
  c->lr=0x801DE5ECu; f_801D96FC(c); // 801DE5E8
  c->r[4]=c->r[31]|c->r[31]; // 801DE5EC
  c->r[5]=c->r[30]|c->r[30]; // 801DE5F0
  c->r[3]=c->r[1]+0x00000020u; // 801DE5F4
  c->lr=0x801DE5FCu; f_801DC758(c); // 801DE5F8
  goto L_801DE918; // 801DE5FC
L_801DE600:;
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 801DE600
  c->r[3]=R8(c->r[7]+0x0000000Bu); // 801DE604
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801DE608
  c->r[29]=R8(c->r[7]+0x0000000Au); // 801DE60C
  c->r[0]=c->r[3]+c->r[0]; // 801DE610
  c->r[30]=R8(c->r[7]+0x0000000Du); // 801DE614
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 801DE618
  c->r[4]=c->r[29]|c->r[29]; // 801DE61C
  c->r[3]=c->r[31]|c->r[31]; // 801DE620
  c->r[5]=c->r[30]|c->r[30]; // 801DE624
  c->lr=0x801DE62Cu; f_801D4628(c); // 801DE628
  c->r[3]=c->r[31]|c->r[31]; // 801DE62C
  c->r[4]=c->r[29]|c->r[29]; // 801DE630
  c->r[5]=c->r[30]|c->r[30]; // 801DE634
  c->lr=0x801DE63Cu; f_801DCE80(c); // 801DE638
  goto L_801DE918; // 801DE63C
L_801DE640:;
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 801DE640
  c->r[3]=R8(c->r[7]+0x0000000Bu); // 801DE644
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801DE648
  c->r[4]=R8(c->r[7]+0x0000000Au); // 801DE64C
  c->r[0]=c->r[3]+c->r[0]; // 801DE650
  c->r[5]=R8(c->r[7]+0x0000000Du); // 801DE654
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801DE658
  c->lr=0x801DE660u; f_801DCD84(c); // 801DE65C
  goto L_801DE918; // 801DE660
L_801DE664:;
  c->r[3]=c->r[7]+0x0000000Au; // 801DE664
  c->lr=0x801DE66Cu; f_801D4B28(c); // 801DE668
  goto L_801DE918; // 801DE66C
L_801DE670:;
  c->r[3]=c->r[7]+0x0000000Au; // 801DE670
  c->lr=0x801DE678u; f_801D4A9C(c); // 801DE674
  goto L_801DE918; // 801DE678
L_801DE67C:;
  c->r[3]=c->r[7]+0x0000000Au; // 801DE67C
  c->lr=0x801DE684u; f_801DEC2C(c); // 801DE680
  goto L_801DE918; // 801DE684
L_801DE688:;
  c->r[3]=c->r[7]+0x0000000Au; // 801DE688
  c->lr=0x801DE690u; f_801DEF64(c); // 801DE68C
  goto L_801DE918; // 801DE690
L_801DE694:;
  c->r[3]=c->r[7]+0x0000000Au; // 801DE694
  c->lr=0x801DE69Cu; f_801DF27C(c); // 801DE698
  goto L_801DE918; // 801DE69C
L_801DE6A0:;
  c->r[4]=0u+0x803A0000u; // 801DE6A0
  c->r[3]=0u+0x00070000u; // 801DE6A4
  c->r[4]=c->r[4]+0x000005D0u; // 801DE6A8
  c->lr=0x801DE6B0u; f_801CD9D0(c); // 801DE6AC
  c->lr=0x801DE6B4u; f_801D65D4(c); // 801DE6B0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801DE6B4
  if (crb(c,2)) { goto L_801DE918; } // 801DE6B8
  c->r[3]=0u+0x00000000u; // 801DE6BC
  c->lr=0x801DE6C4u; f_801D6490(c); // 801DE6C0
  goto L_801DE918; // 801DE6C4
L_801DE6C8:;
  c->r[29]=R8(c->r[7]+0x0000000Au); // 801DE6C8
  c->r[0]=R8(c->r[7]+0x0000000Bu); // 801DE6CC
  cmps(c,0,(int32_t)c->r[29],0); // 801DE6D0
  W8(c->r[1]+0x0000001Du,c->r[0]); // 801DE6D4
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 801DE6D8
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 801DE6DC
  c->r[0]=R8(c->r[7]+0x0000000Du); // 801DE6E0
  W8(c->r[1]+0x0000001Bu,c->r[0]); // 801DE6E4
  c->r[0]=R8(c->r[7]+0x0000000Eu); // 801DE6E8
  W8(c->r[1]+0x0000001Au,c->r[0]); // 801DE6EC
  c->r[0]=R8(c->r[7]+0x0000000Fu); // 801DE6F0
  W8(c->r[1]+0x00000019u,c->r[0]); // 801DE6F4
  c->r[0]=R8(c->r[7]+0x00000010u); // 801DE6F8
  W8(c->r[1]+0x00000018u,c->r[0]); // 801DE6FC
  c->r[31]=R8(c->r[7]+0x00000011u); // 801DE700
  if (!crb(c,2)) { goto L_801DE714; } // 801DE704
  c->r[4]=c->r[31]|c->r[31]; // 801DE708
  c->r[3]=c->r[1]+0x00000018u; // 801DE70C
  c->lr=0x801DE714u; f_801E935C(c); // 801DE710
L_801DE714:;
  c->r[3]=c->r[29]|c->r[29]; // 801DE714
  c->r[5]=c->r[31]|c->r[31]; // 801DE718
  c->r[4]=c->r[1]+0x00000018u; // 801DE71C
  c->lr=0x801DE724u; f_801D4FE0(c); // 801DE720
  goto L_801DE918; // 801DE724
L_801DE728:;
  c->r[3]=c->r[7]+0x0000000Au; // 801DE728
  c->lr=0x801DE730u; f_801E9028(c); // 801DE72C
  goto L_801DE918; // 801DE730
L_801DE734:;
  c->r[3]=R8(c->r[7]+0x0000000Cu); // 801DE734
  c->r[0]=R8(c->r[7]+0x0000000Fu); // 801DE738
  c->r[4]=rotl(c->r[3],8)&0xFFFFFF00u; // 801DE73C
  c->r[5]=R8(c->r[7]+0x0000000Bu); // 801DE740
  c->r[3]=R8(c->r[7]+0x0000000Eu); // 801DE744
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801DE748
  c->r[4]=c->r[5]+c->r[4]; // 801DE74C
  c->r[30]=R8(c->r[7]+0x0000000Du); // 801DE750
  c->r[31]=rotl(c->r[4],0)&0x0000FFFFu; // 801DE754
  c->r[0]=c->r[3]+c->r[0]; // 801DE758
  c->r[28]=R8(c->r[7]+0x0000000Au); // 801DE75C
  c->r[4]=c->r[31]|c->r[31]; // 801DE760
  c->r[5]=c->r[30]|c->r[30]; // 801DE764
  c->r[29]=rotl(c->r[0],0)&0x0000FFFFu; // 801DE768
  c->r[3]=c->r[28]|c->r[28]; // 801DE76C
  c->lr=0x801DE774u; f_801DA7A4(c); // 801DE770
  c->r[3]=c->r[28]|c->r[28]; // 801DE774
  c->r[4]=c->r[31]|c->r[31]; // 801DE778
  c->r[5]=c->r[30]|c->r[30]; // 801DE77C
  c->r[6]=c->r[29]|c->r[29]; // 801DE780
  c->lr=0x801DE788u; f_801DA35C(c); // 801DE784
  c->r[3]=c->r[28]|c->r[28]; // 801DE788
  c->r[4]=c->r[30]|c->r[30]; // 801DE78C
  c->r[5]=c->r[29]|c->r[29]; // 801DE790
  c->lr=0x801DE798u; f_801E33D0(c); // 801DE794
  goto L_801DE918; // 801DE798
L_801DE79C:;
  c->r[0]=R8(c->r[7]+0x0000000Au); // 801DE79C
  cmps(c,0,(int32_t)c->r[0],0); // 801DE7A0
  if (crb(c,2)) { goto L_801DE918; } // 801DE7A4
  c->r[0]=0u+0x00000001u; // 801DE7A8
  c->r[3]=c->r[7]+0x00000009u; // 801DE7AC
  W8(c->r[7]+0x00000009u,c->r[0]); // 801DE7B0
  c->lr=0x801DE7B8u; f_801D7B1C(c); // 801DE7B4
  goto L_801DE918; // 801DE7B8
L_801DE7BC:;
  c->r[0]=R8(c->r[7]+0x0000000Au); // 801DE7BC
  c->r[3]=c->r[1]+0x00000010u; // 801DE7C0
  W8(c->r[1]+0x00000015u,c->r[0]); // 801DE7C4
  c->r[0]=R8(c->r[7]+0x0000000Bu); // 801DE7C8
  W8(c->r[1]+0x00000014u,c->r[0]); // 801DE7CC
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 801DE7D0
  W8(c->r[1]+0x00000013u,c->r[0]); // 801DE7D4
  c->r[0]=R8(c->r[7]+0x0000000Du); // 801DE7D8
  W8(c->r[1]+0x00000012u,c->r[0]); // 801DE7DC
  c->r[0]=R8(c->r[7]+0x0000000Eu); // 801DE7E0
  W8(c->r[1]+0x00000011u,c->r[0]); // 801DE7E4
  c->r[0]=R8(c->r[7]+0x0000000Fu); // 801DE7E8
  W8(c->r[1]+0x00000010u,c->r[0]); // 801DE7EC
  c->lr=0x801DE7F4u; f_801E9524(c); // 801DE7F0
  c->r[3]=c->r[1]+0x00000010u; // 801DE7F4
  c->lr=0x801DE7FCu; f_801DD9C4(c); // 801DE7F8
  goto L_801DE918; // 801DE7FC
L_801DE800:;
  c->r[0]=R8(c->r[7]+0x0000000Au); // 801DE800
  c->r[3]=c->r[1]+0x00000008u; // 801DE804
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801DE808
  c->r[0]=R8(c->r[7]+0x0000000Bu); // 801DE80C
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801DE810
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 801DE814
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 801DE818
  c->r[0]=R8(c->r[7]+0x0000000Du); // 801DE81C
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801DE820
  c->r[0]=R8(c->r[7]+0x0000000Eu); // 801DE824
  W8(c->r[1]+0x00000009u,c->r[0]); // 801DE828
  c->r[0]=R8(c->r[7]+0x0000000Fu); // 801DE82C
  W8(c->r[1]+0x00000008u,c->r[0]); // 801DE830
  c->lr=0x801DE838u; f_801DD820(c); // 801DE834
  goto L_801DE918; // 801DE838
L_801DE83C:;
  c->r[3]=c->r[7]+0x0000000Au; // 801DE83C
  c->lr=0x801DE844u; f_801DF4FC(c); // 801DE840
  goto L_801DE918; // 801DE844
L_801DE848:;
  c->r[0]=R8(c->r[7]+0x0000000Au); // 801DE848
  cmps(c,0,(int32_t)c->r[0],0); // 801DE84C
  if (!crb(c,2)) { goto L_801DE918; } // 801DE850
  c->r[3]=R8(c->r[7]+0x0000000Cu); // 801DE854
  c->r[0]=R8(c->r[7]+0x0000000Eu); // 801DE858
  c->r[4]=rotl(c->r[3],8)&0xFFFFFF00u; // 801DE85C
  c->r[5]=R8(c->r[7]+0x0000000Bu); // 801DE860
  c->r[3]=R8(c->r[7]+0x0000000Du); // 801DE864
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801DE868
  c->r[4]=c->r[5]+c->r[4]; // 801DE86C
  c->r[0]=c->r[3]+c->r[0]; // 801DE870
  c->r[29]=rotl(c->r[4],0)&0x00000FFFu; // 801DE874
  c->r[28]=rotl(c->r[0],0)&0x0000FFFFu; // 801DE878
  c->r[3]=c->r[29]|c->r[29]; // 801DE87C
  c->r[4]=c->r[28]|c->r[28]; // 801DE880
  c->lr=0x801DE888u; f_801D4F44(c); // 801DE884
  c->r[3]=c->r[29]|c->r[29]; // 801DE888
  c->r[4]=c->r[28]|c->r[28]; // 801DE88C
  c->lr=0x801DE894u; f_801DDD20(c); // 801DE890
  goto L_801DE918; // 801DE894
L_801DE898:;
  c->r[0]=R8(c->r[7]+0x0000000Bu); // 801DE898
  c->r[3]=R8(c->r[7]+0x0000000Au); // 801DE89C
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801DE8A0
  c->r[0]=c->r[3]+c->r[0]; // 801DE8A4
  c->r[3]=rotl(c->r[0],0)&0x00000FFFu; // 801DE8A8
  c->lr=0x801DE8B0u; f_801E88D8(c); // 801DE8AC
  goto L_801DE918; // 801DE8B0
L_801DE8B4:;
  c->r[3]=c->r[7]+0x0000000Au; // 801DE8B4
  c->lr=0x801DE8BCu; f_801DED2C(c); // 801DE8B8
  goto L_801DE918; // 801DE8BC
L_801DE8C0:;
  c->r[4]=R8(c->r[7]+0x0000000Cu); // 801DE8C0
  c->r[3]=R8(c->r[7]+0x00000010u); // 801DE8C4
  c->r[0]=R8(c->r[7]+0x00000012u); // 801DE8C8
  c->r[6]=rotl(c->r[4],8)&0xFFFFFF00u; // 801DE8CC
  c->r[8]=R8(c->r[7]+0x0000000Bu); // 801DE8D0
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 801DE8D4
  c->r[5]=R8(c->r[7]+0x0000000Fu); // 801DE8D8
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801DE8DC
  c->r[9]=c->r[8]+c->r[6]; // 801DE8E0
  c->r[4]=R8(c->r[7]+0x00000011u); // 801DE8E4
  c->r[8]=c->r[5]+c->r[3]; // 801DE8E8
  c->r[3]=R8(c->r[7]+0x0000000Au); // 801DE8EC
  c->r[0]=c->r[4]+c->r[0]; // 801DE8F0
  c->r[5]=R8(c->r[7]+0x0000000Du); // 801DE8F4
  c->r[6]=R8(c->r[7]+0x0000000Eu); // 801DE8F8
  c->r[7]=rotl(c->r[8],0)&0x0000FFFFu; // 801DE8FC
  c->r[4]=rotl(c->r[9],0)&0x0000FFFFu; // 801DE900
  c->r[8]=rotl(c->r[0],0)&0x0000FFFFu; // 801DE904
  c->lr=0x801DE90Cu; f_801DB160(c); // 801DE908
  goto L_801DE918; // 801DE90C
L_801DE910:;
  c->r[3]=c->r[7]+0x0000000Au; // 801DE910
  c->lr=0x801DE918u; f_801D762C(c); // 801DE914
L_801DE918:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 801DE918
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801DE91C
  c->r[30]=R32(c->r[1]+0x00000038u); // 801DE920
  c->r[29]=R32(c->r[1]+0x00000034u); // 801DE924
  c->r[28]=R32(c->r[1]+0x00000030u); // 801DE928
  c->lr=c->r[0]; // 801DE92C
  c->r[1]=c->r[1]+0x00000040u; // 801DE930
  return; // 801DE934
}

// btu_hcif_send_cmd
void f_801DE938(Ctx* __restrict c) {
  trace_call(0x801DE938u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DE938
  c->r[0]=c->lr; // 801DE93C
  cmps(c,0,(int32_t)c->r[3],0); // 801DE940
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DE944
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DE948
  c->r[31]=c->r[3]|c->r[3]; // 801DE94C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DE950
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DE954
  if (crb(c,2)) { goto L_801DE980; } // 801DE958
  c->r[3]=0u+0x80480000u; // 801DE95C
  c->r[3]=c->r[3]+0x00002FB0u; // 801DE960
  c->r[0]=R16(c->r[3]+0x0000006Cu); // 801DE964
  cmps(c,0,(int32_t)c->r[0],0); // 801DE968
  if (crb(c,2)) { goto L_801DE980; } // 801DE96C
  c->r[4]=c->r[31]|c->r[31]; // 801DE970
  c->r[3]=c->r[3]+0x00000064u; // 801DE974
  c->lr=0x801DE97Cu; f_801CB340(c); // 801DE978
  c->r[31]=0u+0x00000000u; // 801DE97C
L_801DE980:;
  c->r[4]=0u+0x80480000u; // 801DE980
  c->r[4]=c->r[4]+0x00002FB0u; // 801DE984
  c->r[0]=R16(c->r[4]+0x00000080u); // 801DE988
  cmps(c,0,(int32_t)c->r[0],0); // 801DE98C
  if (!crb(c,2)) { goto L_801DE9B4; } // 801DE990
  c->r[3]=0u+0x80480000u; // 801DE994
  c->r[3]=c->r[3]+0x000034D8u; // 801DE998
  c->r[0]=R8(c->r[3]+0x0000064Eu); // 801DE99C
  cmps(c,0,(int32_t)c->r[0],0); // 801DE9A0
  if (!crb(c,2)) { goto L_801DE9B4; } // 801DE9A4
  c->r[3]=R16(c->r[4]+0x0000006Cu); // 801DE9A8
  c->r[0]=c->r[3]+0x00000001u; // 801DE9AC
  W16(c->r[4]+0x00000080u,c->r[0]); // 801DE9B0
L_801DE9B4:;
  c->r[3]=0u+0x80480000u; // 801DE9B4
  c->r[30]=c->r[3]+0x00002FB0u; // 801DE9B8
  goto L_801DEA80; // 801DE9BC
L_801DE9C0:;
  cmps(c,0,(int32_t)c->r[31],0); // 801DE9C0
  if (!crb(c,2)) { goto L_801DE9D4; } // 801DE9C4
  c->r[3]=c->r[30]+0x00000064u; // 801DE9C8
  c->lr=0x801DE9D0u; f_801CB5C0(c); // 801DE9CC
  c->r[31]=c->r[3]|c->r[3]; // 801DE9D0
L_801DE9D4:;
  cmps(c,0,(int32_t)c->r[31],0); // 801DE9D4
  if (crb(c,2)) { goto L_801DEA8C; } // 801DE9D8
  c->r[0]=R16(c->r[31]+0x00000004u); // 801DE9DC
  c->r[3]=c->r[31]+c->r[0]; // 801DE9E0
  c->r[0]=R8(c->r[3]+0x00000009u); // 801DE9E4
  c->r[3]=R8(c->r[3]+0x00000008u); // 801DE9E8
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801DE9EC
  c->r[0]=c->r[3]+c->r[0]; // 801DE9F0
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801DE9F4
  cmpu(c,0,c->r[0],0x00000C03u); // 801DE9F8
  if (crb(c,2)) { goto L_801DEA64; } // 801DE9FC
  cmpu(c,0,c->r[0],0x00000C35u); // 801DEA00
  if (crb(c,2)) { goto L_801DEA64; } // 801DEA04
  c->r[3]=0u+0x00000002u; // 801DEA08
  c->lr=0x801DEA10u; f_801CAE20(c); // 801DEA0C
  cmps(c,0,(int32_t)c->r[3],0); // 801DEA10
  c->r[29]=c->r[3]|c->r[3]; // 801DEA14
  if (crb(c,2)) { goto L_801DEA64; } // 801DEA18
  c->r[4]=c->r[31]|c->r[31]; // 801DEA1C
  c->r[5]=0u+0x00000008u; // 801DEA20
  c->lr=0x801DEA28u; f_80004000(c); // 801DEA24
  c->r[3]=R16(c->r[29]+0x00000004u); // 801DEA28
  c->r[0]=R16(c->r[31]+0x00000004u); // 801DEA2C
  c->r[3]=c->r[29]+c->r[3]; // 801DEA30
  c->r[5]=R16(c->r[31]+0x00000002u); // 801DEA34
  c->r[4]=c->r[31]+c->r[0]; // 801DEA38
  c->r[3]=c->r[3]+0x00000008u; // 801DEA3C
  c->r[4]=c->r[4]+0x00000008u; // 801DEA40
  c->lr=0x801DEA48u; f_80004000(c); // 801DEA44
  c->r[4]=c->r[29]|c->r[29]; // 801DEA48
  c->r[3]=c->r[30]+0x00000070u; // 801DEA4C
  c->lr=0x801DEA54u; f_801CB340(c); // 801DEA50
  c->r[3]=c->r[30]+0x0000004Cu; // 801DEA54
  c->r[4]=0u+0x0000003Cu; // 801DEA58
  c->r[5]=0u+0x00000008u; // 801DEA5C
  c->lr=0x801DEA64u; f_801CDFE0(c); // 801DEA60
L_801DEA64:;
  c->r[5]=R16(c->r[30]+0x00000080u); // 801DEA64
  c->r[3]=c->r[31]|c->r[31]; // 801DEA68
  c->r[4]=0u+0x00002000u; // 801DEA6C
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 801DEA70
  W16(c->r[30]+0x00000080u,c->r[0]); // 801DEA74
  c->lr=0x801DEA7Cu; f_801CD810(c); // 801DEA78
  c->r[31]=0u+0x00000000u; // 801DEA7C
L_801DEA80:;
  c->r[0]=R16(c->r[30]+0x00000080u); // 801DEA80
  cmps(c,0,(int32_t)c->r[0],0); // 801DEA84
  if (!crb(c,2)) { IRQCHK(c); goto L_801DE9C0; } // 801DEA88
L_801DEA8C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801DEA8C
  if (crb(c,2)) { goto L_801DEAA8; } // 801DEA90
  c->r[3]=0u+0x80480000u; // 801DEA94
  c->r[4]=c->r[31]|c->r[31]; // 801DEA98
  c->r[3]=c->r[3]+0x00002FB0u; // 801DEA9C
  c->r[3]=c->r[3]+0x00000064u; // 801DEAA0
  c->lr=0x801DEAA8u; f_801CB340(c); // 801DEAA4
L_801DEAA8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DEAA8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DEAAC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DEAB0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DEAB4
  c->lr=c->r[0]; // 801DEAB8
  c->r[1]=c->r[1]+0x00000020u; // 801DEABC
  return; // 801DEAC0
}

// btu_hcif_connection_comp_evt
void f_801DEAC4(Ctx* __restrict c) {
  trace_call(0x801DEAC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DEAC4
  c->r[0]=c->lr; // 801DEAC8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DEACC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801DEAD0
  W32(c->r[1]+0x00000028u,c->r[30]); // 801DEAD4
  c->r[0]=R8(c->r[3]+0x00000002u); // 801DEAD8
  c->r[31]=R8(c->r[3]+0x00000000u); // 801DEADC
  c->r[4]=rotl(c->r[0],8)&0xFFFFFF00u; // 801DEAE0
  c->r[5]=R8(c->r[3]+0x00000001u); // 801DEAE4
  c->r[0]=R8(c->r[3]+0x00000003u); // 801DEAE8
  c->r[4]=c->r[5]+c->r[4]; // 801DEAEC
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801DEAF0
  c->r[30]=rotl(c->r[4],0)&0x00000FFFu; // 801DEAF4
  c->r[0]=R8(c->r[3]+0x00000004u); // 801DEAF8
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801DEAFC
  c->r[0]=R8(c->r[3]+0x00000005u); // 801DEB00
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 801DEB04
  c->r[0]=R8(c->r[3]+0x00000006u); // 801DEB08
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801DEB0C
  c->r[0]=R8(c->r[3]+0x00000007u); // 801DEB10
  W8(c->r[1]+0x00000009u,c->r[0]); // 801DEB14
  c->r[0]=R8(c->r[3]+0x00000008u); // 801DEB18
  W8(c->r[1]+0x00000008u,c->r[0]); // 801DEB1C
  c->r[0]=R8(c->r[3]+0x00000009u); // 801DEB20
  c->r[6]=R8(c->r[3]+0x0000000Au); // 801DEB24
  cmpu(c,0,c->r[0],0x00000001u); // 801DEB28
  if (!crb(c,2)) { goto L_801DEB54; } // 801DEB2C
  c->r[4]=c->r[30]|c->r[30]; // 801DEB30
  c->r[5]=c->r[31]|c->r[31]; // 801DEB34
  c->r[3]=c->r[1]+0x00000008u; // 801DEB38
  c->lr=0x801DEB40u; f_801DCFFC(c); // 801DEB3C
  c->r[3]=c->r[31]|c->r[31]; // 801DEB40
  c->r[4]=c->r[30]|c->r[30]; // 801DEB44
  c->r[5]=c->r[1]+0x00000008u; // 801DEB48
  c->lr=0x801DEB50u; f_801E8530(c); // 801DEB4C
  goto L_801DEB88; // 801DEB50
L_801DEB54:;
  c->r[3]=c->r[1]+0x00000010u; // 801DEB54
  c->r[4]=0u+0x00000000u; // 801DEB58
  c->r[5]=0u+0x0000000Eu; // 801DEB5C
  c->lr=0x801DEB64u; f_80004350(c); // 801DEB60
  c->r[3]=c->r[1]+0x00000014u; // 801DEB64
  c->r[4]=c->r[1]+0x00000008u; // 801DEB68
  c->r[5]=0u+0x00000006u; // 801DEB6C
  c->lr=0x801DEB74u; f_80004000(c); // 801DEB70
  c->r[3]=c->r[31]|c->r[31]; // 801DEB74
  c->r[5]=c->r[30]|c->r[30]; // 801DEB78
  c->r[4]=c->r[1]+0x00000008u; // 801DEB7C
  c->r[6]=c->r[1]+0x00000010u; // 801DEB80
  c->lr=0x801DEB88u; f_801DAB10(c); // 801DEB84
L_801DEB88:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801DEB88
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801DEB8C
  c->r[30]=R32(c->r[1]+0x00000028u); // 801DEB90
  c->lr=c->r[0]; // 801DEB94
  c->r[1]=c->r[1]+0x00000030u; // 801DEB98
  return; // 801DEB9C
}

// btu_hcif_connection_request_evt
void f_801DEBA0(Ctx* __restrict c) {
  trace_call(0x801DEBA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DEBA0
  c->r[0]=c->lr; // 801DEBA4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DEBA8
  c->r[0]=R8(c->r[3]+0x00000000u); // 801DEBAC
  W8(c->r[1]+0x00000011u,c->r[0]); // 801DEBB0
  c->r[0]=R8(c->r[3]+0x00000001u); // 801DEBB4
  W8(c->r[1]+0x00000010u,c->r[0]); // 801DEBB8
  c->r[0]=R8(c->r[3]+0x00000002u); // 801DEBBC
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 801DEBC0
  c->r[0]=R8(c->r[3]+0x00000003u); // 801DEBC4
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 801DEBC8
  c->r[0]=R8(c->r[3]+0x00000004u); // 801DEBCC
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801DEBD0
  c->r[0]=R8(c->r[3]+0x00000005u); // 801DEBD4
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801DEBD8
  c->r[0]=R8(c->r[3]+0x00000006u); // 801DEBDC
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801DEBE0
  c->r[0]=R8(c->r[3]+0x00000007u); // 801DEBE4
  W8(c->r[1]+0x00000009u,c->r[0]); // 801DEBE8
  c->r[0]=R8(c->r[3]+0x00000008u); // 801DEBEC
  W8(c->r[1]+0x00000008u,c->r[0]); // 801DEBF0
  c->r[5]=R8(c->r[3]+0x00000009u); // 801DEBF4
  cmpu(c,0,c->r[5],0x00000001u); // 801DEBF8
  if (!crb(c,2)) { goto L_801DEC10; } // 801DEBFC
  c->r[3]=c->r[1]+0x0000000Cu; // 801DEC00
  c->r[4]=c->r[1]+0x00000008u; // 801DEC04
  c->lr=0x801DEC0Cu; f_801DC51C(c); // 801DEC08
  goto L_801DEC1C; // 801DEC0C
L_801DEC10:;
  c->r[3]=c->r[1]+0x0000000Cu; // 801DEC10
  c->r[4]=c->r[1]+0x00000008u; // 801DEC14
  c->lr=0x801DEC1Cu; f_801DA930(c); // 801DEC18
L_801DEC1C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DEC1C
  c->lr=c->r[0]; // 801DEC20
  c->r[1]=c->r[1]+0x00000020u; // 801DEC24
  return; // 801DEC28
}

// btu_hcif_qos_setup_comp_evt
void f_801DEC2C(Ctx* __restrict c) {
  trace_call(0x801DEC2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DEC2C
  c->r[0]=c->lr; // 801DEC30
  c->r[6]=c->r[3]|c->r[3]; // 801DEC34
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DEC38
  c->r[5]=c->r[1]+0x00000008u; // 801DEC3C
  c->r[4]=R8(c->r[6]+0x00000002u); // 801DEC40
  c->r[3]=R8(c->r[3]+0x00000000u); // 801DEC44
  c->r[7]=R8(c->r[6]+0x00000001u); // 801DEC48
  c->r[4]=rotl(c->r[4],8)&0xFFFFFF00u; // 801DEC4C
  c->r[0]=R8(c->r[6]+0x00000003u); // 801DEC50
  c->r[4]=c->r[7]+c->r[4]; // 801DEC54
  W8(c->r[1]+0x00000008u,c->r[0]); // 801DEC58
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 801DEC5C
  c->r[0]=R8(c->r[6]+0x00000004u); // 801DEC60
  W8(c->r[1]+0x00000009u,c->r[0]); // 801DEC64
  c->r[7]=R8(c->r[6]+0x00000008u); // 801DEC68
  c->r[8]=R8(c->r[6]+0x00000007u); // 801DEC6C
  c->r[0]=R8(c->r[6]+0x00000006u); // 801DEC70
  c->r[9]=rotl(c->r[7],24)&0xFF000000u; // 801DEC74
  c->r[7]=R8(c->r[6]+0x00000005u); // 801DEC78
  c->r[8]=rotl(c->r[8],16)&0xFFFF0000u; // 801DEC7C
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801DEC80
  c->r[7]=c->r[8]+c->r[7]; // 801DEC84
  c->r[0]=c->r[9]+c->r[0]; // 801DEC88
  c->r[0]=c->r[7]+c->r[0]; // 801DEC8C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801DEC90
  c->r[7]=R8(c->r[6]+0x0000000Cu); // 801DEC94
  c->r[8]=R8(c->r[6]+0x0000000Bu); // 801DEC98
  c->r[0]=R8(c->r[6]+0x0000000Au); // 801DEC9C
  c->r[9]=rotl(c->r[7],24)&0xFF000000u; // 801DECA0
  c->r[7]=R8(c->r[6]+0x00000009u); // 801DECA4
  c->r[8]=rotl(c->r[8],16)&0xFFFF0000u; // 801DECA8
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801DECAC
  c->r[7]=c->r[8]+c->r[7]; // 801DECB0
  c->r[0]=c->r[9]+c->r[0]; // 801DECB4
  c->r[0]=c->r[7]+c->r[0]; // 801DECB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DECBC
  c->r[7]=R8(c->r[6]+0x00000010u); // 801DECC0
  c->r[8]=R8(c->r[6]+0x0000000Fu); // 801DECC4
  c->r[0]=R8(c->r[6]+0x0000000Eu); // 801DECC8
  c->r[9]=rotl(c->r[7],24)&0xFF000000u; // 801DECCC
  c->r[7]=R8(c->r[6]+0x0000000Du); // 801DECD0
  c->r[8]=rotl(c->r[8],16)&0xFFFF0000u; // 801DECD4
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801DECD8
  c->r[7]=c->r[8]+c->r[7]; // 801DECDC
  c->r[0]=c->r[9]+c->r[0]; // 801DECE0
  c->r[0]=c->r[7]+c->r[0]; // 801DECE4
  W32(c->r[1]+0x00000018u,c->r[0]); // 801DECE8
  c->r[8]=R8(c->r[6]+0x00000014u); // 801DECEC
  c->r[7]=R8(c->r[6]+0x00000013u); // 801DECF0
  c->r[0]=R8(c->r[6]+0x00000012u); // 801DECF4
  c->r[8]=rotl(c->r[8],24)&0xFF000000u; // 801DECF8
  c->r[6]=R8(c->r[6]+0x00000011u); // 801DECFC
  c->r[7]=rotl(c->r[7],16)&0xFFFF0000u; // 801DED00
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801DED04
  c->r[6]=c->r[7]+c->r[6]; // 801DED08
  c->r[0]=c->r[8]+c->r[0]; // 801DED0C
  c->r[0]=c->r[6]+c->r[0]; // 801DED10
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801DED14
  c->lr=0x801DED1Cu; f_801D5414(c); // 801DED18
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DED1C
  c->lr=c->r[0]; // 801DED20
  c->r[1]=c->r[1]+0x00000020u; // 801DED24
  return; // 801DED28
}

// btu_hcif_esco_connection_comp_evt
void f_801DED2C(Ctx* __restrict c) {
  trace_call(0x801DED2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DED2C
  c->r[0]=c->lr; // 801DED30
  c->r[5]=0u+0x00000006u; // 801DED34
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DED38
  c->r[4]=c->r[1]+0x00000008u; // 801DED3C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801DED40
  W32(c->r[1]+0x00000028u,c->r[30]); // 801DED44
  c->r[0]=R8(c->r[3]+0x00000002u); // 801DED48
  c->r[31]=R8(c->r[3]+0x00000000u); // 801DED4C
  c->r[6]=rotl(c->r[0],8)&0xFFFFFF00u; // 801DED50
  c->r[7]=R8(c->r[3]+0x00000001u); // 801DED54
  c->r[0]=R8(c->r[3]+0x00000003u); // 801DED58
  c->r[6]=c->r[7]+c->r[6]; // 801DED5C
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801DED60
  c->r[30]=rotl(c->r[6],0)&0x0000FFFFu; // 801DED64
  c->r[0]=R8(c->r[3]+0x00000004u); // 801DED68
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801DED6C
  c->r[0]=R8(c->r[3]+0x00000005u); // 801DED70
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 801DED74
  c->r[0]=R8(c->r[3]+0x00000006u); // 801DED78
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801DED7C
  c->r[0]=R8(c->r[3]+0x00000007u); // 801DED80
  W8(c->r[1]+0x00000009u,c->r[0]); // 801DED84
  c->r[0]=R8(c->r[3]+0x00000008u); // 801DED88
  W8(c->r[1]+0x00000008u,c->r[0]); // 801DED8C
  c->r[0]=R8(c->r[3]+0x00000009u); // 801DED90
  W8(c->r[1]+0x0000001Au,c->r[0]); // 801DED94
  c->r[0]=R8(c->r[3]+0x0000000Au); // 801DED98
  W8(c->r[1]+0x0000001Bu,c->r[0]); // 801DED9C
  c->r[0]=R8(c->r[3]+0x0000000Bu); // 801DEDA0
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 801DEDA4
  c->r[0]=R8(c->r[3]+0x0000000Du); // 801DEDA8
  c->r[6]=R8(c->r[3]+0x0000000Cu); // 801DEDAC
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801DEDB0
  c->r[0]=c->r[6]+c->r[0]; // 801DEDB4
  W16(c->r[1]+0x00000010u,c->r[0]); // 801DEDB8
  c->r[0]=R8(c->r[3]+0x0000000Fu); // 801DEDBC
  c->r[6]=R8(c->r[3]+0x0000000Eu); // 801DEDC0
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801DEDC4
  c->r[0]=c->r[6]+c->r[0]; // 801DEDC8
  W16(c->r[1]+0x00000012u,c->r[0]); // 801DEDCC
  c->r[0]=R8(c->r[3]+0x00000010u); // 801DEDD0
  c->r[3]=c->r[1]+0x00000014u; // 801DEDD4
  W8(c->r[1]+0x0000001Du,c->r[0]); // 801DEDD8
  c->lr=0x801DEDE0u; f_80004000(c); // 801DEDDC
  c->r[3]=c->r[31]|c->r[31]; // 801DEDE0
  c->r[5]=c->r[30]|c->r[30]; // 801DEDE4
  c->r[4]=c->r[1]+0x00000008u; // 801DEDE8
  c->r[6]=c->r[1]+0x00000010u; // 801DEDEC
  c->lr=0x801DEDF4u; f_801DAB10(c); // 801DEDF0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801DEDF4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801DEDF8
  c->r[30]=R32(c->r[1]+0x00000028u); // 801DEDFC
  c->lr=c->r[0]; // 801DEE00
  c->r[1]=c->r[1]+0x00000030u; // 801DEE04
  return; // 801DEE08
}

// btu_hcif_hdl_command_complete
void f_801DEE0C(Ctx* __restrict c) {
  trace_call(0x801DEE0Cu);
  cmps(c,0,(int32_t)c->r[3],3092); // 801DEE0C
  c->r[6]=c->r[3]|c->r[3]; // 801DEE10
  if (crb(c,2)) { goto L_801DEF1C; } // 801DEE14
  if (!crb(c,0)) { goto L_801DEE70; } // 801DEE18
  cmps(c,0,(int32_t)c->r[3],3077); // 801DEE1C
  if (crb(c,2)) { goto L_801DEED0; } // 801DEE20
  if (!crb(c,0)) { goto L_801DEE4C; } // 801DEE24
  cmps(c,0,(int32_t)c->r[3],2060); // 801DEE28
  if (crb(c,2)) { goto L_801DEEFC; } // 801DEE2C
  if (!crb(c,0)) { goto L_801DEE40; } // 801DEE30
  cmps(c,0,(int32_t)c->r[3],1026); // 801DEE34
  if (crb(c,2)) { goto L_801DEEC8; } // 801DEE38
  goto L_801DEF44; // 801DEE3C
L_801DEE40:;
  cmps(c,0,(int32_t)c->r[3],3075); // 801DEE40
  if (crb(c,2)) { goto L_801DEEC4; } // 801DEE44
  goto L_801DEF44; // 801DEE48
L_801DEE4C:;
  cmps(c,0,(int32_t)c->r[3],3089); // 801DEE4C
  if (crb(c,2)) { goto L_801DEEE0; } // 801DEE50
  if (!crb(c,0)) { goto L_801DEE64; } // 801DEE54
  cmps(c,0,(int32_t)c->r[3],3085); // 801DEE58
  if (crb(c,2)) { goto L_801DEED8; } // 801DEE5C
  goto L_801DEF44; // 801DEE60
L_801DEE64:;
  cmps(c,0,(int32_t)c->r[3],3091); // 801DEE64
  if (!crb(c,0)) { goto L_801DEF44; } // 801DEE68
  goto L_801DEEE8; // 801DEE6C
L_801DEE70:;
  cmps(c,0,(int32_t)c->r[3],4105); // 801DEE70
  if (crb(c,2)) { goto L_801DEF28; } // 801DEE74
  if (!crb(c,0)) { goto L_801DEEA0; } // 801DEE78
  cmps(c,0,(int32_t)c->r[3],4099); // 801DEE7C
  if (crb(c,2)) { goto L_801DEF10; } // 801DEE80
  if (!crb(c,0)) { goto L_801DEE94; } // 801DEE84
  cmps(c,0,(int32_t)c->r[3],4097); // 801DEE88
  if (crb(c,2)) { goto L_801DEEF0; } // 801DEE8C
  goto L_801DEF44; // 801DEE90
L_801DEE94:;
  cmps(c,0,(int32_t)c->r[3],4101); // 801DEE94
  if (crb(c,2)) { goto L_801DEF04; } // 801DEE98
  goto L_801DEF44; // 801DEE9C
L_801DEEA0:;
  cmps(c,0,(int32_t)c->r[3],5124); // 801DEEA0
  if (crb(c,2)) { goto L_801DEF44; } // 801DEEA4
  if (!crb(c,0)) { goto L_801DEEB8; } // 801DEEA8
  cmps(c,0,(int32_t)c->r[3],5123); // 801DEEAC
  if (!crb(c,0)) { goto L_801DEF34; } // 801DEEB0
  goto L_801DEF44; // 801DEEB4
L_801DEEB8:;
  cmps(c,0,(int32_t)c->r[3],5126); // 801DEEB8
  if (!crb(c,0)) { goto L_801DEF44; } // 801DEEBC
  goto L_801DEF3C; // 801DEEC0
L_801DEEC4:;
  f_801D6978(c); return; // 801DEEC4
L_801DEEC8:;
  c->r[3]=0u+0x00000000u; // 801DEEC8
  f_801D94A8(c); return; // 801DEECC
L_801DEED0:;
  c->r[3]=c->r[4]|c->r[4]; // 801DEED0
  f_801D9010(c); return; // 801DEED4
L_801DEED8:;
  c->r[3]=c->r[4]|c->r[4]; // 801DEED8
  f_801D79DC(c); return; // 801DEEDC
L_801DEEE0:;
  c->r[3]=c->r[4]|c->r[4]; // 801DEEE0
  f_801D7A58(c); return; // 801DEEE4
L_801DEEE8:;
  c->r[3]=c->r[4]|c->r[4]; // 801DEEE8
  f_801D7AB4(c); return; // 801DEEEC
L_801DEEF0:;
  c->r[3]=c->r[4]|c->r[4]; // 801DEEF0
  c->r[4]=c->r[5]|c->r[5]; // 801DEEF4
  f_801D6C04(c); return; // 801DEEF8
L_801DEEFC:;
  c->r[3]=c->r[4]|c->r[4]; // 801DEEFC
  f_801D4998(c); return; // 801DEF00
L_801DEF04:;
  c->r[3]=c->r[4]|c->r[4]; // 801DEF04
  c->r[4]=c->r[5]|c->r[5]; // 801DEF08
  f_801D6B3C(c); return; // 801DEF0C
L_801DEF10:;
  c->r[3]=c->r[4]|c->r[4]; // 801DEF10
  c->r[4]=c->r[5]|c->r[5]; // 801DEF14
  f_801D6CC0(c); return; // 801DEF18
L_801DEF1C:;
  c->r[3]=c->r[4]|c->r[4]; // 801DEF1C
  c->r[4]=c->r[5]|c->r[5]; // 801DEF20
  f_801D7274(c); return; // 801DEF24
L_801DEF28:;
  c->r[3]=c->r[4]|c->r[4]; // 801DEF28
  c->r[4]=c->r[5]|c->r[5]; // 801DEF2C
  f_801D7340(c); return; // 801DEF30
L_801DEF34:;
  c->r[3]=c->r[4]|c->r[4]; // 801DEF34
  f_801D5880(c); return; // 801DEF38
L_801DEF3C:;
  c->r[3]=c->r[4]|c->r[4]; // 801DEF3C
  f_801D5764(c); return; // 801DEF40
L_801DEF44:;
  c->r[3]=rotl(c->r[3],0)&0x0000FC00u; // 801DEF44
  c->r[0]=c->r[3]+0x00000000u; // 801DEF48
  cmpu(c,0,c->r[0],0x0000FC00u); // 801DEF4C
  if (!crb(c,2)) return; // 801DEF50
  c->r[3]=c->r[4]|c->r[4]; // 801DEF54
  c->r[4]=c->r[6]|c->r[6]; // 801DEF58
  f_801D7588(c); return; // 801DEF5C
}

// fn_801DEF60
void f_801DEF60(Ctx* __restrict c) {
  trace_call(0x801DEF60u);
  return; // 801DEF60
}

// btu_hcif_command_complete_evt
void f_801DEF64(Ctx* __restrict c) {
  trace_call(0x801DEF64u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DEF64
  c->r[0]=c->lr; // 801DEF68
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DEF6C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DEF70
  c->r[31]=0u+0x80480000u; // 801DEF74
  c->r[31]=c->r[31]+0x00002FB0u; // 801DEF78
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DEF7C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DEF80
  c->r[29]=c->r[4]|c->r[4]; // 801DEF84
  W32(c->r[1]+0x00000010u,c->r[28]); // 801DEF88
  c->r[28]=c->r[3]|c->r[3]; // 801DEF8C
  c->r[0]=R8(c->r[3]+0x00000000u); // 801DEF90
  W16(c->r[31]+0x00000080u,c->r[0]); // 801DEF94
  c->r[0]=R8(c->r[3]+0x00000002u); // 801DEF98
  c->r[3]=R8(c->r[3]+0x00000001u); // 801DEF9C
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801DEFA0
  c->r[0]=c->r[3]+c->r[0]; // 801DEFA4
  c->r[30]=rotl(c->r[0],0)&0x0000FFFFu; // 801DEFA8
  cmpu(c,0,c->r[30],0x00000C03u); // 801DEFAC
  if (crb(c,2)) { goto L_801DF040; } // 801DEFB0
  cmpu(c,0,c->r[30],0x00000C35u); // 801DEFB4
  if (crb(c,2)) { goto L_801DF040; } // 801DEFB8
  cmps(c,0,(int32_t)c->r[30],0); // 801DEFBC
  if (crb(c,2)) { goto L_801DF040; } // 801DEFC0
  c->r[3]=c->r[31]+0x00000070u; // 801DEFC4
  c->lr=0x801DEFCCu; f_801CB5C0(c); // 801DEFC8
  cmps(c,0,(int32_t)c->r[3],0); // 801DEFCC
  if (crb(c,2)) { goto L_801DF00C; } // 801DEFD0
  c->r[0]=R8(c->r[3]+0x00000009u); // 801DEFD4
  cmpu(c,0,c->r[30],0x0000FC4Cu); // 801DEFD8
  c->r[4]=R8(c->r[3]+0x00000008u); // 801DEFDC
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801DEFE0
  c->r[0]=c->r[4]+c->r[0]; // 801DEFE4
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801DEFE8
  if (!crb(c,2)) { goto L_801DF008; } // 801DEFEC
  cmpu(c,0,c->r[0],c->r[30]); // 801DEFF0
  if (crb(c,2)) { goto L_801DF008; } // 801DEFF4
  c->r[4]=c->r[3]|c->r[3]; // 801DEFF8
  c->r[3]=c->r[31]+0x00000070u; // 801DEFFC
  c->lr=0x801DF004u; f_801CB480(c); // 801DF000
  goto L_801DF05C; // 801DF004
L_801DF008:;
  c->lr=0x801DF00Cu; f_801CAF10(c); // 801DF008
L_801DF00C:;
  c->r[31]=0u+0x80480000u; // 801DF00C
  c->r[31]=c->r[31]+0x00002FB0u; // 801DF010
  c->r[3]=c->r[31]+0x00000070u; // 801DF014
  c->lr=0x801DF01Cu; f_801CB760(c); // 801DF018
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801DF01C
  if (!crb(c,2)) { goto L_801DF038; } // 801DF020
  c->r[3]=c->r[31]+0x0000004Cu; // 801DF024
  c->r[4]=0u+0x0000003Cu; // 801DF028
  c->r[5]=0u+0x00000008u; // 801DF02C
  c->lr=0x801DF034u; f_801CDFE0(c); // 801DF030
  goto L_801DF040; // 801DF034
L_801DF038:;
  c->r[3]=c->r[31]+0x0000004Cu; // 801DF038
  c->lr=0x801DF040u; f_801CE050(c); // 801DF03C
L_801DF040:;
  c->r[0]=c->r[29]+0xFFFFFFFDu; // 801DF040
  c->r[3]=c->r[30]|c->r[30]; // 801DF044
  c->r[4]=c->r[28]+0x00000003u; // 801DF048
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 801DF04C
  c->lr=0x801DF054u; f_801DEE0C(c); // 801DF050
  c->r[3]=0u+0x00000000u; // 801DF054
  c->lr=0x801DF05Cu; f_801DE938(c); // 801DF058
L_801DF05C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DF05C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DF060
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DF064
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DF068
  c->r[28]=R32(c->r[1]+0x00000010u); // 801DF06C
  c->lr=c->r[0]; // 801DF070
  c->r[1]=c->r[1]+0x00000020u; // 801DF074
  return; // 801DF078
}

// btu_hcif_hdl_command_status
void f_801DF07C(Ctx* __restrict c) {
  trace_call(0x801DF07Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF07C
  c->r[0]=c->lr; // 801DF080
  cmps(c,0,(int32_t)c->r[3],2050); // 801DF084
  c->r[6]=c->r[3]|c->r[3]; // 801DF088
  W32(c->r[1]+0x00000034u,c->r[0]); // 801DF08C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801DF090
  W32(c->r[1]+0x00000028u,c->r[30]); // 801DF094
  c->r[30]=c->r[4]|c->r[4]; // 801DF098
  if (crb(c,2)) { goto L_801DF0C4; } // 801DF09C
  if (!crb(c,0)) { goto L_801DF0B0; } // 801DF0A0
  cmps(c,0,(int32_t)c->r[3],2049); // 801DF0A4
  if (!crb(c,0)) { goto L_801DF0B8; } // 801DF0A8
  goto L_801DF0C4; // 801DF0AC
L_801DF0B0:;
  cmps(c,0,(int32_t)c->r[3],2055); // 801DF0B0
  if (!crb(c,0)) { goto L_801DF0C4; } // 801DF0B4
L_801DF0B8:;
  c->r[3]=c->r[30]|c->r[30]; // 801DF0B8
  c->lr=0x801DF0C0u; f_801DA2AC(c); // 801DF0BC
  goto L_801DF264; // 801DF0C0
L_801DF0C4:;
  cmps(c,0,(int32_t)c->r[4],0); // 801DF0C4
  if (crb(c,2)) { goto L_801DF264; } // 801DF0C8
  cmps(c,0,(int32_t)c->r[3],1049); // 801DF0CC
  if (crb(c,2)) { goto L_801DF120; } // 801DF0D0
  if (!crb(c,0)) { goto L_801DF0FC; } // 801DF0D4
  cmps(c,0,(int32_t)c->r[3],1025); // 801DF0D8
  if (crb(c,2)) { goto L_801DF114; } // 801DF0DC
  if (!crb(c,0)) { goto L_801DF0F0; } // 801DF0E0
  cmps(c,0,(int32_t)c->r[3],13); // 801DF0E4
  if (crb(c,2)) { goto L_801DF148; } // 801DF0E8
  goto L_801DF244; // 801DF0EC
L_801DF0F0:;
  cmps(c,0,(int32_t)c->r[3],1029); // 801DF0F0
  if (crb(c,2)) { goto L_801DF174; } // 801DF0F4
  goto L_801DF244; // 801DF0F8
L_801DF0FC:;
  cmps(c,0,(int32_t)c->r[3],2059); // 801DF0FC
  if (crb(c,2)) { goto L_801DF15C; } // 801DF100
  if (!crb(c,0)) { goto L_801DF244; } // 801DF104
  cmps(c,0,(int32_t)c->r[3],1064); // 801DF108
  if (crb(c,2)) { goto L_801DF1E0; } // 801DF10C
  goto L_801DF244; // 801DF110
L_801DF114:;
  c->r[3]=c->r[30]|c->r[30]; // 801DF114
  c->lr=0x801DF11Cu; f_801D94A8(c); // 801DF118
  goto L_801DF264; // 801DF11C
L_801DF120:;
  c->r[6]=c->r[30]|c->r[30]; // 801DF120
  c->r[3]=0u+0x00000000u; // 801DF124
  c->r[4]=0u+0x00000000u; // 801DF128
  c->r[5]=0u+0x00000000u; // 801DF12C
  c->lr=0x801DF134u; f_801D96FC(c); // 801DF130
  c->r[5]=c->r[30]|c->r[30]; // 801DF134
  c->r[3]=0u+0x00000000u; // 801DF138
  c->r[4]=0u+0x00000000u; // 801DF13C
  c->lr=0x801DF144u; f_801DC758(c); // 801DF140
  goto L_801DF264; // 801DF144
L_801DF148:;
  c->r[3]=c->r[30]|c->r[30]; // 801DF148
  c->r[4]=0u+0x00000000u; // 801DF14C
  c->r[5]=0u+0x00000000u; // 801DF150
  c->lr=0x801DF158u; f_801D5414(c); // 801DF154
  goto L_801DF264; // 801DF158
L_801DF15C:;
  c->r[3]=c->r[30]|c->r[30]; // 801DF15C
  c->r[4]=0u+0x00000000u; // 801DF160
  c->r[5]=0u+0x000000FFu; // 801DF164
  c->lr=0x801DF16Cu; f_801D4FE0(c); // 801DF168
  c->lr=0x801DF170u; f_801E93DC(c); // 801DF16C
  goto L_801DF264; // 801DF170
L_801DF174:;
  cmps(c,0,(int32_t)c->r[5],0); // 801DF174
  if (crb(c,2)) { goto L_801DF264; } // 801DF178
  c->r[4]=R8(c->r[5]+0x00000001u); // 801DF17C
  c->r[31]=0u+0x00010000u; // 801DF180
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 801DF184
  c->r[3]=c->r[1]+0x00000008u; // 801DF188
  W8(c->r[1]+0x0000000Du,c->r[4]); // 801DF18C
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801DF190
  c->r[6]=0u+0x00000000u; // 801DF194
  c->r[0]=R8(c->r[5]+0x00000002u); // 801DF198
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801DF19C
  c->r[0]=R8(c->r[5]+0x00000003u); // 801DF1A0
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 801DF1A4
  c->r[0]=R8(c->r[5]+0x00000004u); // 801DF1A8
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801DF1AC
  c->r[0]=R8(c->r[5]+0x00000005u); // 801DF1B0
  W8(c->r[1]+0x00000009u,c->r[0]); // 801DF1B4
  c->r[0]=R8(c->r[5]+0x00000006u); // 801DF1B8
  c->r[5]=c->r[30]|c->r[30]; // 801DF1BC
  W8(c->r[1]+0x00000008u,c->r[0]); // 801DF1C0
  c->lr=0x801DF1C8u; f_801DCFFC(c); // 801DF1C4
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 801DF1C8
  c->r[3]=c->r[30]|c->r[30]; // 801DF1CC
  c->r[5]=c->r[1]+0x00000008u; // 801DF1D0
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801DF1D4
  c->lr=0x801DF1DCu; f_801E8530(c); // 801DF1D8
  goto L_801DF264; // 801DF1DC
L_801DF1E0:;
  cmps(c,0,(int32_t)c->r[5],0); // 801DF1E0
  if (crb(c,2)) { goto L_801DF264; } // 801DF1E4
  c->r[0]=R8(c->r[5]+0x00000002u); // 801DF1E8
  c->r[3]=R8(c->r[5]+0x00000001u); // 801DF1EC
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801DF1F0
  c->r[0]=c->r[3]+c->r[0]; // 801DF1F4
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 801DF1F8
  c->r[3]=c->r[31]|c->r[31]; // 801DF1FC
  c->lr=0x801DF204u; f_801DB264(c); // 801DF200
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801DF204
  if (crb(c,2)) { goto L_801DF22C; } // 801DF208
  c->r[3]=c->r[30]|c->r[30]; // 801DF20C
  c->r[4]=c->r[31]|c->r[31]; // 801DF210
  c->r[5]=0u+0x00000000u; // 801DF214
  c->r[6]=0u+0x00000000u; // 801DF218
  c->r[7]=0u+0x00000000u; // 801DF21C
  c->r[8]=0u+0x00000000u; // 801DF220
  c->lr=0x801DF228u; f_801DB160(c); // 801DF224
  goto L_801DF264; // 801DF228
L_801DF22C:;
  c->r[3]=c->r[30]|c->r[30]; // 801DF22C
  c->r[5]=c->r[31]|c->r[31]; // 801DF230
  c->r[6]=c->r[1]+0x00000010u; // 801DF234
  c->r[4]=0u+0x00000000u; // 801DF238
  c->lr=0x801DF240u; f_801DAB10(c); // 801DF23C
  goto L_801DF264; // 801DF240
L_801DF244:;
  c->r[3]=rotl(c->r[3],0)&0x0000FC00u; // 801DF244
  c->r[0]=c->r[3]+0x00000000u; // 801DF248
  cmpu(c,0,c->r[0],0x0000FC00u); // 801DF24C
  if (!crb(c,2)) { goto L_801DF264; } // 801DF250
  c->r[3]=c->r[5]|c->r[5]; // 801DF254
  c->r[4]=c->r[6]|c->r[6]; // 801DF258
  c->r[5]=0u+0x00000001u; // 801DF25C
  c->lr=0x801DF264u; f_801D7588(c); // 801DF260
L_801DF264:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801DF264
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801DF268
  c->r[30]=R32(c->r[1]+0x00000028u); // 801DF26C
  c->lr=c->r[0]; // 801DF270
  c->r[1]=c->r[1]+0x00000030u; // 801DF274
  return; // 801DF278
}

// btu_hcif_command_status_evt
void f_801DF27C(Ctx* __restrict c) {
  trace_call(0x801DF27Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF27C
  c->r[0]=c->lr; // 801DF280
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DF284
  c->r[11]=c->r[1]+0x00000020u; // 801DF288
  c->lr=0x801DF290u; f_800C2E4C(c); // 801DF28C
  c->r[4]=0u+0x80480000u; // 801DF290
  c->r[29]=R8(c->r[3]+0x00000000u); // 801DF294
  c->r[0]=R8(c->r[3]+0x00000001u); // 801DF298
  c->r[4]=c->r[4]+0x00002FB0u; // 801DF29C
  c->r[31]=0u+0x00000000u; // 801DF2A0
  c->r[27]=0u+0x00000000u; // 801DF2A4
  W16(c->r[4]+0x00000080u,c->r[0]); // 801DF2A8
  c->r[0]=R8(c->r[3]+0x00000003u); // 801DF2AC
  c->r[3]=R8(c->r[3]+0x00000002u); // 801DF2B0
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801DF2B4
  c->r[0]=c->r[3]+c->r[0]; // 801DF2B8
  c->r[28]=rotl(c->r[0],0)&0x0000FFFFu; // 801DF2BC
  cmpu(c,0,c->r[28],0x00000C03u); // 801DF2C0
  if (crb(c,2)) { goto L_801DF364; } // 801DF2C4
  cmpu(c,0,c->r[28],0x00000C35u); // 801DF2C8
  if (crb(c,2)) { goto L_801DF364; } // 801DF2CC
  cmps(c,0,(int32_t)c->r[28],0); // 801DF2D0
  if (crb(c,2)) { goto L_801DF364; } // 801DF2D4
  c->r[3]=c->r[4]+0x00000070u; // 801DF2D8
  c->lr=0x801DF2E0u; f_801CB5C0(c); // 801DF2DC
  cmps(c,0,(int32_t)c->r[3],0); // 801DF2E0
  c->r[31]=c->r[3]|c->r[3]; // 801DF2E4
  if (crb(c,2)) { goto L_801DF330; } // 801DF2E8
  c->r[0]=R16(c->r[3]+0x00000004u); // 801DF2EC
  c->r[3]=c->r[3]+c->r[0]; // 801DF2F0
  c->r[0]=R8(c->r[3]+0x00000009u); // 801DF2F4
  c->r[27]=c->r[3]+0x0000000Au; // 801DF2F8
  c->r[3]=R8(c->r[3]+0x00000008u); // 801DF2FC
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801DF300
  c->r[0]=c->r[3]+c->r[0]; // 801DF304
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 801DF308
  cmpu(c,0,c->r[6],c->r[28]); // 801DF30C
  if (crb(c,2)) { goto L_801DF330; } // 801DF310
  c->r[3]=0u+0x00070000u; // 801DF314
  c->r[4]=0u+0x803A0000u; // 801DF318
  c->r[5]=c->r[28]|c->r[28]; // 801DF31C
  c->r[27]=0u+0x00000000u; // 801DF320
  c->r[3]=c->r[3]+0x00000001u; // 801DF324
  c->r[4]=c->r[4]+0x000005E8u; // 801DF328
  c->lr=0x801DF330u; f_801CDA10(c); // 801DF32C
L_801DF330:;
  c->r[30]=0u+0x80480000u; // 801DF330
  c->r[30]=c->r[30]+0x00002FB0u; // 801DF334
  c->r[3]=c->r[30]+0x00000070u; // 801DF338
  c->lr=0x801DF340u; f_801CB760(c); // 801DF33C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801DF340
  if (!crb(c,2)) { goto L_801DF35C; } // 801DF344
  c->r[3]=c->r[30]+0x0000004Cu; // 801DF348
  c->r[4]=0u+0x0000003Cu; // 801DF34C
  c->r[5]=0u+0x00000008u; // 801DF350
  c->lr=0x801DF358u; f_801CDFE0(c); // 801DF354
  goto L_801DF364; // 801DF358
L_801DF35C:;
  c->r[3]=c->r[30]+0x0000004Cu; // 801DF35C
  c->lr=0x801DF364u; f_801CE050(c); // 801DF360
L_801DF364:;
  c->r[3]=c->r[28]|c->r[28]; // 801DF364
  c->r[4]=c->r[29]|c->r[29]; // 801DF368
  c->r[5]=c->r[27]|c->r[27]; // 801DF36C
  c->lr=0x801DF374u; f_801DF07C(c); // 801DF370
  cmps(c,0,(int32_t)c->r[31],0); // 801DF374
  if (crb(c,2)) { goto L_801DF384; } // 801DF378
  c->r[3]=c->r[31]|c->r[31]; // 801DF37C
  c->lr=0x801DF384u; f_801CAF10(c); // 801DF380
L_801DF384:;
  c->r[3]=0u+0x00000000u; // 801DF384
  c->lr=0x801DF38Cu; f_801DE938(c); // 801DF388
  c->r[11]=c->r[1]+0x00000020u; // 801DF38C
  c->lr=0x801DF394u; f_800C2E98(c); // 801DF390
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DF394
  c->lr=c->r[0]; // 801DF398
  c->r[1]=c->r[1]+0x00000020u; // 801DF39C
  return; // 801DF3A0
}

// btu_hcif_cmd_timeout
void f_801DF3A4(Ctx* __restrict c) {
  trace_call(0x801DF3A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF3A4
  c->r[0]=c->lr; // 801DF3A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DF3AC
  c->r[0]=0u+0x00000001u; // 801DF3B0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DF3B4
  c->r[31]=0u+0x80480000u; // 801DF3B8
  c->r[31]=c->r[31]+0x00002FB0u; // 801DF3BC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DF3C0
  c->r[3]=c->r[31]+0x00000070u; // 801DF3C4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DF3C8
  W16(c->r[31]+0x00000080u,c->r[0]); // 801DF3CC
  c->lr=0x801DF3D4u; f_801CB5C0(c); // 801DF3D0
  cmps(c,0,(int32_t)c->r[3],0); // 801DF3D4
  c->r[30]=c->r[3]|c->r[3]; // 801DF3D8
  if (!crb(c,2)) { goto L_801DF3F8; } // 801DF3DC
  c->r[3]=0u+0x00070000u; // 801DF3E0
  c->r[4]=0u+0x803A0000u; // 801DF3E4
  c->r[3]=c->r[3]+0x00000001u; // 801DF3E8
  c->r[4]=c->r[4]+0x00000610u; // 801DF3EC
  c->lr=0x801DF3F4u; f_801CD9D0(c); // 801DF3F0
  goto L_801DF4E0; // 801DF3F4
L_801DF3F8:;
  c->r[3]=c->r[31]+0x00000070u; // 801DF3F8
  c->lr=0x801DF400u; f_801CB760(c); // 801DF3FC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801DF400
  if (!crb(c,2)) { goto L_801DF418; } // 801DF404
  c->r[3]=c->r[31]+0x0000004Cu; // 801DF408
  c->r[4]=0u+0x0000003Cu; // 801DF40C
  c->r[5]=0u+0x00000008u; // 801DF410
  c->lr=0x801DF418u; f_801CDFE0(c); // 801DF414
L_801DF418:;
  c->r[0]=R16(c->r[30]+0x00000004u); // 801DF418
  c->r[3]=0u+0x00070000u; // 801DF41C
  c->r[4]=0u+0x803A0000u; // 801DF420
  c->r[31]=c->r[30]+c->r[0]; // 801DF424
  c->r[3]=c->r[3]+0x00000001u; // 801DF428
  c->r[0]=R8(c->r[31]+0x00000009u); // 801DF42C
  c->r[4]=c->r[4]+0x00000630u; // 801DF430
  c->r[5]=R8(c->r[31]+0x00000008u); // 801DF434
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801DF438
  c->r[0]=c->r[5]+c->r[0]; // 801DF43C
  c->r[29]=rotl(c->r[0],0)&0x0000FFFFu; // 801DF440
  c->r[5]=c->r[29]|c->r[29]; // 801DF444
  c->lr=0x801DF44Cu; f_801CD9F0(c); // 801DF448
  cmps(c,0,(int32_t)c->r[29],1049); // 801DF44C
  if (crb(c,2)) { goto L_801DF49C; } // 801DF450
  if (!crb(c,0)) { goto L_801DF47C; } // 801DF454
  cmps(c,0,(int32_t)c->r[29],1025); // 801DF458
  if (crb(c,2)) { goto L_801DF49C; } // 801DF45C
  if (!crb(c,0)) { goto L_801DF470; } // 801DF460
  cmps(c,0,(int32_t)c->r[29],13); // 801DF464
  if (crb(c,2)) { goto L_801DF49C; } // 801DF468
  goto L_801DF4B0; // 801DF46C
L_801DF470:;
  cmps(c,0,(int32_t)c->r[29],1029); // 801DF470
  if (crb(c,2)) { goto L_801DF49C; } // 801DF474
  goto L_801DF4B0; // 801DF478
L_801DF47C:;
  cmps(c,0,(int32_t)c->r[29],2050); // 801DF47C
  if (crb(c,2)) { goto L_801DF4B0; } // 801DF480
  if (!crb(c,0)) { goto L_801DF494; } // 801DF484
  cmps(c,0,(int32_t)c->r[29],2049); // 801DF488
  if (!crb(c,0)) { goto L_801DF49C; } // 801DF48C
  goto L_801DF4B0; // 801DF490
L_801DF494:;
  cmps(c,0,(int32_t)c->r[29],2055); // 801DF494
  if (!crb(c,0)) { goto L_801DF4B0; } // 801DF498
L_801DF49C:;
  c->r[3]=c->r[29]|c->r[29]; // 801DF49C
  c->r[5]=c->r[31]+0x0000000Au; // 801DF4A0
  c->r[4]=0u+0x0000001Fu; // 801DF4A4
  c->lr=0x801DF4ACu; f_801DF07C(c); // 801DF4A8
  goto L_801DF4C8; // 801DF4AC
L_801DF4B0:;
  c->r[0]=0u+0x0000001Fu; // 801DF4B0
  c->r[3]=c->r[29]|c->r[29]; // 801DF4B4
  W8(c->r[1]+0x00000008u,c->r[0]); // 801DF4B8
  c->r[4]=c->r[1]+0x00000008u; // 801DF4BC
  c->r[5]=0u+0x00000001u; // 801DF4C0
  c->lr=0x801DF4C8u; f_801DEE0C(c); // 801DF4C4
L_801DF4C8:;
  c->r[3]=c->r[30]|c->r[30]; // 801DF4C8
  c->lr=0x801DF4D0u; f_801CAF10(c); // 801DF4CC
  c->r[3]=0u+0x00000002u; // 801DF4D0
  c->lr=0x801DF4D8u; f_801D7CA8(c); // 801DF4D4
  c->r[3]=0u+0x00000000u; // 801DF4D8
  c->lr=0x801DF4E0u; f_801DE938(c); // 801DF4DC
L_801DF4E0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DF4E0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801DF4E4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801DF4E8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801DF4EC
  c->lr=c->r[0]; // 801DF4F0
  c->r[1]=c->r[1]+0x00000020u; // 801DF4F4
  return; // 801DF4F8
}

// btu_hcif_link_key_notification_evt
void f_801DF4FC(Ctx* __restrict c) {
  trace_call(0x801DF4FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF4FC
  c->r[0]=c->lr; // 801DF500
  c->r[5]=c->r[3]+0x00000016u; // 801DF504
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DF508
  c->r[4]=c->r[1]+0x00000010u; // 801DF50C
  c->r[0]=R8(c->r[3]+0x00000000u); // 801DF510
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801DF514
  c->r[0]=R8(c->r[3]+0x00000001u); // 801DF518
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801DF51C
  c->r[0]=R8(c->r[3]+0x00000002u); // 801DF520
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 801DF524
  c->r[0]=R8(c->r[3]+0x00000003u); // 801DF528
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801DF52C
  c->r[0]=R8(c->r[3]+0x00000004u); // 801DF530
  W8(c->r[1]+0x00000009u,c->r[0]); // 801DF534
  c->r[0]=R8(c->r[3]+0x00000005u); // 801DF538
  W8(c->r[1]+0x00000008u,c->r[0]); // 801DF53C
  c->r[0]=R8(c->r[3]+0x00000006u); // 801DF540
  W8(c->r[1]+0x0000001Fu,c->r[0]); // 801DF544
  c->r[0]=R8(c->r[3]+0x00000007u); // 801DF548
  W8(c->r[1]+0x0000001Eu,c->r[0]); // 801DF54C
  c->r[0]=R8(c->r[3]+0x00000008u); // 801DF550
  W8(c->r[1]+0x0000001Du,c->r[0]); // 801DF554
  c->r[0]=R8(c->r[3]+0x00000009u); // 801DF558
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 801DF55C
  c->r[0]=R8(c->r[3]+0x0000000Au); // 801DF560
  W8(c->r[1]+0x0000001Bu,c->r[0]); // 801DF564
  c->r[0]=R8(c->r[3]+0x0000000Bu); // 801DF568
  W8(c->r[1]+0x0000001Au,c->r[0]); // 801DF56C
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 801DF570
  W8(c->r[1]+0x00000019u,c->r[0]); // 801DF574
  c->r[0]=R8(c->r[3]+0x0000000Du); // 801DF578
  W8(c->r[1]+0x00000018u,c->r[0]); // 801DF57C
  c->r[0]=R8(c->r[3]+0x0000000Eu); // 801DF580
  W8(c->r[1]+0x00000017u,c->r[0]); // 801DF584
  c->r[0]=R8(c->r[3]+0x0000000Fu); // 801DF588
  W8(c->r[1]+0x00000016u,c->r[0]); // 801DF58C
  c->r[0]=R8(c->r[3]+0x00000010u); // 801DF590
  W8(c->r[1]+0x00000015u,c->r[0]); // 801DF594
  c->r[0]=R8(c->r[3]+0x00000011u); // 801DF598
  W8(c->r[1]+0x00000014u,c->r[0]); // 801DF59C
  c->r[0]=R8(c->r[3]+0x00000012u); // 801DF5A0
  W8(c->r[1]+0x00000013u,c->r[0]); // 801DF5A4
  c->r[0]=R8(c->r[3]+0x00000013u); // 801DF5A8
  W8(c->r[1]+0x00000012u,c->r[0]); // 801DF5AC
  c->r[0]=R8(c->r[3]+0x00000014u); // 801DF5B0
  W8(c->r[1]+0x00000011u,c->r[0]); // 801DF5B4
  c->r[0]=R8(c->r[3]+0x00000015u); // 801DF5B8
  c->r[3]=c->r[1]+0x00000008u; // 801DF5BC
  W8(c->r[1]+0x00000010u,c->r[0]); // 801DF5C0
  c->r[5]=R8(c->r[5]+0x00000000u); // 801DF5C4
  c->lr=0x801DF5CCu; f_801DD674(c); // 801DF5C8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DF5CC
  c->lr=c->r[0]; // 801DF5D0
  c->r[1]=c->r[1]+0x00000020u; // 801DF5D4
  return; // 801DF5D8
}

// btu_init_core
void f_801DF5DC(Ctx* __restrict c) {
  trace_call(0x801DF5DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF5DC
  c->r[0]=c->lr; // 801DF5E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DF5E4
  c->lr=0x801DF5ECu; f_801D9894(c); // 801DF5E8
  c->lr=0x801DF5F0u; f_801E9568(c); // 801DF5EC
  c->lr=0x801DF5F4u; f_801F5698(c); // 801DF5F0
  c->lr=0x801DF5F8u; f_801D7CC8(c); // 801DF5F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DF5F8
  c->lr=c->r[0]; // 801DF5FC
  c->r[1]=c->r[1]+0x00000010u; // 801DF600
  return; // 801DF604
}

// BTE_Init
void f_801DF608(Ctx* __restrict c) {
  trace_call(0x801DF608u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF608
  c->r[0]=c->lr; // 801DF60C
  c->r[4]=0u+0x00000000u; // 801DF610
  c->r[5]=0u+0x00000084u; // 801DF614
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DF618
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DF61C
  c->r[31]=0u+0x80480000u; // 801DF620
  c->r[3]=c->r[31]+0x00002FB0u; // 801DF624
  c->lr=0x801DF62Cu; f_80004350(c); // 801DF628
  c->r[3]=c->r[31]+0x00002FB0u; // 801DF62C
  c->r[4]=0u+0x000002A4u; // 801DF630
  c->r[0]=0u+0x00000001u; // 801DF634
  W16(c->r[3]+0x0000007Eu,c->r[4]); // 801DF638
  W16(c->r[3]+0x00000080u,c->r[0]); // 801DF63C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DF640
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DF644
  c->lr=c->r[0]; // 801DF648
  c->r[1]=c->r[1]+0x00000010u; // 801DF64C
  return; // 801DF650
}

// WBT_ExtCreateRecord
void f_801DF654(Ctx* __restrict c) {
  trace_call(0x801DF654u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF654
  c->r[0]=c->lr; // 801DF658
  W32(c->r[1]+0x00000124u,c->r[0]); // 801DF65C
  c->r[0]=0u+0x00001002u; // 801DF660
  c->r[3]=c->r[1]+0x00000014u; // 801DF664
  c->r[4]=c->r[1]+0x00000010u; // 801DF668
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 801DF66C
  c->r[31]=0u+0x00000000u; // 801DF670
  W32(c->r[1]+0x00000118u,c->r[30]); // 801DF674
  W32(c->r[1]+0x00000010u,c->r[31]); // 801DF678
  W16(c->r[1]+0x00000008u,c->r[0]); // 801DF67C
  c->lr=0x801DF684u; f_801F3280(c); // 801DF680
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801DF684
  if (crb(c,2)) { goto L_801DF6D4; } // 801DF688
  c->r[30]=c->r[1]+0x00000016u; // 801DF68C
  c->r[4]=0u+0x00000000u; // 801DF690
  c->r[3]=c->r[30]|c->r[30]; // 801DF694
  c->r[5]=0u+0x000000FAu; // 801DF698
  c->lr=0x801DF6A0u; f_80004350(c); // 801DF69C
  c->r[0]=0u+0x00000001u; // 801DF6A0
  c->r[3]=0u+0x0000000Fu; // 801DF6A4
  W16(c->r[1]+0x00000016u,c->r[3]); // 801DF6A8
  c->r[3]=c->r[30]|c->r[30]; // 801DF6AC
  c->r[4]=c->r[1]+0x00000010u; // 801DF6B0
  W16(c->r[1]+0x00000018u,c->r[0]); // 801DF6B4
  W8(c->r[1]+0x0000001Eu,c->r[0]); // 801DF6B8
  c->lr=0x801DF6C0u; f_801F2F20(c); // 801DF6BC
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801DF6C0
  if (crb(c,2)) { goto L_801DF6D4; } // 801DF6C4
  W32(c->r[1]+0x00000010u,c->r[31]); // 801DF6C8
  c->r[3]=0u+0x00000000u; // 801DF6CC
  goto L_801DF71C; // 801DF6D0
L_801DF6D4:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 801DF6D4
  c->r[6]=c->r[1]+0x00000008u; // 801DF6D8
  c->r[4]=0u+0x00000005u; // 801DF6DC
  c->r[5]=0u+0x00000001u; // 801DF6E0
  c->lr=0x801DF6E8u; f_801F3F90(c); // 801DF6E4
  c->r[0]=0u+0x00000000u; // 801DF6E8
  c->r[4]=0u+0x00000001u; // 801DF6EC
  c->r[3]=0u+0x00010000u; // 801DF6F0
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801DF6F4
  c->r[0]=c->r[3]+0xFFFF8001u; // 801DF6F8
  c->r[3]=R32(c->r[1]+0x00000010u); // 801DF6FC
  W8(c->r[1]+0x0000000Du,c->r[4]); // 801DF700
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801DF704
  c->r[7]=c->r[1]+0x0000000Cu; // 801DF708
  c->r[5]=0u+0x00000001u; // 801DF70C
  c->r[6]=0u+0x00000002u; // 801DF710
  c->lr=0x801DF718u; f_801F3BF8(c); // 801DF714
  c->r[3]=0u+0x00000001u; // 801DF718
L_801DF71C:;
  c->r[0]=R32(c->r[1]+0x00000124u); // 801DF71C
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 801DF720
  c->r[30]=R32(c->r[1]+0x00000118u); // 801DF724
  c->lr=c->r[0]; // 801DF728
  c->r[1]=c->r[1]+0x00000120u; // 801DF72C
  return; // 801DF730
}

// GAP_Init
void f_801DF734(Ctx* __restrict c) {
  trace_call(0x801DF734u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF734
  c->r[0]=c->lr; // 801DF738
  c->r[4]=0u+0x00000000u; // 801DF73C
  c->r[5]=0u+0x000003ACu; // 801DF740
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DF744
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DF748
  c->r[31]=0u+0x80480000u; // 801DF74C
  c->r[3]=c->r[31]+0x00005CA0u; // 801DF750
  c->lr=0x801DF758u; f_80004350(c); // 801DF754
  c->r[5]=0u+0x801E0000u; // 801DF758
  c->r[3]=0u+0x801E0000u; // 801DF75C
  c->r[5]=c->r[5]+0x000004A8u; // 801DF760
  c->r[4]=c->r[31]+0x00005CA0u; // 801DF764
  c->r[3]=c->r[3]+0x000004B4u; // 801DF768
  c->r[0]=0u+0x00000005u; // 801DF76C
  W32(c->r[4]+0x00000020u,c->r[5]); // 801DF770
  W32(c->r[4]+0x00000024u,c->r[3]); // 801DF774
  W8(c->r[4]+0x00000028u,c->r[0]); // 801DF778
  c->lr=0x801DF780u; f_801DF794(c); // 801DF77C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DF780
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DF784
  c->lr=c->r[0]; // 801DF788
  c->r[1]=c->r[1]+0x00000010u; // 801DF78C
  return; // 801DF790
}

// gap_conn_init
void f_801DF794(Ctx* __restrict c) {
  trace_call(0x801DF794u);
  c->r[10]=0u+0x801E0000u; // 801DF794
  c->r[9]=0u+0x80480000u; // 801DF798
  c->r[8]=0u+0x801E0000u; // 801DF79C
  c->r[7]=0u+0x801E0000u; // 801DF7A0
  c->r[6]=0u+0x801E0000u; // 801DF7A4
  c->r[5]=0u+0x801E0000u; // 801DF7A8
  c->r[4]=0u+0x801E0000u; // 801DF7AC
  c->r[3]=0u+0x801E0000u; // 801DF7B0
  c->r[10]=c->r[10]+0xFFFFF804u; // 801DF7B4
  c->r[9]=c->r[9]+0x00005CA0u; // 801DF7B8
  c->r[0]=0u+0x00000000u; // 801DF7BC
  c->r[8]=c->r[8]+0xFFFFF990u; // 801DF7C0
  c->r[7]=c->r[7]+0xFFFFFB6Cu; // 801DF7C4
  c->r[6]=c->r[6]+0xFFFFFCA8u; // 801DF7C8
  c->r[5]=c->r[5]+0xFFFFFE94u; // 801DF7CC
  c->r[4]=c->r[4]+0x0000008Cu; // 801DF7D0
  c->r[3]=c->r[3]+0x0000019Cu; // 801DF7D4
  W32(c->r[9]+0x00000084u,c->r[10]); // 801DF7D8
  W32(c->r[9]+0x00000088u,c->r[8]); // 801DF7DC
  W32(c->r[9]+0x0000008Cu,c->r[0]); // 801DF7E0
  W32(c->r[9]+0x00000090u,c->r[7]); // 801DF7E4
  W32(c->r[9]+0x00000094u,c->r[6]); // 801DF7E8
  W32(c->r[9]+0x00000098u,c->r[5]); // 801DF7EC
  W32(c->r[9]+0x0000009Cu,c->r[0]); // 801DF7F0
  W32(c->r[9]+0x000000A0u,c->r[0]); // 801DF7F4
  W32(c->r[9]+0x000000A4u,c->r[4]); // 801DF7F8
  W32(c->r[9]+0x000000A8u,c->r[3]); // 801DF7FC
  return; // 801DF800
}

// gap_connect_ind
void f_801DF804(Ctx* __restrict c) {
  trace_call(0x801DF804u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF804
  c->r[0]=c->lr; // 801DF808
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DF80C
  c->r[11]=c->r[1]+0x00000020u; // 801DF810
  c->lr=0x801DF818u; f_800C2E48(c); // 801DF814
  c->r[7]=0u+0x80480000u; // 801DF818
  c->r[26]=c->r[3]|c->r[3]; // 801DF81C
  c->r[7]=c->r[7]+0x00005CA0u; // 801DF820
  c->r[31]=c->r[4]|c->r[4]; // 801DF824
  c->r[27]=c->r[5]|c->r[5]; // 801DF828
  c->r[28]=c->r[6]|c->r[6]; // 801DF82C
  c->r[29]=c->r[7]+0x000000ACu; // 801DF830
  c->r[30]=0u+0x00000000u; // 801DF834
L_801DF838:;
  c->r[0]=R8(c->r[29]+0x00000000u); // 801DF838
  cmpu(c,0,c->r[0],0x00000001u); // 801DF83C
  if (!crb(c,2)) { goto L_801DF874; } // 801DF840
  c->r[0]=R16(c->r[29]+0x00000010u); // 801DF844
  cmpu(c,0,c->r[0],c->r[27]); // 801DF848
  if (!crb(c,2)) { goto L_801DF874; } // 801DF84C
  c->r[0]=R8(c->r[29]+0x00000008u); // 801DF850
  cmps(c,0,(int32_t)c->r[0],0); // 801DF854
  if (crb(c,2)) { goto L_801DF884; } // 801DF858
  c->r[3]=c->r[26]|c->r[26]; // 801DF85C
  c->r[4]=c->r[29]+0x00000009u; // 801DF860
  c->r[5]=0u+0x00000006u; // 801DF864
  c->lr=0x801DF86Cu; f_800C6228(c); // 801DF868
  cmps(c,0,(int32_t)c->r[3],0); // 801DF86C
  if (crb(c,2)) { goto L_801DF884; } // 801DF870
L_801DF874:;
  c->r[30]=c->r[30]+0x00000001u; // 801DF874
  c->r[29]=c->r[29]+0x00000060u; // 801DF878
  cmpu(c,0,c->r[30],0x00000008u); // 801DF87C
  if (crb(c,0)) { IRQCHK(c); goto L_801DF838; } // 801DF880
L_801DF884:;
  c->r[0]=rotl(c->r[30],0)&0x0000FFFFu; // 801DF884
  cmpu(c,0,c->r[0],0x00000008u); // 801DF888
  if (!crb(c,2)) { goto L_801DF90C; } // 801DF88C
  c->r[3]=0u+0x80480000u; // 801DF890
  c->r[3]=c->r[3]+0x00005CA0u; // 801DF894
  c->r[0]=R8(c->r[3]+0x00000028u); // 801DF898
  cmpu(c,0,c->r[0],0x00000002u); // 801DF89C
  if (crb(c,0)) { goto L_801DF8B4; } // 801DF8A0
  c->r[3]=0u+0x000E0000u; // 801DF8A4
  c->r[4]=c->r[13]+0xFFFF8F28u; // 801DF8A8
  c->r[3]=c->r[3]+0x00000001u; // 801DF8AC
  c->lr=0x801DF8B4u; f_801CD9D0(c); // 801DF8B0
L_801DF8B4:;
  c->r[3]=0u+0x80480000u; // 801DF8B4
  c->r[3]=c->r[3]+0x00005CA0u; // 801DF8B8
  c->r[0]=R8(c->r[3]+0x00000028u); // 801DF8BC
  cmpu(c,0,c->r[0],0x00000002u); // 801DF8C0
  if (crb(c,0)) { goto L_801DF8DC; } // 801DF8C4
  c->r[3]=0u+0x000E0000u; // 801DF8C8
  c->r[4]=0u+0x803A0000u; // 801DF8CC
  c->r[3]=c->r[3]+0x00000001u; // 801DF8D0
  c->r[4]=c->r[4]+0x00000660u; // 801DF8D4
  c->lr=0x801DF8DCu; f_801CD9D0(c); // 801DF8D8
L_801DF8DC:;
  c->r[3]=0u+0x80480000u; // 801DF8DC
  c->r[3]=c->r[3]+0x00005CA0u; // 801DF8E0
  c->r[0]=R8(c->r[3]+0x00000028u); // 801DF8E4
  cmpu(c,0,c->r[0],0x00000002u); // 801DF8E8
  if (crb(c,0)) { goto L_801DF900; } // 801DF8EC
  c->r[3]=0u+0x000E0000u; // 801DF8F0
  c->r[4]=c->r[13]+0xFFFF8F28u; // 801DF8F4
  c->r[3]=c->r[3]+0x00000001u; // 801DF8F8
  c->lr=0x801DF900u; f_801CD9D0(c); // 801DF8FC
L_801DF900:;
  c->r[3]=c->r[31]|c->r[31]; // 801DF900
  c->lr=0x801DF908u; f_801E6AAC(c); // 801DF904
  goto L_801DF978; // 801DF908
L_801DF90C:;
  c->r[0]=0u+0x00000003u; // 801DF90C
  c->r[4]=c->r[26]|c->r[26]; // 801DF910
  W8(c->r[29]+0x00000000u,c->r[0]); // 801DF914
  c->r[3]=c->r[29]+0x00000009u; // 801DF918
  c->r[5]=0u+0x00000006u; // 801DF91C
  c->lr=0x801DF924u; f_80004000(c); // 801DF920
  W16(c->r[29]+0x00000006u,c->r[31]); // 801DF924
  c->r[3]=c->r[26]|c->r[26]; // 801DF928
  c->r[4]=c->r[28]|c->r[28]; // 801DF92C
  c->r[5]=c->r[31]|c->r[31]; // 801DF930
  c->r[6]=0u+0x00000000u; // 801DF934
  c->r[7]=0u+0x00000000u; // 801DF938
  c->lr=0x801DF940u; f_801E6794(c); // 801DF93C
  c->r[3]=0u+0x80480000u; // 801DF940
  c->r[3]=c->r[3]+0x00005CA0u; // 801DF944
  c->r[0]=R8(c->r[3]+0x00000028u); // 801DF948
  cmpu(c,0,c->r[0],0x00000004u); // 801DF94C
  if (crb(c,0)) { goto L_801DF96C; } // 801DF950
  c->r[3]=0u+0x000E0000u; // 801DF954
  c->r[4]=0u+0x803A0000u; // 801DF958
  c->r[5]=R16(c->r[29]+0x00000006u); // 801DF95C
  c->r[3]=c->r[3]+0x00000003u; // 801DF960
  c->r[4]=c->r[4]+0x000006A4u; // 801DF964
  c->lr=0x801DF96Cu; f_801CD9F0(c); // 801DF968
L_801DF96C:;
  c->r[3]=c->r[31]|c->r[31]; // 801DF96C
  c->r[4]=c->r[29]+0x00000024u; // 801DF970
  c->lr=0x801DF978u; f_801E6924(c); // 801DF974
L_801DF978:;
  c->r[11]=c->r[1]+0x00000020u; // 801DF978
  c->lr=0x801DF980u; f_800C2E94(c); // 801DF97C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801DF980
  c->lr=c->r[0]; // 801DF984
  c->r[1]=c->r[1]+0x00000020u; // 801DF988
  return; // 801DF98C
}

// gap_connect_cfm
void f_801DF990(Ctx* __restrict c) {
  trace_call(0x801DF990u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DF990
  c->r[0]=c->lr; // 801DF994
  c->r[5]=0u+0x80480000u; // 801DF998
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DF99C
  c->r[0]=0u+0x00000002u; // 801DF9A0
  c->r[5]=c->r[5]+0x00005CA0u; // 801DF9A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DF9A8
  c->r[31]=c->r[5]+0x000000ACu; // 801DF9AC
  c->r[5]=0u+0x00000000u; // 801DF9B0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DF9B4
  c->ctr=c->r[0]; // 801DF9B8
L_801DF9BC:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801DF9BC
  cmps(c,0,(int32_t)c->r[0],0); // 801DF9C0
  if (crb(c,2)) { goto L_801DF9D8; } // 801DF9C4
  c->r[0]=R16(c->r[31]+0x00000006u); // 801DF9C8
  cmpu(c,0,c->r[0],c->r[3]); // 801DF9CC
  if (!crb(c,2)) { goto L_801DF9D8; } // 801DF9D0
  goto L_801DFA48; // 801DF9D4
L_801DF9D8:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801DF9D8
  c->r[5]=c->r[5]+0x00000001u; // 801DF9DC
  cmps(c,0,(int32_t)c->r[0],0); // 801DF9E0
  if (crb(c,2)) { goto L_801DF9F8; } // 801DF9E4
  c->r[0]=R16(c->r[31]+0x00000006u); // 801DF9E8
  cmpu(c,0,c->r[0],c->r[3]); // 801DF9EC
  if (!crb(c,2)) { goto L_801DF9F8; } // 801DF9F0
  goto L_801DFA48; // 801DF9F4
L_801DF9F8:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801DF9F8
  c->r[5]=c->r[5]+0x00000001u; // 801DF9FC
  cmps(c,0,(int32_t)c->r[0],0); // 801DFA00
  if (crb(c,2)) { goto L_801DFA18; } // 801DFA04
  c->r[0]=R16(c->r[31]+0x00000006u); // 801DFA08
  cmpu(c,0,c->r[0],c->r[3]); // 801DFA0C
  if (!crb(c,2)) { goto L_801DFA18; } // 801DFA10
  goto L_801DFA48; // 801DFA14
L_801DFA18:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801DFA18
  c->r[5]=c->r[5]+0x00000001u; // 801DFA1C
  cmps(c,0,(int32_t)c->r[0],0); // 801DFA20
  if (crb(c,2)) { goto L_801DFA38; } // 801DFA24
  c->r[0]=R16(c->r[31]+0x00000006u); // 801DFA28
  cmpu(c,0,c->r[0],c->r[3]); // 801DFA2C
  if (!crb(c,2)) { goto L_801DFA38; } // 801DFA30
  goto L_801DFA48; // 801DFA34
L_801DFA38:;
  c->r[5]=c->r[5]+0x00000001u; // 801DFA38
  c->r[31]=c->r[31]+0x00000060u; // 801DFA3C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DF9BC; } // 801DFA40
  c->r[31]=0u+0x00000000u; // 801DFA44
L_801DFA48:;
  cmps(c,0,(int32_t)c->r[31],0); // 801DFA48
  if (crb(c,2)) { goto L_801DFB54; } // 801DFA4C
  cmps(c,0,(int32_t)c->r[4],0); // 801DFA50
  if (!crb(c,2)) { goto L_801DFA78; } // 801DFA54
  c->r[0]=R8(c->r[31]+0x00000000u); // 801DFA58
  cmpu(c,0,c->r[0],0x00000002u); // 801DFA5C
  if (!crb(c,2)) { goto L_801DFA78; } // 801DFA60
  c->r[0]=0u+0x00000003u; // 801DFA64
  c->r[4]=c->r[31]+0x00000024u; // 801DFA68
  W8(c->r[31]+0x00000000u,c->r[0]); // 801DFA6C
  c->lr=0x801DFA74u; f_801E6924(c); // 801DFA70
  goto L_801DFB54; // 801DFA74
L_801DFA78:;
  c->r[12]=R32(c->r[31]+0x00000020u); // 801DFA78
  cmps(c,0,(int32_t)c->r[12],0); // 801DFA7C
  if (crb(c,2)) { goto L_801DFA94; } // 801DFA80
  c->r[3]=R16(c->r[31]+0x00000004u); // 801DFA84
  c->r[4]=0u+0x00000101u; // 801DFA88
  c->ctr=c->r[12]; // 801DFA8C
  if (true) { c->lr=0x801DFA94u; dispatch(c,c->ctr); } // 801DFA90
L_801DFA94:;
  c->r[30]=R16(c->r[31]+0x00000010u); // 801DFA94
  goto L_801DFAA8; // 801DFA98
L_801DFA9C:;
  c->r[3]=c->r[31]+0x00000014u; // 801DFA9C
  c->lr=0x801DFAA4u; f_801CB5C0(c); // 801DFAA0
  c->lr=0x801DFAA8u; f_801CAF10(c); // 801DFAA4
L_801DFAA8:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 801DFAA8
  cmps(c,0,(int32_t)c->r[0],0); // 801DFAAC
  if (!crb(c,2)) { IRQCHK(c); goto L_801DFA9C; } // 801DFAB0
  c->r[3]=0u+0x80480000u; // 801DFAB4
  c->r[4]=0u+0x00000000u; // 801DFAB8
  c->r[3]=c->r[3]+0x00005CA0u; // 801DFABC
  c->r[0]=0u+0x00000002u; // 801DFAC0
  W8(c->r[31]+0x00000000u,c->r[4]); // 801DFAC4
  c->r[4]=c->r[3]+0x000000ACu; // 801DFAC8
  c->r[3]=0u+0x00000000u; // 801DFACC
  c->ctr=c->r[0]; // 801DFAD0
L_801DFAD4:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801DFAD4
  cmps(c,0,(int32_t)c->r[0],0); // 801DFAD8
  if (crb(c,2)) { goto L_801DFAEC; } // 801DFADC
  c->r[0]=R16(c->r[4]+0x00000010u); // 801DFAE0
  cmpu(c,0,c->r[0],c->r[30]); // 801DFAE4
  if (crb(c,2)) { goto L_801DFB54; } // 801DFAE8
L_801DFAEC:;
  c->r[0]=R8(c->r[4]+0x00000060u); // 801DFAEC
  c->r[3]=c->r[3]+0x00000001u; // 801DFAF0
  cmps(c,0,(int32_t)c->r[0],0); // 801DFAF4
  if (crb(c,2)) { goto L_801DFB08; } // 801DFAF8
  c->r[0]=R16(c->r[4]+0x00000070u); // 801DFAFC
  cmpu(c,0,c->r[0],c->r[30]); // 801DFB00
  if (crb(c,2)) { goto L_801DFB54; } // 801DFB04
L_801DFB08:;
  c->r[0]=R8(c->r[4]+0x000000C0u); // 801DFB08
  c->r[3]=c->r[3]+0x00000001u; // 801DFB0C
  cmps(c,0,(int32_t)c->r[0],0); // 801DFB10
  if (crb(c,2)) { goto L_801DFB24; } // 801DFB14
  c->r[0]=R16(c->r[4]+0x000000D0u); // 801DFB18
  cmpu(c,0,c->r[0],c->r[30]); // 801DFB1C
  if (crb(c,2)) { goto L_801DFB54; } // 801DFB20
L_801DFB24:;
  c->r[0]=R8(c->r[4]+0x00000120u); // 801DFB24
  c->r[3]=c->r[3]+0x00000001u; // 801DFB28
  cmps(c,0,(int32_t)c->r[0],0); // 801DFB2C
  if (crb(c,2)) { goto L_801DFB40; } // 801DFB30
  c->r[0]=R16(c->r[4]+0x00000130u); // 801DFB34
  cmpu(c,0,c->r[0],c->r[30]); // 801DFB38
  if (crb(c,2)) { goto L_801DFB54; } // 801DFB3C
L_801DFB40:;
  c->r[3]=c->r[3]+0x00000001u; // 801DFB40
  c->r[4]=c->r[4]+0x00000180u; // 801DFB44
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DFAD4; } // 801DFB48
  c->r[3]=c->r[30]|c->r[30]; // 801DFB4C
  c->lr=0x801DFB54u; f_801E64D0(c); // 801DFB50
L_801DFB54:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DFB54
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DFB58
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DFB5C
  c->lr=c->r[0]; // 801DFB60
  c->r[1]=c->r[1]+0x00000010u; // 801DFB64
  return; // 801DFB68
}

// gap_config_ind
void f_801DFB6C(Ctx* __restrict c) {
  trace_call(0x801DFB6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DFB6C
  c->r[0]=c->lr; // 801DFB70
  c->r[5]=0u+0x80480000u; // 801DFB74
  c->r[6]=0u+0x00000000u; // 801DFB78
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DFB7C
  c->r[0]=0u+0x00000002u; // 801DFB80
  c->r[5]=c->r[5]+0x00005CA0u; // 801DFB84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DFB88
  c->r[31]=c->r[5]+0x000000ACu; // 801DFB8C
  c->ctr=c->r[0]; // 801DFB90
L_801DFB94:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801DFB94
  cmps(c,0,(int32_t)c->r[0],0); // 801DFB98
  if (crb(c,2)) { goto L_801DFBB0; } // 801DFB9C
  c->r[0]=R16(c->r[31]+0x00000006u); // 801DFBA0
  cmpu(c,0,c->r[0],c->r[3]); // 801DFBA4
  if (!crb(c,2)) { goto L_801DFBB0; } // 801DFBA8
  goto L_801DFC20; // 801DFBAC
L_801DFBB0:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801DFBB0
  c->r[6]=c->r[6]+0x00000001u; // 801DFBB4
  cmps(c,0,(int32_t)c->r[0],0); // 801DFBB8
  if (crb(c,2)) { goto L_801DFBD0; } // 801DFBBC
  c->r[0]=R16(c->r[31]+0x00000006u); // 801DFBC0
  cmpu(c,0,c->r[0],c->r[3]); // 801DFBC4
  if (!crb(c,2)) { goto L_801DFBD0; } // 801DFBC8
  goto L_801DFC20; // 801DFBCC
L_801DFBD0:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801DFBD0
  c->r[6]=c->r[6]+0x00000001u; // 801DFBD4
  cmps(c,0,(int32_t)c->r[0],0); // 801DFBD8
  if (crb(c,2)) { goto L_801DFBF0; } // 801DFBDC
  c->r[0]=R16(c->r[31]+0x00000006u); // 801DFBE0
  cmpu(c,0,c->r[0],c->r[3]); // 801DFBE4
  if (!crb(c,2)) { goto L_801DFBF0; } // 801DFBE8
  goto L_801DFC20; // 801DFBEC
L_801DFBF0:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801DFBF0
  c->r[6]=c->r[6]+0x00000001u; // 801DFBF4
  cmps(c,0,(int32_t)c->r[0],0); // 801DFBF8
  if (crb(c,2)) { goto L_801DFC10; } // 801DFBFC
  c->r[0]=R16(c->r[31]+0x00000006u); // 801DFC00
  cmpu(c,0,c->r[0],c->r[3]); // 801DFC04
  if (!crb(c,2)) { goto L_801DFC10; } // 801DFC08
  goto L_801DFC20; // 801DFC0C
L_801DFC10:;
  c->r[6]=c->r[6]+0x00000001u; // 801DFC10
  c->r[31]=c->r[31]+0x00000060u; // 801DFC14
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DFB94; } // 801DFC18
  c->r[31]=0u+0x00000000u; // 801DFC1C
L_801DFC20:;
  cmps(c,0,(int32_t)c->r[31],0); // 801DFC20
  if (crb(c,2)) { goto L_801DFC94; } // 801DFC24
  c->r[0]=R8(c->r[4]+0x00000002u); // 801DFC28
  cmps(c,0,(int32_t)c->r[0],0); // 801DFC2C
  if (crb(c,2)) { goto L_801DFC40; } // 801DFC30
  c->r[0]=R16(c->r[4]+0x00000004u); // 801DFC34
  cmpu(c,0,c->r[0],0x0000069Bu); // 801DFC38
  if (!crb(c,1)) { goto L_801DFC4C; } // 801DFC3C
L_801DFC40:;
  c->r[0]=0u+0x0000069Bu; // 801DFC40
  W16(c->r[31]+0x00000012u,c->r[0]); // 801DFC44
  goto L_801DFC50; // 801DFC48
L_801DFC4C:;
  W16(c->r[31]+0x00000012u,c->r[0]); // 801DFC4C
L_801DFC50:;
  c->r[0]=0u+0x00000000u; // 801DFC50
  W8(c->r[4]+0x00000020u,c->r[0]); // 801DFC54
  W8(c->r[4]+0x00000002u,c->r[0]); // 801DFC58
  W16(c->r[4]+0x00000000u,c->r[0]); // 801DFC5C
  c->lr=0x801DFC64u; f_801E69DC(c); // 801DFC60
  c->r[0]=R8(c->r[31]+0x00000001u); // 801DFC64
  c->r[3]=c->r[0]|0x00000002u; // 801DFC68
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 801DFC6C
  W8(c->r[31]+0x00000001u,c->r[3]); // 801DFC70
  if (crb(c,2)) { goto L_801DFC94; } // 801DFC74
  c->r[0]=0u+0x00000004u; // 801DFC78
  c->r[4]=0u+0x00000100u; // 801DFC7C
  W8(c->r[31]+0x00000000u,c->r[0]); // 801DFC80
  c->r[12]=R32(c->r[31]+0x00000020u); // 801DFC84
  c->r[3]=R16(c->r[31]+0x00000004u); // 801DFC88
  c->ctr=c->r[12]; // 801DFC8C
  if (true) { c->lr=0x801DFC94u; dispatch(c,c->ctr); } // 801DFC90
L_801DFC94:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DFC94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DFC98
  c->lr=c->r[0]; // 801DFC9C
  c->r[1]=c->r[1]+0x00000010u; // 801DFCA0
  return; // 801DFCA4
}

// gap_config_cfm
void f_801DFCA8(Ctx* __restrict c) {
  trace_call(0x801DFCA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DFCA8
  c->r[0]=c->lr; // 801DFCAC
  c->r[5]=0u+0x80480000u; // 801DFCB0
  c->r[6]=0u+0x00000000u; // 801DFCB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801DFCB8
  c->r[0]=0u+0x00000002u; // 801DFCBC
  c->r[5]=c->r[5]+0x00005CA0u; // 801DFCC0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801DFCC4
  c->r[31]=c->r[5]+0x000000ACu; // 801DFCC8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801DFCCC
  c->ctr=c->r[0]; // 801DFCD0
L_801DFCD4:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801DFCD4
  cmps(c,0,(int32_t)c->r[0],0); // 801DFCD8
  if (crb(c,2)) { goto L_801DFCF0; } // 801DFCDC
  c->r[0]=R16(c->r[31]+0x00000006u); // 801DFCE0
  cmpu(c,0,c->r[0],c->r[3]); // 801DFCE4
  if (!crb(c,2)) { goto L_801DFCF0; } // 801DFCE8
  goto L_801DFD60; // 801DFCEC
L_801DFCF0:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801DFCF0
  c->r[6]=c->r[6]+0x00000001u; // 801DFCF4
  cmps(c,0,(int32_t)c->r[0],0); // 801DFCF8
  if (crb(c,2)) { goto L_801DFD10; } // 801DFCFC
  c->r[0]=R16(c->r[31]+0x00000006u); // 801DFD00
  cmpu(c,0,c->r[0],c->r[3]); // 801DFD04
  if (!crb(c,2)) { goto L_801DFD10; } // 801DFD08
  goto L_801DFD60; // 801DFD0C
L_801DFD10:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801DFD10
  c->r[6]=c->r[6]+0x00000001u; // 801DFD14
  cmps(c,0,(int32_t)c->r[0],0); // 801DFD18
  if (crb(c,2)) { goto L_801DFD30; } // 801DFD1C
  c->r[0]=R16(c->r[31]+0x00000006u); // 801DFD20
  cmpu(c,0,c->r[0],c->r[3]); // 801DFD24
  if (!crb(c,2)) { goto L_801DFD30; } // 801DFD28
  goto L_801DFD60; // 801DFD2C
L_801DFD30:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801DFD30
  c->r[6]=c->r[6]+0x00000001u; // 801DFD34
  cmps(c,0,(int32_t)c->r[0],0); // 801DFD38
  if (crb(c,2)) { goto L_801DFD50; } // 801DFD3C
  c->r[0]=R16(c->r[31]+0x00000006u); // 801DFD40
  cmpu(c,0,c->r[0],c->r[3]); // 801DFD44
  if (!crb(c,2)) { goto L_801DFD50; } // 801DFD48
  goto L_801DFD60; // 801DFD4C
L_801DFD50:;
  c->r[6]=c->r[6]+0x00000001u; // 801DFD50
  c->r[31]=c->r[31]+0x00000060u; // 801DFD54
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DFCD4; } // 801DFD58
  c->r[31]=0u+0x00000000u; // 801DFD5C
L_801DFD60:;
  cmps(c,0,(int32_t)c->r[31],0); // 801DFD60
  if (crb(c,2)) { goto L_801DFE7C; } // 801DFD64
  c->r[0]=R16(c->r[4]+0x00000000u); // 801DFD68
  cmps(c,0,(int32_t)c->r[0],0); // 801DFD6C
  if (!crb(c,2)) { goto L_801DFDA8; } // 801DFD70
  c->r[0]=R8(c->r[31]+0x00000001u); // 801DFD74
  c->r[3]=c->r[0]|0x00000004u; // 801DFD78
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 801DFD7C
  W8(c->r[31]+0x00000001u,c->r[3]); // 801DFD80
  if (crb(c,2)) { goto L_801DFE7C; } // 801DFD84
  c->r[0]=0u+0x00000004u; // 801DFD88
  c->r[4]=0u+0x00000100u; // 801DFD8C
  W8(c->r[31]+0x00000000u,c->r[0]); // 801DFD90
  c->r[12]=R32(c->r[31]+0x00000020u); // 801DFD94
  c->r[3]=R16(c->r[31]+0x00000004u); // 801DFD98
  c->ctr=c->r[12]; // 801DFD9C
  if (true) { c->lr=0x801DFDA4u; dispatch(c,c->ctr); } // 801DFDA0
  goto L_801DFE7C; // 801DFDA4
L_801DFDA8:;
  c->r[12]=R32(c->r[31]+0x00000020u); // 801DFDA8
  c->r[4]=0u+0x00000101u; // 801DFDAC
  c->r[3]=R16(c->r[31]+0x00000004u); // 801DFDB0
  c->ctr=c->r[12]; // 801DFDB4
  if (true) { c->lr=0x801DFDBCu; dispatch(c,c->ctr); } // 801DFDB8
  c->r[30]=R16(c->r[31]+0x00000010u); // 801DFDBC
  goto L_801DFDD0; // 801DFDC0
L_801DFDC4:;
  c->r[3]=c->r[31]+0x00000014u; // 801DFDC4
  c->lr=0x801DFDCCu; f_801CB5C0(c); // 801DFDC8
  c->lr=0x801DFDD0u; f_801CAF10(c); // 801DFDCC
L_801DFDD0:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 801DFDD0
  cmps(c,0,(int32_t)c->r[0],0); // 801DFDD4
  if (!crb(c,2)) { IRQCHK(c); goto L_801DFDC4; } // 801DFDD8
  c->r[3]=0u+0x80480000u; // 801DFDDC
  c->r[4]=0u+0x00000000u; // 801DFDE0
  c->r[3]=c->r[3]+0x00005CA0u; // 801DFDE4
  c->r[0]=0u+0x00000002u; // 801DFDE8
  W8(c->r[31]+0x00000000u,c->r[4]); // 801DFDEC
  c->r[4]=c->r[3]+0x000000ACu; // 801DFDF0
  c->r[3]=0u+0x00000000u; // 801DFDF4
  c->ctr=c->r[0]; // 801DFDF8
L_801DFDFC:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801DFDFC
  cmps(c,0,(int32_t)c->r[0],0); // 801DFE00
  if (crb(c,2)) { goto L_801DFE14; } // 801DFE04
  c->r[0]=R16(c->r[4]+0x00000010u); // 801DFE08
  cmpu(c,0,c->r[0],c->r[30]); // 801DFE0C
  if (crb(c,2)) { goto L_801DFE7C; } // 801DFE10
L_801DFE14:;
  c->r[0]=R8(c->r[4]+0x00000060u); // 801DFE14
  c->r[3]=c->r[3]+0x00000001u; // 801DFE18
  cmps(c,0,(int32_t)c->r[0],0); // 801DFE1C
  if (crb(c,2)) { goto L_801DFE30; } // 801DFE20
  c->r[0]=R16(c->r[4]+0x00000070u); // 801DFE24
  cmpu(c,0,c->r[0],c->r[30]); // 801DFE28
  if (crb(c,2)) { goto L_801DFE7C; } // 801DFE2C
L_801DFE30:;
  c->r[0]=R8(c->r[4]+0x000000C0u); // 801DFE30
  c->r[3]=c->r[3]+0x00000001u; // 801DFE34
  cmps(c,0,(int32_t)c->r[0],0); // 801DFE38
  if (crb(c,2)) { goto L_801DFE4C; } // 801DFE3C
  c->r[0]=R16(c->r[4]+0x000000D0u); // 801DFE40
  cmpu(c,0,c->r[0],c->r[30]); // 801DFE44
  if (crb(c,2)) { goto L_801DFE7C; } // 801DFE48
L_801DFE4C:;
  c->r[0]=R8(c->r[4]+0x00000120u); // 801DFE4C
  c->r[3]=c->r[3]+0x00000001u; // 801DFE50
  cmps(c,0,(int32_t)c->r[0],0); // 801DFE54
  if (crb(c,2)) { goto L_801DFE68; } // 801DFE58
  c->r[0]=R16(c->r[4]+0x00000130u); // 801DFE5C
  cmpu(c,0,c->r[0],c->r[30]); // 801DFE60
  if (crb(c,2)) { goto L_801DFE7C; } // 801DFE64
L_801DFE68:;
  c->r[3]=c->r[3]+0x00000001u; // 801DFE68
  c->r[4]=c->r[4]+0x00000180u; // 801DFE6C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DFDFC; } // 801DFE70
  c->r[3]=c->r[30]|c->r[30]; // 801DFE74
  c->lr=0x801DFE7Cu; f_801E64D0(c); // 801DFE78
L_801DFE7C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801DFE7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801DFE80
  c->r[30]=R32(c->r[1]+0x00000008u); // 801DFE84
  c->lr=c->r[0]; // 801DFE88
  c->r[1]=c->r[1]+0x00000010u; // 801DFE8C
  return; // 801DFE90
}

// gap_disconnect_ind
void f_801DFE94(Ctx* __restrict c) {
  trace_call(0x801DFE94u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801DFE94
  c->r[0]=c->lr; // 801DFE98
  c->r[5]=0u+0x80480000u; // 801DFE9C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801DFEA0
  c->r[5]=c->r[5]+0x00005CA0u; // 801DFEA4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801DFEA8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801DFEAC
  c->r[30]=c->r[4]|c->r[4]; // 801DFEB0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801DFEB4
  c->r[29]=c->r[3]|c->r[3]; // 801DFEB8
  c->r[0]=R8(c->r[5]+0x00000028u); // 801DFEBC
  cmpu(c,0,c->r[0],0x00000004u); // 801DFEC0
  if (crb(c,0)) { goto L_801DFEE0; } // 801DFEC4
  c->r[3]=0u+0x000E0000u; // 801DFEC8
  c->r[4]=0u+0x803A0000u; // 801DFECC
  c->r[5]=c->r[29]|c->r[29]; // 801DFED0
  c->r[3]=c->r[3]+0x00000003u; // 801DFED4
  c->r[4]=c->r[4]+0x000006D0u; // 801DFED8
  c->lr=0x801DFEE0u; f_801CD9F0(c); // 801DFEDC
L_801DFEE0:;
  c->r[3]=0u+0x80480000u; // 801DFEE0
  c->r[0]=0u+0x00000002u; // 801DFEE4
  c->r[3]=c->r[3]+0x00005CA0u; // 801DFEE8
  c->r[4]=0u+0x00000000u; // 801DFEEC
  c->r[31]=c->r[3]+0x000000ACu; // 801DFEF0
  c->ctr=c->r[0]; // 801DFEF4
L_801DFEF8:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801DFEF8
  cmps(c,0,(int32_t)c->r[0],0); // 801DFEFC
  if (crb(c,2)) { goto L_801DFF14; } // 801DFF00
  c->r[0]=R16(c->r[31]+0x00000006u); // 801DFF04
  cmpu(c,0,c->r[0],c->r[29]); // 801DFF08
  if (!crb(c,2)) { goto L_801DFF14; } // 801DFF0C
  goto L_801DFF84; // 801DFF10
L_801DFF14:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801DFF14
  c->r[4]=c->r[4]+0x00000001u; // 801DFF18
  cmps(c,0,(int32_t)c->r[0],0); // 801DFF1C
  if (crb(c,2)) { goto L_801DFF34; } // 801DFF20
  c->r[0]=R16(c->r[31]+0x00000006u); // 801DFF24
  cmpu(c,0,c->r[0],c->r[29]); // 801DFF28
  if (!crb(c,2)) { goto L_801DFF34; } // 801DFF2C
  goto L_801DFF84; // 801DFF30
L_801DFF34:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801DFF34
  c->r[4]=c->r[4]+0x00000001u; // 801DFF38
  cmps(c,0,(int32_t)c->r[0],0); // 801DFF3C
  if (crb(c,2)) { goto L_801DFF54; } // 801DFF40
  c->r[0]=R16(c->r[31]+0x00000006u); // 801DFF44
  cmpu(c,0,c->r[0],c->r[29]); // 801DFF48
  if (!crb(c,2)) { goto L_801DFF54; } // 801DFF4C
  goto L_801DFF84; // 801DFF50
L_801DFF54:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801DFF54
  c->r[4]=c->r[4]+0x00000001u; // 801DFF58
  cmps(c,0,(int32_t)c->r[0],0); // 801DFF5C
  if (crb(c,2)) { goto L_801DFF74; } // 801DFF60
  c->r[0]=R16(c->r[31]+0x00000006u); // 801DFF64
  cmpu(c,0,c->r[0],c->r[29]); // 801DFF68
  if (!crb(c,2)) { goto L_801DFF74; } // 801DFF6C
  goto L_801DFF84; // 801DFF70
L_801DFF74:;
  c->r[4]=c->r[4]+0x00000001u; // 801DFF74
  c->r[31]=c->r[31]+0x00000060u; // 801DFF78
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DFEF8; } // 801DFF7C
  c->r[31]=0u+0x00000000u; // 801DFF80
L_801DFF84:;
  cmps(c,0,(int32_t)c->r[31],0); // 801DFF84
  if (crb(c,2)) { goto L_801E0070; } // 801DFF88
  cmps(c,0,(int32_t)c->r[30],0); // 801DFF8C
  if (crb(c,2)) { goto L_801DFF9C; } // 801DFF90
  c->r[3]=c->r[29]|c->r[29]; // 801DFF94
  c->lr=0x801DFF9Cu; f_801E6B50(c); // 801DFF98
L_801DFF9C:;
  c->r[12]=R32(c->r[31]+0x00000020u); // 801DFF9C
  c->r[4]=0u+0x00000101u; // 801DFFA0
  c->r[3]=R16(c->r[31]+0x00000004u); // 801DFFA4
  c->ctr=c->r[12]; // 801DFFA8
  if (true) { c->lr=0x801DFFB0u; dispatch(c,c->ctr); } // 801DFFAC
  c->r[30]=R16(c->r[31]+0x00000010u); // 801DFFB0
  goto L_801DFFC4; // 801DFFB4
L_801DFFB8:;
  c->r[3]=c->r[31]+0x00000014u; // 801DFFB8
  c->lr=0x801DFFC0u; f_801CB5C0(c); // 801DFFBC
  c->lr=0x801DFFC4u; f_801CAF10(c); // 801DFFC0
L_801DFFC4:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 801DFFC4
  cmps(c,0,(int32_t)c->r[0],0); // 801DFFC8
  if (!crb(c,2)) { IRQCHK(c); goto L_801DFFB8; } // 801DFFCC
  c->r[3]=0u+0x80480000u; // 801DFFD0
  c->r[4]=0u+0x00000000u; // 801DFFD4
  c->r[3]=c->r[3]+0x00005CA0u; // 801DFFD8
  c->r[0]=0u+0x00000002u; // 801DFFDC
  W8(c->r[31]+0x00000000u,c->r[4]); // 801DFFE0
  c->r[4]=c->r[3]+0x000000ACu; // 801DFFE4
  c->r[3]=0u+0x00000000u; // 801DFFE8
  c->ctr=c->r[0]; // 801DFFEC
L_801DFFF0:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801DFFF0
  cmps(c,0,(int32_t)c->r[0],0); // 801DFFF4
  if (crb(c,2)) { goto L_801E0008; } // 801DFFF8
  c->r[0]=R16(c->r[4]+0x00000010u); // 801DFFFC
  cmpu(c,0,c->r[0],c->r[30]); // 801E0000
  if (crb(c,2)) { goto L_801E0070; } // 801E0004
L_801E0008:;
  c->r[0]=R8(c->r[4]+0x00000060u); // 801E0008
  c->r[3]=c->r[3]+0x00000001u; // 801E000C
  cmps(c,0,(int32_t)c->r[0],0); // 801E0010
  if (crb(c,2)) { goto L_801E0024; } // 801E0014
  c->r[0]=R16(c->r[4]+0x00000070u); // 801E0018
  cmpu(c,0,c->r[0],c->r[30]); // 801E001C
  if (crb(c,2)) { goto L_801E0070; } // 801E0020
L_801E0024:;
  c->r[0]=R8(c->r[4]+0x000000C0u); // 801E0024
  c->r[3]=c->r[3]+0x00000001u; // 801E0028
  cmps(c,0,(int32_t)c->r[0],0); // 801E002C
  if (crb(c,2)) { goto L_801E0040; } // 801E0030
  c->r[0]=R16(c->r[4]+0x000000D0u); // 801E0034
  cmpu(c,0,c->r[0],c->r[30]); // 801E0038
  if (crb(c,2)) { goto L_801E0070; } // 801E003C
L_801E0040:;
  c->r[0]=R8(c->r[4]+0x00000120u); // 801E0040
  c->r[3]=c->r[3]+0x00000001u; // 801E0044
  cmps(c,0,(int32_t)c->r[0],0); // 801E0048
  if (crb(c,2)) { goto L_801E005C; } // 801E004C
  c->r[0]=R16(c->r[4]+0x00000130u); // 801E0050
  cmpu(c,0,c->r[0],c->r[30]); // 801E0054
  if (crb(c,2)) { goto L_801E0070; } // 801E0058
L_801E005C:;
  c->r[3]=c->r[3]+0x00000001u; // 801E005C
  c->r[4]=c->r[4]+0x00000180u; // 801E0060
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801DFFF0; } // 801E0064
  c->r[3]=c->r[30]|c->r[30]; // 801E0068
  c->lr=0x801E0070u; f_801E64D0(c); // 801E006C
L_801E0070:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E0070
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E0074
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E0078
  c->r[29]=R32(c->r[1]+0x00000014u); // 801E007C
  c->lr=c->r[0]; // 801E0080
  c->r[1]=c->r[1]+0x00000020u; // 801E0084
  return; // 801E0088
}

// gap_data_ind
void f_801E008C(Ctx* __restrict c) {
  trace_call(0x801E008Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E008C
  c->r[0]=c->lr; // 801E0090
  c->r[5]=0u+0x80480000u; // 801E0094
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E0098
  c->r[0]=0u+0x00000002u; // 801E009C
  c->r[5]=c->r[5]+0x00005CA0u; // 801E00A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E00A4
  c->r[31]=c->r[5]+0x000000ACu; // 801E00A8
  c->r[5]=0u+0x00000000u; // 801E00AC
  c->ctr=c->r[0]; // 801E00B0
L_801E00B4:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801E00B4
  cmps(c,0,(int32_t)c->r[0],0); // 801E00B8
  if (crb(c,2)) { goto L_801E00D0; } // 801E00BC
  c->r[0]=R16(c->r[31]+0x00000006u); // 801E00C0
  cmpu(c,0,c->r[0],c->r[3]); // 801E00C4
  if (!crb(c,2)) { goto L_801E00D0; } // 801E00C8
  goto L_801E0140; // 801E00CC
L_801E00D0:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801E00D0
  c->r[5]=c->r[5]+0x00000001u; // 801E00D4
  cmps(c,0,(int32_t)c->r[0],0); // 801E00D8
  if (crb(c,2)) { goto L_801E00F0; } // 801E00DC
  c->r[0]=R16(c->r[31]+0x00000006u); // 801E00E0
  cmpu(c,0,c->r[0],c->r[3]); // 801E00E4
  if (!crb(c,2)) { goto L_801E00F0; } // 801E00E8
  goto L_801E0140; // 801E00EC
L_801E00F0:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801E00F0
  c->r[5]=c->r[5]+0x00000001u; // 801E00F4
  cmps(c,0,(int32_t)c->r[0],0); // 801E00F8
  if (crb(c,2)) { goto L_801E0110; } // 801E00FC
  c->r[0]=R16(c->r[31]+0x00000006u); // 801E0100
  cmpu(c,0,c->r[0],c->r[3]); // 801E0104
  if (!crb(c,2)) { goto L_801E0110; } // 801E0108
  goto L_801E0140; // 801E010C
L_801E0110:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801E0110
  c->r[5]=c->r[5]+0x00000001u; // 801E0114
  cmps(c,0,(int32_t)c->r[0],0); // 801E0118
  if (crb(c,2)) { goto L_801E0130; } // 801E011C
  c->r[0]=R16(c->r[31]+0x00000006u); // 801E0120
  cmpu(c,0,c->r[0],c->r[3]); // 801E0124
  if (!crb(c,2)) { goto L_801E0130; } // 801E0128
  goto L_801E0140; // 801E012C
L_801E0130:;
  c->r[5]=c->r[5]+0x00000001u; // 801E0130
  c->r[31]=c->r[31]+0x00000060u; // 801E0134
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E00B4; } // 801E0138
  c->r[31]=0u+0x00000000u; // 801E013C
L_801E0140:;
  cmps(c,0,(int32_t)c->r[31],0); // 801E0140
  if (!crb(c,2)) { goto L_801E0154; } // 801E0144
  c->r[3]=c->r[4]|c->r[4]; // 801E0148
  c->lr=0x801E0150u; f_801CAF10(c); // 801E014C
  goto L_801E0188; // 801E0150
L_801E0154:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801E0154
  cmpu(c,0,c->r[0],0x00000004u); // 801E0158
  if (!crb(c,2)) { goto L_801E0180; } // 801E015C
  c->r[3]=c->r[31]+0x00000014u; // 801E0160
  c->lr=0x801E0168u; f_801CB340(c); // 801E0164
  c->r[12]=R32(c->r[31]+0x00000020u); // 801E0168
  c->r[4]=0u+0x00000102u; // 801E016C
  c->r[3]=R16(c->r[31]+0x00000004u); // 801E0170
  c->ctr=c->r[12]; // 801E0174
  if (true) { c->lr=0x801E017Cu; dispatch(c,c->ctr); } // 801E0178
  goto L_801E0188; // 801E017C
L_801E0180:;
  c->r[3]=c->r[4]|c->r[4]; // 801E0180
  c->lr=0x801E0188u; f_801CAF10(c); // 801E0184
L_801E0188:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E0188
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E018C
  c->lr=c->r[0]; // 801E0190
  c->r[1]=c->r[1]+0x00000010u; // 801E0194
  return; // 801E0198
}

// gap_congestion_ind
void f_801E019C(Ctx* __restrict c) {
  trace_call(0x801E019Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E019C
  c->r[0]=c->lr; // 801E01A0
  c->r[5]=0u+0x80480000u; // 801E01A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801E01A8
  c->r[5]=c->r[5]+0x00005CA0u; // 801E01AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801E01B0
  c->r[31]=c->r[4]|c->r[4]; // 801E01B4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801E01B8
  c->r[30]=c->r[3]|c->r[3]; // 801E01BC
  c->r[0]=R8(c->r[5]+0x00000028u); // 801E01C0
  cmpu(c,0,c->r[0],0x00000004u); // 801E01C4
  if (crb(c,0)) { goto L_801E01E8; } // 801E01C8
  c->r[3]=0u+0x000E0000u; // 801E01CC
  c->r[4]=0u+0x803A0000u; // 801E01D0
  c->r[5]=c->r[31]|c->r[31]; // 801E01D4
  c->r[6]=c->r[30]|c->r[30]; // 801E01D8
  c->r[3]=c->r[3]+0x00000003u; // 801E01DC
  c->r[4]=c->r[4]+0x000006F8u; // 801E01E0
  c->lr=0x801E01E8u; f_801CDA10(c); // 801E01E4
L_801E01E8:;
  c->r[3]=0u+0x80480000u; // 801E01E8
  c->r[0]=0u+0x00000002u; // 801E01EC
  c->r[3]=c->r[3]+0x00005CA0u; // 801E01F0
  c->r[4]=0u+0x00000000u; // 801E01F4
  c->r[3]=c->r[3]+0x000000ACu; // 801E01F8
  c->ctr=c->r[0]; // 801E01FC
L_801E0200:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 801E0200
  cmps(c,0,(int32_t)c->r[0],0); // 801E0204
  if (crb(c,2)) { goto L_801E021C; } // 801E0208
  c->r[0]=R16(c->r[3]+0x00000006u); // 801E020C
  cmpu(c,0,c->r[0],c->r[30]); // 801E0210
  if (!crb(c,2)) { goto L_801E021C; } // 801E0214
  goto L_801E028C; // 801E0218
L_801E021C:;
  {uint32_t ea=c->r[3]+0x00000060u; c->r[0]=R8(ea); c->r[3]=ea;} // 801E021C
  c->r[4]=c->r[4]+0x00000001u; // 801E0220
  cmps(c,0,(int32_t)c->r[0],0); // 801E0224
  if (crb(c,2)) { goto L_801E023C; } // 801E0228
  c->r[0]=R16(c->r[3]+0x00000006u); // 801E022C
  cmpu(c,0,c->r[0],c->r[30]); // 801E0230
  if (!crb(c,2)) { goto L_801E023C; } // 801E0234
  goto L_801E028C; // 801E0238
L_801E023C:;
  {uint32_t ea=c->r[3]+0x00000060u; c->r[0]=R8(ea); c->r[3]=ea;} // 801E023C
  c->r[4]=c->r[4]+0x00000001u; // 801E0240
  cmps(c,0,(int32_t)c->r[0],0); // 801E0244
  if (crb(c,2)) { goto L_801E025C; } // 801E0248
  c->r[0]=R16(c->r[3]+0x00000006u); // 801E024C
  cmpu(c,0,c->r[0],c->r[30]); // 801E0250
  if (!crb(c,2)) { goto L_801E025C; } // 801E0254
  goto L_801E028C; // 801E0258
L_801E025C:;
  {uint32_t ea=c->r[3]+0x00000060u; c->r[0]=R8(ea); c->r[3]=ea;} // 801E025C
  c->r[4]=c->r[4]+0x00000001u; // 801E0260
  cmps(c,0,(int32_t)c->r[0],0); // 801E0264
  if (crb(c,2)) { goto L_801E027C; } // 801E0268
  c->r[0]=R16(c->r[3]+0x00000006u); // 801E026C
  cmpu(c,0,c->r[0],c->r[30]); // 801E0270
  if (!crb(c,2)) { goto L_801E027C; } // 801E0274
  goto L_801E028C; // 801E0278
L_801E027C:;
  c->r[4]=c->r[4]+0x00000001u; // 801E027C
  c->r[3]=c->r[3]+0x00000060u; // 801E0280
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801E0200; } // 801E0284
  c->r[3]=0u+0x00000000u; // 801E0288
L_801E028C:;
  cmps(c,0,(int32_t)c->r[3],0); // 801E028C
  if (crb(c,2)) { goto L_801E02B8; } // 801E0290
  c->r[0]=0u-c->r[31]; // 801E0294
  c->r[12]=R32(c->r[3]+0x00000020u); // 801E0298
  c->r[0]=c->r[0]|c->r[31]; // 801E029C
  c->r[3]=R16(c->r[3]+0x00000004u); // 801E02A0
  c->r[4]=sraw(c,c->r[0],31); // 801E02A4
  c->r[0]=c->r[4]+0x00000104u; // 801E02A8
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801E02AC
  c->ctr=c->r[12]; // 801E02B0
  if (true) { c->lr=0x801E02B8u; dispatch(c,c->ctr); } // 801E02B4
L_801E02B8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801E02B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801E02BC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801E02C0
  c->lr=c->r[0]; // 801E02C4
  c->r[1]=c->r[1]+0x00000010u; // 801E02C8
  return; // 801E02CC
}

// btm_cback
void f_801E02D0(Ctx* __restrict c) {
  trace_call(0x801E02D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801E02D0
  c->r[0]=c->lr; // 801E02D4
  c->r[7]=0u+0x803A0000u; // 801E02D8
  cmpu(c,0,c->r[3],0x00000002u); // 801E02DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801E02E0
  c->r[7]=c->r[7]+0x00000730u; // 801E02E4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801E02E8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801E02EC
  c->r[30]=c->r[4]|c->r[4]; // 801E02F0
  if (!crb(c,0)) { goto L_801E0490; } // 801E02F4
  c->r[8]=0u+0x80480000u; // 801E02F8
  c->r[0]=rotl(c->r[3],4)&0x000FFFF0u; // 801E02FC
  c->r[8]=c->r[8]+0x00005CA0u; // 801E0300
  c->r[31]=c->r[8]+c->r[0]; // 801E0304
  c->r[0]=R8(c->r[31]+0x0000000Fu); // 801E0308
  cmps(c,0,(int32_t)c->r[0],0); // 801E030C
  if (crb(c,2)) { goto L_801E0490; } // 801E0310
  c->r[0]=R16(c->r[31]+0x0000000Cu); // 801E0314
  cmps(c,0,(int32_t)c->r[0],3); // 801E0318
  if (crb(c,2)) { goto L_801E0388; } // 801E031C
  if (!crb(c,0)) { goto L_801E0330; } // 801E0320
  cmps(c,0,(int32_t)c->r[0],2); // 801E0324
  if (!crb(c,0)) { goto L_801E033C; } // 801E0328
  goto L_801E0460; // 801E032C
L_801E0330:;
  cmps(c,0,(int32_t)c->r[0],5); // 801E0330
  if (!crb(c,0)) { goto L_801E0460; } // 801E0334
  goto L_801E03D4; // 801E0338
L_801E033C:;
  c->r[6]=R8(c->r[4]+0x00000001u); // 801E033C
  c->r[3]=0u+0x00000114u; // 801E0340
  c->r[0]=R8(c->r[8]+0x00000028u); // 801E0344
  c->r[30]=c->r[1]+0x00000008u; // 801E0348
  W8(c->r[1]+0x0000000Au,c->r[6]); // 801E034C
  cmpu(c,0,c->r[0],0x00000004u); // 801E0350
  c->r[0]=R8(c->r[4]+0x00000000u); // 801E0354
  c->r[0]=cntlz(c->r[0]); // 801E0358
  c->r[0]=rotl(c->r[0],27)&0x00000001u; // 801E035C
  c->r[0]=0u-c->r[0]; // 801E0360
  c->r[0]=c->r[3]&~c->r[0]; // 801E0364
  W16(c->r[1]+0x00000008u,c->r[0]); // 801E0368
  if (crb(c,0)) { goto L_801E0460; } // 801E036C
  c->r[3]=0u+0x000E0000u; // 801E0370
  c->r[4]=c->r[7]+0x00000000u; // 801E0374
  c->r[3]=c->r[3]+0x00000003u; // 801E0378
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 801E037C
  c->lr=0x801E0384u; f_801CDA10(c); // 801E0380
  goto L_801E0460; // 801E0384
L_801E0388:;
  c->r[5]=R16(c->r[4]+0x00000000u); // 801E0388
  cmps(c,0,(int32_t)c->r[5],0); // 801E038C
  if (crb(c,2)) { goto L_801E03B4; } // 801E0390
  c->r[0]=R8(c->r[8]+0x00000028u); // 801E0394
  cmpu(c,0,c->r[0],0x00000004u); // 801E0398
  if (crb(c,0)) { goto L_801E0460; } // 801E039C
  c->r[3]=0u+0x000E0000u; // 801E03A0
  c->r[4]=c->r[7]+0x0000003Cu; // 801E03A4
  c->r[3]=c->r[3]+0x00000003u; // 801E03A8
  c->lr=0x801E03B0u; f_801CD9F0(c); // 801E03AC
  goto L_801E0460; // 801E03B0
L_801E03B4:;
  c->r[0]=R8(c->r[8]+0x00000028u); // 801E03B4
  cmpu(c,0,c->r[0],0x00000004u); // 801E03B8
  if (crb(c,0)) { goto L_801E0460; } // 801E03BC
  c->r[3]=0u+0x000E0000u; // 801E03C0
  c->r[4]=c->r[7]+0x00000070u; // 801E03C4
  c->r[3]=c->r[3]+0x00000003u; // 801E03C8
  c->lr=0x801E03D0u; f_801CD9D0(c); // 801E03CC
  goto L_801E0460; // 801E03D0
L_801E03D4:;
  c->r[0]=R16(c->r[4]+0x00000000u); // 801E03D4
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801E03D8
  cmpu(c,0,c->r[0],0x00000008u); // 801E03DC
  if (crb(c,1)) { goto L_801E0434; } // 801E03E0
  c->r[3]=0u+0x803A0000u; // 801E03E4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801E03E8
  c->r[3]=c->r[3]+0x000007FCu; // 801E03EC
  c->r[3]=R32(c->r[3]+c->r[0]); // 801E03F0
  c->ctr=c->r[3]; // 801E03F4
  if (true) { switch (c->ctr) { case 0x801E03FCu: goto L_801E03FC; case 0x801E0404u: goto L_801E0404; case 0x801E040Cu: goto L_801E040C; case 0x801E0414u: goto L_801E0414; case 0x801E041Cu: goto L_801E041C; case 0x801E0424u: goto L_801E0424; case 0x801E042Cu: goto L_801E042C; case 0x801E0434u: goto L_801E0434; default: break; } dispatch(c,c->ctr); return; } // 801E03F8
L_801E03FC:;
  c->r[5]=0u+0x00000000u; // 801E03FC
  goto L_801E0438; // 801E0400
L_801E0404:;
  c->r[5]=0u+0x0000010Bu; // 801E0404
  goto L_801E0438; // 801E0408
L_801E040C:;
  c->r[5]=0u+0x00000103u; // 801E040C
  goto L_801E0438; // 801E0410
L_801E0414:;
  c->r[5]=0u+0x00000109u; // 801E0414
  goto L_801E0438; // 801E0418
L_801E041C:;
  c->r[5]=0u+0x0000010Cu; // 801E041C
  goto L_801E0438; // 801E0420
L_801E0424:;
  c->r[5]=0u+0x0000010Du; // 801E0424
  goto L_801E0438; // 801E0428
L_801E042C:;
  c->r[5]=0u+0x00000115u; // 801E042C
  goto L_801E0438; // 801E0430
L_801E0434:;
  c->r[5]=0u+0x00000114u; // 801E0434
L_801E0438:;
  c->r[3]=0u+0x80480000u; // 801E0438
  W16(c->r[4]+0x00000000u,c->r[5]); // 801E043C
  c->r[3]=c->r[3]+0x00005CA0u; // 801E0440
  c->r[0]=R8(c->r[3]+0x00000028u); // 801E0444
  cmpu(c,0,c->r[0],0x00000004u); // 801E0448
  if (crb(c,0)) { goto L_801E0460; } // 801E044C
  c->r[3]=0u+0x000E0000u; // 801E0450
  c->r[4]=c->r[7]+0x00000098u; // 801E0454
  c->r[3]=c->r[3]+0x00000003u; // 801E0458
  c->lr=0x801E0460u; f_801CD9F0(c); // 801E045C
L_801E0460:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 801E0460
  cmps(c,0,(int32_t)c->r[12],0); // 801E0464
  if (crb(c,2)) { goto L_801E047C; } // 801E0468
  c->r[4]=c->r[30]|c->r[30]; // 801E046C
  c->r[3]=R16(c->r[31]+0x0000000Cu); // 801E0470
  c->ctr=c->r[12]; // 801E0474
  if (true) { c->lr=0x801E047Cu; dispatch(c,c->ctr); } // 801E0478
L_801E047C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801E047C
  if (crb(c,2)) { goto L_801E0490; } // 801E0480
  c->r[0]=0u+0x00000000u; // 801E0484
  W32(c->r[31]+0x00000004u,c->r[0]); // 801E0488
  W8(c->r[31]+0x0000000Fu,c->r[0]); // 801E048C
L_801E0490:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801E0490
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801E0494
  c->r[30]=R32(c->r[1]+0x00000018u); // 801E0498
  c->lr=c->r[0]; // 801E049C
  c->r[1]=c->r[1]+0x00000020u; // 801E04A0
  return; // 801E04A4
}

