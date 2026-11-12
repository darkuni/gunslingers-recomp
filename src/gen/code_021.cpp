#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_801C2644
void f_801C2644(Ctx* __restrict c) {
  trace_call(0x801C2644u);
  c->r[12]=R32(c->r[13]+0xFFFF9930u); // 801C2644
  c->r[0]=0u+0x00000001u; // 801C2648
  W8(c->r[13]+0xFFFF9938u,c->r[0]); // 801C264C
  cmps(c,0,(int32_t)c->r[12],0); // 801C2650
  if (crb(c,2)) return; // 801C2654
  c->r[3]=0u+0x00000000u; // 801C2658
  c->ctr=c->r[12]; // 801C265C
  if (true) { dispatch(c,c->ctr); return; } // 801C2660
}

// fn_801C2664
void f_801C2664(Ctx* __restrict c) {
  trace_call(0x801C2664u);
  return; // 801C2664
}

// fn_801C2668
void f_801C2668(Ctx* __restrict c) {
  trace_call(0x801C2668u);
  c->r[0]=0u+0x00001000u; // 801C2668
  c->r[5]=0u+0xCC000000u; // 801C266C
  W32(c->r[5]+0x00003000u,c->r[0]); // 801C2670
  c->r[12]=R32(c->r[13]+0xFFFF9934u); // 801C2674
  cmps(c,0,(int32_t)c->r[12],0); // 801C2678
  if (crb(c,2)) return; // 801C267C
  c->ctr=c->r[12]; // 801C2680
  if (true) { dispatch(c,c->ctr); return; } // 801C2684
}

// fn_801C2688
void f_801C2688(Ctx* __restrict c) {
  trace_call(0x801C2688u);
  return; // 801C2688
}

// DBInitComm
void f_801C268C(Ctx* __restrict c) {
  trace_call(0x801C268Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C268C
  c->r[0]=c->lr; // 801C2690
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C2694
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C2698
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C269C
  c->r[30]=c->r[4]|c->r[4]; // 801C26A0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C26A4
  c->r[29]=c->r[3]|c->r[3]; // 801C26A8
  c->lr=0x801C26B0u; f_802494C0(c); // 801C26AC
  c->r[0]=c->r[13]+0xFFFF9938u; // 801C26B0
  c->r[31]=c->r[3]|c->r[3]; // 801C26B4
  W32(c->r[29]+0x00000000u,c->r[0]); // 801C26B8
  W32(c->r[13]+0xFFFF9930u,c->r[30]); // 801C26BC
  c->lr=0x801C26C4u; f_801C2C60(c); // 801C26C0
  c->r[3]=c->r[31]|c->r[31]; // 801C26C4
  c->lr=0x801C26CCu; f_80249500(c); // 801C26C8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C26CC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C26D0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C26D4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C26D8
  c->lr=c->r[0]; // 801C26DC
  c->r[1]=c->r[1]+0x00000020u; // 801C26E0
  return; // 801C26E4
}

// DBInitInterrupts
void f_801C26E8(Ctx* __restrict c) {
  trace_call(0x801C26E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C26E8
  c->r[0]=c->lr; // 801C26EC
  c->r[3]=0u+0x00020000u; // 801C26F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C26F4
  c->r[3]=c->r[3]+0xFFFF8000u; // 801C26F8
  c->lr=0x801C2700u; f_80249890(c); // 801C26FC
  c->r[3]=0u+0x00000040u; // 801C2700
  c->lr=0x801C2708u; f_80249890(c); // 801C2704
  c->r[3]=0u+0x801C0000u; // 801C2708
  c->r[4]=0u+0x801C0000u; // 801C270C
  c->r[3]=c->r[3]+0x00002644u; // 801C2710
  W32(c->r[13]+0xFFFF9934u,c->r[3]); // 801C2714
  c->r[4]=c->r[4]+0x00002668u; // 801C2718
  c->r[3]=0u+0x00000019u; // 801C271C
  c->lr=0x801C2724u; f_80249530(c); // 801C2720
  c->r[3]=0u+0x00000040u; // 801C2724
  c->lr=0x801C272Cu; f_80249910(c); // 801C2728
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C272C
  c->lr=c->r[0]; // 801C2730
  c->r[1]=c->r[1]+0x00000010u; // 801C2734
  return; // 801C2738
}

// DBQueryData
void f_801C273C(Ctx* __restrict c) {
  trace_call(0x801C273Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C273C
  c->r[0]=c->lr; // 801C2740
  c->r[3]=0u+0x00000000u; // 801C2744
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C2748
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C274C
  c->r[0]=R32(c->r[13]+0xFFFF9940u); // 801C2750
  W8(c->r[13]+0xFFFF9938u,c->r[3]); // 801C2754
  cmps(c,0,(int32_t)c->r[0],0); // 801C2758
  if (!crb(c,2)) { goto L_801C27C8; } // 801C275C
  c->lr=0x801C2764u; f_802494C0(c); // 801C2760
  c->r[31]=c->r[3]|c->r[3]; // 801C2764
  c->r[4]=c->r[1]+0x00000008u; // 801C2768
  c->r[3]=0u+0x34000000u; // 801C276C
  c->r[5]=0u+0x00000001u; // 801C2770
  c->lr=0x801C2778u; f_801C2D1C(c); // 801C2774
  c->r[0]=R8(c->r[1]+0x00000008u); // 801C2778
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801C277C
  if (!crb(c,2)) { goto L_801C27C0; } // 801C2780
  c->r[3]=0u+0x34000000u; // 801C2784
  c->r[4]=c->r[1]+0x0000000Cu; // 801C2788
  c->r[3]=c->r[3]+0x00000200u; // 801C278C
  c->r[5]=0u+0x00000004u; // 801C2790
  c->lr=0x801C2798u; f_801C2D1C(c); // 801C2794
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801C2798
  c->r[3]=rotl(c->r[4],0)&0x1F000000u; // 801C279C
  c->r[0]=c->r[3]+0xE1000000u; // 801C27A0
  cmpu(c,0,c->r[0],0x00000000u); // 801C27A4
  if (!crb(c,2)) { goto L_801C27C0; } // 801C27A8
  c->r[3]=rotl(c->r[4],0)&0x00001FFFu; // 801C27AC
  c->r[0]=0u+0x00000001u; // 801C27B0
  W32(c->r[13]+0xFFFF993Cu,c->r[4]); // 801C27B4
  W32(c->r[13]+0xFFFF9940u,c->r[3]); // 801C27B8
  W8(c->r[13]+0xFFFF9938u,c->r[0]); // 801C27BC
L_801C27C0:;
  c->r[3]=c->r[31]|c->r[31]; // 801C27C0
  c->lr=0x801C27C8u; f_80249500(c); // 801C27C4
L_801C27C8:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C27C8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C27CC
  c->r[3]=R32(c->r[13]+0xFFFF9940u); // 801C27D0
  c->lr=c->r[0]; // 801C27D4
  c->r[1]=c->r[1]+0x00000020u; // 801C27D8
  return; // 801C27DC
}

// DBRead
void f_801C27E0(Ctx* __restrict c) {
  trace_call(0x801C27E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C27E0
  c->r[0]=c->lr; // 801C27E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C27E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C27EC
  c->r[31]=c->r[4]|c->r[4]; // 801C27F0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C27F4
  c->r[30]=c->r[3]|c->r[3]; // 801C27F8
  c->lr=0x801C2800u; f_802494C0(c); // 801C27FC
  c->r[5]=R32(c->r[13]+0xFFFF993Cu); // 801C2800
  c->r[0]=c->r[31]+0x00000003u; // 801C2804
  c->r[31]=c->r[3]|c->r[3]; // 801C2808
  c->r[4]=c->r[30]|c->r[30]; // 801C280C
  c->r[3]=rotl(c->r[5],16)&0x00000001u; // 801C2810
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801C2814
  c->r[0]=0u-c->r[3]; // 801C2818
  c->r[3]=rotl(c->r[0],0)&0x00000800u; // 801C281C
  c->r[3]=c->r[3]+0x00D10000u; // 801C2820
  c->r[0]=c->r[3]+0x00001000u; // 801C2824
  c->r[3]=rotl(c->r[0],6)&0x3FFFFF00u; // 801C2828
  c->lr=0x801C2830u; f_801C2F44(c); // 801C282C
  c->r[0]=0u+0x00000000u; // 801C2830
  c->r[3]=c->r[31]|c->r[31]; // 801C2834
  W32(c->r[13]+0xFFFF9940u,c->r[0]); // 801C2838
  W8(c->r[13]+0xFFFF9938u,c->r[0]); // 801C283C
  c->lr=0x801C2844u; f_80249500(c); // 801C2840
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C2844
  c->r[3]=0u+0x00000000u; // 801C2848
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C284C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C2850
  c->lr=c->r[0]; // 801C2854
  c->r[1]=c->r[1]+0x00000010u; // 801C2858
  return; // 801C285C
}

// DBWrite
void f_801C2860(Ctx* __restrict c) {
  trace_call(0x801C2860u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2860
  c->r[0]=c->lr; // 801C2864
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C2868
  c->r[11]=c->r[1]+0x00000030u; // 801C286C
  c->lr=0x801C2874u; f_800C2E4C(c); // 801C2870
  c->r[27]=c->r[3]|c->r[3]; // 801C2874
  c->r[28]=c->r[4]|c->r[4]; // 801C2878
  c->lr=0x801C2880u; f_802494C0(c); // 801C287C
  c->r[31]=c->r[3]|c->r[3]; // 801C2880
L_801C2884:;
  c->r[4]=c->r[1]+0x0000000Au; // 801C2884
  c->r[3]=0u+0x34000000u; // 801C2888
  c->r[5]=0u+0x00000001u; // 801C288C
  c->lr=0x801C2894u; f_801C2D1C(c); // 801C2890
  c->r[0]=R8(c->r[1]+0x0000000Au); // 801C2894
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801C2898
  if (!crb(c,2)) { IRQCHK(c); goto L_801C2884; } // 801C289C
  c->r[3]=R8(c->r[13]+0xFFFF8E80u); // 801C28A0
  c->r[0]=c->r[28]+0x00000003u; // 801C28A4
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801C28A8
  c->r[3]=c->r[3]+0x00000001u; // 801C28AC
  c->r[0]=rotl(c->r[3],0)&0x00000001u; // 801C28B0
  W8(c->r[13]+0xFFFF8E80u,c->r[3]); // 801C28B4
  c->r[0]=0u-c->r[0]; // 801C28B8
  c->r[3]=rotl(c->r[0],0)&0x00000800u; // 801C28BC
  c->r[0]=c->r[3]+0x00D10000u; // 801C28C0
  c->r[0]=rotl(c->r[0],6)&0x3FFFFF00u; // 801C28C4
  c->r[30]=c->r[0]|0x80000000u; // 801C28C8
L_801C28CC:;
  c->r[3]=c->r[30]|c->r[30]; // 801C28CC
  c->r[4]=c->r[27]|c->r[27]; // 801C28D0
  c->r[5]=c->r[29]|c->r[29]; // 801C28D4
  c->lr=0x801C28DCu; f_801C3024(c); // 801C28D8
  cmps(c,0,(int32_t)c->r[3],0); // 801C28DC
  if (crb(c,2)) { IRQCHK(c); goto L_801C28CC; } // 801C28E0
L_801C28E4:;
  c->r[4]=c->r[1]+0x00000009u; // 801C28E4
  c->r[3]=0u+0x34000000u; // 801C28E8
  c->r[5]=0u+0x00000001u; // 801C28EC
  c->lr=0x801C28F4u; f_801C2D1C(c); // 801C28F0
  c->r[0]=R8(c->r[1]+0x00000009u); // 801C28F4
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801C28F8
  if (!crb(c,2)) { IRQCHK(c); goto L_801C28E4; } // 801C28FC
  c->r[3]=R8(c->r[13]+0xFFFF8E80u); // 801C2900
  c->r[0]=rotl(c->r[28],0)&0x00001FFFu; // 801C2904
  c->r[29]=c->r[0]|0x1F000000u; // 801C2908
  c->r[30]=0u+0xB4000000u; // 801C290C
  c->r[29]=(rotl(c->r[3],16)&0x00FF0000u)|(c->r[29]&~0x00FF0000u); // 801C2910
L_801C2914:;
  W32(c->r[1]+0x0000000Cu,c->r[29]); // 801C2914
  c->r[3]=c->r[30]+0x00000100u; // 801C2918
  c->r[4]=c->r[1]+0x0000000Cu; // 801C291C
  c->r[5]=0u+0x00000004u; // 801C2920
  c->lr=0x801C2928u; f_801C2E40(c); // 801C2924
  cmps(c,0,(int32_t)c->r[3],0); // 801C2928
  if (crb(c,2)) { IRQCHK(c); goto L_801C2914; } // 801C292C
L_801C2930:;
  c->r[4]=c->r[1]+0x00000008u; // 801C2930
  c->r[3]=0u+0x34000000u; // 801C2934
  c->r[5]=0u+0x00000001u; // 801C2938
  c->lr=0x801C2940u; f_801C2D1C(c); // 801C293C
  c->r[0]=R8(c->r[1]+0x00000008u); // 801C2940
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 801C2944
  if (!crb(c,2)) { IRQCHK(c); goto L_801C2930; } // 801C2948
  c->r[3]=c->r[31]|c->r[31]; // 801C294C
  c->lr=0x801C2954u; f_80249500(c); // 801C2950
  c->r[11]=c->r[1]+0x00000030u; // 801C2954
  c->r[3]=0u+0x00000000u; // 801C2958
  c->lr=0x801C2960u; f_800C2E98(c); // 801C295C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C2960
  c->lr=c->r[0]; // 801C2964
  c->r[1]=c->r[1]+0x00000030u; // 801C2968
  return; // 801C296C
}

// DBOpen
void f_801C2970(Ctx* __restrict c) {
  trace_call(0x801C2970u);
  return; // 801C2970
}

// DBClose
void f_801C2974(Ctx* __restrict c) {
  trace_call(0x801C2974u);
  return; // 801C2974
}

// __EXI2Imm
void f_801C2978(Ctx* __restrict c) {
  trace_call(0x801C2978u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2978
  c->r[0]=c->lr; // 801C297C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C2980
  c->r[11]=c->r[1]+0x00000020u; // 801C2984
  c->lr=0x801C298Cu; f_800C2E48(c); // 801C2988
  cmps(c,0,(int32_t)c->r[5],0); // 801C298C
  if (crb(c,2)) { goto L_801C2AEC; } // 801C2990
  cmps(c,1,(int32_t)c->r[4],0); // 801C2994
  c->r[0]=0u+0x00000000u; // 801C2998
  c->r[7]=0u+0x00000000u; // 801C299C
  if (!crb(c,5)) { goto L_801C2AE4; } // 801C29A0
  cmps(c,0,(int32_t)c->r[4],8); // 801C29A4
  c->r[9]=c->r[4]+0xFFFFFFF8u; // 801C29A8
  if (!crb(c,1)) { goto L_801C2AB0; } // 801C29AC
  c->r[8]=0u+0x00000000u; // 801C29B0
  if (crb(c,4)) { goto L_801C29CC; } // 801C29B4
  c->r[6]=0u+0x80000000u; // 801C29B8
  c->r[6]=c->r[6]+0xFFFFFFFEu; // 801C29BC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[6]); // 801C29C0
  if (crb(c,1)) { goto L_801C29CC; } // 801C29C4
  c->r[8]=0u+0x00000001u; // 801C29C8
L_801C29CC:;
  cmps(c,0,(int32_t)c->r[8],0); // 801C29CC
  if (crb(c,2)) { goto L_801C2AB0; } // 801C29D0
  c->r[8]=c->r[9]+0x00000007u; // 801C29D4
  c->r[6]=c->r[3]|c->r[3]; // 801C29D8
  c->r[8]=rotl(c->r[8],29)&0x1FFFFFFFu; // 801C29DC
  c->ctr=c->r[8]; // 801C29E0
  cmps(c,0,(int32_t)c->r[9],0); // 801C29E4
  if (!crb(c,1)) { goto L_801C2AB0; } // 801C29E8
L_801C29EC:;
  c->r[9]=addc(c,~c->r[7],0x00000003u,1); // 801C29EC
  c->r[8]=c->r[7]+0x00000001u; // 801C29F0
  c->r[28]=addc(c,~c->r[8],0x00000003u,1); // 801C29F4
  c->r[10]=R8(c->r[6]+0x00000000u); // 801C29F8
  c->r[8]=c->r[7]+0x00000002u; // 801C29FC
  c->r[27]=R8(c->r[6]+0x00000001u); // 801C2A00
  c->r[29]=addc(c,~c->r[8],0x00000003u,1); // 801C2A04
  c->r[28]=rotl(c->r[28],3)&0xFFFFFFF8u; // 801C2A08
  c->r[8]=rotl(c->r[9],3)&0xFFFFFFF8u; // 801C2A0C
  c->r[12]=0u-c->r[7]; // 801C2A10
  c->r[26]=((c->r[8])&0x20)?0u:(c->r[10]<<((c->r[8])&31)); // 801C2A14
  c->r[30]=rotl(c->r[29],3)&0xFFFFFFF8u; // 801C2A18
  c->r[31]=R8(c->r[6]+0x00000002u); // 801C2A1C
  c->r[8]=c->r[7]+0x00000004u; // 801C2A20
  c->r[11]=addc(c,~c->r[8],0x00000003u,1); // 801C2A24
  c->r[0]=c->r[0]|c->r[26]; // 801C2A28
  c->r[28]=((c->r[28])&0x20)?0u:(c->r[27]<<((c->r[28])&31)); // 801C2A2C
  c->r[8]=c->r[7]+0x00000005u; // 801C2A30
  c->r[31]=((c->r[30])&0x20)?0u:(c->r[31]<<((c->r[30])&31)); // 801C2A34
  c->r[29]=R8(c->r[6]+0x00000003u); // 801C2A38
  c->r[12]=rotl(c->r[12],3)&0xFFFFFFF8u; // 801C2A3C
  c->r[0]=c->r[0]|c->r[28]; // 801C2A40
  c->r[10]=addc(c,~c->r[8],0x00000003u,1); // 801C2A44
  c->r[8]=c->r[7]+0x00000006u; // 801C2A48
  c->r[29]=((c->r[12])&0x20)?0u:(c->r[29]<<((c->r[12])&31)); // 801C2A4C
  c->r[0]=c->r[0]|c->r[31]; // 801C2A50
  c->r[9]=addc(c,~c->r[8],0x00000003u,1); // 801C2A54
  c->r[8]=c->r[7]+0x00000007u; // 801C2A58
  c->r[12]=rotl(c->r[10],3)&0xFFFFFFF8u; // 801C2A5C
  c->r[31]=R8(c->r[6]+0x00000005u); // 801C2A60
  c->r[8]=addc(c,~c->r[8],0x00000003u,1); // 801C2A64
  c->r[10]=rotl(c->r[9],3)&0xFFFFFFF8u; // 801C2A68
  c->r[30]=R8(c->r[6]+0x00000004u); // 801C2A6C
  c->r[11]=rotl(c->r[11],3)&0xFFFFFFF8u; // 801C2A70
  c->r[0]=c->r[0]|c->r[29]; // 801C2A74
  c->r[9]=R8(c->r[6]+0x00000007u); // 801C2A78
  c->r[30]=((c->r[11])&0x20)?0u:(c->r[30]<<((c->r[11])&31)); // 801C2A7C
  c->r[11]=R8(c->r[6]+0x00000006u); // 801C2A80
  c->r[8]=rotl(c->r[8],3)&0xFFFFFFF8u; // 801C2A84
  c->r[12]=((c->r[12])&0x20)?0u:(c->r[31]<<((c->r[12])&31)); // 801C2A88
  c->r[0]=c->r[0]|c->r[30]; // 801C2A8C
  c->r[10]=((c->r[10])&0x20)?0u:(c->r[11]<<((c->r[10])&31)); // 801C2A90
  c->r[0]=c->r[0]|c->r[12]; // 801C2A94
  c->r[8]=((c->r[8])&0x20)?0u:(c->r[9]<<((c->r[8])&31)); // 801C2A98
  c->r[0]=c->r[0]|c->r[10]; // 801C2A9C
  c->r[7]=c->r[7]+0x00000008u; // 801C2AA0
  c->r[0]=c->r[0]|c->r[8]; // 801C2AA4
  c->r[6]=c->r[6]+0x00000008u; // 801C2AA8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C29EC; } // 801C2AAC
L_801C2AB0:;
  c->r[6]=c->r[4]-c->r[7]; // 801C2AB0
  c->r[9]=c->r[3]+c->r[7]; // 801C2AB4
  c->ctr=c->r[6]; // 801C2AB8
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[4]); // 801C2ABC
  if (!crb(c,0)) { goto L_801C2AE4; } // 801C2AC0
L_801C2AC4:;
  c->r[6]=addc(c,~c->r[7],0x00000003u,1); // 801C2AC4
  c->r[8]=R8(c->r[9]+0x00000000u); // 801C2AC8
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 801C2ACC
  c->r[9]=c->r[9]+0x00000001u; // 801C2AD0
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[8]<<((c->r[6])&31)); // 801C2AD4
  c->r[7]=c->r[7]+0x00000001u; // 801C2AD8
  c->r[0]=c->r[0]|c->r[6]; // 801C2ADC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C2AC4; } // 801C2AE0
L_801C2AE4:;
  c->r[6]=0u+0xCD000000u; // 801C2AE4
  W32(c->r[6]+0x00006838u,c->r[0]); // 801C2AE8
L_801C2AEC:;
  c->r[6]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801C2AEC
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801C2AF0
  c->r[7]=c->r[6]|0x00000001u; // 801C2AF4
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801C2AF8
  c->r[6]=0u+0xCD000000u; // 801C2AFC
  c->r[0]=c->r[7]|c->r[0]; // 801C2B00
  W32(c->r[6]+0x00006834u,c->r[0]); // 801C2B04
L_801C2B08:;
  c->r[0]=R32(c->r[6]+0x00006834u); // 801C2B08
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801C2B0C
  if (!crb(c,2)) { IRQCHK(c); goto L_801C2B08; } // 801C2B10
  cmps(c,0,(int32_t)c->r[5],0); // 801C2B14
  if (!crb(c,2)) { goto L_801C2C44; } // 801C2B18
  c->r[5]=0u+0xCD000000u; // 801C2B1C
  cmps(c,1,(int32_t)c->r[4],0); // 801C2B20
  c->r[0]=R32(c->r[5]+0x00006838u); // 801C2B24
  c->r[5]=0u+0x00000000u; // 801C2B28
  if (!crb(c,5)) { goto L_801C2C44; } // 801C2B2C
  cmps(c,0,(int32_t)c->r[4],8); // 801C2B30
  c->r[7]=c->r[4]+0xFFFFFFF8u; // 801C2B34
  if (!crb(c,1)) { goto L_801C2C18; } // 801C2B38
  c->r[8]=0u+0x00000000u; // 801C2B3C
  if (crb(c,4)) { goto L_801C2B58; } // 801C2B40
  c->r[6]=0u+0x80000000u; // 801C2B44
  c->r[6]=c->r[6]+0xFFFFFFFEu; // 801C2B48
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[6]); // 801C2B4C
  if (crb(c,1)) { goto L_801C2B58; } // 801C2B50
  c->r[8]=0u+0x00000001u; // 801C2B54
L_801C2B58:;
  cmps(c,0,(int32_t)c->r[8],0); // 801C2B58
  if (crb(c,2)) { goto L_801C2C18; } // 801C2B5C
  c->r[6]=c->r[7]+0x00000007u; // 801C2B60
  c->r[6]=rotl(c->r[6],29)&0x1FFFFFFFu; // 801C2B64
  c->ctr=c->r[6]; // 801C2B68
  cmps(c,0,(int32_t)c->r[7],0); // 801C2B6C
  if (!crb(c,1)) { goto L_801C2C18; } // 801C2B70
L_801C2B74:;
  c->r[6]=addc(c,~c->r[5],0x00000003u,1); // 801C2B74
  c->r[7]=c->r[5]+0x00000001u; // 801C2B78
  c->r[8]=rotl(c->r[6],3)&0xFFFFFFF8u; // 801C2B7C
  c->r[9]=((c->r[8])&0x20)?0u:(c->r[0]>>((c->r[8])&31)); // 801C2B80
  c->r[7]=addc(c,~c->r[7],0x00000003u,1); // 801C2B84
  c->r[8]=rotl(c->r[7],3)&0xFFFFFFF8u; // 801C2B88
  W8(c->r[3]+0x00000000u,c->r[9]); // 801C2B8C
  c->r[7]=c->r[5]+0x00000002u; // 801C2B90
  c->r[6]=0u-c->r[5]; // 801C2B94
  c->r[9]=((c->r[8])&0x20)?0u:(c->r[0]>>((c->r[8])&31)); // 801C2B98
  c->r[8]=rotl(c->r[6],3)&0xFFFFFFF8u; // 801C2B9C
  c->r[7]=addc(c,~c->r[7],0x00000003u,1); // 801C2BA0
  c->r[6]=rotl(c->r[7],3)&0xFFFFFFF8u; // 801C2BA4
  W8(c->r[3]+0x00000001u,c->r[9]); // 801C2BA8
  c->r[9]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 801C2BAC
  c->r[8]=((c->r[8])&0x20)?0u:(c->r[0]>>((c->r[8])&31)); // 801C2BB0
  c->r[6]=c->r[5]+0x00000004u; // 801C2BB4
  W8(c->r[3]+0x00000002u,c->r[9]); // 801C2BB8
  c->r[7]=addc(c,~c->r[6],0x00000003u,1); // 801C2BBC
  c->r[6]=c->r[5]+0x00000005u; // 801C2BC0
  W8(c->r[3]+0x00000003u,c->r[8]); // 801C2BC4
  c->r[7]=rotl(c->r[7],3)&0xFFFFFFF8u; // 801C2BC8
  c->r[9]=((c->r[7])&0x20)?0u:(c->r[0]>>((c->r[7])&31)); // 801C2BCC
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 801C2BD0
  c->r[8]=rotl(c->r[6],3)&0xFFFFFFF8u; // 801C2BD4
  W8(c->r[3]+0x00000004u,c->r[9]); // 801C2BD8
  c->r[6]=c->r[5]+0x00000006u; // 801C2BDC
  c->r[7]=addc(c,~c->r[6],0x00000003u,1); // 801C2BE0
  c->r[8]=((c->r[8])&0x20)?0u:(c->r[0]>>((c->r[8])&31)); // 801C2BE4
  c->r[6]=c->r[5]+0x00000007u; // 801C2BE8
  W8(c->r[3]+0x00000005u,c->r[8]); // 801C2BEC
  c->r[7]=rotl(c->r[7],3)&0xFFFFFFF8u; // 801C2BF0
  c->r[5]=c->r[5]+0x00000008u; // 801C2BF4
  c->r[6]=addc(c,~c->r[6],0x00000003u,1); // 801C2BF8
  c->r[7]=((c->r[7])&0x20)?0u:(c->r[0]>>((c->r[7])&31)); // 801C2BFC
  c->r[6]=rotl(c->r[6],3)&0xFFFFFFF8u; // 801C2C00
  W8(c->r[3]+0x00000006u,c->r[7]); // 801C2C04
  c->r[6]=((c->r[6])&0x20)?0u:(c->r[0]>>((c->r[6])&31)); // 801C2C08
  W8(c->r[3]+0x00000007u,c->r[6]); // 801C2C0C
  c->r[3]=c->r[3]+0x00000008u; // 801C2C10
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C2B74; } // 801C2C14
L_801C2C18:;
  c->r[6]=c->r[4]-c->r[5]; // 801C2C18
  c->ctr=c->r[6]; // 801C2C1C
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[4]); // 801C2C20
  if (!crb(c,0)) { goto L_801C2C44; } // 801C2C24
L_801C2C28:;
  c->r[4]=addc(c,~c->r[5],0x00000003u,1); // 801C2C28
  c->r[5]=c->r[5]+0x00000001u; // 801C2C2C
  c->r[4]=rotl(c->r[4],3)&0xFFFFFFF8u; // 801C2C30
  c->r[4]=((c->r[4])&0x20)?0u:(c->r[0]>>((c->r[4])&31)); // 801C2C34
  W8(c->r[3]+0x00000000u,c->r[4]); // 801C2C38
  c->r[3]=c->r[3]+0x00000001u; // 801C2C3C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C2C28; } // 801C2C40
L_801C2C44:;
  c->r[11]=c->r[1]+0x00000020u; // 801C2C44
  c->r[3]=0u+0x00000001u; // 801C2C48
  c->lr=0x801C2C50u; f_800C2E94(c); // 801C2C4C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C2C50
  c->lr=c->r[0]; // 801C2C54
  c->r[1]=c->r[1]+0x00000020u; // 801C2C58
  return; // 801C2C5C
}

// __DBEXIInit
void f_801C2C60(Ctx* __restrict c) {
  trace_call(0x801C2C60u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2C60
  c->r[0]=c->lr; // 801C2C64
  c->r[3]=0u+0x00020000u; // 801C2C68
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C2C6C
  c->r[3]=c->r[3]+0xFFFF8000u; // 801C2C70
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C2C74
  c->lr=0x801C2C7Cu; f_80249890(c); // 801C2C78
  c->r[3]=0u+0xCD000000u; // 801C2C7C
L_801C2C80:;
  c->r[0]=R32(c->r[3]+0x00006834u); // 801C2C80
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801C2C84
  cmpu(c,0,c->r[0],0x00000001u); // 801C2C88
  if (crb(c,2)) { IRQCHK(c); goto L_801C2C80; } // 801C2C8C
  c->r[31]=0u+0xCD000000u; // 801C2C90
  c->r[0]=0u+0x00000000u; // 801C2C94
  W32(c->r[31]+0x00006828u,c->r[0]); // 801C2C98
  c->r[3]=0u+0xB4000000u; // 801C2C9C
  c->r[0]=0u+0xD4000000u; // 801C2CA0
  c->r[4]=0u+0x00000004u; // 801C2CA4
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801C2CA8
  c->r[3]=c->r[1]+0x0000000Cu; // 801C2CAC
  c->r[5]=0u+0x00000001u; // 801C2CB0
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C2CB4
  c->r[0]=R32(c->r[31]+0x00006828u); // 801C2CB8
  c->r[0]=c->r[0]&0x00000405u; cr0(c,c->r[0]); // 801C2CBC
  c->r[0]=c->r[0]|0x000000C0u; // 801C2CC0
  W32(c->r[31]+0x00006828u,c->r[0]); // 801C2CC4
  c->lr=0x801C2CCCu; f_801C2978(c); // 801C2CC8
L_801C2CCC:;
  c->r[0]=R32(c->r[31]+0x00006834u); // 801C2CCC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801C2CD0
  if (!crb(c,2)) { IRQCHK(c); goto L_801C2CCC; } // 801C2CD4
  c->r[3]=c->r[1]+0x00000008u; // 801C2CD8
  c->r[4]=0u+0x00000004u; // 801C2CDC
  c->r[5]=0u+0x00000001u; // 801C2CE0
  c->lr=0x801C2CE8u; f_801C2978(c); // 801C2CE4
  c->r[3]=0u+0xCD000000u; // 801C2CE8
L_801C2CEC:;
  c->r[0]=R32(c->r[3]+0x00006834u); // 801C2CEC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801C2CF0
  if (!crb(c,2)) { IRQCHK(c); goto L_801C2CEC; } // 801C2CF4
  c->r[3]=0u+0xCD000000u; // 801C2CF8
  c->r[0]=R32(c->r[3]+0x00006828u); // 801C2CFC
  c->r[0]=c->r[0]&0x00000405u; cr0(c,c->r[0]); // 801C2D00
  W32(c->r[3]+0x00006828u,c->r[0]); // 801C2D04
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C2D08
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C2D0C
  c->lr=c->r[0]; // 801C2D10
  c->r[1]=c->r[1]+0x00000020u; // 801C2D14
  return; // 801C2D18
}

// __DBEXIReadReg
void f_801C2D1C(Ctx* __restrict c) {
  trace_call(0x801C2D1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2D1C
  c->r[0]=c->lr; // 801C2D20
  c->r[6]=0u+0x00000000u; // 801C2D24
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C2D28
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C2D2C
  c->r[31]=c->r[5]|c->r[5]; // 801C2D30
  c->r[5]=0u+0x00000001u; // 801C2D34
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C2D38
  c->r[30]=c->r[4]|c->r[4]; // 801C2D3C
  c->r[4]=0u+0x00000004u; // 801C2D40
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C2D44
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C2D48
  c->r[28]=0u+0xCD000000u; // 801C2D4C
  W32(c->r[1]+0x00000008u,c->r[3]); // 801C2D50
  c->r[3]=c->r[1]+0x00000008u; // 801C2D54
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 801C2D58
  c->r[0]=R32(c->r[28]+0x00006828u); // 801C2D5C
  c->r[0]=c->r[0]&0x00000405u; cr0(c,c->r[0]); // 801C2D60
  c->r[0]=c->r[0]|0x000000C0u; // 801C2D64
  W32(c->r[28]+0x00006828u,c->r[0]); // 801C2D68
  c->lr=0x801C2D70u; f_801C2978(c); // 801C2D6C
  c->r[0]=cntlz(c->r[3]); // 801C2D70
  c->r[29]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C2D74
L_801C2D78:;
  c->r[0]=R32(c->r[28]+0x00006834u); // 801C2D78
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801C2D7C
  if (!crb(c,2)) { IRQCHK(c); goto L_801C2D78; } // 801C2D80
  c->r[3]=c->r[1]+0x0000000Cu; // 801C2D84
  c->r[4]=0u+0x00000004u; // 801C2D88
  c->r[5]=0u+0x00000000u; // 801C2D8C
  c->lr=0x801C2D94u; f_801C2978(c); // 801C2D90
  c->r[0]=cntlz(c->r[3]); // 801C2D94
  c->r[3]=0u+0xCD000000u; // 801C2D98
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C2D9C
  c->r[6]=c->r[29]|c->r[0]; // 801C2DA0
L_801C2DA4:;
  c->r[0]=R32(c->r[3]+0x00006834u); // 801C2DA4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801C2DA8
  if (!crb(c,2)) { IRQCHK(c); goto L_801C2DA4; } // 801C2DAC
  c->r[3]=0u+0xCD000000u; // 801C2DB0
  cmps(c,1,(int32_t)c->r[31],2); // 801C2DB4
  c->r[0]=R32(c->r[3]+0x00006828u); // 801C2DB8
  c->r[0]=c->r[0]&0x00000405u; cr0(c,c->r[0]); // 801C2DBC
  W32(c->r[3]+0x00006828u,c->r[0]); // 801C2DC0
  if (crb(c,6)) { goto L_801C2DE8; } // 801C2DC4
  if (!crb(c,4)) { goto L_801C2DFC; } // 801C2DC8
  cmps(c,0,(int32_t)c->r[31],1); // 801C2DCC
  if (!crb(c,0)) { goto L_801C2DD8; } // 801C2DD0
  goto L_801C2DFC; // 801C2DD4
L_801C2DD8:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801C2DD8
  c->r[0]=rotl(c->r[0],8)&0x000000FFu; // 801C2DDC
  W8(c->r[30]+0x00000000u,c->r[0]); // 801C2DE0
  goto L_801C2E18; // 801C2DE4
L_801C2DE8:;
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 801C2DE8
  c->r[0]=rotl(c->r[3],24)&0x0000FF00u; // 801C2DEC
  c->r[0]=(rotl(c->r[3],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 801C2DF0
  W16(c->r[30]+0x00000000u,c->r[0]); // 801C2DF4
  goto L_801C2E18; // 801C2DF8
L_801C2DFC:;
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 801C2DFC
  c->r[3]=rotl(c->r[4],8)&0x00FF0000u; // 801C2E00
  c->r[0]=rotl(c->r[4],24)&0x0000FF00u; // 801C2E04
  c->r[3]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 801C2E08
  c->r[0]=(rotl(c->r[4],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 801C2E0C
  c->r[0]=c->r[3]|c->r[0]; // 801C2E10
  W32(c->r[30]+0x00000000u,c->r[0]); // 801C2E14
L_801C2E18:;
  c->r[0]=cntlz(c->r[6]); // 801C2E18
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C2E1C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C2E20
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C2E24
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C2E28
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C2E2C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C2E30
  c->lr=c->r[0]; // 801C2E34
  c->r[1]=c->r[1]+0x00000020u; // 801C2E38
  return; // 801C2E3C
}

// __DBEXIWriteReg
void f_801C2E40(Ctx* __restrict c) {
  trace_call(0x801C2E40u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2E40
  c->r[0]=c->lr; // 801C2E44
  cmps(c,0,(int32_t)c->r[5],2); // 801C2E48
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C2E4C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C2E50
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C2E54
  W32(c->r[1]+0x00000008u,c->r[3]); // 801C2E58
  if (crb(c,2)) { goto L_801C2E80; } // 801C2E5C
  if (!crb(c,0)) { goto L_801C2E94; } // 801C2E60
  cmps(c,0,(int32_t)c->r[5],1); // 801C2E64
  if (!crb(c,0)) { goto L_801C2E70; } // 801C2E68
  goto L_801C2E94; // 801C2E6C
L_801C2E70:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801C2E70
  c->r[0]=rotl(c->r[0],24)&0xFF000000u; // 801C2E74
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801C2E78
  goto L_801C2EB0; // 801C2E7C
L_801C2E80:;
  c->r[3]=R16(c->r[4]+0x00000000u); // 801C2E80
  c->r[0]=rotl(c->r[3],8)&0x00FF0000u; // 801C2E84
  c->r[0]=(rotl(c->r[3],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 801C2E88
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801C2E8C
  goto L_801C2EB0; // 801C2E90
L_801C2E94:;
  c->r[4]=R32(c->r[4]+0x00000000u); // 801C2E94
  c->r[3]=rotl(c->r[4],8)&0x00FF0000u; // 801C2E98
  c->r[0]=rotl(c->r[4],24)&0x0000FF00u; // 801C2E9C
  c->r[3]=(rotl(c->r[4],24)&0xFF000000u)|(c->r[3]&~0xFF000000u); // 801C2EA0
  c->r[0]=(rotl(c->r[4],8)&0x000000FFu)|(c->r[0]&~0x000000FFu); // 801C2EA4
  c->r[0]=c->r[3]|c->r[0]; // 801C2EA8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801C2EAC
L_801C2EB0:;
  c->r[30]=0u+0xCD000000u; // 801C2EB0
  c->r[3]=c->r[1]+0x00000008u; // 801C2EB4
  c->r[0]=R32(c->r[30]+0x00006828u); // 801C2EB8
  c->r[4]=0u+0x00000004u; // 801C2EBC
  c->r[5]=0u+0x00000001u; // 801C2EC0
  c->r[0]=c->r[0]&0x00000405u; cr0(c,c->r[0]); // 801C2EC4
  c->r[0]=c->r[0]|0x000000C0u; // 801C2EC8
  W32(c->r[30]+0x00006828u,c->r[0]); // 801C2ECC
  c->lr=0x801C2ED4u; f_801C2978(c); // 801C2ED0
  c->r[0]=cntlz(c->r[3]); // 801C2ED4
  c->r[31]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C2ED8
L_801C2EDC:;
  c->r[0]=R32(c->r[30]+0x00006834u); // 801C2EDC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801C2EE0
  if (!crb(c,2)) { IRQCHK(c); goto L_801C2EDC; } // 801C2EE4
  c->r[3]=c->r[1]+0x0000000Cu; // 801C2EE8
  c->r[4]=0u+0x00000004u; // 801C2EEC
  c->r[5]=0u+0x00000001u; // 801C2EF0
  c->lr=0x801C2EF8u; f_801C2978(c); // 801C2EF4
  c->r[0]=cntlz(c->r[3]); // 801C2EF8
  c->r[3]=0u+0xCD000000u; // 801C2EFC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C2F00
  c->r[5]=c->r[31]|c->r[0]; // 801C2F04
L_801C2F08:;
  c->r[0]=R32(c->r[3]+0x00006834u); // 801C2F08
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801C2F0C
  if (!crb(c,2)) { IRQCHK(c); goto L_801C2F08; } // 801C2F10
  c->r[4]=0u+0xCD000000u; // 801C2F14
  c->r[0]=cntlz(c->r[5]); // 801C2F18
  c->r[5]=R32(c->r[4]+0x00006828u); // 801C2F1C
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C2F20
  c->r[0]=c->r[5]&0x00000405u; cr0(c,c->r[0]); // 801C2F24
  W32(c->r[4]+0x00006828u,c->r[0]); // 801C2F28
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C2F2C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C2F30
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C2F34
  c->lr=c->r[0]; // 801C2F38
  c->r[1]=c->r[1]+0x00000020u; // 801C2F3C
  return; // 801C2F40
}

// __DBEXIReadRam
void f_801C2F44(Ctx* __restrict c) {
  trace_call(0x801C2F44u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C2F44
  c->r[0]=c->lr; // 801C2F48
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C2F4C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C2F50
  c->r[31]=0u+0xCD000000u; // 801C2F54
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C2F58
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C2F5C
  c->r[29]=c->r[4]|c->r[4]; // 801C2F60
  c->r[4]=0u+0x00000004u; // 801C2F64
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C2F68
  c->r[28]=c->r[5]|c->r[5]; // 801C2F6C
  c->r[5]=0u+0x00000001u; // 801C2F70
  W32(c->r[1]+0x00000008u,c->r[3]); // 801C2F74
  c->r[3]=c->r[1]+0x00000008u; // 801C2F78
  c->r[0]=R32(c->r[31]+0x00006828u); // 801C2F7C
  c->r[0]=c->r[0]&0x00000405u; cr0(c,c->r[0]); // 801C2F80
  c->r[0]=c->r[0]|0x000000C0u; // 801C2F84
  W32(c->r[31]+0x00006828u,c->r[0]); // 801C2F88
  c->lr=0x801C2F90u; f_801C2978(c); // 801C2F8C
  c->r[0]=cntlz(c->r[3]); // 801C2F90
  c->r[30]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C2F94
L_801C2F98:;
  c->r[0]=R32(c->r[31]+0x00006834u); // 801C2F98
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801C2F9C
  if (!crb(c,2)) { IRQCHK(c); goto L_801C2F98; } // 801C2FA0
  c->r[31]=0u+0xCD000000u; // 801C2FA4
  goto L_801C2FE4; // 801C2FA8
L_801C2FAC:;
  c->r[3]=c->r[1]+0x0000000Cu; // 801C2FAC
  c->r[4]=0u+0x00000004u; // 801C2FB0
  c->r[5]=0u+0x00000000u; // 801C2FB4
  c->lr=0x801C2FBCu; f_801C2978(c); // 801C2FB8
  c->r[0]=cntlz(c->r[3]); // 801C2FBC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C2FC0
  c->r[30]=c->r[30]|c->r[0]; // 801C2FC4
L_801C2FC8:;
  c->r[0]=R32(c->r[31]+0x00006834u); // 801C2FC8
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801C2FCC
  if (!crb(c,2)) { IRQCHK(c); goto L_801C2FC8; } // 801C2FD0
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801C2FD4
  c->r[28]=c->r[28]+0xFFFFFFFCu; // 801C2FD8
  W32(c->r[29]+0x00000000u,c->r[0]); // 801C2FDC
  c->r[29]=c->r[29]+0x00000004u; // 801C2FE0
L_801C2FE4:;
  cmps(c,0,(int32_t)c->r[28],0); // 801C2FE4
  if (crb(c,1)) { IRQCHK(c); goto L_801C2FAC; } // 801C2FE8
  c->r[4]=0u+0xCD000000u; // 801C2FEC
  c->r[0]=cntlz(c->r[30]); // 801C2FF0
  c->r[5]=R32(c->r[4]+0x00006828u); // 801C2FF4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C2FF8
  c->r[0]=c->r[5]&0x00000405u; cr0(c,c->r[0]); // 801C2FFC
  W32(c->r[4]+0x00006828u,c->r[0]); // 801C3000
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C3004
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C3008
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C300C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C3010
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C3014
  c->lr=c->r[0]; // 801C3018
  c->r[1]=c->r[1]+0x00000020u; // 801C301C
  return; // 801C3020
}

// __DBEXIWriteRam
void f_801C3024(Ctx* __restrict c) {
  trace_call(0x801C3024u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3024
  c->r[0]=c->lr; // 801C3028
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C302C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C3030
  c->r[31]=0u+0xCD000000u; // 801C3034
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C3038
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C303C
  c->r[29]=c->r[4]|c->r[4]; // 801C3040
  c->r[4]=0u+0x00000004u; // 801C3044
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C3048
  c->r[28]=c->r[5]|c->r[5]; // 801C304C
  c->r[5]=0u+0x00000001u; // 801C3050
  W32(c->r[1]+0x00000008u,c->r[3]); // 801C3054
  c->r[3]=c->r[1]+0x00000008u; // 801C3058
  c->r[0]=R32(c->r[31]+0x00006828u); // 801C305C
  c->r[0]=c->r[0]&0x00000405u; cr0(c,c->r[0]); // 801C3060
  c->r[0]=c->r[0]|0x000000C0u; // 801C3064
  W32(c->r[31]+0x00006828u,c->r[0]); // 801C3068
  c->lr=0x801C3070u; f_801C2978(c); // 801C306C
  c->r[0]=cntlz(c->r[3]); // 801C3070
  c->r[30]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C3074
L_801C3078:;
  c->r[0]=R32(c->r[31]+0x00006834u); // 801C3078
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801C307C
  if (!crb(c,2)) { IRQCHK(c); goto L_801C3078; } // 801C3080
  c->r[31]=0u+0xCD000000u; // 801C3084
  goto L_801C30C4; // 801C3088
L_801C308C:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 801C308C
  c->r[3]=c->r[1]+0x0000000Cu; // 801C3090
  c->r[4]=0u+0x00000004u; // 801C3094
  c->r[5]=0u+0x00000001u; // 801C3098
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801C309C
  c->r[29]=c->r[29]+0x00000004u; // 801C30A0
  c->lr=0x801C30A8u; f_801C2978(c); // 801C30A4
  c->r[0]=cntlz(c->r[3]); // 801C30A8
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C30AC
  c->r[30]=c->r[30]|c->r[0]; // 801C30B0
L_801C30B4:;
  c->r[0]=R32(c->r[31]+0x00006834u); // 801C30B4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801C30B8
  if (!crb(c,2)) { IRQCHK(c); goto L_801C30B4; } // 801C30BC
  c->r[28]=c->r[28]+0xFFFFFFFCu; // 801C30C0
L_801C30C4:;
  cmps(c,0,(int32_t)c->r[28],0); // 801C30C4
  if (crb(c,1)) { IRQCHK(c); goto L_801C308C; } // 801C30C8
  c->r[4]=0u+0xCD000000u; // 801C30CC
  c->r[0]=cntlz(c->r[30]); // 801C30D0
  c->r[5]=R32(c->r[4]+0x00006828u); // 801C30D4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 801C30D8
  c->r[0]=c->r[5]&0x00000405u; cr0(c,c->r[0]); // 801C30DC
  W32(c->r[4]+0x00006828u,c->r[0]); // 801C30E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C30E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C30E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C30EC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C30F0
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C30F4
  c->lr=c->r[0]; // 801C30F8
  c->r[1]=c->r[1]+0x00000020u; // 801C30FC
  return; // 801C3100
}

void hle_AIRegisterDMACallback(Ctx*);
// AIRegisterDMACallback
void f_801C3110(Ctx* __restrict c) {
  hle_AIRegisterDMACallback(c);
}

void hle_AIInitDMA(Ctx*);
// AIInitDMA
void f_801C3160(Ctx* __restrict c) {
  hle_AIInitDMA(c);
}

void hle_AIStartDMA(Ctx*);
// AIStartDMA
void f_801C31E0(Ctx* __restrict c) {
  hle_AIStartDMA(c);
}

// AIStopDMA
void f_801C3200(Ctx* __restrict c) {
  trace_call(0x801C3200u);
  c->r[3]=0u+0xCC000000u; // 801C3200
  c->r[0]=R16(c->r[3]+0x00005036u); // 801C3204
  c->r[0]=rotl(c->r[0],0)&0x00007FFFu; // 801C3208
  W16(c->r[3]+0x00005036u,c->r[0]); // 801C320C
  return; // 801C3210
}

// AIGetDMABytesLeft
void f_801C3220(Ctx* __restrict c) {
  stub_log(0x801C3220u); c->r[3]=0; return;
}

// AIGetDMAStartAddr
void f_801C3230(Ctx* __restrict c) {
  trace_call(0x801C3230u);
  c->r[3]=0u+0xCC000000u; // 801C3230
  c->r[4]=R16(c->r[3]+0x00005030u); // 801C3234
  c->r[0]=R16(c->r[3]+0x00005032u); // 801C3238
  c->r[3]=rotl(c->r[0],0)&0x0000FFE0u; // 801C323C
  c->r[3]=(rotl(c->r[4],16)&0x1FFF0000u)|(c->r[3]&~0x1FFF0000u); // 801C3240
  return; // 801C3244
}

// AIGetDMALength
void f_801C3250(Ctx* __restrict c) {
  trace_call(0x801C3250u);
  c->r[3]=0u+0xCC000000u; // 801C3250
  c->r[0]=R16(c->r[3]+0x00005036u); // 801C3254
  c->r[3]=rotl(c->r[0],5)&0x000FFFE0u; // 801C3258
  return; // 801C325C
}

// AICheckInit
void f_801C3260(Ctx* __restrict c) {
  trace_call(0x801C3260u);
  c->r[3]=R32(c->r[13]+0xFFFF9948u); // 801C3260
  return; // 801C3264
}

// AIGetDSPSampleRate
void f_801C3270(Ctx* __restrict c) {
  trace_call(0x801C3270u);
  c->r[3]=0u+0xCD000000u; // 801C3270
  c->r[0]=R32(c->r[3]+0x00006C00u); // 801C3274
  c->r[0]=rotl(c->r[0],26)&0x00000001u; // 801C3278
  c->r[3]=c->r[0]^0x00000001u; // 801C327C
  return; // 801C3280
}

// AIInit
void f_801C3290(Ctx* __restrict c) {
  trace_call(0x801C3290u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3290
  c->r[0]=c->lr; // 801C3294
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C3298
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C329C
  c->r[31]=c->r[3]|c->r[3]; // 801C32A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C32A4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C32A8
  c->r[0]=R32(c->r[13]+0xFFFF9948u); // 801C32AC
  cmps(c,0,(int32_t)c->r[0],1); // 801C32B0
  if (crb(c,2)) { goto L_801C33F4; } // 801C32B4
  c->r[3]=R32(c->r[13]+0xFFFF8E88u); // 801C32B8
  c->lr=0x801C32C0u; f_80243B90(c); // 801C32BC
  c->r[3]=0u+0x80000000u; // 801C32C0
  c->r[4]=0u+0x431C0000u; // 801C32C4
  c->r[0]=R32(c->r[3]+0x000000F8u); // 801C32C8
  c->r[7]=0u+0x00000000u; // 801C32CC
  c->r[5]=0u+0x10620000u; // 801C32D0
  c->r[4]=c->r[4]+0xFFFFDE83u; // 801C32D4
  c->r[6]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801C32D8
  c->r[3]=0u+0x00010000u; // 801C32DC
  c->r[6]=(uint32_t)(((uint64_t)c->r[4]*(uint64_t)c->r[6])>>32); // 801C32E0
  c->r[9]=c->r[5]+0x00004DD3u; // 801C32E4
  c->r[0]=c->r[3]+0xFFFFA428u; // 801C32E8
  W32(c->r[13]+0xFFFF9970u,c->r[7]); // 801C32EC
  c->r[4]=c->r[3]+0xFFFFA410u; // 801C32F0
  c->r[3]=c->r[3]+0xFFFFF618u; // 801C32F4
  c->r[10]=rotl(c->r[6],17)&0x0001FFFFu; // 801C32F8
  W32(c->r[13]+0xFFFF9968u,c->r[7]); // 801C32FC
  c->r[6]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[0]); // 801C3300
  c->r[30]=0u+0xCD000000u; // 801C3304
  W32(c->r[13]+0xFFFF9960u,c->r[7]); // 801C3308
  c->r[0]=0u+0xFFFFFFEAu; // 801C330C
  W32(c->r[13]+0xFFFF9958u,c->r[7]); // 801C3310
  c->r[5]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[4]); // 801C3314
  W32(c->r[13]+0xFFFF9950u,c->r[7]); // 801C3318
  c->r[4]=(uint32_t)((int32_t)c->r[10]*(int32_t)c->r[3]); // 801C331C
  c->r[8]=(uint32_t)((int32_t)c->r[10]*(int32_t)31524); // 801C3320
  c->r[3]=(uint32_t)((int32_t)c->r[10]*(int32_t)3000); // 801C3324
  c->r[8]=(uint32_t)(((uint64_t)c->r[9]*(uint64_t)c->r[8])>>32); // 801C3328
  c->r[6]=(uint32_t)(((uint64_t)c->r[9]*(uint64_t)c->r[6])>>32); // 801C332C
  c->r[8]=rotl(c->r[8],23)&0x007FFFFFu; // 801C3330
  W32(c->r[13]+0xFFFF9974u,c->r[8]); // 801C3334
  c->r[5]=(uint32_t)(((uint64_t)c->r[9]*(uint64_t)c->r[5])>>32); // 801C3338
  c->r[6]=rotl(c->r[6],23)&0x007FFFFFu; // 801C333C
  W32(c->r[13]+0xFFFF996Cu,c->r[6]); // 801C3340
  c->r[4]=(uint32_t)(((uint64_t)c->r[9]*(uint64_t)c->r[4])>>32); // 801C3344
  c->r[5]=rotl(c->r[5],23)&0x007FFFFFu; // 801C3348
  W32(c->r[13]+0xFFFF9964u,c->r[5]); // 801C334C
  c->r[3]=(uint32_t)(((uint64_t)c->r[9]*(uint64_t)c->r[3])>>32); // 801C3350
  c->r[4]=rotl(c->r[4],23)&0x007FFFFFu; // 801C3354
  W32(c->r[13]+0xFFFF995Cu,c->r[4]); // 801C3358
  c->r[3]=rotl(c->r[3],23)&0x007FFFFFu; // 801C335C
  W32(c->r[13]+0xFFFF9954u,c->r[3]); // 801C3360
  c->r[3]=R32(c->r[30]+0x00006C00u); // 801C3364
  c->r[0]=c->r[3]&c->r[0]; // 801C3368
  W32(c->r[30]+0x00006C00u,c->r[0]); // 801C336C
  W32(c->r[30]+0x00006C04u,c->r[7]); // 801C3370
  W32(c->r[30]+0x00006C0Cu,c->r[7]); // 801C3374
  c->r[0]=R32(c->r[30]+0x00006C00u); // 801C3378
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFDFu; // 801C337C
  c->r[0]=c->r[0]|0x00000020u; // 801C3380
  W32(c->r[30]+0x00006C00u,c->r[0]); // 801C3384
  c->r[0]=R32(c->r[30]+0x00006C00u); // 801C3388
  c->r[0]=rotl(c->r[0],26)&0x00000001u; // 801C338C
  c->r[0]=c->r[0]^0x00000001u; // 801C3390
  cmps(c,0,(int32_t)c->r[0],0); // 801C3394
  if (crb(c,2)) { goto L_801C33C8; } // 801C3398
  c->r[0]=R32(c->r[30]+0x00006C00u); // 801C339C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFBFu; // 801C33A0
  W32(c->r[30]+0x00006C00u,c->r[0]); // 801C33A4
  c->lr=0x801C33ACu; f_802494C0(c); // 801C33A8
  c->r[29]=c->r[3]|c->r[3]; // 801C33AC
  c->lr=0x801C33B4u; f_801C3530(c); // 801C33B0
  c->r[0]=R32(c->r[30]+0x00006C00u); // 801C33B4
  c->r[3]=c->r[29]|c->r[29]; // 801C33B8
  c->r[0]=c->r[0]|0x00000040u; // 801C33BC
  W32(c->r[30]+0x00006C00u,c->r[0]); // 801C33C0
  c->lr=0x801C33C8u; f_80249500(c); // 801C33C4
L_801C33C8:;
  c->r[0]=0u+0x00000000u; // 801C33C8
  c->r[4]=0u+0x801C0000u; // 801C33CC
  W32(c->r[13]+0xFFFF9980u,c->r[0]); // 801C33D0
  c->r[4]=c->r[4]+0x00003410u; // 801C33D4
  c->r[3]=0u+0x00000005u; // 801C33D8
  W32(c->r[13]+0xFFFF997Cu,c->r[31]); // 801C33DC
  c->lr=0x801C33E4u; f_80249530(c); // 801C33E0
  c->r[3]=0u+0x04000000u; // 801C33E4
  c->lr=0x801C33ECu; f_80249910(c); // 801C33E8
  c->r[0]=0u+0x00000001u; // 801C33EC
  W32(c->r[13]+0xFFFF9948u,c->r[0]); // 801C33F0
L_801C33F4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C33F4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C33F8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C33FC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C3400
  c->lr=c->r[0]; // 801C3404
  c->r[1]=c->r[1]+0x00000020u; // 801C3408
  return; // 801C340C
}

// __AIDHandler
void f_801C3410(Ctx* __restrict c) {
  trace_call(0x801C3410u);
  {uint32_t ea=c->r[1]+0xFFFFFD20u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3410
  c->r[0]=c->lr; // 801C3414
  c->r[6]=0u+0xCC000000u; // 801C3418
  W32(c->r[1]+0x000002E4u,c->r[0]); // 801C341C
  c->r[0]=0u+0xFFFFFF5Fu; // 801C3420
  c->r[3]=c->r[1]+0x00000008u; // 801C3424
  W32(c->r[1]+0x000002DCu,c->r[31]); // 801C3428
  c->r[31]=c->r[4]|c->r[4]; // 801C342C
  c->r[5]=R16(c->r[6]+0x0000500Au); // 801C3430
  c->r[0]=c->r[5]&c->r[0]; // 801C3434
  c->r[0]=c->r[0]|0x00000008u; // 801C3438
  W16(c->r[6]+0x0000500Au,c->r[0]); // 801C343C
  c->lr=0x801C3444u; f_802458A0(c); // 801C3440
  c->r[3]=c->r[1]+0x00000008u; // 801C3444
  c->lr=0x801C344Cu; f_80245660(c); // 801C3448
  c->r[3]=R32(c->r[13]+0xFFFF9980u); // 801C344C
  cmps(c,0,(int32_t)c->r[3],0); // 801C3450
  if (crb(c,2)) { goto L_801C3494; } // 801C3454
  c->r[0]=R32(c->r[13]+0xFFFF994Cu); // 801C3458
  cmps(c,0,(int32_t)c->r[0],0); // 801C345C
  if (!crb(c,2)) { goto L_801C3494; } // 801C3460
  c->r[0]=R32(c->r[13]+0xFFFF997Cu); // 801C3464
  c->r[4]=0u+0x00000001u; // 801C3468
  W32(c->r[13]+0xFFFF994Cu,c->r[4]); // 801C346C
  cmps(c,0,(int32_t)c->r[0],0); // 801C3470
  if (crb(c,2)) { goto L_801C3480; } // 801C3474
  c->lr=0x801C347Cu; f_801C34C0(c); // 801C3478
  goto L_801C348C; // 801C347C
L_801C3480:;
  c->r[12]=c->r[3]|c->r[3]; // 801C3480
  c->ctr=c->r[12]; // 801C3484
  if (true) { c->lr=0x801C348Cu; dispatch(c,c->ctr); } // 801C3488
L_801C348C:;
  c->r[0]=0u+0x00000000u; // 801C348C
  W32(c->r[13]+0xFFFF994Cu,c->r[0]); // 801C3490
L_801C3494:;
  c->r[3]=c->r[1]+0x00000008u; // 801C3494
  c->lr=0x801C349Cu; f_802458A0(c); // 801C3498
  c->r[3]=c->r[31]|c->r[31]; // 801C349C
  c->lr=0x801C34A4u; f_80245660(c); // 801C34A0
  c->r[0]=R32(c->r[1]+0x000002E4u); // 801C34A4
  c->r[31]=R32(c->r[1]+0x000002DCu); // 801C34A8
  c->lr=c->r[0]; // 801C34AC
  c->r[1]=c->r[1]+0x000002E0u; // 801C34B0
  return; // 801C34B4
}

// __AICallbackStackSwitch
void f_801C34C0(Ctx* __restrict c) {
  trace_call(0x801C34C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C34C0
  c->r[0]=c->lr; // 801C34C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C34C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C34CC
  c->r[31]=c->r[1]|c->r[1]; // 801C34D0
  c->r[31]=c->r[3]|c->r[3]; // 801C34D4
  c->r[5]=0u+0x804D0000u; // 801C34D8
  c->r[5]=c->r[5]+0x00004FB8u; // 801C34DC
  W32(c->r[5]+0x00000000u,c->r[1]); // 801C34E0
  c->r[5]=0u+0x804D0000u; // 801C34E4
  c->r[5]=c->r[5]+0x00004FBCu; // 801C34E8
  c->r[1]=R32(c->r[5]+0x00000000u); // 801C34EC
  c->r[1]=c->r[1]+0xFFFFFFF8u; // 801C34F0
  c->lr=c->r[31]; // 801C34F4
  if (true) { uint32_t t=c->lr; c->lr=0x801C34FCu; dispatch(c,t); } // 801C34F8
  c->r[5]=0u+0x804D0000u; // 801C34FC
  c->r[5]=c->r[5]+0x00004FB8u; // 801C3500
  c->r[1]=R32(c->r[5]+0x00000000u); // 801C3504
  c->r[10]=c->r[1]|c->r[1]; // 801C3508
  c->r[31]=R32(c->r[10]+0x0000000Cu); // 801C350C
  c->r[10]=R32(c->r[1]+0x00000000u); // 801C3510
  c->r[0]=R32(c->r[10]+0x00000004u); // 801C3514
  c->r[1]=c->r[10]|c->r[10]; // 801C3518
  c->lr=c->r[0]; // 801C351C
  return; // 801C3520
}

// __AI_SRC_INIT
void f_801C3530(Ctx* __restrict c) {
  stub_log(0x801C3530u);  return;
}

// ARCInitHandle
void f_801C3700(Ctx* __restrict c) {
  trace_call(0x801C3700u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3700
  c->r[0]=c->lr; // 801C3704
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C3708
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C370C
  c->r[31]=c->r[4]|c->r[4]; // 801C3710
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C3714
  c->r[30]=c->r[3]|c->r[3]; // 801C3718
  c->r[5]=R32(c->r[3]+0x00000000u); // 801C371C
  c->r[0]=c->r[5]+0xAA560000u; // 801C3720
  cmpu(c,0,c->r[0],0x0000382Du); // 801C3724
  if (crb(c,2)) { goto L_801C3744; } // 801C3728
  c->r[5]=0u+0x803A0000u; // 801C372C
  c->r[3]=c->r[13]+0xFFFF8E90u; // 801C3730
  c->r[5]=c->r[5]+0xFFFFAC68u; // 801C3734
  c->r[4]=0u+0x0000004Au; // 801C3738
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C373C
  c->lr=0x801C3744u; f_80245D40(c); // 801C3740
L_801C3744:;
  W32(c->r[31]+0x00000000u,c->r[30]); // 801C3744
  c->r[0]=0u+0x00000000u; // 801C3748
  c->r[3]=0u+0x00000001u; // 801C374C
  c->r[4]=R32(c->r[30]+0x00000004u); // 801C3750
  c->r[5]=c->r[30]+c->r[4]; // 801C3754
  W32(c->r[31]+0x00000004u,c->r[5]); // 801C3758
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 801C375C
  c->r[4]=c->r[30]+c->r[4]; // 801C3760
  W32(c->r[31]+0x00000008u,c->r[4]); // 801C3764
  c->r[4]=R32(c->r[5]+0x00000008u); // 801C3768
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 801C376C
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 801C3770
  c->r[4]=c->r[5]+c->r[4]; // 801C3774
  W32(c->r[31]+0x00000010u,c->r[4]); // 801C3778
  c->r[4]=R32(c->r[30]+0x00000008u); // 801C377C
  W32(c->r[31]+0x00000014u,c->r[4]); // 801C3780
  W32(c->r[31]+0x00000018u,c->r[0]); // 801C3784
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C3788
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C378C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C3790
  c->lr=c->r[0]; // 801C3794
  c->r[1]=c->r[1]+0x00000010u; // 801C3798
  return; // 801C379C
}

// ARCOpen
void f_801C37A0(Ctx* __restrict c) {
  trace_call(0x801C37A0u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C37A0
  c->r[0]=c->lr; // 801C37A4
  W32(c->r[1]+0x000000A4u,c->r[0]); // 801C37A8
  c->r[11]=c->r[1]+0x000000A0u; // 801C37AC
  c->lr=0x801C37B4u; f_800C2E48(c); // 801C37B0
  c->r[28]=R32(c->r[3]+0x00000004u); // 801C37B4
  c->r[26]=c->r[3]|c->r[3]; // 801C37B8
  c->r[27]=c->r[4]|c->r[4]; // 801C37BC
  c->r[29]=c->r[5]|c->r[5]; // 801C37C0
  c->lr=0x801C37C8u; f_801C3AA0(c); // 801C37C4
  cmps(c,0,(int32_t)c->r[3],0); // 801C37C8
  if (!crb(c,0)) { goto L_801C3A00; } // 801C37CC
  c->r[29]=R32(c->r[26]+0x00000018u); // 801C37D0
  c->r[28]=R32(c->r[26]+0x00000004u); // 801C37D4
  cmps(c,0,(int32_t)c->r[29],0); // 801C37D8
  if (!crb(c,2)) { goto L_801C37E8; } // 801C37DC
  c->r[4]=0u+0x00000000u; // 801C37E0
  goto L_801C3988; // 801C37E4
L_801C37E8:;
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)12); // 801C37E8
  c->r[7]=R32(c->r[26]+0x00000010u); // 801C37EC
  c->r[3]=c->r[28]+c->r[0]; // 801C37F0
  c->r[0]=R32(c->r[28]+c->r[0]); // 801C37F4
  c->r[3]=R32(c->r[3]+0x00000004u); // 801C37F8
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 801C37FC
  cmps(c,0,(int32_t)c->r[3],0); // 801C3800
  c->r[30]=c->r[7]+c->r[0]; // 801C3804
  if (!crb(c,2)) { goto L_801C3814; } // 801C3808
  c->r[4]=0u+0x00000000u; // 801C380C
  goto L_801C3928; // 801C3810
L_801C3814:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 801C3814
  c->r[3]=c->r[28]+c->r[0]; // 801C3818
  c->r[0]=R32(c->r[28]+c->r[0]); // 801C381C
  c->r[3]=R32(c->r[3]+0x00000004u); // 801C3820
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 801C3824
  cmps(c,0,(int32_t)c->r[3],0); // 801C3828
  c->r[31]=c->r[7]+c->r[0]; // 801C382C
  if (!crb(c,2)) { goto L_801C383C; } // 801C3830
  c->r[4]=0u+0x00000000u; // 801C3834
  goto L_801C38C8; // 801C3838
L_801C383C:;
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 801C383C
  c->r[3]=c->r[26]|c->r[26]; // 801C3840
  c->r[5]=c->r[1]+0x00000008u; // 801C3844
  c->r[6]=0u+0x00000080u; // 801C3848
  c->r[0]=R32(c->r[28]+c->r[4]); // 801C384C
  c->r[4]=c->r[28]+c->r[4]; // 801C3850
  c->r[4]=R32(c->r[4]+0x00000004u); // 801C3854
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 801C3858
  c->r[26]=c->r[7]+c->r[0]; // 801C385C
  c->lr=0x801C3864u; f_801C3D20(c); // 801C3860
  cmpu(c,0,c->r[3],0x00000080u); // 801C3864
  c->r[4]=c->r[3]|c->r[3]; // 801C3868
  if (!crb(c,2)) { goto L_801C3874; } // 801C386C
  goto L_801C38C8; // 801C3870
L_801C3874:;
  c->r[4]=c->r[3]+0x00000001u; // 801C3874
  c->r[5]=c->r[1]+0x00000008u; // 801C3878
  c->r[0]=0u+0x0000002Fu; // 801C387C
  W8(c->r[5]+c->r[3],c->r[0]); // 801C3880
  c->r[6]=addc(c,~c->r[4],0x00000080u,1); // 801C3884
  c->r[5]=c->r[5]+c->r[4]; // 801C3888
  c->r[3]=c->r[6]|c->r[6]; // 801C388C
  goto L_801C38AC; // 801C3890
  c->r[0]=c->r[0]|0x00000000u; // 801C3894
L_801C3898:;
  c->r[0]=R8(c->r[26]+0x00000000u); // 801C3898
  c->r[26]=c->r[26]+0x00000001u; // 801C389C
  W8(c->r[5]+0x00000000u,c->r[0]); // 801C38A0
  c->r[5]=c->r[5]+0x00000001u; // 801C38A4
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 801C38A8
L_801C38AC:;
  cmps(c,0,(int32_t)c->r[3],0); // 801C38AC
  if (crb(c,2)) { goto L_801C38C0; } // 801C38B0
  c->r[0]=R8(c->r[26]+0x00000000u); // 801C38B4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801C38B8
  if (!crb(c,2)) { IRQCHK(c); goto L_801C3898; } // 801C38BC
L_801C38C0:;
  c->r[0]=c->r[6]-c->r[3]; // 801C38C0
  c->r[4]=c->r[4]+c->r[0]; // 801C38C4
L_801C38C8:;
  cmpu(c,0,c->r[4],0x00000080u); // 801C38C8
  if (!crb(c,2)) { goto L_801C38D4; } // 801C38CC
  goto L_801C3928; // 801C38D0
L_801C38D4:;
  c->r[5]=c->r[4]+0x00000001u; // 801C38D4
  c->r[3]=c->r[1]+0x00000008u; // 801C38D8
  c->r[0]=0u+0x0000002Fu; // 801C38DC
  W8(c->r[3]+c->r[4],c->r[0]); // 801C38E0
  c->r[6]=addc(c,~c->r[5],0x00000080u,1); // 801C38E4
  c->r[3]=c->r[3]+c->r[5]; // 801C38E8
  c->r[4]=c->r[6]|c->r[6]; // 801C38EC
  goto L_801C390C; // 801C38F0
  c->r[0]=c->r[0]|0x00000000u; // 801C38F4
L_801C38F8:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801C38F8
  c->r[31]=c->r[31]+0x00000001u; // 801C38FC
  W8(c->r[3]+0x00000000u,c->r[0]); // 801C3900
  c->r[3]=c->r[3]+0x00000001u; // 801C3904
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801C3908
L_801C390C:;
  cmps(c,0,(int32_t)c->r[4],0); // 801C390C
  if (crb(c,2)) { goto L_801C3920; } // 801C3910
  c->r[0]=R8(c->r[31]+0x00000000u); // 801C3914
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801C3918
  if (!crb(c,2)) { IRQCHK(c); goto L_801C38F8; } // 801C391C
L_801C3920:;
  c->r[0]=c->r[6]-c->r[4]; // 801C3920
  c->r[4]=c->r[5]+c->r[0]; // 801C3924
L_801C3928:;
  cmpu(c,0,c->r[4],0x00000080u); // 801C3928
  if (!crb(c,2)) { goto L_801C3934; } // 801C392C
  goto L_801C3988; // 801C3930
L_801C3934:;
  c->r[5]=c->r[4]+0x00000001u; // 801C3934
  c->r[3]=c->r[1]+0x00000008u; // 801C3938
  c->r[0]=0u+0x0000002Fu; // 801C393C
  W8(c->r[3]+c->r[4],c->r[0]); // 801C3940
  c->r[6]=addc(c,~c->r[5],0x00000080u,1); // 801C3944
  c->r[3]=c->r[3]+c->r[5]; // 801C3948
  c->r[4]=c->r[6]|c->r[6]; // 801C394C
  goto L_801C396C; // 801C3950
  c->r[0]=c->r[0]|0x00000000u; // 801C3954
L_801C3958:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 801C3958
  c->r[30]=c->r[30]+0x00000001u; // 801C395C
  W8(c->r[3]+0x00000000u,c->r[0]); // 801C3960
  c->r[3]=c->r[3]+0x00000001u; // 801C3964
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801C3968
L_801C396C:;
  cmps(c,0,(int32_t)c->r[4],0); // 801C396C
  if (crb(c,2)) { goto L_801C3980; } // 801C3970
  c->r[0]=R8(c->r[30]+0x00000000u); // 801C3974
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801C3978
  if (!crb(c,2)) { IRQCHK(c); goto L_801C3958; } // 801C397C
L_801C3980:;
  c->r[0]=c->r[6]-c->r[4]; // 801C3980
  c->r[4]=c->r[5]+c->r[0]; // 801C3984
L_801C3988:;
  cmpu(c,0,c->r[4],0x00000080u); // 801C3988
  if (!crb(c,2)) { goto L_801C399C; } // 801C398C
  c->r[0]=0u+0x00000000u; // 801C3990
  W8(c->r[1]+0x00000087u,c->r[0]); // 801C3994
  goto L_801C39E0; // 801C3998
L_801C399C:;
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)12); // 801C399C
  c->r[0]=R32(c->r[28]+c->r[0]); // 801C39A0
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 801C39A4
  if (crb(c,2)) { goto L_801C39D4; } // 801C39A8
  cmpu(c,0,c->r[4],0x0000007Fu); // 801C39AC
  if (!crb(c,2)) { goto L_801C39C4; } // 801C39B0
  c->r[3]=c->r[1]+0x00000008u; // 801C39B4
  c->r[0]=0u+0x00000000u; // 801C39B8
  W8(c->r[3]+c->r[4],c->r[0]); // 801C39BC
  goto L_801C39E0; // 801C39C0
L_801C39C4:;
  c->r[3]=c->r[1]+0x00000008u; // 801C39C4
  c->r[0]=0u+0x0000002Fu; // 801C39C8
  W8(c->r[3]+c->r[4],c->r[0]); // 801C39CC
  c->r[4]=c->r[4]+0x00000001u; // 801C39D0
L_801C39D4:;
  c->r[3]=c->r[1]+0x00000008u; // 801C39D4
  c->r[0]=0u+0x00000000u; // 801C39D8
  W8(c->r[3]+c->r[4],c->r[0]); // 801C39DC
L_801C39E0:;
  c->r[3]=0u+0x803A0000u; // 801C39E0
  c->r[4]=c->r[27]|c->r[27]; // 801C39E4
  c->r[3]=c->r[3]+0xFFFFAC8Cu; // 801C39E8
  c->r[5]=c->r[1]+0x00000008u; // 801C39EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801C39F0
  c->lr=0x801C39F8u; f_80245CC0(c); // 801C39F4
  c->r[3]=0u+0x00000000u; // 801C39F8
  goto L_801C3A34; // 801C39FC
L_801C3A00:;
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 801C3A00
  c->r[0]=R32(c->r[28]+c->r[3]); // 801C3A04
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 801C3A08
  if (crb(c,2)) { goto L_801C3A18; } // 801C3A0C
  c->r[3]=0u+0x00000000u; // 801C3A10
  goto L_801C3A34; // 801C3A14
L_801C3A18:;
  W32(c->r[29]+0x00000000u,c->r[26]); // 801C3A18
  c->r[4]=c->r[28]+c->r[3]; // 801C3A1C
  c->r[3]=0u+0x00000001u; // 801C3A20
  c->r[0]=R32(c->r[4]+0x00000004u); // 801C3A24
  W32(c->r[29]+0x00000004u,c->r[0]); // 801C3A28
  c->r[0]=R32(c->r[4]+0x00000008u); // 801C3A2C
  W32(c->r[29]+0x00000008u,c->r[0]); // 801C3A30
L_801C3A34:;
  c->r[11]=c->r[1]+0x000000A0u; // 801C3A34
  c->lr=0x801C3A3Cu; f_800C2E94(c); // 801C3A38
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801C3A3C
  c->lr=c->r[0]; // 801C3A40
  c->r[1]=c->r[1]+0x000000A0u; // 801C3A44
  return; // 801C3A48
}

// ARCFastOpen
void f_801C3A50(Ctx* __restrict c) {
  trace_call(0x801C3A50u);
  cmps(c,0,(int32_t)c->r[4],0); // 801C3A50
  c->r[6]=R32(c->r[3]+0x00000004u); // 801C3A54
  if (crb(c,0)) { goto L_801C3A78; } // 801C3A58
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801C3A5C
  cmpu(c,0,c->r[4],c->r[0]); // 801C3A60
  if (!crb(c,0)) { goto L_801C3A78; } // 801C3A64
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 801C3A68
  c->r[0]=R32(c->r[6]+c->r[4]); // 801C3A6C
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 801C3A70
  if (crb(c,2)) { goto L_801C3A80; } // 801C3A74
L_801C3A78:;
  c->r[3]=0u+0x00000000u; // 801C3A78
  return; // 801C3A7C
L_801C3A80:;
  W32(c->r[5]+0x00000000u,c->r[3]); // 801C3A80
  c->r[4]=c->r[6]+c->r[4]; // 801C3A84
  c->r[3]=0u+0x00000001u; // 801C3A88
  c->r[0]=R32(c->r[4]+0x00000004u); // 801C3A8C
  W32(c->r[5]+0x00000004u,c->r[0]); // 801C3A90
  c->r[0]=R32(c->r[4]+0x00000008u); // 801C3A94
  W32(c->r[5]+0x00000008u,c->r[0]); // 801C3A98
  return; // 801C3A9C
}

// ARCConvertPathToEntrynum
void f_801C3AA0(Ctx* __restrict c) {
  trace_call(0x801C3AA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3AA0
  c->r[6]=0u+0x80390000u; // 801C3AA4
  c->r[6]=c->r[6]+0xFFFFC268u; // 801C3AA8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C3AAC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C3AB0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C3AB4
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C3AB8
  c->r[9]=R32(c->r[3]+0x00000018u); // 801C3ABC
  c->r[10]=R32(c->r[3]+0x00000004u); // 801C3AC0
  c->r[0]=c->r[0]|0x00000000u; // 801C3AC4
L_801C3AC8:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801C3AC8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801C3ACC
  if (!crb(c,2)) { goto L_801C3ADC; } // 801C3AD0
  c->r[3]=c->r[9]|c->r[9]; // 801C3AD4
  goto L_801C3D04; // 801C3AD8
L_801C3ADC:;
  cmps(c,0,(int32_t)c->r[0],47); // 801C3ADC
  if (!crb(c,2)) { goto L_801C3AF0; } // 801C3AE0
  c->r[9]=0u+0x00000000u; // 801C3AE4
  c->r[4]=c->r[4]+0x00000001u; // 801C3AE8
  IRQCHK(c); goto L_801C3AC8; // 801C3AEC
L_801C3AF0:;
  cmps(c,0,(int32_t)c->r[0],46); // 801C3AF0
  if (!crb(c,2)) { goto L_801C3B64; } // 801C3AF4
  c->r[0]=R8(c->r[4]+0x00000001u); // 801C3AF8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801C3AFC
  cmps(c,0,(int32_t)c->r[0],46); // 801C3B00
  if (!crb(c,2)) { goto L_801C3B44; } // 801C3B04
  c->r[0]=R8(c->r[4]+0x00000002u); // 801C3B08
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801C3B0C
  cmps(c,0,(int32_t)c->r[0],47); // 801C3B10
  if (!crb(c,2)) { goto L_801C3B2C; } // 801C3B14
  c->r[0]=(uint32_t)((int32_t)c->r[9]*(int32_t)12); // 801C3B18
  c->r[4]=c->r[4]+0x00000003u; // 801C3B1C
  c->r[5]=c->r[10]+c->r[0]; // 801C3B20
  c->r[9]=R32(c->r[5]+0x00000004u); // 801C3B24
  IRQCHK(c); goto L_801C3AC8; // 801C3B28
L_801C3B2C:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C3B2C
  if (!crb(c,2)) { goto L_801C3B64; } // 801C3B30
  c->r[0]=(uint32_t)((int32_t)c->r[9]*(int32_t)12); // 801C3B34
  c->r[3]=c->r[10]+c->r[0]; // 801C3B38
  c->r[3]=R32(c->r[3]+0x00000004u); // 801C3B3C
  goto L_801C3D04; // 801C3B40
L_801C3B44:;
  cmps(c,0,(int32_t)c->r[0],47); // 801C3B44
  if (!crb(c,2)) { goto L_801C3B54; } // 801C3B48
  c->r[4]=c->r[4]+0x00000002u; // 801C3B4C
  IRQCHK(c); goto L_801C3AC8; // 801C3B50
L_801C3B54:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C3B54
  if (!crb(c,2)) { goto L_801C3B64; } // 801C3B58
  c->r[3]=c->r[9]|c->r[9]; // 801C3B5C
  goto L_801C3D04; // 801C3B60
L_801C3B64:;
  c->r[8]=c->r[4]|c->r[4]; // 801C3B64
  goto L_801C3B74; // 801C3B68
  c->r[0]=c->r[0]|0x00000000u; // 801C3B6C
L_801C3B70:;
  c->r[8]=c->r[8]+0x00000001u; // 801C3B70
L_801C3B74:;
  c->r[0]=R8(c->r[8]+0x00000000u); // 801C3B74
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801C3B78
  if (crb(c,2)) { goto L_801C3B8C; } // 801C3B7C
  cmps(c,0,(int32_t)c->r[0],47); // 801C3B80
  if (crb(c,2)) { goto L_801C3B94; } // 801C3B84
  IRQCHK(c); goto L_801C3B70; // 801C3B88
L_801C3B8C:;
  c->r[0]=0u+0x00000000u; // 801C3B8C
  goto L_801C3B98; // 801C3B90
L_801C3B94:;
  c->r[0]=0u+0x00000001u; // 801C3B94
L_801C3B98:;
  c->r[7]=(uint32_t)((int32_t)c->r[9]*(int32_t)12); // 801C3B98
  c->r[5]=R32(c->r[6]+0x00000038u); // 801C3B9C
  c->r[8]=c->r[8]-c->r[4]; // 801C3BA0
  c->r[9]=c->r[9]+0x00000001u; // 801C3BA4
  c->r[7]=c->r[10]+c->r[7]; // 801C3BA8
  c->r[7]=R32(c->r[7]+0x00000008u); // 801C3BAC
  goto L_801C3CD8; // 801C3BB0
  c->r[0]=c->r[0]|0x00000000u; // 801C3BB4
L_801C3BB8:;
  c->r[11]=(uint32_t)((int32_t)c->r[9]*(int32_t)12); // 801C3BB8
  c->r[29]=c->r[10]+c->r[11]; // 801C3BBC
L_801C3BC0:;
  c->r[30]=R32(c->r[29]+0x00000000u); // 801C3BC0
  c->r[11]=rotl(c->r[30],0)&0xFF000000u; cr0(c,c->r[11]); // 801C3BC4
  if (!crb(c,2)) { goto L_801C3BD4; } // 801C3BC8
  cmps(c,0,(int32_t)c->r[0],1); // 801C3BCC
  if (crb(c,2)) { goto L_801C3CB8; } // 801C3BD0
L_801C3BD4:;
  c->r[12]=R32(c->r[3]+0x00000010u); // 801C3BD4
  c->r[11]=rotl(c->r[30],0)&0x00FFFFFFu; // 801C3BD8
  c->r[28]=c->r[12]+c->r[11]; // 801C3BDC
  c->r[11]=R8(c->r[12]+c->r[11]); // 801C3BE0
  cmps(c,0,(int32_t)c->r[11],46); // 801C3BE4
  if (!crb(c,2)) { goto L_801C3C04; } // 801C3BE8
  c->r[11]=R8(c->r[28]+0x00000001u); // 801C3BEC
  c->r[11]=(uint32_t)(int32_t)(int8_t)c->r[11]; cr0(c,c->r[11]); // 801C3BF0
  if (!crb(c,2)) { goto L_801C3C04; } // 801C3BF4
  c->r[29]=c->r[29]+0x0000000Cu; // 801C3BF8
  c->r[9]=c->r[9]+0x00000001u; // 801C3BFC
  IRQCHK(c); goto L_801C3BC0; // 801C3C00
L_801C3C04:;
  c->r[12]=c->r[4]|c->r[4]; // 801C3C04
  goto L_801C3C80; // 801C3C08
  c->r[0]=c->r[0]|0x00000000u; // 801C3C0C
L_801C3C10:;
  c->r[11]=R8(c->r[28]+0x00000000u); // 801C3C10
  c->r[31]=0u+0x00000001u; // 801C3C14
  c->r[28]=c->r[28]+0x00000001u; // 801C3C18
  c->r[30]=(uint32_t)(int32_t)(int8_t)c->r[11]; // 801C3C1C
  cmpu(c,0,c->r[30],0x000000FFu); // 801C3C20
  if (crb(c,1)) { goto L_801C3C2C; } // 801C3C24
  c->r[31]=0u+0x00000000u; // 801C3C28
L_801C3C2C:;
  cmps(c,0,(int32_t)c->r[31],0); // 801C3C2C
  if (crb(c,2)) { goto L_801C3C38; } // 801C3C30
  goto L_801C3C40; // 801C3C34
L_801C3C38:;
  c->r[11]=R32(c->r[5]+0x00000010u); // 801C3C38
  c->r[30]=R8(c->r[11]+c->r[30]); // 801C3C3C
L_801C3C40:;
  c->r[11]=R8(c->r[12]+0x00000000u); // 801C3C40
  c->r[29]=0u+0x00000001u; // 801C3C44
  c->r[12]=c->r[12]+0x00000001u; // 801C3C48
  c->r[31]=(uint32_t)(int32_t)(int8_t)c->r[11]; // 801C3C4C
  cmpu(c,0,c->r[31],0x000000FFu); // 801C3C50
  if (crb(c,1)) { goto L_801C3C5C; } // 801C3C54
  c->r[29]=0u+0x00000000u; // 801C3C58
L_801C3C5C:;
  cmps(c,0,(int32_t)c->r[29],0); // 801C3C5C
  if (crb(c,2)) { goto L_801C3C68; } // 801C3C60
  goto L_801C3C70; // 801C3C64
L_801C3C68:;
  c->r[11]=R32(c->r[5]+0x00000010u); // 801C3C68
  c->r[31]=R8(c->r[11]+c->r[31]); // 801C3C6C
L_801C3C70:;
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[30]); // 801C3C70
  if (crb(c,2)) { goto L_801C3C80; } // 801C3C74
  c->r[11]=0u+0x00000000u; // 801C3C78
  goto L_801C3CB0; // 801C3C7C
L_801C3C80:;
  c->r[11]=R8(c->r[28]+0x00000000u); // 801C3C80
  c->r[11]=(uint32_t)(int32_t)(int8_t)c->r[11]; cr0(c,c->r[11]); // 801C3C84
  if (!crb(c,2)) { IRQCHK(c); goto L_801C3C10; } // 801C3C88
  c->r[11]=R8(c->r[12]+0x00000000u); // 801C3C8C
  c->r[11]=(uint32_t)(int32_t)(int8_t)c->r[11]; // 801C3C90
  cmps(c,0,(int32_t)c->r[11],47); // 801C3C94
  if (crb(c,2)) { goto L_801C3CA4; } // 801C3C98
  cmps(c,0,(int32_t)c->r[11],0); // 801C3C9C
  if (!crb(c,2)) { goto L_801C3CAC; } // 801C3CA0
L_801C3CA4:;
  c->r[11]=0u+0x00000001u; // 801C3CA4
  goto L_801C3CB0; // 801C3CA8
L_801C3CAC:;
  c->r[11]=0u+0x00000000u; // 801C3CAC
L_801C3CB0:;
  cmps(c,0,(int32_t)c->r[11],1); // 801C3CB0
  if (crb(c,2)) { goto L_801C3CE8; } // 801C3CB4
L_801C3CB8:;
  c->r[11]=(uint32_t)((int32_t)c->r[9]*(int32_t)12); // 801C3CB8
  c->r[12]=c->r[10]+c->r[11]; // 801C3CBC
  c->r[11]=R32(c->r[10]+c->r[11]); // 801C3CC0
  c->r[11]=rotl(c->r[11],0)&0xFF000000u; cr0(c,c->r[11]); // 801C3CC4
  if (crb(c,2)) { goto L_801C3CD4; } // 801C3CC8
  c->r[9]=R32(c->r[12]+0x00000008u); // 801C3CCC
  goto L_801C3CD8; // 801C3CD0
L_801C3CD4:;
  c->r[9]=c->r[9]+0x00000001u; // 801C3CD4
L_801C3CD8:;
  cmpu(c,0,c->r[9],c->r[7]); // 801C3CD8
  if (crb(c,0)) { IRQCHK(c); goto L_801C3BB8; } // 801C3CDC
  c->r[3]=0u+0xFFFFFFFFu; // 801C3CE0
  goto L_801C3D04; // 801C3CE4
L_801C3CE8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801C3CE8
  if (!crb(c,2)) { goto L_801C3CF8; } // 801C3CEC
  c->r[3]=c->r[9]|c->r[9]; // 801C3CF0
  goto L_801C3D04; // 801C3CF4
L_801C3CF8:;
  c->r[4]=c->r[8]+c->r[4]; // 801C3CF8
  c->r[4]=c->r[4]+0x00000001u; // 801C3CFC
  IRQCHK(c); goto L_801C3AC8; // 801C3D00
L_801C3D04:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C3D04
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C3D08
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C3D0C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C3D10
  c->r[1]=c->r[1]+0x00000020u; // 801C3D14
  return; // 801C3D18
}

// entryToPath
void f_801C3D20(Ctx* __restrict c) {
  trace_call(0x801C3D20u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3D20
  c->r[0]=c->lr; // 801C3D24
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C3D28
  c->r[11]=c->r[1]+0x00000020u; // 801C3D2C
  c->lr=0x801C3D34u; f_800C2E4C(c); // 801C3D30
  cmps(c,0,(int32_t)c->r[4],0); // 801C3D34
  c->r[7]=R32(c->r[3]+0x00000004u); // 801C3D38
  c->r[28]=c->r[5]|c->r[5]; // 801C3D3C
  c->r[29]=c->r[6]|c->r[6]; // 801C3D40
  if (!crb(c,2)) { goto L_801C3D50; } // 801C3D44
  c->r[3]=0u+0x00000000u; // 801C3D48
  goto L_801C3ED8; // 801C3D4C
L_801C3D50:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 801C3D50
  c->r[8]=R32(c->r[3]+0x00000010u); // 801C3D54
  c->r[4]=c->r[7]+c->r[0]; // 801C3D58
  c->r[0]=R32(c->r[7]+c->r[0]); // 801C3D5C
  c->r[4]=R32(c->r[4]+0x00000004u); // 801C3D60
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 801C3D64
  cmps(c,0,(int32_t)c->r[4],0); // 801C3D68
  c->r[30]=c->r[8]+c->r[0]; // 801C3D6C
  if (!crb(c,2)) { goto L_801C3D7C; } // 801C3D70
  c->r[4]=0u+0x00000000u; // 801C3D74
  goto L_801C3E78; // 801C3D78
L_801C3D7C:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 801C3D7C
  c->r[4]=c->r[7]+c->r[0]; // 801C3D80
  c->r[0]=R32(c->r[7]+c->r[0]); // 801C3D84
  c->r[4]=R32(c->r[4]+0x00000004u); // 801C3D88
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 801C3D8C
  cmps(c,0,(int32_t)c->r[4],0); // 801C3D90
  c->r[31]=c->r[8]+c->r[0]; // 801C3D94
  if (!crb(c,2)) { goto L_801C3DA4; } // 801C3D98
  c->r[4]=0u+0x00000000u; // 801C3D9C
  goto L_801C3E20; // 801C3DA0
L_801C3DA4:;
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 801C3DA4
  c->r[0]=R32(c->r[7]+c->r[4]); // 801C3DA8
  c->r[4]=c->r[7]+c->r[4]; // 801C3DAC
  c->r[4]=R32(c->r[4]+0x00000004u); // 801C3DB0
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 801C3DB4
  c->r[27]=c->r[8]+c->r[0]; // 801C3DB8
  c->lr=0x801C3DC0u; f_801C3D20(c); // 801C3DBC
  cmpu(c,0,c->r[3],c->r[29]); // 801C3DC0
  c->r[4]=c->r[3]|c->r[3]; // 801C3DC4
  if (!crb(c,2)) { goto L_801C3DD0; } // 801C3DC8
  goto L_801C3E20; // 801C3DCC
L_801C3DD0:;
  c->r[4]=c->r[3]+0x00000001u; // 801C3DD0
  c->r[0]=0u+0x0000002Fu; // 801C3DD4
  c->r[6]=c->r[29]-c->r[4]; // 801C3DD8
  W8(c->r[28]+c->r[3],c->r[0]); // 801C3DDC
  c->r[3]=c->r[28]+c->r[4]; // 801C3DE0
  c->r[5]=c->r[6]|c->r[6]; // 801C3DE4
  goto L_801C3E04; // 801C3DE8
  c->r[0]=c->r[0]|0x00000000u; // 801C3DEC
L_801C3DF0:;
  c->r[0]=R8(c->r[27]+0x00000000u); // 801C3DF0
  c->r[27]=c->r[27]+0x00000001u; // 801C3DF4
  W8(c->r[3]+0x00000000u,c->r[0]); // 801C3DF8
  c->r[3]=c->r[3]+0x00000001u; // 801C3DFC
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801C3E00
L_801C3E04:;
  cmps(c,0,(int32_t)c->r[5],0); // 801C3E04
  if (crb(c,2)) { goto L_801C3E18; } // 801C3E08
  c->r[0]=R8(c->r[27]+0x00000000u); // 801C3E0C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801C3E10
  if (!crb(c,2)) { IRQCHK(c); goto L_801C3DF0; } // 801C3E14
L_801C3E18:;
  c->r[0]=c->r[6]-c->r[5]; // 801C3E18
  c->r[4]=c->r[4]+c->r[0]; // 801C3E1C
L_801C3E20:;
  cmpu(c,0,c->r[4],c->r[29]); // 801C3E20
  if (!crb(c,2)) { goto L_801C3E2C; } // 801C3E24
  goto L_801C3E78; // 801C3E28
L_801C3E2C:;
  c->r[3]=c->r[4]+0x00000001u; // 801C3E2C
  c->r[0]=0u+0x0000002Fu; // 801C3E30
  c->r[6]=c->r[29]-c->r[3]; // 801C3E34
  W8(c->r[28]+c->r[4],c->r[0]); // 801C3E38
  c->r[4]=c->r[28]+c->r[3]; // 801C3E3C
  c->r[5]=c->r[6]|c->r[6]; // 801C3E40
  goto L_801C3E5C; // 801C3E44
L_801C3E48:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801C3E48
  c->r[31]=c->r[31]+0x00000001u; // 801C3E4C
  W8(c->r[4]+0x00000000u,c->r[0]); // 801C3E50
  c->r[4]=c->r[4]+0x00000001u; // 801C3E54
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801C3E58
L_801C3E5C:;
  cmps(c,0,(int32_t)c->r[5],0); // 801C3E5C
  if (crb(c,2)) { goto L_801C3E70; } // 801C3E60
  c->r[0]=R8(c->r[31]+0x00000000u); // 801C3E64
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801C3E68
  if (!crb(c,2)) { IRQCHK(c); goto L_801C3E48; } // 801C3E6C
L_801C3E70:;
  c->r[0]=c->r[6]-c->r[5]; // 801C3E70
  c->r[4]=c->r[3]+c->r[0]; // 801C3E74
L_801C3E78:;
  cmpu(c,0,c->r[4],c->r[29]); // 801C3E78
  if (!crb(c,2)) { goto L_801C3E88; } // 801C3E7C
  c->r[3]=c->r[4]|c->r[4]; // 801C3E80
  goto L_801C3ED8; // 801C3E84
L_801C3E88:;
  c->r[6]=c->r[4]+0x00000001u; // 801C3E88
  c->r[0]=0u+0x0000002Fu; // 801C3E8C
  c->r[5]=c->r[29]-c->r[6]; // 801C3E90
  W8(c->r[28]+c->r[4],c->r[0]); // 801C3E94
  c->r[3]=c->r[28]+c->r[6]; // 801C3E98
  c->r[4]=c->r[5]|c->r[5]; // 801C3E9C
  goto L_801C3EBC; // 801C3EA0
  c->r[0]=c->r[0]|0x00000000u; // 801C3EA4
L_801C3EA8:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 801C3EA8
  c->r[30]=c->r[30]+0x00000001u; // 801C3EAC
  W8(c->r[3]+0x00000000u,c->r[0]); // 801C3EB0
  c->r[3]=c->r[3]+0x00000001u; // 801C3EB4
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801C3EB8
L_801C3EBC:;
  cmps(c,0,(int32_t)c->r[4],0); // 801C3EBC
  if (crb(c,2)) { goto L_801C3ED0; } // 801C3EC0
  c->r[0]=R8(c->r[30]+0x00000000u); // 801C3EC4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801C3EC8
  if (!crb(c,2)) { IRQCHK(c); goto L_801C3EA8; } // 801C3ECC
L_801C3ED0:;
  c->r[0]=c->r[5]-c->r[4]; // 801C3ED0
  c->r[3]=c->r[6]+c->r[0]; // 801C3ED4
L_801C3ED8:;
  c->r[11]=c->r[1]+0x00000020u; // 801C3ED8
  c->lr=0x801C3EE0u; f_800C2E98(c); // 801C3EDC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C3EE0
  c->lr=c->r[0]; // 801C3EE4
  c->r[1]=c->r[1]+0x00000020u; // 801C3EE8
  return; // 801C3EEC
}

// ARCGetStartAddrInMem
void f_801C3EF0(Ctx* __restrict c) {
  trace_call(0x801C3EF0u);
  c->r[4]=R32(c->r[3]+0x00000000u); // 801C3EF0
  c->r[0]=R32(c->r[3]+0x00000004u); // 801C3EF4
  c->r[3]=R32(c->r[4]+0x00000000u); // 801C3EF8
  c->r[3]=c->r[3]+c->r[0]; // 801C3EFC
  return; // 801C3F00
}

// ARCGetStartOffset
void f_801C3F10(Ctx* __restrict c) {
  trace_call(0x801C3F10u);
  c->r[3]=R32(c->r[3]+0x00000008u); // 801C3F10
  return; // 801C3F14
}

// ARCGetLength
void f_801C3F20(Ctx* __restrict c) {
  trace_call(0x801C3F20u);
  c->r[3]=0u+0x00000001u; // 801C3F20
  return; // 801C3F24
}

// ARCChangeDir
void f_801C3F30(Ctx* __restrict c) {
  trace_call(0x801C3F30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3F30
  c->r[0]=c->lr; // 801C3F34
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C3F38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C3F3C
  c->r[31]=c->r[3]|c->r[3]; // 801C3F40
  c->lr=0x801C3F48u; f_801C3AA0(c); // 801C3F44
  cmps(c,0,(int32_t)c->r[3],0); // 801C3F48
  c->r[4]=R32(c->r[31]+0x00000004u); // 801C3F4C
  if (crb(c,0)) { goto L_801C3F64; } // 801C3F50
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 801C3F54
  c->r[0]=R32(c->r[4]+c->r[0]); // 801C3F58
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 801C3F5C
  if (!crb(c,2)) { goto L_801C3F6C; } // 801C3F60
L_801C3F64:;
  c->r[3]=0u+0x00000000u; // 801C3F64
  goto L_801C3F74; // 801C3F68
L_801C3F6C:;
  W32(c->r[31]+0x00000018u,c->r[3]); // 801C3F6C
  c->r[3]=0u+0x00000001u; // 801C3F70
L_801C3F74:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C3F74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C3F78
  c->lr=c->r[0]; // 801C3F7C
  c->r[1]=c->r[1]+0x00000010u; // 801C3F80
  return; // 801C3F84
}

// ARCOpenDir
void f_801C3F90(Ctx* __restrict c) {
  trace_call(0x801C3F90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C3F90
  c->r[0]=c->lr; // 801C3F94
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C3F98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C3F9C
  c->r[31]=c->r[5]|c->r[5]; // 801C3FA0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C3FA4
  c->r[30]=c->r[3]|c->r[3]; // 801C3FA8
  c->lr=0x801C3FB0u; f_801C3AA0(c); // 801C3FAC
  cmps(c,0,(int32_t)c->r[3],0); // 801C3FB0
  c->r[5]=R32(c->r[30]+0x00000004u); // 801C3FB4
  if (crb(c,0)) { goto L_801C3FCC; } // 801C3FB8
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)12); // 801C3FBC
  c->r[0]=R32(c->r[5]+c->r[4]); // 801C3FC0
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 801C3FC4
  if (!crb(c,2)) { goto L_801C3FD4; } // 801C3FC8
L_801C3FCC:;
  c->r[3]=0u+0x00000000u; // 801C3FCC
  goto L_801C3FF4; // 801C3FD0
L_801C3FD4:;
  c->r[0]=c->r[3]+0x00000001u; // 801C3FD4
  W32(c->r[31]+0x00000004u,c->r[3]); // 801C3FD8
  c->r[4]=c->r[5]+c->r[4]; // 801C3FDC
  c->r[3]=0u+0x00000001u; // 801C3FE0
  W32(c->r[31]+0x00000000u,c->r[30]); // 801C3FE4
  W32(c->r[31]+0x00000008u,c->r[0]); // 801C3FE8
  c->r[0]=R32(c->r[4]+0x00000008u); // 801C3FEC
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801C3FF0
L_801C3FF4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C3FF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C3FF8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C3FFC
  c->lr=c->r[0]; // 801C4000
  c->r[1]=c->r[1]+0x00000010u; // 801C4004
  return; // 801C4008
}

// ARCReadDir
void f_801C4010(Ctx* __restrict c) {
  trace_call(0x801C4010u);
  c->r[7]=R32(c->r[3]+0x00000008u); // 801C4010
  c->r[9]=R32(c->r[3]+0x00000000u); // 801C4014
  c->r[0]=(uint32_t)((int32_t)c->r[7]*(int32_t)12); // 801C4018
  c->r[8]=R32(c->r[9]+0x00000004u); // 801C401C
  c->r[6]=c->r[8]+c->r[0]; // 801C4020
  c->r[0]=c->r[0]|0x00000000u; // 801C4024
L_801C4028:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 801C4028
  cmpu(c,0,c->r[7],c->r[0]); // 801C402C
  if (!crb(c,1)) { goto L_801C4040; } // 801C4030
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801C4034
  cmpu(c,0,c->r[0],c->r[7]); // 801C4038
  if (crb(c,1)) { goto L_801C4048; } // 801C403C
L_801C4040:;
  c->r[3]=0u+0x00000000u; // 801C4040
  return; // 801C4044
L_801C4048:;
  W32(c->r[4]+0x00000000u,c->r[9]); // 801C4048
  W32(c->r[4]+0x00000004u,c->r[7]); // 801C404C
  c->r[0]=R32(c->r[6]+0x00000000u); // 801C4050
  c->r[5]=rotl(c->r[0],0)&0xFF000000u; // 801C4054
  c->r[0]=0u-c->r[5]; // 801C4058
  c->r[0]=c->r[0]|c->r[5]; // 801C405C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801C4060
  W32(c->r[4]+0x00000008u,c->r[0]); // 801C4064
  c->r[0]=R32(c->r[6]+0x00000000u); // 801C4068
  c->r[5]=R32(c->r[9]+0x00000010u); // 801C406C
  c->r[0]=rotl(c->r[0],0)&0x00FFFFFFu; // 801C4070
  c->r[5]=c->r[5]+c->r[0]; // 801C4074
  W32(c->r[4]+0x0000000Cu,c->r[5]); // 801C4078
  c->r[0]=R8(c->r[5]+0x00000000u); // 801C407C
  cmps(c,0,(int32_t)c->r[0],46); // 801C4080
  if (!crb(c,2)) { goto L_801C40A0; } // 801C4084
  c->r[0]=R8(c->r[5]+0x00000001u); // 801C4088
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801C408C
  if (!crb(c,2)) { goto L_801C40A0; } // 801C4090
  c->r[6]=c->r[6]+0x0000000Cu; // 801C4094
  c->r[7]=c->r[7]+0x00000001u; // 801C4098
  IRQCHK(c); goto L_801C4028; // 801C409C
L_801C40A0:;
  c->r[4]=(uint32_t)((int32_t)c->r[7]*(int32_t)12); // 801C40A0
  c->r[0]=R32(c->r[8]+c->r[4]); // 801C40A4
  c->r[0]=rotl(c->r[0],0)&0xFF000000u; cr0(c,c->r[0]); // 801C40A8
  if (crb(c,2)) { goto L_801C40BC; } // 801C40AC
  c->r[4]=c->r[8]+c->r[4]; // 801C40B0
  c->r[0]=R32(c->r[4]+0x00000008u); // 801C40B4
  goto L_801C40C0; // 801C40B8
L_801C40BC:;
  c->r[0]=c->r[7]+0x00000001u; // 801C40BC
L_801C40C0:;
  W32(c->r[3]+0x00000008u,c->r[0]); // 801C40C0
  c->r[3]=0u+0x00000001u; // 801C40C4
  return; // 801C40C8
}

// ARCCloseDir
void f_801C40D0(Ctx* __restrict c) {
  trace_call(0x801C40D0u);
  c->r[3]=0u+0x00000001u; // 801C40D0
  return; // 801C40D4
}

// AXInit
void f_801C40E0(Ctx* __restrict c) {
  trace_call(0x801C40E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C40E0
  c->r[0]=c->lr; // 801C40E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C40E8
  c->r[0]=R32(c->r[13]+0xFFFF9988u); // 801C40EC
  cmps(c,0,(int32_t)c->r[0],0); // 801C40F0
  if (!crb(c,2)) { goto L_801C4124; } // 801C40F4
  c->r[3]=R32(c->r[13]+0xFFFF8E98u); // 801C40F8
  c->lr=0x801C4100u; f_80243B90(c); // 801C40FC
  c->lr=0x801C4104u; f_801C4270(c); // 801C4100
  c->lr=0x801C4108u; f_801C6F80(c); // 801C4104
  c->lr=0x801C410Cu; f_801C64F0(c); // 801C4108
  c->lr=0x801C4110u; f_801C46A0(c); // 801C410C
  c->lr=0x801C4114u; f_801C5920(c); // 801C4110
  c->r[3]=0u+0x00000000u; // 801C4114
  c->lr=0x801C411Cu; f_801C5E90(c); // 801C4118
  c->r[0]=0u+0x00000001u; // 801C411C
  W32(c->r[13]+0xFFFF9988u,c->r[0]); // 801C4120
L_801C4124:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C4124
  c->lr=c->r[0]; // 801C4128
  c->r[1]=c->r[1]+0x00000010u; // 801C412C
  return; // 801C4130
}

// fn_801C4140
void f_801C4140(Ctx* __restrict c) {
  trace_call(0x801C4140u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4140
  c->r[0]=c->lr; // 801C4144
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C4148
  c->r[0]=R32(c->r[13]+0xFFFF9988u); // 801C414C
  cmps(c,0,(int32_t)c->r[0],0); // 801C4150
  if (crb(c,2)) { goto L_801C4178; } // 801C4154
  c->lr=0x801C415Cu; f_801C6090(c); // 801C4158
  c->lr=0x801C4160u; f_801C4320(c); // 801C415C
  c->lr=0x801C4164u; f_801C7240(c); // 801C4160
  c->lr=0x801C4168u; f_801C6550(c); // 801C4164
  c->lr=0x801C416Cu; f_801C47C0(c); // 801C4168
  c->lr=0x801C4170u; f_801C5970(c); // 801C416C
  c->r[0]=0u+0x00000000u; // 801C4170
  W32(c->r[13]+0xFFFF9988u,c->r[0]); // 801C4174
L_801C4178:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C4178
  c->lr=c->r[0]; // 801C417C
  c->r[1]=c->r[1]+0x00000010u; // 801C4180
  return; // 801C4184
}

// AXIsInit
void f_801C4190(Ctx* __restrict c) {
  trace_call(0x801C4190u);
  c->r[3]=R32(c->r[13]+0xFFFF9988u); // 801C4190
  return; // 801C4194
}

// __AXGetStackHead
void f_801C41A0(Ctx* __restrict c) {
  trace_call(0x801C41A0u);
  c->r[4]=0u+0x80440000u; // 801C41A0
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 801C41A4
  c->r[4]=c->r[4]+0x00001308u; // 801C41A8
  c->r[3]=R32(c->r[4]+c->r[0]); // 801C41AC
  return; // 801C41B0
}

// __AXServiceCallbackStack
void f_801C41C0(Ctx* __restrict c) {
  trace_call(0x801C41C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C41C0
  c->r[0]=c->lr; // 801C41C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C41C8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C41CC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C41D0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C41D4
  c->r[29]=R32(c->r[13]+0xFFFF9990u); // 801C41D8
  cmps(c,0,(int32_t)c->r[29],0); // 801C41DC
  if (crb(c,2)) { goto L_801C41EC; } // 801C41E0
  c->r[0]=R32(c->r[29]+0x00000008u); // 801C41E4
  W32(c->r[13]+0xFFFF9990u,c->r[0]); // 801C41E8
L_801C41EC:;
  c->r[30]=0u+0x80440000u; // 801C41EC
  c->r[31]=0u+0x00000000u; // 801C41F0
  goto L_801C4248; // 801C41F4
L_801C41F8:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 801C41F8
  cmps(c,0,(int32_t)c->r[0],0); // 801C41FC
  if (crb(c,2)) { goto L_801C4234; } // 801C4200
  c->r[12]=R32(c->r[29]+0x00000010u); // 801C4204
  cmps(c,0,(int32_t)c->r[12],0); // 801C4208
  if (crb(c,2)) { goto L_801C421C; } // 801C420C
  c->r[3]=c->r[29]|c->r[29]; // 801C4210
  c->ctr=c->r[12]; // 801C4214
  if (true) { c->lr=0x801C421Cu; dispatch(c,c->ctr); } // 801C4218
L_801C421C:;
  c->r[3]=c->r[29]|c->r[29]; // 801C421C
  c->lr=0x801C4224u; f_801C4400(c); // 801C4220
  c->r[0]=R32(c->r[30]+0x00001308u); // 801C4224
  W32(c->r[29]+0x00000000u,c->r[0]); // 801C4228
  W32(c->r[30]+0x00001308u,c->r[29]); // 801C422C
  W32(c->r[29]+0x0000000Cu,c->r[31]); // 801C4230
L_801C4234:;
  c->r[29]=R32(c->r[13]+0xFFFF9990u); // 801C4234
  cmps(c,0,(int32_t)c->r[29],0); // 801C4238
  if (crb(c,2)) { goto L_801C4248; } // 801C423C
  c->r[0]=R32(c->r[29]+0x00000008u); // 801C4240
  W32(c->r[13]+0xFFFF9990u,c->r[0]); // 801C4244
L_801C4248:;
  cmps(c,0,(int32_t)c->r[29],0); // 801C4248
  if (!crb(c,2)) { IRQCHK(c); goto L_801C41F8; } // 801C424C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C4250
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C4254
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C4258
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C425C
  c->lr=c->r[0]; // 801C4260
  c->r[1]=c->r[1]+0x00000020u; // 801C4264
  return; // 801C4268
}

// __AXAllocInit
void f_801C4270(Ctx* __restrict c) {
  trace_call(0x801C4270u);
  c->r[4]=0u+0x80440000u; // 801C4270
  c->r[5]=0u+0x80440000u; // 801C4274
  c->r[3]=0u+0x00000000u; // 801C4278
  c->r[0]=0u+0x00000002u; // 801C427C
  W32(c->r[13]+0xFFFF9990u,c->r[3]); // 801C4280
  c->r[4]=c->r[4]+0x00001388u; // 801C4284
  c->r[5]=c->r[5]+0x00001308u; // 801C4288
  c->ctr=c->r[0]; // 801C428C
L_801C4290:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 801C4290
  W32(c->r[5]+0x00000000u,c->r[3]); // 801C4294
  W32(c->r[4]+0x00000004u,c->r[3]); // 801C4298
  W32(c->r[5]+0x00000004u,c->r[3]); // 801C429C
  W32(c->r[4]+0x00000008u,c->r[3]); // 801C42A0
  W32(c->r[5]+0x00000008u,c->r[3]); // 801C42A4
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 801C42A8
  W32(c->r[5]+0x0000000Cu,c->r[3]); // 801C42AC
  W32(c->r[4]+0x00000010u,c->r[3]); // 801C42B0
  W32(c->r[5]+0x00000010u,c->r[3]); // 801C42B4
  W32(c->r[4]+0x00000014u,c->r[3]); // 801C42B8
  W32(c->r[5]+0x00000014u,c->r[3]); // 801C42BC
  W32(c->r[4]+0x00000018u,c->r[3]); // 801C42C0
  W32(c->r[5]+0x00000018u,c->r[3]); // 801C42C4
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 801C42C8
  W32(c->r[5]+0x0000001Cu,c->r[3]); // 801C42CC
  W32(c->r[4]+0x00000020u,c->r[3]); // 801C42D0
  W32(c->r[5]+0x00000020u,c->r[3]); // 801C42D4
  W32(c->r[4]+0x00000024u,c->r[3]); // 801C42D8
  W32(c->r[5]+0x00000024u,c->r[3]); // 801C42DC
  W32(c->r[4]+0x00000028u,c->r[3]); // 801C42E0
  W32(c->r[5]+0x00000028u,c->r[3]); // 801C42E4
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801C42E8
  W32(c->r[5]+0x0000002Cu,c->r[3]); // 801C42EC
  W32(c->r[4]+0x00000030u,c->r[3]); // 801C42F0
  W32(c->r[5]+0x00000030u,c->r[3]); // 801C42F4
  W32(c->r[4]+0x00000034u,c->r[3]); // 801C42F8
  W32(c->r[5]+0x00000034u,c->r[3]); // 801C42FC
  W32(c->r[4]+0x00000038u,c->r[3]); // 801C4300
  W32(c->r[5]+0x00000038u,c->r[3]); // 801C4304
  W32(c->r[4]+0x0000003Cu,c->r[3]); // 801C4308
  c->r[4]=c->r[4]+0x00000040u; // 801C430C
  W32(c->r[5]+0x0000003Cu,c->r[3]); // 801C4310
  c->r[5]=c->r[5]+0x00000040u; // 801C4314
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C4290; } // 801C4318
  return; // 801C431C
}

// fn_801C4320
void f_801C4320(Ctx* __restrict c) {
  trace_call(0x801C4320u);
  c->r[4]=0u+0x80440000u; // 801C4320
  c->r[5]=0u+0x80440000u; // 801C4324
  c->r[3]=0u+0x00000000u; // 801C4328
  c->r[0]=0u+0x00000002u; // 801C432C
  W32(c->r[13]+0xFFFF9990u,c->r[3]); // 801C4330
  c->r[4]=c->r[4]+0x00001388u; // 801C4334
  c->r[5]=c->r[5]+0x00001308u; // 801C4338
  c->ctr=c->r[0]; // 801C433C
L_801C4340:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 801C4340
  W32(c->r[5]+0x00000000u,c->r[3]); // 801C4344
  W32(c->r[4]+0x00000004u,c->r[3]); // 801C4348
  W32(c->r[5]+0x00000004u,c->r[3]); // 801C434C
  W32(c->r[4]+0x00000008u,c->r[3]); // 801C4350
  W32(c->r[5]+0x00000008u,c->r[3]); // 801C4354
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 801C4358
  W32(c->r[5]+0x0000000Cu,c->r[3]); // 801C435C
  W32(c->r[4]+0x00000010u,c->r[3]); // 801C4360
  W32(c->r[5]+0x00000010u,c->r[3]); // 801C4364
  W32(c->r[4]+0x00000014u,c->r[3]); // 801C4368
  W32(c->r[5]+0x00000014u,c->r[3]); // 801C436C
  W32(c->r[4]+0x00000018u,c->r[3]); // 801C4370
  W32(c->r[5]+0x00000018u,c->r[3]); // 801C4374
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 801C4378
  W32(c->r[5]+0x0000001Cu,c->r[3]); // 801C437C
  W32(c->r[4]+0x00000020u,c->r[3]); // 801C4380
  W32(c->r[5]+0x00000020u,c->r[3]); // 801C4384
  W32(c->r[4]+0x00000024u,c->r[3]); // 801C4388
  W32(c->r[5]+0x00000024u,c->r[3]); // 801C438C
  W32(c->r[4]+0x00000028u,c->r[3]); // 801C4390
  W32(c->r[5]+0x00000028u,c->r[3]); // 801C4394
  W32(c->r[4]+0x0000002Cu,c->r[3]); // 801C4398
  W32(c->r[5]+0x0000002Cu,c->r[3]); // 801C439C
  W32(c->r[4]+0x00000030u,c->r[3]); // 801C43A0
  W32(c->r[5]+0x00000030u,c->r[3]); // 801C43A4
  W32(c->r[4]+0x00000034u,c->r[3]); // 801C43A8
  W32(c->r[5]+0x00000034u,c->r[3]); // 801C43AC
  W32(c->r[4]+0x00000038u,c->r[3]); // 801C43B0
  W32(c->r[5]+0x00000038u,c->r[3]); // 801C43B4
  W32(c->r[4]+0x0000003Cu,c->r[3]); // 801C43B8
  c->r[4]=c->r[4]+0x00000040u; // 801C43BC
  W32(c->r[5]+0x0000003Cu,c->r[3]); // 801C43C0
  c->r[5]=c->r[5]+0x00000040u; // 801C43C4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C4340; } // 801C43C8
  return; // 801C43CC
}

// __AXPushFreeStack
void f_801C43D0(Ctx* __restrict c) {
  trace_call(0x801C43D0u);
  c->r[5]=0u+0x80440000u; // 801C43D0
  c->r[0]=0u+0x00000000u; // 801C43D4
  c->r[4]=R32(c->r[5]+0x00001308u); // 801C43D8
  W32(c->r[3]+0x00000000u,c->r[4]); // 801C43DC
  W32(c->r[5]+0x00001308u,c->r[3]); // 801C43E0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801C43E4
  return; // 801C43E8
}

// __AXPushCallbackStack
void f_801C43F0(Ctx* __restrict c) {
  trace_call(0x801C43F0u);
  c->r[0]=R32(c->r[13]+0xFFFF9990u); // 801C43F0
  W32(c->r[3]+0x00000008u,c->r[0]); // 801C43F4
  W32(c->r[13]+0xFFFF9990u,c->r[3]); // 801C43F8
  return; // 801C43FC
}

// __AXRemoveFromStack
void f_801C4400(Ctx* __restrict c) {
  trace_call(0x801C4400u);
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801C4400
  c->r[5]=0u+0x80440000u; // 801C4404
  c->r[4]=0u+0x80440000u; // 801C4408
  c->r[6]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C440C
  c->r[5]=c->r[5]+0x00001308u; // 801C4410
  c->r[4]=c->r[4]+0x00001388u; // 801C4414
  c->r[0]=R32(c->r[5]+c->r[6]); // 801C4418
  c->r[7]=R32(c->r[4]+c->r[6]); // 801C441C
  cmpu(c,0,c->r[0],c->r[7]); // 801C4420
  if (!crb(c,2)) { goto L_801C4438; } // 801C4424
  c->r[0]=0u+0x00000000u; // 801C4428
  W32(c->r[4]+c->r[6],c->r[0]); // 801C442C
  W32(c->r[5]+c->r[6],c->r[0]); // 801C4430
  return; // 801C4434
L_801C4438:;
  cmpu(c,0,c->r[3],c->r[0]); // 801C4438
  if (!crb(c,2)) { goto L_801C4454; } // 801C443C
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C4440
  c->r[0]=0u+0x00000000u; // 801C4444
  W32(c->r[5]+c->r[6],c->r[3]); // 801C4448
  W32(c->r[3]+0x00000004u,c->r[0]); // 801C444C
  return; // 801C4450
L_801C4454:;
  cmpu(c,0,c->r[3],c->r[7]); // 801C4454
  if (!crb(c,2)) { goto L_801C4470; } // 801C4458
  c->r[3]=R32(c->r[3]+0x00000004u); // 801C445C
  c->r[0]=0u+0x00000000u; // 801C4460
  W32(c->r[4]+c->r[6],c->r[3]); // 801C4464
  W32(c->r[3]+0x00000000u,c->r[0]); // 801C4468
  return; // 801C446C
L_801C4470:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 801C4470
  c->r[3]=R32(c->r[3]+0x00000000u); // 801C4474
  W32(c->r[4]+0x00000000u,c->r[3]); // 801C4478
  W32(c->r[3]+0x00000004u,c->r[4]); // 801C447C
  return; // 801C4480
}

// AXFreeVoice
void f_801C4490(Ctx* __restrict c) {
  trace_call(0x801C4490u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4490
  c->r[0]=c->lr; // 801C4494
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C4498
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C449C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C44A0
  c->r[30]=c->r[3]|c->r[3]; // 801C44A4
  c->lr=0x801C44ACu; f_802494C0(c); // 801C44A8
  c->r[31]=c->r[3]|c->r[3]; // 801C44AC
  c->r[3]=c->r[30]|c->r[30]; // 801C44B0
  c->lr=0x801C44B8u; f_801C4400(c); // 801C44B4
  c->r[0]=R16(c->r[30]+0x00000038u); // 801C44B8
  cmpu(c,0,c->r[0],0x00000001u); // 801C44BC
  if (!crb(c,2)) { goto L_801C44CC; } // 801C44C0
  c->r[0]=0u+0x00000001u; // 801C44C4
  W32(c->r[30]+0x00000020u,c->r[0]); // 801C44C8
L_801C44CC:;
  c->r[3]=c->r[30]|c->r[30]; // 801C44CC
  c->lr=0x801C44D4u; f_801C6F40(c); // 801C44D0
  c->r[5]=0u+0x80440000u; // 801C44D4
  c->r[0]=0u+0x00000000u; // 801C44D8
  c->r[4]=R32(c->r[5]+0x00001308u); // 801C44DC
  c->r[3]=c->r[31]|c->r[31]; // 801C44E0
  W32(c->r[30]+0x00000000u,c->r[4]); // 801C44E4
  W32(c->r[5]+0x00001308u,c->r[30]); // 801C44E8
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801C44EC
  c->lr=0x801C44F4u; f_80249500(c); // 801C44F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C44F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C44F8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C44FC
  c->lr=c->r[0]; // 801C4500
  c->r[1]=c->r[1]+0x00000010u; // 801C4504
  return; // 801C4508
}

// AXAcquireVoice
void f_801C4510(Ctx* __restrict c) {
  trace_call(0x801C4510u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4510
  c->r[0]=c->lr; // 801C4514
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C4518
  c->r[11]=c->r[1]+0x00000020u; // 801C451C
  c->lr=0x801C4524u; f_800C2E4C(c); // 801C4520
  c->r[27]=c->r[3]|c->r[3]; // 801C4524
  c->r[28]=c->r[4]|c->r[4]; // 801C4528
  c->r[29]=c->r[5]|c->r[5]; // 801C452C
  c->lr=0x801C4534u; f_802494C0(c); // 801C4530
  c->r[4]=0u+0x80440000u; // 801C4534
  c->r[31]=c->r[3]|c->r[3]; // 801C4538
  c->r[30]=R32(c->r[4]+0x00001308u); // 801C453C
  cmps(c,0,(int32_t)c->r[30],0); // 801C4540
  if (crb(c,2)) { goto L_801C4550; } // 801C4544
  c->r[0]=R32(c->r[30]+0x00000000u); // 801C4548
  W32(c->r[4]+0x00001308u,c->r[0]); // 801C454C
L_801C4550:;
  cmps(c,0,(int32_t)c->r[30],0); // 801C4550
  if (!crb(c,2)) { goto L_801C4610; } // 801C4554
  c->r[3]=0u+0x80440000u; // 801C4558
  c->r[4]=0u+0x80440000u; // 801C455C
  c->r[3]=c->r[3]+0x00001308u; // 801C4560
  c->r[0]=c->r[27]+0xFFFFFFFFu; // 801C4564
  c->r[4]=c->r[4]+0x00001388u; // 801C4568
  c->r[5]=c->r[3]+0x00000004u; // 801C456C
  c->r[3]=0u+0x00000000u; // 801C4570
  c->r[6]=c->r[4]+0x00000004u; // 801C4574
  c->ctr=c->r[0]; // 801C4578
  cmpu(c,0,c->r[27],0x00000001u); // 801C457C
  if (!crb(c,1)) { goto L_801C4610; } // 801C4580
  c->r[0]=c->r[0]|0x00000000u; // 801C4584
L_801C4588:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 801C4588
  c->r[30]=0u+0x00000000u; // 801C458C
  cmps(c,0,(int32_t)c->r[0],0); // 801C4590
  if (crb(c,2)) { goto L_801C45CC; } // 801C4594
  c->r[7]=R32(c->r[6]+0x00000000u); // 801C4598
  cmpu(c,0,c->r[0],c->r[7]); // 801C459C
  if (!crb(c,2)) { goto L_801C45B4; } // 801C45A0
  W32(c->r[6]+0x00000000u,c->r[3]); // 801C45A4
  c->r[30]=c->r[0]|c->r[0]; // 801C45A8
  W32(c->r[5]+0x00000000u,c->r[3]); // 801C45AC
  goto L_801C45CC; // 801C45B0
L_801C45B4:;
  cmps(c,0,(int32_t)c->r[7],0); // 801C45B4
  if (crb(c,2)) { goto L_801C45CC; } // 801C45B8
  c->r[4]=R32(c->r[7]+0x00000004u); // 801C45BC
  c->r[30]=c->r[7]|c->r[7]; // 801C45C0
  W32(c->r[6]+0x00000000u,c->r[4]); // 801C45C4
  W32(c->r[4]+0x00000000u,c->r[3]); // 801C45C8
L_801C45CC:;
  cmps(c,0,(int32_t)c->r[30],0); // 801C45CC
  if (crb(c,2)) { goto L_801C4604; } // 801C45D0
  c->r[0]=R16(c->r[30]+0x00000038u); // 801C45D4
  cmpu(c,0,c->r[0],0x00000001u); // 801C45D8
  if (!crb(c,2)) { goto L_801C45E8; } // 801C45DC
  c->r[0]=0u+0x00000001u; // 801C45E0
  W32(c->r[30]+0x00000020u,c->r[0]); // 801C45E4
L_801C45E8:;
  c->r[12]=R32(c->r[30]+0x00000010u); // 801C45E8
  cmps(c,0,(int32_t)c->r[12],0); // 801C45EC
  if (crb(c,2)) { goto L_801C4610; } // 801C45F0
  c->r[3]=c->r[30]|c->r[30]; // 801C45F4
  c->ctr=c->r[12]; // 801C45F8
  if (true) { c->lr=0x801C4600u; dispatch(c,c->ctr); } // 801C45FC
  goto L_801C4610; // 801C4600
L_801C4604:;
  c->r[5]=c->r[5]+0x00000004u; // 801C4604
  c->r[6]=c->r[6]+0x00000004u; // 801C4608
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C4588; } // 801C460C
L_801C4610:;
  cmps(c,0,(int32_t)c->r[30],0); // 801C4610
  if (crb(c,2)) { goto L_801C4670; } // 801C4614
  c->r[4]=0u+0x80440000u; // 801C4618
  c->r[5]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801C461C
  c->r[4]=c->r[4]+0x00001308u; // 801C4620
  c->r[0]=0u+0x00000000u; // 801C4624
  c->r[3]=R32(c->r[4]+c->r[5]); // 801C4628
  W32(c->r[30]+0x00000000u,c->r[3]); // 801C462C
  cmps(c,0,(int32_t)c->r[3],0); // 801C4630
  W32(c->r[30]+0x00000004u,c->r[0]); // 801C4634
  if (crb(c,2)) { goto L_801C464C; } // 801C4638
  c->r[3]=R32(c->r[4]+c->r[5]); // 801C463C
  W32(c->r[3]+0x00000004u,c->r[30]); // 801C4640
  W32(c->r[4]+c->r[5],c->r[30]); // 801C4644
  goto L_801C465C; // 801C4648
L_801C464C:;
  c->r[3]=0u+0x80440000u; // 801C464C
  W32(c->r[4]+c->r[5],c->r[30]); // 801C4650
  c->r[3]=c->r[3]+0x00001388u; // 801C4654
  W32(c->r[3]+c->r[5],c->r[30]); // 801C4658
L_801C465C:;
  W32(c->r[30]+0x0000000Cu,c->r[27]); // 801C465C
  c->r[3]=c->r[30]|c->r[30]; // 801C4660
  W32(c->r[30]+0x00000010u,c->r[28]); // 801C4664
  W32(c->r[30]+0x00000014u,c->r[29]); // 801C4668
  c->lr=0x801C4670u; f_801C6F40(c); // 801C466C
L_801C4670:;
  c->r[3]=c->r[31]|c->r[31]; // 801C4670
  c->lr=0x801C4678u; f_80249500(c); // 801C4674
  c->r[11]=c->r[1]+0x00000020u; // 801C4678
  c->r[3]=c->r[30]|c->r[30]; // 801C467C
  c->lr=0x801C4684u; f_800C2E98(c); // 801C4680
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C4684
  c->lr=c->r[0]; // 801C4688
  c->r[1]=c->r[1]+0x00000020u; // 801C468C
  return; // 801C4690
}

// __AXAuxInit
void f_801C46A0(Ctx* __restrict c) {
  trace_call(0x801C46A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C46A0
  c->r[0]=c->lr; // 801C46A4
  c->r[6]=0u+0x80440000u; // 801C46A8
  c->r[5]=0u+0x00000000u; // 801C46AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C46B0
  c->r[6]=c->r[6]+0x00001420u; // 801C46B4
  c->r[0]=0u+0x00000020u; // 801C46B8
  c->r[4]=0u+0x00000001u; // 801C46BC
  c->r[3]=0u+0x00000002u; // 801C46C0
  W32(c->r[13]+0xFFFF99D0u,c->r[5]); // 801C46C4
  c->r[7]=c->r[6]+0x00000000u; // 801C46C8
  c->r[8]=c->r[6]+0x00001200u; // 801C46CC
  W32(c->r[13]+0xFFFF99CCu,c->r[5]); // 801C46D0
  c->r[6]=c->r[6]+0x00002400u; // 801C46D4
  W32(c->r[13]+0xFFFF99C8u,c->r[5]); // 801C46D8
  W32(c->r[13]+0xFFFF99C4u,c->r[5]); // 801C46DC
  W32(c->r[13]+0xFFFF99C0u,c->r[5]); // 801C46E0
  W32(c->r[13]+0xFFFF99BCu,c->r[5]); // 801C46E4
  W32(c->r[13]+0xFFFF99A0u,c->r[5]); // 801C46E8
  W32(c->r[13]+0xFFFF999Cu,c->r[4]); // 801C46EC
  W32(c->r[13]+0xFFFF9998u,c->r[3]); // 801C46F0
  c->ctr=c->r[0]; // 801C46F4
L_801C46F8:;
  W32(c->r[7]+0x00000000u,c->r[5]); // 801C46F8
  W32(c->r[8]+0x00000000u,c->r[5]); // 801C46FC
  W32(c->r[6]+0x00000000u,c->r[5]); // 801C4700
  W32(c->r[7]+0x00000004u,c->r[5]); // 801C4704
  W32(c->r[8]+0x00000004u,c->r[5]); // 801C4708
  W32(c->r[6]+0x00000004u,c->r[5]); // 801C470C
  W32(c->r[7]+0x00000008u,c->r[5]); // 801C4710
  W32(c->r[8]+0x00000008u,c->r[5]); // 801C4714
  W32(c->r[6]+0x00000008u,c->r[5]); // 801C4718
  W32(c->r[7]+0x0000000Cu,c->r[5]); // 801C471C
  W32(c->r[8]+0x0000000Cu,c->r[5]); // 801C4720
  W32(c->r[6]+0x0000000Cu,c->r[5]); // 801C4724
  W32(c->r[7]+0x00000010u,c->r[5]); // 801C4728
  W32(c->r[8]+0x00000010u,c->r[5]); // 801C472C
  W32(c->r[6]+0x00000010u,c->r[5]); // 801C4730
  W32(c->r[7]+0x00000014u,c->r[5]); // 801C4734
  W32(c->r[8]+0x00000014u,c->r[5]); // 801C4738
  W32(c->r[6]+0x00000014u,c->r[5]); // 801C473C
  W32(c->r[7]+0x00000018u,c->r[5]); // 801C4740
  W32(c->r[8]+0x00000018u,c->r[5]); // 801C4744
  W32(c->r[6]+0x00000018u,c->r[5]); // 801C4748
  W32(c->r[7]+0x0000001Cu,c->r[5]); // 801C474C
  W32(c->r[8]+0x0000001Cu,c->r[5]); // 801C4750
  W32(c->r[6]+0x0000001Cu,c->r[5]); // 801C4754
  W32(c->r[7]+0x00000020u,c->r[5]); // 801C4758
  c->r[7]=c->r[7]+0x00000024u; // 801C475C
  W32(c->r[8]+0x00000020u,c->r[5]); // 801C4760
  c->r[8]=c->r[8]+0x00000024u; // 801C4764
  W32(c->r[6]+0x00000020u,c->r[5]); // 801C4768
  c->r[6]=c->r[6]+0x00000024u; // 801C476C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C46F8; } // 801C4770
  c->r[3]=c->r[13]+0xFFFF99DCu; // 801C4774
  c->r[4]=0u+0x00000000u; // 801C4778
  c->r[5]=0u+0x00000003u; // 801C477C
  c->lr=0x801C4784u; f_80004350(c); // 801C4780
  c->r[3]=c->r[13]+0xFFFF99D8u; // 801C4784
  c->r[4]=0u+0x00000000u; // 801C4788
  c->r[5]=0u+0x00000003u; // 801C478C
  c->lr=0x801C4794u; f_80004350(c); // 801C4790
  c->r[3]=c->r[13]+0xFFFF99D4u; // 801C4794
  c->r[4]=0u+0x00000000u; // 801C4798
  c->r[5]=0u+0x00000003u; // 801C479C
  c->lr=0x801C47A4u; f_80004350(c); // 801C47A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C47A4
  c->lr=c->r[0]; // 801C47A8
  c->r[1]=c->r[1]+0x00000010u; // 801C47AC
  return; // 801C47B0
}

// __AXAuxQuit
void f_801C47C0(Ctx* __restrict c) {
  trace_call(0x801C47C0u);
  c->r[0]=0u+0x00000000u; // 801C47C0
  W32(c->r[13]+0xFFFF99D0u,c->r[0]); // 801C47C4
  W32(c->r[13]+0xFFFF99CCu,c->r[0]); // 801C47C8
  W32(c->r[13]+0xFFFF99C8u,c->r[0]); // 801C47CC
  return; // 801C47D0
}

// __AXGetAuxAInput
void f_801C47E0(Ctx* __restrict c) {
  trace_call(0x801C47E0u);
  c->r[0]=R32(c->r[13]+0xFFFF99D0u); // 801C47E0
  cmps(c,0,(int32_t)c->r[0],0); // 801C47E4
  if (crb(c,2)) { goto L_801C4808; } // 801C47E8
  c->r[0]=R32(c->r[13]+0xFFFF99A0u); // 801C47EC
  c->r[4]=0u+0x80440000u; // 801C47F0
  c->r[4]=c->r[4]+0x00001420u; // 801C47F4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 801C47F8
  c->r[0]=c->r[4]+c->r[0]; // 801C47FC
  W32(c->r[3]+0x00000000u,c->r[0]); // 801C4800
  return; // 801C4804
L_801C4808:;
  c->r[0]=0u+0x00000000u; // 801C4808
  W32(c->r[3]+0x00000000u,c->r[0]); // 801C480C
  return; // 801C4810
}

// __AXGetAuxAOutput
void f_801C4820(Ctx* __restrict c) {
  trace_call(0x801C4820u);
  c->r[0]=R32(c->r[13]+0xFFFF999Cu); // 801C4820
  c->r[4]=0u+0x80440000u; // 801C4824
  c->r[4]=c->r[4]+0x00001420u; // 801C4828
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 801C482C
  c->r[0]=c->r[4]+c->r[0]; // 801C4830
  W32(c->r[3]+0x00000000u,c->r[0]); // 801C4834
  return; // 801C4838
}

// __AXGetAuxAInputDpl2
void f_801C4840(Ctx* __restrict c) {
  trace_call(0x801C4840u);
  c->r[0]=R32(c->r[13]+0xFFFF99A0u); // 801C4840
  c->r[4]=0u+0x80440000u; // 801C4844
  c->r[4]=c->r[4]+0x00001420u; // 801C4848
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 801C484C
  c->r[4]=c->r[4]+c->r[0]; // 801C4850
  c->r[0]=c->r[4]+0x00000480u; // 801C4854
  W32(c->r[3]+0x00000000u,c->r[0]); // 801C4858
  return; // 801C485C
}

// __AXGetAuxAOutputDpl2R
void f_801C4860(Ctx* __restrict c) {
  trace_call(0x801C4860u);
  c->r[0]=R32(c->r[13]+0xFFFF999Cu); // 801C4860
  c->r[4]=0u+0x80440000u; // 801C4864
  c->r[4]=c->r[4]+0x00001420u; // 801C4868
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 801C486C
  c->r[4]=c->r[4]+c->r[0]; // 801C4870
  c->r[0]=c->r[4]+0x00000180u; // 801C4874
  W32(c->r[3]+0x00000000u,c->r[0]); // 801C4878
  return; // 801C487C
}

// __AXGetAuxAOutputDpl2Ls
void f_801C4880(Ctx* __restrict c) {
  trace_call(0x801C4880u);
  c->r[0]=R32(c->r[13]+0xFFFF999Cu); // 801C4880
  c->r[4]=0u+0x80440000u; // 801C4884
  c->r[4]=c->r[4]+0x00001420u; // 801C4888
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 801C488C
  c->r[4]=c->r[4]+c->r[0]; // 801C4890
  c->r[0]=c->r[4]+0x00000300u; // 801C4894
  W32(c->r[3]+0x00000000u,c->r[0]); // 801C4898
  return; // 801C489C
}

// __AXGetAuxAOutputDpl2Rs
void f_801C48A0(Ctx* __restrict c) {
  trace_call(0x801C48A0u);
  c->r[0]=R32(c->r[13]+0xFFFF999Cu); // 801C48A0
  c->r[4]=0u+0x80440000u; // 801C48A4
  c->r[4]=c->r[4]+0x00001420u; // 801C48A8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 801C48AC
  c->r[4]=c->r[4]+c->r[0]; // 801C48B0
  c->r[0]=c->r[4]+0x00000480u; // 801C48B4
  W32(c->r[3]+0x00000000u,c->r[0]); // 801C48B8
  return; // 801C48BC
}

// __AXGetAuxBInput
void f_801C48C0(Ctx* __restrict c) {
  trace_call(0x801C48C0u);
  c->r[0]=R32(c->r[13]+0xFFFF99CCu); // 801C48C0
  cmps(c,0,(int32_t)c->r[0],0); // 801C48C4
  if (crb(c,2)) { goto L_801C48E8; } // 801C48C8
  c->r[0]=R32(c->r[13]+0xFFFF99A0u); // 801C48CC
  c->r[4]=0u+0x80440000u; // 801C48D0
  c->r[4]=c->r[4]+0x00002620u; // 801C48D4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 801C48D8
  c->r[0]=c->r[4]+c->r[0]; // 801C48DC
  W32(c->r[3]+0x00000000u,c->r[0]); // 801C48E0
  return; // 801C48E4
L_801C48E8:;
  c->r[0]=0u+0x00000000u; // 801C48E8
  W32(c->r[3]+0x00000000u,c->r[0]); // 801C48EC
  return; // 801C48F0
}

// __AXGetAuxBOutput
void f_801C4900(Ctx* __restrict c) {
  trace_call(0x801C4900u);
  c->r[0]=R32(c->r[13]+0xFFFF999Cu); // 801C4900
  c->r[4]=0u+0x80440000u; // 801C4904
  c->r[4]=c->r[4]+0x00002620u; // 801C4908
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 801C490C
  c->r[0]=c->r[4]+c->r[0]; // 801C4910
  W32(c->r[3]+0x00000000u,c->r[0]); // 801C4914
  return; // 801C4918
}

// __AXGetAuxBInputDpl2
void f_801C4920(Ctx* __restrict c) {
  trace_call(0x801C4920u);
  c->r[0]=R32(c->r[13]+0xFFFF99A0u); // 801C4920
  c->r[4]=0u+0x80440000u; // 801C4924
  c->r[4]=c->r[4]+0x00002620u; // 801C4928
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 801C492C
  c->r[4]=c->r[4]+c->r[0]; // 801C4930
  c->r[0]=c->r[4]+0x00000480u; // 801C4934
  W32(c->r[3]+0x00000000u,c->r[0]); // 801C4938
  return; // 801C493C
}

// __AXGetAuxBOutputDpl2R
void f_801C4940(Ctx* __restrict c) {
  trace_call(0x801C4940u);
  c->r[0]=R32(c->r[13]+0xFFFF999Cu); // 801C4940
  c->r[4]=0u+0x80440000u; // 801C4944
  c->r[4]=c->r[4]+0x00002620u; // 801C4948
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 801C494C
  c->r[4]=c->r[4]+c->r[0]; // 801C4950
  c->r[0]=c->r[4]+0x00000180u; // 801C4954
  W32(c->r[3]+0x00000000u,c->r[0]); // 801C4958
  return; // 801C495C
}

// __AXGetAuxBOutputDpl2Ls
void f_801C4960(Ctx* __restrict c) {
  trace_call(0x801C4960u);
  c->r[0]=R32(c->r[13]+0xFFFF999Cu); // 801C4960
  c->r[4]=0u+0x80440000u; // 801C4964
  c->r[4]=c->r[4]+0x00002620u; // 801C4968
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 801C496C
  c->r[4]=c->r[4]+c->r[0]; // 801C4970
  c->r[0]=c->r[4]+0x00000300u; // 801C4974
  W32(c->r[3]+0x00000000u,c->r[0]); // 801C4978
  return; // 801C497C
}

// __AXGetAuxBOutputDpl2Rs
void f_801C4980(Ctx* __restrict c) {
  trace_call(0x801C4980u);
  c->r[0]=R32(c->r[13]+0xFFFF999Cu); // 801C4980
  c->r[4]=0u+0x80440000u; // 801C4984
  c->r[4]=c->r[4]+0x00002620u; // 801C4988
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 801C498C
  c->r[4]=c->r[4]+c->r[0]; // 801C4990
  c->r[0]=c->r[4]+0x00000480u; // 801C4994
  W32(c->r[3]+0x00000000u,c->r[0]); // 801C4998
  return; // 801C499C
}

// __AXGetAuxCInput
void f_801C49A0(Ctx* __restrict c) {
  trace_call(0x801C49A0u);
  c->r[0]=R32(c->r[13]+0xFFFF99C8u); // 801C49A0
  cmps(c,0,(int32_t)c->r[0],0); // 801C49A4
  if (crb(c,2)) { goto L_801C49C8; } // 801C49A8
  c->r[0]=R32(c->r[13]+0xFFFF99A0u); // 801C49AC
  c->r[4]=0u+0x80440000u; // 801C49B0
  c->r[4]=c->r[4]+0x00003820u; // 801C49B4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1152); // 801C49B8
  c->r[0]=c->r[4]+c->r[0]; // 801C49BC
  W32(c->r[3]+0x00000000u,c->r[0]); // 801C49C0
  return; // 801C49C4
L_801C49C8:;
  c->r[0]=0u+0x00000000u; // 801C49C8
  W32(c->r[3]+0x00000000u,c->r[0]); // 801C49CC
  return; // 801C49D0
}

// __AXGetAuxCOutput
void f_801C49E0(Ctx* __restrict c) {
  trace_call(0x801C49E0u);
  c->r[0]=R32(c->r[13]+0xFFFF999Cu); // 801C49E0
  c->r[4]=0u+0x80440000u; // 801C49E4
  c->r[4]=c->r[4]+0x00003820u; // 801C49E8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1152); // 801C49EC
  c->r[0]=c->r[4]+c->r[0]; // 801C49F0
  W32(c->r[3]+0x00000000u,c->r[0]); // 801C49F4
  return; // 801C49F8
}

// __AXProcessAux
void f_801C4A00(Ctx* __restrict c) {
  trace_call(0x801C4A00u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4A00
  c->r[0]=c->lr; // 801C4A04
  W32(c->r[1]+0x00000064u,c->r[0]); // 801C4A08
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 801C4A0C
  c->r[31]=0u+0x80440000u; // 801C4A10
  c->r[31]=c->r[31]+0x00001420u; // 801C4A14
  W32(c->r[1]+0x00000058u,c->r[30]); // 801C4A18
  c->r[8]=c->r[31]+0x00000000u; // 801C4A1C
  c->r[3]=c->r[31]+0x00001200u; // 801C4A20
  W32(c->r[1]+0x00000054u,c->r[29]); // 801C4A24
  c->r[9]=R32(c->r[13]+0xFFFF99A0u); // 801C4A28
  c->r[7]=R32(c->r[13]+0xFFFF999Cu); // 801C4A2C
  c->r[5]=(uint32_t)((int32_t)c->r[9]*(int32_t)1536); // 801C4A30
  c->r[0]=R32(c->r[13]+0xFFFF99D0u); // 801C4A34
  cmps(c,0,(int32_t)c->r[0],0); // 801C4A38
  c->r[4]=(uint32_t)((int32_t)c->r[7]*(int32_t)1536); // 801C4A3C
  c->r[0]=c->r[8]+c->r[5]; // 801C4A40
  W32(c->r[13]+0xFFFF99B8u,c->r[0]); // 801C4A44
  c->r[0]=c->r[3]+c->r[5]; // 801C4A48
  W32(c->r[13]+0xFFFF99B0u,c->r[0]); // 801C4A4C
  c->r[5]=c->r[3]+c->r[4]; // 801C4A50
  c->r[6]=c->r[8]+c->r[4]; // 801C4A54
  c->r[3]=(uint32_t)((int32_t)c->r[9]*(int32_t)1152); // 801C4A58
  c->r[4]=c->r[31]+0x00002400u; // 801C4A5C
  W32(c->r[13]+0xFFFF99B4u,c->r[6]); // 801C4A60
  c->r[0]=(uint32_t)((int32_t)c->r[7]*(int32_t)1152); // 801C4A64
  W32(c->r[13]+0xFFFF99ACu,c->r[5]); // 801C4A68
  c->r[3]=c->r[4]+c->r[3]; // 801C4A6C
  W32(c->r[13]+0xFFFF99A8u,c->r[3]); // 801C4A70
  c->r[0]=c->r[4]+c->r[0]; // 801C4A74
  W32(c->r[13]+0xFFFF99A4u,c->r[0]); // 801C4A78
  if (crb(c,2)) { goto L_801C4B2C; } // 801C4A7C
  c->r[0]=R32(c->r[13]+0xFFFF99F8u); // 801C4A80
  cmpu(c,0,c->r[0],0x00000002u); // 801C4A84
  if (!crb(c,2)) { goto L_801C4AE0; } // 801C4A88
  c->r[0]=R32(c->r[13]+0xFFFF9998u); // 801C4A8C
  c->r[4]=0u+0x00000600u; // 801C4A90
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 801C4A94
  c->r[3]=c->r[8]+c->r[0]; // 801C4A98
  W32(c->r[1]+0x00000040u,c->r[3]); // 801C4A9C
  c->r[6]=c->r[3]+0x00000180u; // 801C4AA0
  c->r[5]=c->r[3]+0x00000300u; // 801C4AA4
  c->r[0]=c->r[3]+0x00000480u; // 801C4AA8
  W32(c->r[1]+0x00000044u,c->r[6]); // 801C4AAC
  W32(c->r[1]+0x00000048u,c->r[5]); // 801C4AB0
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 801C4AB4
  c->lr=0x801C4ABCu; f_80244E20(c); // 801C4AB8
  c->r[12]=R32(c->r[13]+0xFFFF99D0u); // 801C4ABC
  c->r[3]=c->r[1]+0x00000040u; // 801C4AC0
  c->r[4]=R32(c->r[13]+0xFFFF99C4u); // 801C4AC4
  c->ctr=c->r[12]; // 801C4AC8
  if (true) { c->lr=0x801C4AD0u; dispatch(c,c->ctr); } // 801C4ACC
  c->r[3]=R32(c->r[1]+0x00000040u); // 801C4AD0
  c->r[4]=0u+0x00000600u; // 801C4AD4
  c->lr=0x801C4ADCu; f_80244EB0(c); // 801C4AD8
  goto L_801C4B70; // 801C4ADC
L_801C4AE0:;
  c->r[0]=R32(c->r[13]+0xFFFF9998u); // 801C4AE0
  c->r[4]=0u+0x00000480u; // 801C4AE4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)1536); // 801C4AE8
  c->r[3]=c->r[8]+c->r[0]; // 801C4AEC
  W32(c->r[1]+0x00000030u,c->r[3]); // 801C4AF0
  c->r[5]=c->r[3]+0x00000180u; // 801C4AF4
  c->r[0]=c->r[3]+0x00000300u; // 801C4AF8
  W32(c->r[1]+0x00000034u,c->r[5]); // 801C4AFC
  W32(c->r[1]+0x00000038u,c->r[0]); // 801C4B00
  c->lr=0x801C4B08u; f_80244E20(c); // 801C4B04
  c->r[12]=R32(c->r[13]+0xFFFF99D0u); // 801C4B08
  c->r[3]=c->r[1]+0x00000030u; // 801C4B0C
  c->r[4]=R32(c->r[13]+0xFFFF99C4u); // 801C4B10
  c->ctr=c->r[12]; // 801C4B14
  if (true) { c->lr=0x801C4B1Cu; dispatch(c,c->ctr); } // 801C4B18
  c->r[3]=R32(c->r[1]+0x00000030u); // 801C4B1C
  c->r[4]=0u+0x00000480u; // 801C4B20
  c->lr=0x801C4B28u; f_80244EB0(c); // 801C4B24
  goto L_801C4B70; // 801C4B28
L_801C4B2C:;
  c->r[3]=R32(c->r[13]+0xFFFF9998u); // 801C4B2C
  c->r[30]=c->r[13]+0xFFFF99DCu; // 801C4B30
  c->r[0]=R8(c->r[30]+c->r[3]); // 801C4B34
  cmps(c,0,(int32_t)c->r[0],0); // 801C4B38
  if (crb(c,2)) { goto L_801C4B70; } // 801C4B3C
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)1536); // 801C4B40
  c->r[4]=0u+0x00000000u; // 801C4B44
  c->r[5]=0u+0x00000600u; // 801C4B48
  c->r[29]=c->r[8]+c->r[0]; // 801C4B4C
  c->r[3]=c->r[29]|c->r[29]; // 801C4B50
  c->lr=0x801C4B58u; f_80004350(c); // 801C4B54
  c->r[3]=c->r[29]|c->r[29]; // 801C4B58
  c->r[4]=0u+0x00000600u; // 801C4B5C
  c->lr=0x801C4B64u; f_80244E50(c); // 801C4B60
  c->r[0]=R32(c->r[13]+0xFFFF9998u); // 801C4B64
  c->r[3]=0u+0x00000000u; // 801C4B68
  W8(c->r[30]+c->r[0],c->r[3]); // 801C4B6C
L_801C4B70:;
  c->r[0]=R32(c->r[13]+0xFFFF99CCu); // 801C4B70
  cmps(c,0,(int32_t)c->r[0],0); // 801C4B74
  if (crb(c,2)) { goto L_801C4C30; } // 801C4B78
  c->r[0]=R32(c->r[13]+0xFFFF99F8u); // 801C4B7C
  cmpu(c,0,c->r[0],0x00000002u); // 801C4B80
  if (!crb(c,2)) { goto L_801C4BE0; } // 801C4B84
  c->r[3]=R32(c->r[13]+0xFFFF9998u); // 801C4B88
  c->r[0]=c->r[31]+0x00001200u; // 801C4B8C
  c->r[4]=0u+0x00000600u; // 801C4B90
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)1536); // 801C4B94
  c->r[3]=c->r[0]+c->r[3]; // 801C4B98
  W32(c->r[1]+0x00000020u,c->r[3]); // 801C4B9C
  c->r[6]=c->r[3]+0x00000180u; // 801C4BA0
  c->r[5]=c->r[3]+0x00000300u; // 801C4BA4
  c->r[0]=c->r[3]+0x00000480u; // 801C4BA8
  W32(c->r[1]+0x00000024u,c->r[6]); // 801C4BAC
  W32(c->r[1]+0x00000028u,c->r[5]); // 801C4BB0
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 801C4BB4
  c->lr=0x801C4BBCu; f_80244E20(c); // 801C4BB8
  c->r[12]=R32(c->r[13]+0xFFFF99CCu); // 801C4BBC
  c->r[3]=c->r[1]+0x00000020u; // 801C4BC0
  c->r[4]=R32(c->r[13]+0xFFFF99C0u); // 801C4BC4
  c->ctr=c->r[12]; // 801C4BC8
  if (true) { c->lr=0x801C4BD0u; dispatch(c,c->ctr); } // 801C4BCC
  c->r[3]=R32(c->r[1]+0x00000020u); // 801C4BD0
  c->r[4]=0u+0x00000600u; // 801C4BD4
  c->lr=0x801C4BDCu; f_80244EB0(c); // 801C4BD8
  goto L_801C4C78; // 801C4BDC
L_801C4BE0:;
  c->r[3]=R32(c->r[13]+0xFFFF9998u); // 801C4BE0
  c->r[0]=c->r[31]+0x00001200u; // 801C4BE4
  c->r[4]=0u+0x00000480u; // 801C4BE8
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)1536); // 801C4BEC
  c->r[3]=c->r[0]+c->r[3]; // 801C4BF0
  W32(c->r[1]+0x00000014u,c->r[3]); // 801C4BF4
  c->r[5]=c->r[3]+0x00000180u; // 801C4BF8
  c->r[0]=c->r[3]+0x00000300u; // 801C4BFC
  W32(c->r[1]+0x00000018u,c->r[5]); // 801C4C00
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801C4C04
  c->lr=0x801C4C0Cu; f_80244E20(c); // 801C4C08
  c->r[12]=R32(c->r[13]+0xFFFF99CCu); // 801C4C0C
  c->r[3]=c->r[1]+0x00000014u; // 801C4C10
  c->r[4]=R32(c->r[13]+0xFFFF99C0u); // 801C4C14
  c->ctr=c->r[12]; // 801C4C18
  if (true) { c->lr=0x801C4C20u; dispatch(c,c->ctr); } // 801C4C1C
  c->r[3]=R32(c->r[1]+0x00000014u); // 801C4C20
  c->r[4]=0u+0x00000480u; // 801C4C24
  c->lr=0x801C4C2Cu; f_80244EB0(c); // 801C4C28
  goto L_801C4C78; // 801C4C2C
L_801C4C30:;
  c->r[3]=R32(c->r[13]+0xFFFF9998u); // 801C4C30
  c->r[30]=c->r[13]+0xFFFF99D8u; // 801C4C34
  c->r[0]=R8(c->r[30]+c->r[3]); // 801C4C38
  cmps(c,0,(int32_t)c->r[0],0); // 801C4C3C
  if (crb(c,2)) { goto L_801C4C78; } // 801C4C40
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)1536); // 801C4C44
  c->r[0]=c->r[31]+0x00001200u; // 801C4C48
  c->r[4]=0u+0x00000000u; // 801C4C4C
  c->r[5]=0u+0x00000600u; // 801C4C50
  c->r[29]=c->r[0]+c->r[3]; // 801C4C54
  c->r[3]=c->r[29]|c->r[29]; // 801C4C58
  c->lr=0x801C4C60u; f_80004350(c); // 801C4C5C
  c->r[3]=c->r[29]|c->r[29]; // 801C4C60
  c->r[4]=0u+0x00000600u; // 801C4C64
  c->lr=0x801C4C6Cu; f_80244E50(c); // 801C4C68
  c->r[0]=R32(c->r[13]+0xFFFF9998u); // 801C4C6C
  c->r[3]=0u+0x00000000u; // 801C4C70
  W8(c->r[30]+c->r[0],c->r[3]); // 801C4C74
L_801C4C78:;
  c->r[0]=R32(c->r[13]+0xFFFF99C8u); // 801C4C78
  cmps(c,0,(int32_t)c->r[0],0); // 801C4C7C
  if (crb(c,2)) { goto L_801C4CE0; } // 801C4C80
  c->r[0]=R32(c->r[13]+0xFFFF99F8u); // 801C4C84
  cmpu(c,0,c->r[0],0x00000002u); // 801C4C88
  if (crb(c,2)) { goto L_801C4CE0; } // 801C4C8C
  c->r[3]=R32(c->r[13]+0xFFFF9998u); // 801C4C90
  c->r[0]=c->r[31]+0x00002400u; // 801C4C94
  c->r[4]=0u+0x00000480u; // 801C4C98
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)1152); // 801C4C9C
  c->r[3]=c->r[0]+c->r[3]; // 801C4CA0
  W32(c->r[1]+0x00000008u,c->r[3]); // 801C4CA4
  c->r[5]=c->r[3]+0x00000180u; // 801C4CA8
  c->r[0]=c->r[3]+0x00000300u; // 801C4CAC
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 801C4CB0
  W32(c->r[1]+0x00000010u,c->r[0]); // 801C4CB4
  c->lr=0x801C4CBCu; f_80244E20(c); // 801C4CB8
  c->r[12]=R32(c->r[13]+0xFFFF99C8u); // 801C4CBC
  c->r[3]=c->r[1]+0x00000008u; // 801C4CC0
  c->r[4]=R32(c->r[13]+0xFFFF99BCu); // 801C4CC4
  c->ctr=c->r[12]; // 801C4CC8
  if (true) { c->lr=0x801C4CD0u; dispatch(c,c->ctr); } // 801C4CCC
  c->r[3]=R32(c->r[1]+0x00000008u); // 801C4CD0
  c->r[4]=0u+0x00000480u; // 801C4CD4
  c->lr=0x801C4CDCu; f_80244EB0(c); // 801C4CD8
  goto L_801C4D34; // 801C4CDC
L_801C4CE0:;
  c->r[0]=R32(c->r[13]+0xFFFF99C8u); // 801C4CE0
  cmps(c,0,(int32_t)c->r[0],0); // 801C4CE4
  if (!crb(c,2)) { goto L_801C4D34; } // 801C4CE8
  c->r[3]=R32(c->r[13]+0xFFFF9998u); // 801C4CEC
  c->r[30]=c->r[13]+0xFFFF99D4u; // 801C4CF0
  c->r[0]=R8(c->r[30]+c->r[3]); // 801C4CF4
  cmps(c,0,(int32_t)c->r[0],0); // 801C4CF8
  if (crb(c,2)) { goto L_801C4D34; } // 801C4CFC
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)1152); // 801C4D00
  c->r[0]=c->r[31]+0x00002400u; // 801C4D04
  c->r[4]=0u+0x00000000u; // 801C4D08
  c->r[5]=0u+0x00000480u; // 801C4D0C
  c->r[29]=c->r[0]+c->r[3]; // 801C4D10
  c->r[3]=c->r[29]|c->r[29]; // 801C4D14
  c->lr=0x801C4D1Cu; f_80004350(c); // 801C4D18
  c->r[3]=c->r[29]|c->r[29]; // 801C4D1C
  c->r[4]=0u+0x00000480u; // 801C4D20
  c->lr=0x801C4D28u; f_80244E50(c); // 801C4D24
  c->r[0]=R32(c->r[13]+0xFFFF9998u); // 801C4D28
  c->r[3]=0u+0x00000000u; // 801C4D2C
  W8(c->r[30]+c->r[0],c->r[3]); // 801C4D30
L_801C4D34:;
  c->r[3]=0u+0xAAAB0000u; // 801C4D34
  c->r[5]=R32(c->r[13]+0xFFFF99A0u); // 801C4D38
  c->r[0]=c->r[3]+0xFFFFAAABu; // 801C4D3C
  c->r[3]=R32(c->r[13]+0xFFFF9998u); // 801C4D40
  c->r[4]=R32(c->r[13]+0xFFFF999Cu); // 801C4D44
  c->r[7]=c->r[5]+0x00000001u; // 801C4D48
  c->r[3]=c->r[3]+0x00000001u; // 801C4D4C
  c->r[5]=c->r[4]+0x00000001u; // 801C4D50
  c->r[6]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[7])>>32); // 801C4D54
  c->r[4]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[5])>>32); // 801C4D58
  c->r[6]=rotl(c->r[6],31)&0x7FFFFFFFu; // 801C4D5C
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[3])>>32); // 801C4D60
  c->r[4]=rotl(c->r[4],31)&0x7FFFFFFFu; // 801C4D64
  c->r[6]=(uint32_t)((int32_t)c->r[6]*(int32_t)3); // 801C4D68
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801C4D6C
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)3); // 801C4D70
  c->r[6]=c->r[7]-c->r[6]; // 801C4D74
  W32(c->r[13]+0xFFFF99A0u,c->r[6]); // 801C4D78
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 801C4D7C
  c->r[4]=c->r[5]-c->r[4]; // 801C4D80
  W32(c->r[13]+0xFFFF999Cu,c->r[4]); // 801C4D84
  c->r[0]=c->r[3]-c->r[0]; // 801C4D88
  W32(c->r[13]+0xFFFF9998u,c->r[0]); // 801C4D8C
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 801C4D90
  c->r[30]=R32(c->r[1]+0x00000058u); // 801C4D94
  c->r[29]=R32(c->r[1]+0x00000054u); // 801C4D98
  c->r[0]=R32(c->r[1]+0x00000064u); // 801C4D9C
  c->lr=c->r[0]; // 801C4DA0
  c->r[1]=c->r[1]+0x00000060u; // 801C4DA4
  return; // 801C4DA8
}

// AXRegisterAuxACallback
void f_801C4DB0(Ctx* __restrict c) {
  trace_call(0x801C4DB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4DB0
  c->r[0]=c->lr; // 801C4DB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C4DB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C4DBC
  c->r[31]=c->r[3]|c->r[3]; // 801C4DC0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C4DC4
  c->r[30]=c->r[4]|c->r[4]; // 801C4DC8
  c->lr=0x801C4DD0u; f_802494C0(c); // 801C4DCC
  cmps(c,0,(int32_t)c->r[31],0); // 801C4DD0
  W32(c->r[13]+0xFFFF99D0u,c->r[31]); // 801C4DD4
  c->r[31]=c->r[3]|c->r[3]; // 801C4DD8
  W32(c->r[13]+0xFFFF99C4u,c->r[30]); // 801C4DDC
  if (!crb(c,2)) { goto L_801C4DF4; } // 801C4DE0
  c->r[3]=c->r[13]+0xFFFF99DCu; // 801C4DE4
  c->r[4]=0u+0x00000001u; // 801C4DE8
  c->r[5]=0u+0x00000003u; // 801C4DEC
  c->lr=0x801C4DF4u; f_80004350(c); // 801C4DF0
L_801C4DF4:;
  c->r[3]=c->r[31]|c->r[31]; // 801C4DF4
  c->lr=0x801C4DFCu; f_80249500(c); // 801C4DF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C4DFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C4E00
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C4E04
  c->lr=c->r[0]; // 801C4E08
  c->r[1]=c->r[1]+0x00000010u; // 801C4E0C
  return; // 801C4E10
}

// AXRegisterAuxBCallback
void f_801C4E20(Ctx* __restrict c) {
  trace_call(0x801C4E20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4E20
  c->r[0]=c->lr; // 801C4E24
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C4E28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C4E2C
  c->r[31]=c->r[3]|c->r[3]; // 801C4E30
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C4E34
  c->r[30]=c->r[4]|c->r[4]; // 801C4E38
  c->lr=0x801C4E40u; f_802494C0(c); // 801C4E3C
  cmps(c,0,(int32_t)c->r[31],0); // 801C4E40
  W32(c->r[13]+0xFFFF99CCu,c->r[31]); // 801C4E44
  c->r[31]=c->r[3]|c->r[3]; // 801C4E48
  W32(c->r[13]+0xFFFF99C0u,c->r[30]); // 801C4E4C
  if (!crb(c,2)) { goto L_801C4E64; } // 801C4E50
  c->r[3]=c->r[13]+0xFFFF99D8u; // 801C4E54
  c->r[4]=0u+0x00000001u; // 801C4E58
  c->r[5]=0u+0x00000003u; // 801C4E5C
  c->lr=0x801C4E64u; f_80004350(c); // 801C4E60
L_801C4E64:;
  c->r[3]=c->r[31]|c->r[31]; // 801C4E64
  c->lr=0x801C4E6Cu; f_80249500(c); // 801C4E68
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C4E6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C4E70
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C4E74
  c->lr=c->r[0]; // 801C4E78
  c->r[1]=c->r[1]+0x00000010u; // 801C4E7C
  return; // 801C4E80
}

// AXRegisterAuxCCallback
void f_801C4E90(Ctx* __restrict c) {
  trace_call(0x801C4E90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4E90
  c->r[0]=c->lr; // 801C4E94
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C4E98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C4E9C
  c->r[31]=c->r[3]|c->r[3]; // 801C4EA0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C4EA4
  c->r[30]=c->r[4]|c->r[4]; // 801C4EA8
  c->lr=0x801C4EB0u; f_802494C0(c); // 801C4EAC
  cmps(c,0,(int32_t)c->r[31],0); // 801C4EB0
  W32(c->r[13]+0xFFFF99C8u,c->r[31]); // 801C4EB4
  c->r[31]=c->r[3]|c->r[3]; // 801C4EB8
  W32(c->r[13]+0xFFFF99BCu,c->r[30]); // 801C4EBC
  if (!crb(c,2)) { goto L_801C4ED4; } // 801C4EC0
  c->r[3]=c->r[13]+0xFFFF99D4u; // 801C4EC4
  c->r[4]=0u+0x00000001u; // 801C4EC8
  c->r[5]=0u+0x00000003u; // 801C4ECC
  c->lr=0x801C4ED4u; f_80004350(c); // 801C4ED0
L_801C4ED4:;
  c->r[3]=c->r[31]|c->r[31]; // 801C4ED4
  c->lr=0x801C4EDCu; f_80249500(c); // 801C4ED8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C4EDC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C4EE0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C4EE4
  c->lr=c->r[0]; // 801C4EE8
  c->r[1]=c->r[1]+0x00000010u; // 801C4EEC
  return; // 801C4EF0
}

// AXGetAuxACallback
void f_801C4F00(Ctx* __restrict c) {
  trace_call(0x801C4F00u);
  c->r[0]=R32(c->r[13]+0xFFFF99D0u); // 801C4F00
  W32(c->r[3]+0x00000000u,c->r[0]); // 801C4F04
  c->r[0]=R32(c->r[13]+0xFFFF99C4u); // 801C4F08
  W32(c->r[4]+0x00000000u,c->r[0]); // 801C4F0C
  return; // 801C4F10
}

// __AXGetCommandListCycles
void f_801C4F20(Ctx* __restrict c) {
  trace_call(0x801C4F20u);
  c->r[3]=R32(c->r[13]+0xFFFF99F4u); // 801C4F20
  return; // 801C4F24
}

// __AXGetCommandListAddress
void f_801C4F30(Ctx* __restrict c) {
  trace_call(0x801C4F30u);
  c->r[5]=R32(c->r[13]+0xFFFF9A00u); // 801C4F30
  c->r[4]=0u+0x80440000u; // 801C4F34
  c->r[4]=c->r[4]+0x000045A0u; // 801C4F38
  c->r[3]=c->r[5]+0x00000001u; // 801C4F3C
  c->r[5]=rotl(c->r[5],7)&0xFFFFFF80u; // 801C4F40
  c->r[0]=rotl(c->r[3],7)&0x00000080u; // 801C4F44
  c->r[3]=rotl(c->r[3],0)&0x00000001u; // 801C4F48
  W32(c->r[13]+0xFFFF9A00u,c->r[3]); // 801C4F4C
  c->r[0]=c->r[4]+c->r[0]; // 801C4F50
  W32(c->r[13]+0xFFFF99FCu,c->r[0]); // 801C4F54
  c->r[3]=c->r[4]+c->r[5]; // 801C4F58
  return; // 801C4F5C
}

// __AXNextFrame
void f_801C4F60(Ctx* __restrict c) {
  trace_call(0x801C4F60u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C4F60
  c->r[0]=c->lr; // 801C4F64
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C4F68
  c->r[0]=0u+0x00001E83u; // 801C4F6C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C4F70
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C4F74
  c->r[30]=c->r[5]|c->r[5]; // 801C4F78
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C4F7C
  c->r[29]=c->r[4]|c->r[4]; // 801C4F80
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C4F84
  c->r[28]=c->r[3]|c->r[3]; // 801C4F88
  W32(c->r[13]+0xFFFF99F4u,c->r[0]); // 801C4F8C
  c->r[31]=R32(c->r[13]+0xFFFF99FCu); // 801C4F90
  c->lr=0x801C4F98u; f_801C6280(c); // 801C4F94
  W32(c->r[1]+0x00000008u,c->r[3]); // 801C4F98
  c->r[0]=0u+0x00000000u; // 801C4F9C
  c->r[3]=R32(c->r[13]+0xFFFF99FCu); // 801C4FA0
  W16(c->r[3]+0x00000000u,c->r[0]); // 801C4FA4
  c->r[3]=R32(c->r[13]+0xFFFF99FCu); // 801C4FA8
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C4FAC
  c->r[3]=c->r[3]+0x00000002u; // 801C4FB0
  W32(c->r[13]+0xFFFF99FCu,c->r[3]); // 801C4FB4
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801C4FB8
  W16(c->r[3]+0x00000000u,c->r[0]); // 801C4FBC
  c->r[3]=R32(c->r[13]+0xFFFF99FCu); // 801C4FC0
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C4FC4
  c->r[3]=c->r[3]+0x00000002u; // 801C4FC8
  W32(c->r[13]+0xFFFF99FCu,c->r[3]); // 801C4FCC
  W16(c->r[3]+0x00000000u,c->r[0]); // 801C4FD0
  c->r[5]=R32(c->r[13]+0xFFFF99F8u); // 801C4FD4
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C4FD8
  c->r[3]=R32(c->r[13]+0xFFFF99F4u); // 801C4FDC
  cmps(c,0,(int32_t)c->r[5],0); // 801C4FE0
  c->r[4]=c->r[4]+0x00000002u; // 801C4FE4
  W32(c->r[13]+0xFFFF99FCu,c->r[4]); // 801C4FE8
  c->r[0]=c->r[3]+0x0000101Eu; // 801C4FEC
  W32(c->r[13]+0xFFFF99F4u,c->r[0]); // 801C4FF0
  if (crb(c,2)) { goto L_801C500C; } // 801C4FF4
  cmpu(c,0,c->r[5],0x00000001u); // 801C4FF8
  if (crb(c,2)) { goto L_801C5054; } // 801C4FFC
  cmpu(c,0,c->r[5],0x00000002u); // 801C5000
  if (crb(c,2)) { goto L_801C509C; } // 801C5004
  goto L_801C50E0; // 801C5008
L_801C500C:;
  c->r[0]=0u+0x00000001u; // 801C500C
  W16(c->r[4]+0x00000000u,c->r[0]); // 801C5010
  c->r[0]=rotl(c->r[28],16)&0x0000FFFFu; // 801C5014
  c->r[3]=R32(c->r[13]+0xFFFF99FCu); // 801C5018
  c->r[3]=c->r[3]+0x00000002u; // 801C501C
  W32(c->r[13]+0xFFFF99FCu,c->r[3]); // 801C5020
  W16(c->r[3]+0x00000000u,c->r[0]); // 801C5024
  c->r[3]=R32(c->r[13]+0xFFFF99FCu); // 801C5028
  c->r[3]=c->r[3]+0x00000002u; // 801C502C
  W32(c->r[13]+0xFFFF99FCu,c->r[3]); // 801C5030
  W16(c->r[3]+0x00000000u,c->r[28]); // 801C5034
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C5038
  c->r[3]=R32(c->r[13]+0xFFFF99F4u); // 801C503C
  c->r[5]=c->r[4]+0x00000002u; // 801C5040
  W32(c->r[13]+0xFFFF99FCu,c->r[5]); // 801C5044
  c->r[0]=c->r[3]+0x000002DDu; // 801C5048
  W32(c->r[13]+0xFFFF99F4u,c->r[0]); // 801C504C
  goto L_801C50E0; // 801C5050
L_801C5054:;
  c->r[0]=0u+0x00000002u; // 801C5054
  W16(c->r[4]+0x00000000u,c->r[0]); // 801C5058
  c->r[0]=rotl(c->r[28],16)&0x0000FFFFu; // 801C505C
  c->r[3]=R32(c->r[13]+0xFFFF99FCu); // 801C5060
  c->r[3]=c->r[3]+0x00000002u; // 801C5064
  W32(c->r[13]+0xFFFF99FCu,c->r[3]); // 801C5068
  W16(c->r[3]+0x00000000u,c->r[0]); // 801C506C
  c->r[3]=R32(c->r[13]+0xFFFF99FCu); // 801C5070
  c->r[3]=c->r[3]+0x00000002u; // 801C5074
  W32(c->r[13]+0xFFFF99FCu,c->r[3]); // 801C5078
  W16(c->r[3]+0x00000000u,c->r[28]); // 801C507C
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C5080
  c->r[3]=R32(c->r[13]+0xFFFF99F4u); // 801C5084
  c->r[5]=c->r[4]+0x00000002u; // 801C5088
  W32(c->r[13]+0xFFFF99FCu,c->r[5]); // 801C508C
  c->r[0]=c->r[3]+0x0000033Du; // 801C5090
  W32(c->r[13]+0xFFFF99F4u,c->r[0]); // 801C5094
  goto L_801C50E0; // 801C5098
L_801C509C:;
  c->r[0]=0u+0x00000003u; // 801C509C
  W16(c->r[4]+0x00000000u,c->r[0]); // 801C50A0
  c->r[0]=rotl(c->r[28],16)&0x0000FFFFu; // 801C50A4
  c->r[3]=R32(c->r[13]+0xFFFF99FCu); // 801C50A8
  c->r[3]=c->r[3]+0x00000002u; // 801C50AC
  W32(c->r[13]+0xFFFF99FCu,c->r[3]); // 801C50B0
  W16(c->r[3]+0x00000000u,c->r[0]); // 801C50B4
  c->r[3]=R32(c->r[13]+0xFFFF99FCu); // 801C50B8
  c->r[3]=c->r[3]+0x00000002u; // 801C50BC
  W32(c->r[13]+0xFFFF99FCu,c->r[3]); // 801C50C0
  W16(c->r[3]+0x00000000u,c->r[28]); // 801C50C4
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C50C8
  c->r[3]=R32(c->r[13]+0xFFFF99F4u); // 801C50CC
  c->r[5]=c->r[4]+0x00000002u; // 801C50D0
  W32(c->r[13]+0xFFFF99FCu,c->r[5]); // 801C50D4
  c->r[0]=c->r[3]+0x0000039Du; // 801C50D8
  W32(c->r[13]+0xFFFF99F4u,c->r[0]); // 801C50DC
L_801C50E0:;
  c->lr=0x801C50E4u; f_801C6F30(c); // 801C50E0
  W32(c->r[1]+0x00000008u,c->r[3]); // 801C50E4
  c->r[0]=0u+0x00000004u; // 801C50E8
  c->r[3]=R32(c->r[13]+0xFFFF99FCu); // 801C50EC
  W16(c->r[3]+0x00000000u,c->r[0]); // 801C50F0
  c->r[3]=R32(c->r[13]+0xFFFF99FCu); // 801C50F4
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C50F8
  c->r[3]=c->r[3]+0x00000002u; // 801C50FC
  W32(c->r[13]+0xFFFF99FCu,c->r[3]); // 801C5100
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801C5104
  W16(c->r[3]+0x00000000u,c->r[0]); // 801C5108
  c->r[3]=R32(c->r[13]+0xFFFF99FCu); // 801C510C
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C5110
  c->r[3]=c->r[3]+0x00000002u; // 801C5114
  W32(c->r[13]+0xFFFF99FCu,c->r[3]); // 801C5118
  W16(c->r[3]+0x00000000u,c->r[0]); // 801C511C
  c->r[0]=R32(c->r[13]+0xFFFF99F8u); // 801C5120
  c->r[3]=R32(c->r[13]+0xFFFF99FCu); // 801C5124
  cmpu(c,0,c->r[0],0x00000002u); // 801C5128
  c->r[5]=c->r[3]+0x00000002u; // 801C512C
  W32(c->r[13]+0xFFFF99FCu,c->r[5]); // 801C5130
  if (!crb(c,2)) { goto L_801C545C; } // 801C5134
  c->r[3]=c->r[1]+0x00000008u; // 801C5138
  c->lr=0x801C5140u; f_801C47E0(c); // 801C513C
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C5140
  cmps(c,0,(int32_t)c->r[0],0); // 801C5144
  if (crb(c,2)) { goto L_801C52C8; } // 801C5148
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C514C
  c->r[0]=0u+0x00000008u; // 801C5150
  c->r[3]=c->r[1]+0x00000008u; // 801C5154
  W16(c->r[4]+0x00000000u,c->r[0]); // 801C5158
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C515C
  c->r[0]=R16(c->r[13]+0xFFFF99E4u); // 801C5160
  c->r[4]=c->r[4]+0x00000002u; // 801C5164
  W32(c->r[13]+0xFFFF99FCu,c->r[4]); // 801C5168
  W16(c->r[4]+0x00000000u,c->r[0]); // 801C516C
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C5170
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C5174
  c->r[4]=c->r[4]+0x00000002u; // 801C5178
  W32(c->r[13]+0xFFFF99FCu,c->r[4]); // 801C517C
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801C5180
  W16(c->r[4]+0x00000000u,c->r[0]); // 801C5184
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C5188
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C518C
  c->r[4]=c->r[4]+0x00000002u; // 801C5190
  W32(c->r[13]+0xFFFF99FCu,c->r[4]); // 801C5194
  W16(c->r[4]+0x00000000u,c->r[0]); // 801C5198
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C519C
  c->r[5]=c->r[4]+0x00000002u; // 801C51A0
  W32(c->r[13]+0xFFFF99FCu,c->r[5]); // 801C51A4
  c->lr=0x801C51ACu; f_801C4840(c); // 801C51A8
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C51AC
  c->r[3]=c->r[1]+0x00000008u; // 801C51B0
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C51B4
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801C51B8
  W16(c->r[4]+0x00000000u,c->r[0]); // 801C51BC
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C51C0
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C51C4
  c->r[4]=c->r[4]+0x00000002u; // 801C51C8
  W32(c->r[13]+0xFFFF99FCu,c->r[4]); // 801C51CC
  W16(c->r[4]+0x00000000u,c->r[0]); // 801C51D0
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C51D4
  c->r[5]=c->r[4]+0x00000002u; // 801C51D8
  W32(c->r[13]+0xFFFF99FCu,c->r[5]); // 801C51DC
  c->lr=0x801C51E4u; f_801C4820(c); // 801C51E0
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C51E4
  c->r[3]=c->r[1]+0x00000008u; // 801C51E8
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C51EC
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801C51F0
  W16(c->r[4]+0x00000000u,c->r[0]); // 801C51F4
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C51F8
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C51FC
  c->r[4]=c->r[4]+0x00000002u; // 801C5200
  W32(c->r[13]+0xFFFF99FCu,c->r[4]); // 801C5204
  W16(c->r[4]+0x00000000u,c->r[0]); // 801C5208
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C520C
  c->r[5]=c->r[4]+0x00000002u; // 801C5210
  W32(c->r[13]+0xFFFF99FCu,c->r[5]); // 801C5214
  c->lr=0x801C521Cu; f_801C4860(c); // 801C5218
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C521C
  c->r[3]=c->r[1]+0x00000008u; // 801C5220
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C5224
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801C5228
  W16(c->r[4]+0x00000000u,c->r[0]); // 801C522C
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C5230
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C5234
  c->r[4]=c->r[4]+0x00000002u; // 801C5238
  W32(c->r[13]+0xFFFF99FCu,c->r[4]); // 801C523C
  W16(c->r[4]+0x00000000u,c->r[0]); // 801C5240
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C5244
  c->r[5]=c->r[4]+0x00000002u; // 801C5248
  W32(c->r[13]+0xFFFF99FCu,c->r[5]); // 801C524C
  c->lr=0x801C5254u; f_801C4880(c); // 801C5250
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C5254
  c->r[3]=c->r[1]+0x00000008u; // 801C5258
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C525C
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801C5260
  W16(c->r[4]+0x00000000u,c->r[0]); // 801C5264
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C5268
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C526C
  c->r[4]=c->r[4]+0x00000002u; // 801C5270
  W32(c->r[13]+0xFFFF99FCu,c->r[4]); // 801C5274
  W16(c->r[4]+0x00000000u,c->r[0]); // 801C5278
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C527C
  c->r[5]=c->r[4]+0x00000002u; // 801C5280
  W32(c->r[13]+0xFFFF99FCu,c->r[5]); // 801C5284
  c->lr=0x801C528Cu; f_801C48A0(c); // 801C5288
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C528C
  c->r[3]=R32(c->r[13]+0xFFFF99FCu); // 801C5290
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801C5294
  W16(c->r[3]+0x00000000u,c->r[0]); // 801C5298
  c->r[3]=R32(c->r[13]+0xFFFF99FCu); // 801C529C
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C52A0
  c->r[3]=c->r[3]+0x00000002u; // 801C52A4
  W32(c->r[13]+0xFFFF99FCu,c->r[3]); // 801C52A8
  W16(c->r[3]+0x00000000u,c->r[0]); // 801C52AC
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C52B0
  c->r[3]=R32(c->r[13]+0xFFFF99F4u); // 801C52B4
  c->r[5]=c->r[4]+0x00000002u; // 801C52B8
  W32(c->r[13]+0xFFFF99FCu,c->r[5]); // 801C52BC
  c->r[0]=c->r[3]+0x00000BDCu; // 801C52C0
  W32(c->r[13]+0xFFFF99F4u,c->r[0]); // 801C52C4
L_801C52C8:;
  c->r[3]=c->r[1]+0x00000008u; // 801C52C8
  c->lr=0x801C52D0u; f_801C48C0(c); // 801C52CC
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C52D0
  cmps(c,0,(int32_t)c->r[0],0); // 801C52D4
  if (crb(c,2)) { goto L_801C566C; } // 801C52D8
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C52DC
  c->r[0]=0u+0x00000009u; // 801C52E0
  c->r[3]=c->r[1]+0x00000008u; // 801C52E4
  W16(c->r[4]+0x00000000u,c->r[0]); // 801C52E8
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C52EC
  c->r[0]=R16(c->r[13]+0xFFFF99E2u); // 801C52F0
  c->r[4]=c->r[4]+0x00000002u; // 801C52F4
  W32(c->r[13]+0xFFFF99FCu,c->r[4]); // 801C52F8
  W16(c->r[4]+0x00000000u,c->r[0]); // 801C52FC
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C5300
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C5304
  c->r[4]=c->r[4]+0x00000002u; // 801C5308
  W32(c->r[13]+0xFFFF99FCu,c->r[4]); // 801C530C
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801C5310
  W16(c->r[4]+0x00000000u,c->r[0]); // 801C5314
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C5318
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C531C
  c->r[4]=c->r[4]+0x00000002u; // 801C5320
  W32(c->r[13]+0xFFFF99FCu,c->r[4]); // 801C5324
  W16(c->r[4]+0x00000000u,c->r[0]); // 801C5328
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C532C
  c->r[5]=c->r[4]+0x00000002u; // 801C5330
  W32(c->r[13]+0xFFFF99FCu,c->r[5]); // 801C5334
  c->lr=0x801C533Cu; f_801C4920(c); // 801C5338
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C533C
  c->r[3]=c->r[1]+0x00000008u; // 801C5340
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C5344
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801C5348
  W16(c->r[4]+0x00000000u,c->r[0]); // 801C534C
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C5350
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C5354
  c->r[4]=c->r[4]+0x00000002u; // 801C5358
  W32(c->r[13]+0xFFFF99FCu,c->r[4]); // 801C535C
  W16(c->r[4]+0x00000000u,c->r[0]); // 801C5360
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C5364
  c->r[5]=c->r[4]+0x00000002u; // 801C5368
  W32(c->r[13]+0xFFFF99FCu,c->r[5]); // 801C536C
  c->lr=0x801C5374u; f_801C4900(c); // 801C5370
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C5374
  c->r[3]=c->r[1]+0x00000008u; // 801C5378
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C537C
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801C5380
  W16(c->r[4]+0x00000000u,c->r[0]); // 801C5384
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C5388
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C538C
  c->r[4]=c->r[4]+0x00000002u; // 801C5390
  W32(c->r[13]+0xFFFF99FCu,c->r[4]); // 801C5394
  W16(c->r[4]+0x00000000u,c->r[0]); // 801C5398
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C539C
  c->r[5]=c->r[4]+0x00000002u; // 801C53A0
  W32(c->r[13]+0xFFFF99FCu,c->r[5]); // 801C53A4
  c->lr=0x801C53ACu; f_801C4940(c); // 801C53A8
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C53AC
  c->r[3]=c->r[1]+0x00000008u; // 801C53B0
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C53B4
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801C53B8
  W16(c->r[4]+0x00000000u,c->r[0]); // 801C53BC
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C53C0
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C53C4
  c->r[4]=c->r[4]+0x00000002u; // 801C53C8
  W32(c->r[13]+0xFFFF99FCu,c->r[4]); // 801C53CC
  W16(c->r[4]+0x00000000u,c->r[0]); // 801C53D0
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C53D4
  c->r[5]=c->r[4]+0x00000002u; // 801C53D8
  W32(c->r[13]+0xFFFF99FCu,c->r[5]); // 801C53DC
  c->lr=0x801C53E4u; f_801C4960(c); // 801C53E0
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C53E4
  c->r[3]=c->r[1]+0x00000008u; // 801C53E8
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C53EC
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801C53F0
  W16(c->r[4]+0x00000000u,c->r[0]); // 801C53F4
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C53F8
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C53FC
  c->r[4]=c->r[4]+0x00000002u; // 801C5400
  W32(c->r[13]+0xFFFF99FCu,c->r[4]); // 801C5404
  W16(c->r[4]+0x00000000u,c->r[0]); // 801C5408
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C540C
  c->r[5]=c->r[4]+0x00000002u; // 801C5410
  W32(c->r[13]+0xFFFF99FCu,c->r[5]); // 801C5414
  c->lr=0x801C541Cu; f_801C4980(c); // 801C5418
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C541C
  c->r[3]=R32(c->r[13]+0xFFFF99FCu); // 801C5420
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801C5424
  W16(c->r[3]+0x00000000u,c->r[0]); // 801C5428
  c->r[3]=R32(c->r[13]+0xFFFF99FCu); // 801C542C
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C5430
  c->r[3]=c->r[3]+0x00000002u; // 801C5434
  W32(c->r[13]+0xFFFF99FCu,c->r[3]); // 801C5438
  W16(c->r[3]+0x00000000u,c->r[0]); // 801C543C
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C5440
  c->r[3]=R32(c->r[13]+0xFFFF99F4u); // 801C5444
  c->r[5]=c->r[4]+0x00000002u; // 801C5448
  W32(c->r[13]+0xFFFF99FCu,c->r[5]); // 801C544C
  c->r[0]=c->r[3]+0x00000BDCu; // 801C5450
  W32(c->r[13]+0xFFFF99F4u,c->r[0]); // 801C5454
  goto L_801C566C; // 801C5458
L_801C545C:;
  c->r[3]=c->r[1]+0x00000008u; // 801C545C
  c->lr=0x801C5464u; f_801C47E0(c); // 801C5460
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C5464
  cmps(c,0,(int32_t)c->r[0],0); // 801C5468
  if (crb(c,2)) { goto L_801C550C; } // 801C546C
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C5470
  c->r[0]=0u+0x00000005u; // 801C5474
  c->r[3]=c->r[1]+0x00000008u; // 801C5478
  W16(c->r[4]+0x00000000u,c->r[0]); // 801C547C
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C5480
  c->r[0]=R16(c->r[13]+0xFFFF99E4u); // 801C5484
  c->r[4]=c->r[4]+0x00000002u; // 801C5488
  W32(c->r[13]+0xFFFF99FCu,c->r[4]); // 801C548C
  W16(c->r[4]+0x00000000u,c->r[0]); // 801C5490
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C5494
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C5498
  c->r[4]=c->r[4]+0x00000002u; // 801C549C
  W32(c->r[13]+0xFFFF99FCu,c->r[4]); // 801C54A0
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801C54A4
  W16(c->r[4]+0x00000000u,c->r[0]); // 801C54A8
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C54AC
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C54B0
  c->r[4]=c->r[4]+0x00000002u; // 801C54B4
  W32(c->r[13]+0xFFFF99FCu,c->r[4]); // 801C54B8
  W16(c->r[4]+0x00000000u,c->r[0]); // 801C54BC
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C54C0
  c->r[5]=c->r[4]+0x00000002u; // 801C54C4
  W32(c->r[13]+0xFFFF99FCu,c->r[5]); // 801C54C8
  c->lr=0x801C54D0u; f_801C4820(c); // 801C54CC
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C54D0
  c->r[3]=R32(c->r[13]+0xFFFF99FCu); // 801C54D4
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801C54D8
  W16(c->r[3]+0x00000000u,c->r[0]); // 801C54DC
  c->r[3]=R32(c->r[13]+0xFFFF99FCu); // 801C54E0
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C54E4
  c->r[3]=c->r[3]+0x00000002u; // 801C54E8
  W32(c->r[13]+0xFFFF99FCu,c->r[3]); // 801C54EC
  W16(c->r[3]+0x00000000u,c->r[0]); // 801C54F0
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C54F4
  c->r[3]=R32(c->r[13]+0xFFFF99F4u); // 801C54F8
  c->r[5]=c->r[4]+0x00000002u; // 801C54FC
  W32(c->r[13]+0xFFFF99FCu,c->r[5]); // 801C5500
  c->r[0]=c->r[3]+0x000008BBu; // 801C5504
  W32(c->r[13]+0xFFFF99F4u,c->r[0]); // 801C5508
L_801C550C:;
  c->r[3]=c->r[1]+0x00000008u; // 801C550C
  c->lr=0x801C5514u; f_801C48C0(c); // 801C5510
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C5514
  cmps(c,0,(int32_t)c->r[0],0); // 801C5518
  if (crb(c,2)) { goto L_801C55BC; } // 801C551C
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C5520
  c->r[0]=0u+0x00000006u; // 801C5524
  c->r[3]=c->r[1]+0x00000008u; // 801C5528
  W16(c->r[4]+0x00000000u,c->r[0]); // 801C552C
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C5530
  c->r[0]=R16(c->r[13]+0xFFFF99E2u); // 801C5534
  c->r[4]=c->r[4]+0x00000002u; // 801C5538
  W32(c->r[13]+0xFFFF99FCu,c->r[4]); // 801C553C
  W16(c->r[4]+0x00000000u,c->r[0]); // 801C5540
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C5544
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C5548
  c->r[4]=c->r[4]+0x00000002u; // 801C554C
  W32(c->r[13]+0xFFFF99FCu,c->r[4]); // 801C5550
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801C5554
  W16(c->r[4]+0x00000000u,c->r[0]); // 801C5558
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C555C
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C5560
  c->r[4]=c->r[4]+0x00000002u; // 801C5564
  W32(c->r[13]+0xFFFF99FCu,c->r[4]); // 801C5568
  W16(c->r[4]+0x00000000u,c->r[0]); // 801C556C
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C5570
  c->r[5]=c->r[4]+0x00000002u; // 801C5574
  W32(c->r[13]+0xFFFF99FCu,c->r[5]); // 801C5578
  c->lr=0x801C5580u; f_801C4900(c); // 801C557C
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C5580
  c->r[3]=R32(c->r[13]+0xFFFF99FCu); // 801C5584
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801C5588
  W16(c->r[3]+0x00000000u,c->r[0]); // 801C558C
  c->r[3]=R32(c->r[13]+0xFFFF99FCu); // 801C5590
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C5594
  c->r[3]=c->r[3]+0x00000002u; // 801C5598
  W32(c->r[13]+0xFFFF99FCu,c->r[3]); // 801C559C
  W16(c->r[3]+0x00000000u,c->r[0]); // 801C55A0
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C55A4
  c->r[3]=R32(c->r[13]+0xFFFF99F4u); // 801C55A8
  c->r[5]=c->r[4]+0x00000002u; // 801C55AC
  W32(c->r[13]+0xFFFF99FCu,c->r[5]); // 801C55B0
  c->r[0]=c->r[3]+0x000008BBu; // 801C55B4
  W32(c->r[13]+0xFFFF99F4u,c->r[0]); // 801C55B8
L_801C55BC:;
  c->r[3]=c->r[1]+0x00000008u; // 801C55BC
  c->lr=0x801C55C4u; f_801C49A0(c); // 801C55C0
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C55C4
  cmps(c,0,(int32_t)c->r[0],0); // 801C55C8
  if (crb(c,2)) { goto L_801C566C; } // 801C55CC
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C55D0
  c->r[0]=0u+0x00000007u; // 801C55D4
  c->r[3]=c->r[1]+0x00000008u; // 801C55D8
  W16(c->r[4]+0x00000000u,c->r[0]); // 801C55DC
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C55E0
  c->r[0]=R16(c->r[13]+0xFFFF99E0u); // 801C55E4
  c->r[4]=c->r[4]+0x00000002u; // 801C55E8
  W32(c->r[13]+0xFFFF99FCu,c->r[4]); // 801C55EC
  W16(c->r[4]+0x00000000u,c->r[0]); // 801C55F0
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C55F4
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C55F8
  c->r[4]=c->r[4]+0x00000002u; // 801C55FC
  W32(c->r[13]+0xFFFF99FCu,c->r[4]); // 801C5600
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801C5604
  W16(c->r[4]+0x00000000u,c->r[0]); // 801C5608
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C560C
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C5610
  c->r[4]=c->r[4]+0x00000002u; // 801C5614
  W32(c->r[13]+0xFFFF99FCu,c->r[4]); // 801C5618
  W16(c->r[4]+0x00000000u,c->r[0]); // 801C561C
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C5620
  c->r[5]=c->r[4]+0x00000002u; // 801C5624
  W32(c->r[13]+0xFFFF99FCu,c->r[5]); // 801C5628
  c->lr=0x801C5630u; f_801C49E0(c); // 801C562C
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C5630
  c->r[3]=R32(c->r[13]+0xFFFF99FCu); // 801C5634
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801C5638
  W16(c->r[3]+0x00000000u,c->r[0]); // 801C563C
  c->r[3]=R32(c->r[13]+0xFFFF99FCu); // 801C5640
  c->r[0]=R32(c->r[1]+0x00000008u); // 801C5644
  c->r[3]=c->r[3]+0x00000002u; // 801C5648
  W32(c->r[13]+0xFFFF99FCu,c->r[3]); // 801C564C
  W16(c->r[3]+0x00000000u,c->r[0]); // 801C5650
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C5654
  c->r[3]=R32(c->r[13]+0xFFFF99F4u); // 801C5658
  c->r[5]=c->r[4]+0x00000002u; // 801C565C
  W32(c->r[13]+0xFFFF99FCu,c->r[5]); // 801C5660
  c->r[0]=c->r[3]+0x000008BBu; // 801C5664
  W32(c->r[13]+0xFFFF99F4u,c->r[0]); // 801C5668
L_801C566C:;
  c->r[0]=R32(c->r[13]+0xFFFF99F0u); // 801C566C
  cmps(c,0,(int32_t)c->r[0],0); // 801C5670
  if (crb(c,2)) { goto L_801C56F4; } // 801C5674
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C5678
  c->r[0]=0u+0x0000000Au; // 801C567C
  c->r[3]=0u+0x00010000u; // 801C5680
  W16(c->r[4]+0x00000000u,c->r[0]); // 801C5684
  c->r[0]=c->r[3]+0xFFFF8000u; // 801C5688
  c->r[3]=R32(c->r[13]+0xFFFF99FCu); // 801C568C
  c->r[3]=c->r[3]+0x00000002u; // 801C5690
  W32(c->r[13]+0xFFFF99FCu,c->r[3]); // 801C5694
  W16(c->r[3]+0x00000000u,c->r[0]); // 801C5698
  c->r[3]=R32(c->r[13]+0xFFFF99FCu); // 801C569C
  c->r[0]=R16(c->r[13]+0xFFFF99E8u); // 801C56A0
  c->r[3]=c->r[3]+0x00000002u; // 801C56A4
  W32(c->r[13]+0xFFFF99FCu,c->r[3]); // 801C56A8
  W16(c->r[3]+0x00000000u,c->r[0]); // 801C56AC
  c->r[3]=R32(c->r[13]+0xFFFF99FCu); // 801C56B0
  c->r[0]=R32(c->r[13]+0xFFFF99ECu); // 801C56B4
  c->r[3]=c->r[3]+0x00000002u; // 801C56B8
  W32(c->r[13]+0xFFFF99FCu,c->r[3]); // 801C56BC
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801C56C0
  W16(c->r[3]+0x00000000u,c->r[0]); // 801C56C4
  c->r[3]=R32(c->r[13]+0xFFFF99FCu); // 801C56C8
  c->r[0]=R32(c->r[13]+0xFFFF99ECu); // 801C56CC
  c->r[3]=c->r[3]+0x00000002u; // 801C56D0
  W32(c->r[13]+0xFFFF99FCu,c->r[3]); // 801C56D4
  W16(c->r[3]+0x00000000u,c->r[0]); // 801C56D8
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C56DC
  c->r[3]=R32(c->r[13]+0xFFFF99F4u); // 801C56E0
  c->r[5]=c->r[4]+0x00000002u; // 801C56E4
  W32(c->r[13]+0xFFFF99FCu,c->r[5]); // 801C56E8
  c->r[0]=c->r[3]+0x0000073Au; // 801C56EC
  W32(c->r[13]+0xFFFF99F4u,c->r[0]); // 801C56F0
L_801C56F4:;
  c->r[3]=R32(c->r[13]+0xFFFF99FCu); // 801C56F4
  c->r[0]=0u+0x0000000Du; // 801C56F8
  W16(c->r[3]+0x00000000u,c->r[0]); // 801C56FC
  c->r[3]=R32(c->r[13]+0xFFFF99FCu); // 801C5700
  c->r[3]=c->r[3]+0x00000002u; // 801C5704
  W32(c->r[13]+0xFFFF99FCu,c->r[3]); // 801C5708
  c->r[0]=R32(c->r[30]+0x00000000u); // 801C570C
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801C5710
  W16(c->r[3]+0x00000000u,c->r[0]); // 801C5714
  c->r[3]=R32(c->r[13]+0xFFFF99FCu); // 801C5718
  c->r[3]=c->r[3]+0x00000002u; // 801C571C
  W32(c->r[13]+0xFFFF99FCu,c->r[3]); // 801C5720
  c->r[0]=R32(c->r[30]+0x00000000u); // 801C5724
  W16(c->r[3]+0x00000000u,c->r[0]); // 801C5728
  c->r[3]=R32(c->r[13]+0xFFFF99FCu); // 801C572C
  c->r[3]=c->r[3]+0x00000002u; // 801C5730
  W32(c->r[13]+0xFFFF99FCu,c->r[3]); // 801C5734
  c->r[0]=R32(c->r[30]+0x00000004u); // 801C5738
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801C573C
  W16(c->r[3]+0x00000000u,c->r[0]); // 801C5740
  c->r[3]=R32(c->r[13]+0xFFFF99FCu); // 801C5744
  c->r[3]=c->r[3]+0x00000002u; // 801C5748
  W32(c->r[13]+0xFFFF99FCu,c->r[3]); // 801C574C
  c->r[0]=R32(c->r[30]+0x00000004u); // 801C5750
  W16(c->r[3]+0x00000000u,c->r[0]); // 801C5754
  c->r[3]=R32(c->r[13]+0xFFFF99FCu); // 801C5758
  c->r[3]=c->r[3]+0x00000002u; // 801C575C
  W32(c->r[13]+0xFFFF99FCu,c->r[3]); // 801C5760
  c->r[0]=R32(c->r[30]+0x00000008u); // 801C5764
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801C5768
  W16(c->r[3]+0x00000000u,c->r[0]); // 801C576C
  c->r[3]=R32(c->r[13]+0xFFFF99FCu); // 801C5770
  c->r[3]=c->r[3]+0x00000002u; // 801C5774
  W32(c->r[13]+0xFFFF99FCu,c->r[3]); // 801C5778
  c->r[0]=R32(c->r[30]+0x00000008u); // 801C577C
  W16(c->r[3]+0x00000000u,c->r[0]); // 801C5780
  c->r[3]=R32(c->r[13]+0xFFFF99FCu); // 801C5784
  c->r[3]=c->r[3]+0x00000002u; // 801C5788
  W32(c->r[13]+0xFFFF99FCu,c->r[3]); // 801C578C
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801C5790
  c->r[0]=rotl(c->r[0],16)&0x0000FFFFu; // 801C5794
  W16(c->r[3]+0x00000000u,c->r[0]); // 801C5798
  c->r[3]=R32(c->r[13]+0xFFFF99FCu); // 801C579C
  c->r[3]=c->r[3]+0x00000002u; // 801C57A0
  W32(c->r[13]+0xFFFF99FCu,c->r[3]); // 801C57A4
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801C57A8
  W16(c->r[3]+0x00000000u,c->r[0]); // 801C57AC
  c->r[0]=R32(c->r[13]+0xFFFF99F8u); // 801C57B0
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C57B4
  c->r[3]=R32(c->r[13]+0xFFFF99F4u); // 801C57B8
  cmpu(c,0,c->r[0],0x00000002u); // 801C57BC
  c->r[4]=c->r[4]+0x00000002u; // 801C57C0
  W32(c->r[13]+0xFFFF99FCu,c->r[4]); // 801C57C4
  c->r[0]=c->r[3]+0x00000199u; // 801C57C8
  W32(c->r[13]+0xFFFF99F4u,c->r[0]); // 801C57CC
  if (!crb(c,2)) { goto L_801C5854; } // 801C57D0
  c->r[0]=0u+0x0000000Cu; // 801C57D4
  W16(c->r[4]+0x00000000u,c->r[0]); // 801C57D8
  c->r[3]=rotl(c->r[28],16)&0x0000FFFFu; // 801C57DC
  c->r[5]=R32(c->r[13]+0xFFFF99FCu); // 801C57E0
  c->r[0]=rotl(c->r[29],16)&0x0000FFFFu; // 801C57E4
  c->r[4]=R16(c->r[13]+0xFFFF99E6u); // 801C57E8
  c->r[5]=c->r[5]+0x00000002u; // 801C57EC
  W32(c->r[13]+0xFFFF99FCu,c->r[5]); // 801C57F0
  W16(c->r[5]+0x00000000u,c->r[4]); // 801C57F4
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C57F8
  c->r[4]=c->r[4]+0x00000002u; // 801C57FC
  W32(c->r[13]+0xFFFF99FCu,c->r[4]); // 801C5800
  W16(c->r[4]+0x00000000u,c->r[3]); // 801C5804
  c->r[3]=R32(c->r[13]+0xFFFF99FCu); // 801C5808
  c->r[3]=c->r[3]+0x00000002u; // 801C580C
  W32(c->r[13]+0xFFFF99FCu,c->r[3]); // 801C5810
  W16(c->r[3]+0x00000000u,c->r[28]); // 801C5814
  c->r[3]=R32(c->r[13]+0xFFFF99FCu); // 801C5818
  c->r[3]=c->r[3]+0x00000002u; // 801C581C
  W32(c->r[13]+0xFFFF99FCu,c->r[3]); // 801C5820
  W16(c->r[3]+0x00000000u,c->r[0]); // 801C5824
  c->r[3]=R32(c->r[13]+0xFFFF99FCu); // 801C5828
  c->r[3]=c->r[3]+0x00000002u; // 801C582C
  W32(c->r[13]+0xFFFF99FCu,c->r[3]); // 801C5830
  W16(c->r[3]+0x00000000u,c->r[29]); // 801C5834
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C5838
  c->r[3]=R32(c->r[13]+0xFFFF99F4u); // 801C583C
  c->r[5]=c->r[4]+0x00000002u; // 801C5840
  W32(c->r[13]+0xFFFF99FCu,c->r[5]); // 801C5844
  c->r[0]=c->r[3]+0x000004ABu; // 801C5848
  W32(c->r[13]+0xFFFF99F4u,c->r[0]); // 801C584C
  goto L_801C58D0; // 801C5850
L_801C5854:;
  c->r[0]=0u+0x0000000Bu; // 801C5854
  W16(c->r[4]+0x00000000u,c->r[0]); // 801C5858
  c->r[3]=rotl(c->r[28],16)&0x0000FFFFu; // 801C585C
  c->r[5]=R32(c->r[13]+0xFFFF99FCu); // 801C5860
  c->r[0]=rotl(c->r[29],16)&0x0000FFFFu; // 801C5864
  c->r[4]=R16(c->r[13]+0xFFFF99E6u); // 801C5868
  c->r[5]=c->r[5]+0x00000002u; // 801C586C
  W32(c->r[13]+0xFFFF99FCu,c->r[5]); // 801C5870
  W16(c->r[5]+0x00000000u,c->r[4]); // 801C5874
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C5878
  c->r[4]=c->r[4]+0x00000002u; // 801C587C
  W32(c->r[13]+0xFFFF99FCu,c->r[4]); // 801C5880
  W16(c->r[4]+0x00000000u,c->r[3]); // 801C5884
  c->r[3]=R32(c->r[13]+0xFFFF99FCu); // 801C5888
  c->r[3]=c->r[3]+0x00000002u; // 801C588C
  W32(c->r[13]+0xFFFF99FCu,c->r[3]); // 801C5890
  W16(c->r[3]+0x00000000u,c->r[28]); // 801C5894
  c->r[3]=R32(c->r[13]+0xFFFF99FCu); // 801C5898
  c->r[3]=c->r[3]+0x00000002u; // 801C589C
  W32(c->r[13]+0xFFFF99FCu,c->r[3]); // 801C58A0
  W16(c->r[3]+0x00000000u,c->r[0]); // 801C58A4
  c->r[3]=R32(c->r[13]+0xFFFF99FCu); // 801C58A8
  c->r[3]=c->r[3]+0x00000002u; // 801C58AC
  W32(c->r[13]+0xFFFF99FCu,c->r[3]); // 801C58B0
  W16(c->r[3]+0x00000000u,c->r[29]); // 801C58B4
  c->r[4]=R32(c->r[13]+0xFFFF99FCu); // 801C58B8
  c->r[3]=R32(c->r[13]+0xFFFF99F4u); // 801C58BC
  c->r[5]=c->r[4]+0x00000002u; // 801C58C0
  W32(c->r[13]+0xFFFF99FCu,c->r[5]); // 801C58C4
  c->r[0]=c->r[3]+0x00000494u; // 801C58C8
  W32(c->r[13]+0xFFFF99F4u,c->r[0]); // 801C58CC
L_801C58D0:;
  c->r[0]=0u+0x0000000Eu; // 801C58D0
  W16(c->r[5]+0x00000000u,c->r[0]); // 801C58D4
  c->r[3]=c->r[31]|c->r[31]; // 801C58D8
  c->r[4]=0u+0x00000080u; // 801C58DC
  c->r[5]=R32(c->r[13]+0xFFFF99FCu); // 801C58E0
  c->r[6]=R32(c->r[13]+0xFFFF99F4u); // 801C58E4
  c->r[5]=c->r[5]+0x00000002u; // 801C58E8
  W32(c->r[13]+0xFFFF99FCu,c->r[5]); // 801C58EC
  c->r[0]=c->r[6]+0x0000001Eu; // 801C58F0
  W32(c->r[13]+0xFFFF99F4u,c->r[0]); // 801C58F4
  c->lr=0x801C58FCu; f_80244E50(c); // 801C58F8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C58FC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C5900
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C5904
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C5908
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C590C
  c->lr=c->r[0]; // 801C5910
  c->r[1]=c->r[1]+0x00000020u; // 801C5914
  return; // 801C5918
}

// __AXClInit
void f_801C5920(Ctx* __restrict c) {
  trace_call(0x801C5920u);
  c->r[6]=0u+0x80440000u; // 801C5920
  c->r[4]=0u+0x803A0000u; // 801C5924
  c->r[7]=0u+0x00000000u; // 801C5928
  c->r[3]=0u+0x00010000u; // 801C592C
  c->r[0]=c->r[3]+0xFFFF8000u; // 801C5930
  c->r[6]=c->r[6]+0x000045A0u; // 801C5934
  c->r[4]=c->r[4]+0xFFFFADC0u; // 801C5938
  c->r[5]=0u+0x00000001u; // 801C593C
  c->r[3]=0u+0x0000000Au; // 801C5940
  W32(c->r[13]+0xFFFF99F8u,c->r[7]); // 801C5944
  W32(c->r[13]+0xFFFF9A00u,c->r[7]); // 801C5948
  W32(c->r[13]+0xFFFF99FCu,c->r[6]); // 801C594C
  W32(c->r[13]+0xFFFF99F0u,c->r[5]); // 801C5950
  W32(c->r[13]+0xFFFF99ECu,c->r[4]); // 801C5954
  W16(c->r[13]+0xFFFF99E8u,c->r[3]); // 801C5958
  W16(c->r[13]+0xFFFF99E6u,c->r[0]); // 801C595C
  W16(c->r[13]+0xFFFF99E4u,c->r[0]); // 801C5960
  W16(c->r[13]+0xFFFF99E2u,c->r[0]); // 801C5964
  W16(c->r[13]+0xFFFF99E0u,c->r[0]); // 801C5968
  return; // 801C596C
}

// fn_801C5970
void f_801C5970(Ctx* __restrict c) {
  trace_call(0x801C5970u);
  return; // 801C5970
}

// fn_801C5980
void f_801C5980(Ctx* __restrict c) {
  trace_call(0x801C5980u);
  W32(c->r[13]+0xFFFF99F8u,c->r[3]); // 801C5980
  return; // 801C5984
}

// fn_801C5990
void f_801C5990(Ctx* __restrict c) {
  trace_call(0x801C5990u);
  c->r[3]=R32(c->r[13]+0xFFFF99F8u); // 801C5990
  return; // 801C5994
}

// AXGetMode
void f_801C59A0(Ctx* __restrict c) {
  trace_call(0x801C59A0u);
  c->r[3]=R16(c->r[13]+0xFFFF99E4u); // 801C59A0
  return; // 801C59A4
}

// AXSetCompressor
void f_801C59B0(Ctx* __restrict c) {
  trace_call(0x801C59B0u);
  c->r[3]=R16(c->r[13]+0xFFFF99E2u); // 801C59B0
  return; // 801C59B4
}

// AXGetAuxAReturnVolume
void f_801C59C0(Ctx* __restrict c) {
  trace_call(0x801C59C0u);
  c->r[3]=R16(c->r[13]+0xFFFF99E0u); // 801C59C0
  return; // 801C59C4
}

// AXSetAuxAReturnVolume
void f_801C59D0(Ctx* __restrict c) {
  trace_call(0x801C59D0u);
  W16(c->r[13]+0xFFFF99E4u,c->r[3]); // 801C59D0
  return; // 801C59D4
}

// AXSetAuxBReturnVolume
void f_801C59E0(Ctx* __restrict c) {
  trace_call(0x801C59E0u);
  W16(c->r[13]+0xFFFF99E2u,c->r[3]); // 801C59E0
  return; // 801C59E4
}

// AXSetAuxCReturnVolume
void f_801C59F0(Ctx* __restrict c) {
  trace_call(0x801C59F0u);
  W16(c->r[13]+0xFFFF99E0u,c->r[3]); // 801C59F0
  return; // 801C59F4
}

// __AXOutNewFrame
void f_801C5A00(Ctx* __restrict c) {
  trace_call(0x801C5A00u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5A00
  c->r[0]=c->lr; // 801C5A04
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C5A08
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801C5A0C
  c->r[31]=0u+0x80440000u; // 801C5A10
  c->r[31]=c->r[31]+0x000046A0u; // 801C5A14
  W32(c->r[1]+0x00000028u,c->r[30]); // 801C5A18
  W32(c->r[1]+0x00000024u,c->r[29]); // 801C5A1C
  c->lr=0x801C5A24u; f_8024EAD0(c); // 801C5A20
  c->r[5]=c->r[31]+0x00000000u; // 801C5A24
  W32(c->r[31]+0x00000000u,c->r[3]); // 801C5A28
  W32(c->r[5]+0x00000004u,c->r[4]); // 801C5A2C
  c->lr=0x801C5A34u; f_801C3220(c); // 801C5A30
  c->r[3]=rotl(c->r[3],30)&0x3FFFFFFFu; // 801C5A34
  c->r[0]=R32(c->r[13]+0xFFFF9A18u); // 801C5A38
  c->r[3]=addc(c,~c->r[3],0x00000060u,1); // 801C5A3C
  cmpu(c,0,c->r[0],0x00000001u); // 801C5A40
  c->r[30]=(uint32_t)((int32_t)c->r[3]*(int32_t)3797); // 801C5A44
  if (!crb(c,2)) { goto L_801C5A58; } // 801C5A48
  c->r[3]=0u+0x00000000u; // 801C5A4C
  c->lr=0x801C5A54u; f_801C6C20(c); // 801C5A50
  goto L_801C5A60; // 801C5A54
L_801C5A58:;
  c->r[3]=0u+0x00005F50u; // 801C5A58
  c->lr=0x801C5A60u; f_801C6C20(c); // 801C5A5C
L_801C5A60:;
  c->lr=0x801C5A64u; f_801C6370(c); // 801C5A60
  c->lr=0x801C5A68u; f_801C4F30(c); // 801C5A64
  c->r[4]=0u+0xBABE0000u; // 801C5A68
  c->r[29]=c->r[3]|c->r[3]; // 801C5A6C
  c->r[3]=c->r[4]+0x00000080u; // 801C5A70
  c->lr=0x801C5A78u; f_801F7FA0(c); // 801C5A74
L_801C5A78:;
  c->lr=0x801C5A7Cu; f_801F7F60(c); // 801C5A78
  cmps(c,0,(int32_t)c->r[3],0); // 801C5A7C
  if (!crb(c,2)) { IRQCHK(c); goto L_801C5A78; } // 801C5A80
  c->r[3]=c->r[29]|c->r[29]; // 801C5A84
  c->lr=0x801C5A8Cu; f_801F7FA0(c); // 801C5A88
L_801C5A8C:;
  c->lr=0x801C5A90u; f_801F7F60(c); // 801C5A8C
  cmps(c,0,(int32_t)c->r[3],0); // 801C5A90
  if (!crb(c,2)) { IRQCHK(c); goto L_801C5A8C; } // 801C5A94
  c->lr=0x801C5A9Cu; f_801C41C0(c); // 801C5A98
  c->lr=0x801C5AA0u; f_8024EAD0(c); // 801C5A9C
  c->r[29]=c->r[31]+0x00000000u; // 801C5AA0
  W32(c->r[29]+0x0000000Cu,c->r[4]); // 801C5AA4
  W32(c->r[29]+0x00000008u,c->r[3]); // 801C5AA8
  c->lr=0x801C5AB0u; f_801C4A00(c); // 801C5AAC
  c->lr=0x801C5AB4u; f_8024EAD0(c); // 801C5AB0
  W32(c->r[29]+0x00000014u,c->r[4]); // 801C5AB4
  W32(c->r[29]+0x00000010u,c->r[3]); // 801C5AB8
  c->lr=0x801C5AC0u; f_8024EAD0(c); // 801C5ABC
  c->r[12]=R32(c->r[13]+0xFFFF9A34u); // 801C5AC0
  W32(c->r[29]+0x0000001Cu,c->r[4]); // 801C5AC4
  cmps(c,0,(int32_t)c->r[12],0); // 801C5AC8
  W32(c->r[29]+0x00000018u,c->r[3]); // 801C5ACC
  if (crb(c,2)) { goto L_801C5ADC; } // 801C5AD0
  c->ctr=c->r[12]; // 801C5AD4
  if (true) { c->lr=0x801C5ADCu; dispatch(c,c->ctr); } // 801C5AD8
L_801C5ADC:;
  c->lr=0x801C5AE0u; f_8024EAD0(c); // 801C5ADC
  c->r[7]=R32(c->r[13]+0xFFFF9A10u); // 801C5AE0
  c->r[8]=c->r[31]+0x00000000u; // 801C5AE4
  c->r[0]=R32(c->r[13]+0xFFFF9A14u); // 801C5AE8
  c->r[5]=c->r[31]+0x00000040u; // 801C5AEC
  c->r[6]=rotl(c->r[7],1)&0xFFFFFFFEu; // 801C5AF0
  c->r[7]=c->r[7]+0x00000012u; // 801C5AF4
  c->r[6]=c->r[5]+c->r[6]; // 801C5AF8
  W32(c->r[8]+0x00000024u,c->r[4]); // 801C5AFC
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 801C5B00
  c->r[5]=c->r[6]+0x00000168u; // 801C5B04
  c->r[4]=c->r[6]+0x000002D0u; // 801C5B08
  c->r[0]=c->r[6]+0x00000438u; // 801C5B0C
  W32(c->r[8]+0x00000020u,c->r[3]); // 801C5B10
  W32(c->r[1]+0x00000008u,c->r[6]); // 801C5B14
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 801C5B18
  W32(c->r[1]+0x00000010u,c->r[4]); // 801C5B1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C5B20
  if (crb(c,0)) { goto L_801C5B2C; } // 801C5B24
  c->r[7]=0u+0x00000000u; // 801C5B28
L_801C5B2C:;
  c->r[4]=R32(c->r[13]+0xFFFF9A0Cu); // 801C5B2C
  c->r[3]=R32(c->r[13]+0xFFFF9A10u); // 801C5B30
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[3]); // 801C5B34
  if (crb(c,0)) { goto L_801C5B4C; } // 801C5B38
  c->r[0]=c->r[3]+0x00000012u; // 801C5B3C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801C5B40
  if (!crb(c,0)) { goto L_801C5B4C; } // 801C5B44
  W32(c->r[13]+0xFFFF9A0Cu,c->r[7]); // 801C5B48
L_801C5B4C:;
  c->r[0]=R32(c->r[13]+0xFFFF9A40u); // 801C5B4C
  c->r[29]=c->r[31]+0x000008E0u; // 801C5B50
  W32(c->r[13]+0xFFFF9A10u,c->r[7]); // 801C5B54
  c->r[3]=c->r[31]+0x000005E0u; // 801C5B58
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)384); // 801C5B5C
  c->r[5]=c->r[1]+0x00000008u; // 801C5B60
  c->r[4]=c->r[29]+c->r[0]; // 801C5B64
  c->lr=0x801C5B6Cu; f_801C4F60(c); // 801C5B68
  c->r[0]=R32(c->r[13]+0xFFFF9A18u); // 801C5B6C
  c->r[3]=R32(c->r[13]+0xFFFF9A40u); // 801C5B70
  cmpu(c,0,c->r[0],0x00000001u); // 801C5B74
  c->r[0]=c->r[3]+0x00000001u; // 801C5B78
  W32(c->r[13]+0xFFFF9A40u,c->r[0]); // 801C5B7C
  if (!crb(c,2)) { goto L_801C5BA8; } // 801C5B80
  c->r[3]=0u+0xAAAB0000u; // 801C5B84
  c->r[4]=R32(c->r[13]+0xFFFF9A40u); // 801C5B88
  c->r[0]=c->r[3]+0xFFFFAAABu; // 801C5B8C
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[4])>>32); // 801C5B90
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801C5B94
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 801C5B98
  c->r[0]=c->r[4]-c->r[0]; // 801C5B9C
  W32(c->r[13]+0xFFFF9A40u,c->r[0]); // 801C5BA0
  goto L_801C5BC8; // 801C5BA4
L_801C5BA8:;
  c->r[0]=R32(c->r[13]+0xFFFF9A40u); // 801C5BA8
  c->r[4]=0u+0x00000180u; // 801C5BAC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; // 801C5BB0
  W32(c->r[13]+0xFFFF9A40u,c->r[0]); // 801C5BB4
  c->r[0]=R32(c->r[13]+0xFFFF9A40u); // 801C5BB8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)384); // 801C5BBC
  c->r[3]=c->r[29]+c->r[0]; // 801C5BC0
  c->lr=0x801C5BC8u; f_801C3160(c); // 801C5BC4
L_801C5BC8:;
  c->lr=0x801C5BCCu; f_8024EAD0(c); // 801C5BC8
  c->r[29]=c->r[31]+0x00000000u; // 801C5BCC
  W32(c->r[29]+0x0000002Cu,c->r[4]); // 801C5BD0
  W32(c->r[29]+0x00000028u,c->r[3]); // 801C5BD4
  c->lr=0x801C5BDCu; f_801C66C0(c); // 801C5BD8
  W32(c->r[29]+0x00000030u,c->r[3]); // 801C5BDC
  c->lr=0x801C5BE4u; f_801C7A40(c); // 801C5BE0
  cmps(c,0,(int32_t)c->r[3],0); // 801C5BE4
  if (crb(c,2)) { goto L_801C5C40; } // 801C5BE8
  c->r[0]=0u+0x00000007u; // 801C5BEC
  c->ctr=c->r[0]; // 801C5BF0
L_801C5BF4:;
  c->r[0]=R8(c->r[29]+0x00000000u); // 801C5BF4
  W8(c->r[3]+0x00000000u,c->r[0]); // 801C5BF8
  c->r[0]=R8(c->r[29]+0x00000001u); // 801C5BFC
  W8(c->r[3]+0x00000001u,c->r[0]); // 801C5C00
  c->r[0]=R8(c->r[29]+0x00000002u); // 801C5C04
  W8(c->r[3]+0x00000002u,c->r[0]); // 801C5C08
  c->r[0]=R8(c->r[29]+0x00000003u); // 801C5C0C
  W8(c->r[3]+0x00000003u,c->r[0]); // 801C5C10
  c->r[0]=R8(c->r[29]+0x00000004u); // 801C5C14
  W8(c->r[3]+0x00000004u,c->r[0]); // 801C5C18
  c->r[0]=R8(c->r[29]+0x00000005u); // 801C5C1C
  W8(c->r[3]+0x00000005u,c->r[0]); // 801C5C20
  c->r[0]=R8(c->r[29]+0x00000006u); // 801C5C24
  W8(c->r[3]+0x00000006u,c->r[0]); // 801C5C28
  c->r[0]=R8(c->r[29]+0x00000007u); // 801C5C2C
  c->r[29]=c->r[29]+0x00000008u; // 801C5C30
  W8(c->r[3]+0x00000007u,c->r[0]); // 801C5C34
  c->r[3]=c->r[3]+0x00000008u; // 801C5C38
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C5BF4; } // 801C5C3C
L_801C5C40:;
  c->r[3]=c->r[30]|c->r[30]; // 801C5C40
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801C5C44
  c->r[30]=R32(c->r[1]+0x00000028u); // 801C5C48
  c->r[29]=R32(c->r[1]+0x00000024u); // 801C5C4C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C5C50
  c->lr=c->r[0]; // 801C5C54
  c->r[1]=c->r[1]+0x00000030u; // 801C5C58
  return; // 801C5C5C
}

// __AXOutAiCallback
void f_801C5C60(Ctx* __restrict c) {
  trace_call(0x801C5C60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5C60
  c->r[0]=c->lr; // 801C5C64
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C5C68
  c->r[0]=R32(c->r[13]+0xFFFF9A2Cu); // 801C5C6C
  cmps(c,0,(int32_t)c->r[0],1); // 801C5C70
  if (crb(c,2)) { goto L_801C5D00; } // 801C5C74
  c->r[0]=R32(c->r[13]+0xFFFF9A38u); // 801C5C78
  cmpu(c,0,c->r[0],0x00000001u); // 801C5C7C
  if (!crb(c,2)) { goto L_801C5C94; } // 801C5C80
  c->r[0]=0u+0x00000000u; // 801C5C84
  W32(c->r[13]+0xFFFF9A38u,c->r[0]); // 801C5C88
  c->lr=0x801C5C90u; f_801C5A00(c); // 801C5C8C
  goto L_801C5CA8; // 801C5C90
L_801C5C94:;
  c->r[0]=0u+0x00000002u; // 801C5C94
  c->r[3]=0u+0x80440000u; // 801C5C98
  W32(c->r[13]+0xFFFF9A38u,c->r[0]); // 801C5C9C
  c->r[3]=c->r[3]+0x00005400u; // 801C5CA0
  c->lr=0x801C5CA8u; f_801F8140(c); // 801C5CA4
L_801C5CA8:;
  c->r[0]=R32(c->r[13]+0xFFFF9A18u); // 801C5CA8
  cmpu(c,0,c->r[0],0x00000001u); // 801C5CAC
  if (!crb(c,2)) { goto L_801C5D00; } // 801C5CB0
  c->r[0]=R32(c->r[13]+0xFFFF9A3Cu); // 801C5CB4
  c->r[3]=0u+0x80440000u; // 801C5CB8
  c->r[3]=c->r[3]+0x00004F80u; // 801C5CBC
  c->r[4]=0u+0x00000180u; // 801C5CC0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)384); // 801C5CC4
  c->r[3]=c->r[3]+c->r[0]; // 801C5CC8
  c->lr=0x801C5CD0u; f_801C3160(c); // 801C5CCC
  c->r[4]=R32(c->r[13]+0xFFFF9A3Cu); // 801C5CD0
  c->r[3]=0u+0xAAAB0000u; // 801C5CD4
  c->r[3]=c->r[3]+0xFFFFAAABu; // 801C5CD8
  c->r[0]=R32(c->r[13]+0xFFFF9A40u); // 801C5CDC
  c->r[4]=c->r[4]+0x00000001u; // 801C5CE0
  c->r[3]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[4])>>32); // 801C5CE4
  c->r[3]=rotl(c->r[3],31)&0x7FFFFFFFu; // 801C5CE8
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)3); // 801C5CEC
  c->r[4]=c->r[4]-c->r[3]; // 801C5CF0
  cmpu(c,0,c->r[4],c->r[0]); // 801C5CF4
  if (crb(c,2)) { goto L_801C5D00; } // 801C5CF8
  W32(c->r[13]+0xFFFF9A3Cu,c->r[4]); // 801C5CFC
L_801C5D00:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C5D00
  c->lr=c->r[0]; // 801C5D04
  c->r[1]=c->r[1]+0x00000010u; // 801C5D08
  return; // 801C5D0C
}

// __AXDSPInitCallback
void f_801C5D10(Ctx* __restrict c) {
  trace_call(0x801C5D10u);
  c->r[0]=0u+0x00000001u; // 801C5D10
  W32(c->r[13]+0xFFFF9A30u,c->r[0]); // 801C5D14
  return; // 801C5D18
}

// __AXDSPResumeCallback
void f_801C5D20(Ctx* __restrict c) {
  trace_call(0x801C5D20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5D20
  c->r[0]=c->lr; // 801C5D24
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C5D28
  c->r[0]=R32(c->r[13]+0xFFFF9A38u); // 801C5D2C
  cmpu(c,0,c->r[0],0x00000002u); // 801C5D30
  if (!crb(c,2)) { goto L_801C5D5C; } // 801C5D34
  c->r[0]=0u+0x00000000u; // 801C5D38
  W32(c->r[13]+0xFFFF9A38u,c->r[0]); // 801C5D3C
  c->lr=0x801C5D44u; f_801C5A00(c); // 801C5D40
  c->r[12]=R32(c->r[13]+0xFFFF9A08u); // 801C5D44
  cmps(c,0,(int32_t)c->r[12],0); // 801C5D48
  if (crb(c,2)) { goto L_801C5D64; } // 801C5D4C
  c->ctr=c->r[12]; // 801C5D50
  if (true) { c->lr=0x801C5D58u; dispatch(c,c->ctr); } // 801C5D54
  goto L_801C5D64; // 801C5D58
L_801C5D5C:;
  c->r[0]=0u+0x00000001u; // 801C5D5C
  W32(c->r[13]+0xFFFF9A38u,c->r[0]); // 801C5D60
L_801C5D64:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C5D64
  c->lr=c->r[0]; // 801C5D68
  c->r[1]=c->r[1]+0x00000010u; // 801C5D6C
  return; // 801C5D70
}

// __AXDSPDoneCallback
void f_801C5D80(Ctx* __restrict c) {
  trace_call(0x801C5D80u);
  c->r[0]=0u+0x00000001u; // 801C5D80
  W32(c->r[13]+0xFFFF9A2Cu,c->r[0]); // 801C5D84
  c->r[3]=c->r[13]+0xFFFF9A20u; // 801C5D88
  f_8024DFB0(c); return; // 801C5D8C
}

// __AXDSPRequestCallback
void f_801C5D90(Ctx* __restrict c) {
  trace_call(0x801C5D90u);
  return; // 801C5D90
}

// __AXOutInitDSP
void f_801C5DA0(Ctx* __restrict c) {
  stub_log(0x801C5DA0u);  return;
}

// __AXOutInit
void f_801C5E90(Ctx* __restrict c) {
  trace_call(0x801C5E90u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C5E90
  c->r[0]=c->lr; // 801C5E94
  c->r[4]=0u+0x00000000u; // 801C5E98
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C5E9C
  c->r[0]=0u+0x00000020u; // 801C5EA0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C5EA4
  c->r[31]=0u+0x80440000u; // 801C5EA8
  c->r[31]=c->r[31]+0x000046A0u; // 801C5EAC
  W32(c->r[13]+0xFFFF9A40u,c->r[4]); // 801C5EB0
  c->r[5]=c->r[31]+0x000008E0u; // 801C5EB4
  W32(c->r[13]+0xFFFF9A3Cu,c->r[4]); // 801C5EB8
  W32(c->r[13]+0xFFFF9A18u,c->r[3]); // 801C5EBC
  W32(c->r[13]+0xFFFF9A28u,c->r[4]); // 801C5EC0
  c->ctr=c->r[0]; // 801C5EC4
L_801C5EC8:;
  W32(c->r[5]+0x00000000u,c->r[4]); // 801C5EC8
  W32(c->r[5]+0x00000004u,c->r[4]); // 801C5ECC
  W32(c->r[5]+0x00000008u,c->r[4]); // 801C5ED0
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 801C5ED4
  W32(c->r[5]+0x00000010u,c->r[4]); // 801C5ED8
  W32(c->r[5]+0x00000014u,c->r[4]); // 801C5EDC
  W32(c->r[5]+0x00000018u,c->r[4]); // 801C5EE0
  W32(c->r[5]+0x0000001Cu,c->r[4]); // 801C5EE4
  W32(c->r[5]+0x00000020u,c->r[4]); // 801C5EE8
  c->r[5]=c->r[5]+0x00000024u; // 801C5EEC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C5EC8; } // 801C5EF0
  c->r[3]=c->r[31]+0x000008E0u; // 801C5EF4
  c->r[4]=0u+0x00000480u; // 801C5EF8
  c->lr=0x801C5F00u; f_80244E50(c); // 801C5EFC
  c->r[0]=0u+0x00000018u; // 801C5F00
  c->r[4]=c->r[31]+0x000005E0u; // 801C5F04
  c->r[3]=0u+0x00000000u; // 801C5F08
  c->ctr=c->r[0]; // 801C5F0C
L_801C5F10:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 801C5F10
  W32(c->r[4]+0x00000004u,c->r[3]); // 801C5F14
  W32(c->r[4]+0x00000008u,c->r[3]); // 801C5F18
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 801C5F1C
  W32(c->r[4]+0x00000010u,c->r[3]); // 801C5F20
  W32(c->r[4]+0x00000014u,c->r[3]); // 801C5F24
  W32(c->r[4]+0x00000018u,c->r[3]); // 801C5F28
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 801C5F2C
  c->r[4]=c->r[4]+0x00000020u; // 801C5F30
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C5F10; } // 801C5F34
  c->r[3]=c->r[31]+0x000005E0u; // 801C5F38
  c->r[4]=0u+0x00000300u; // 801C5F3C
  c->lr=0x801C5F44u; f_80244E50(c); // 801C5F40
  c->r[0]=0u+0x00000024u; // 801C5F44
  c->r[4]=c->r[31]+0x00000040u; // 801C5F48
  c->r[3]=0u+0x00000000u; // 801C5F4C
  c->ctr=c->r[0]; // 801C5F50
L_801C5F54:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 801C5F54
  W32(c->r[4]+0x00000004u,c->r[3]); // 801C5F58
  W32(c->r[4]+0x00000008u,c->r[3]); // 801C5F5C
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 801C5F60
  W32(c->r[4]+0x00000010u,c->r[3]); // 801C5F64
  W32(c->r[4]+0x00000014u,c->r[3]); // 801C5F68
  W32(c->r[4]+0x00000018u,c->r[3]); // 801C5F6C
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 801C5F70
  W32(c->r[4]+0x00000020u,c->r[3]); // 801C5F74
  W32(c->r[4]+0x00000024u,c->r[3]); // 801C5F78
  c->r[4]=c->r[4]+0x00000028u; // 801C5F7C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C5F54; } // 801C5F80
  c->r[3]=c->r[31]+0x00000040u; // 801C5F84
  c->r[4]=0u+0x000005A0u; // 801C5F88
  c->lr=0x801C5F90u; f_80244E50(c); // 801C5F8C
  c->lr=0x801C5F94u; f_801C5DA0(c); // 801C5F90
  c->r[3]=0u+0x801C0000u; // 801C5F94
  c->r[3]=c->r[3]+0x00005C60u; // 801C5F98
  c->lr=0x801C5FA0u; f_801C3110(c); // 801C5F9C
  c->r[0]=R32(c->r[13]+0xFFFF9A18u); // 801C5FA0
  c->r[7]=c->r[31]+0x00000040u; // 801C5FA4
  c->r[4]=0u+0x00000012u; // 801C5FA8
  c->r[3]=0u+0x000000B4u; // 801C5FAC
  cmpu(c,0,c->r[0],0x00000001u); // 801C5FB0
  c->r[6]=c->r[7]+0x00000168u; // 801C5FB4
  c->r[5]=c->r[7]+0x000002D0u; // 801C5FB8
  c->r[0]=c->r[7]+0x00000438u; // 801C5FBC
  W32(c->r[1]+0x00000008u,c->r[7]); // 801C5FC0
  W32(c->r[1]+0x0000000Cu,c->r[6]); // 801C5FC4
  W32(c->r[1]+0x00000010u,c->r[5]); // 801C5FC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C5FCC
  W32(c->r[13]+0xFFFF9A0Cu,c->r[4]); // 801C5FD0
  W32(c->r[13]+0xFFFF9A10u,c->r[4]); // 801C5FD4
  W32(c->r[13]+0xFFFF9A14u,c->r[3]); // 801C5FD8
  if (!crb(c,2)) { goto L_801C5FF8; } // 801C5FDC
  c->r[4]=c->r[31]+0x000008E0u; // 801C5FE0
  c->r[3]=c->r[31]+0x000005E0u; // 801C5FE4
  c->r[4]=c->r[4]+0x00000300u; // 801C5FE8
  c->r[5]=c->r[1]+0x00000008u; // 801C5FEC
  c->lr=0x801C5FF4u; f_801C4F60(c); // 801C5FF0
  goto L_801C600C; // 801C5FF4
L_801C5FF8:;
  c->r[4]=c->r[31]+0x000008E0u; // 801C5FF8
  c->r[3]=c->r[31]+0x000005E0u; // 801C5FFC
  c->r[4]=c->r[4]+0x00000180u; // 801C6000
  c->r[5]=c->r[1]+0x00000008u; // 801C6004
  c->lr=0x801C600Cu; f_801C4F60(c); // 801C6008
L_801C600C:;
  c->r[0]=R32(c->r[13]+0xFFFF9A18u); // 801C600C
  c->r[4]=0u+0x00000001u; // 801C6010
  c->r[3]=0u+0x00000000u; // 801C6014
  W32(c->r[13]+0xFFFF9A38u,c->r[4]); // 801C6018
  cmpu(c,0,c->r[0],0x00000001u); // 801C601C
  W32(c->r[13]+0xFFFF9A34u,c->r[3]); // 801C6020
  if (!crb(c,2)) { goto L_801C6050; } // 801C6024
  c->r[3]=R32(c->r[13]+0xFFFF9A3Cu); // 801C6028
  c->r[0]=c->r[31]+0x000008E0u; // 801C602C
  c->r[4]=0u+0x00000180u; // 801C6030
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)384); // 801C6034
  c->r[3]=c->r[0]+c->r[3]; // 801C6038
  c->lr=0x801C6040u; f_801C3160(c); // 801C603C
  c->r[3]=R32(c->r[13]+0xFFFF9A3Cu); // 801C6040
  c->r[0]=c->r[3]+0x00000001u; // 801C6044
  W32(c->r[13]+0xFFFF9A3Cu,c->r[0]); // 801C6048
  goto L_801C6068; // 801C604C
L_801C6050:;
  c->r[3]=R32(c->r[13]+0xFFFF9A40u); // 801C6050
  c->r[0]=c->r[31]+0x000008E0u; // 801C6054
  c->r[4]=0u+0x00000180u; // 801C6058
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)384); // 801C605C
  c->r[3]=c->r[0]+c->r[3]; // 801C6060
  c->lr=0x801C6068u; f_801C3160(c); // 801C6064
L_801C6068:;
  c->lr=0x801C606Cu; f_801C31E0(c); // 801C6068
  c->r[0]=0u+0x00000000u; // 801C606C
  W32(c->r[13]+0xFFFF9A08u,c->r[0]); // 801C6070
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C6074
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C6078
  c->lr=c->r[0]; // 801C607C
  c->r[1]=c->r[1]+0x00000020u; // 801C6080
  return; // 801C6084
}

// __AXOutQuit
void f_801C6090(Ctx* __restrict c) {
  trace_call(0x801C6090u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6090
  c->r[0]=c->lr; // 801C6094
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C6098
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C609C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C60A0
  c->lr=0x801C60A8u; f_802494C0(c); // 801C60A4
  c->r[31]=0u+0x00000000u; // 801C60A8
  W32(c->r[13]+0xFFFF9A34u,c->r[31]); // 801C60AC
  c->r[4]=0u+0x80440000u; // 801C60B0
  c->r[30]=c->r[3]|c->r[3]; // 801C60B4
  c->r[3]=c->r[4]+0x00005400u; // 801C60B8
  c->lr=0x801C60C0u; f_801F8100(c); // 801C60BC
  c->r[3]=c->r[13]+0xFFFF9A20u; // 801C60C0
  c->lr=0x801C60C8u; f_8024DEC0(c); // 801C60C4
  c->r[3]=0u+0x00000000u; // 801C60C8
  c->lr=0x801C60D0u; f_801C3110(c); // 801C60CC
  c->lr=0x801C60D4u; f_801C3200(c); // 801C60D0
  W32(c->r[13]+0xFFFF9A08u,c->r[31]); // 801C60D4
  c->r[3]=c->r[30]|c->r[30]; // 801C60D8
  c->lr=0x801C60E0u; f_80249500(c); // 801C60DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C60E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C60E4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C60E8
  c->lr=c->r[0]; // 801C60EC
  c->r[1]=c->r[1]+0x00000010u; // 801C60F0
  return; // 801C60F4
}

// AXRegisterCallback
void f_801C6100(Ctx* __restrict c) {
  trace_call(0x801C6100u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6100
  c->r[0]=c->lr; // 801C6104
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C6108
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C610C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C6110
  c->r[30]=c->r[3]|c->r[3]; // 801C6114
  c->r[31]=R32(c->r[13]+0xFFFF9A34u); // 801C6118
  c->lr=0x801C6120u; f_802494C0(c); // 801C611C
  W32(c->r[13]+0xFFFF9A34u,c->r[30]); // 801C6120
  c->lr=0x801C6128u; f_80249500(c); // 801C6124
  c->r[3]=c->r[31]|c->r[31]; // 801C6128
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C612C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C6130
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C6134
  c->lr=c->r[0]; // 801C6138
  c->r[1]=c->r[1]+0x00000010u; // 801C613C
  return; // 801C6140
}

// AXRmtGetSamples
void f_801C6150(Ctx* __restrict c) {
  trace_call(0x801C6150u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6150
  c->r[0]=c->lr; // 801C6154
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C6158
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C615C
  c->r[6]=R32(c->r[13]+0xFFFF9A10u); // 801C6160
  c->r[31]=addc(c,c->r[6],0xFFFFFFDCu,0); cr0(c,c->r[31]); // 801C6164
  if (!crb(c,0)) { goto L_801C6174; } // 801C6168
  c->r[0]=R32(c->r[13]+0xFFFF9A14u); // 801C616C
  c->r[31]=c->r[31]+c->r[0]; // 801C6170
L_801C6174:;
  c->r[0]=R32(c->r[13]+0xFFFF9A0Cu); // 801C6174
  c->r[31]=c->r[31]-c->r[0]; cr0(c,c->r[31]); // 801C6178
  if (!crb(c,0)) { goto L_801C6188; } // 801C617C
  c->r[0]=R32(c->r[13]+0xFFFF9A14u); // 801C6180
  c->r[31]=c->r[31]+c->r[0]; // 801C6184
L_801C6188:;
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[31]); // 801C6188
  if (!crb(c,1)) { goto L_801C6194; } // 801C618C
  goto L_801C6198; // 801C6190
L_801C6194:;
  c->r[31]=c->r[5]|c->r[5]; // 801C6194
L_801C6198:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)360); // 801C6198
  c->r[5]=0u+0x80440000u; // 801C619C
  c->r[7]=R32(c->r[13]+0xFFFF9A0Cu); // 801C61A0
  c->r[5]=c->r[5]+0x000046E0u; // 801C61A4
  c->r[5]=c->r[5]+c->r[0]; // 801C61A8
  c->ctr=c->r[31]; // 801C61AC
  cmps(c,0,(int32_t)c->r[31],0); // 801C61B0
  if (!crb(c,1)) { goto L_801C61E0; } // 801C61B4
L_801C61B8:;
  c->r[6]=rotl(c->r[7],1)&0xFFFFFFFEu; // 801C61B8
  c->r[7]=c->r[7]+0x00000001u; // 801C61BC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[6]+c->r[5]); // 801C61C0
  W16(c->r[4]+0x00000000u,c->r[0]); // 801C61C4
  c->r[4]=c->r[4]+0x00000002u; // 801C61C8
  c->r[0]=R32(c->r[13]+0xFFFF9A14u); // 801C61CC
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 801C61D0
  if (crb(c,0)) { goto L_801C61DC; } // 801C61D4
  c->r[7]=0u+0x00000000u; // 801C61D8
L_801C61DC:;
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C61B8; } // 801C61DC
L_801C61E0:;
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)360); // 801C61E0
  c->r[0]=R32(c->r[13]+0xFFFF9A14u); // 801C61E4
  c->r[3]=0u+0x80440000u; // 801C61E8
  c->r[4]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801C61EC
  c->r[3]=c->r[3]+0x000046E0u; // 801C61F0
  c->r[3]=c->r[3]+c->r[5]; // 801C61F4
  c->lr=0x801C61FCu; f_80244E20(c); // 801C61F8
  c->r[3]=c->r[31]|c->r[31]; // 801C61FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C6200
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C6204
  c->lr=c->r[0]; // 801C6208
  c->r[1]=c->r[1]+0x00000010u; // 801C620C
  return; // 801C6210
}

// AXRmtAdvancePtr
void f_801C6220(Ctx* __restrict c) {
  trace_call(0x801C6220u);
  c->r[4]=R32(c->r[13]+0xFFFF9A10u); // 801C6220
  c->r[4]=addc(c,c->r[4],0xFFFFFFDCu,0); cr0(c,c->r[4]); // 801C6224
  if (!crb(c,0)) { goto L_801C6234; } // 801C6228
  c->r[0]=R32(c->r[13]+0xFFFF9A14u); // 801C622C
  c->r[4]=c->r[4]+c->r[0]; // 801C6230
L_801C6234:;
  c->r[0]=R32(c->r[13]+0xFFFF9A0Cu); // 801C6234
  c->r[4]=c->r[4]-c->r[0]; cr0(c,c->r[4]); // 801C6238
  if (!crb(c,0)) { goto L_801C6248; } // 801C623C
  c->r[0]=R32(c->r[13]+0xFFFF9A14u); // 801C6240
  c->r[4]=c->r[4]+c->r[0]; // 801C6244
L_801C6248:;
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[4]); // 801C6248
  if (!crb(c,1)) { goto L_801C6254; } // 801C624C
  c->r[3]=c->r[4]|c->r[4]; // 801C6250
L_801C6254:;
  c->r[0]=R32(c->r[13]+0xFFFF9A0Cu); // 801C6254
  c->r[4]=R32(c->r[13]+0xFFFF9A14u); // 801C6258
  c->r[0]=c->r[0]+c->r[3]; // 801C625C
  W32(c->r[13]+0xFFFF9A0Cu,c->r[0]); // 801C6260
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801C6264
  if (crb(c,0)) return; // 801C6268
  c->r[0]=c->r[0]-c->r[4]; // 801C626C
  W32(c->r[13]+0xFFFF9A0Cu,c->r[0]); // 801C6270
  return; // 801C6274
}

// __AXGetStudio
void f_801C6280(Ctx* __restrict c) {
  trace_call(0x801C6280u);
  c->r[3]=0u+0x80440000u; // 801C6280
  c->r[3]=c->r[3]+0x000054A0u; // 801C6284
  return; // 801C6288
}

// __AXDepopFadeMain
void f_801C6290(Ctx* __restrict c) {
  trace_call(0x801C6290u);
  c->r[6]=0u+0x2AAB0000u; // 801C6290
  c->r[7]=R32(c->r[3]+0x00000000u); // 801C6294
  c->r[0]=c->r[6]+0xFFFFAAABu; // 801C6298
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[7])>>32); // 801C629C
  c->r[0]=sraw(c,c->r[0],4); // 801C62A0
  c->r[6]=rotl(c->r[0],1)&0x00000001u; // 801C62A4
  c->r[0]=c->r[0]+c->r[6]; cr0(c,c->r[0]); // 801C62A8
  if (crb(c,2)) { goto L_801C62E8; } // 801C62AC
  cmps(c,0,(int32_t)c->r[0],20); // 801C62B0
  if (!crb(c,1)) { goto L_801C62BC; } // 801C62B4
  c->r[0]=0u+0x00000014u; // 801C62B8
L_801C62BC:;
  cmps(c,0,(int32_t)c->r[0],-20); // 801C62BC
  if (!crb(c,0)) { goto L_801C62C8; } // 801C62C0
  c->r[0]=0u+0xFFFFFFECu; // 801C62C4
L_801C62C8:;
  W32(c->r[4]+0x00000000u,c->r[7]); // 801C62C8
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)96); // 801C62CC
  c->r[0]=0u-c->r[0]; // 801C62D0
  c->r[4]=R32(c->r[3]+0x00000000u); // 801C62D4
  c->r[4]=c->r[4]-c->r[6]; // 801C62D8
  W32(c->r[3]+0x00000000u,c->r[4]); // 801C62DC
  W16(c->r[5]+0x00000000u,c->r[0]); // 801C62E0
  return; // 801C62E4
L_801C62E8:;
  c->r[0]=0u+0x00000000u; // 801C62E8
  W32(c->r[3]+0x00000000u,c->r[0]); // 801C62EC
  W32(c->r[4]+0x00000000u,c->r[0]); // 801C62F0
  W16(c->r[5]+0x00000000u,c->r[0]); // 801C62F4
  return; // 801C62F8
}

// __AXDepopFadeRmt
void f_801C6300(Ctx* __restrict c) {
  trace_call(0x801C6300u);
  c->r[6]=0u+0x38E40000u; // 801C6300
  c->r[7]=R32(c->r[3]+0x00000000u); // 801C6304
  c->r[0]=c->r[6]+0xFFFF8E39u; // 801C6308
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[7])>>32); // 801C630C
  c->r[0]=sraw(c,c->r[0],2); // 801C6310
  c->r[6]=rotl(c->r[0],1)&0x00000001u; // 801C6314
  c->r[0]=c->r[0]+c->r[6]; cr0(c,c->r[0]); // 801C6318
  if (crb(c,2)) { goto L_801C6358; } // 801C631C
  cmps(c,0,(int32_t)c->r[0],20); // 801C6320
  if (!crb(c,1)) { goto L_801C632C; } // 801C6324
  c->r[0]=0u+0x00000014u; // 801C6328
L_801C632C:;
  cmps(c,0,(int32_t)c->r[0],-20); // 801C632C
  if (!crb(c,0)) { goto L_801C6338; } // 801C6330
  c->r[0]=0u+0xFFFFFFECu; // 801C6334
L_801C6338:;
  W32(c->r[4]+0x00000000u,c->r[7]); // 801C6338
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)18); // 801C633C
  c->r[0]=0u-c->r[0]; // 801C6340
  c->r[4]=R32(c->r[3]+0x00000000u); // 801C6344
  c->r[4]=c->r[4]-c->r[6]; // 801C6348
  W32(c->r[3]+0x00000000u,c->r[4]); // 801C634C
  W16(c->r[5]+0x00000000u,c->r[0]); // 801C6350
  return; // 801C6354
L_801C6358:;
  c->r[0]=0u+0x00000000u; // 801C6358
  W32(c->r[3]+0x00000000u,c->r[0]); // 801C635C
  W32(c->r[4]+0x00000000u,c->r[0]); // 801C6360
  W16(c->r[5]+0x00000000u,c->r[0]); // 801C6364
  return; // 801C6368
}

// __AXPrintStudio
void f_801C6370(Ctx* __restrict c) {
  trace_call(0x801C6370u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6370
  c->r[0]=c->lr; // 801C6374
  c->r[3]=c->r[13]+0xFFFF9A94u; // 801C6378
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C637C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C6380
  c->r[31]=0u+0x80440000u; // 801C6384
  c->r[4]=c->r[31]+0x000054A0u; // 801C6388
  c->r[5]=c->r[4]+0x00000004u; // 801C638C
  c->lr=0x801C6394u; f_801C6290(c); // 801C6390
  c->r[31]=c->r[31]+0x000054A0u; // 801C6394
  c->r[3]=c->r[13]+0xFFFF9A90u; // 801C6398
  c->r[4]=c->r[31]+0x00000006u; // 801C639C
  c->r[5]=c->r[31]+0x0000000Au; // 801C63A0
  c->lr=0x801C63A8u; f_801C6290(c); // 801C63A4
  c->r[4]=c->r[31]+0x0000000Cu; // 801C63A8
  c->r[5]=c->r[31]+0x00000010u; // 801C63AC
  c->r[3]=c->r[13]+0xFFFF9A8Cu; // 801C63B0
  c->lr=0x801C63B8u; f_801C6290(c); // 801C63B4
  c->r[4]=c->r[31]+0x00000012u; // 801C63B8
  c->r[5]=c->r[31]+0x00000016u; // 801C63BC
  c->r[3]=c->r[13]+0xFFFF9A88u; // 801C63C0
  c->lr=0x801C63C8u; f_801C6290(c); // 801C63C4
  c->r[4]=c->r[31]+0x00000018u; // 801C63C8
  c->r[5]=c->r[31]+0x0000001Cu; // 801C63CC
  c->r[3]=c->r[13]+0xFFFF9A84u; // 801C63D0
  c->lr=0x801C63D8u; f_801C6290(c); // 801C63D4
  c->r[4]=c->r[31]+0x0000001Eu; // 801C63D8
  c->r[5]=c->r[31]+0x00000022u; // 801C63DC
  c->r[3]=c->r[13]+0xFFFF9A80u; // 801C63E0
  c->lr=0x801C63E8u; f_801C6290(c); // 801C63E4
  c->r[4]=c->r[31]+0x00000024u; // 801C63E8
  c->r[5]=c->r[31]+0x00000028u; // 801C63EC
  c->r[3]=c->r[13]+0xFFFF9A7Cu; // 801C63F0
  c->lr=0x801C63F8u; f_801C6290(c); // 801C63F4
  c->r[4]=c->r[31]+0x0000002Au; // 801C63F8
  c->r[5]=c->r[31]+0x0000002Eu; // 801C63FC
  c->r[3]=c->r[13]+0xFFFF9A78u; // 801C6400
  c->lr=0x801C6408u; f_801C6290(c); // 801C6404
  c->r[4]=c->r[31]+0x00000030u; // 801C6408
  c->r[5]=c->r[31]+0x00000034u; // 801C640C
  c->r[3]=c->r[13]+0xFFFF9A74u; // 801C6410
  c->lr=0x801C6418u; f_801C6290(c); // 801C6414
  c->r[4]=c->r[31]+0x00000036u; // 801C6418
  c->r[5]=c->r[31]+0x0000003Au; // 801C641C
  c->r[3]=c->r[13]+0xFFFF9A70u; // 801C6420
  c->lr=0x801C6428u; f_801C6290(c); // 801C6424
  c->r[4]=c->r[31]+0x0000003Cu; // 801C6428
  c->r[5]=c->r[31]+0x00000040u; // 801C642C
  c->r[3]=c->r[13]+0xFFFF9A6Cu; // 801C6430
  c->lr=0x801C6438u; f_801C6290(c); // 801C6434
  c->r[4]=c->r[31]+0x00000042u; // 801C6438
  c->r[5]=c->r[31]+0x00000046u; // 801C643C
  c->r[3]=c->r[13]+0xFFFF9A68u; // 801C6440
  c->lr=0x801C6448u; f_801C6290(c); // 801C6444
  c->r[4]=c->r[31]+0x00000048u; // 801C6448
  c->r[5]=c->r[31]+0x0000004Cu; // 801C644C
  c->r[3]=c->r[13]+0xFFFF9A64u; // 801C6450
  c->lr=0x801C6458u; f_801C6300(c); // 801C6454
  c->r[4]=c->r[31]+0x00000054u; // 801C6458
  c->r[5]=c->r[31]+0x00000058u; // 801C645C
  c->r[3]=c->r[13]+0xFFFF9A60u; // 801C6460
  c->lr=0x801C6468u; f_801C6300(c); // 801C6464
  c->r[4]=c->r[31]+0x00000060u; // 801C6468
  c->r[5]=c->r[31]+0x00000064u; // 801C646C
  c->r[3]=c->r[13]+0xFFFF9A5Cu; // 801C6470
  c->lr=0x801C6478u; f_801C6300(c); // 801C6474
  c->r[4]=c->r[31]+0x0000006Cu; // 801C6478
  c->r[5]=c->r[31]+0x00000070u; // 801C647C
  c->r[3]=c->r[13]+0xFFFF9A58u; // 801C6480
  c->lr=0x801C6488u; f_801C6300(c); // 801C6484
  c->r[4]=c->r[31]+0x0000004Eu; // 801C6488
  c->r[5]=c->r[31]+0x00000052u; // 801C648C
  c->r[3]=c->r[13]+0xFFFF9A54u; // 801C6490
  c->lr=0x801C6498u; f_801C6300(c); // 801C6494
  c->r[4]=c->r[31]+0x0000005Au; // 801C6498
  c->r[5]=c->r[31]+0x0000005Eu; // 801C649C
  c->r[3]=c->r[13]+0xFFFF9A50u; // 801C64A0
  c->lr=0x801C64A8u; f_801C6300(c); // 801C64A4
  c->r[4]=c->r[31]+0x00000066u; // 801C64A8
  c->r[5]=c->r[31]+0x0000006Au; // 801C64AC
  c->r[3]=c->r[13]+0xFFFF9A4Cu; // 801C64B0
  c->lr=0x801C64B8u; f_801C6300(c); // 801C64B4
  c->r[4]=c->r[31]+0x00000072u; // 801C64B8
  c->r[5]=c->r[31]+0x00000076u; // 801C64BC
  c->r[3]=c->r[13]+0xFFFF9A48u; // 801C64C0
  c->lr=0x801C64C8u; f_801C6300(c); // 801C64C4
  c->r[3]=c->r[31]|c->r[31]; // 801C64C8
  c->r[4]=0u+0x00000078u; // 801C64CC
  c->lr=0x801C64D4u; f_80244E50(c); // 801C64D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C64D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C64D8
  c->lr=c->r[0]; // 801C64DC
  c->r[1]=c->r[1]+0x00000010u; // 801C64E0
  return; // 801C64E4
}

// __AXSPBInit
void f_801C64F0(Ctx* __restrict c) {
  trace_call(0x801C64F0u);
  c->r[0]=0u+0x00000000u; // 801C64F0
  W32(c->r[13]+0xFFFF9A48u,c->r[0]); // 801C64F4
  W32(c->r[13]+0xFFFF9A4Cu,c->r[0]); // 801C64F8
  W32(c->r[13]+0xFFFF9A50u,c->r[0]); // 801C64FC
  W32(c->r[13]+0xFFFF9A54u,c->r[0]); // 801C6500
  W32(c->r[13]+0xFFFF9A58u,c->r[0]); // 801C6504
  W32(c->r[13]+0xFFFF9A5Cu,c->r[0]); // 801C6508
  W32(c->r[13]+0xFFFF9A60u,c->r[0]); // 801C650C
  W32(c->r[13]+0xFFFF9A64u,c->r[0]); // 801C6510
  W32(c->r[13]+0xFFFF9A68u,c->r[0]); // 801C6514
  W32(c->r[13]+0xFFFF9A6Cu,c->r[0]); // 801C6518
  W32(c->r[13]+0xFFFF9A70u,c->r[0]); // 801C651C
  W32(c->r[13]+0xFFFF9A74u,c->r[0]); // 801C6520
  W32(c->r[13]+0xFFFF9A78u,c->r[0]); // 801C6524
  W32(c->r[13]+0xFFFF9A7Cu,c->r[0]); // 801C6528
  W32(c->r[13]+0xFFFF9A80u,c->r[0]); // 801C652C
  W32(c->r[13]+0xFFFF9A84u,c->r[0]); // 801C6530
  W32(c->r[13]+0xFFFF9A88u,c->r[0]); // 801C6534
  W32(c->r[13]+0xFFFF9A8Cu,c->r[0]); // 801C6538
  W32(c->r[13]+0xFFFF9A90u,c->r[0]); // 801C653C
  W32(c->r[13]+0xFFFF9A94u,c->r[0]); // 801C6540
  return; // 801C6544
}

// fn_801C6550
void f_801C6550(Ctx* __restrict c) {
  trace_call(0x801C6550u);
  return; // 801C6550
}

// __AXDepopVoice
void f_801C6560(Ctx* __restrict c) {
  trace_call(0x801C6560u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6560
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C6564
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C6568
  c->r[4]=R32(c->r[13]+0xFFFF9A94u); // 801C656C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000052u); // 801C6570
  c->r[6]=R32(c->r[13]+0xFFFF9A88u); // 801C6574
  c->r[0]=c->r[4]+c->r[0]; // 801C6578
  W32(c->r[13]+0xFFFF9A94u,c->r[0]); // 801C657C
  c->r[5]=R32(c->r[13]+0xFFFF9A7Cu); // 801C6580
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000054u); // 801C6584
  c->r[4]=R32(c->r[13]+0xFFFF9A70u); // 801C6588
  c->r[0]=c->r[6]+c->r[0]; // 801C658C
  W32(c->r[13]+0xFFFF9A88u,c->r[0]); // 801C6590
  c->r[8]=R32(c->r[13]+0xFFFF9A90u); // 801C6594
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000056u); // 801C6598
  c->r[7]=R32(c->r[13]+0xFFFF9A84u); // 801C659C
  c->r[0]=c->r[5]+c->r[0]; // 801C65A0
  W32(c->r[13]+0xFFFF9A7Cu,c->r[0]); // 801C65A4
  c->r[6]=R32(c->r[13]+0xFFFF9A78u); // 801C65A8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000058u); // 801C65AC
  c->r[5]=R32(c->r[13]+0xFFFF9A6Cu); // 801C65B0
  c->r[0]=c->r[4]+c->r[0]; // 801C65B4
  W32(c->r[13]+0xFFFF9A70u,c->r[0]); // 801C65B8
  c->r[4]=R32(c->r[13]+0xFFFF9A8Cu); // 801C65BC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000005Au); // 801C65C0
  c->r[30]=R32(c->r[13]+0xFFFF9A80u); // 801C65C4
  c->r[0]=c->r[8]+c->r[0]; // 801C65C8
  W32(c->r[13]+0xFFFF9A90u,c->r[0]); // 801C65CC
  c->r[31]=R32(c->r[13]+0xFFFF9A74u); // 801C65D0
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000005Cu); // 801C65D4
  c->r[12]=R32(c->r[13]+0xFFFF9A68u); // 801C65D8
  c->r[0]=c->r[7]+c->r[0]; // 801C65DC
  W32(c->r[13]+0xFFFF9A84u,c->r[0]); // 801C65E0
  c->r[11]=R32(c->r[13]+0xFFFF9A64u); // 801C65E4
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000005Eu); // 801C65E8
  c->r[10]=R32(c->r[13]+0xFFFF9A60u); // 801C65EC
  c->r[0]=c->r[6]+c->r[0]; // 801C65F0
  W32(c->r[13]+0xFFFF9A78u,c->r[0]); // 801C65F4
  c->r[9]=R32(c->r[13]+0xFFFF9A5Cu); // 801C65F8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000060u); // 801C65FC
  c->r[8]=R32(c->r[13]+0xFFFF9A58u); // 801C6600
  c->r[0]=c->r[5]+c->r[0]; // 801C6604
  W32(c->r[13]+0xFFFF9A6Cu,c->r[0]); // 801C6608
  c->r[7]=R32(c->r[13]+0xFFFF9A54u); // 801C660C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000062u); // 801C6610
  c->r[6]=R32(c->r[13]+0xFFFF9A50u); // 801C6614
  c->r[0]=c->r[4]+c->r[0]; // 801C6618
  W32(c->r[13]+0xFFFF9A8Cu,c->r[0]); // 801C661C
  c->r[5]=R32(c->r[13]+0xFFFF9A4Cu); // 801C6620
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000064u); // 801C6624
  c->r[4]=R32(c->r[13]+0xFFFF9A48u); // 801C6628
  c->r[0]=c->r[30]+c->r[0]; // 801C662C
  W32(c->r[13]+0xFFFF9A80u,c->r[0]); // 801C6630
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000066u); // 801C6634
  c->r[0]=c->r[31]+c->r[0]; // 801C6638
  W32(c->r[13]+0xFFFF9A74u,c->r[0]); // 801C663C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000068u); // 801C6640
  c->r[0]=c->r[12]+c->r[0]; // 801C6644
  W32(c->r[13]+0xFFFF9A68u,c->r[0]); // 801C6648
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x000000FAu); // 801C664C
  c->r[0]=c->r[11]+c->r[0]; // 801C6650
  W32(c->r[13]+0xFFFF9A64u,c->r[0]); // 801C6654
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x000000FCu); // 801C6658
  c->r[0]=c->r[10]+c->r[0]; // 801C665C
  W32(c->r[13]+0xFFFF9A60u,c->r[0]); // 801C6660
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x000000FEu); // 801C6664
  c->r[0]=c->r[9]+c->r[0]; // 801C6668
  W32(c->r[13]+0xFFFF9A5Cu,c->r[0]); // 801C666C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000100u); // 801C6670
  c->r[0]=c->r[8]+c->r[0]; // 801C6674
  W32(c->r[13]+0xFFFF9A58u,c->r[0]); // 801C6678
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000102u); // 801C667C
  c->r[0]=c->r[7]+c->r[0]; // 801C6680
  W32(c->r[13]+0xFFFF9A54u,c->r[0]); // 801C6684
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000104u); // 801C6688
  c->r[0]=c->r[6]+c->r[0]; // 801C668C
  W32(c->r[13]+0xFFFF9A50u,c->r[0]); // 801C6690
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000106u); // 801C6694
  c->r[0]=c->r[5]+c->r[0]; // 801C6698
  W32(c->r[13]+0xFFFF9A4Cu,c->r[0]); // 801C669C
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000108u); // 801C66A0
  c->r[0]=c->r[4]+c->r[0]; // 801C66A4
  W32(c->r[13]+0xFFFF9A48u,c->r[0]); // 801C66A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C66AC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C66B0
  c->r[1]=c->r[1]+0x00000010u; // 801C66B4
  return; // 801C66B8
}

// __AXGetNumVoices
void f_801C66C0(Ctx* __restrict c) {
  trace_call(0x801C66C0u);
  c->r[3]=R32(c->r[13]+0xFFFF9AA8u); // 801C66C0
  return; // 801C66C4
}

// __AXServiceVPB
void f_801C66D0(Ctx* __restrict c) {
  trace_call(0x801C66D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C66D0
  c->r[0]=c->lr; // 801C66D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C66D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C66DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C66E0
  c->r[30]=c->r[3]+0x00000028u; // 801C66E4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C66E8
  W32(c->r[1]+0x00000010u,c->r[28]); // 801C66EC
  c->r[28]=c->r[3]|c->r[3]; // 801C66F0
  c->r[5]=R32(c->r[13]+0xFFFF9AA8u); // 801C66F4
  c->r[4]=R32(c->r[13]+0xFFFF9A98u); // 801C66F8
  c->r[0]=c->r[5]+0x00000001u; // 801C66FC
  W32(c->r[13]+0xFFFF9AA8u,c->r[0]); // 801C6700
  c->r[0]=R32(c->r[3]+0x00000018u); // 801C6704
  c->r[29]=R32(c->r[3]+0x0000001Cu); // 801C6708
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 801C670C
  cmps(c,0,(int32_t)c->r[29],0); // 801C6710
  c->r[31]=c->r[4]+c->r[0]; // 801C6714
  if (!crb(c,2)) { goto L_801C6740; } // 801C6718
  c->r[0]=R16(c->r[31]+0x00000010u); // 801C671C
  W16(c->r[30]+0x00000010u,c->r[0]); // 801C6720
  c->r[0]=R16(c->r[31]+0x0000006Au); // 801C6724
  W16(c->r[30]+0x0000006Au,c->r[0]); // 801C6728
  c->r[0]=R16(c->r[31]+0x0000007Au); // 801C672C
  W16(c->r[30]+0x0000007Au,c->r[0]); // 801C6730
  c->r[0]=R16(c->r[31]+0x0000007Cu); // 801C6734
  W16(c->r[30]+0x0000007Cu,c->r[0]); // 801C6738
  goto L_801C6C00; // 801C673C
L_801C6740:;
  c->r[0]=rotl(c->r[29],0)&0x80000000u; cr0(c,c->r[0]); // 801C6740
  if (crb(c,2)) { goto L_801C675C; } // 801C6744
  c->r[3]=c->r[31]|c->r[31]; // 801C6748
  c->r[4]=c->r[30]|c->r[30]; // 801C674C
  c->r[5]=0u+0x00000140u; // 801C6750
  c->lr=0x801C6758u; f_80004000(c); // 801C6754
  goto L_801C6C00; // 801C6758
L_801C675C:;
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 801C675C
  if (crb(c,2)) { goto L_801C6774; } // 801C6760
  c->r[0]=R16(c->r[30]+0x00000008u); // 801C6764
  W16(c->r[31]+0x00000008u,c->r[0]); // 801C6768
  c->r[0]=R16(c->r[30]+0x0000000Au); // 801C676C
  W16(c->r[31]+0x0000000Au,c->r[0]); // 801C6770
L_801C6774:;
  c->r[0]=rotl(c->r[29],0)&0x00000002u; cr0(c,c->r[0]); // 801C6774
  if (crb(c,2)) { goto L_801C6784; } // 801C6778
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801C677C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801C6780
L_801C6784:;
  c->r[0]=rotl(c->r[29],0)&0x00000004u; cr0(c,c->r[0]); // 801C6784
  if (crb(c,2)) { goto L_801C6798; } // 801C6788
  c->r[0]=R16(c->r[30]+0x00000010u); // 801C678C
  W16(c->r[31]+0x00000010u,c->r[0]); // 801C6790
  goto L_801C67A0; // 801C6794
L_801C6798:;
  c->r[0]=R16(c->r[31]+0x00000010u); // 801C6798
  W16(c->r[30]+0x00000010u,c->r[0]); // 801C679C
L_801C67A0:;
  c->r[0]=rotl(c->r[29],0)&0x00000008u; cr0(c,c->r[0]); // 801C67A0
  if (crb(c,2)) { goto L_801C67B0; } // 801C67A4
  c->r[0]=R16(c->r[30]+0x00000012u); // 801C67A8
  W16(c->r[31]+0x00000012u,c->r[0]); // 801C67AC
L_801C67B0:;
  c->r[0]=rotl(c->r[29],0)&0x00000010u; cr0(c,c->r[0]); // 801C67B0
  if (crb(c,2)) { goto L_801C67C8; } // 801C67B4
  c->r[3]=c->r[31]+0x00000014u; // 801C67B8
  c->r[4]=c->r[30]+0x00000014u; // 801C67BC
  c->r[5]=0u+0x00000030u; // 801C67C0
  c->lr=0x801C67C8u; f_80004000(c); // 801C67C4
L_801C67C8:;
  c->r[0]=rotl(c->r[29],0)&0x00000040u; cr0(c,c->r[0]); // 801C67C8
  if (crb(c,2)) { goto L_801C67E4; } // 801C67CC
  c->r[0]=R16(c->r[30]+0x0000004Eu); // 801C67D0
  W16(c->r[31]+0x0000004Eu,c->r[0]); // 801C67D4
  c->r[0]=R16(c->r[30]+0x00000050u); // 801C67D8
  W16(c->r[31]+0x00000050u,c->r[0]); // 801C67DC
  goto L_801C686C; // 801C67E0
L_801C67E4:;
  c->r[0]=rotl(c->r[29],0)&0x00000020u; cr0(c,c->r[0]); // 801C67E4
  if (crb(c,2)) { goto L_801C686C; } // 801C67E8
  c->r[3]=R16(c->r[30]+0x00000044u); // 801C67EC
  c->r[0]=0u+0x00000000u; // 801C67F0
  W16(c->r[31]+0x00000044u,c->r[3]); // 801C67F4
  c->r[3]=R16(c->r[30]+0x00000046u); // 801C67F8
  W16(c->r[31]+0x00000046u,c->r[3]); // 801C67FC
  c->r[3]=R16(c->r[30]+0x00000048u); // 801C6800
  W16(c->r[31]+0x00000048u,c->r[3]); // 801C6804
  c->r[3]=R16(c->r[30]+0x0000004Au); // 801C6808
  W16(c->r[31]+0x0000004Au,c->r[3]); // 801C680C
  c->r[3]=R16(c->r[30]+0x0000004Cu); // 801C6810
  W16(c->r[31]+0x0000004Cu,c->r[3]); // 801C6814
  c->r[3]=R16(c->r[30]+0x0000004Eu); // 801C6818
  W16(c->r[31]+0x0000004Eu,c->r[3]); // 801C681C
  c->r[3]=R16(c->r[30]+0x00000050u); // 801C6820
  W16(c->r[31]+0x00000050u,c->r[3]); // 801C6824
  c->r[3]=R32(c->r[28]+0x00000024u); // 801C6828
  W32(c->r[3]+0x00000000u,c->r[0]); // 801C682C
  W32(c->r[3]+0x00000004u,c->r[0]); // 801C6830
  W32(c->r[3]+0x00000008u,c->r[0]); // 801C6834
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801C6838
  W32(c->r[3]+0x00000010u,c->r[0]); // 801C683C
  W32(c->r[3]+0x00000014u,c->r[0]); // 801C6840
  W32(c->r[3]+0x00000018u,c->r[0]); // 801C6844
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 801C6848
  W32(c->r[3]+0x00000020u,c->r[0]); // 801C684C
  W32(c->r[3]+0x00000024u,c->r[0]); // 801C6850
  W32(c->r[3]+0x00000028u,c->r[0]); // 801C6854
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 801C6858
  W32(c->r[3]+0x00000030u,c->r[0]); // 801C685C
  W32(c->r[3]+0x00000034u,c->r[0]); // 801C6860
  W32(c->r[3]+0x00000038u,c->r[0]); // 801C6864
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 801C6868
L_801C686C:;
  c->r[0]=rotl(c->r[29],0)&0x00000080u; cr0(c,c->r[0]); // 801C686C
  if (crb(c,2)) { goto L_801C6884; } // 801C6870
  c->r[3]=c->r[31]+0x00000052u; // 801C6874
  c->r[4]=c->r[30]+0x00000052u; // 801C6878
  c->r[5]=0u+0x00000018u; // 801C687C
  c->lr=0x801C6884u; f_80004000(c); // 801C6880
L_801C6884:;
  c->r[0]=rotl(c->r[29],0)&0x00000200u; cr0(c,c->r[0]); // 801C6884
  if (crb(c,2)) { goto L_801C68A0; } // 801C6888
  c->r[0]=R16(c->r[31]+0x0000006Au); // 801C688C
  W16(c->r[30]+0x0000006Au,c->r[0]); // 801C6890
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000006Cu); // 801C6894
  W16(c->r[31]+0x0000006Cu,c->r[0]); // 801C6898
  goto L_801C68B8; // 801C689C
L_801C68A0:;
  c->r[0]=rotl(c->r[29],0)&0x00000100u; cr0(c,c->r[0]); // 801C68A0
  if (crb(c,2)) { goto L_801C68B8; } // 801C68A4
  c->r[0]=R16(c->r[30]+0x0000006Au); // 801C68A8
  W16(c->r[31]+0x0000006Au,c->r[0]); // 801C68AC
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000006Cu); // 801C68B0
  W16(c->r[31]+0x0000006Cu,c->r[0]); // 801C68B4
L_801C68B8:;
  c->r[0]=rotl(c->r[29],0)&0x00007800u; cr0(c,c->r[0]); // 801C68B8
  if (crb(c,2)) { goto L_801C6910; } // 801C68BC
  c->r[0]=rotl(c->r[29],0)&0x00000800u; cr0(c,c->r[0]); // 801C68C0
  if (crb(c,2)) { goto L_801C68D0; } // 801C68C4
  c->r[0]=R16(c->r[30]+0x0000006Eu); // 801C68C8
  W16(c->r[31]+0x0000006Eu,c->r[0]); // 801C68CC
L_801C68D0:;
  c->r[0]=rotl(c->r[29],0)&0x00001000u; cr0(c,c->r[0]); // 801C68D0
  if (crb(c,2)) { goto L_801C68E0; } // 801C68D4
  c->r[0]=R32(c->r[30]+0x00000072u); // 801C68D8
  W32(c->r[31]+0x00000072u,c->r[0]); // 801C68DC
L_801C68E0:;
  c->r[0]=rotl(c->r[29],0)&0x00002000u; cr0(c,c->r[0]); // 801C68E0
  if (crb(c,2)) { goto L_801C68F0; } // 801C68E4
  c->r[0]=R32(c->r[30]+0x00000076u); // 801C68E8
  W32(c->r[31]+0x00000076u,c->r[0]); // 801C68EC
L_801C68F0:;
  c->r[0]=rotl(c->r[29],0)&0x00004000u; cr0(c,c->r[0]); // 801C68F0
  if (crb(c,2)) { goto L_801C6904; } // 801C68F4
  c->r[0]=R32(c->r[30]+0x0000007Au); // 801C68F8
  W32(c->r[31]+0x0000007Au,c->r[0]); // 801C68FC
  goto L_801C694C; // 801C6900
L_801C6904:;
  c->r[0]=R32(c->r[31]+0x0000007Au); // 801C6904
  W32(c->r[30]+0x0000007Au,c->r[0]); // 801C6908
  goto L_801C694C; // 801C690C
L_801C6910:;
  c->r[0]=rotl(c->r[29],0)&0x00000400u; cr0(c,c->r[0]); // 801C6910
  if (crb(c,2)) { goto L_801C693C; } // 801C6914
  c->r[0]=R32(c->r[30]+0x0000006Eu); // 801C6918
  W32(c->r[31]+0x0000006Eu,c->r[0]); // 801C691C
  c->r[0]=R32(c->r[30]+0x00000072u); // 801C6920
  W32(c->r[31]+0x00000072u,c->r[0]); // 801C6924
  c->r[0]=R32(c->r[30]+0x00000076u); // 801C6928
  W32(c->r[31]+0x00000076u,c->r[0]); // 801C692C
  c->r[0]=R32(c->r[30]+0x0000007Au); // 801C6930
  W32(c->r[31]+0x0000007Au,c->r[0]); // 801C6934
  goto L_801C694C; // 801C6938
L_801C693C:;
  c->r[0]=R16(c->r[31]+0x0000007Au); // 801C693C
  W16(c->r[30]+0x0000007Au,c->r[0]); // 801C6940
  c->r[0]=R16(c->r[31]+0x0000007Cu); // 801C6944
  W16(c->r[30]+0x0000007Cu,c->r[0]); // 801C6948
L_801C694C:;
  c->r[0]=rotl(c->r[29],0)&0x00008000u; cr0(c,c->r[0]); // 801C694C
  if (crb(c,2)) { goto L_801C69A4; } // 801C6950
  c->r[0]=R32(c->r[30]+0x0000007Eu); // 801C6954
  W32(c->r[31]+0x0000007Eu,c->r[0]); // 801C6958
  c->r[0]=R32(c->r[30]+0x00000082u); // 801C695C
  W32(c->r[31]+0x00000082u,c->r[0]); // 801C6960
  c->r[0]=R32(c->r[30]+0x00000086u); // 801C6964
  W32(c->r[31]+0x00000086u,c->r[0]); // 801C6968
  c->r[0]=R32(c->r[30]+0x0000008Au); // 801C696C
  W32(c->r[31]+0x0000008Au,c->r[0]); // 801C6970
  c->r[0]=R32(c->r[30]+0x0000008Eu); // 801C6974
  W32(c->r[31]+0x0000008Eu,c->r[0]); // 801C6978
  c->r[0]=R32(c->r[30]+0x00000092u); // 801C697C
  W32(c->r[31]+0x00000092u,c->r[0]); // 801C6980
  c->r[0]=R32(c->r[30]+0x00000096u); // 801C6984
  W32(c->r[31]+0x00000096u,c->r[0]); // 801C6988
  c->r[0]=R32(c->r[30]+0x0000009Au); // 801C698C
  W32(c->r[31]+0x0000009Au,c->r[0]); // 801C6990
  c->r[0]=R32(c->r[30]+0x0000009Eu); // 801C6994
  W32(c->r[31]+0x0000009Eu,c->r[0]); // 801C6998
  c->r[0]=R32(c->r[30]+0x000000A2u); // 801C699C
  W32(c->r[31]+0x000000A2u,c->r[0]); // 801C69A0
L_801C69A4:;
  c->r[0]=rotl(c->r[29],0)&0x00020000u; cr0(c,c->r[0]); // 801C69A4
  if (crb(c,2)) { goto L_801C69C0; } // 801C69A8
  c->r[0]=R16(c->r[30]+0x000000A6u); // 801C69AC
  W16(c->r[31]+0x000000A6u,c->r[0]); // 801C69B0
  c->r[0]=R16(c->r[30]+0x000000A8u); // 801C69B4
  W16(c->r[31]+0x000000A8u,c->r[0]); // 801C69B8
  goto L_801C6A00; // 801C69BC
L_801C69C0:;
  c->r[0]=rotl(c->r[29],0)&0x00010000u; cr0(c,c->r[0]); // 801C69C0
  if (crb(c,2)) { goto L_801C6A00; } // 801C69C4
  c->r[0]=R16(c->r[30]+0x000000A6u); // 801C69C8
  W16(c->r[31]+0x000000A6u,c->r[0]); // 801C69CC
  c->r[0]=R16(c->r[30]+0x000000A8u); // 801C69D0
  W16(c->r[31]+0x000000A8u,c->r[0]); // 801C69D4
  c->r[0]=R16(c->r[30]+0x000000AAu); // 801C69D8
  W16(c->r[31]+0x000000AAu,c->r[0]); // 801C69DC
  c->r[0]=R16(c->r[30]+0x000000ACu); // 801C69E0
  W16(c->r[31]+0x000000ACu,c->r[0]); // 801C69E4
  c->r[0]=R16(c->r[30]+0x000000AEu); // 801C69E8
  W16(c->r[31]+0x000000AEu,c->r[0]); // 801C69EC
  c->r[0]=R16(c->r[30]+0x000000B0u); // 801C69F0
  W16(c->r[31]+0x000000B0u,c->r[0]); // 801C69F4
  c->r[0]=R16(c->r[30]+0x000000B2u); // 801C69F8
  W16(c->r[31]+0x000000B2u,c->r[0]); // 801C69FC
L_801C6A00:;
  c->r[0]=rotl(c->r[29],0)&0x00040000u; cr0(c,c->r[0]); // 801C6A00
  if (crb(c,2)) { goto L_801C6A20; } // 801C6A04
  c->r[0]=R16(c->r[30]+0x000000B4u); // 801C6A08
  W16(c->r[31]+0x000000B4u,c->r[0]); // 801C6A0C
  c->r[0]=R16(c->r[30]+0x000000B6u); // 801C6A10
  W16(c->r[31]+0x000000B6u,c->r[0]); // 801C6A14
  c->r[0]=R16(c->r[30]+0x000000B8u); // 801C6A18
  W16(c->r[31]+0x000000B8u,c->r[0]); // 801C6A1C
L_801C6A20:;
  c->r[0]=rotl(c->r[29],0)&0x00100000u; cr0(c,c->r[0]); // 801C6A20
  if (crb(c,2)) { goto L_801C6A3C; } // 801C6A24
  c->r[0]=R16(c->r[30]+0x000000BEu); // 801C6A28
  W16(c->r[31]+0x000000BEu,c->r[0]); // 801C6A2C
  c->r[0]=R16(c->r[30]+0x000000C0u); // 801C6A30
  W16(c->r[31]+0x000000C0u,c->r[0]); // 801C6A34
  goto L_801C6A64; // 801C6A38
L_801C6A3C:;
  c->r[0]=rotl(c->r[29],0)&0x00080000u; cr0(c,c->r[0]); // 801C6A3C
  if (crb(c,2)) { goto L_801C6A64; } // 801C6A40
  c->r[0]=R16(c->r[30]+0x000000BAu); // 801C6A44
  W16(c->r[31]+0x000000BAu,c->r[0]); // 801C6A48
  c->r[0]=R16(c->r[30]+0x000000BCu); // 801C6A4C
  W16(c->r[31]+0x000000BCu,c->r[0]); // 801C6A50
  c->r[0]=R16(c->r[30]+0x000000BEu); // 801C6A54
  W16(c->r[31]+0x000000BEu,c->r[0]); // 801C6A58
  c->r[0]=R16(c->r[30]+0x000000C0u); // 801C6A5C
  W16(c->r[31]+0x000000C0u,c->r[0]); // 801C6A60
L_801C6A64:;
  c->r[0]=rotl(c->r[29],0)&0x00400000u; cr0(c,c->r[0]); // 801C6A64
  if (crb(c,2)) { goto L_801C6A98; } // 801C6A68
  c->r[0]=R16(c->r[30]+0x000000CCu); // 801C6A6C
  W16(c->r[31]+0x000000CCu,c->r[0]); // 801C6A70
  c->r[0]=R16(c->r[30]+0x000000CEu); // 801C6A74
  W16(c->r[31]+0x000000CEu,c->r[0]); // 801C6A78
  c->r[0]=R16(c->r[30]+0x000000D0u); // 801C6A7C
  W16(c->r[31]+0x000000D0u,c->r[0]); // 801C6A80
  c->r[0]=R16(c->r[30]+0x000000D2u); // 801C6A84
  W16(c->r[31]+0x000000D2u,c->r[0]); // 801C6A88
  c->r[0]=R16(c->r[30]+0x000000D4u); // 801C6A8C
  W16(c->r[31]+0x000000D4u,c->r[0]); // 801C6A90
  goto L_801C6AF0; // 801C6A94
L_801C6A98:;
  c->r[0]=rotl(c->r[29],0)&0x00200000u; cr0(c,c->r[0]); // 801C6A98
  if (crb(c,2)) { goto L_801C6AF0; } // 801C6A9C
  c->r[0]=R16(c->r[30]+0x000000C2u); // 801C6AA0
  W16(c->r[31]+0x000000C2u,c->r[0]); // 801C6AA4
  c->r[0]=R16(c->r[30]+0x000000C4u); // 801C6AA8
  W16(c->r[31]+0x000000C4u,c->r[0]); // 801C6AAC
  c->r[0]=R16(c->r[30]+0x000000C6u); // 801C6AB0
  W16(c->r[31]+0x000000C6u,c->r[0]); // 801C6AB4
  c->r[0]=R16(c->r[30]+0x000000C8u); // 801C6AB8
  W16(c->r[31]+0x000000C8u,c->r[0]); // 801C6ABC
  c->r[0]=R16(c->r[30]+0x000000CAu); // 801C6AC0
  W16(c->r[31]+0x000000CAu,c->r[0]); // 801C6AC4
  c->r[0]=R16(c->r[30]+0x000000CCu); // 801C6AC8
  W16(c->r[31]+0x000000CCu,c->r[0]); // 801C6ACC
  c->r[0]=R16(c->r[30]+0x000000CEu); // 801C6AD0
  W16(c->r[31]+0x000000CEu,c->r[0]); // 801C6AD4
  c->r[0]=R16(c->r[30]+0x000000D0u); // 801C6AD8
  W16(c->r[31]+0x000000D0u,c->r[0]); // 801C6ADC
  c->r[0]=R16(c->r[30]+0x000000D2u); // 801C6AE0
  W16(c->r[31]+0x000000D2u,c->r[0]); // 801C6AE4
  c->r[0]=R16(c->r[30]+0x000000D4u); // 801C6AE8
  W16(c->r[31]+0x000000D4u,c->r[0]); // 801C6AEC
L_801C6AF0:;
  c->r[0]=rotl(c->r[29],0)&0x00800000u; cr0(c,c->r[0]); // 801C6AF0
  if (crb(c,2)) { goto L_801C6B00; } // 801C6AF4
  c->r[0]=R16(c->r[30]+0x000000D6u); // 801C6AF8
  W16(c->r[31]+0x000000D6u,c->r[0]); // 801C6AFC
L_801C6B00:;
  c->r[0]=rotl(c->r[29],0)&0x01000000u; cr0(c,c->r[0]); // 801C6B00
  if (crb(c,2)) { goto L_801C6B10; } // 801C6B04
  c->r[0]=R16(c->r[30]+0x000000D8u); // 801C6B08
  W16(c->r[31]+0x000000D8u,c->r[0]); // 801C6B0C
L_801C6B10:;
  c->r[0]=rotl(c->r[29],0)&0x02000000u; cr0(c,c->r[0]); // 801C6B10
  if (crb(c,2)) { goto L_801C6B28; } // 801C6B14
  c->r[3]=c->r[31]+0x000000DAu; // 801C6B18
  c->r[4]=c->r[30]+0x000000DAu; // 801C6B1C
  c->r[5]=0u+0x00000020u; // 801C6B20
  c->lr=0x801C6B28u; f_80004000(c); // 801C6B24
L_801C6B28:;
  c->r[0]=rotl(c->r[29],0)&0x04000000u; cr0(c,c->r[0]); // 801C6B28
  if (crb(c,2)) { goto L_801C6B40; } // 801C6B2C
  c->r[3]=c->r[31]+0x000000FAu; // 801C6B30
  c->r[4]=c->r[30]+0x000000FAu; // 801C6B34
  c->r[5]=0u+0x00000010u; // 801C6B38
  c->lr=0x801C6B40u; f_80004000(c); // 801C6B3C
L_801C6B40:;
  c->r[0]=rotl(c->r[29],0)&0x08000000u; cr0(c,c->r[0]); // 801C6B40
  if (crb(c,2)) { goto L_801C6B58; } // 801C6B44
  c->r[3]=c->r[31]+0x0000010Au; // 801C6B48
  c->r[4]=c->r[30]+0x0000010Au; // 801C6B4C
  c->r[5]=0u+0x0000000Au; // 801C6B50
  c->lr=0x801C6B58u; f_80004000(c); // 801C6B54
L_801C6B58:;
  c->r[0]=rotl(c->r[29],0)&0x20000000u; cr0(c,c->r[0]); // 801C6B58
  if (crb(c,2)) { goto L_801C6B74; } // 801C6B5C
  c->r[0]=R16(c->r[30]+0x00000118u); // 801C6B60
  W16(c->r[31]+0x00000118u,c->r[0]); // 801C6B64
  c->r[0]=R16(c->r[30]+0x0000011Au); // 801C6B68
  W16(c->r[31]+0x0000011Au,c->r[0]); // 801C6B6C
  goto L_801C6C00; // 801C6B70
L_801C6B74:;
  c->r[0]=rotl(c->r[29],0)&0x40000000u; cr0(c,c->r[0]); // 801C6B74
  if (crb(c,2)) { goto L_801C6BA8; } // 801C6B78
  c->r[0]=R16(c->r[30]+0x0000011Eu); // 801C6B7C
  W16(c->r[31]+0x0000011Eu,c->r[0]); // 801C6B80
  c->r[0]=R16(c->r[30]+0x00000120u); // 801C6B84
  W16(c->r[31]+0x00000120u,c->r[0]); // 801C6B88
  c->r[0]=R16(c->r[30]+0x00000122u); // 801C6B8C
  W16(c->r[31]+0x00000122u,c->r[0]); // 801C6B90
  c->r[0]=R16(c->r[30]+0x00000124u); // 801C6B94
  W16(c->r[31]+0x00000124u,c->r[0]); // 801C6B98
  c->r[0]=R16(c->r[30]+0x00000126u); // 801C6B9C
  W16(c->r[31]+0x00000126u,c->r[0]); // 801C6BA0
  goto L_801C6C00; // 801C6BA4
L_801C6BA8:;
  c->r[0]=rotl(c->r[29],0)&0x10000000u; cr0(c,c->r[0]); // 801C6BA8
  if (crb(c,2)) { goto L_801C6C00; } // 801C6BAC
  c->r[0]=R16(c->r[30]+0x00000114u); // 801C6BB0
  W16(c->r[31]+0x00000114u,c->r[0]); // 801C6BB4
  c->r[0]=R16(c->r[30]+0x00000116u); // 801C6BB8
  W16(c->r[31]+0x00000116u,c->r[0]); // 801C6BBC
  c->r[0]=R16(c->r[30]+0x00000118u); // 801C6BC0
  W16(c->r[31]+0x00000118u,c->r[0]); // 801C6BC4
  c->r[0]=R16(c->r[30]+0x0000011Au); // 801C6BC8
  W16(c->r[31]+0x0000011Au,c->r[0]); // 801C6BCC
  c->r[0]=R16(c->r[30]+0x0000011Cu); // 801C6BD0
  W16(c->r[31]+0x0000011Cu,c->r[0]); // 801C6BD4
  c->r[0]=R16(c->r[30]+0x0000011Eu); // 801C6BD8
  W16(c->r[31]+0x0000011Eu,c->r[0]); // 801C6BDC
  c->r[0]=R16(c->r[30]+0x00000120u); // 801C6BE0
  W16(c->r[31]+0x00000120u,c->r[0]); // 801C6BE4
  c->r[0]=R16(c->r[30]+0x00000122u); // 801C6BE8
  W16(c->r[31]+0x00000122u,c->r[0]); // 801C6BEC
  c->r[0]=R16(c->r[30]+0x00000124u); // 801C6BF0
  W16(c->r[31]+0x00000124u,c->r[0]); // 801C6BF4
  c->r[0]=R16(c->r[30]+0x00000126u); // 801C6BF8
  W16(c->r[31]+0x00000126u,c->r[0]); // 801C6BFC
L_801C6C00:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C6C00
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C6C04
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C6C08
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C6C0C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801C6C10
  c->lr=c->r[0]; // 801C6C14
  c->r[1]=c->r[1]+0x00000020u; // 801C6C18
  return; // 801C6C1C
}

// __AXSyncPBs
void f_801C6C20(Ctx* __restrict c) {
  trace_call(0x801C6C20u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6C20
  c->r[0]=c->lr; // 801C6C24
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C6C28
  c->r[11]=c->r[1]+0x00000030u; // 801C6C2C
  c->lr=0x801C6C34u; f_800C2E44(c); // 801C6C30
  c->r[0]=R32(c->r[13]+0xFFFF9AA4u); // 801C6C34
  c->r[25]=c->r[3]|c->r[3]; // 801C6C38
  c->r[29]=0u+0x00000000u; // 801C6C3C
  W32(c->r[13]+0xFFFF9AA8u,c->r[29]); // 801C6C40
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 801C6C44
  c->r[3]=R32(c->r[13]+0xFFFF9A98u); // 801C6C48
  c->lr=0x801C6C50u; f_80244E20(c); // 801C6C4C
  c->r[0]=R32(c->r[13]+0xFFFF9AA4u); // 801C6C50
  c->r[3]=R32(c->r[13]+0xFFFF9A9Cu); // 801C6C54
  c->r[4]=rotl(c->r[0],6)&0xFFFFFFC0u; // 801C6C58
  c->lr=0x801C6C60u; f_80244E20(c); // 801C6C5C
  c->lr=0x801C6C64u; f_801C4F20(c); // 801C6C60
  c->r[0]=R32(c->r[13]+0xFFFF9AA4u); // 801C6C64
  c->r[31]=0u+0x803A0000u; // 801C6C68
  c->r[30]=0u+0x803A0000u; // 801C6C6C
  c->r[27]=0u+0x0000001Fu; // 801C6C70
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)600); // 801C6C74
  c->r[31]=c->r[31]+0xFFFFADA0u; // 801C6C78
  c->r[30]=c->r[30]+0xFFFFAD20u; // 801C6C7C
  c->r[0]=c->r[3]+c->r[0]; // 801C6C80
  c->r[3]=c->r[0]+c->r[25]; // 801C6C84
  c->r[28]=c->r[3]+0x00000020u; // 801C6C88
L_801C6C8C:;
  c->r[3]=c->r[27]|c->r[27]; // 801C6C8C
  c->lr=0x801C6C94u; f_801C41A0(c); // 801C6C90
  c->r[26]=c->r[3]|c->r[3]; // 801C6C94
  goto L_801C6E8C; // 801C6C98
L_801C6C9C:;
  c->r[0]=R16(c->r[26]+0x0000006Cu); // 801C6C9C
  cmpu(c,0,c->r[0],0x00000001u); // 801C6CA0
  if (!crb(c,2)) { goto L_801C6CAC; } // 801C6CA4
  c->r[28]=c->r[28]+0x00000081u; // 801C6CA8
L_801C6CAC:;
  c->r[0]=R32(c->r[26]+0x00000020u); // 801C6CAC
  cmps(c,0,(int32_t)c->r[0],0); // 801C6CB0
  if (crb(c,2)) { goto L_801C6CCC; } // 801C6CB4
  c->r[0]=R32(c->r[26]+0x00000018u); // 801C6CB8
  c->r[3]=R32(c->r[13]+0xFFFF9A98u); // 801C6CBC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 801C6CC0
  c->r[3]=c->r[3]+c->r[0]; // 801C6CC4
  c->lr=0x801C6CCCu; f_801C6560(c); // 801C6CC8
L_801C6CCC:;
  c->r[0]=R16(c->r[26]+0x00000038u); // 801C6CCC
  cmpu(c,0,c->r[0],0x00000001u); // 801C6CD0
  if (!crb(c,2)) { goto L_801C6E78; } // 801C6CD4
  c->r[0]=R16(c->r[26]+0x000000E2u); // 801C6CD8
  c->r[28]=c->r[28]+0x00000183u; // 801C6CDC
  cmps(c,0,(int32_t)c->r[0],0); // 801C6CE0
  if (crb(c,2)) { goto L_801C6CEC; } // 801C6CE4
  c->r[28]=c->r[28]+0x00000135u; // 801C6CE8
L_801C6CEC:;
  c->r[0]=R16(c->r[26]+0x000000EAu); // 801C6CEC
  cmps(c,0,(int32_t)c->r[0],0); // 801C6CF0
  if (crb(c,2)) { goto L_801C6CFC; } // 801C6CF4
  c->r[28]=c->r[28]+0x00000400u; // 801C6CF8
L_801C6CFC:;
  c->r[0]=R16(c->r[26]+0x0000006Cu); // 801C6CFC
  cmpu(c,0,c->r[0],0x00000001u); // 801C6D00
  if (!crb(c,2)) { goto L_801C6D0C; } // 801C6D04
  c->r[28]=c->r[28]+0x0000001Bu; // 801C6D08
L_801C6D0C:;
  c->r[3]=R16(c->r[26]+0x00000030u); // 801C6D0C
  c->r[0]=R16(c->r[26]+0x000000CEu); // 801C6D10
  cmps(c,0,(int32_t)c->r[3],0); // 801C6D14
  c->r[4]=R16(c->r[26]+0x000000D0u); // 801C6D18
  c->r[4]=(rotl(c->r[0],16)&0xFFFF0000u)|(c->r[4]&~0xFFFF0000u); // 801C6D1C
  if (!crb(c,2)) { goto L_801C6D3C; } // 801C6D20
  c->r[3]=rotl(c->r[4],9)&0xFFFFFE00u; // 801C6D24
  c->r[3]=c->r[3]+0x00010000u; // 801C6D28
  c->r[0]=c->r[3]+0xFFFF8000u; // 801C6D2C
  c->r[3]=rotl(c->r[0],16)&0x0000FFFFu; // 801C6D30
  c->r[0]=c->r[3]+0x00000619u; // 801C6D34
  goto L_801C6D5C; // 801C6D38
L_801C6D3C:;
  cmpu(c,0,c->r[3],0x00000001u); // 801C6D3C
  c->r[0]=0u+0x0000025Du; // 801C6D40
  if (!crb(c,2)) { goto L_801C6D5C; } // 801C6D44
  c->r[3]=rotl(c->r[4],9)&0xFFFFFE00u; // 801C6D48
  c->r[3]=c->r[3]+0x00010000u; // 801C6D4C
  c->r[0]=c->r[3]+0xFFFF8000u; // 801C6D50
  c->r[3]=rotl(c->r[0],16)&0x0000FFFFu; // 801C6D54
  c->r[0]=c->r[3]+0x000005BAu; // 801C6D58
L_801C6D5C:;
  c->r[4]=R32(c->r[26]+0x00000034u); // 801C6D5C
  c->r[28]=c->r[28]+c->r[0]; // 801C6D60
  c->r[0]=R16(c->r[26]+0x000000FEu); // 801C6D64
  c->r[5]=rotl(c->r[4],13)&0x0000007Cu; // 801C6D68
  c->r[3]=rotl(c->r[4],2)&0x0000007Cu; // 801C6D6C
  c->r[6]=rotl(c->r[4],8)&0x0000007Cu; // 801C6D70
  c->r[4]=rotl(c->r[4],18)&0x0000007Cu; // 801C6D74
  cmpu(c,0,c->r[0],0x00000001u); // 801C6D78
  c->r[5]=R32(c->r[30]+c->r[5]); // 801C6D7C
  c->r[0]=R32(c->r[30]+c->r[3]); // 801C6D80
  c->r[6]=R32(c->r[30]+c->r[6]); // 801C6D84
  c->r[4]=R32(c->r[30]+c->r[4]); // 801C6D88
  c->r[0]=c->r[5]+c->r[0]; // 801C6D8C
  c->r[3]=c->r[28]+c->r[6]; // 801C6D90
  c->r[0]=c->r[4]+c->r[0]; // 801C6D94
  c->r[28]=c->r[3]+c->r[0]; // 801C6D98
  if (!crb(c,2)) { goto L_801C6E28; } // 801C6D9C
  c->r[0]=R16(c->r[26]+0x0000013Cu); // 801C6DA0
  c->r[28]=c->r[28]+0x00000265u; // 801C6DA4
  cmpu(c,0,c->r[0],0x00000001u); // 801C6DA8
  if (!crb(c,2)) { goto L_801C6DB8; } // 801C6DAC
  c->r[28]=c->r[28]+0x00000076u; // 801C6DB0
  goto L_801C6DC4; // 801C6DB4
L_801C6DB8:;
  cmpu(c,0,c->r[0],0x00000002u); // 801C6DB8
  if (!crb(c,2)) { goto L_801C6DC4; } // 801C6DBC
  c->r[28]=c->r[28]+0x00000342u; // 801C6DC0
L_801C6DC4:;
  c->r[3]=R16(c->r[26]+0x00000100u); // 801C6DC4
  c->r[4]=rotl(c->r[3],30)&0x0000000Cu; // 801C6DC8
  c->r[0]=rotl(c->r[3],2)&0x0000000Cu; // 801C6DCC
  c->r[4]=R32(c->r[31]+c->r[4]); // 801C6DD0
  c->r[9]=rotl(c->r[3],20)&0x0000000Cu; // 801C6DD4
  c->r[0]=R32(c->r[31]+c->r[0]); // 801C6DD8
  c->r[8]=rotl(c->r[3],22)&0x0000000Cu; // 801C6DDC
  c->r[7]=rotl(c->r[3],24)&0x0000000Cu; // 801C6DE0
  c->r[6]=rotl(c->r[3],26)&0x0000000Cu; // 801C6DE4
  c->r[5]=rotl(c->r[3],28)&0x0000000Cu; // 801C6DE8
  c->r[3]=rotl(c->r[3],0)&0x0000000Cu; // 801C6DEC
  c->r[7]=R32(c->r[31]+c->r[7]); // 801C6DF0
  c->r[0]=c->r[4]+c->r[0]; // 801C6DF4
  c->r[3]=R32(c->r[31]+c->r[3]); // 801C6DF8
  c->r[9]=R32(c->r[31]+c->r[9]); // 801C6DFC
  c->r[7]=c->r[28]+c->r[7]; // 801C6E00
  c->r[8]=R32(c->r[31]+c->r[8]); // 801C6E04
  c->r[0]=c->r[3]+c->r[0]; // 801C6E08
  c->r[6]=R32(c->r[31]+c->r[6]); // 801C6E0C
  c->r[4]=R32(c->r[31]+c->r[5]); // 801C6E10
  c->r[8]=c->r[9]+c->r[8]; // 801C6E14
  c->r[3]=c->r[8]+c->r[7]; // 801C6E18
  c->r[4]=c->r[6]+c->r[4]; // 801C6E1C
  c->r[0]=c->r[4]+c->r[0]; // 801C6E20
  c->r[28]=c->r[3]+c->r[0]; // 801C6E24
L_801C6E28:;
  c->r[0]=R32(c->r[13]+0xFFFF9AB0u); // 801C6E28
  cmpu(c,0,c->r[0],c->r[28]); // 801C6E2C
  if (!crb(c,1)) { goto L_801C6E40; } // 801C6E30
  c->r[3]=c->r[26]|c->r[26]; // 801C6E34
  c->lr=0x801C6E3Cu; f_801C66D0(c); // 801C6E38
  goto L_801C6E80; // 801C6E3C
L_801C6E40:;
  c->r[0]=R32(c->r[26]+0x00000018u); // 801C6E40
  c->r[3]=R32(c->r[13]+0xFFFF9A98u); // 801C6E44
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 801C6E48
  c->r[25]=c->r[3]+c->r[0]; // 801C6E4C
  c->r[0]=R16(c->r[25]+0x00000010u); // 801C6E50
  cmpu(c,0,c->r[0],0x00000001u); // 801C6E54
  if (!crb(c,2)) { goto L_801C6E64; } // 801C6E58
  c->r[3]=c->r[25]|c->r[25]; // 801C6E5C
  c->lr=0x801C6E64u; f_801C6560(c); // 801C6E60
L_801C6E64:;
  W16(c->r[26]+0x00000038u,c->r[29]); // 801C6E64
  c->r[3]=c->r[26]|c->r[26]; // 801C6E68
  W16(c->r[25]+0x00000010u,c->r[29]); // 801C6E6C
  c->lr=0x801C6E74u; f_801C43F0(c); // 801C6E70
  goto L_801C6E80; // 801C6E74
L_801C6E78:;
  c->r[3]=c->r[26]|c->r[26]; // 801C6E78
  c->lr=0x801C6E80u; f_801C66D0(c); // 801C6E7C
L_801C6E80:;
  W32(c->r[26]+0x0000001Cu,c->r[29]); // 801C6E80
  W32(c->r[26]+0x00000020u,c->r[29]); // 801C6E84
  c->r[26]=R32(c->r[26]+0x00000000u); // 801C6E88
L_801C6E8C:;
  cmps(c,0,(int32_t)c->r[26],0); // 801C6E8C
  if (!crb(c,2)) { IRQCHK(c); goto L_801C6C9C; } // 801C6E90
  c->r[27]=addc(c,c->r[27],0xFFFFFFFFu,0); cr0(c,c->r[27]); // 801C6E94
  if (!crb(c,2)) { IRQCHK(c); goto L_801C6C8C; } // 801C6E98
  W32(c->r[13]+0xFFFF9AACu,c->r[28]); // 801C6E9C
  c->r[3]=0u+0x00000000u; // 801C6EA0
  c->lr=0x801C6EA8u; f_801C41A0(c); // 801C6EA4
  c->r[25]=c->r[3]|c->r[3]; // 801C6EA8
  c->r[26]=0u+0x00000000u; // 801C6EAC
  goto L_801C6EF0; // 801C6EB0
L_801C6EB4:;
  c->r[0]=R32(c->r[25]+0x00000020u); // 801C6EB4
  cmps(c,0,(int32_t)c->r[0],0); // 801C6EB8
  if (crb(c,2)) { goto L_801C6ED4; } // 801C6EBC
  c->r[0]=R32(c->r[25]+0x00000018u); // 801C6EC0
  c->r[3]=R32(c->r[13]+0xFFFF9A98u); // 801C6EC4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 801C6EC8
  c->r[3]=c->r[3]+c->r[0]; // 801C6ECC
  c->lr=0x801C6ED4u; f_801C6560(c); // 801C6ED0
L_801C6ED4:;
  W32(c->r[25]+0x00000020u,c->r[26]); // 801C6ED4
  c->r[0]=R32(c->r[25]+0x00000018u); // 801C6ED8
  c->r[3]=R32(c->r[13]+0xFFFF9A98u); // 801C6EDC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 801C6EE0
  c->r[3]=c->r[3]+c->r[0]; // 801C6EE4
  W16(c->r[3]+0x00000010u,c->r[26]); // 801C6EE8
  c->r[25]=R32(c->r[25]+0x00000000u); // 801C6EEC
L_801C6EF0:;
  cmps(c,0,(int32_t)c->r[25],0); // 801C6EF0
  if (!crb(c,2)) { IRQCHK(c); goto L_801C6EB4; } // 801C6EF4
  c->r[0]=R32(c->r[13]+0xFFFF9AA4u); // 801C6EF8
  c->r[3]=R32(c->r[13]+0xFFFF9A98u); // 801C6EFC
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 801C6F00
  c->lr=0x801C6F08u; f_80244E50(c); // 801C6F04
  c->r[0]=R32(c->r[13]+0xFFFF9AA4u); // 801C6F08
  c->r[3]=R32(c->r[13]+0xFFFF9A9Cu); // 801C6F0C
  c->r[4]=rotl(c->r[0],6)&0xFFFFFFC0u; // 801C6F10
  c->lr=0x801C6F18u; f_80244E50(c); // 801C6F14
  c->r[11]=c->r[1]+0x00000030u; // 801C6F18
  c->lr=0x801C6F20u; f_800C2E90(c); // 801C6F1C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C6F20
  c->lr=c->r[0]; // 801C6F24
  c->r[1]=c->r[1]+0x00000030u; // 801C6F28
  return; // 801C6F2C
}

// __AXGetPBs
void f_801C6F30(Ctx* __restrict c) {
  trace_call(0x801C6F30u);
  c->r[3]=R32(c->r[13]+0xFFFF9A98u); // 801C6F30
  return; // 801C6F34
}

// __AXSetPBDefault
void f_801C6F40(Ctx* __restrict c) {
  trace_call(0x801C6F40u);
  c->r[4]=0u+0x18A80000u; // 801C6F40
  c->r[5]=0u+0x00000000u; // 801C6F44
  c->r[0]=c->r[4]+0x00000024u; // 801C6F48
  W16(c->r[3]+0x00000038u,c->r[5]); // 801C6F4C
  W16(c->r[3]+0x0000006Cu,c->r[5]); // 801C6F50
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 801C6F54
  W16(c->r[3]+0x000000E2u,c->r[5]); // 801C6F58
  W16(c->r[3]+0x000000EAu,c->r[5]); // 801C6F5C
  W16(c->r[3]+0x000000FEu,c->r[5]); // 801C6F60
  W16(c->r[3]+0x0000013Cu,c->r[5]); // 801C6F64
  W16(c->r[3]+0x00000132u,c->r[5]); // 801C6F68
  W16(c->r[3]+0x00000134u,c->r[5]); // 801C6F6C
  W16(c->r[3]+0x00000136u,c->r[5]); // 801C6F70
  W16(c->r[3]+0x00000138u,c->r[5]); // 801C6F74
  W16(c->r[3]+0x0000013Au,c->r[5]); // 801C6F78
  return; // 801C6F7C
}

// __AXVPBInit
void f_801C6F80(Ctx* __restrict c) {
  trace_call(0x801C6F80u);
  c->r[5]=0u+0x80440000u; // 801C6F80
  c->r[4]=0u+0x80450000u; // 801C6F84
  c->r[3]=0u+0x80450000u; // 801C6F88
  c->r[0]=0u+0x00000060u; // 801C6F8C
  c->r[5]=c->r[5]+0x00005520u; // 801C6F90
  c->r[4]=c->r[4]+0xFFFFCD20u; // 801C6F94
  c->r[3]=c->r[3]+0xFFFFE520u; // 801C6F98
  W32(c->r[13]+0xFFFF9AA4u,c->r[0]); // 801C6F9C
  W32(c->r[13]+0xFFFF9A98u,c->r[5]); // 801C6FA0
  W32(c->r[13]+0xFFFF9A9Cu,c->r[4]); // 801C6FA4
  W32(c->r[13]+0xFFFF9AA0u,c->r[3]); // 801C6FA8
  goto L_801C6FB0; // 801C6FAC
L_801C6FB0:;
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C6FB0
  c->r[0]=c->lr; // 801C6FB4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C6FB8
  c->r[11]=c->r[1]+0x00000030u; // 801C6FBC
  c->lr=0x801C6FC4u; f_800C2E44(c); // 801C6FC0
  c->r[4]=0u+0x80000000u; // 801C6FC4
  c->r[3]=0u+0x89050000u; // 801C6FC8
  c->r[4]=R32(c->r[4]+0x000000F8u); // 801C6FCC
  c->r[5]=c->r[3]+0xFFFFFD51u; // 801C6FD0
  c->r[0]=R32(c->r[13]+0xFFFF9AA4u); // 801C6FD4
  c->r[3]=0u+0x00000000u; // 801C6FD8
  c->r[5]=(uint32_t)(((uint64_t)c->r[5]*(uint64_t)c->r[4])>>32); // 801C6FDC
  W32(c->r[13]+0xFFFF9AACu,c->r[3]); // 801C6FE0
  c->r[7]=R32(c->r[13]+0xFFFF9A98u); // 801C6FE4
  c->r[6]=(uint32_t)((int32_t)c->r[0]*(int32_t)80); // 801C6FE8
  c->r[0]=c->r[4]-c->r[5]; // 801C6FEC
  c->r[0]=rotl(c->r[0],31)&0x7FFFFFFFu; // 801C6FF0
  c->r[0]=c->r[0]+c->r[5]; // 801C6FF4
  cmps(c,0,(int32_t)c->r[6],0); // 801C6FF8
  c->r[0]=rotl(c->r[0],23)&0x007FFFFFu; // 801C6FFC
  W32(c->r[13]+0xFFFF9AB0u,c->r[0]); // 801C7000
  if (crb(c,2)) { goto L_801C7054; } // 801C7004
  c->r[0]=rotl(c->r[6],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 801C7008
  c->ctr=c->r[0]; // 801C700C
  if (crb(c,2)) { goto L_801C7044; } // 801C7010
L_801C7014:;
  W32(c->r[7]+0x00000000u,c->r[3]); // 801C7014
  W32(c->r[7]+0x00000004u,c->r[3]); // 801C7018
  W32(c->r[7]+0x00000008u,c->r[3]); // 801C701C
  W32(c->r[7]+0x0000000Cu,c->r[3]); // 801C7020
  W32(c->r[7]+0x00000010u,c->r[3]); // 801C7024
  W32(c->r[7]+0x00000014u,c->r[3]); // 801C7028
  W32(c->r[7]+0x00000018u,c->r[3]); // 801C702C
  W32(c->r[7]+0x0000001Cu,c->r[3]); // 801C7030
  c->r[7]=c->r[7]+0x00000020u; // 801C7034
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C7014; } // 801C7038
  c->r[6]=c->r[6]&0x00000007u; cr0(c,c->r[6]); // 801C703C
  if (crb(c,2)) { goto L_801C7054; } // 801C7040
L_801C7044:;
  c->ctr=c->r[6]; // 801C7044
L_801C7048:;
  W32(c->r[7]+0x00000000u,c->r[3]); // 801C7048
  c->r[7]=c->r[7]+0x00000004u; // 801C704C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C7048; } // 801C7050
L_801C7054:;
  c->r[0]=R32(c->r[13]+0xFFFF9AA4u); // 801C7054
  c->r[3]=0u+0x00000000u; // 801C7058
  c->r[4]=R32(c->r[13]+0xFFFF9A9Cu); // 801C705C
  c->r[5]=rotl(c->r[0],4)&0xFFFFFFF0u; cr0(c,c->r[5]); // 801C7060
  if (crb(c,2)) { goto L_801C70B4; } // 801C7064
  c->r[0]=rotl(c->r[5],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 801C7068
  c->ctr=c->r[0]; // 801C706C
  if (crb(c,2)) { goto L_801C70A4; } // 801C7070
L_801C7074:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 801C7074
  W32(c->r[4]+0x00000004u,c->r[3]); // 801C7078
  W32(c->r[4]+0x00000008u,c->r[3]); // 801C707C
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 801C7080
  W32(c->r[4]+0x00000010u,c->r[3]); // 801C7084
  W32(c->r[4]+0x00000014u,c->r[3]); // 801C7088
  W32(c->r[4]+0x00000018u,c->r[3]); // 801C708C
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 801C7090
  c->r[4]=c->r[4]+0x00000020u; // 801C7094
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C7074; } // 801C7098
  c->r[5]=c->r[5]&0x00000007u; cr0(c,c->r[5]); // 801C709C
  if (crb(c,2)) { goto L_801C70B4; } // 801C70A0
L_801C70A4:;
  c->ctr=c->r[5]; // 801C70A4
L_801C70A8:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 801C70A8
  c->r[4]=c->r[4]+0x00000004u; // 801C70AC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C70A8; } // 801C70B0
L_801C70B4:;
  c->r[0]=R32(c->r[13]+0xFFFF9AA4u); // 801C70B4
  c->r[3]=0u+0x00000000u; // 801C70B8
  c->r[4]=R32(c->r[13]+0xFFFF9AA0u); // 801C70BC
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)90); // 801C70C0
  cmps(c,0,(int32_t)c->r[5],0); // 801C70C4
  if (crb(c,2)) { goto L_801C711C; } // 801C70C8
  c->r[0]=rotl(c->r[5],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 801C70CC
  c->ctr=c->r[0]; // 801C70D0
  if (crb(c,2)) { goto L_801C7108; } // 801C70D4
L_801C70D8:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 801C70D8
  W32(c->r[4]+0x00000004u,c->r[3]); // 801C70DC
  W32(c->r[4]+0x00000008u,c->r[3]); // 801C70E0
  W32(c->r[4]+0x0000000Cu,c->r[3]); // 801C70E4
  W32(c->r[4]+0x00000010u,c->r[3]); // 801C70E8
  W32(c->r[4]+0x00000014u,c->r[3]); // 801C70EC
  W32(c->r[4]+0x00000018u,c->r[3]); // 801C70F0
  W32(c->r[4]+0x0000001Cu,c->r[3]); // 801C70F4
  c->r[4]=c->r[4]+0x00000020u; // 801C70F8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C70D8; } // 801C70FC
  c->r[5]=c->r[5]&0x00000007u; cr0(c,c->r[5]); // 801C7100
  if (crb(c,2)) { goto L_801C711C; } // 801C7104
L_801C7108:;
  c->ctr=c->r[5]; // 801C7108
  c->r[0]=c->r[0]|0x00000000u; // 801C710C
L_801C7110:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 801C7110
  c->r[4]=c->r[4]+0x00000004u; // 801C7114
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C7110; } // 801C7118
L_801C711C:;
  c->r[3]=0u+0x18A80000u; // 801C711C
  c->r[31]=0u+0x00000000u; // 801C7120
  c->r[29]=c->r[3]+0x00000024u; // 801C7124
  c->r[27]=0u+0x00000000u; // 801C7128
  c->r[26]=0u+0x00000000u; // 801C712C
  c->r[25]=0u+0x00000000u; // 801C7130
  c->r[28]=0u+0x00000000u; // 801C7134
  c->r[30]=0u+0x00000001u; // 801C7138
  goto L_801C720C; // 801C713C
L_801C7140:;
  c->r[0]=R32(c->r[13]+0xFFFF9AA0u); // 801C7140
  c->r[5]=R32(c->r[13]+0xFFFF9A98u); // 801C7144
  c->r[4]=R32(c->r[13]+0xFFFF9A9Cu); // 801C7148
  c->r[3]=c->r[0]+c->r[25]; // 801C714C
  c->r[5]=c->r[5]+c->r[27]; // 801C7150
  W32(c->r[3]+0x00000018u,c->r[31]); // 801C7154
  c->r[6]=c->r[4]+c->r[26]; // 801C7158
  W32(c->r[3]+0x00000024u,c->r[6]); // 801C715C
  W16(c->r[3]+0x00000038u,c->r[28]); // 801C7160
  W16(c->r[3]+0x0000006Cu,c->r[28]); // 801C7164
  W32(c->r[3]+0x0000001Cu,c->r[29]); // 801C7168
  W16(c->r[3]+0x000000E2u,c->r[28]); // 801C716C
  W16(c->r[3]+0x000000EAu,c->r[28]); // 801C7170
  W16(c->r[3]+0x000000FEu,c->r[28]); // 801C7174
  W16(c->r[3]+0x0000013Cu,c->r[28]); // 801C7178
  W16(c->r[3]+0x00000132u,c->r[28]); // 801C717C
  W16(c->r[3]+0x00000134u,c->r[28]); // 801C7180
  W16(c->r[3]+0x00000136u,c->r[28]); // 801C7184
  W16(c->r[3]+0x00000138u,c->r[28]); // 801C7188
  W16(c->r[3]+0x0000013Au,c->r[28]); // 801C718C
  c->r[4]=R32(c->r[13]+0xFFFF9AA4u); // 801C7190
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801C7194
  cmpu(c,0,c->r[31],c->r[0]); // 801C7198
  if (!crb(c,2)) { goto L_801C71B4; } // 801C719C
  W16(c->r[5]+0x00000002u,c->r[28]); // 801C71A0
  W16(c->r[5]+0x00000000u,c->r[28]); // 801C71A4
  W16(c->r[3]+0x0000002Au,c->r[28]); // 801C71A8
  W16(c->r[3]+0x00000028u,c->r[28]); // 801C71AC
  goto L_801C71CC; // 801C71B0
L_801C71B4:;
  c->r[0]=c->r[5]+0x00000140u; // 801C71B4
  c->r[4]=rotl(c->r[0],16)&0x0000FFFFu; // 801C71B8
  W16(c->r[3]+0x00000028u,c->r[4]); // 801C71BC
  W16(c->r[3]+0x0000002Au,c->r[0]); // 801C71C0
  W16(c->r[5]+0x00000000u,c->r[4]); // 801C71C4
  W16(c->r[5]+0x00000002u,c->r[0]); // 801C71C8
L_801C71CC:;
  c->r[0]=rotl(c->r[5],16)&0x0000FFFFu; // 801C71CC
  W16(c->r[3]+0x0000002Cu,c->r[0]); // 801C71D0
  c->r[4]=rotl(c->r[6],16)&0x0000FFFFu; // 801C71D4
  W16(c->r[3]+0x0000002Eu,c->r[5]); // 801C71D8
  W16(c->r[5]+0x00000004u,c->r[0]); // 801C71DC
  W16(c->r[5]+0x00000006u,c->r[5]); // 801C71E0
  W16(c->r[3]+0x0000006Eu,c->r[4]); // 801C71E4
  W16(c->r[3]+0x00000070u,c->r[6]); // 801C71E8
  W16(c->r[5]+0x00000046u,c->r[4]); // 801C71EC
  W16(c->r[5]+0x00000048u,c->r[6]); // 801C71F0
  W32(c->r[3]+0x0000000Cu,c->r[30]); // 801C71F4
  c->lr=0x801C71FCu; f_801C43D0(c); // 801C71F8
  c->r[27]=c->r[27]+0x00000140u; // 801C71FC
  c->r[26]=c->r[26]+0x00000040u; // 801C7200
  c->r[25]=c->r[25]+0x00000168u; // 801C7204
  c->r[31]=c->r[31]+0x00000001u; // 801C7208
L_801C720C:;
  c->r[0]=R32(c->r[13]+0xFFFF9AA4u); // 801C720C
  cmpu(c,0,c->r[31],c->r[0]); // 801C7210
  if (crb(c,0)) { IRQCHK(c); goto L_801C7140; } // 801C7214
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)320); // 801C7218
  c->r[3]=R32(c->r[13]+0xFFFF9A98u); // 801C721C
  c->lr=0x801C7224u; f_80244E50(c); // 801C7220
  c->r[11]=c->r[1]+0x00000030u; // 801C7224
  c->lr=0x801C722Cu; f_800C2E90(c); // 801C7228
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C722C
  c->lr=c->r[0]; // 801C7230
  c->r[1]=c->r[1]+0x00000030u; // 801C7234
  return; // 801C7238
}

// fn_801C7240
void f_801C7240(Ctx* __restrict c) {
  trace_call(0x801C7240u);
  c->r[0]=0u+0x00000000u; // 801C7240
  W32(c->r[13]+0xFFFF9A98u,c->r[0]); // 801C7244
  W32(c->r[13]+0xFFFF9A9Cu,c->r[0]); // 801C7248
  W32(c->r[13]+0xFFFF9AA0u,c->r[0]); // 801C724C
  W32(c->r[13]+0xFFFF9AA4u,c->r[0]); // 801C7250
  return; // 801C7254
}

// fn_801C7260
void f_801C7260(Ctx* __restrict c) {
  trace_call(0x801C7260u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7260
  c->r[0]=c->lr; // 801C7264
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C7268
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C726C
  c->r[31]=c->r[4]|c->r[4]; // 801C7270
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C7274
  c->r[30]=c->r[3]|c->r[3]; // 801C7278
  c->lr=0x801C7280u; f_802494C0(c); // 801C727C
  cmps(c,0,(int32_t)c->r[31],0); // 801C7280
  if (crb(c,2)) { goto L_801C72AC; } // 801C7284
  cmpu(c,0,c->r[31],0x00000001u); // 801C7288
  if (crb(c,2)) { goto L_801C72B8; } // 801C728C
  cmpu(c,0,c->r[31],0x00000002u); // 801C7290
  if (crb(c,2)) { goto L_801C72C4; } // 801C7294
  cmpu(c,0,c->r[31],0x00000003u); // 801C7298
  if (crb(c,2)) { goto L_801C72D4; } // 801C729C
  cmpu(c,0,c->r[31],0x00000004u); // 801C72A0
  if (crb(c,2)) { goto L_801C72E8; } // 801C72A4
  goto L_801C72F8; // 801C72A8
L_801C72AC:;
  c->r[0]=0u+0x00000002u; // 801C72AC
  W16(c->r[30]+0x00000030u,c->r[0]); // 801C72B0
  goto L_801C72F8; // 801C72B4
L_801C72B8:;
  c->r[0]=0u+0x00000001u; // 801C72B8
  W16(c->r[30]+0x00000030u,c->r[0]); // 801C72BC
  goto L_801C72F8; // 801C72C0
L_801C72C4:;
  c->r[0]=0u+0x00000000u; // 801C72C4
  W16(c->r[30]+0x00000030u,c->r[0]); // 801C72C8
  W16(c->r[30]+0x00000032u,c->r[0]); // 801C72CC
  goto L_801C72F8; // 801C72D0
L_801C72D4:;
  c->r[4]=0u+0x00000000u; // 801C72D4
  c->r[0]=0u+0x00000001u; // 801C72D8
  W16(c->r[30]+0x00000030u,c->r[4]); // 801C72DC
  W16(c->r[30]+0x00000032u,c->r[0]); // 801C72E0
  goto L_801C72F8; // 801C72E4
L_801C72E8:;
  c->r[4]=0u+0x00000000u; // 801C72E8
  c->r[0]=0u+0x00000002u; // 801C72EC
  W16(c->r[30]+0x00000030u,c->r[4]); // 801C72F0
  W16(c->r[30]+0x00000032u,c->r[0]); // 801C72F4
L_801C72F8:;
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 801C72F8
  c->r[0]=c->r[0]|0x00000001u; // 801C72FC
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801C7300
  c->lr=0x801C7308u; f_80249500(c); // 801C7304
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C7308
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C730C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C7310
  c->lr=c->r[0]; // 801C7314
  c->r[1]=c->r[1]+0x00000010u; // 801C7318
  return; // 801C731C
}

// AXSetVoiceState
void f_801C7320(Ctx* __restrict c) {
  trace_call(0x801C7320u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7320
  c->r[0]=c->lr; // 801C7324
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C7328
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C732C
  c->r[31]=c->r[4]|c->r[4]; // 801C7330
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C7334
  c->r[30]=c->r[3]|c->r[3]; // 801C7338
  c->lr=0x801C7340u; f_802494C0(c); // 801C733C
  c->r[0]=R16(c->r[30]+0x00000038u); // 801C7340
  cmpu(c,0,c->r[0],c->r[31]); // 801C7344
  if (!crb(c,2)) { goto L_801C7354; } // 801C7348
  c->lr=0x801C7350u; f_80249500(c); // 801C734C
  goto L_801C7378; // 801C7350
L_801C7354:;
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 801C7354
  cmps(c,0,(int32_t)c->r[31],0); // 801C7358
  W16(c->r[30]+0x00000038u,c->r[31]); // 801C735C
  c->r[0]=c->r[0]|0x00000004u; // 801C7360
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801C7364
  if (!crb(c,2)) { goto L_801C7374; } // 801C7368
  c->r[0]=0u+0x00000001u; // 801C736C
  W32(c->r[30]+0x00000020u,c->r[0]); // 801C7370
L_801C7374:;
  c->lr=0x801C7378u; f_80249500(c); // 801C7374
L_801C7378:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C7378
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C737C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C7380
  c->lr=c->r[0]; // 801C7384
  c->r[1]=c->r[1]+0x00000010u; // 801C7388
  return; // 801C738C
}

// fn_801C7390
void f_801C7390(Ctx* __restrict c) {
  trace_call(0x801C7390u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7390
  c->r[0]=c->lr; // 801C7394
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C7398
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C739C
  c->r[31]=c->r[4]|c->r[4]; // 801C73A0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C73A4
  c->r[30]=c->r[3]|c->r[3]; // 801C73A8
  c->lr=0x801C73B0u; f_802494C0(c); // 801C73AC
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 801C73B0
  W16(c->r[30]+0x0000003Au,c->r[31]); // 801C73B4
  c->r[0]=c->r[0]|0x00000008u; // 801C73B8
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801C73BC
  c->lr=0x801C73C4u; f_80249500(c); // 801C73C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C73C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C73C8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C73CC
  c->lr=c->r[0]; // 801C73D0
  c->r[1]=c->r[1]+0x00000010u; // 801C73D4
  return; // 801C73D8
}

// AXSetVoiceAddr
void f_801C73E0(Ctx* __restrict c) {
  trace_call(0x801C73E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C73E0
  c->r[0]=c->lr; // 801C73E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C73E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C73EC
  c->r[31]=c->r[4]|c->r[4]; // 801C73F0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C73F4
  c->r[30]=c->r[3]|c->r[3]; // 801C73F8
  c->lr=0x801C7400u; f_802494C0(c); // 801C73FC
  c->r[0]=R32(c->r[31]+0x00000000u); // 801C7400
  W32(c->r[30]+0x00000096u,c->r[0]); // 801C7404
  c->r[0]=R32(c->r[31]+0x00000004u); // 801C7408
  W32(c->r[30]+0x0000009Au,c->r[0]); // 801C740C
  c->r[0]=R32(c->r[31]+0x00000008u); // 801C7410
  W32(c->r[30]+0x0000009Eu,c->r[0]); // 801C7414
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 801C7418
  W32(c->r[30]+0x000000A2u,c->r[0]); // 801C741C
  c->r[0]=R16(c->r[31]+0x00000002u); // 801C7420
  cmps(c,0,(int32_t)c->r[0],10); // 801C7424
  if (crb(c,2)) { goto L_801C7438; } // 801C7428
  cmps(c,0,(int32_t)c->r[0],25); // 801C742C
  if (crb(c,2)) { goto L_801C746C; } // 801C7430
  goto L_801C749C; // 801C7434
L_801C7438:;
  c->r[4]=0u+0x00000000u; // 801C7438
  c->r[0]=0u+0x08000000u; // 801C743C
  W32(c->r[30]+0x000000A6u,c->r[4]); // 801C7440
  W32(c->r[30]+0x000000AAu,c->r[4]); // 801C7444
  W32(c->r[30]+0x000000AEu,c->r[4]); // 801C7448
  W32(c->r[30]+0x000000B2u,c->r[4]); // 801C744C
  W32(c->r[30]+0x000000B6u,c->r[4]); // 801C7450
  W32(c->r[30]+0x000000BAu,c->r[4]); // 801C7454
  W32(c->r[30]+0x000000BEu,c->r[4]); // 801C7458
  W32(c->r[30]+0x000000C2u,c->r[4]); // 801C745C
  W32(c->r[30]+0x000000C6u,c->r[0]); // 801C7460
  W32(c->r[30]+0x000000CAu,c->r[4]); // 801C7464
  goto L_801C749C; // 801C7468
L_801C746C:;
  c->r[4]=0u+0x00000000u; // 801C746C
  c->r[0]=0u+0x01000000u; // 801C7470
  W32(c->r[30]+0x000000A6u,c->r[4]); // 801C7474
  W32(c->r[30]+0x000000AAu,c->r[4]); // 801C7478
  W32(c->r[30]+0x000000AEu,c->r[4]); // 801C747C
  W32(c->r[30]+0x000000B2u,c->r[4]); // 801C7480
  W32(c->r[30]+0x000000B6u,c->r[4]); // 801C7484
  W32(c->r[30]+0x000000BAu,c->r[4]); // 801C7488
  W32(c->r[30]+0x000000BEu,c->r[4]); // 801C748C
  W32(c->r[30]+0x000000C2u,c->r[4]); // 801C7490
  W32(c->r[30]+0x000000C6u,c->r[0]); // 801C7494
  W32(c->r[30]+0x000000CAu,c->r[4]); // 801C7498
L_801C749C:;
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 801C749C
  c->r[0]=rotl(c->r[0],0)&0xFFFF87FFu; // 801C74A0
  c->r[0]=c->r[0]|0x00008400u; // 801C74A4
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801C74A8
  c->lr=0x801C74B0u; f_80249500(c); // 801C74AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C74B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C74B4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C74B8
  c->lr=c->r[0]; // 801C74BC
  c->r[1]=c->r[1]+0x00000010u; // 801C74C0
  return; // 801C74C4
}

// fn_801C74D0
void f_801C74D0(Ctx* __restrict c) {
  trace_call(0x801C74D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C74D0
  c->r[0]=c->lr; // 801C74D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C74D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C74DC
  c->r[31]=c->r[4]|c->r[4]; // 801C74E0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C74E4
  c->r[30]=c->r[3]|c->r[3]; // 801C74E8
  c->lr=0x801C74F0u; f_802494C0(c); // 801C74EC
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 801C74F0
  c->r[4]=rotl(c->r[31],16)&0x0000FFFFu; // 801C74F4
  W16(c->r[30]+0x000000A2u,c->r[4]); // 801C74F8
  c->r[0]=c->r[0]|0x00004000u; // 801C74FC
  W16(c->r[30]+0x000000A4u,c->r[31]); // 801C7500
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801C7504
  c->lr=0x801C750Cu; f_80249500(c); // 801C7508
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C750C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C7510
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C7514
  c->lr=c->r[0]; // 801C7518
  c->r[1]=c->r[1]+0x00000010u; // 801C751C
  return; // 801C7520
}

// fn_801C7530
void f_801C7530(Ctx* __restrict c) {
  trace_call(0x801C7530u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7530
  c->r[0]=c->lr; // 801C7534
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C7538
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C753C
  c->r[31]=c->r[4]|c->r[4]; // 801C7540
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C7544
  c->r[30]=c->r[3]|c->r[3]; // 801C7548
  c->lr=0x801C7550u; f_802494C0(c); // 801C754C
  c->r[0]=R32(c->r[31]+0x00000000u); // 801C7550
  W32(c->r[30]+0x000000A6u,c->r[0]); // 801C7554
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 801C7558
  c->r[4]=R32(c->r[31]+0x00000004u); // 801C755C
  W32(c->r[30]+0x000000AAu,c->r[4]); // 801C7560
  c->r[0]=c->r[0]|0x00008000u; // 801C7564
  c->r[4]=R32(c->r[31]+0x00000008u); // 801C7568
  W32(c->r[30]+0x000000AEu,c->r[4]); // 801C756C
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 801C7570
  W32(c->r[30]+0x000000B2u,c->r[4]); // 801C7574
  c->r[4]=R32(c->r[31]+0x00000010u); // 801C7578
  W32(c->r[30]+0x000000B6u,c->r[4]); // 801C757C
  c->r[4]=R32(c->r[31]+0x00000014u); // 801C7580
  W32(c->r[30]+0x000000BAu,c->r[4]); // 801C7584
  c->r[4]=R32(c->r[31]+0x00000018u); // 801C7588
  W32(c->r[30]+0x000000BEu,c->r[4]); // 801C758C
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 801C7590
  W32(c->r[30]+0x000000C2u,c->r[4]); // 801C7594
  c->r[4]=R32(c->r[31]+0x00000020u); // 801C7598
  W32(c->r[30]+0x000000C6u,c->r[4]); // 801C759C
  c->r[4]=R32(c->r[31]+0x00000024u); // 801C75A0
  W32(c->r[30]+0x000000CAu,c->r[4]); // 801C75A4
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801C75A8
  c->lr=0x801C75B0u; f_80249500(c); // 801C75AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C75B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C75B4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C75B8
  c->lr=c->r[0]; // 801C75BC
  c->r[1]=c->r[1]+0x00000010u; // 801C75C0
  return; // 801C75C4
}

// fn_801C75D0
void f_801C75D0(Ctx* __restrict c) {
  trace_call(0x801C75D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C75D0
  c->r[0]=c->lr; // 801C75D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C75D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C75DC
  c->r[31]=c->r[4]|c->r[4]; // 801C75E0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C75E4
  c->r[30]=c->r[3]|c->r[3]; // 801C75E8
  c->lr=0x801C75F0u; f_802494C0(c); // 801C75EC
  c->r[0]=R16(c->r[31]+0x00000000u); // 801C75F0
  W16(c->r[30]+0x000000CEu,c->r[0]); // 801C75F4
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 801C75F8
  c->r[4]=R16(c->r[31]+0x00000002u); // 801C75FC
  W16(c->r[30]+0x000000D0u,c->r[4]); // 801C7600
  c->r[0]=rotl(c->r[0],0)&0xFFFDFFFFu; // 801C7604
  c->r[0]=c->r[0]|0x00010000u; // 801C7608
  c->r[4]=R16(c->r[31]+0x00000004u); // 801C760C
  W16(c->r[30]+0x000000D2u,c->r[4]); // 801C7610
  c->r[4]=R16(c->r[31]+0x00000006u); // 801C7614
  W16(c->r[30]+0x000000D4u,c->r[4]); // 801C7618
  c->r[4]=R16(c->r[31]+0x00000008u); // 801C761C
  W16(c->r[30]+0x000000D6u,c->r[4]); // 801C7620
  c->r[4]=R16(c->r[31]+0x0000000Au); // 801C7624
  W16(c->r[30]+0x000000D8u,c->r[4]); // 801C7628
  c->r[4]=R16(c->r[31]+0x0000000Cu); // 801C762C
  W16(c->r[30]+0x000000DAu,c->r[4]); // 801C7630
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801C7634
  c->lr=0x801C763Cu; f_80249500(c); // 801C7638
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C763C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C7640
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C7644
  c->lr=c->r[0]; // 801C7648
  c->r[1]=c->r[1]+0x00000010u; // 801C764C
  return; // 801C7650
}

// fn_801C7660
void f_801C7660(Ctx* __restrict c) {
  trace_call(0x801C7660u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7660
  c->r[0]=c->lr; // 801C7664
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C7668
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 801C766C
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 801C7670
  c->f[31]=c->f[1]; // 801C7674
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C7678
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C767C
  c->r[30]=c->r[3]|c->r[3]; // 801C7680
  c->lr=0x801C7688u; f_802494C0(c); // 801C7684
  {uint32_t ea=c->r[2]+0xFFFFAF18u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C7688
  c->r[31]=c->r[3]|c->r[3]; // 801C768C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[31]); // 801C7690
  c->lr=0x801C7698u; f_800C2D24(c); // 801C7694
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 801C7698
  c->r[4]=rotl(c->r[3],16)&0x0000FFFFu; // 801C769C
  W16(c->r[30]+0x000000D0u,c->r[3]); // 801C76A0
  c->r[3]=c->r[31]|c->r[31]; // 801C76A4
  c->r[0]=c->r[0]|0x00020000u; // 801C76A8
  W16(c->r[30]+0x000000CEu,c->r[4]); // 801C76AC
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801C76B0
  c->lr=0x801C76B8u; f_80249500(c); // 801C76B4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C76B8
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 801C76BC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 801C76C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C76C4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C76C8
  c->lr=c->r[0]; // 801C76CC
  c->r[1]=c->r[1]+0x00000020u; // 801C76D0
  return; // 801C76D4
}

// fn_801C76E0
void f_801C76E0(Ctx* __restrict c) {
  trace_call(0x801C76E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C76E0
  c->r[0]=c->lr; // 801C76E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C76E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C76EC
  c->r[31]=c->r[4]|c->r[4]; // 801C76F0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C76F4
  c->r[30]=c->r[3]|c->r[3]; // 801C76F8
  c->lr=0x801C7700u; f_802494C0(c); // 801C76FC
  c->r[0]=R16(c->r[31]+0x00000000u); // 801C7700
  W16(c->r[30]+0x000000DCu,c->r[0]); // 801C7704
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 801C7708
  c->r[4]=R16(c->r[31]+0x00000002u); // 801C770C
  W16(c->r[30]+0x000000DEu,c->r[4]); // 801C7710
  c->r[0]=c->r[0]|0x00040000u; // 801C7714
  c->r[4]=R16(c->r[31]+0x00000004u); // 801C7718
  W16(c->r[30]+0x000000E0u,c->r[4]); // 801C771C
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801C7720
  c->lr=0x801C7728u; f_80249500(c); // 801C7724
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C7728
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C772C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C7730
  c->lr=c->r[0]; // 801C7734
  c->r[1]=c->r[1]+0x00000010u; // 801C7738
  return; // 801C773C
}

// fn_801C7740
void f_801C7740(Ctx* __restrict c) {
  trace_call(0x801C7740u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7740
  c->r[0]=c->lr; // 801C7744
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C7748
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C774C
  c->r[31]=c->r[4]|c->r[4]; // 801C7750
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C7754
  c->r[30]=c->r[3]|c->r[3]; // 801C7758
  c->lr=0x801C7760u; f_802494C0(c); // 801C775C
  c->r[0]=R16(c->r[31]+0x00000000u); // 801C7760
  W16(c->r[30]+0x000000E2u,c->r[0]); // 801C7764
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 801C7768
  c->r[4]=R16(c->r[31]+0x00000002u); // 801C776C
  W16(c->r[30]+0x000000E4u,c->r[4]); // 801C7770
  c->r[0]=c->r[0]|0x00080000u; // 801C7774
  c->r[4]=R16(c->r[31]+0x00000004u); // 801C7778
  W16(c->r[30]+0x000000E6u,c->r[4]); // 801C777C
  c->r[4]=R16(c->r[31]+0x00000006u); // 801C7780
  W16(c->r[30]+0x000000E8u,c->r[4]); // 801C7784
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801C7788
  c->lr=0x801C7790u; f_80249500(c); // 801C778C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C7790
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C7794
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C7798
  c->lr=c->r[0]; // 801C779C
  c->r[1]=c->r[1]+0x00000010u; // 801C77A0
  return; // 801C77A4
}

// fn_801C77B0
void f_801C77B0(Ctx* __restrict c) {
  trace_call(0x801C77B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C77B0
  c->r[0]=c->lr; // 801C77B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C77B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C77BC
  c->r[31]=c->r[5]|c->r[5]; // 801C77C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C77C4
  c->r[30]=c->r[4]|c->r[4]; // 801C77C8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C77CC
  c->r[29]=c->r[3]|c->r[3]; // 801C77D0
  c->lr=0x801C77D8u; f_802494C0(c); // 801C77D4
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 801C77D8
  W16(c->r[29]+0x000000E6u,c->r[30]); // 801C77DC
  c->r[0]=c->r[0]|0x00100000u; // 801C77E0
  W16(c->r[29]+0x000000E8u,c->r[31]); // 801C77E4
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 801C77E8
  c->lr=0x801C77F0u; f_80249500(c); // 801C77EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C77F0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C77F4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C77F8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C77FC
  c->lr=c->r[0]; // 801C7800
  c->r[1]=c->r[1]+0x00000020u; // 801C7804
  return; // 801C7808
}

// AXGetLpfCoefs
void f_801C7810(Ctx* __restrict c) {
  trace_call(0x801C7810u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7810
  c->r[0]=c->lr; // 801C7814
  {uint32_t ea=c->r[2]+0xFFFFAF30u; c->f[3]=RF64(ea);} // 801C7818
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C781C
  c->r[0]=0u+0x43300000u; // 801C7820
  {uint32_t ea=c->r[2]+0xFFFFAF20u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C7824
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801C7828
  {uint32_t ea=c->r[2]+0xFFFFAF24u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C782C
  W32(c->r[1]+0x00000008u,c->r[0]); // 801C7830
  {uint32_t ea=c->r[1]+0x00000008u; c->f[2]=RF64(ea);} // 801C7834
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801C7838
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 801C783C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801C7840
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 801C7844
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C7848
  c->r[31]=c->r[5]|c->r[5]; // 801C784C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C7850
  c->r[30]=c->r[4]|c->r[4]; // 801C7854
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 801C7858
  c->lr=0x801C7860u; f_800D22F0(c); // 801C785C
  c->f[2]=c->ps1[2]=S(c->f[1]); // 801C7860
  {uint32_t ea=c->r[2]+0xFFFFAF1Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C7864
  {uint32_t ea=c->r[2]+0xFFFFAF28u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C7868
  c->f[31]=c->ps1[31]=S(c->f[1]-c->f[2]); // 801C786C
  c->f[1]=c->ps1[1]=S(c->f[31]*c->f[31]); // 801C7870
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 801C7874
  c->lr=0x801C787Cu; f_800D2C14(c); // 801C7878
  c->f[1]=c->ps1[1]=S(c->f[1]); // 801C787C
  {uint32_t ea=c->r[2]+0xFFFFAF2Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C7880
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 801C7884
  c->f[1]=-c->f[1]; // 801C7888
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 801C788C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 801C7890
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[0]);} // 801C7894
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C7898
  W16(c->r[31]+0x00000000u,c->r[0]); // 801C789C
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801C78A0
  c->r[0]=addc(c,~c->r[0],0x00007FFFu,1); // 801C78A4
  W16(c->r[30]+0x00000000u,c->r[0]); // 801C78A8
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 801C78AC
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 801C78B0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C78B4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C78B8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C78BC
  c->lr=c->r[0]; // 801C78C0
  c->r[1]=c->r[1]+0x00000030u; // 801C78C4
  return; // 801C78C8
}

// fn_801C78D0
void f_801C78D0(Ctx* __restrict c) {
  trace_call(0x801C78D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C78D0
  c->r[0]=c->lr; // 801C78D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C78D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C78DC
  c->r[31]=c->r[4]|c->r[4]; // 801C78E0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C78E4
  c->r[30]=c->r[3]|c->r[3]; // 801C78E8
  c->lr=0x801C78F0u; f_802494C0(c); // 801C78EC
  c->r[0]=R16(c->r[31]+0x00000000u); // 801C78F0
  W16(c->r[30]+0x000000EAu,c->r[0]); // 801C78F4
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 801C78F8
  c->r[4]=R16(c->r[31]+0x00000002u); // 801C78FC
  W16(c->r[30]+0x000000ECu,c->r[4]); // 801C7900
  c->r[0]=c->r[0]|0x00200000u; // 801C7904
  c->r[4]=R16(c->r[31]+0x00000004u); // 801C7908
  W16(c->r[30]+0x000000EEu,c->r[4]); // 801C790C
  c->r[4]=R16(c->r[31]+0x00000006u); // 801C7910
  W16(c->r[30]+0x000000F0u,c->r[4]); // 801C7914
  c->r[4]=R16(c->r[31]+0x00000008u); // 801C7918
  W16(c->r[30]+0x000000F2u,c->r[4]); // 801C791C
  c->r[4]=R16(c->r[31]+0x0000000Au); // 801C7920
  W16(c->r[30]+0x000000F4u,c->r[4]); // 801C7924
  c->r[4]=R16(c->r[31]+0x0000000Cu); // 801C7928
  W16(c->r[30]+0x000000F6u,c->r[4]); // 801C792C
  c->r[4]=R16(c->r[31]+0x0000000Eu); // 801C7930
  W16(c->r[30]+0x000000F8u,c->r[4]); // 801C7934
  c->r[4]=R16(c->r[31]+0x00000010u); // 801C7938
  W16(c->r[30]+0x000000FAu,c->r[4]); // 801C793C
  c->r[4]=R16(c->r[31]+0x00000012u); // 801C7940
  W16(c->r[30]+0x000000FCu,c->r[4]); // 801C7944
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801C7948
  c->lr=0x801C7950u; f_80249500(c); // 801C794C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C7950
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C7954
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C7958
  c->lr=c->r[0]; // 801C795C
  c->r[1]=c->r[1]+0x00000010u; // 801C7960
  return; // 801C7964
}

// fn_801C7970
void f_801C7970(Ctx* __restrict c) {
  trace_call(0x801C7970u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7970
  c->r[0]=c->lr; // 801C7974
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C7978
  c->r[11]=c->r[1]+0x00000020u; // 801C797C
  c->lr=0x801C7984u; f_800C2E48(c); // 801C7980
  c->r[26]=c->r[3]|c->r[3]; // 801C7984
  c->r[27]=c->r[4]|c->r[4]; // 801C7988
  c->r[28]=c->r[5]|c->r[5]; // 801C798C
  c->r[29]=c->r[6]|c->r[6]; // 801C7990
  c->r[30]=c->r[7]|c->r[7]; // 801C7994
  c->r[31]=c->r[8]|c->r[8]; // 801C7998
  c->lr=0x801C79A0u; f_802494C0(c); // 801C799C
  c->r[0]=R32(c->r[26]+0x0000001Cu); // 801C79A0
  W16(c->r[26]+0x000000F4u,c->r[27]); // 801C79A4
  c->r[0]=c->r[0]|0x00400000u; // 801C79A8
  W16(c->r[26]+0x000000F6u,c->r[28]); // 801C79AC
  W16(c->r[26]+0x000000F8u,c->r[29]); // 801C79B0
  W16(c->r[26]+0x000000FAu,c->r[30]); // 801C79B4
  W16(c->r[26]+0x000000FCu,c->r[31]); // 801C79B8
  W32(c->r[26]+0x0000001Cu,c->r[0]); // 801C79BC
  c->lr=0x801C79C4u; f_80249500(c); // 801C79C0
  c->r[11]=c->r[1]+0x00000020u; // 801C79C4
  c->lr=0x801C79CCu; f_800C2E94(c); // 801C79C8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C79CC
  c->lr=c->r[0]; // 801C79D0
  c->r[1]=c->r[1]+0x00000020u; // 801C79D4
  return; // 801C79D8
}

// fn_801C79E0
void f_801C79E0(Ctx* __restrict c) {
  trace_call(0x801C79E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C79E0
  c->r[0]=c->lr; // 801C79E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C79E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C79EC
  c->r[31]=c->r[4]|c->r[4]; // 801C79F0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C79F4
  c->r[30]=c->r[3]|c->r[3]; // 801C79F8
  c->lr=0x801C7A00u; f_802494C0(c); // 801C79FC
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 801C7A00
  W16(c->r[30]+0x000000FEu,c->r[31]); // 801C7A04
  c->r[0]=c->r[0]|0x00800000u; // 801C7A08
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801C7A0C
  c->lr=0x801C7A14u; f_80249500(c); // 801C7A10
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C7A14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C7A18
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C7A1C
  c->lr=c->r[0]; // 801C7A20
  c->r[1]=c->r[1]+0x00000010u; // 801C7A24
  return; // 801C7A28
}

// fn_801C7A30
void f_801C7A30(Ctx* __restrict c) {
  trace_call(0x801C7A30u);
  c->r[3]=R32(c->r[13]+0xFFFF9AA4u); // 801C7A30
  return; // 801C7A34
}

// __AXGetCurrentProfile
void f_801C7A40(Ctx* __restrict c) {
  trace_call(0x801C7A40u);
  c->r[0]=R32(c->r[13]+0xFFFF9AB8u); // 801C7A40
  cmps(c,0,(int32_t)c->r[0],0); // 801C7A44
  if (crb(c,2)) { goto L_801C7A78; } // 801C7A48
  c->r[5]=R32(c->r[13]+0xFFFF9ABCu); // 801C7A4C
  c->r[3]=R32(c->r[13]+0xFFFF9AC0u); // 801C7A50
  c->r[4]=c->r[5]+0x00000001u; // 801C7A54
  c->r[6]=R32(c->r[13]+0xFFFF9AC4u); // 801C7A58
  c->r[0]=divwu(c->r[4],c->r[3]); // 801C7A5C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[3]); // 801C7A60
  c->r[3]=(uint32_t)((int32_t)c->r[5]*(int32_t)56); // 801C7A64
  c->r[0]=c->r[4]-c->r[0]; // 801C7A68
  W32(c->r[13]+0xFFFF9ABCu,c->r[0]); // 801C7A6C
  c->r[3]=c->r[6]+c->r[3]; // 801C7A70
  return; // 801C7A74
L_801C7A78:;
  c->r[3]=0u+0x00000000u; // 801C7A78
  return; // 801C7A7C
}

// AXFXReverbHiInit
void f_801C7A80(Ctx* __restrict c) {
  trace_call(0x801C7A80u);
  {uint32_t ea=c->r[3]+0x00000158u; c->f[7]=c->ps1[7]=RF32(ea);} // 801C7A80
  c->r[0]=0u+0x00000000u; // 801C7A84
  {uint32_t ea=c->r[2]+0xFFFFAF38u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C7A88
  c->r[4]=0u+0x00000005u; // 801C7A8C
  {uint32_t ea=c->r[3]+0x00000150u; c->f[6]=c->ps1[6]=RF32(ea);} // 801C7A90
  {uint32_t ea=c->r[3]+0x00000148u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C7A94
  {uint32_t ea=c->r[3]+0x00000154u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C7A98
  {uint32_t ea=c->r[3]+0x0000015Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801C7A9C
  {uint32_t ea=c->r[2]+0xFFFFAF3Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C7AA0
  {uint32_t ea=c->r[3]+0x0000014Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C7AA4
  W32(c->r[3]+0x00000110u,c->r[4]); // 801C7AA8
  {uint32_t ea=c->r[3]+0x00000114u; WF32(ea,c->f[7]);} // 801C7AAC
  {uint32_t ea=c->r[3]+0x00000118u; WF32(ea,c->f[7]);} // 801C7AB0
  W32(c->r[3]+0x0000011Cu,c->r[0]); // 801C7AB4
  {uint32_t ea=c->r[3]+0x00000120u; WF32(ea,c->f[6]);} // 801C7AB8
  {uint32_t ea=c->r[3]+0x00000124u; WF32(ea,c->f[5]);} // 801C7ABC
  {uint32_t ea=c->r[3]+0x00000128u; WF32(ea,c->f[4]);} // 801C7AC0
  {uint32_t ea=c->r[3]+0x0000012Cu; WF32(ea,c->f[3]);} // 801C7AC4
  {uint32_t ea=c->r[3]+0x00000130u; WF32(ea,c->f[2]);} // 801C7AC8
  {uint32_t ea=c->r[3]+0x00000134u; WF32(ea,c->f[1]);} // 801C7ACC
  W32(c->r[3]+0x00000138u,c->r[0]); // 801C7AD0
  W32(c->r[3]+0x0000013Cu,c->r[0]); // 801C7AD4
  {uint32_t ea=c->r[3]+0x00000140u; WF32(ea,c->f[0]);} // 801C7AD8
  {uint32_t ea=c->r[3]+0x00000144u; WF32(ea,c->f[2]);} // 801C7ADC
  f_801C7C20(c); return; // 801C7AE0
}

// AXFXReverbHiShutdown
void f_801C7AF0(Ctx* __restrict c) {
  trace_call(0x801C7AF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7AF0
  c->r[0]=c->lr; // 801C7AF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C7AF8
  c->lr=0x801C7B00u; f_801C7DC0(c); // 801C7AFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C7B00
  c->r[3]=0u+0x00000001u; // 801C7B04
  c->lr=c->r[0]; // 801C7B08
  c->r[1]=c->r[1]+0x00000010u; // 801C7B0C
  return; // 801C7B10
}

// AXFXReverbHiCallback
void f_801C7B20(Ctx* __restrict c) {
  trace_call(0x801C7B20u);
  f_801C7E20(c); return; // 801C7B20
}

// fn_801C7B30
void f_801C7B30(Ctx* __restrict c) {
  trace_call(0x801C7B30u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7B30
  c->r[0]=c->lr; // 801C7B34
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C7B38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C7B3C
  c->r[31]=c->r[3]|c->r[3]; // 801C7B40
  c->lr=0x801C7B48u; f_801C5990(c); // 801C7B44
  cmpu(c,0,c->r[3],0x00000002u); // 801C7B48
  if (crb(c,2)) { goto L_801C7B58; } // 801C7B4C
  c->r[3]=0u+0x00000000u; // 801C7B50
  goto L_801C7BC0; // 801C7B54
L_801C7B58:;
  {uint32_t ea=c->r[31]+0x00000188u; c->f[7]=c->ps1[7]=RF32(ea);} // 801C7B58
  c->r[0]=0u+0x00000000u; // 801C7B5C
  {uint32_t ea=c->r[2]+0xFFFFAF40u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C7B60
  c->r[4]=0u+0x00000005u; // 801C7B64
  {uint32_t ea=c->r[31]+0x00000180u; c->f[6]=c->ps1[6]=RF32(ea);} // 801C7B68
  c->r[3]=c->r[31]|c->r[31]; // 801C7B6C
  {uint32_t ea=c->r[31]+0x00000178u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C7B70
  {uint32_t ea=c->r[31]+0x00000184u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C7B74
  {uint32_t ea=c->r[31]+0x0000018Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801C7B78
  {uint32_t ea=c->r[2]+0xFFFFAF44u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C7B7C
  {uint32_t ea=c->r[31]+0x0000017Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C7B80
  W32(c->r[31]+0x00000140u,c->r[4]); // 801C7B84
  {uint32_t ea=c->r[31]+0x00000144u; WF32(ea,c->f[7]);} // 801C7B88
  {uint32_t ea=c->r[31]+0x00000148u; WF32(ea,c->f[7]);} // 801C7B8C
  W32(c->r[31]+0x0000014Cu,c->r[0]); // 801C7B90
  {uint32_t ea=c->r[31]+0x00000150u; WF32(ea,c->f[6]);} // 801C7B94
  {uint32_t ea=c->r[31]+0x00000154u; WF32(ea,c->f[5]);} // 801C7B98
  {uint32_t ea=c->r[31]+0x00000158u; WF32(ea,c->f[4]);} // 801C7B9C
  {uint32_t ea=c->r[31]+0x0000015Cu; WF32(ea,c->f[3]);} // 801C7BA0
  {uint32_t ea=c->r[31]+0x00000160u; WF32(ea,c->f[2]);} // 801C7BA4
  {uint32_t ea=c->r[31]+0x00000164u; WF32(ea,c->f[1]);} // 801C7BA8
  W32(c->r[31]+0x00000168u,c->r[0]); // 801C7BAC
  W32(c->r[31]+0x0000016Cu,c->r[0]); // 801C7BB0
  {uint32_t ea=c->r[31]+0x00000170u; WF32(ea,c->f[0]);} // 801C7BB4
  {uint32_t ea=c->r[31]+0x00000174u; WF32(ea,c->f[2]);} // 801C7BB8
  c->lr=0x801C7BC0u; f_801C8A50(c); // 801C7BBC
L_801C7BC0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C7BC0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C7BC4
  c->lr=c->r[0]; // 801C7BC8
  c->r[1]=c->r[1]+0x00000010u; // 801C7BCC
  return; // 801C7BD0
}

// fn_801C7BE0
void f_801C7BE0(Ctx* __restrict c) {
  trace_call(0x801C7BE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7BE0
  c->r[0]=c->lr; // 801C7BE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C7BE8
  c->lr=0x801C7BF0u; f_801C8C10(c); // 801C7BEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C7BF0
  c->r[3]=0u+0x00000001u; // 801C7BF4
  c->lr=c->r[0]; // 801C7BF8
  c->r[1]=c->r[1]+0x00000010u; // 801C7BFC
  return; // 801C7C00
}

// fn_801C7C10
void f_801C7C10(Ctx* __restrict c) {
  trace_call(0x801C7C10u);
  f_801C8C70(c); return; // 801C7C10
}

// AXFXReverbHiExpInit
void f_801C7C20(Ctx* __restrict c) {
  trace_call(0x801C7C20u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7C20
  c->r[0]=c->lr; // 801C7C24
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C7C28
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C7C2C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C7C30
  c->r[30]=c->r[3]|c->r[3]; // 801C7C34
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C7C38
  c->lr=0x801C7C40u; f_802494C0(c); // 801C7C3C
  {uint32_t ea=c->r[30]+0x00000114u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C7C40
  c->r[0]=0u+0x00000001u; // 801C7C44
  {uint32_t ea=c->r[2]+0xFFFFAF4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C7C48
  c->r[31]=c->r[3]|c->r[3]; // 801C7C4C
  W32(c->r[30]+0x0000010Cu,c->r[0]); // 801C7C50
  fcmp(c,0,c->f[1],c->f[0]); // 801C7C54
  if (!crb(c,0)) { goto L_801C7C90; } // 801C7C58
  c->lr=0x801C7C60u; f_802494C0(c); // 801C7C5C
  c->r[0]=R32(c->r[30]+0x0000010Cu); // 801C7C60
  c->r[29]=c->r[3]|c->r[3]; // 801C7C64
  c->r[3]=c->r[30]|c->r[30]; // 801C7C68
  c->r[0]=c->r[0]|0x00000001u; // 801C7C6C
  W32(c->r[30]+0x0000010Cu,c->r[0]); // 801C7C70
  c->lr=0x801C7C78u; f_801C8600(c); // 801C7C74
  c->r[3]=c->r[29]|c->r[29]; // 801C7C78
  c->lr=0x801C7C80u; f_80249500(c); // 801C7C7C
  c->r[3]=c->r[31]|c->r[31]; // 801C7C80
  c->lr=0x801C7C88u; f_80249500(c); // 801C7C84
  c->r[3]=0u+0x00000000u; // 801C7C88
  goto L_801C7DA0; // 801C7C8C
L_801C7C90:;
  {uint32_t ea=c->r[2]+0xFFFFAF48u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C7C90
  c->r[3]=0u+0x803A0000u; // 801C7C94
  c->r[3]=c->r[3]+0xFFFFDD80u; // 801C7C98
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 801C7C9C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801C7CA0
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 801C7CA4
  c->lr=0x801C7CACu; f_800C2D24(c); // 801C7CA8
  W32(c->r[30]+0x00000040u,c->r[3]); // 801C7CAC
  c->r[4]=0u+0x803A0000u; // 801C7CB0
  c->r[4]=c->r[4]+0xFFFFDE40u; // 801C7CB4
  c->r[3]=c->r[30]|c->r[30]; // 801C7CB8
  c->r[0]=R32(c->r[4]+0x000000C0u); // 801C7CBC
  W32(c->r[30]+0x00000080u,c->r[0]); // 801C7CC0
  c->r[0]=R32(c->r[4]+0x000000C4u); // 801C7CC4
  W32(c->r[30]+0x00000084u,c->r[0]); // 801C7CC8
  c->r[0]=R32(c->r[4]+0x000000C8u); // 801C7CCC
  W32(c->r[30]+0x00000088u,c->r[0]); // 801C7CD0
  c->r[0]=R32(c->r[4]+0x000000CCu); // 801C7CD4
  W32(c->r[30]+0x000000C0u,c->r[0]); // 801C7CD8
  c->r[0]=R32(c->r[4]+0x000000D0u); // 801C7CDC
  W32(c->r[30]+0x000000C4u,c->r[0]); // 801C7CE0
  c->r[0]=R32(c->r[4]+0x000000D4u); // 801C7CE4
  W32(c->r[30]+0x000000ECu,c->r[0]); // 801C7CE8
  c->r[0]=R32(c->r[4]+0x000000D8u); // 801C7CEC
  W32(c->r[30]+0x000000F0u,c->r[0]); // 801C7CF0
  c->r[0]=R32(c->r[4]+0x000000DCu); // 801C7CF4
  W32(c->r[30]+0x000000F4u,c->r[0]); // 801C7CF8
  c->lr=0x801C7D00u; f_801C8350(c); // 801C7CFC
  cmps(c,0,(int32_t)c->r[3],0); // 801C7D00
  if (!crb(c,2)) { goto L_801C7D3C; } // 801C7D04
  c->lr=0x801C7D0Cu; f_802494C0(c); // 801C7D08
  c->r[0]=R32(c->r[30]+0x0000010Cu); // 801C7D0C
  c->r[29]=c->r[3]|c->r[3]; // 801C7D10
  c->r[3]=c->r[30]|c->r[30]; // 801C7D14
  c->r[0]=c->r[0]|0x00000001u; // 801C7D18
  W32(c->r[30]+0x0000010Cu,c->r[0]); // 801C7D1C
  c->lr=0x801C7D24u; f_801C8600(c); // 801C7D20
  c->r[3]=c->r[29]|c->r[29]; // 801C7D24
  c->lr=0x801C7D2Cu; f_80249500(c); // 801C7D28
  c->r[3]=c->r[31]|c->r[31]; // 801C7D2C
  c->lr=0x801C7D34u; f_80249500(c); // 801C7D30
  c->r[3]=0u+0x00000000u; // 801C7D34
  goto L_801C7DA0; // 801C7D38
L_801C7D3C:;
  c->r[3]=c->r[30]|c->r[30]; // 801C7D3C
  c->lr=0x801C7D44u; f_801C84D0(c); // 801C7D40
  c->r[3]=c->r[30]|c->r[30]; // 801C7D44
  c->lr=0x801C7D4Cu; f_801C8720(c); // 801C7D48
  cmps(c,0,(int32_t)c->r[3],0); // 801C7D4C
  if (!crb(c,2)) { goto L_801C7D88; } // 801C7D50
  c->lr=0x801C7D58u; f_802494C0(c); // 801C7D54
  c->r[0]=R32(c->r[30]+0x0000010Cu); // 801C7D58
  c->r[29]=c->r[3]|c->r[3]; // 801C7D5C
  c->r[3]=c->r[30]|c->r[30]; // 801C7D60
  c->r[0]=c->r[0]|0x00000001u; // 801C7D64
  W32(c->r[30]+0x0000010Cu,c->r[0]); // 801C7D68
  c->lr=0x801C7D70u; f_801C8600(c); // 801C7D6C
  c->r[3]=c->r[29]|c->r[29]; // 801C7D70
  c->lr=0x801C7D78u; f_80249500(c); // 801C7D74
  c->r[3]=c->r[31]|c->r[31]; // 801C7D78
  c->lr=0x801C7D80u; f_80249500(c); // 801C7D7C
  c->r[3]=0u+0x00000000u; // 801C7D80
  goto L_801C7DA0; // 801C7D84
L_801C7D88:;
  c->r[0]=R32(c->r[30]+0x0000010Cu); // 801C7D88
  c->r[3]=c->r[31]|c->r[31]; // 801C7D8C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 801C7D90
  W32(c->r[30]+0x0000010Cu,c->r[0]); // 801C7D94
  c->lr=0x801C7D9Cu; f_80249500(c); // 801C7D98
  c->r[3]=0u+0x00000001u; // 801C7D9C
L_801C7DA0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C7DA0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C7DA4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C7DA8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C7DAC
  c->lr=c->r[0]; // 801C7DB0
  c->r[1]=c->r[1]+0x00000020u; // 801C7DB4
  return; // 801C7DB8
}

// AXFXReverbHiExpShutdown
void f_801C7DC0(Ctx* __restrict c) {
  trace_call(0x801C7DC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7DC0
  c->r[0]=c->lr; // 801C7DC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C7DC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C7DCC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C7DD0
  c->r[30]=c->r[3]|c->r[3]; // 801C7DD4
  c->lr=0x801C7DDCu; f_802494C0(c); // 801C7DD8
  c->r[0]=R32(c->r[30]+0x0000010Cu); // 801C7DDC
  c->r[31]=c->r[3]|c->r[3]; // 801C7DE0
  c->r[3]=c->r[30]|c->r[30]; // 801C7DE4
  c->r[0]=c->r[0]|0x00000001u; // 801C7DE8
  W32(c->r[30]+0x0000010Cu,c->r[0]); // 801C7DEC
  c->lr=0x801C7DF4u; f_801C8600(c); // 801C7DF0
  c->r[3]=c->r[31]|c->r[31]; // 801C7DF4
  c->lr=0x801C7DFCu; f_80249500(c); // 801C7DF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C7DFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C7E00
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C7E04
  c->lr=c->r[0]; // 801C7E08
  c->r[1]=c->r[1]+0x00000010u; // 801C7E0C
  return; // 801C7E10
}

// fn_801C7E20
void f_801C7E20(Ctx* __restrict c) {
  trace_call(0x801C7E20u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C7E20
  c->r[0]=c->lr; // 801C7E24
  W32(c->r[1]+0x00000074u,c->r[0]); // 801C7E28
  c->r[11]=c->r[1]+0x00000070u; // 801C7E2C
  c->lr=0x801C7E34u; f_800C2E44(c); // 801C7E30
  c->r[0]=R32(c->r[4]+0x0000010Cu); // 801C7E34
  cmps(c,0,(int32_t)c->r[0],0); // 801C7E38
  if (crb(c,2)) { goto L_801C7E4C; } // 801C7E3C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 801C7E40
  W32(c->r[4]+0x0000010Cu,c->r[0]); // 801C7E44
  goto L_801C832C; // 801C7E48
L_801C7E4C:;
  c->r[7]=R32(c->r[4]+0x00000138u); // 801C7E4C
  c->r[6]=R32(c->r[3]+0x00000000u); // 801C7E50
  c->r[5]=R32(c->r[3]+0x00000004u); // 801C7E54
  cmps(c,0,(int32_t)c->r[7],0); // 801C7E58
  c->r[0]=R32(c->r[3]+0x00000008u); // 801C7E5C
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 801C7E60
  W32(c->r[1]+0x00000030u,c->r[5]); // 801C7E64
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C7E68
  if (crb(c,2)) { goto L_801C7E88; } // 801C7E6C
  c->r[5]=R32(c->r[7]+0x00000000u); // 801C7E70
  c->r[3]=R32(c->r[7]+0x00000004u); // 801C7E74
  c->r[0]=R32(c->r[7]+0x00000008u); // 801C7E78
  W32(c->r[1]+0x00000008u,c->r[5]); // 801C7E7C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801C7E80
  W32(c->r[1]+0x00000010u,c->r[0]); // 801C7E84
L_801C7E88:;
  c->r[7]=R32(c->r[4]+0x0000013Cu); // 801C7E88
  cmps(c,0,(int32_t)c->r[7],0); // 801C7E8C
  if (crb(c,2)) { goto L_801C7EA0; } // 801C7E90
  c->r[3]=R32(c->r[7]+0x00000000u); // 801C7E94
  c->r[5]=R32(c->r[7]+0x00000004u); // 801C7E98
  c->r[6]=R32(c->r[7]+0x00000008u); // 801C7E9C
L_801C7EA0:;
  {uint32_t ea=c->r[2]+0xFFFFAF50u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C7EA0
  c->r[31]=0u+0x00000000u; // 801C7EA4
  {uint32_t ea=c->r[4]+0x00000108u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C7EA8
  c->r[29]=0u+0x00000000u; // 801C7EAC
  {uint32_t ea=c->r[2]+0xFFFFAF54u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C7EB0
  c->r[0]=0u+0x43300000u; // 801C7EB4
  {uint32_t ea=c->r[4]+0x00000134u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C7EB8
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[1]); // 801C7EBC
  {uint32_t ea=c->r[2]+0xFFFFAF58u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C7EC0
  c->r[30]=0u+0x00000003u; // 801C7EC4
  {uint32_t ea=c->r[4]+0x0000012Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C7EC8
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[3]); // 801C7ECC
  {uint32_t ea=c->r[4]+0x000000F8u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C7ED0
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[0]); // 801C7ED4
  {uint32_t ea=c->r[2]+0xFFFFAF60u; c->f[0]=RF64(ea);} // 801C7ED8
  c->r[0]=c->r[0]|0x00000000u; // 801C7EDC
L_801C7EE0:;
  c->r[9]=c->r[4]|c->r[4]; // 801C7EE0
  c->r[10]=c->r[4]|c->r[4]; // 801C7EE4
  c->r[11]=c->r[4]|c->r[4]; // 801C7EE8
  c->r[7]=c->r[1]+0x00000008u; // 801C7EEC
  c->r[8]=c->r[1]+0x0000002Cu; // 801C7EF0
  c->r[12]=c->r[1]+0x00000014u; // 801C7EF4
  c->ctr=c->r[30]; // 801C7EF8
  c->r[0]=c->r[0]|0x00000000u; // 801C7EFC
L_801C7F00:;
  c->r[26]=R32(c->r[4]+0x00000138u); // 801C7F00
  cmps(c,0,(int32_t)c->r[26],0); // 801C7F04
  if (crb(c,2)) { goto L_801C7F40; } // 801C7F08
  c->r[27]=R32(c->r[7]+0x00000000u); // 801C7F0C
  c->r[28]=R32(c->r[8]+0x00000000u); // 801C7F10
  c->r[26]=R32(c->r[27]+0x00000000u); // 801C7F14
  c->r[27]=c->r[27]+0x00000004u; // 801C7F18
  c->r[28]=R32(c->r[28]+0x00000000u); // 801C7F1C
  W32(c->r[1]+0x00000038u,c->r[0]); // 801C7F20
  c->r[26]=c->r[28]+c->r[26]; // 801C7F24
  c->r[26]=c->r[26]^0x80000000u; // 801C7F28
  W32(c->r[1]+0x0000003Cu,c->r[26]); // 801C7F2C
  {uint32_t ea=c->r[1]+0x00000038u; c->f[2]=RF64(ea);} // 801C7F30
  W32(c->r[7]+0x00000000u,c->r[27]); // 801C7F34
  c->f[11]=c->ps1[11]=S(c->f[2]-c->f[0]); // 801C7F38
  goto L_801C7F5C; // 801C7F3C
L_801C7F40:;
  c->r[26]=R32(c->r[8]+0x00000000u); // 801C7F40
  W32(c->r[1]+0x00000040u,c->r[0]); // 801C7F44
  c->r[26]=R32(c->r[26]+0x00000000u); // 801C7F48
  c->r[26]=c->r[26]^0x80000000u; // 801C7F4C
  W32(c->r[1]+0x00000044u,c->r[26]); // 801C7F50
  {uint32_t ea=c->r[1]+0x00000040u; c->f[2]=RF64(ea);} // 801C7F54
  c->f[11]=c->ps1[11]=S(c->f[2]-c->f[0]); // 801C7F58
L_801C7F5C:;
  c->r[28]=R32(c->r[4]+0x0000000Cu); // 801C7F5C
  c->r[27]=R32(c->r[4]+0x00000010u); // 801C7F60
  c->r[26]=R32(c->r[4]+0x00000014u); // 801C7F64
  c->r[28]=rotl(c->r[28],2)&0xFFFFFFFCu; // 801C7F68
  c->r[25]=R32(c->r[9]+0x00000000u); // 801C7F6C
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801C7F70
  {uint32_t ea=c->r[4]+0x00000020u; c->f[9]=c->ps1[9]=RF32(ea);} // 801C7F74
  c->r[26]=rotl(c->r[26],2)&0xFFFFFFFCu; // 801C7F78
  {uint32_t ea=c->r[25]+c->r[28]; c->f[8]=c->ps1[8]=RF32(ea);} // 801C7F7C
  {uint32_t ea=c->r[4]+0x00000024u; c->f[7]=c->ps1[7]=RF32(ea);} // 801C7F80
  {uint32_t ea=c->r[25]+c->r[27]; c->f[2]=c->ps1[2]=RF32(ea);} // 801C7F84
  c->f[8]=c->ps1[8]=S(c->f[9]*c->f[8]); // 801C7F88
  {uint32_t ea=c->r[4]+0x00000028u; c->f[10]=c->ps1[10]=RF32(ea);} // 801C7F8C
  {uint32_t ea=c->r[25]+c->r[26]; c->f[9]=c->ps1[9]=RF32(ea);} // 801C7F90
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[2]); // 801C7F94
  {uint32_t ea=c->r[25]+c->r[26]; WF32(ea,c->f[11]);} // 801C7F98
  c->f[7]=c->ps1[7]=S(c->f[10]*c->f[9]); // 801C7F9C
  c->f[2]=c->ps1[2]=S(c->f[8]+c->f[2]); // 801C7FA0
  c->r[27]=R32(c->r[4]+0x0000003Cu); // 801C7FA4
  cmps(c,0,(int32_t)c->r[27],0); // 801C7FA8
  c->f[2]=c->ps1[2]=S(c->f[7]+c->f[2]); // 801C7FAC
  if (crb(c,2)) { goto L_801C7FCC; } // 801C7FB0
  c->r[27]=R32(c->r[4]+0x00000038u); // 801C7FB4
  c->r[28]=R32(c->r[9]+0x0000002Cu); // 801C7FB8
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801C7FBC
  {uint32_t ea=c->r[28]+c->r[27]; c->f[9]=c->ps1[9]=RF32(ea);} // 801C7FC0
  {uint32_t ea=c->r[28]+c->r[27]; WF32(ea,c->f[11]);} // 801C7FC4
  goto L_801C7FD0; // 801C7FC8
L_801C7FCC:;
  c->f[9]=c->f[11]; // 801C7FCC
L_801C7FD0:;
  c->r[27]=R32(c->r[4]+0x00000068u); // 801C7FD0
  c->r[25]=R32(c->r[10]+0x00000044u); // 801C7FD4
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801C7FD8
  {uint32_t ea=c->r[4]+0x0000008Cu; c->f[7]=c->ps1[7]=RF32(ea);} // 801C7FDC
  {uint32_t ea=c->r[25]+c->r[27]; c->f[8]=c->ps1[8]=RF32(ea);} // 801C7FE0
  {uint32_t ea=c->r[2]+0xFFFFAF4Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 801C7FE4
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[7]); // 801C7FE8
  c->f[10]=c->ps1[10]=S(c->f[10]+c->f[8]); // 801C7FEC
  c->f[7]=c->ps1[7]=S(c->f[9]+c->f[7]); // 801C7FF0
  {uint32_t ea=c->r[25]+c->r[27]; WF32(ea,c->f[7]);} // 801C7FF4
  c->r[27]=R32(c->r[4]+0x0000006Cu); // 801C7FF8
  c->r[26]=R32(c->r[10]+0x00000048u); // 801C7FFC
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801C8000
  {uint32_t ea=c->r[4]+0x00000090u; c->f[7]=c->ps1[7]=RF32(ea);} // 801C8004
  {uint32_t ea=c->r[26]+c->r[27]; c->f[8]=c->ps1[8]=RF32(ea);} // 801C8008
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[7]); // 801C800C
  c->f[10]=c->ps1[10]=S(c->f[10]+c->f[8]); // 801C8010
  c->f[7]=c->ps1[7]=S(c->f[9]+c->f[7]); // 801C8014
  {uint32_t ea=c->r[26]+c->r[27]; WF32(ea,c->f[7]);} // 801C8018
  c->r[27]=R32(c->r[4]+0x00000070u); // 801C801C
  c->r[28]=R32(c->r[10]+0x0000004Cu); // 801C8020
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801C8024
  {uint32_t ea=c->r[4]+0x00000094u; c->f[7]=c->ps1[7]=RF32(ea);} // 801C8028
  {uint32_t ea=c->r[28]+c->r[27]; c->f[8]=c->ps1[8]=RF32(ea);} // 801C802C
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[7]); // 801C8030
  c->f[10]=c->ps1[10]=S(c->f[10]+c->f[8]); // 801C8034
  c->f[7]=c->ps1[7]=S(c->f[9]+c->f[7]); // 801C8038
  {uint32_t ea=c->r[28]+c->r[27]; WF32(ea,c->f[7]);} // 801C803C
  c->r[27]=R32(c->r[4]+0x000000B0u); // 801C8040
  c->r[25]=R32(c->r[11]+0x00000098u); // 801C8044
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801C8048
  {uint32_t ea=c->r[25]+c->r[27]; c->f[8]=c->ps1[8]=RF32(ea);} // 801C804C
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[3]); // 801C8050
  c->f[7]=c->ps1[7]=S(c->f[10]+c->f[7]); // 801C8054
  {uint32_t ea=c->r[25]+c->r[27]; WF32(ea,c->f[7]);} // 801C8058
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[3]); // 801C805C
  c->r[27]=R32(c->r[4]+0x000000B4u); // 801C8060
  c->r[26]=R32(c->r[11]+0x0000009Cu); // 801C8064
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801C8068
  c->f[8]=c->ps1[8]=S(c->f[8]-c->f[7]); // 801C806C
  {uint32_t ea=c->r[26]+c->r[27]; c->f[9]=c->ps1[9]=RF32(ea);} // 801C8070
  c->f[7]=c->ps1[7]=S(c->f[9]*c->f[3]); // 801C8074
  c->f[7]=c->ps1[7]=S(c->f[8]+c->f[7]); // 801C8078
  {uint32_t ea=c->r[26]+c->r[27]; WF32(ea,c->f[7]);} // 801C807C
  c->f[8]=c->ps1[8]=S(c->f[7]*c->f[3]); // 801C8080
  {uint32_t ea=c->r[9]+0x000000FCu; c->f[7]=c->ps1[7]=RF32(ea);} // 801C8084
  c->f[8]=c->ps1[8]=S(c->f[9]-c->f[8]); // 801C8088
  c->f[7]=c->ps1[7]=S(c->f[1]*c->f[7]); // 801C808C
  c->f[8]=c->ps1[8]=S(c->f[4]*c->f[8]); // 801C8090
  c->f[9]=c->ps1[9]=S(c->f[8]+c->f[7]); // 801C8094
  {uint32_t ea=c->r[9]+0x000000FCu; WF32(ea,c->f[9]);} // 801C8098
  c->r[27]=R32(c->r[9]+0x000000D4u); // 801C809C
  c->r[28]=R32(c->r[9]+0x000000C8u); // 801C80A0
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801C80A4
  {uint32_t ea=c->r[28]+c->r[27]; c->f[8]=c->ps1[8]=RF32(ea);} // 801C80A8
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[3]); // 801C80AC
  c->f[7]=c->ps1[7]=S(c->f[9]+c->f[7]); // 801C80B0
  {uint32_t ea=c->r[28]+c->r[27]; WF32(ea,c->f[7]);} // 801C80B4
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[3]); // 801C80B8
  c->r[27]=R32(c->r[9]+0x000000D4u); // 801C80BC
  c->r[27]=c->r[27]+0x00000001u; // 801C80C0
  W32(c->r[9]+0x000000D4u,c->r[27]); // 801C80C4
  c->f[7]=c->ps1[7]=S(c->f[8]-c->f[7]); // 801C80C8
  c->r[28]=R32(c->r[9]+0x000000E0u); // 801C80CC
  {uint32_t ea=c->r[12]+0x00000000u; WF32(ea,c->f[7]);} // 801C80D0
  cmpu(c,0,c->r[27],c->r[28]); // 801C80D4
  if (crb(c,0)) { goto L_801C80E0; } // 801C80D8
  W32(c->r[9]+0x000000D4u,c->r[29]); // 801C80DC
L_801C80E0:;
  {uint32_t ea=c->r[12]+0x00000000u; c->f[7]=c->ps1[7]=RF32(ea);} // 801C80E0
  c->r[7]=c->r[7]+0x00000004u; // 801C80E4
  c->r[8]=c->r[8]+0x00000004u; // 801C80E8
  c->r[9]=c->r[9]+0x00000004u; // 801C80EC
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[5]); // 801C80F0
  c->r[10]=c->r[10]+0x0000000Cu; // 801C80F4
  c->r[11]=c->r[11]+0x00000008u; // 801C80F8
  c->f[2]=c->ps1[2]=S(c->f[7]+c->f[2]); // 801C80FC
  {uint32_t ea=c->r[12]+0x00000000u; WF32(ea,c->f[2]);} // 801C8100
  c->r[12]=c->r[12]+0x00000004u; // 801C8104
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C7F00; } // 801C8108
  {uint32_t ea=c->r[1]+0x00000018u; c->f[12]=c->ps1[12]=RF32(ea);} // 801C810C
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[11]=c->ps1[11]=RF32(ea);} // 801C8110
  {uint32_t ea=c->r[1]+0x00000014u; c->f[10]=c->ps1[10]=RF32(ea);} // 801C8114
  c->f[2]=c->ps1[2]=S(c->f[12]+c->f[11]); // 801C8118
  c->r[12]=R32(c->r[1]+0x0000002Cu); // 801C811C
  c->f[7]=c->ps1[7]=S(c->f[10]+c->f[11]); // 801C8120
  c->r[8]=R32(c->r[1]+0x00000034u); // 801C8124
  c->r[11]=c->r[12]+0x00000004u; // 801C8128
  c->r[10]=R32(c->r[1]+0x00000030u); // 801C812C
  c->f[9]=c->ps1[9]=S(c->f[2]*c->f[6]); // 801C8130
  c->r[7]=c->r[8]+0x00000004u; // 801C8134
  c->f[8]=c->ps1[8]=S(c->f[7]*c->f[6]); // 801C8138
  c->r[9]=c->r[10]+0x00000004u; // 801C813C
  {uint32_t ea=c->r[4]+0x00000140u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C8140
  c->f[13]=c->ps1[13]=S(c->f[10]+c->f[12]); // 801C8144
  c->f[9]=c->ps1[9]=S(c->f[10]+c->f[9]); // 801C8148
  W32(c->r[1]+0x0000002Cu,c->r[11]); // 801C814C
  c->f[8]=c->ps1[8]=S(c->f[12]+c->f[8]); // 801C8150
  c->f[7]=c->ps1[7]=S(c->f[13]*c->f[6]); // 801C8154
  W32(c->r[1]+0x00000034u,c->r[7]); // 801C8158
  c->f[2]=c->ps1[2]=S(c->f[9]*c->f[2]); // 801C815C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[9]);} // 801C8160
  c->f[7]=c->ps1[7]=S(c->f[11]+c->f[7]); // 801C8164
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801C8168
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[8]);} // 801C816C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[2]);} // 801C8170
  c->r[11]=R32(c->r[1]+0x00000044u); // 801C8174
  W32(c->r[12]+0x00000000u,c->r[11]); // 801C8178
  {uint32_t ea=c->r[4]+0x00000140u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C817C
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[7]);} // 801C8180
  c->f[2]=c->ps1[2]=S(c->f[8]*c->f[2]); // 801C8184
  W32(c->r[1]+0x00000030u,c->r[9]); // 801C8188
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801C818C
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[2]);} // 801C8190
  c->r[7]=R32(c->r[1]+0x0000003Cu); // 801C8194
  W32(c->r[10]+0x00000000u,c->r[7]); // 801C8198
  {uint32_t ea=c->r[4]+0x00000140u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C819C
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[2]); // 801C81A0
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801C81A4
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[2]);} // 801C81A8
  c->r[7]=R32(c->r[1]+0x0000004Cu); // 801C81AC
  W32(c->r[8]+0x00000000u,c->r[7]); // 801C81B0
  c->r[7]=R32(c->r[4]+0x0000013Cu); // 801C81B4
  cmps(c,0,(int32_t)c->r[7],0); // 801C81B8
  if (crb(c,2)) { goto L_801C8214; } // 801C81BC
  {uint32_t ea=c->r[4]+0x00000144u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C81C0
  c->f[2]=c->ps1[2]=S(c->f[9]*c->f[2]); // 801C81C4
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801C81C8
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[2]);} // 801C81CC
  c->r[7]=R32(c->r[1]+0x0000004Cu); // 801C81D0
  W32(c->r[3]+0x00000000u,c->r[7]); // 801C81D4
  c->r[3]=c->r[3]+0x00000004u; // 801C81D8
  {uint32_t ea=c->r[4]+0x00000144u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C81DC
  c->f[2]=c->ps1[2]=S(c->f[8]*c->f[2]); // 801C81E0
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801C81E4
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[2]);} // 801C81E8
  c->r[7]=R32(c->r[1]+0x00000044u); // 801C81EC
  W32(c->r[5]+0x00000000u,c->r[7]); // 801C81F0
  c->r[5]=c->r[5]+0x00000004u; // 801C81F4
  {uint32_t ea=c->r[4]+0x00000144u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C81F8
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[2]); // 801C81FC
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801C8200
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[2]);} // 801C8204
  c->r[7]=R32(c->r[1]+0x0000003Cu); // 801C8208
  W32(c->r[6]+0x00000000u,c->r[7]); // 801C820C
  c->r[6]=c->r[6]+0x00000004u; // 801C8210
L_801C8214:;
  c->r[7]=R32(c->r[4]+0x0000000Cu); // 801C8214
  c->r[8]=c->r[7]+0x00000001u; // 801C8218
  W32(c->r[4]+0x0000000Cu,c->r[8]); // 801C821C
  c->r[7]=R32(c->r[4]+0x00000018u); // 801C8220
  cmpu(c,0,c->r[8],c->r[7]); // 801C8224
  if (crb(c,0)) { goto L_801C8230; } // 801C8228
  W32(c->r[4]+0x0000000Cu,c->r[29]); // 801C822C
L_801C8230:;
  c->r[7]=R32(c->r[4]+0x00000010u); // 801C8230
  c->r[8]=c->r[7]+0x00000001u; // 801C8234
  W32(c->r[4]+0x00000010u,c->r[8]); // 801C8238
  c->r[7]=R32(c->r[4]+0x00000018u); // 801C823C
  cmpu(c,0,c->r[8],c->r[7]); // 801C8240
  if (crb(c,0)) { goto L_801C824C; } // 801C8244
  W32(c->r[4]+0x00000010u,c->r[29]); // 801C8248
L_801C824C:;
  c->r[7]=R32(c->r[4]+0x00000014u); // 801C824C
  c->r[9]=c->r[4]+0x00000008u; // 801C8250
  c->r[8]=c->r[7]+0x00000001u; // 801C8254
  W32(c->r[4]+0x00000014u,c->r[8]); // 801C8258
  c->r[7]=R32(c->r[4]+0x00000018u); // 801C825C
  cmpu(c,0,c->r[8],c->r[7]); // 801C8260
  if (crb(c,0)) { goto L_801C826C; } // 801C8264
  W32(c->r[9]+0x0000000Cu,c->r[29]); // 801C8268
L_801C826C:;
  c->r[8]=R32(c->r[4]+0x0000003Cu); // 801C826C
  cmps(c,0,(int32_t)c->r[8],0); // 801C8270
  if (crb(c,2)) { goto L_801C8290; } // 801C8274
  c->r[7]=R32(c->r[4]+0x00000038u); // 801C8278
  c->r[7]=c->r[7]+0x00000001u; // 801C827C
  W32(c->r[4]+0x00000038u,c->r[7]); // 801C8280
  cmpu(c,0,c->r[7],c->r[8]); // 801C8284
  if (crb(c,0)) { goto L_801C8290; } // 801C8288
  W32(c->r[4]+0x00000038u,c->r[29]); // 801C828C
L_801C8290:;
  c->r[7]=R32(c->r[4]+0x00000068u); // 801C8290
  c->r[8]=c->r[7]+0x00000001u; // 801C8294
  W32(c->r[4]+0x00000068u,c->r[8]); // 801C8298
  c->r[7]=R32(c->r[4]+0x00000074u); // 801C829C
  cmpu(c,0,c->r[8],c->r[7]); // 801C82A0
  if (crb(c,0)) { goto L_801C82AC; } // 801C82A4
  W32(c->r[4]+0x00000068u,c->r[29]); // 801C82A8
L_801C82AC:;
  c->r[7]=R32(c->r[4]+0x0000006Cu); // 801C82AC
  c->r[8]=c->r[7]+0x00000001u; // 801C82B0
  W32(c->r[4]+0x0000006Cu,c->r[8]); // 801C82B4
  c->r[7]=R32(c->r[4]+0x00000078u); // 801C82B8
  cmpu(c,0,c->r[8],c->r[7]); // 801C82BC
  if (crb(c,0)) { goto L_801C82C8; } // 801C82C0
  W32(c->r[4]+0x0000006Cu,c->r[29]); // 801C82C4
L_801C82C8:;
  c->r[7]=R32(c->r[4]+0x00000070u); // 801C82C8
  c->r[9]=c->r[4]+0x00000008u; // 801C82CC
  c->r[8]=c->r[7]+0x00000001u; // 801C82D0
  W32(c->r[4]+0x00000070u,c->r[8]); // 801C82D4
  c->r[7]=R32(c->r[4]+0x0000007Cu); // 801C82D8
  cmpu(c,0,c->r[8],c->r[7]); // 801C82DC
  if (crb(c,0)) { goto L_801C82E8; } // 801C82E0
  W32(c->r[9]+0x00000068u,c->r[29]); // 801C82E4
L_801C82E8:;
  c->r[7]=R32(c->r[4]+0x000000B0u); // 801C82E8
  c->r[8]=c->r[7]+0x00000001u; // 801C82EC
  W32(c->r[4]+0x000000B0u,c->r[8]); // 801C82F0
  c->r[7]=R32(c->r[4]+0x000000B8u); // 801C82F4
  cmpu(c,0,c->r[8],c->r[7]); // 801C82F8
  if (crb(c,0)) { goto L_801C8304; } // 801C82FC
  W32(c->r[4]+0x000000B0u,c->r[29]); // 801C8300
L_801C8304:;
  c->r[7]=R32(c->r[4]+0x000000B4u); // 801C8304
  c->r[8]=c->r[7]+0x00000001u; // 801C8308
  W32(c->r[4]+0x000000B4u,c->r[8]); // 801C830C
  c->r[7]=R32(c->r[4]+0x000000BCu); // 801C8310
  cmpu(c,0,c->r[8],c->r[7]); // 801C8314
  if (crb(c,0)) { goto L_801C8320; } // 801C8318
  W32(c->r[4]+0x000000B4u,c->r[29]); // 801C831C
L_801C8320:;
  c->r[31]=c->r[31]+0x00000001u; // 801C8320
  cmpu(c,0,c->r[31],0x00000060u); // 801C8324
  if (crb(c,0)) { IRQCHK(c); goto L_801C7EE0; } // 801C8328
L_801C832C:;
  c->r[11]=c->r[1]+0x00000070u; // 801C832C
  c->lr=0x801C8334u; f_800C2E90(c); // 801C8330
  c->r[0]=R32(c->r[1]+0x00000074u); // 801C8334
  c->lr=c->r[0]; // 801C8338
  c->r[1]=c->r[1]+0x00000070u; // 801C833C
  return; // 801C8340
}

// __AllocDelayLine
void f_801C8350(Ctx* __restrict c) {
  trace_call(0x801C8350u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C8350
  c->r[0]=c->lr; // 801C8354
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C8358
  c->r[11]=c->r[1]+0x00000030u; // 801C835C
  c->lr=0x801C8364u; f_800C2E3C(c); // 801C8360
  c->r[23]=c->r[3]|c->r[3]; // 801C8364
  c->r[24]=0u+0x00000000u; // 801C8368
  c->r[30]=c->r[23]|c->r[23]; // 801C836C
  c->r[31]=0u+0x00000000u; // 801C8370
  c->r[29]=c->r[23]|c->r[23]; // 801C8374
  c->r[28]=c->r[23]|c->r[23]; // 801C8378
L_801C837C:;
  c->r[0]=R32(c->r[23]+0x0000001Cu); // 801C837C
  c->r[12]=R32(c->r[13]+0xFFFF8EA8u); // 801C8380
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C8384
  c->ctr=c->r[12]; // 801C8388
  if (true) { c->lr=0x801C8390u; dispatch(c,c->ctr); } // 801C838C
  cmps(c,0,(int32_t)c->r[3],0); // 801C8390
  W32(c->r[30]+0x00000000u,c->r[3]); // 801C8394
  if (!crb(c,2)) { goto L_801C83A4; } // 801C8398
  c->r[3]=0u+0x00000000u; // 801C839C
  goto L_801C84AC; // 801C83A0
L_801C83A4:;
  c->r[0]=R32(c->r[23]+0x00000040u); // 801C83A4
  cmps(c,0,(int32_t)c->r[0],0); // 801C83A8
  if (crb(c,2)) { goto L_801C83D4; } // 801C83AC
  c->r[12]=R32(c->r[13]+0xFFFF8EA8u); // 801C83B0
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C83B4
  c->ctr=c->r[12]; // 801C83B8
  if (true) { c->lr=0x801C83C0u; dispatch(c,c->ctr); } // 801C83BC
  cmps(c,0,(int32_t)c->r[3],0); // 801C83C0
  W32(c->r[30]+0x0000002Cu,c->r[3]); // 801C83C4
  if (!crb(c,2)) { goto L_801C83D8; } // 801C83C8
  c->r[3]=0u+0x00000000u; // 801C83CC
  goto L_801C84AC; // 801C83D0
L_801C83D4:;
  W32(c->r[30]+0x0000002Cu,c->r[31]); // 801C83D4
L_801C83D8:;
  c->r[26]=c->r[23]|c->r[23]; // 801C83D8
  c->r[27]=c->r[29]|c->r[29]; // 801C83DC
  c->r[25]=0u+0x00000000u; // 801C83E0
L_801C83E4:;
  c->r[0]=R32(c->r[26]+0x00000080u); // 801C83E4
  c->r[12]=R32(c->r[13]+0xFFFF8EA8u); // 801C83E8
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C83EC
  c->ctr=c->r[12]; // 801C83F0
  if (true) { c->lr=0x801C83F8u; dispatch(c,c->ctr); } // 801C83F4
  cmps(c,0,(int32_t)c->r[3],0); // 801C83F8
  W32(c->r[27]+0x00000044u,c->r[3]); // 801C83FC
  if (!crb(c,2)) { goto L_801C840C; } // 801C8400
  c->r[3]=0u+0x00000000u; // 801C8404
  goto L_801C84AC; // 801C8408
L_801C840C:;
  c->r[25]=c->r[25]+0x00000001u; // 801C840C
  c->r[27]=c->r[27]+0x00000004u; // 801C8410
  cmpu(c,0,c->r[25],0x00000003u); // 801C8414
  c->r[26]=c->r[26]+0x00000004u; // 801C8418
  if (crb(c,0)) { IRQCHK(c); goto L_801C83E4; } // 801C841C
  c->r[27]=c->r[23]|c->r[23]; // 801C8420
  c->r[26]=c->r[28]|c->r[28]; // 801C8424
  c->r[25]=0u+0x00000000u; // 801C8428
L_801C842C:;
  c->r[0]=R32(c->r[27]+0x000000C0u); // 801C842C
  c->r[12]=R32(c->r[13]+0xFFFF8EA8u); // 801C8430
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C8434
  c->ctr=c->r[12]; // 801C8438
  if (true) { c->lr=0x801C8440u; dispatch(c,c->ctr); } // 801C843C
  cmps(c,0,(int32_t)c->r[3],0); // 801C8440
  W32(c->r[26]+0x00000098u,c->r[3]); // 801C8444
  if (!crb(c,2)) { goto L_801C8454; } // 801C8448
  c->r[3]=0u+0x00000000u; // 801C844C
  goto L_801C84AC; // 801C8450
L_801C8454:;
  c->r[25]=c->r[25]+0x00000001u; // 801C8454
  c->r[26]=c->r[26]+0x00000004u; // 801C8458
  cmpu(c,0,c->r[25],0x00000002u); // 801C845C
  c->r[27]=c->r[27]+0x00000004u; // 801C8460
  if (crb(c,0)) { IRQCHK(c); goto L_801C842C; } // 801C8464
  c->r[0]=R32(c->r[30]+0x000000ECu); // 801C8468
  c->r[12]=R32(c->r[13]+0xFFFF8EA8u); // 801C846C
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C8470
  c->ctr=c->r[12]; // 801C8474
  if (true) { c->lr=0x801C847Cu; dispatch(c,c->ctr); } // 801C8478
  cmps(c,0,(int32_t)c->r[3],0); // 801C847C
  W32(c->r[30]+0x000000C8u,c->r[3]); // 801C8480
  if (!crb(c,2)) { goto L_801C8490; } // 801C8484
  c->r[3]=0u+0x00000000u; // 801C8488
  goto L_801C84AC; // 801C848C
L_801C8490:;
  c->r[24]=c->r[24]+0x00000001u; // 801C8490
  c->r[29]=c->r[29]+0x0000000Cu; // 801C8494
  cmpu(c,0,c->r[24],0x00000003u); // 801C8498
  c->r[28]=c->r[28]+0x00000008u; // 801C849C
  c->r[30]=c->r[30]+0x00000004u; // 801C84A0
  if (crb(c,0)) { IRQCHK(c); goto L_801C837C; } // 801C84A4
  c->r[3]=0u+0x00000001u; // 801C84A8
L_801C84AC:;
  c->r[11]=c->r[1]+0x00000030u; // 801C84AC
  c->lr=0x801C84B4u; f_800C2E88(c); // 801C84B0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C84B4
  c->lr=c->r[0]; // 801C84B8
  c->r[1]=c->r[1]+0x00000030u; // 801C84BC
  return; // 801C84C0
}

// __BzeroDelayLines
void f_801C84D0(Ctx* __restrict c) {
  trace_call(0x801C84D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C84D0
  c->r[0]=c->lr; // 801C84D4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C84D8
  c->r[11]=c->r[1]+0x00000030u; // 801C84DC
  c->lr=0x801C84E4u; f_800C2E40(c); // 801C84E0
  c->r[24]=c->r[3]|c->r[3]; // 801C84E4
  c->r[25]=0u+0x00000000u; // 801C84E8
  c->r[31]=c->r[24]|c->r[24]; // 801C84EC
  c->r[30]=c->r[24]|c->r[24]; // 801C84F0
  c->r[29]=c->r[24]|c->r[24]; // 801C84F4
L_801C84F8:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 801C84F8
  cmps(c,0,(int32_t)c->r[3],0); // 801C84FC
  if (crb(c,2)) { goto L_801C8514; } // 801C8500
  c->r[0]=R32(c->r[24]+0x0000001Cu); // 801C8504
  c->r[4]=0u+0x00000000u; // 801C8508
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C850C
  c->lr=0x801C8514u; f_80004350(c); // 801C8510
L_801C8514:;
  c->r[3]=R32(c->r[31]+0x0000002Cu); // 801C8514
  cmps(c,0,(int32_t)c->r[3],0); // 801C8518
  if (crb(c,2)) { goto L_801C8530; } // 801C851C
  c->r[0]=R32(c->r[24]+0x00000040u); // 801C8520
  c->r[4]=0u+0x00000000u; // 801C8524
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C8528
  c->lr=0x801C8530u; f_80004350(c); // 801C852C
L_801C8530:;
  c->r[27]=c->r[30]|c->r[30]; // 801C8530
  c->r[28]=c->r[24]|c->r[24]; // 801C8534
  c->r[26]=0u+0x00000000u; // 801C8538
L_801C853C:;
  c->r[3]=R32(c->r[27]+0x00000044u); // 801C853C
  cmps(c,0,(int32_t)c->r[3],0); // 801C8540
  if (crb(c,2)) { goto L_801C8558; } // 801C8544
  c->r[0]=R32(c->r[28]+0x00000080u); // 801C8548
  c->r[4]=0u+0x00000000u; // 801C854C
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C8550
  c->lr=0x801C8558u; f_80004350(c); // 801C8554
L_801C8558:;
  c->r[26]=c->r[26]+0x00000001u; // 801C8558
  c->r[28]=c->r[28]+0x00000004u; // 801C855C
  cmpu(c,0,c->r[26],0x00000003u); // 801C8560
  c->r[27]=c->r[27]+0x00000004u; // 801C8564
  if (crb(c,0)) { IRQCHK(c); goto L_801C853C; } // 801C8568
  c->r[28]=c->r[29]|c->r[29]; // 801C856C
  c->r[27]=c->r[24]|c->r[24]; // 801C8570
  c->r[26]=0u+0x00000000u; // 801C8574
L_801C8578:;
  c->r[3]=R32(c->r[28]+0x00000098u); // 801C8578
  cmps(c,0,(int32_t)c->r[3],0); // 801C857C
  if (crb(c,2)) { goto L_801C8594; } // 801C8580
  c->r[0]=R32(c->r[27]+0x000000C0u); // 801C8584
  c->r[4]=0u+0x00000000u; // 801C8588
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C858C
  c->lr=0x801C8594u; f_80004350(c); // 801C8590
L_801C8594:;
  c->r[26]=c->r[26]+0x00000001u; // 801C8594
  c->r[27]=c->r[27]+0x00000004u; // 801C8598
  cmpu(c,0,c->r[26],0x00000002u); // 801C859C
  c->r[28]=c->r[28]+0x00000004u; // 801C85A0
  if (crb(c,0)) { IRQCHK(c); goto L_801C8578; } // 801C85A4
  c->r[3]=R32(c->r[31]+0x000000C8u); // 801C85A8
  cmps(c,0,(int32_t)c->r[3],0); // 801C85AC
  if (crb(c,2)) { goto L_801C85C4; } // 801C85B0
  c->r[0]=R32(c->r[31]+0x000000ECu); // 801C85B4
  c->r[4]=0u+0x00000000u; // 801C85B8
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C85BC
  c->lr=0x801C85C4u; f_80004350(c); // 801C85C0
L_801C85C4:;
  c->r[25]=c->r[25]+0x00000001u; // 801C85C4
  c->r[30]=c->r[30]+0x0000000Cu; // 801C85C8
  cmpu(c,0,c->r[25],0x00000003u); // 801C85CC
  c->r[29]=c->r[29]+0x00000008u; // 801C85D0
  c->r[31]=c->r[31]+0x00000004u; // 801C85D4
  if (crb(c,0)) { IRQCHK(c); goto L_801C84F8; } // 801C85D8
  c->r[11]=c->r[1]+0x00000030u; // 801C85DC
  c->lr=0x801C85E4u; f_800C2E8C(c); // 801C85E0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C85E4
  c->lr=c->r[0]; // 801C85E8
  c->r[1]=c->r[1]+0x00000030u; // 801C85EC
  return; // 801C85F0
}

// __FreeDelayLine
void f_801C8600(Ctx* __restrict c) {
  trace_call(0x801C8600u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C8600
  c->r[0]=c->lr; // 801C8604
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C8608
  c->r[11]=c->r[1]+0x00000030u; // 801C860C
  c->lr=0x801C8614u; f_800C2E44(c); // 801C8610
  c->r[25]=0u+0x00000000u; // 801C8614
  c->r[30]=c->r[3]|c->r[3]; // 801C8618
  c->r[31]=0u+0x00000000u; // 801C861C
  c->r[29]=c->r[3]|c->r[3]; // 801C8620
  c->r[28]=c->r[3]|c->r[3]; // 801C8624
L_801C8628:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 801C8628
  cmps(c,0,(int32_t)c->r[3],0); // 801C862C
  if (crb(c,2)) { goto L_801C8644; } // 801C8630
  c->r[12]=R32(c->r[13]+0xFFFF8EACu); // 801C8634
  c->ctr=c->r[12]; // 801C8638
  if (true) { c->lr=0x801C8640u; dispatch(c,c->ctr); } // 801C863C
  W32(c->r[30]+0x00000000u,c->r[31]); // 801C8640
L_801C8644:;
  c->r[3]=R32(c->r[30]+0x0000002Cu); // 801C8644
  cmps(c,0,(int32_t)c->r[3],0); // 801C8648
  if (crb(c,2)) { goto L_801C8660; } // 801C864C
  c->r[12]=R32(c->r[13]+0xFFFF8EACu); // 801C8650
  c->ctr=c->r[12]; // 801C8654
  if (true) { c->lr=0x801C865Cu; dispatch(c,c->ctr); } // 801C8658
  W32(c->r[30]+0x0000002Cu,c->r[31]); // 801C865C
L_801C8660:;
  c->r[27]=c->r[29]|c->r[29]; // 801C8660
  c->r[26]=0u+0x00000000u; // 801C8664
L_801C8668:;
  c->r[3]=R32(c->r[27]+0x00000044u); // 801C8668
  cmps(c,0,(int32_t)c->r[3],0); // 801C866C
  if (crb(c,2)) { goto L_801C8684; } // 801C8670
  c->r[12]=R32(c->r[13]+0xFFFF8EACu); // 801C8674
  c->ctr=c->r[12]; // 801C8678
  if (true) { c->lr=0x801C8680u; dispatch(c,c->ctr); } // 801C867C
  W32(c->r[27]+0x00000044u,c->r[31]); // 801C8680
L_801C8684:;
  c->r[26]=c->r[26]+0x00000001u; // 801C8684
  c->r[27]=c->r[27]+0x00000004u; // 801C8688
  cmpu(c,0,c->r[26],0x00000003u); // 801C868C
  if (crb(c,0)) { IRQCHK(c); goto L_801C8668; } // 801C8690
  c->r[27]=c->r[28]|c->r[28]; // 801C8694
  c->r[26]=0u+0x00000000u; // 801C8698
L_801C869C:;
  c->r[3]=R32(c->r[27]+0x00000098u); // 801C869C
  cmps(c,0,(int32_t)c->r[3],0); // 801C86A0
  if (crb(c,2)) { goto L_801C86B8; } // 801C86A4
  c->r[12]=R32(c->r[13]+0xFFFF8EACu); // 801C86A8
  c->ctr=c->r[12]; // 801C86AC
  if (true) { c->lr=0x801C86B4u; dispatch(c,c->ctr); } // 801C86B0
  W32(c->r[27]+0x00000098u,c->r[31]); // 801C86B4
L_801C86B8:;
  c->r[26]=c->r[26]+0x00000001u; // 801C86B8
  c->r[27]=c->r[27]+0x00000004u; // 801C86BC
  cmpu(c,0,c->r[26],0x00000002u); // 801C86C0
  if (crb(c,0)) { IRQCHK(c); goto L_801C869C; } // 801C86C4
  c->r[3]=R32(c->r[30]+0x000000C8u); // 801C86C8
  cmps(c,0,(int32_t)c->r[3],0); // 801C86CC
  if (crb(c,2)) { goto L_801C86E4; } // 801C86D0
  c->r[12]=R32(c->r[13]+0xFFFF8EACu); // 801C86D4
  c->ctr=c->r[12]; // 801C86D8
  if (true) { c->lr=0x801C86E0u; dispatch(c,c->ctr); } // 801C86DC
  W32(c->r[30]+0x000000C8u,c->r[31]); // 801C86E0
L_801C86E4:;
  c->r[25]=c->r[25]+0x00000001u; // 801C86E4
  c->r[29]=c->r[29]+0x0000000Cu; // 801C86E8
  cmpu(c,0,c->r[25],0x00000003u); // 801C86EC
  c->r[28]=c->r[28]+0x00000008u; // 801C86F0
  c->r[30]=c->r[30]+0x00000004u; // 801C86F4
  if (crb(c,0)) { IRQCHK(c); goto L_801C8628; } // 801C86F8
  c->r[11]=c->r[1]+0x00000030u; // 801C86FC
  c->lr=0x801C8704u; f_800C2E90(c); // 801C8700
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C8704
  c->lr=c->r[0]; // 801C8708
  c->r[1]=c->r[1]+0x00000030u; // 801C870C
  return; // 801C8710
}

// __InitParams
void f_801C8720(Ctx* __restrict c) {
  trace_call(0x801C8720u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C8720
  c->r[0]=c->lr; // 801C8724
  W32(c->r[1]+0x00000064u,c->r[0]); // 801C8728
  c->r[11]=c->r[1]+0x00000030u; // 801C872C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 801C8730
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 801C8734
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 801C8738
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 801C873C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 801C8740
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 801C8744
  c->lr=0x801C874Cu; f_800C2E40(c); // 801C8748
  c->r[4]=R32(c->r[3]+0x00000110u); // 801C874C
  c->r[31]=0u+0x803A0000u; // 801C8750
  c->r[30]=c->r[3]|c->r[3]; // 801C8754
  cmpu(c,0,c->r[4],0x00000008u); // 801C8758
  c->r[31]=c->r[31]+0xFFFFDD80u; // 801C875C
  if (crb(c,0)) { goto L_801C876C; } // 801C8760
  c->r[3]=0u+0x00000000u; // 801C8764
  goto L_801C8A14; // 801C8768
L_801C876C:;
  {uint32_t ea=c->r[3]+0x00000118u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C876C
  {uint32_t ea=c->r[2]+0xFFFFAF4Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C8770
  fcmp(c,0,c->f[4],c->f[2]); // 801C8774
  if (crb(c,0)) { goto L_801C8788; } // 801C8778
  {uint32_t ea=c->r[3]+0x00000114u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C877C
  fcmp(c,0,c->f[4],c->f[0]); // 801C8780
  if (!crb(c,1)) { goto L_801C8790; } // 801C8784
L_801C8788:;
  c->r[3]=0u+0x00000000u; // 801C8788
  goto L_801C8A14; // 801C878C
L_801C8790:;
  c->r[0]=R32(c->r[3]+0x0000011Cu); // 801C8790
  cmpu(c,0,c->r[0],0x00000006u); // 801C8794
  if (crb(c,0)) { goto L_801C87A4; } // 801C8798
  c->r[3]=0u+0x00000000u; // 801C879C
  goto L_801C8A14; // 801C87A0
L_801C87A4:;
  {uint32_t ea=c->r[3]+0x00000120u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C87A4
  fcmp(c,0,c->f[0],c->f[2]); // 801C87A8
  if (!crb(c,0)) { goto L_801C87B8; } // 801C87AC
  c->r[3]=0u+0x00000000u; // 801C87B0
  goto L_801C8A14; // 801C87B4
L_801C87B8:;
  {uint32_t ea=c->r[3]+0x00000124u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C87B8
  fcmp(c,0,c->f[0],c->f[2]); // 801C87BC
  if (crb(c,0)) { goto L_801C87D0; } // 801C87C0
  {uint32_t ea=c->r[2]+0xFFFFAF50u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C87C4
  fcmp(c,0,c->f[0],c->f[1]); // 801C87C8
  if (!crb(c,1)) { goto L_801C87D8; } // 801C87CC
L_801C87D0:;
  c->r[3]=0u+0x00000000u; // 801C87D0
  goto L_801C8A14; // 801C87D4
L_801C87D8:;
  {uint32_t ea=c->r[3]+0x00000128u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C87D8
  fcmp(c,0,c->f[0],c->f[2]); // 801C87DC
  if (crb(c,0)) { goto L_801C87EC; } // 801C87E0
  fcmp(c,0,c->f[0],c->f[1]); // 801C87E4
  if (!crb(c,1)) { goto L_801C87F4; } // 801C87E8
L_801C87EC:;
  c->r[3]=0u+0x00000000u; // 801C87EC
  goto L_801C8A14; // 801C87F0
L_801C87F4:;
  {uint32_t ea=c->r[3]+0x0000012Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C87F4
  fcmp(c,0,c->f[0],c->f[2]); // 801C87F8
  if (crb(c,0)) { goto L_801C8808; } // 801C87FC
  fcmp(c,0,c->f[0],c->f[1]); // 801C8800
  if (!crb(c,1)) { goto L_801C8810; } // 801C8804
L_801C8808:;
  c->r[3]=0u+0x00000000u; // 801C8808
  goto L_801C8A14; // 801C880C
L_801C8810:;
  {uint32_t ea=c->r[3]+0x00000130u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C8810
  fcmp(c,0,c->f[3],c->f[2]); // 801C8814
  if (crb(c,0)) { goto L_801C8824; } // 801C8818
  fcmp(c,0,c->f[3],c->f[1]); // 801C881C
  if (!crb(c,1)) { goto L_801C882C; } // 801C8820
L_801C8824:;
  c->r[3]=0u+0x00000000u; // 801C8824
  goto L_801C8A14; // 801C8828
L_801C882C:;
  {uint32_t ea=c->r[3]+0x00000134u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C882C
  fcmp(c,0,c->f[0],c->f[2]); // 801C8830
  if (crb(c,0)) { goto L_801C8840; } // 801C8834
  fcmp(c,0,c->f[0],c->f[1]); // 801C8838
  if (!crb(c,1)) { goto L_801C8848; } // 801C883C
L_801C8840:;
  c->r[3]=0u+0x00000000u; // 801C8840
  goto L_801C8A14; // 801C8844
L_801C8848:;
  {uint32_t ea=c->r[3]+0x00000140u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C8848
  fcmp(c,0,c->f[0],c->f[2]); // 801C884C
  if (crb(c,0)) { goto L_801C885C; } // 801C8850
  fcmp(c,0,c->f[0],c->f[1]); // 801C8854
  if (!crb(c,1)) { goto L_801C8864; } // 801C8858
L_801C885C:;
  c->r[3]=0u+0x00000000u; // 801C885C
  goto L_801C8A14; // 801C8860
L_801C8864:;
  {uint32_t ea=c->r[3]+0x00000144u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C8864
  fcmp(c,0,c->f[0],c->f[2]); // 801C8868
  if (crb(c,0)) { goto L_801C8878; } // 801C886C
  fcmp(c,0,c->f[0],c->f[1]); // 801C8870
  if (!crb(c,1)) { goto L_801C8880; } // 801C8874
L_801C8878:;
  c->r[3]=0u+0x00000000u; // 801C8878
  goto L_801C8A14; // 801C887C
L_801C8880:;
  c->r[8]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 801C8880
  c->r[9]=c->r[31]+0x00000000u; // 801C8884
  {uint32_t ea=c->r[2]+0xFFFFAF48u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C8888
  c->r[5]=c->r[31]+0x00000060u; // 801C888C
  {uint32_t ea=c->r[2]+0xFFFFAF54u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C8890
  c->r[27]=0u+0x00000000u; // 801C8894
  c->r[7]=c->r[9]+c->r[8]; // 801C8898
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[4]); // 801C889C
  c->r[6]=R32(c->r[7]+0x00000008u); // 801C88A0
  c->r[4]=c->r[5]+c->r[8]; // 801C88A4
  W32(c->r[3]+0x00000018u,c->r[6]); // 801C88A8
  c->r[0]=R32(c->r[9]+c->r[8]); // 801C88AC
  c->r[0]=c->r[6]-c->r[0]; // 801C88B0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801C88B4
  {uint32_t ea=c->r[5]+c->r[8]; c->f[0]=c->ps1[0]=RF32(ea);} // 801C88B8
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 801C88BC
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 801C88C0
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 801C88C4
  c->r[0]=R32(c->r[7]+0x00000004u); // 801C88C8
  c->r[0]=c->r[6]-c->r[0]; // 801C88CC
  W32(c->r[3]+0x00000010u,c->r[0]); // 801C88D0
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C88D4
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 801C88D8
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 801C88DC
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 801C88E0
  c->r[0]=R32(c->r[7]+0x00000008u); // 801C88E4
  c->r[0]=c->r[6]-c->r[0]; // 801C88E8
  W32(c->r[3]+0x00000014u,c->r[0]); // 801C88EC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C88F0
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 801C88F4
  W32(c->r[3]+0x00000038u,c->r[27]); // 801C88F8
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 801C88FC
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 801C8900
  c->lr=0x801C8908u; f_800C2D24(c); // 801C8904
  W32(c->r[30]+0x0000003Cu,c->r[3]); // 801C8908
  c->r[26]=c->r[30]|c->r[30]; // 801C890C
  {uint32_t ea=c->r[2]+0xFFFFAF80u; c->f[29]=RF64(ea);} // 801C8910
  c->r[28]=c->r[31]+0x000000C0u; // 801C8914
  {uint32_t ea=c->r[2]+0xFFFFAF68u; c->f[30]=c->ps1[30]=RF32(ea);} // 801C8918
  c->r[24]=0u+0x00000000u; // 801C891C
  {uint32_t ea=c->r[2]+0xFFFFAF48u; c->f[31]=c->ps1[31]=RF32(ea);} // 801C8920
  c->r[25]=0u+0x00000000u; // 801C8924
  c->r[29]=0u+0x43300000u; // 801C8928
L_801C892C:;
  W32(c->r[26]+0x00000068u,c->r[27]); // 801C892C
  {uint32_t ea=c->r[2]+0xFFFFAF70u; c->f[1]=RF64(ea);} // 801C8930
  c->r[0]=R32(c->r[30]+0x0000011Cu); // 801C8934
  W32(c->r[1]+0x00000008u,c->r[29]); // 801C8938
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801C893C
  c->r[0]=c->r[25]+c->r[0]; // 801C8940
  c->r[0]=R32(c->r[28]+c->r[0]); // 801C8944
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801C8948
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801C894C
  W32(c->r[26]+0x00000074u,c->r[0]); // 801C8950
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[29]); // 801C8954
  {uint32_t ea=c->r[30]+0x00000120u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C8958
  c->f[2]=c->ps1[2]=S(c->f[30]*c->f[2]); // 801C895C
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 801C8960
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[0]); // 801C8964
  c->lr=0x801C896Cu; f_800D29C4(c); // 801C8968
  c->f[0]=c->ps1[0]=S(c->f[1]); // 801C896C
  c->r[24]=c->r[24]+0x00000001u; // 801C8970
  cmpu(c,0,c->r[24],0x00000003u); // 801C8974
  c->r[25]=c->r[25]+0x00000004u; // 801C8978
  {uint32_t ea=c->r[26]+0x0000008Cu; WF32(ea,c->f[0]);} // 801C897C
  c->r[26]=c->r[26]+0x00000004u; // 801C8980
  if (crb(c,0)) { IRQCHK(c); goto L_801C892C; } // 801C8984
  c->r[0]=R32(c->r[30]+0x0000011Cu); // 801C8988
  c->r[4]=0u+0x00000000u; // 801C898C
  W32(c->r[30]+0x000000B0u,c->r[4]); // 801C8990
  c->r[3]=c->r[31]+0x000000C0u; // 801C8994
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 801C8998
  {uint32_t ea=c->r[2]+0xFFFFAF50u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C899C
  c->r[3]=c->r[3]+c->r[0]; // 801C89A0
  {uint32_t ea=c->r[30]+0x00000128u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C89A4
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801C89A8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 801C89AC
  {uint32_t ea=c->r[2]+0xFFFFAF78u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C89B0
  W32(c->r[30]+0x000000B8u,c->r[0]); // 801C89B4
  {uint32_t ea=c->r[30]+0x00000124u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C89B8
  W32(c->r[30]+0x000000B4u,c->r[4]); // 801C89BC
  fcmp(c,0,c->f[1],c->f[0]); // 801C89C0
  c->r[0]=R32(c->r[3]+0x00000010u); // 801C89C4
  W32(c->r[30]+0x000000BCu,c->r[0]); // 801C89C8
  W32(c->r[30]+0x000000D4u,c->r[4]); // 801C89CC
  c->r[0]=R32(c->r[3]+0x00000014u); // 801C89D0
  W32(c->r[30]+0x000000E0u,c->r[0]); // 801C89D4
  W32(c->r[30]+0x000000D8u,c->r[4]); // 801C89D8
  c->r[0]=R32(c->r[3]+0x00000018u); // 801C89DC
  W32(c->r[30]+0x000000E4u,c->r[0]); // 801C89E0
  W32(c->r[30]+0x000000DCu,c->r[4]); // 801C89E4
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 801C89E8
  W32(c->r[30]+0x000000E8u,c->r[0]); // 801C89EC
  {uint32_t ea=c->r[30]+0x000000F8u; WF32(ea,c->f[2]);} // 801C89F0
  {uint32_t ea=c->r[30]+0x00000108u; WF32(ea,c->f[1]);} // 801C89F4
  if (!crb(c,1)) { goto L_801C8A00; } // 801C89F8
  {uint32_t ea=c->r[30]+0x00000108u; WF32(ea,c->f[0]);} // 801C89FC
L_801C8A00:;
  {uint32_t ea=c->r[2]+0xFFFFAF4Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C8A00
  c->r[3]=0u+0x00000001u; // 801C8A04
  {uint32_t ea=c->r[30]+0x000000FCu; WF32(ea,c->f[0]);} // 801C8A08
  {uint32_t ea=c->r[30]+0x00000100u; WF32(ea,c->f[0]);} // 801C8A0C
  {uint32_t ea=c->r[30]+0x00000104u; WF32(ea,c->f[0]);} // 801C8A10
L_801C8A14:;
  c->r[11]=c->r[1]+0x00000030u; // 801C8A14
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 801C8A18
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 801C8A1C
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 801C8A20
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 801C8A24
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,29,ea,0,0);} // 801C8A28
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 801C8A2C
  c->lr=0x801C8A34u; f_800C2E8C(c); // 801C8A30
  c->r[0]=R32(c->r[1]+0x00000064u); // 801C8A34
  c->lr=c->r[0]; // 801C8A38
  c->r[1]=c->r[1]+0x00000060u; // 801C8A3C
  return; // 801C8A40
}

// fn_801C8A50
void f_801C8A50(Ctx* __restrict c) {
  trace_call(0x801C8A50u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C8A50
  c->r[0]=c->lr; // 801C8A54
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C8A58
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C8A5C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C8A60
  c->r[30]=c->r[3]|c->r[3]; // 801C8A64
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C8A68
  c->lr=0x801C8A70u; f_802494C0(c); // 801C8A6C
  c->r[31]=c->r[3]|c->r[3]; // 801C8A70
  c->lr=0x801C8A78u; f_801C5990(c); // 801C8A74
  cmpu(c,0,c->r[3],0x00000002u); // 801C8A78
  if (crb(c,2)) { goto L_801C8A90; } // 801C8A7C
  c->r[3]=c->r[31]|c->r[31]; // 801C8A80
  c->lr=0x801C8A88u; f_80249500(c); // 801C8A84
  c->r[3]=0u+0x00000000u; // 801C8A88
  goto L_801C8BF4; // 801C8A8C
L_801C8A90:;
  {uint32_t ea=c->r[30]+0x00000144u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C8A90
  c->r[0]=0u+0x00000001u; // 801C8A94
  {uint32_t ea=c->r[2]+0xFFFFAF8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C8A98
  W32(c->r[30]+0x0000013Cu,c->r[0]); // 801C8A9C
  fcmp(c,0,c->f[1],c->f[0]); // 801C8AA0
  if (!crb(c,0)) { goto L_801C8ADC; } // 801C8AA4
  c->lr=0x801C8AACu; f_802494C0(c); // 801C8AA8
  c->r[0]=R32(c->r[30]+0x0000013Cu); // 801C8AAC
  c->r[29]=c->r[3]|c->r[3]; // 801C8AB0
  c->r[3]=c->r[30]|c->r[30]; // 801C8AB4
  c->r[0]=c->r[0]|0x00000001u; // 801C8AB8
  W32(c->r[30]+0x0000013Cu,c->r[0]); // 801C8ABC
  c->lr=0x801C8AC4u; f_801C94E0(c); // 801C8AC0
  c->r[3]=c->r[29]|c->r[29]; // 801C8AC4
  c->lr=0x801C8ACCu; f_80249500(c); // 801C8AC8
  c->r[3]=c->r[31]|c->r[31]; // 801C8ACC
  c->lr=0x801C8AD4u; f_80249500(c); // 801C8AD0
  c->r[3]=0u+0x00000000u; // 801C8AD4
  goto L_801C8BF4; // 801C8AD8
L_801C8ADC:;
  {uint32_t ea=c->r[2]+0xFFFFAF88u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C8ADC
  c->r[3]=0u+0x803A0000u; // 801C8AE0
  c->r[3]=c->r[3]+0xFFFFDF20u; // 801C8AE4
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 801C8AE8
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801C8AEC
  W32(c->r[30]+0x00000020u,c->r[0]); // 801C8AF0
  c->lr=0x801C8AF8u; f_800C2D24(c); // 801C8AF4
  W32(c->r[30]+0x00000048u,c->r[3]); // 801C8AF8
  c->r[4]=0u+0x803A0000u; // 801C8AFC
  c->r[4]=c->r[4]+0xFFFFDFE0u; // 801C8B00
  c->r[3]=c->r[30]|c->r[30]; // 801C8B04
  c->r[0]=R32(c->r[4]+0x000000D8u); // 801C8B08
  W32(c->r[30]+0x00000094u,c->r[0]); // 801C8B0C
  c->r[0]=R32(c->r[4]+0x000000DCu); // 801C8B10
  W32(c->r[30]+0x00000098u,c->r[0]); // 801C8B14
  c->r[0]=R32(c->r[4]+0x000000E0u); // 801C8B18
  W32(c->r[30]+0x0000009Cu,c->r[0]); // 801C8B1C
  c->r[0]=R32(c->r[4]+0x000000E4u); // 801C8B20
  W32(c->r[30]+0x000000DCu,c->r[0]); // 801C8B24
  c->r[0]=R32(c->r[4]+0x000000E8u); // 801C8B28
  W32(c->r[30]+0x000000E0u,c->r[0]); // 801C8B2C
  c->r[0]=R32(c->r[4]+0x000000ECu); // 801C8B30
  W32(c->r[30]+0x00000114u,c->r[0]); // 801C8B34
  c->r[0]=R32(c->r[4]+0x000000F0u); // 801C8B38
  W32(c->r[30]+0x00000118u,c->r[0]); // 801C8B3C
  c->r[0]=R32(c->r[4]+0x000000F4u); // 801C8B40
  W32(c->r[30]+0x0000011Cu,c->r[0]); // 801C8B44
  c->r[0]=R32(c->r[4]+0x000000F8u); // 801C8B48
  W32(c->r[30]+0x00000120u,c->r[0]); // 801C8B4C
  c->lr=0x801C8B54u; f_801C9230(c); // 801C8B50
  cmps(c,0,(int32_t)c->r[3],0); // 801C8B54
  if (!crb(c,2)) { goto L_801C8B90; } // 801C8B58
  c->lr=0x801C8B60u; f_802494C0(c); // 801C8B5C
  c->r[0]=R32(c->r[30]+0x0000013Cu); // 801C8B60
  c->r[29]=c->r[3]|c->r[3]; // 801C8B64
  c->r[3]=c->r[30]|c->r[30]; // 801C8B68
  c->r[0]=c->r[0]|0x00000001u; // 801C8B6C
  W32(c->r[30]+0x0000013Cu,c->r[0]); // 801C8B70
  c->lr=0x801C8B78u; f_801C94E0(c); // 801C8B74
  c->r[3]=c->r[29]|c->r[29]; // 801C8B78
  c->lr=0x801C8B80u; f_80249500(c); // 801C8B7C
  c->r[3]=c->r[31]|c->r[31]; // 801C8B80
  c->lr=0x801C8B88u; f_80249500(c); // 801C8B84
  c->r[3]=0u+0x00000000u; // 801C8B88
  goto L_801C8BF4; // 801C8B8C
L_801C8B90:;
  c->r[3]=c->r[30]|c->r[30]; // 801C8B90
  c->lr=0x801C8B98u; f_801C93B0(c); // 801C8B94
  c->r[3]=c->r[30]|c->r[30]; // 801C8B98
  c->lr=0x801C8BA0u; f_801C9600(c); // 801C8B9C
  cmps(c,0,(int32_t)c->r[3],0); // 801C8BA0
  if (!crb(c,2)) { goto L_801C8BDC; } // 801C8BA4
  c->lr=0x801C8BACu; f_802494C0(c); // 801C8BA8
  c->r[0]=R32(c->r[30]+0x0000013Cu); // 801C8BAC
  c->r[29]=c->r[3]|c->r[3]; // 801C8BB0
  c->r[3]=c->r[30]|c->r[30]; // 801C8BB4
  c->r[0]=c->r[0]|0x00000001u; // 801C8BB8
  W32(c->r[30]+0x0000013Cu,c->r[0]); // 801C8BBC
  c->lr=0x801C8BC4u; f_801C94E0(c); // 801C8BC0
  c->r[3]=c->r[29]|c->r[29]; // 801C8BC4
  c->lr=0x801C8BCCu; f_80249500(c); // 801C8BC8
  c->r[3]=c->r[31]|c->r[31]; // 801C8BCC
  c->lr=0x801C8BD4u; f_80249500(c); // 801C8BD0
  c->r[3]=0u+0x00000000u; // 801C8BD4
  goto L_801C8BF4; // 801C8BD8
L_801C8BDC:;
  c->r[0]=R32(c->r[30]+0x0000013Cu); // 801C8BDC
  c->r[3]=c->r[31]|c->r[31]; // 801C8BE0
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 801C8BE4
  W32(c->r[30]+0x0000013Cu,c->r[0]); // 801C8BE8
  c->lr=0x801C8BF0u; f_80249500(c); // 801C8BEC
  c->r[3]=0u+0x00000001u; // 801C8BF0
L_801C8BF4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C8BF4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C8BF8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C8BFC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C8C00
  c->lr=c->r[0]; // 801C8C04
  c->r[1]=c->r[1]+0x00000020u; // 801C8C08
  return; // 801C8C0C
}

// fn_801C8C10
void f_801C8C10(Ctx* __restrict c) {
  trace_call(0x801C8C10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C8C10
  c->r[0]=c->lr; // 801C8C14
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C8C18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C8C1C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C8C20
  c->r[30]=c->r[3]|c->r[3]; // 801C8C24
  c->lr=0x801C8C2Cu; f_802494C0(c); // 801C8C28
  c->r[0]=R32(c->r[30]+0x0000013Cu); // 801C8C2C
  c->r[31]=c->r[3]|c->r[3]; // 801C8C30
  c->r[3]=c->r[30]|c->r[30]; // 801C8C34
  c->r[0]=c->r[0]|0x00000001u; // 801C8C38
  W32(c->r[30]+0x0000013Cu,c->r[0]); // 801C8C3C
  c->lr=0x801C8C44u; f_801C94E0(c); // 801C8C40
  c->r[3]=c->r[31]|c->r[31]; // 801C8C44
  c->lr=0x801C8C4Cu; f_80249500(c); // 801C8C48
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C8C4C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C8C50
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C8C54
  c->lr=c->r[0]; // 801C8C58
  c->r[1]=c->r[1]+0x00000010u; // 801C8C5C
  return; // 801C8C60
}

// fn_801C8C70
void f_801C8C70(Ctx* __restrict c) {
  trace_call(0x801C8C70u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C8C70
  c->r[0]=c->lr; // 801C8C74
  W32(c->r[1]+0x000000B4u,c->r[0]); // 801C8C78
  c->r[11]=c->r[1]+0x00000090u; // 801C8C7C
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[31]);} // 801C8C80
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,31,ea,0,0);} // 801C8C84
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[30]);} // 801C8C88
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,30,ea,0,0);} // 801C8C8C
  c->lr=0x801C8C94u; f_800C2E40(c); // 801C8C90
  c->r[0]=R32(c->r[4]+0x0000013Cu); // 801C8C94
  cmps(c,0,(int32_t)c->r[0],0); // 801C8C98
  if (crb(c,2)) { goto L_801C8CAC; } // 801C8C9C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 801C8CA0
  W32(c->r[4]+0x0000013Cu,c->r[0]); // 801C8CA4
  goto L_801C91FC; // 801C8CA8
L_801C8CAC:;
  c->r[8]=R32(c->r[4]+0x00000168u); // 801C8CAC
  c->r[7]=R32(c->r[3]+0x00000000u); // 801C8CB0
  c->r[6]=R32(c->r[3]+0x00000004u); // 801C8CB4
  cmps(c,0,(int32_t)c->r[8],0); // 801C8CB8
  c->r[5]=R32(c->r[3]+0x00000008u); // 801C8CBC
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801C8CC0
  W32(c->r[1]+0x00000038u,c->r[7]); // 801C8CC4
  W32(c->r[1]+0x0000003Cu,c->r[6]); // 801C8CC8
  W32(c->r[1]+0x00000040u,c->r[5]); // 801C8CCC
  W32(c->r[1]+0x00000044u,c->r[0]); // 801C8CD0
  if (crb(c,2)) { goto L_801C8CF8; } // 801C8CD4
  c->r[6]=R32(c->r[8]+0x00000000u); // 801C8CD8
  c->r[5]=R32(c->r[8]+0x00000004u); // 801C8CDC
  c->r[3]=R32(c->r[8]+0x00000008u); // 801C8CE0
  c->r[0]=R32(c->r[8]+0x0000000Cu); // 801C8CE4
  W32(c->r[1]+0x00000008u,c->r[6]); // 801C8CE8
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 801C8CEC
  W32(c->r[1]+0x00000010u,c->r[3]); // 801C8CF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C8CF4
L_801C8CF8:;
  c->r[8]=R32(c->r[4]+0x0000016Cu); // 801C8CF8
  cmps(c,0,(int32_t)c->r[8],0); // 801C8CFC
  if (crb(c,2)) { goto L_801C8D14; } // 801C8D00
  c->r[3]=R32(c->r[8]+0x00000000u); // 801C8D04
  c->r[5]=R32(c->r[8]+0x00000004u); // 801C8D08
  c->r[6]=R32(c->r[8]+0x00000008u); // 801C8D0C
  c->r[7]=R32(c->r[8]+0x0000000Cu); // 801C8D10
L_801C8D14:;
  {uint32_t ea=c->r[2]+0xFFFFAF90u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C8D14
  c->r[30]=0u+0x00000000u; // 801C8D18
  {uint32_t ea=c->r[4]+0x00000138u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C8D1C
  c->r[28]=0u+0x00000000u; // 801C8D20
  {uint32_t ea=c->r[2]+0xFFFFAF94u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C8D24
  c->r[0]=0u+0x43300000u; // 801C8D28
  {uint32_t ea=c->r[4]+0x00000164u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C8D2C
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[1]); // 801C8D30
  {uint32_t ea=c->r[2]+0xFFFFAF98u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C8D34
  c->r[29]=0u+0x00000004u; // 801C8D38
  {uint32_t ea=c->r[4]+0x0000015Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C8D3C
  c->f[5]=c->ps1[5]=S(c->f[5]*c->f[3]); // 801C8D40
  {uint32_t ea=c->r[4]+0x00000124u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C8D44
  c->f[6]=c->ps1[6]=S(c->f[2]*c->f[0]); // 801C8D48
  {uint32_t ea=c->r[2]+0xFFFFAFA0u; c->f[0]=RF64(ea);} // 801C8D4C
L_801C8D50:;
  c->r[10]=c->r[4]|c->r[4]; // 801C8D50
  c->r[11]=c->r[4]|c->r[4]; // 801C8D54
  c->r[12]=c->r[4]|c->r[4]; // 801C8D58
  c->r[8]=c->r[1]+0x00000008u; // 801C8D5C
  c->r[9]=c->r[1]+0x00000038u; // 801C8D60
  c->r[31]=c->r[1]+0x00000018u; // 801C8D64
  c->ctr=c->r[29]; // 801C8D68
  c->r[0]=c->r[0]|0x00000000u; // 801C8D6C
L_801C8D70:;
  c->r[25]=R32(c->r[4]+0x00000168u); // 801C8D70
  cmps(c,0,(int32_t)c->r[25],0); // 801C8D74
  if (crb(c,2)) { goto L_801C8DB0; } // 801C8D78
  c->r[26]=R32(c->r[8]+0x00000000u); // 801C8D7C
  c->r[27]=R32(c->r[9]+0x00000000u); // 801C8D80
  c->r[25]=R32(c->r[26]+0x00000000u); // 801C8D84
  c->r[26]=c->r[26]+0x00000004u; // 801C8D88
  c->r[27]=R32(c->r[27]+0x00000000u); // 801C8D8C
  W32(c->r[1]+0x00000048u,c->r[0]); // 801C8D90
  c->r[25]=c->r[27]+c->r[25]; // 801C8D94
  c->r[25]=c->r[25]^0x80000000u; // 801C8D98
  W32(c->r[1]+0x0000004Cu,c->r[25]); // 801C8D9C
  {uint32_t ea=c->r[1]+0x00000048u; c->f[2]=RF64(ea);} // 801C8DA0
  W32(c->r[8]+0x00000000u,c->r[26]); // 801C8DA4
  c->f[11]=c->ps1[11]=S(c->f[2]-c->f[0]); // 801C8DA8
  goto L_801C8DCC; // 801C8DAC
L_801C8DB0:;
  c->r[25]=R32(c->r[9]+0x00000000u); // 801C8DB0
  W32(c->r[1]+0x00000050u,c->r[0]); // 801C8DB4
  c->r[25]=R32(c->r[25]+0x00000000u); // 801C8DB8
  c->r[25]=c->r[25]^0x80000000u; // 801C8DBC
  W32(c->r[1]+0x00000054u,c->r[25]); // 801C8DC0
  {uint32_t ea=c->r[1]+0x00000050u; c->f[2]=RF64(ea);} // 801C8DC4
  c->f[11]=c->ps1[11]=S(c->f[2]-c->f[0]); // 801C8DC8
L_801C8DCC:;
  c->r[27]=R32(c->r[4]+0x00000010u); // 801C8DCC
  c->r[26]=R32(c->r[4]+0x00000014u); // 801C8DD0
  c->r[25]=R32(c->r[4]+0x00000018u); // 801C8DD4
  c->r[27]=rotl(c->r[27],2)&0xFFFFFFFCu; // 801C8DD8
  c->r[24]=R32(c->r[10]+0x00000000u); // 801C8DDC
  c->r[26]=rotl(c->r[26],2)&0xFFFFFFFCu; // 801C8DE0
  {uint32_t ea=c->r[4]+0x00000024u; c->f[9]=c->ps1[9]=RF32(ea);} // 801C8DE4
  c->r[25]=rotl(c->r[25],2)&0xFFFFFFFCu; // 801C8DE8
  {uint32_t ea=c->r[24]+c->r[27]; c->f[8]=c->ps1[8]=RF32(ea);} // 801C8DEC
  {uint32_t ea=c->r[4]+0x00000028u; c->f[7]=c->ps1[7]=RF32(ea);} // 801C8DF0
  {uint32_t ea=c->r[24]+c->r[26]; c->f[2]=c->ps1[2]=RF32(ea);} // 801C8DF4
  c->f[8]=c->ps1[8]=S(c->f[9]*c->f[8]); // 801C8DF8
  {uint32_t ea=c->r[4]+0x0000002Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 801C8DFC
  {uint32_t ea=c->r[24]+c->r[25]; c->f[9]=c->ps1[9]=RF32(ea);} // 801C8E00
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[2]); // 801C8E04
  {uint32_t ea=c->r[24]+c->r[25]; WF32(ea,c->f[11]);} // 801C8E08
  c->f[7]=c->ps1[7]=S(c->f[10]*c->f[9]); // 801C8E0C
  c->f[2]=c->ps1[2]=S(c->f[8]+c->f[2]); // 801C8E10
  c->r[26]=R32(c->r[4]+0x00000044u); // 801C8E14
  cmps(c,0,(int32_t)c->r[26],0); // 801C8E18
  c->f[2]=c->ps1[2]=S(c->f[7]+c->f[2]); // 801C8E1C
  if (crb(c,2)) { goto L_801C8E3C; } // 801C8E20
  c->r[26]=R32(c->r[4]+0x00000040u); // 801C8E24
  c->r[27]=R32(c->r[10]+0x00000030u); // 801C8E28
  c->r[26]=rotl(c->r[26],2)&0xFFFFFFFCu; // 801C8E2C
  {uint32_t ea=c->r[27]+c->r[26]; c->f[9]=c->ps1[9]=RF32(ea);} // 801C8E30
  {uint32_t ea=c->r[27]+c->r[26]; WF32(ea,c->f[11]);} // 801C8E34
  goto L_801C8E40; // 801C8E38
L_801C8E3C:;
  c->f[9]=c->f[11]; // 801C8E3C
L_801C8E40:;
  c->r[26]=R32(c->r[4]+0x0000007Cu); // 801C8E40
  c->r[24]=R32(c->r[11]+0x0000004Cu); // 801C8E44
  c->r[26]=rotl(c->r[26],2)&0xFFFFFFFCu; // 801C8E48
  {uint32_t ea=c->r[4]+0x000000A0u; c->f[7]=c->ps1[7]=RF32(ea);} // 801C8E4C
  {uint32_t ea=c->r[24]+c->r[26]; c->f[8]=c->ps1[8]=RF32(ea);} // 801C8E50
  {uint32_t ea=c->r[2]+0xFFFFAF8Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 801C8E54
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[7]); // 801C8E58
  c->f[10]=c->ps1[10]=S(c->f[10]+c->f[8]); // 801C8E5C
  c->f[7]=c->ps1[7]=S(c->f[9]+c->f[7]); // 801C8E60
  {uint32_t ea=c->r[24]+c->r[26]; WF32(ea,c->f[7]);} // 801C8E64
  c->r[26]=R32(c->r[4]+0x00000080u); // 801C8E68
  c->r[25]=R32(c->r[11]+0x00000050u); // 801C8E6C
  c->r[26]=rotl(c->r[26],2)&0xFFFFFFFCu; // 801C8E70
  {uint32_t ea=c->r[4]+0x000000A4u; c->f[7]=c->ps1[7]=RF32(ea);} // 801C8E74
  {uint32_t ea=c->r[25]+c->r[26]; c->f[8]=c->ps1[8]=RF32(ea);} // 801C8E78
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[7]); // 801C8E7C
  c->f[10]=c->ps1[10]=S(c->f[10]+c->f[8]); // 801C8E80
  c->f[7]=c->ps1[7]=S(c->f[9]+c->f[7]); // 801C8E84
  {uint32_t ea=c->r[25]+c->r[26]; WF32(ea,c->f[7]);} // 801C8E88
  c->r[26]=R32(c->r[4]+0x00000084u); // 801C8E8C
  c->r[27]=R32(c->r[11]+0x00000054u); // 801C8E90
  c->r[26]=rotl(c->r[26],2)&0xFFFFFFFCu; // 801C8E94
  {uint32_t ea=c->r[4]+0x000000A8u; c->f[7]=c->ps1[7]=RF32(ea);} // 801C8E98
  {uint32_t ea=c->r[27]+c->r[26]; c->f[8]=c->ps1[8]=RF32(ea);} // 801C8E9C
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[7]); // 801C8EA0
  c->f[10]=c->ps1[10]=S(c->f[10]+c->f[8]); // 801C8EA4
  c->f[7]=c->ps1[7]=S(c->f[9]+c->f[7]); // 801C8EA8
  {uint32_t ea=c->r[27]+c->r[26]; WF32(ea,c->f[7]);} // 801C8EAC
  c->r[26]=R32(c->r[4]+0x000000CCu); // 801C8EB0
  c->r[24]=R32(c->r[12]+0x000000ACu); // 801C8EB4
  c->r[26]=rotl(c->r[26],2)&0xFFFFFFFCu; // 801C8EB8
  {uint32_t ea=c->r[24]+c->r[26]; c->f[8]=c->ps1[8]=RF32(ea);} // 801C8EBC
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[3]); // 801C8EC0
  c->f[7]=c->ps1[7]=S(c->f[10]+c->f[7]); // 801C8EC4
  {uint32_t ea=c->r[24]+c->r[26]; WF32(ea,c->f[7]);} // 801C8EC8
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[3]); // 801C8ECC
  c->r[26]=R32(c->r[4]+0x000000D0u); // 801C8ED0
  c->r[25]=R32(c->r[12]+0x000000B0u); // 801C8ED4
  c->r[26]=rotl(c->r[26],2)&0xFFFFFFFCu; // 801C8ED8
  c->f[8]=c->ps1[8]=S(c->f[8]-c->f[7]); // 801C8EDC
  {uint32_t ea=c->r[25]+c->r[26]; c->f[9]=c->ps1[9]=RF32(ea);} // 801C8EE0
  c->f[7]=c->ps1[7]=S(c->f[9]*c->f[3]); // 801C8EE4
  c->f[7]=c->ps1[7]=S(c->f[8]+c->f[7]); // 801C8EE8
  {uint32_t ea=c->r[25]+c->r[26]; WF32(ea,c->f[7]);} // 801C8EEC
  c->f[8]=c->ps1[8]=S(c->f[7]*c->f[3]); // 801C8EF0
  {uint32_t ea=c->r[10]+0x00000128u; c->f[7]=c->ps1[7]=RF32(ea);} // 801C8EF4
  c->f[8]=c->ps1[8]=S(c->f[9]-c->f[8]); // 801C8EF8
  c->f[7]=c->ps1[7]=S(c->f[1]*c->f[7]); // 801C8EFC
  c->f[8]=c->ps1[8]=S(c->f[4]*c->f[8]); // 801C8F00
  c->f[9]=c->ps1[9]=S(c->f[8]+c->f[7]); // 801C8F04
  {uint32_t ea=c->r[10]+0x00000128u; WF32(ea,c->f[9]);} // 801C8F08
  c->r[26]=R32(c->r[10]+0x000000F4u); // 801C8F0C
  c->r[27]=R32(c->r[10]+0x000000E4u); // 801C8F10
  c->r[26]=rotl(c->r[26],2)&0xFFFFFFFCu; // 801C8F14
  {uint32_t ea=c->r[27]+c->r[26]; c->f[8]=c->ps1[8]=RF32(ea);} // 801C8F18
  c->f[7]=c->ps1[7]=S(c->f[8]*c->f[3]); // 801C8F1C
  c->f[7]=c->ps1[7]=S(c->f[9]+c->f[7]); // 801C8F20
  {uint32_t ea=c->r[27]+c->r[26]; WF32(ea,c->f[7]);} // 801C8F24
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[3]); // 801C8F28
  c->r[26]=R32(c->r[10]+0x000000F4u); // 801C8F2C
  c->r[27]=c->r[26]+0x00000001u; // 801C8F30
  W32(c->r[10]+0x000000F4u,c->r[27]); // 801C8F34
  c->f[7]=c->ps1[7]=S(c->f[8]-c->f[7]); // 801C8F38
  c->r[26]=R32(c->r[10]+0x00000104u); // 801C8F3C
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[7]);} // 801C8F40
  cmpu(c,0,c->r[27],c->r[26]); // 801C8F44
  if (crb(c,0)) { goto L_801C8F50; } // 801C8F48
  W32(c->r[10]+0x000000F4u,c->r[28]); // 801C8F4C
L_801C8F50:;
  {uint32_t ea=c->r[31]+0x00000000u; c->f[7]=c->ps1[7]=RF32(ea);} // 801C8F50
  c->r[8]=c->r[8]+0x00000004u; // 801C8F54
  c->r[9]=c->r[9]+0x00000004u; // 801C8F58
  c->r[10]=c->r[10]+0x00000004u; // 801C8F5C
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[5]); // 801C8F60
  c->r[11]=c->r[11]+0x0000000Cu; // 801C8F64
  c->r[12]=c->r[12]+0x00000008u; // 801C8F68
  c->f[2]=c->ps1[2]=S(c->f[7]+c->f[2]); // 801C8F6C
  {uint32_t ea=c->r[31]+0x00000000u; WF32(ea,c->f[2]);} // 801C8F70
  c->r[31]=c->r[31]+0x00000004u; // 801C8F74
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C8D70; } // 801C8F78
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 801C8F7C
  {uint32_t ea=c->r[1]+0x00000020u; c->f[13]=c->ps1[13]=RF32(ea);} // 801C8F80
  {uint32_t ea=c->r[1]+0x00000018u; c->f[10]=c->ps1[10]=RF32(ea);} // 801C8F84
  c->f[7]=c->ps1[7]=S(c->f[31]+c->f[13]); // 801C8F88
  {uint32_t ea=c->r[1]+0x00000024u; c->f[12]=c->ps1[12]=RF32(ea);} // 801C8F8C
  c->f[2]=c->ps1[2]=S(c->f[10]+c->f[13]); // 801C8F90
  c->r[26]=R32(c->r[1]+0x00000038u); // 801C8F94
  c->f[11]=c->ps1[11]=S(c->f[10]+c->f[31]); // 801C8F98
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801C8F9C
  c->f[7]=c->ps1[7]=S(c->f[12]+c->f[7]); // 801C8FA0
  c->r[27]=c->r[26]+0x00000004u; // 801C8FA4
  c->f[8]=c->ps1[8]=S(c->f[12]+c->f[2]); // 801C8FA8
  c->r[12]=c->r[31]+0x00000004u; // 801C8FAC
  c->r[9]=R32(c->r[1]+0x00000044u); // 801C8FB0
  c->f[30]=c->ps1[30]=S(c->f[12]+c->f[11]); // 801C8FB4
  c->f[9]=c->ps1[9]=S(c->f[7]*c->f[6]); // 801C8FB8
  c->r[11]=R32(c->r[1]+0x00000040u); // 801C8FBC
  {uint32_t ea=c->r[4]+0x00000170u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C8FC0
  c->r[8]=c->r[9]+0x00000004u; // 801C8FC4
  c->r[10]=c->r[11]+0x00000004u; // 801C8FC8
  c->f[8]=c->ps1[8]=S(c->f[8]*c->f[6]); // 801C8FCC
  c->f[10]=c->ps1[10]=S(c->f[10]+c->f[9]); // 801C8FD0
  W32(c->r[1]+0x00000038u,c->r[27]); // 801C8FD4
  c->f[9]=c->ps1[9]=S(c->f[31]+c->f[8]); // 801C8FD8
  c->f[7]=c->ps1[7]=S(c->f[30]*c->f[6]); // 801C8FDC
  W32(c->r[1]+0x0000003Cu,c->r[12]); // 801C8FE0
  c->f[2]=c->ps1[2]=S(c->f[10]*c->f[2]); // 801C8FE4
  W32(c->r[1]+0x00000044u,c->r[8]); // 801C8FE8
  c->f[8]=c->ps1[8]=S(c->f[13]+c->f[7]); // 801C8FEC
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801C8FF0
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[10]);} // 801C8FF4
  c->f[7]=c->ps1[7]=S(c->f[13]+c->f[11]); // 801C8FF8
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[2]);} // 801C8FFC
  c->r[27]=R32(c->r[1]+0x00000054u); // 801C9000
  c->f[7]=c->ps1[7]=S(c->f[7]*c->f[6]); // 801C9004
  W32(c->r[26]+0x00000000u,c->r[27]); // 801C9008
  {uint32_t ea=c->r[4]+0x00000170u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C900C
  c->f[7]=c->ps1[7]=S(c->f[12]+c->f[7]); // 801C9010
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[9]);} // 801C9014
  c->f[2]=c->ps1[2]=S(c->f[9]*c->f[2]); // 801C9018
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[8]);} // 801C901C
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801C9020
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[7]);} // 801C9024
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[2]);} // 801C9028
  c->r[12]=R32(c->r[1]+0x0000004Cu); // 801C902C
  W32(c->r[31]+0x00000000u,c->r[12]); // 801C9030
  {uint32_t ea=c->r[4]+0x00000170u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C9034
  W32(c->r[1]+0x00000040u,c->r[10]); // 801C9038
  c->f[2]=c->ps1[2]=S(c->f[8]*c->f[2]); // 801C903C
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801C9040
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[2]);} // 801C9044
  c->r[8]=R32(c->r[1]+0x0000005Cu); // 801C9048
  W32(c->r[11]+0x00000000u,c->r[8]); // 801C904C
  {uint32_t ea=c->r[4]+0x00000170u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C9050
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[2]); // 801C9054
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801C9058
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[2]);} // 801C905C
  c->r[8]=R32(c->r[1]+0x00000064u); // 801C9060
  W32(c->r[9]+0x00000000u,c->r[8]); // 801C9064
  c->r[8]=R32(c->r[4]+0x0000016Cu); // 801C9068
  cmps(c,0,(int32_t)c->r[8],0); // 801C906C
  if (crb(c,2)) { goto L_801C90E4; } // 801C9070
  {uint32_t ea=c->r[4]+0x00000174u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C9074
  c->f[2]=c->ps1[2]=S(c->f[10]*c->f[2]); // 801C9078
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801C907C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[2]);} // 801C9080
  c->r[8]=R32(c->r[1]+0x00000064u); // 801C9084
  W32(c->r[3]+0x00000000u,c->r[8]); // 801C9088
  c->r[3]=c->r[3]+0x00000004u; // 801C908C
  {uint32_t ea=c->r[4]+0x00000174u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C9090
  c->f[2]=c->ps1[2]=S(c->f[9]*c->f[2]); // 801C9094
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801C9098
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[2]);} // 801C909C
  c->r[8]=R32(c->r[1]+0x0000005Cu); // 801C90A0
  W32(c->r[5]+0x00000000u,c->r[8]); // 801C90A4
  c->r[5]=c->r[5]+0x00000004u; // 801C90A8
  {uint32_t ea=c->r[4]+0x00000174u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C90AC
  c->f[2]=c->ps1[2]=S(c->f[8]*c->f[2]); // 801C90B0
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801C90B4
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[2]);} // 801C90B8
  c->r[8]=R32(c->r[1]+0x00000054u); // 801C90BC
  W32(c->r[6]+0x00000000u,c->r[8]); // 801C90C0
  c->r[6]=c->r[6]+0x00000004u; // 801C90C4
  {uint32_t ea=c->r[4]+0x00000174u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C90C8
  c->f[2]=c->ps1[2]=S(c->f[7]*c->f[2]); // 801C90CC
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 801C90D0
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[2]);} // 801C90D4
  c->r[8]=R32(c->r[1]+0x0000004Cu); // 801C90D8
  W32(c->r[7]+0x00000000u,c->r[8]); // 801C90DC
  c->r[7]=c->r[7]+0x00000004u; // 801C90E0
L_801C90E4:;
  c->r[8]=R32(c->r[4]+0x00000010u); // 801C90E4
  c->r[9]=c->r[8]+0x00000001u; // 801C90E8
  W32(c->r[4]+0x00000010u,c->r[9]); // 801C90EC
  c->r[8]=R32(c->r[4]+0x0000001Cu); // 801C90F0
  cmpu(c,0,c->r[9],c->r[8]); // 801C90F4
  if (crb(c,0)) { goto L_801C9100; } // 801C90F8
  W32(c->r[4]+0x00000010u,c->r[28]); // 801C90FC
L_801C9100:;
  c->r[8]=R32(c->r[4]+0x00000014u); // 801C9100
  c->r[9]=c->r[8]+0x00000001u; // 801C9104
  W32(c->r[4]+0x00000014u,c->r[9]); // 801C9108
  c->r[8]=R32(c->r[4]+0x0000001Cu); // 801C910C
  cmpu(c,0,c->r[9],c->r[8]); // 801C9110
  if (crb(c,0)) { goto L_801C911C; } // 801C9114
  W32(c->r[4]+0x00000014u,c->r[28]); // 801C9118
L_801C911C:;
  c->r[8]=R32(c->r[4]+0x00000018u); // 801C911C
  c->r[10]=c->r[4]+0x00000008u; // 801C9120
  c->r[9]=c->r[8]+0x00000001u; // 801C9124
  W32(c->r[4]+0x00000018u,c->r[9]); // 801C9128
  c->r[8]=R32(c->r[4]+0x0000001Cu); // 801C912C
  cmpu(c,0,c->r[9],c->r[8]); // 801C9130
  if (crb(c,0)) { goto L_801C913C; } // 801C9134
  W32(c->r[10]+0x00000010u,c->r[28]); // 801C9138
L_801C913C:;
  c->r[9]=R32(c->r[4]+0x00000044u); // 801C913C
  cmps(c,0,(int32_t)c->r[9],0); // 801C9140
  if (crb(c,2)) { goto L_801C9160; } // 801C9144
  c->r[8]=R32(c->r[4]+0x00000040u); // 801C9148
  c->r[8]=c->r[8]+0x00000001u; // 801C914C
  W32(c->r[4]+0x00000040u,c->r[8]); // 801C9150
  cmpu(c,0,c->r[8],c->r[9]); // 801C9154
  if (crb(c,0)) { goto L_801C9160; } // 801C9158
  W32(c->r[4]+0x00000040u,c->r[28]); // 801C915C
L_801C9160:;
  c->r[8]=R32(c->r[4]+0x0000007Cu); // 801C9160
  c->r[9]=c->r[8]+0x00000001u; // 801C9164
  W32(c->r[4]+0x0000007Cu,c->r[9]); // 801C9168
  c->r[8]=R32(c->r[4]+0x00000088u); // 801C916C
  cmpu(c,0,c->r[9],c->r[8]); // 801C9170
  if (crb(c,0)) { goto L_801C917C; } // 801C9174
  W32(c->r[4]+0x0000007Cu,c->r[28]); // 801C9178
L_801C917C:;
  c->r[8]=R32(c->r[4]+0x00000080u); // 801C917C
  c->r[9]=c->r[8]+0x00000001u; // 801C9180
  W32(c->r[4]+0x00000080u,c->r[9]); // 801C9184
  c->r[8]=R32(c->r[4]+0x0000008Cu); // 801C9188
  cmpu(c,0,c->r[9],c->r[8]); // 801C918C
  if (crb(c,0)) { goto L_801C9198; } // 801C9190
  W32(c->r[4]+0x00000080u,c->r[28]); // 801C9194
L_801C9198:;
  c->r[8]=R32(c->r[4]+0x00000084u); // 801C9198
  c->r[10]=c->r[4]+0x00000008u; // 801C919C
  c->r[9]=c->r[8]+0x00000001u; // 801C91A0
  W32(c->r[4]+0x00000084u,c->r[9]); // 801C91A4
  c->r[8]=R32(c->r[4]+0x00000090u); // 801C91A8
  cmpu(c,0,c->r[9],c->r[8]); // 801C91AC
  if (crb(c,0)) { goto L_801C91B8; } // 801C91B0
  W32(c->r[10]+0x0000007Cu,c->r[28]); // 801C91B4
L_801C91B8:;
  c->r[8]=R32(c->r[4]+0x000000CCu); // 801C91B8
  c->r[9]=c->r[8]+0x00000001u; // 801C91BC
  W32(c->r[4]+0x000000CCu,c->r[9]); // 801C91C0
  c->r[8]=R32(c->r[4]+0x000000D4u); // 801C91C4
  cmpu(c,0,c->r[9],c->r[8]); // 801C91C8
  if (crb(c,0)) { goto L_801C91D4; } // 801C91CC
  W32(c->r[4]+0x000000CCu,c->r[28]); // 801C91D0
L_801C91D4:;
  c->r[8]=R32(c->r[4]+0x000000D0u); // 801C91D4
  c->r[9]=c->r[8]+0x00000001u; // 801C91D8
  W32(c->r[4]+0x000000D0u,c->r[9]); // 801C91DC
  c->r[8]=R32(c->r[4]+0x000000D8u); // 801C91E0
  cmpu(c,0,c->r[9],c->r[8]); // 801C91E4
  if (crb(c,0)) { goto L_801C91F0; } // 801C91E8
  W32(c->r[4]+0x000000D0u,c->r[28]); // 801C91EC
L_801C91F0:;
  c->r[30]=c->r[30]+0x00000001u; // 801C91F0
  cmpu(c,0,c->r[30],0x00000060u); // 801C91F4
  if (crb(c,0)) { IRQCHK(c); goto L_801C8D50; } // 801C91F8
L_801C91FC:;
  c->r[11]=c->r[1]+0x00000090u; // 801C91FC
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,31,ea,0,0);} // 801C9200
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[31]=RF64(ea);} // 801C9204
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,30,ea,0,0);} // 801C9208
  {uint32_t ea=c->r[1]+0x00000090u; c->f[30]=RF64(ea);} // 801C920C
  c->lr=0x801C9214u; f_800C2E8C(c); // 801C9210
  c->r[0]=R32(c->r[1]+0x000000B4u); // 801C9214
  c->lr=c->r[0]; // 801C9218
  c->r[1]=c->r[1]+0x000000B0u; // 801C921C
  return; // 801C9220
}

// fn_801C9230
void f_801C9230(Ctx* __restrict c) {
  trace_call(0x801C9230u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9230
  c->r[0]=c->lr; // 801C9234
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C9238
  c->r[11]=c->r[1]+0x00000030u; // 801C923C
  c->lr=0x801C9244u; f_800C2E3C(c); // 801C9240
  c->r[23]=c->r[3]|c->r[3]; // 801C9244
  c->r[24]=0u+0x00000000u; // 801C9248
  c->r[30]=c->r[23]|c->r[23]; // 801C924C
  c->r[31]=0u+0x00000000u; // 801C9250
  c->r[29]=c->r[23]|c->r[23]; // 801C9254
  c->r[28]=c->r[23]|c->r[23]; // 801C9258
L_801C925C:;
  c->r[0]=R32(c->r[23]+0x00000020u); // 801C925C
  c->r[12]=R32(c->r[13]+0xFFFF8EA8u); // 801C9260
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C9264
  c->ctr=c->r[12]; // 801C9268
  if (true) { c->lr=0x801C9270u; dispatch(c,c->ctr); } // 801C926C
  cmps(c,0,(int32_t)c->r[3],0); // 801C9270
  W32(c->r[30]+0x00000000u,c->r[3]); // 801C9274
  if (!crb(c,2)) { goto L_801C9284; } // 801C9278
  c->r[3]=0u+0x00000000u; // 801C927C
  goto L_801C938C; // 801C9280
L_801C9284:;
  c->r[0]=R32(c->r[23]+0x00000048u); // 801C9284
  cmps(c,0,(int32_t)c->r[0],0); // 801C9288
  if (crb(c,2)) { goto L_801C92B4; } // 801C928C
  c->r[12]=R32(c->r[13]+0xFFFF8EA8u); // 801C9290
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C9294
  c->ctr=c->r[12]; // 801C9298
  if (true) { c->lr=0x801C92A0u; dispatch(c,c->ctr); } // 801C929C
  cmps(c,0,(int32_t)c->r[3],0); // 801C92A0
  W32(c->r[30]+0x00000030u,c->r[3]); // 801C92A4
  if (!crb(c,2)) { goto L_801C92B8; } // 801C92A8
  c->r[3]=0u+0x00000000u; // 801C92AC
  goto L_801C938C; // 801C92B0
L_801C92B4:;
  W32(c->r[30]+0x00000030u,c->r[31]); // 801C92B4
L_801C92B8:;
  c->r[26]=c->r[23]|c->r[23]; // 801C92B8
  c->r[27]=c->r[29]|c->r[29]; // 801C92BC
  c->r[25]=0u+0x00000000u; // 801C92C0
L_801C92C4:;
  c->r[0]=R32(c->r[26]+0x00000094u); // 801C92C4
  c->r[12]=R32(c->r[13]+0xFFFF8EA8u); // 801C92C8
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C92CC
  c->ctr=c->r[12]; // 801C92D0
  if (true) { c->lr=0x801C92D8u; dispatch(c,c->ctr); } // 801C92D4
  cmps(c,0,(int32_t)c->r[3],0); // 801C92D8
  W32(c->r[27]+0x0000004Cu,c->r[3]); // 801C92DC
  if (!crb(c,2)) { goto L_801C92EC; } // 801C92E0
  c->r[3]=0u+0x00000000u; // 801C92E4
  goto L_801C938C; // 801C92E8
L_801C92EC:;
  c->r[25]=c->r[25]+0x00000001u; // 801C92EC
  c->r[27]=c->r[27]+0x00000004u; // 801C92F0
  cmpu(c,0,c->r[25],0x00000003u); // 801C92F4
  c->r[26]=c->r[26]+0x00000004u; // 801C92F8
  if (crb(c,0)) { IRQCHK(c); goto L_801C92C4; } // 801C92FC
  c->r[27]=c->r[23]|c->r[23]; // 801C9300
  c->r[26]=c->r[28]|c->r[28]; // 801C9304
  c->r[25]=0u+0x00000000u; // 801C9308
L_801C930C:;
  c->r[0]=R32(c->r[27]+0x000000DCu); // 801C930C
  c->r[12]=R32(c->r[13]+0xFFFF8EA8u); // 801C9310
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C9314
  c->ctr=c->r[12]; // 801C9318
  if (true) { c->lr=0x801C9320u; dispatch(c,c->ctr); } // 801C931C
  cmps(c,0,(int32_t)c->r[3],0); // 801C9320
  W32(c->r[26]+0x000000ACu,c->r[3]); // 801C9324
  if (!crb(c,2)) { goto L_801C9334; } // 801C9328
  c->r[3]=0u+0x00000000u; // 801C932C
  goto L_801C938C; // 801C9330
L_801C9334:;
  c->r[25]=c->r[25]+0x00000001u; // 801C9334
  c->r[26]=c->r[26]+0x00000004u; // 801C9338
  cmpu(c,0,c->r[25],0x00000002u); // 801C933C
  c->r[27]=c->r[27]+0x00000004u; // 801C9340
  if (crb(c,0)) { IRQCHK(c); goto L_801C930C; } // 801C9344
  c->r[0]=R32(c->r[30]+0x00000114u); // 801C9348
  c->r[12]=R32(c->r[13]+0xFFFF8EA8u); // 801C934C
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C9350
  c->ctr=c->r[12]; // 801C9354
  if (true) { c->lr=0x801C935Cu; dispatch(c,c->ctr); } // 801C9358
  cmps(c,0,(int32_t)c->r[3],0); // 801C935C
  W32(c->r[30]+0x000000E4u,c->r[3]); // 801C9360
  if (!crb(c,2)) { goto L_801C9370; } // 801C9364
  c->r[3]=0u+0x00000000u; // 801C9368
  goto L_801C938C; // 801C936C
L_801C9370:;
  c->r[24]=c->r[24]+0x00000001u; // 801C9370
  c->r[29]=c->r[29]+0x0000000Cu; // 801C9374
  cmpu(c,0,c->r[24],0x00000004u); // 801C9378
  c->r[28]=c->r[28]+0x00000008u; // 801C937C
  c->r[30]=c->r[30]+0x00000004u; // 801C9380
  if (crb(c,0)) { IRQCHK(c); goto L_801C925C; } // 801C9384
  c->r[3]=0u+0x00000001u; // 801C9388
L_801C938C:;
  c->r[11]=c->r[1]+0x00000030u; // 801C938C
  c->lr=0x801C9394u; f_800C2E88(c); // 801C9390
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C9394
  c->lr=c->r[0]; // 801C9398
  c->r[1]=c->r[1]+0x00000030u; // 801C939C
  return; // 801C93A0
}

// fn_801C93B0
void f_801C93B0(Ctx* __restrict c) {
  trace_call(0x801C93B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C93B0
  c->r[0]=c->lr; // 801C93B4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C93B8
  c->r[11]=c->r[1]+0x00000030u; // 801C93BC
  c->lr=0x801C93C4u; f_800C2E40(c); // 801C93C0
  c->r[24]=c->r[3]|c->r[3]; // 801C93C4
  c->r[25]=0u+0x00000000u; // 801C93C8
  c->r[31]=c->r[24]|c->r[24]; // 801C93CC
  c->r[30]=c->r[24]|c->r[24]; // 801C93D0
  c->r[29]=c->r[24]|c->r[24]; // 801C93D4
L_801C93D8:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 801C93D8
  cmps(c,0,(int32_t)c->r[3],0); // 801C93DC
  if (crb(c,2)) { goto L_801C93F4; } // 801C93E0
  c->r[0]=R32(c->r[24]+0x00000020u); // 801C93E4
  c->r[4]=0u+0x00000000u; // 801C93E8
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C93EC
  c->lr=0x801C93F4u; f_80004350(c); // 801C93F0
L_801C93F4:;
  c->r[3]=R32(c->r[31]+0x00000030u); // 801C93F4
  cmps(c,0,(int32_t)c->r[3],0); // 801C93F8
  if (crb(c,2)) { goto L_801C9410; } // 801C93FC
  c->r[0]=R32(c->r[24]+0x00000048u); // 801C9400
  c->r[4]=0u+0x00000000u; // 801C9404
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C9408
  c->lr=0x801C9410u; f_80004350(c); // 801C940C
L_801C9410:;
  c->r[27]=c->r[30]|c->r[30]; // 801C9410
  c->r[28]=c->r[24]|c->r[24]; // 801C9414
  c->r[26]=0u+0x00000000u; // 801C9418
L_801C941C:;
  c->r[3]=R32(c->r[27]+0x0000004Cu); // 801C941C
  cmps(c,0,(int32_t)c->r[3],0); // 801C9420
  if (crb(c,2)) { goto L_801C9438; } // 801C9424
  c->r[0]=R32(c->r[28]+0x00000094u); // 801C9428
  c->r[4]=0u+0x00000000u; // 801C942C
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C9430
  c->lr=0x801C9438u; f_80004350(c); // 801C9434
L_801C9438:;
  c->r[26]=c->r[26]+0x00000001u; // 801C9438
  c->r[28]=c->r[28]+0x00000004u; // 801C943C
  cmpu(c,0,c->r[26],0x00000003u); // 801C9440
  c->r[27]=c->r[27]+0x00000004u; // 801C9444
  if (crb(c,0)) { IRQCHK(c); goto L_801C941C; } // 801C9448
  c->r[28]=c->r[29]|c->r[29]; // 801C944C
  c->r[27]=c->r[24]|c->r[24]; // 801C9450
  c->r[26]=0u+0x00000000u; // 801C9454
L_801C9458:;
  c->r[3]=R32(c->r[28]+0x000000ACu); // 801C9458
  cmps(c,0,(int32_t)c->r[3],0); // 801C945C
  if (crb(c,2)) { goto L_801C9474; } // 801C9460
  c->r[0]=R32(c->r[27]+0x000000DCu); // 801C9464
  c->r[4]=0u+0x00000000u; // 801C9468
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C946C
  c->lr=0x801C9474u; f_80004350(c); // 801C9470
L_801C9474:;
  c->r[26]=c->r[26]+0x00000001u; // 801C9474
  c->r[27]=c->r[27]+0x00000004u; // 801C9478
  cmpu(c,0,c->r[26],0x00000002u); // 801C947C
  c->r[28]=c->r[28]+0x00000004u; // 801C9480
  if (crb(c,0)) { IRQCHK(c); goto L_801C9458; } // 801C9484
  c->r[3]=R32(c->r[31]+0x000000E4u); // 801C9488
  cmps(c,0,(int32_t)c->r[3],0); // 801C948C
  if (crb(c,2)) { goto L_801C94A4; } // 801C9490
  c->r[0]=R32(c->r[31]+0x00000114u); // 801C9494
  c->r[4]=0u+0x00000000u; // 801C9498
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C949C
  c->lr=0x801C94A4u; f_80004350(c); // 801C94A0
L_801C94A4:;
  c->r[25]=c->r[25]+0x00000001u; // 801C94A4
  c->r[30]=c->r[30]+0x0000000Cu; // 801C94A8
  cmpu(c,0,c->r[25],0x00000004u); // 801C94AC
  c->r[29]=c->r[29]+0x00000008u; // 801C94B0
  c->r[31]=c->r[31]+0x00000004u; // 801C94B4
  if (crb(c,0)) { IRQCHK(c); goto L_801C93D8; } // 801C94B8
  c->r[11]=c->r[1]+0x00000030u; // 801C94BC
  c->lr=0x801C94C4u; f_800C2E8C(c); // 801C94C0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C94C4
  c->lr=c->r[0]; // 801C94C8
  c->r[1]=c->r[1]+0x00000030u; // 801C94CC
  return; // 801C94D0
}

// fn_801C94E0
void f_801C94E0(Ctx* __restrict c) {
  trace_call(0x801C94E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C94E0
  c->r[0]=c->lr; // 801C94E4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C94E8
  c->r[11]=c->r[1]+0x00000030u; // 801C94EC
  c->lr=0x801C94F4u; f_800C2E44(c); // 801C94F0
  c->r[25]=0u+0x00000000u; // 801C94F4
  c->r[30]=c->r[3]|c->r[3]; // 801C94F8
  c->r[31]=0u+0x00000000u; // 801C94FC
  c->r[29]=c->r[3]|c->r[3]; // 801C9500
  c->r[28]=c->r[3]|c->r[3]; // 801C9504
L_801C9508:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 801C9508
  cmps(c,0,(int32_t)c->r[3],0); // 801C950C
  if (crb(c,2)) { goto L_801C9524; } // 801C9510
  c->r[12]=R32(c->r[13]+0xFFFF8EACu); // 801C9514
  c->ctr=c->r[12]; // 801C9518
  if (true) { c->lr=0x801C9520u; dispatch(c,c->ctr); } // 801C951C
  W32(c->r[30]+0x00000000u,c->r[31]); // 801C9520
L_801C9524:;
  c->r[3]=R32(c->r[30]+0x00000030u); // 801C9524
  cmps(c,0,(int32_t)c->r[3],0); // 801C9528
  if (crb(c,2)) { goto L_801C9540; } // 801C952C
  c->r[12]=R32(c->r[13]+0xFFFF8EACu); // 801C9530
  c->ctr=c->r[12]; // 801C9534
  if (true) { c->lr=0x801C953Cu; dispatch(c,c->ctr); } // 801C9538
  W32(c->r[30]+0x00000030u,c->r[31]); // 801C953C
L_801C9540:;
  c->r[27]=c->r[29]|c->r[29]; // 801C9540
  c->r[26]=0u+0x00000000u; // 801C9544
L_801C9548:;
  c->r[3]=R32(c->r[27]+0x0000004Cu); // 801C9548
  cmps(c,0,(int32_t)c->r[3],0); // 801C954C
  if (crb(c,2)) { goto L_801C9564; } // 801C9550
  c->r[12]=R32(c->r[13]+0xFFFF8EACu); // 801C9554
  c->ctr=c->r[12]; // 801C9558
  if (true) { c->lr=0x801C9560u; dispatch(c,c->ctr); } // 801C955C
  W32(c->r[27]+0x0000004Cu,c->r[31]); // 801C9560
L_801C9564:;
  c->r[26]=c->r[26]+0x00000001u; // 801C9564
  c->r[27]=c->r[27]+0x00000004u; // 801C9568
  cmpu(c,0,c->r[26],0x00000003u); // 801C956C
  if (crb(c,0)) { IRQCHK(c); goto L_801C9548; } // 801C9570
  c->r[27]=c->r[28]|c->r[28]; // 801C9574
  c->r[26]=0u+0x00000000u; // 801C9578
L_801C957C:;
  c->r[3]=R32(c->r[27]+0x000000ACu); // 801C957C
  cmps(c,0,(int32_t)c->r[3],0); // 801C9580
  if (crb(c,2)) { goto L_801C9598; } // 801C9584
  c->r[12]=R32(c->r[13]+0xFFFF8EACu); // 801C9588
  c->ctr=c->r[12]; // 801C958C
  if (true) { c->lr=0x801C9594u; dispatch(c,c->ctr); } // 801C9590
  W32(c->r[27]+0x000000ACu,c->r[31]); // 801C9594
L_801C9598:;
  c->r[26]=c->r[26]+0x00000001u; // 801C9598
  c->r[27]=c->r[27]+0x00000004u; // 801C959C
  cmpu(c,0,c->r[26],0x00000002u); // 801C95A0
  if (crb(c,0)) { IRQCHK(c); goto L_801C957C; } // 801C95A4
  c->r[3]=R32(c->r[30]+0x000000E4u); // 801C95A8
  cmps(c,0,(int32_t)c->r[3],0); // 801C95AC
  if (crb(c,2)) { goto L_801C95C4; } // 801C95B0
  c->r[12]=R32(c->r[13]+0xFFFF8EACu); // 801C95B4
  c->ctr=c->r[12]; // 801C95B8
  if (true) { c->lr=0x801C95C0u; dispatch(c,c->ctr); } // 801C95BC
  W32(c->r[30]+0x000000E4u,c->r[31]); // 801C95C0
L_801C95C4:;
  c->r[25]=c->r[25]+0x00000001u; // 801C95C4
  c->r[29]=c->r[29]+0x0000000Cu; // 801C95C8
  cmpu(c,0,c->r[25],0x00000004u); // 801C95CC
  c->r[28]=c->r[28]+0x00000008u; // 801C95D0
  c->r[30]=c->r[30]+0x00000004u; // 801C95D4
  if (crb(c,0)) { IRQCHK(c); goto L_801C9508; } // 801C95D8
  c->r[11]=c->r[1]+0x00000030u; // 801C95DC
  c->lr=0x801C95E4u; f_800C2E90(c); // 801C95E0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801C95E4
  c->lr=c->r[0]; // 801C95E8
  c->r[1]=c->r[1]+0x00000030u; // 801C95EC
  return; // 801C95F0
}

// fn_801C9600
void f_801C9600(Ctx* __restrict c) {
  trace_call(0x801C9600u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9600
  c->r[0]=c->lr; // 801C9604
  W32(c->r[1]+0x00000064u,c->r[0]); // 801C9608
  c->r[11]=c->r[1]+0x00000030u; // 801C960C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 801C9610
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 801C9614
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 801C9618
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 801C961C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 801C9620
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 801C9624
  c->lr=0x801C962Cu; f_800C2E40(c); // 801C9628
  c->r[4]=R32(c->r[3]+0x00000140u); // 801C962C
  c->r[31]=0u+0x803A0000u; // 801C9630
  c->r[30]=c->r[3]|c->r[3]; // 801C9634
  cmpu(c,0,c->r[4],0x00000008u); // 801C9638
  c->r[31]=c->r[31]+0xFFFFDF20u; // 801C963C
  if (crb(c,0)) { goto L_801C964C; } // 801C9640
  c->r[3]=0u+0x00000000u; // 801C9644
  goto L_801C9904; // 801C9648
L_801C964C:;
  {uint32_t ea=c->r[3]+0x00000148u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C964C
  {uint32_t ea=c->r[2]+0xFFFFAF8Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 801C9650
  fcmp(c,0,c->f[4],c->f[2]); // 801C9654
  if (crb(c,0)) { goto L_801C9668; } // 801C9658
  {uint32_t ea=c->r[3]+0x00000144u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C965C
  fcmp(c,0,c->f[4],c->f[0]); // 801C9660
  if (!crb(c,1)) { goto L_801C9670; } // 801C9664
L_801C9668:;
  c->r[3]=0u+0x00000000u; // 801C9668
  goto L_801C9904; // 801C966C
L_801C9670:;
  c->r[0]=R32(c->r[3]+0x0000014Cu); // 801C9670
  cmpu(c,0,c->r[0],0x00000006u); // 801C9674
  if (crb(c,0)) { goto L_801C9684; } // 801C9678
  c->r[3]=0u+0x00000000u; // 801C967C
  goto L_801C9904; // 801C9680
L_801C9684:;
  {uint32_t ea=c->r[3]+0x00000150u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C9684
  fcmp(c,0,c->f[0],c->f[2]); // 801C9688
  if (!crb(c,0)) { goto L_801C9698; } // 801C968C
  c->r[3]=0u+0x00000000u; // 801C9690
  goto L_801C9904; // 801C9694
L_801C9698:;
  {uint32_t ea=c->r[3]+0x00000154u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C9698
  fcmp(c,0,c->f[0],c->f[2]); // 801C969C
  if (crb(c,0)) { goto L_801C96B0; } // 801C96A0
  {uint32_t ea=c->r[2]+0xFFFFAF90u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C96A4
  fcmp(c,0,c->f[0],c->f[1]); // 801C96A8
  if (!crb(c,1)) { goto L_801C96B8; } // 801C96AC
L_801C96B0:;
  c->r[3]=0u+0x00000000u; // 801C96B0
  goto L_801C9904; // 801C96B4
L_801C96B8:;
  {uint32_t ea=c->r[3]+0x00000158u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C96B8
  fcmp(c,0,c->f[0],c->f[2]); // 801C96BC
  if (crb(c,0)) { goto L_801C96CC; } // 801C96C0
  fcmp(c,0,c->f[0],c->f[1]); // 801C96C4
  if (!crb(c,1)) { goto L_801C96D4; } // 801C96C8
L_801C96CC:;
  c->r[3]=0u+0x00000000u; // 801C96CC
  goto L_801C9904; // 801C96D0
L_801C96D4:;
  {uint32_t ea=c->r[3]+0x0000015Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C96D4
  fcmp(c,0,c->f[0],c->f[2]); // 801C96D8
  if (crb(c,0)) { goto L_801C96E8; } // 801C96DC
  fcmp(c,0,c->f[0],c->f[1]); // 801C96E0
  if (!crb(c,1)) { goto L_801C96F0; } // 801C96E4
L_801C96E8:;
  c->r[3]=0u+0x00000000u; // 801C96E8
  goto L_801C9904; // 801C96EC
L_801C96F0:;
  {uint32_t ea=c->r[3]+0x00000160u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C96F0
  fcmp(c,0,c->f[3],c->f[2]); // 801C96F4
  if (crb(c,0)) { goto L_801C9704; } // 801C96F8
  fcmp(c,0,c->f[3],c->f[1]); // 801C96FC
  if (!crb(c,1)) { goto L_801C970C; } // 801C9700
L_801C9704:;
  c->r[3]=0u+0x00000000u; // 801C9704
  goto L_801C9904; // 801C9708
L_801C970C:;
  {uint32_t ea=c->r[3]+0x00000164u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C970C
  fcmp(c,0,c->f[0],c->f[2]); // 801C9710
  if (crb(c,0)) { goto L_801C9720; } // 801C9714
  fcmp(c,0,c->f[0],c->f[1]); // 801C9718
  if (!crb(c,1)) { goto L_801C9728; } // 801C971C
L_801C9720:;
  c->r[3]=0u+0x00000000u; // 801C9720
  goto L_801C9904; // 801C9724
L_801C9728:;
  {uint32_t ea=c->r[3]+0x00000170u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C9728
  fcmp(c,0,c->f[0],c->f[2]); // 801C972C
  if (crb(c,0)) { goto L_801C973C; } // 801C9730
  fcmp(c,0,c->f[0],c->f[1]); // 801C9734
  if (!crb(c,1)) { goto L_801C9744; } // 801C9738
L_801C973C:;
  c->r[3]=0u+0x00000000u; // 801C973C
  goto L_801C9904; // 801C9740
L_801C9744:;
  {uint32_t ea=c->r[3]+0x00000174u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C9744
  fcmp(c,0,c->f[0],c->f[2]); // 801C9748
  if (crb(c,0)) { goto L_801C9758; } // 801C974C
  fcmp(c,0,c->f[0],c->f[1]); // 801C9750
  if (!crb(c,1)) { goto L_801C9760; } // 801C9754
L_801C9758:;
  c->r[3]=0u+0x00000000u; // 801C9758
  goto L_801C9904; // 801C975C
L_801C9760:;
  c->r[8]=(uint32_t)((int32_t)c->r[4]*(int32_t)12); // 801C9760
  c->r[9]=c->r[31]+0x00000000u; // 801C9764
  {uint32_t ea=c->r[2]+0xFFFFAF88u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C9768
  c->r[5]=c->r[31]+0x00000060u; // 801C976C
  {uint32_t ea=c->r[2]+0xFFFFAF94u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C9770
  c->r[27]=0u+0x00000000u; // 801C9774
  c->r[7]=c->r[9]+c->r[8]; // 801C9778
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[4]); // 801C977C
  c->r[6]=R32(c->r[7]+0x00000008u); // 801C9780
  c->r[4]=c->r[5]+c->r[8]; // 801C9784
  W32(c->r[3]+0x0000001Cu,c->r[6]); // 801C9788
  c->r[0]=R32(c->r[9]+c->r[8]); // 801C978C
  c->r[0]=c->r[6]-c->r[0]; // 801C9790
  W32(c->r[3]+0x00000010u,c->r[0]); // 801C9794
  {uint32_t ea=c->r[5]+c->r[8]; c->f[0]=c->ps1[0]=RF32(ea);} // 801C9798
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 801C979C
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 801C97A0
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 801C97A4
  c->r[0]=R32(c->r[7]+0x00000004u); // 801C97A8
  c->r[0]=c->r[6]-c->r[0]; // 801C97AC
  W32(c->r[3]+0x00000014u,c->r[0]); // 801C97B0
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C97B4
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 801C97B8
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 801C97BC
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 801C97C0
  c->r[0]=R32(c->r[7]+0x00000008u); // 801C97C4
  c->r[0]=c->r[6]-c->r[0]; // 801C97C8
  W32(c->r[3]+0x00000018u,c->r[0]); // 801C97CC
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C97D0
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 801C97D4
  W32(c->r[3]+0x00000040u,c->r[27]); // 801C97D8
  c->f[0]=c->ps1[0]=S(c->f[2]*c->f[0]); // 801C97DC
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 801C97E0
  c->lr=0x801C97E8u; f_800C2D24(c); // 801C97E4
  W32(c->r[30]+0x00000044u,c->r[3]); // 801C97E8
  c->r[26]=c->r[30]|c->r[30]; // 801C97EC
  {uint32_t ea=c->r[2]+0xFFFFAFC0u; c->f[29]=RF64(ea);} // 801C97F0
  c->r[28]=c->r[31]+0x000000C0u; // 801C97F4
  {uint32_t ea=c->r[2]+0xFFFFAFA8u; c->f[30]=c->ps1[30]=RF32(ea);} // 801C97F8
  c->r[24]=0u+0x00000000u; // 801C97FC
  {uint32_t ea=c->r[2]+0xFFFFAF88u; c->f[31]=c->ps1[31]=RF32(ea);} // 801C9800
  c->r[25]=0u+0x00000000u; // 801C9804
  c->r[29]=0u+0x43300000u; // 801C9808
L_801C980C:;
  W32(c->r[26]+0x0000007Cu,c->r[27]); // 801C980C
  {uint32_t ea=c->r[2]+0xFFFFAFB0u; c->f[1]=RF64(ea);} // 801C9810
  c->r[0]=R32(c->r[30]+0x0000014Cu); // 801C9814
  W32(c->r[1]+0x00000008u,c->r[29]); // 801C9818
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 801C981C
  c->r[0]=c->r[25]+c->r[0]; // 801C9820
  c->r[0]=R32(c->r[28]+c->r[0]); // 801C9824
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801C9828
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801C982C
  W32(c->r[26]+0x00000088u,c->r[0]); // 801C9830
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[29]); // 801C9834
  {uint32_t ea=c->r[30]+0x00000150u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C9838
  c->f[2]=c->ps1[2]=S(c->f[30]*c->f[2]); // 801C983C
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 801C9840
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[0]); // 801C9844
  c->lr=0x801C984Cu; f_800D29C4(c); // 801C9848
  c->f[0]=c->ps1[0]=S(c->f[1]); // 801C984C
  c->r[24]=c->r[24]+0x00000001u; // 801C9850
  cmpu(c,0,c->r[24],0x00000003u); // 801C9854
  c->r[25]=c->r[25]+0x00000004u; // 801C9858
  {uint32_t ea=c->r[26]+0x000000A0u; WF32(ea,c->f[0]);} // 801C985C
  c->r[26]=c->r[26]+0x00000004u; // 801C9860
  if (crb(c,0)) { IRQCHK(c); goto L_801C980C; } // 801C9864
  c->r[0]=R32(c->r[30]+0x0000014Cu); // 801C9868
  c->r[4]=0u+0x00000000u; // 801C986C
  W32(c->r[30]+0x000000CCu,c->r[4]); // 801C9870
  c->r[3]=c->r[31]+0x000000C0u; // 801C9874
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)36); // 801C9878
  {uint32_t ea=c->r[2]+0xFFFFAF90u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C987C
  {uint32_t ea=c->r[30]+0x00000158u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C9880
  {uint32_t ea=c->r[2]+0xFFFFAFB8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C9884
  c->r[3]=c->r[3]+c->r[0]; // 801C9888
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 801C988C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801C9890
  W32(c->r[30]+0x000000D4u,c->r[0]); // 801C9894
  fcmp(c,0,c->f[1],c->f[0]); // 801C9898
  {uint32_t ea=c->r[30]+0x00000154u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C989C
  W32(c->r[30]+0x000000D0u,c->r[4]); // 801C98A0
  c->r[0]=R32(c->r[3]+0x00000010u); // 801C98A4
  W32(c->r[30]+0x000000D8u,c->r[0]); // 801C98A8
  W32(c->r[30]+0x000000F4u,c->r[4]); // 801C98AC
  c->r[0]=R32(c->r[3]+0x00000014u); // 801C98B0
  W32(c->r[30]+0x00000104u,c->r[0]); // 801C98B4
  W32(c->r[30]+0x000000F8u,c->r[4]); // 801C98B8
  c->r[0]=R32(c->r[3]+0x00000018u); // 801C98BC
  W32(c->r[30]+0x00000108u,c->r[0]); // 801C98C0
  W32(c->r[30]+0x000000FCu,c->r[4]); // 801C98C4
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 801C98C8
  W32(c->r[30]+0x0000010Cu,c->r[0]); // 801C98CC
  W32(c->r[30]+0x00000100u,c->r[4]); // 801C98D0
  c->r[0]=R32(c->r[3]+0x00000020u); // 801C98D4
  W32(c->r[30]+0x00000110u,c->r[0]); // 801C98D8
  {uint32_t ea=c->r[30]+0x00000124u; WF32(ea,c->f[2]);} // 801C98DC
  {uint32_t ea=c->r[30]+0x00000138u; WF32(ea,c->f[1]);} // 801C98E0
  if (!crb(c,1)) { goto L_801C98EC; } // 801C98E4
  {uint32_t ea=c->r[30]+0x00000138u; WF32(ea,c->f[0]);} // 801C98E8
L_801C98EC:;
  {uint32_t ea=c->r[2]+0xFFFFAF8Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C98EC
  c->r[3]=0u+0x00000001u; // 801C98F0
  {uint32_t ea=c->r[30]+0x00000128u; WF32(ea,c->f[0]);} // 801C98F4
  {uint32_t ea=c->r[30]+0x0000012Cu; WF32(ea,c->f[0]);} // 801C98F8
  {uint32_t ea=c->r[30]+0x00000130u; WF32(ea,c->f[0]);} // 801C98FC
  {uint32_t ea=c->r[30]+0x00000134u; WF32(ea,c->f[0]);} // 801C9900
L_801C9904:;
  c->r[11]=c->r[1]+0x00000030u; // 801C9904
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 801C9908
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 801C990C
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 801C9910
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 801C9914
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,29,ea,0,0);} // 801C9918
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 801C991C
  c->lr=0x801C9924u; f_800C2E8C(c); // 801C9920
  c->r[0]=R32(c->r[1]+0x00000064u); // 801C9924
  c->lr=c->r[0]; // 801C9928
  c->r[1]=c->r[1]+0x00000060u; // 801C992C
  return; // 801C9930
}

// fn_801C9940
void f_801C9940(Ctx* __restrict c) {
  trace_call(0x801C9940u);
  {uint32_t ea=c->r[3]+0x000000F8u; c->f[6]=c->ps1[6]=RF32(ea);} // 801C9940
  c->r[0]=0u+0x00000000u; // 801C9944
  {uint32_t ea=c->r[2]+0xFFFFAFC8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C9948
  c->r[4]=0u+0x00000005u; // 801C994C
  {uint32_t ea=c->r[3]+0x000000F0u; c->f[5]=c->ps1[5]=RF32(ea);} // 801C9950
  {uint32_t ea=c->r[3]+0x000000E8u; c->f[4]=c->ps1[4]=RF32(ea);} // 801C9954
  {uint32_t ea=c->r[3]+0x000000F4u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C9958
  {uint32_t ea=c->r[2]+0xFFFFAFCCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801C995C
  {uint32_t ea=c->r[3]+0x000000ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C9960
  W32(c->r[3]+0x000000B4u,c->r[4]); // 801C9964
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[6]);} // 801C9968
  {uint32_t ea=c->r[3]+0x000000BCu; WF32(ea,c->f[6]);} // 801C996C
  W32(c->r[3]+0x000000C0u,c->r[0]); // 801C9970
  {uint32_t ea=c->r[3]+0x000000C4u; WF32(ea,c->f[5]);} // 801C9974
  {uint32_t ea=c->r[3]+0x000000C8u; WF32(ea,c->f[4]);} // 801C9978
  {uint32_t ea=c->r[3]+0x000000CCu; WF32(ea,c->f[3]);} // 801C997C
  {uint32_t ea=c->r[3]+0x000000D0u; WF32(ea,c->f[2]);} // 801C9980
  {uint32_t ea=c->r[3]+0x000000D4u; WF32(ea,c->f[1]);} // 801C9984
  W32(c->r[3]+0x000000D8u,c->r[0]); // 801C9988
  W32(c->r[3]+0x000000DCu,c->r[0]); // 801C998C
  {uint32_t ea=c->r[3]+0x000000E0u; WF32(ea,c->f[0]);} // 801C9990
  {uint32_t ea=c->r[3]+0x000000E4u; WF32(ea,c->f[2]);} // 801C9994
  f_801C99E0(c); return; // 801C9998
}

// fn_801C99A0
void f_801C99A0(Ctx* __restrict c) {
  trace_call(0x801C99A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C99A0
  c->r[0]=c->lr; // 801C99A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C99A8
  c->lr=0x801C99B0u; f_801C9B60(c); // 801C99AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C99B0
  c->r[3]=0u+0x00000001u; // 801C99B4
  c->lr=c->r[0]; // 801C99B8
  c->r[1]=c->r[1]+0x00000010u; // 801C99BC
  return; // 801C99C0
}

// fn_801C99D0
void f_801C99D0(Ctx* __restrict c) {
  trace_call(0x801C99D0u);
  f_801C9BC0(c); return; // 801C99D0
}

// fn_801C99E0
void f_801C99E0(Ctx* __restrict c) {
  trace_call(0x801C99E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C99E0
  c->r[0]=c->lr; // 801C99E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801C99E8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801C99EC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801C99F0
  c->r[30]=c->r[3]|c->r[3]; // 801C99F4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801C99F8
  c->lr=0x801C9A00u; f_802494C0(c); // 801C99FC
  {uint32_t ea=c->r[30]+0x000000B8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C9A00
  c->r[0]=0u+0x00000001u; // 801C9A04
  {uint32_t ea=c->r[2]+0xFFFFAFD4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C9A08
  c->r[31]=c->r[3]|c->r[3]; // 801C9A0C
  W32(c->r[30]+0x000000B0u,c->r[0]); // 801C9A10
  fcmp(c,0,c->f[1],c->f[0]); // 801C9A14
  if (!crb(c,0)) { goto L_801C9A50; } // 801C9A18
  c->lr=0x801C9A20u; f_802494C0(c); // 801C9A1C
  c->r[0]=R32(c->r[30]+0x000000B0u); // 801C9A20
  c->r[29]=c->r[3]|c->r[3]; // 801C9A24
  c->r[3]=c->r[30]|c->r[30]; // 801C9A28
  c->r[0]=c->r[0]|0x00000001u; // 801C9A2C
  W32(c->r[30]+0x000000B0u,c->r[0]); // 801C9A30
  c->lr=0x801C9A38u; f_801CA180(c); // 801C9A34
  c->r[3]=c->r[29]|c->r[29]; // 801C9A38
  c->lr=0x801C9A40u; f_80249500(c); // 801C9A3C
  c->r[3]=c->r[31]|c->r[31]; // 801C9A40
  c->lr=0x801C9A48u; f_80249500(c); // 801C9A44
  c->r[3]=0u+0x00000000u; // 801C9A48
  goto L_801C9B40; // 801C9A4C
L_801C9A50:;
  {uint32_t ea=c->r[2]+0xFFFFAFD0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801C9A50
  c->r[3]=0u+0x803A0000u; // 801C9A54
  c->r[3]=c->r[3]+0xFFFFE0E0u; // 801C9A58
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 801C9A5C
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 801C9A60
  W32(c->r[30]+0x00000014u,c->r[0]); // 801C9A64
  c->lr=0x801C9A6Cu; f_800C2D24(c); // 801C9A68
  W32(c->r[30]+0x00000030u,c->r[3]); // 801C9A6C
  c->r[4]=0u+0x803A0000u; // 801C9A70
  c->r[4]=c->r[4]+0xFFFFE100u; // 801C9A74
  c->r[3]=c->r[30]|c->r[30]; // 801C9A78
  c->r[0]=R32(c->r[4]+0x00000060u); // 801C9A7C
  W32(c->r[30]+0x0000005Cu,c->r[0]); // 801C9A80
  c->r[0]=R32(c->r[4]+0x00000064u); // 801C9A84
  W32(c->r[30]+0x00000060u,c->r[0]); // 801C9A88
  c->r[0]=R32(c->r[4]+0x00000068u); // 801C9A8C
  W32(c->r[30]+0x00000094u,c->r[0]); // 801C9A90
  c->r[0]=R32(c->r[4]+0x0000006Cu); // 801C9A94
  W32(c->r[30]+0x00000098u,c->r[0]); // 801C9A98
  c->lr=0x801C9AA0u; f_801C9F30(c); // 801C9A9C
  cmps(c,0,(int32_t)c->r[3],0); // 801C9AA0
  if (!crb(c,2)) { goto L_801C9ADC; } // 801C9AA4
  c->lr=0x801C9AACu; f_802494C0(c); // 801C9AA8
  c->r[0]=R32(c->r[30]+0x000000B0u); // 801C9AAC
  c->r[29]=c->r[3]|c->r[3]; // 801C9AB0
  c->r[3]=c->r[30]|c->r[30]; // 801C9AB4
  c->r[0]=c->r[0]|0x00000001u; // 801C9AB8
  W32(c->r[30]+0x000000B0u,c->r[0]); // 801C9ABC
  c->lr=0x801C9AC4u; f_801CA180(c); // 801C9AC0
  c->r[3]=c->r[29]|c->r[29]; // 801C9AC4
  c->lr=0x801C9ACCu; f_80249500(c); // 801C9AC8
  c->r[3]=c->r[31]|c->r[31]; // 801C9ACC
  c->lr=0x801C9AD4u; f_80249500(c); // 801C9AD0
  c->r[3]=0u+0x00000000u; // 801C9AD4
  goto L_801C9B40; // 801C9AD8
L_801C9ADC:;
  c->r[3]=c->r[30]|c->r[30]; // 801C9ADC
  c->lr=0x801C9AE4u; f_801CA080(c); // 801C9AE0
  c->r[3]=c->r[30]|c->r[30]; // 801C9AE4
  c->lr=0x801C9AECu; f_801CA270(c); // 801C9AE8
  cmps(c,0,(int32_t)c->r[3],0); // 801C9AEC
  if (!crb(c,2)) { goto L_801C9B28; } // 801C9AF0
  c->lr=0x801C9AF8u; f_802494C0(c); // 801C9AF4
  c->r[0]=R32(c->r[30]+0x000000B0u); // 801C9AF8
  c->r[29]=c->r[3]|c->r[3]; // 801C9AFC
  c->r[3]=c->r[30]|c->r[30]; // 801C9B00
  c->r[0]=c->r[0]|0x00000001u; // 801C9B04
  W32(c->r[30]+0x000000B0u,c->r[0]); // 801C9B08
  c->lr=0x801C9B10u; f_801CA180(c); // 801C9B0C
  c->r[3]=c->r[29]|c->r[29]; // 801C9B10
  c->lr=0x801C9B18u; f_80249500(c); // 801C9B14
  c->r[3]=c->r[31]|c->r[31]; // 801C9B18
  c->lr=0x801C9B20u; f_80249500(c); // 801C9B1C
  c->r[3]=0u+0x00000000u; // 801C9B20
  goto L_801C9B40; // 801C9B24
L_801C9B28:;
  c->r[0]=R32(c->r[30]+0x000000B0u); // 801C9B28
  c->r[3]=c->r[31]|c->r[31]; // 801C9B2C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFEu; // 801C9B30
  W32(c->r[30]+0x000000B0u,c->r[0]); // 801C9B34
  c->lr=0x801C9B3Cu; f_80249500(c); // 801C9B38
  c->r[3]=0u+0x00000001u; // 801C9B3C
L_801C9B40:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801C9B40
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801C9B44
  c->r[30]=R32(c->r[1]+0x00000018u); // 801C9B48
  c->r[29]=R32(c->r[1]+0x00000014u); // 801C9B4C
  c->lr=c->r[0]; // 801C9B50
  c->r[1]=c->r[1]+0x00000020u; // 801C9B54
  return; // 801C9B58
}

// fn_801C9B60
void f_801C9B60(Ctx* __restrict c) {
  trace_call(0x801C9B60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9B60
  c->r[0]=c->lr; // 801C9B64
  W32(c->r[1]+0x00000014u,c->r[0]); // 801C9B68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801C9B6C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801C9B70
  c->r[30]=c->r[3]|c->r[3]; // 801C9B74
  c->lr=0x801C9B7Cu; f_802494C0(c); // 801C9B78
  c->r[0]=R32(c->r[30]+0x000000B0u); // 801C9B7C
  c->r[31]=c->r[3]|c->r[3]; // 801C9B80
  c->r[3]=c->r[30]|c->r[30]; // 801C9B84
  c->r[0]=c->r[0]|0x00000001u; // 801C9B88
  W32(c->r[30]+0x000000B0u,c->r[0]); // 801C9B8C
  c->lr=0x801C9B94u; f_801CA180(c); // 801C9B90
  c->r[3]=c->r[31]|c->r[31]; // 801C9B94
  c->lr=0x801C9B9Cu; f_80249500(c); // 801C9B98
  c->r[0]=R32(c->r[1]+0x00000014u); // 801C9B9C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801C9BA0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801C9BA4
  c->lr=c->r[0]; // 801C9BA8
  c->r[1]=c->r[1]+0x00000010u; // 801C9BAC
  return; // 801C9BB0
}

// fn_801C9BC0
void f_801C9BC0(Ctx* __restrict c) {
  trace_call(0x801C9BC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9BC0
  c->r[0]=c->lr; // 801C9BC4
  W32(c->r[1]+0x00000064u,c->r[0]); // 801C9BC8
  c->r[11]=c->r[1]+0x00000060u; // 801C9BCC
  c->lr=0x801C9BD4u; f_800C2E40(c); // 801C9BD0
  c->r[0]=R32(c->r[4]+0x000000B0u); // 801C9BD4
  cmps(c,0,(int32_t)c->r[0],0); // 801C9BD8
  if (crb(c,2)) { goto L_801C9BEC; } // 801C9BDC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 801C9BE0
  W32(c->r[4]+0x000000B0u,c->r[0]); // 801C9BE4
  goto L_801C9F14; // 801C9BE8
L_801C9BEC:;
  c->r[7]=R32(c->r[4]+0x000000D8u); // 801C9BEC
  c->r[6]=R32(c->r[3]+0x00000000u); // 801C9BF0
  c->r[5]=R32(c->r[3]+0x00000004u); // 801C9BF4
  cmps(c,0,(int32_t)c->r[7],0); // 801C9BF8
  c->r[0]=R32(c->r[3]+0x00000008u); // 801C9BFC
  W32(c->r[1]+0x00000020u,c->r[6]); // 801C9C00
  W32(c->r[1]+0x00000024u,c->r[5]); // 801C9C04
  W32(c->r[1]+0x00000028u,c->r[0]); // 801C9C08
  if (crb(c,2)) { goto L_801C9C28; } // 801C9C0C
  c->r[5]=R32(c->r[7]+0x00000000u); // 801C9C10
  c->r[3]=R32(c->r[7]+0x00000004u); // 801C9C14
  c->r[0]=R32(c->r[7]+0x00000008u); // 801C9C18
  W32(c->r[1]+0x00000014u,c->r[5]); // 801C9C1C
  W32(c->r[1]+0x00000018u,c->r[3]); // 801C9C20
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801C9C24
L_801C9C28:;
  c->r[6]=R32(c->r[4]+0x000000DCu); // 801C9C28
  cmps(c,0,(int32_t)c->r[6],0); // 801C9C2C
  if (crb(c,2)) { goto L_801C9C4C; } // 801C9C30
  c->r[5]=R32(c->r[6]+0x00000000u); // 801C9C34
  c->r[3]=R32(c->r[6]+0x00000004u); // 801C9C38
  c->r[0]=R32(c->r[6]+0x00000008u); // 801C9C3C
  W32(c->r[1]+0x00000008u,c->r[5]); // 801C9C40
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801C9C44
  W32(c->r[1]+0x00000010u,c->r[0]); // 801C9C48
L_801C9C4C:;
  {uint32_t ea=c->r[2]+0xFFFFAFD8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C9C4C
  c->r[28]=0u+0x00000000u; // 801C9C50
  {uint32_t ea=c->r[4]+0x000000ACu; c->f[0]=c->ps1[0]=RF32(ea);} // 801C9C54
  c->r[3]=0u+0x43300000u; // 801C9C58
  {uint32_t ea=c->r[2]+0xFFFFAFDCu; c->f[3]=c->ps1[3]=RF32(ea);} // 801C9C5C
  c->r[0]=0u+0x00000000u; // 801C9C60
  {uint32_t ea=c->r[4]+0x000000D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C9C64
  c->f[5]=c->ps1[5]=S(c->f[2]-c->f[0]); // 801C9C68
  {uint32_t ea=c->r[4]+0x000000D4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C9C6C
  c->r[27]=0u+0x00000003u; // 801C9C70
  c->f[6]=c->ps1[6]=S(c->f[3]*c->f[1]); // 801C9C74
  {uint32_t ea=c->r[4]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 801C9C78
  c->f[7]=c->ps1[7]=S(c->f[3]*c->f[2]); // 801C9C7C
  {uint32_t ea=c->r[4]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 801C9C80
  {uint32_t ea=c->r[4]+0x00000068u; c->f[3]=c->ps1[3]=RF32(ea);} // 801C9C84
  {uint32_t ea=c->r[4]+0x0000009Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801C9C88
  {uint32_t ea=c->r[2]+0xFFFFAFE0u; c->f[11]=RF64(ea);} // 801C9C8C
L_801C9C90:;
  c->r[10]=R32(c->r[4]+0x0000000Cu); // 801C9C90
  c->r[7]=c->r[4]|c->r[4]; // 801C9C94
  c->r[11]=R32(c->r[4]+0x00000028u); // 801C9C98
  c->r[8]=c->r[4]|c->r[4]; // 801C9C9C
  c->r[12]=R32(c->r[4]+0x0000004Cu); // 801C9CA0
  c->r[5]=c->r[1]+0x00000014u; // 801C9CA4
  c->r[26]=R32(c->r[4]+0x00000050u); // 801C9CA8
  c->r[6]=c->r[1]+0x00000020u; // 801C9CAC
  c->r[25]=R32(c->r[4]+0x00000084u); // 801C9CB0
  c->r[9]=c->r[1]+0x00000008u; // 801C9CB4
  c->r[24]=R32(c->r[4]+0x00000088u); // 801C9CB8
  c->r[10]=rotl(c->r[10],2)&0xFFFFFFFCu; // 801C9CBC
  c->r[11]=rotl(c->r[11],2)&0xFFFFFFFCu; // 801C9CC0
  c->r[12]=rotl(c->r[12],2)&0xFFFFFFFCu; // 801C9CC4
  c->r[31]=rotl(c->r[26],2)&0xFFFFFFFCu; // 801C9CC8
  c->r[30]=rotl(c->r[25],2)&0xFFFFFFFCu; // 801C9CCC
  c->r[29]=rotl(c->r[24],2)&0xFFFFFFFCu; // 801C9CD0
  c->ctr=c->r[27]; // 801C9CD4
L_801C9CD8:;
  c->r[24]=R32(c->r[4]+0x000000D8u); // 801C9CD8
  cmps(c,0,(int32_t)c->r[24],0); // 801C9CDC
  if (crb(c,2)) { goto L_801C9D18; } // 801C9CE0
  c->r[25]=R32(c->r[5]+0x00000000u); // 801C9CE4
  c->r[26]=R32(c->r[6]+0x00000000u); // 801C9CE8
  c->r[24]=R32(c->r[25]+0x00000000u); // 801C9CEC
  c->r[25]=c->r[25]+0x00000004u; // 801C9CF0
  c->r[26]=R32(c->r[26]+0x00000000u); // 801C9CF4
  W32(c->r[1]+0x00000030u,c->r[3]); // 801C9CF8
  c->r[24]=c->r[26]+c->r[24]; // 801C9CFC
  c->r[24]=c->r[24]^0x80000000u; // 801C9D00
  W32(c->r[1]+0x00000034u,c->r[24]); // 801C9D04
  {uint32_t ea=c->r[1]+0x00000030u; c->f[8]=RF64(ea);} // 801C9D08
  W32(c->r[5]+0x00000000u,c->r[25]); // 801C9D0C
  c->f[9]=c->ps1[9]=S(c->f[8]-c->f[11]); // 801C9D10
  goto L_801C9D34; // 801C9D14
L_801C9D18:;
  c->r[24]=R32(c->r[6]+0x00000000u); // 801C9D18
  W32(c->r[1]+0x00000038u,c->r[3]); // 801C9D1C
  c->r[24]=R32(c->r[24]+0x00000000u); // 801C9D20
  c->r[24]=c->r[24]^0x80000000u; // 801C9D24
  W32(c->r[1]+0x0000003Cu,c->r[24]); // 801C9D28
  {uint32_t ea=c->r[1]+0x00000038u; c->f[8]=RF64(ea);} // 801C9D2C
  c->f[9]=c->ps1[9]=S(c->f[8]-c->f[11]); // 801C9D30
L_801C9D34:;
  c->r[24]=R32(c->r[7]+0x00000000u); // 801C9D34
  {uint32_t ea=c->r[10]+c->r[24]; c->f[10]=c->ps1[10]=RF32(ea);} // 801C9D38
  c->f[8]=c->ps1[8]=S(c->f[10]*c->f[1]); // 801C9D3C
  c->f[8]=c->ps1[8]=S(c->f[9]+c->f[8]); // 801C9D40
  {uint32_t ea=c->r[10]+c->r[24]; WF32(ea,c->f[8]);} // 801C9D44
  c->r[24]=R32(c->r[4]+0x0000002Cu); // 801C9D48
  cmps(c,0,(int32_t)c->r[24],0); // 801C9D4C
  if (crb(c,2)) { goto L_801C9D64; } // 801C9D50
  c->r[24]=R32(c->r[7]+0x0000001Cu); // 801C9D54
  {uint32_t ea=c->r[11]+c->r[24]; c->f[12]=c->ps1[12]=RF32(ea);} // 801C9D58
  {uint32_t ea=c->r[11]+c->r[24]; WF32(ea,c->f[9]);} // 801C9D5C
  goto L_801C9D68; // 801C9D60
L_801C9D64:;
  c->f[12]=c->f[9]; // 801C9D64
L_801C9D68:;
  c->r[24]=R32(c->r[8]+0x00000034u); // 801C9D68
  c->f[10]=c->ps1[10]=S(c->f[10]*c->f[6]); // 801C9D6C
  c->r[26]=R32(c->r[6]+0x00000000u); // 801C9D70
  {uint32_t ea=c->r[12]+c->r[24]; c->f[9]=c->ps1[9]=RF32(ea);} // 801C9D74
  c->r[25]=c->r[26]+0x00000004u; // 801C9D78
  W32(c->r[6]+0x00000000u,c->r[25]); // 801C9D7C
  c->f[8]=c->ps1[8]=S(c->f[9]*c->f[2]); // 801C9D80
  c->f[8]=c->ps1[8]=S(c->f[12]+c->f[8]); // 801C9D84
  {uint32_t ea=c->r[12]+c->r[24]; WF32(ea,c->f[8]);} // 801C9D88
  c->r[25]=R32(c->r[8]+0x00000038u); // 801C9D8C
  {uint32_t ea=c->r[31]+c->r[25]; c->f[13]=c->ps1[13]=RF32(ea);} // 801C9D90
  c->f[8]=c->ps1[8]=S(c->f[13]*c->f[3]); // 801C9D94
  c->f[9]=c->ps1[9]=S(c->f[9]+c->f[13]); // 801C9D98
  c->f[8]=c->ps1[8]=S(c->f[12]+c->f[8]); // 801C9D9C
  {uint32_t ea=c->r[31]+c->r[25]; WF32(ea,c->f[8]);} // 801C9DA0
  c->r[24]=R32(c->r[8]+0x0000006Cu); // 801C9DA4
  {uint32_t ea=c->r[30]+c->r[24]; c->f[12]=c->ps1[12]=RF32(ea);} // 801C9DA8
  c->f[8]=c->ps1[8]=S(c->f[12]*c->f[4]); // 801C9DAC
  c->f[8]=c->ps1[8]=S(c->f[9]+c->f[8]); // 801C9DB0
  {uint32_t ea=c->r[30]+c->r[24]; WF32(ea,c->f[8]);} // 801C9DB4
  c->f[9]=c->ps1[9]=S(c->f[8]*c->f[4]); // 801C9DB8
  {uint32_t ea=c->r[7]+0x000000A0u; c->f[8]=c->ps1[8]=RF32(ea);} // 801C9DBC
  c->f[9]=c->ps1[9]=S(c->f[12]-c->f[9]); // 801C9DC0
  c->f[8]=c->ps1[8]=S(c->f[0]*c->f[8]); // 801C9DC4
  c->f[9]=c->ps1[9]=S(c->f[5]*c->f[9]); // 801C9DC8
  c->f[9]=c->ps1[9]=S(c->f[9]+c->f[8]); // 801C9DCC
  {uint32_t ea=c->r[7]+0x000000A0u; WF32(ea,c->f[9]);} // 801C9DD0
  c->r[25]=R32(c->r[8]+0x00000070u); // 801C9DD4
  {uint32_t ea=c->r[29]+c->r[25]; c->f[12]=c->ps1[12]=RF32(ea);} // 801C9DD8
  c->f[8]=c->ps1[8]=S(c->f[12]*c->f[4]); // 801C9DDC
  c->f[8]=c->ps1[8]=S(c->f[9]+c->f[8]); // 801C9DE0
  {uint32_t ea=c->r[29]+c->r[25]; WF32(ea,c->f[8]);} // 801C9DE4
  c->f[9]=c->ps1[9]=S(c->f[8]*c->f[4]); // 801C9DE8
  {uint32_t ea=c->r[4]+0x000000E0u; c->f[8]=c->ps1[8]=RF32(ea);} // 801C9DEC
  c->f[9]=c->ps1[9]=S(c->f[12]-c->f[9]); // 801C9DF0
  c->f[9]=c->ps1[9]=S(c->f[9]*c->f[7]); // 801C9DF4
  c->f[9]=c->ps1[9]=S(c->f[10]+c->f[9]); // 801C9DF8
  c->f[8]=c->ps1[8]=S(c->f[9]*c->f[8]); // 801C9DFC
  c->f[8]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[8],true)); // 801C9E00
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[8]);} // 801C9E04
  c->r[25]=R32(c->r[1]+0x0000003Cu); // 801C9E08
  W32(c->r[26]+0x00000000u,c->r[25]); // 801C9E0C
  c->r[25]=R32(c->r[4]+0x000000DCu); // 801C9E10
  cmps(c,0,(int32_t)c->r[25],0); // 801C9E14
  if (crb(c,2)) { goto L_801C9E40; } // 801C9E18
  {uint32_t ea=c->r[4]+0x000000E4u; c->f[8]=c->ps1[8]=RF32(ea);} // 801C9E1C
  c->r[25]=R32(c->r[9]+0x00000000u); // 801C9E20
  c->f[8]=c->ps1[8]=S(c->f[9]*c->f[8]); // 801C9E24
  c->r[26]=c->r[25]+0x00000004u; // 801C9E28
  W32(c->r[9]+0x00000000u,c->r[26]); // 801C9E2C
  c->f[8]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[8],true)); // 801C9E30
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[8]);} // 801C9E34
  c->r[26]=R32(c->r[1]+0x0000003Cu); // 801C9E38
  W32(c->r[25]+0x00000000u,c->r[26]); // 801C9E3C
L_801C9E40:;
  c->r[5]=c->r[5]+0x00000004u; // 801C9E40
  c->r[6]=c->r[6]+0x00000004u; // 801C9E44
  c->r[7]=c->r[7]+0x00000004u; // 801C9E48
  c->r[8]=c->r[8]+0x00000008u; // 801C9E4C
  c->r[9]=c->r[9]+0x00000004u; // 801C9E50
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801C9CD8; } // 801C9E54
  c->r[6]=R32(c->r[4]+0x0000000Cu); // 801C9E58
  c->r[5]=R32(c->r[4]+0x00000010u); // 801C9E5C
  c->r[6]=c->r[6]+0x00000001u; // 801C9E60
  W32(c->r[4]+0x0000000Cu,c->r[6]); // 801C9E64
  cmpu(c,0,c->r[6],c->r[5]); // 801C9E68
  if (crb(c,0)) { goto L_801C9E74; } // 801C9E6C
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801C9E70
L_801C9E74:;
  c->r[6]=R32(c->r[4]+0x0000002Cu); // 801C9E74
  cmps(c,0,(int32_t)c->r[6],0); // 801C9E78
  if (crb(c,2)) { goto L_801C9E98; } // 801C9E7C
  c->r[5]=R32(c->r[4]+0x00000028u); // 801C9E80
  c->r[5]=c->r[5]+0x00000001u; // 801C9E84
  W32(c->r[4]+0x00000028u,c->r[5]); // 801C9E88
  cmpu(c,0,c->r[5],c->r[6]); // 801C9E8C
  if (crb(c,0)) { goto L_801C9E98; } // 801C9E90
  W32(c->r[4]+0x00000028u,c->r[0]); // 801C9E94
L_801C9E98:;
  c->r[6]=R32(c->r[4]+0x0000004Cu); // 801C9E98
  c->r[5]=R32(c->r[4]+0x00000054u); // 801C9E9C
  c->r[6]=c->r[6]+0x00000001u; // 801C9EA0
  W32(c->r[4]+0x0000004Cu,c->r[6]); // 801C9EA4
  cmpu(c,0,c->r[6],c->r[5]); // 801C9EA8
  if (crb(c,0)) { goto L_801C9EB4; } // 801C9EAC
  W32(c->r[4]+0x0000004Cu,c->r[0]); // 801C9EB0
L_801C9EB4:;
  c->r[6]=R32(c->r[4]+0x00000050u); // 801C9EB4
  c->r[5]=R32(c->r[4]+0x00000058u); // 801C9EB8
  c->r[6]=c->r[6]+0x00000001u; // 801C9EBC
  W32(c->r[4]+0x00000050u,c->r[6]); // 801C9EC0
  cmpu(c,0,c->r[6],c->r[5]); // 801C9EC4
  if (crb(c,0)) { goto L_801C9ED0; } // 801C9EC8
  W32(c->r[4]+0x00000050u,c->r[0]); // 801C9ECC
L_801C9ED0:;
  c->r[6]=R32(c->r[4]+0x00000084u); // 801C9ED0
  c->r[5]=R32(c->r[4]+0x0000008Cu); // 801C9ED4
  c->r[6]=c->r[6]+0x00000001u; // 801C9ED8
  W32(c->r[4]+0x00000084u,c->r[6]); // 801C9EDC
  cmpu(c,0,c->r[6],c->r[5]); // 801C9EE0
  if (crb(c,0)) { goto L_801C9EEC; } // 801C9EE4
  W32(c->r[4]+0x00000084u,c->r[0]); // 801C9EE8
L_801C9EEC:;
  c->r[6]=R32(c->r[4]+0x00000088u); // 801C9EEC
  c->r[5]=R32(c->r[4]+0x00000090u); // 801C9EF0
  c->r[6]=c->r[6]+0x00000001u; // 801C9EF4
  W32(c->r[4]+0x00000088u,c->r[6]); // 801C9EF8
  cmpu(c,0,c->r[6],c->r[5]); // 801C9EFC
  if (crb(c,0)) { goto L_801C9F08; } // 801C9F00
  W32(c->r[4]+0x00000088u,c->r[0]); // 801C9F04
L_801C9F08:;
  c->r[28]=c->r[28]+0x00000001u; // 801C9F08
  cmpu(c,0,c->r[28],0x00000060u); // 801C9F0C
  if (crb(c,0)) { IRQCHK(c); goto L_801C9C90; } // 801C9F10
L_801C9F14:;
  c->r[11]=c->r[1]+0x00000060u; // 801C9F14
  c->lr=0x801C9F1Cu; f_800C2E8C(c); // 801C9F18
  c->r[0]=R32(c->r[1]+0x00000064u); // 801C9F1C
  c->lr=c->r[0]; // 801C9F20
  c->r[1]=c->r[1]+0x00000060u; // 801C9F24
  return; // 801C9F28
}

// fn_801C9F30
void f_801C9F30(Ctx* __restrict c) {
  trace_call(0x801C9F30u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801C9F30
  c->r[0]=c->lr; // 801C9F34
  W32(c->r[1]+0x00000034u,c->r[0]); // 801C9F38
  c->r[11]=c->r[1]+0x00000030u; // 801C9F3C
  c->lr=0x801C9F44u; f_800C2E40(c); // 801C9F40
  c->r[24]=c->r[3]|c->r[3]; // 801C9F44
  c->r[25]=0u+0x00000000u; // 801C9F48
  c->r[30]=c->r[24]|c->r[24]; // 801C9F4C
  c->r[31]=0u+0x00000000u; // 801C9F50
  c->r[29]=c->r[24]|c->r[24]; // 801C9F54
L_801C9F58:;
  c->r[0]=R32(c->r[24]+0x00000014u); // 801C9F58
  c->r[12]=R32(c->r[13]+0xFFFF8EA8u); // 801C9F5C
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C9F60
  c->ctr=c->r[12]; // 801C9F64
  if (true) { c->lr=0x801C9F6Cu; dispatch(c,c->ctr); } // 801C9F68
  cmps(c,0,(int32_t)c->r[3],0); // 801C9F6C
  W32(c->r[30]+0x00000000u,c->r[3]); // 801C9F70
  if (!crb(c,2)) { goto L_801C9F80; } // 801C9F74
  c->r[3]=0u+0x00000000u; // 801C9F78
  goto L_801CA05C; // 801C9F7C
L_801C9F80:;
  c->r[0]=R32(c->r[24]+0x00000030u); // 801C9F80
  cmps(c,0,(int32_t)c->r[0],0); // 801C9F84
  if (crb(c,2)) { goto L_801C9FB0; } // 801C9F88
  c->r[12]=R32(c->r[13]+0xFFFF8EA8u); // 801C9F8C
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C9F90
  c->ctr=c->r[12]; // 801C9F94
  if (true) { c->lr=0x801C9F9Cu; dispatch(c,c->ctr); } // 801C9F98
  cmps(c,0,(int32_t)c->r[3],0); // 801C9F9C
  W32(c->r[30]+0x0000001Cu,c->r[3]); // 801C9FA0
  if (!crb(c,2)) { goto L_801C9FB4; } // 801C9FA4
  c->r[3]=0u+0x00000000u; // 801C9FA8
  goto L_801CA05C; // 801C9FAC
L_801C9FB0:;
  W32(c->r[30]+0x0000001Cu,c->r[31]); // 801C9FB0
L_801C9FB4:;
  c->r[27]=c->r[24]|c->r[24]; // 801C9FB4
  c->r[28]=c->r[29]|c->r[29]; // 801C9FB8
  c->r[26]=0u+0x00000000u; // 801C9FBC
L_801C9FC0:;
  c->r[0]=R32(c->r[27]+0x0000005Cu); // 801C9FC0
  c->r[12]=R32(c->r[13]+0xFFFF8EA8u); // 801C9FC4
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801C9FC8
  c->ctr=c->r[12]; // 801C9FCC
  if (true) { c->lr=0x801C9FD4u; dispatch(c,c->ctr); } // 801C9FD0
  cmps(c,0,(int32_t)c->r[3],0); // 801C9FD4
  W32(c->r[28]+0x00000034u,c->r[3]); // 801C9FD8
  if (!crb(c,2)) { goto L_801C9FE8; } // 801C9FDC
  c->r[3]=0u+0x00000000u; // 801C9FE0
  goto L_801CA05C; // 801C9FE4
L_801C9FE8:;
  c->r[26]=c->r[26]+0x00000001u; // 801C9FE8
  c->r[28]=c->r[28]+0x00000004u; // 801C9FEC
  cmpu(c,0,c->r[26],0x00000002u); // 801C9FF0
  c->r[27]=c->r[27]+0x00000004u; // 801C9FF4
  if (crb(c,0)) { IRQCHK(c); goto L_801C9FC0; } // 801C9FF8
  c->r[28]=c->r[24]|c->r[24]; // 801C9FFC
  c->r[27]=c->r[29]|c->r[29]; // 801CA000
  c->r[26]=0u+0x00000000u; // 801CA004
L_801CA008:;
  c->r[0]=R32(c->r[28]+0x00000094u); // 801CA008
  c->r[12]=R32(c->r[13]+0xFFFF8EA8u); // 801CA00C
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801CA010
  c->ctr=c->r[12]; // 801CA014
  if (true) { c->lr=0x801CA01Cu; dispatch(c,c->ctr); } // 801CA018
  cmps(c,0,(int32_t)c->r[3],0); // 801CA01C
  W32(c->r[27]+0x0000006Cu,c->r[3]); // 801CA020
  if (!crb(c,2)) { goto L_801CA030; } // 801CA024
  c->r[3]=0u+0x00000000u; // 801CA028
  goto L_801CA05C; // 801CA02C
L_801CA030:;
  c->r[26]=c->r[26]+0x00000001u; // 801CA030
  c->r[27]=c->r[27]+0x00000004u; // 801CA034
  cmpu(c,0,c->r[26],0x00000002u); // 801CA038
  c->r[28]=c->r[28]+0x00000004u; // 801CA03C
  if (crb(c,0)) { IRQCHK(c); goto L_801CA008; } // 801CA040
  c->r[25]=c->r[25]+0x00000001u; // 801CA044
  c->r[29]=c->r[29]+0x00000008u; // 801CA048
  cmpu(c,0,c->r[25],0x00000003u); // 801CA04C
  c->r[30]=c->r[30]+0x00000004u; // 801CA050
  if (crb(c,0)) { IRQCHK(c); goto L_801C9F58; } // 801CA054
  c->r[3]=0u+0x00000001u; // 801CA058
L_801CA05C:;
  c->r[11]=c->r[1]+0x00000030u; // 801CA05C
  c->lr=0x801CA064u; f_800C2E8C(c); // 801CA060
  c->r[0]=R32(c->r[1]+0x00000034u); // 801CA064
  c->lr=c->r[0]; // 801CA068
  c->r[1]=c->r[1]+0x00000030u; // 801CA06C
  return; // 801CA070
}

// fn_801CA080
void f_801CA080(Ctx* __restrict c) {
  trace_call(0x801CA080u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA080
  c->r[0]=c->lr; // 801CA084
  W32(c->r[1]+0x00000034u,c->r[0]); // 801CA088
  c->r[11]=c->r[1]+0x00000030u; // 801CA08C
  c->lr=0x801CA094u; f_800C2E44(c); // 801CA090
  c->r[25]=c->r[3]|c->r[3]; // 801CA094
  c->r[26]=0u+0x00000000u; // 801CA098
  c->r[31]=c->r[25]|c->r[25]; // 801CA09C
  c->r[30]=c->r[25]|c->r[25]; // 801CA0A0
L_801CA0A4:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 801CA0A4
  cmps(c,0,(int32_t)c->r[3],0); // 801CA0A8
  if (crb(c,2)) { goto L_801CA0C0; } // 801CA0AC
  c->r[0]=R32(c->r[25]+0x00000014u); // 801CA0B0
  c->r[4]=0u+0x00000000u; // 801CA0B4
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801CA0B8
  c->lr=0x801CA0C0u; f_80004350(c); // 801CA0BC
L_801CA0C0:;
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 801CA0C0
  cmps(c,0,(int32_t)c->r[3],0); // 801CA0C4
  if (crb(c,2)) { goto L_801CA0DC; } // 801CA0C8
  c->r[0]=R32(c->r[25]+0x00000030u); // 801CA0CC
  c->r[4]=0u+0x00000000u; // 801CA0D0
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801CA0D4
  c->lr=0x801CA0DCu; f_80004350(c); // 801CA0D8
L_801CA0DC:;
  c->r[28]=c->r[30]|c->r[30]; // 801CA0DC
  c->r[29]=c->r[25]|c->r[25]; // 801CA0E0
  c->r[27]=0u+0x00000000u; // 801CA0E4
L_801CA0E8:;
  c->r[3]=R32(c->r[28]+0x00000034u); // 801CA0E8
  cmps(c,0,(int32_t)c->r[3],0); // 801CA0EC
  if (crb(c,2)) { goto L_801CA104; } // 801CA0F0
  c->r[0]=R32(c->r[29]+0x0000005Cu); // 801CA0F4
  c->r[4]=0u+0x00000000u; // 801CA0F8
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801CA0FC
  c->lr=0x801CA104u; f_80004350(c); // 801CA100
L_801CA104:;
  c->r[27]=c->r[27]+0x00000001u; // 801CA104
  c->r[29]=c->r[29]+0x00000004u; // 801CA108
  cmpu(c,0,c->r[27],0x00000002u); // 801CA10C
  c->r[28]=c->r[28]+0x00000004u; // 801CA110
  if (crb(c,0)) { IRQCHK(c); goto L_801CA0E8; } // 801CA114
  c->r[29]=c->r[30]|c->r[30]; // 801CA118
  c->r[28]=c->r[25]|c->r[25]; // 801CA11C
  c->r[27]=0u+0x00000000u; // 801CA120
L_801CA124:;
  c->r[3]=R32(c->r[29]+0x0000006Cu); // 801CA124
  cmps(c,0,(int32_t)c->r[3],0); // 801CA128
  if (crb(c,2)) { goto L_801CA140; } // 801CA12C
  c->r[0]=R32(c->r[28]+0x00000094u); // 801CA130
  c->r[4]=0u+0x00000000u; // 801CA134
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801CA138
  c->lr=0x801CA140u; f_80004350(c); // 801CA13C
L_801CA140:;
  c->r[27]=c->r[27]+0x00000001u; // 801CA140
  c->r[28]=c->r[28]+0x00000004u; // 801CA144
  cmpu(c,0,c->r[27],0x00000002u); // 801CA148
  c->r[29]=c->r[29]+0x00000004u; // 801CA14C
  if (crb(c,0)) { IRQCHK(c); goto L_801CA124; } // 801CA150
  c->r[26]=c->r[26]+0x00000001u; // 801CA154
  c->r[30]=c->r[30]+0x00000008u; // 801CA158
  cmpu(c,0,c->r[26],0x00000003u); // 801CA15C
  c->r[31]=c->r[31]+0x00000004u; // 801CA160
  if (crb(c,0)) { IRQCHK(c); goto L_801CA0A4; } // 801CA164
  c->r[11]=c->r[1]+0x00000030u; // 801CA168
  c->lr=0x801CA170u; f_800C2E90(c); // 801CA16C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801CA170
  c->lr=c->r[0]; // 801CA174
  c->r[1]=c->r[1]+0x00000030u; // 801CA178
  return; // 801CA17C
}

// fn_801CA180
void f_801CA180(Ctx* __restrict c) {
  trace_call(0x801CA180u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA180
  c->r[0]=c->lr; // 801CA184
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CA188
  c->r[11]=c->r[1]+0x00000020u; // 801CA18C
  c->lr=0x801CA194u; f_800C2E48(c); // 801CA190
  c->r[26]=0u+0x00000000u; // 801CA194
  c->r[30]=c->r[3]|c->r[3]; // 801CA198
  c->r[31]=0u+0x00000000u; // 801CA19C
  c->r[29]=c->r[3]|c->r[3]; // 801CA1A0
L_801CA1A4:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 801CA1A4
  cmps(c,0,(int32_t)c->r[3],0); // 801CA1A8
  if (crb(c,2)) { goto L_801CA1C0; } // 801CA1AC
  c->r[12]=R32(c->r[13]+0xFFFF8EACu); // 801CA1B0
  c->ctr=c->r[12]; // 801CA1B4
  if (true) { c->lr=0x801CA1BCu; dispatch(c,c->ctr); } // 801CA1B8
  W32(c->r[30]+0x00000000u,c->r[31]); // 801CA1BC
L_801CA1C0:;
  c->r[3]=R32(c->r[30]+0x0000001Cu); // 801CA1C0
  cmps(c,0,(int32_t)c->r[3],0); // 801CA1C4
  if (crb(c,2)) { goto L_801CA1DC; } // 801CA1C8
  c->r[12]=R32(c->r[13]+0xFFFF8EACu); // 801CA1CC
  c->ctr=c->r[12]; // 801CA1D0
  if (true) { c->lr=0x801CA1D8u; dispatch(c,c->ctr); } // 801CA1D4
  W32(c->r[30]+0x0000001Cu,c->r[31]); // 801CA1D8
L_801CA1DC:;
  c->r[28]=c->r[29]|c->r[29]; // 801CA1DC
  c->r[27]=0u+0x00000000u; // 801CA1E0
L_801CA1E4:;
  c->r[3]=R32(c->r[28]+0x00000034u); // 801CA1E4
  cmps(c,0,(int32_t)c->r[3],0); // 801CA1E8
  if (crb(c,2)) { goto L_801CA200; } // 801CA1EC
  c->r[12]=R32(c->r[13]+0xFFFF8EACu); // 801CA1F0
  c->ctr=c->r[12]; // 801CA1F4
  if (true) { c->lr=0x801CA1FCu; dispatch(c,c->ctr); } // 801CA1F8
  W32(c->r[28]+0x00000034u,c->r[31]); // 801CA1FC
L_801CA200:;
  c->r[27]=c->r[27]+0x00000001u; // 801CA200
  c->r[28]=c->r[28]+0x00000004u; // 801CA204
  cmpu(c,0,c->r[27],0x00000002u); // 801CA208
  if (crb(c,0)) { IRQCHK(c); goto L_801CA1E4; } // 801CA20C
  c->r[28]=c->r[29]|c->r[29]; // 801CA210
  c->r[27]=0u+0x00000000u; // 801CA214
L_801CA218:;
  c->r[3]=R32(c->r[28]+0x0000006Cu); // 801CA218
  cmps(c,0,(int32_t)c->r[3],0); // 801CA21C
  if (crb(c,2)) { goto L_801CA234; } // 801CA220
  c->r[12]=R32(c->r[13]+0xFFFF8EACu); // 801CA224
  c->ctr=c->r[12]; // 801CA228
  if (true) { c->lr=0x801CA230u; dispatch(c,c->ctr); } // 801CA22C
  W32(c->r[28]+0x0000006Cu,c->r[31]); // 801CA230
L_801CA234:;
  c->r[27]=c->r[27]+0x00000001u; // 801CA234
  c->r[28]=c->r[28]+0x00000004u; // 801CA238
  cmpu(c,0,c->r[27],0x00000002u); // 801CA23C
  if (crb(c,0)) { IRQCHK(c); goto L_801CA218; } // 801CA240
  c->r[26]=c->r[26]+0x00000001u; // 801CA244
  c->r[29]=c->r[29]+0x00000008u; // 801CA248
  cmpu(c,0,c->r[26],0x00000003u); // 801CA24C
  c->r[30]=c->r[30]+0x00000004u; // 801CA250
  if (crb(c,0)) { IRQCHK(c); goto L_801CA1A4; } // 801CA254
  c->r[11]=c->r[1]+0x00000020u; // 801CA258
  c->lr=0x801CA260u; f_800C2E94(c); // 801CA25C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CA260
  c->lr=c->r[0]; // 801CA264
  c->r[1]=c->r[1]+0x00000020u; // 801CA268
  return; // 801CA26C
}

// fn_801CA270
void f_801CA270(Ctx* __restrict c) {
  trace_call(0x801CA270u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA270
  c->r[0]=c->lr; // 801CA274
  W32(c->r[1]+0x00000064u,c->r[0]); // 801CA278
  c->r[11]=c->r[1]+0x00000030u; // 801CA27C
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 801CA280
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 801CA284
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 801CA288
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 801CA28C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[29]);} // 801CA290
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,29,ea,0,0);} // 801CA294
  c->lr=0x801CA29Cu; f_800C2E44(c); // 801CA298
  c->r[5]=R32(c->r[3]+0x000000B4u); // 801CA29C
  c->r[31]=c->r[3]|c->r[3]; // 801CA2A0
  cmpu(c,0,c->r[5],0x00000008u); // 801CA2A4
  if (crb(c,0)) { goto L_801CA2B4; } // 801CA2A8
  c->r[3]=0u+0x00000000u; // 801CA2AC
  goto L_801CA4EC; // 801CA2B0
L_801CA2B4:;
  {uint32_t ea=c->r[3]+0x000000BCu; c->f[1]=c->ps1[1]=RF32(ea);} // 801CA2B4
  {uint32_t ea=c->r[2]+0xFFFFAFD4u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CA2B8
  fcmp(c,0,c->f[1],c->f[2]); // 801CA2BC
  if (crb(c,0)) { goto L_801CA2D0; } // 801CA2C0
  {uint32_t ea=c->r[3]+0x000000B8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CA2C4
  fcmp(c,0,c->f[1],c->f[0]); // 801CA2C8
  if (!crb(c,1)) { goto L_801CA2D8; } // 801CA2CC
L_801CA2D0:;
  c->r[3]=0u+0x00000000u; // 801CA2D0
  goto L_801CA4EC; // 801CA2D4
L_801CA2D8:;
  c->r[0]=R32(c->r[3]+0x000000C0u); // 801CA2D8
  cmpu(c,0,c->r[0],0x00000006u); // 801CA2DC
  if (crb(c,0)) { goto L_801CA2EC; } // 801CA2E0
  c->r[3]=0u+0x00000000u; // 801CA2E4
  goto L_801CA4EC; // 801CA2E8
L_801CA2EC:;
  {uint32_t ea=c->r[3]+0x000000C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CA2EC
  fcmp(c,0,c->f[0],c->f[2]); // 801CA2F0
  if (!crb(c,0)) { goto L_801CA300; } // 801CA2F4
  c->r[3]=0u+0x00000000u; // 801CA2F8
  goto L_801CA4EC; // 801CA2FC
L_801CA300:;
  {uint32_t ea=c->r[3]+0x000000C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CA300
  fcmp(c,0,c->f[0],c->f[2]); // 801CA304
  if (crb(c,0)) { goto L_801CA318; } // 801CA308
  {uint32_t ea=c->r[2]+0xFFFFAFD8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CA30C
  fcmp(c,0,c->f[0],c->f[1]); // 801CA310
  if (!crb(c,1)) { goto L_801CA320; } // 801CA314
L_801CA318:;
  c->r[3]=0u+0x00000000u; // 801CA318
  goto L_801CA4EC; // 801CA31C
L_801CA320:;
  {uint32_t ea=c->r[3]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CA320
  fcmp(c,0,c->f[0],c->f[2]); // 801CA324
  if (crb(c,0)) { goto L_801CA334; } // 801CA328
  fcmp(c,0,c->f[0],c->f[1]); // 801CA32C
  if (!crb(c,1)) { goto L_801CA33C; } // 801CA330
L_801CA334:;
  c->r[3]=0u+0x00000000u; // 801CA334
  goto L_801CA4EC; // 801CA338
L_801CA33C:;
  {uint32_t ea=c->r[3]+0x000000D0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CA33C
  fcmp(c,0,c->f[0],c->f[2]); // 801CA340
  if (crb(c,0)) { goto L_801CA350; } // 801CA344
  fcmp(c,0,c->f[0],c->f[1]); // 801CA348
  if (!crb(c,1)) { goto L_801CA358; } // 801CA34C
L_801CA350:;
  c->r[3]=0u+0x00000000u; // 801CA350
  goto L_801CA4EC; // 801CA354
L_801CA358:;
  {uint32_t ea=c->r[3]+0x000000D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CA358
  fcmp(c,0,c->f[0],c->f[2]); // 801CA35C
  if (crb(c,0)) { goto L_801CA36C; } // 801CA360
  fcmp(c,0,c->f[0],c->f[1]); // 801CA364
  if (!crb(c,1)) { goto L_801CA374; } // 801CA368
L_801CA36C:;
  c->r[3]=0u+0x00000000u; // 801CA36C
  goto L_801CA4EC; // 801CA370
L_801CA374:;
  {uint32_t ea=c->r[3]+0x000000E0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CA374
  fcmp(c,0,c->f[0],c->f[2]); // 801CA378
  if (crb(c,0)) { goto L_801CA388; } // 801CA37C
  fcmp(c,0,c->f[0],c->f[1]); // 801CA380
  if (!crb(c,1)) { goto L_801CA390; } // 801CA384
L_801CA388:;
  c->r[3]=0u+0x00000000u; // 801CA388
  goto L_801CA4EC; // 801CA38C
L_801CA390:;
  {uint32_t ea=c->r[3]+0x000000E4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CA390
  fcmp(c,0,c->f[0],c->f[2]); // 801CA394
  if (crb(c,0)) { goto L_801CA3A4; } // 801CA398
  fcmp(c,0,c->f[0],c->f[1]); // 801CA39C
  if (!crb(c,1)) { goto L_801CA3AC; } // 801CA3A0
L_801CA3A4:;
  c->r[3]=0u+0x00000000u; // 801CA3A4
  goto L_801CA4EC; // 801CA3A8
L_801CA3AC:;
  c->r[0]=0u+0x00000000u; // 801CA3AC
  c->r[4]=0u+0x803A0000u; // 801CA3B0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801CA3B4
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801CA3B8
  c->r[4]=c->r[4]+0xFFFFE0E0u; // 801CA3BC
  cmpu(c,0,c->r[5],0x00000003u); // 801CA3C0
  c->r[0]=R32(c->r[4]+c->r[0]); // 801CA3C4
  W32(c->r[3]+0x00000010u,c->r[0]); // 801CA3C8
  if (crb(c,1)) { goto L_801CA3DC; } // 801CA3CC
  {uint32_t ea=c->r[2]+0xFFFFAFE8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CA3D0
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 801CA3D4
  goto L_801CA3E4; // 801CA3D8
L_801CA3DC:;
  {uint32_t ea=c->r[2]+0xFFFFAFECu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CA3DC
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 801CA3E0
L_801CA3E4:;
  {uint32_t ea=c->r[2]+0xFFFFAFD0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CA3E4
  c->r[28]=0u+0x00000000u; // 801CA3E8
  {uint32_t ea=c->r[3]+0x000000BCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CA3EC
  W32(c->r[3]+0x00000028u,c->r[28]); // 801CA3F0
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 801CA3F4
  c->lr=0x801CA3FCu; f_800C2D24(c); // 801CA3F8
  c->r[29]=0u+0x803A0000u; // 801CA3FC
  W32(c->r[31]+0x0000002Cu,c->r[3]); // 801CA400
  {uint32_t ea=c->r[2]+0xFFFFB008u; c->f[29]=RF64(ea);} // 801CA404
  c->r[27]=c->r[31]|c->r[31]; // 801CA408
  {uint32_t ea=c->r[2]+0xFFFFAFF0u; c->f[30]=c->ps1[30]=RF32(ea);} // 801CA40C
  c->r[29]=c->r[29]+0xFFFFE100u; // 801CA410
  {uint32_t ea=c->r[2]+0xFFFFAFD0u; c->f[31]=c->ps1[31]=RF32(ea);} // 801CA414
  c->r[25]=0u+0x00000000u; // 801CA418
  c->r[26]=0u+0x00000000u; // 801CA41C
  c->r[30]=0u+0x43300000u; // 801CA420
L_801CA424:;
  W32(c->r[27]+0x0000004Cu,c->r[28]); // 801CA424
  {uint32_t ea=c->r[2]+0xFFFFAFF8u; c->f[1]=RF64(ea);} // 801CA428
  c->r[0]=R32(c->r[31]+0x000000C0u); // 801CA42C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CA430
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801CA434
  c->r[0]=c->r[26]+c->r[0]; // 801CA438
  c->r[0]=R32(c->r[29]+c->r[0]); // 801CA43C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801CA440
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801CA444
  W32(c->r[27]+0x00000054u,c->r[0]); // 801CA448
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[29]); // 801CA44C
  {uint32_t ea=c->r[31]+0x000000C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CA450
  c->f[2]=c->ps1[2]=S(c->f[30]*c->f[2]); // 801CA454
  c->f[0]=c->ps1[0]=S(c->f[31]*c->f[0]); // 801CA458
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[0]); // 801CA45C
  c->lr=0x801CA464u; f_800D29C4(c); // 801CA460
  c->f[0]=c->ps1[0]=S(c->f[1]); // 801CA464
  c->r[25]=c->r[25]+0x00000001u; // 801CA468
  cmpu(c,0,c->r[25],0x00000002u); // 801CA46C
  c->r[26]=c->r[26]+0x00000004u; // 801CA470
  {uint32_t ea=c->r[27]+0x00000064u; WF32(ea,c->f[0]);} // 801CA474
  c->r[27]=c->r[27]+0x00000004u; // 801CA478
  if (crb(c,0)) { IRQCHK(c); goto L_801CA424; } // 801CA47C
  c->r[0]=R32(c->r[31]+0x000000C0u); // 801CA480
  c->r[3]=0u+0x803A0000u; // 801CA484
  c->r[4]=0u+0x00000000u; // 801CA488
  W32(c->r[31]+0x00000084u,c->r[4]); // 801CA48C
  c->r[3]=c->r[3]+0xFFFFE100u; // 801CA490
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801CA494
  c->r[3]=c->r[3]+c->r[0]; // 801CA498
  {uint32_t ea=c->r[2]+0xFFFFAFD8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801CA49C
  c->r[0]=R32(c->r[3]+0x00000008u); // 801CA4A0
  {uint32_t ea=c->r[31]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 801CA4A4
  W32(c->r[31]+0x0000008Cu,c->r[0]); // 801CA4A8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 801CA4AC
  {uint32_t ea=c->r[2]+0xFFFFB000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CA4B0
  W32(c->r[31]+0x00000088u,c->r[4]); // 801CA4B4
  {uint32_t ea=c->r[31]+0x000000C8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801CA4B8
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801CA4BC
  fcmp(c,0,c->f[1],c->f[0]); // 801CA4C0
  W32(c->r[31]+0x00000090u,c->r[0]); // 801CA4C4
  {uint32_t ea=c->r[31]+0x0000009Cu; WF32(ea,c->f[2]);} // 801CA4C8
  {uint32_t ea=c->r[31]+0x000000ACu; WF32(ea,c->f[1]);} // 801CA4CC
  if (!crb(c,1)) { goto L_801CA4D8; } // 801CA4D0
  {uint32_t ea=c->r[31]+0x000000ACu; WF32(ea,c->f[0]);} // 801CA4D4
L_801CA4D8:;
  {uint32_t ea=c->r[2]+0xFFFFAFD4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801CA4D8
  c->r[3]=0u+0x00000001u; // 801CA4DC
  {uint32_t ea=c->r[31]+0x000000A0u; WF32(ea,c->f[0]);} // 801CA4E0
  {uint32_t ea=c->r[31]+0x000000A4u; WF32(ea,c->f[0]);} // 801CA4E4
  {uint32_t ea=c->r[31]+0x000000A8u; WF32(ea,c->f[0]);} // 801CA4E8
L_801CA4EC:;
  c->r[11]=c->r[1]+0x00000030u; // 801CA4EC
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 801CA4F0
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 801CA4F4
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 801CA4F8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 801CA4FC
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,29,ea,0,0);} // 801CA500
  {uint32_t ea=c->r[1]+0x00000030u; c->f[29]=RF64(ea);} // 801CA504
  c->lr=0x801CA50Cu; f_800C2E90(c); // 801CA508
  c->r[0]=R32(c->r[1]+0x00000064u); // 801CA50C
  c->lr=c->r[0]; // 801CA510
  c->r[1]=c->r[1]+0x00000060u; // 801CA514
  return; // 801CA518
}

// fn_801CA520
void f_801CA520(Ctx* __restrict c) {
  trace_call(0x801CA520u);
  c->r[4]=c->r[3]|c->r[3]; // 801CA520
  c->r[3]=R32(c->r[13]+0xFFFF9120u); // 801CA524
  f_802445D0(c); return; // 801CA528
}

// fn_801CA530
void f_801CA530(Ctx* __restrict c) {
  trace_call(0x801CA530u);
  c->r[4]=c->r[3]|c->r[3]; // 801CA530
  c->r[3]=R32(c->r[13]+0xFFFF9120u); // 801CA534
  f_802446D0(c); return; // 801CA538
}

// AXFXSetHooks
void f_801CA540(Ctx* __restrict c) {
  trace_call(0x801CA540u);
  W32(c->r[13]+0xFFFF8EA8u,c->r[3]); // 801CA540
  W32(c->r[13]+0xFFFF8EACu,c->r[4]); // 801CA544
  return; // 801CA548
}

// AXFXGetHooks
void f_801CA550(Ctx* __restrict c) {
  trace_call(0x801CA550u);
  c->r[0]=R32(c->r[13]+0xFFFF8EA8u); // 801CA550
  W32(c->r[3]+0x00000000u,c->r[0]); // 801CA554
  c->r[0]=R32(c->r[13]+0xFFFF8EACu); // 801CA558
  W32(c->r[4]+0x00000000u,c->r[0]); // 801CA55C
  return; // 801CA560
}

// PPCMfmsr
void f_801CA570(Ctx* __restrict c) {
  trace_call(0x801CA570u);
  c->r[3]=c->msr; // 801CA570
  return; // 801CA574
}

// PPCMtmsr
void f_801CA580(Ctx* __restrict c) {
  trace_call(0x801CA580u);
  c->msr=c->r[3]; // 801CA580
  return; // 801CA584
}

// PPCMfhid0
void f_801CA590(Ctx* __restrict c) {
  trace_call(0x801CA590u);
  c->r[3]=mfspr(c,1008); // 801CA590
  return; // 801CA594
}

// PPCMthid0
void f_801CA5A0(Ctx* __restrict c) {
  trace_call(0x801CA5A0u);
  mtspr(c,1008,c->r[3]); // 801CA5A0
  return; // 801CA5A4
}

// PPCMfl2cr
void f_801CA5B0(Ctx* __restrict c) {
  trace_call(0x801CA5B0u);
  c->r[3]=mfspr(c,1017); // 801CA5B0
  return; // 801CA5B4
}

// PPCMtl2cr
void f_801CA5C0(Ctx* __restrict c) {
  trace_call(0x801CA5C0u);
  mtspr(c,1017,c->r[3]); // 801CA5C0
  return; // 801CA5C4
}

// PPCMtdec
void f_801CA5D0(Ctx* __restrict c) {
  trace_call(0x801CA5D0u);
  mtspr(c,22,c->r[3]); // 801CA5D0
  return; // 801CA5D4
}

// PPCSync
void f_801CA5E0(Ctx* __restrict c) {
  trace_call(0x801CA5E0u);
  sc(c,0x801CA5E0u); // 801CA5E0
  return; // 801CA5E4
}

// PPCHalt
void f_801CA5F0(Ctx* __restrict c) {
  trace_call(0x801CA5F0u);
  /* sync */ // 801CA5F0
L_801CA5F4:;
  c->r[0]=c->r[0]|0x00000000u; // 801CA5F4
  c->r[3]=0u+0x00000000u; // 801CA5F8
  c->r[0]=c->r[0]|0x00000000u; // 801CA5FC
  IRQCHK(c); goto L_801CA5F4; // 801CA600
}

// PPCMtmmcr0
void f_801CA610(Ctx* __restrict c) {
  trace_call(0x801CA610u);
  mtspr(c,952,c->r[3]); // 801CA610
  return; // 801CA614
}

// PPCMtmmcr1
void f_801CA620(Ctx* __restrict c) {
  trace_call(0x801CA620u);
  mtspr(c,956,c->r[3]); // 801CA620
  return; // 801CA624
}

// PPCMtpmc1
void f_801CA630(Ctx* __restrict c) {
  trace_call(0x801CA630u);
  mtspr(c,953,c->r[3]); // 801CA630
  return; // 801CA634
}

// PPCMtpmc2
void f_801CA640(Ctx* __restrict c) {
  trace_call(0x801CA640u);
  mtspr(c,954,c->r[3]); // 801CA640
  return; // 801CA644
}

// PPCMtpmc3
void f_801CA650(Ctx* __restrict c) {
  trace_call(0x801CA650u);
  mtspr(c,957,c->r[3]); // 801CA650
  return; // 801CA654
}

// PPCMtpmc4
void f_801CA660(Ctx* __restrict c) {
  trace_call(0x801CA660u);
  mtspr(c,958,c->r[3]); // 801CA660
  return; // 801CA664
}

// PPCMffpscr
void f_801CA670(Ctx* __restrict c) {
  trace_call(0x801CA670u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA670
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 801CA674
  c->f[31]=u2d((uint64_t)c->fpscr); // 801CA678
  {uint32_t ea=c->r[1]+0x00000008u; WF64(ea,c->f[31]);} // 801CA67C
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 801CA680
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 801CA684
  c->r[1]=c->r[1]+0x00000020u; // 801CA688
  return; // 801CA68C
}

// PPCMtfpscr
void f_801CA690(Ctx* __restrict c) {
  trace_call(0x801CA690u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA690
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 801CA694
  c->r[4]=0u+0x00000000u; // 801CA698
  W32(c->r[1]+0x00000008u,c->r[4]); // 801CA69C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 801CA6A0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[31]=RF64(ea);} // 801CA6A4
  c->fpscr=(uint32_t)d2u(c->f[31]); // 801CA6A8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 801CA6AC
  c->r[1]=c->r[1]+0x00000020u; // 801CA6B0
  return; // 801CA6B4
}

// PPCMfhid2
void f_801CA6C0(Ctx* __restrict c) {
  trace_call(0x801CA6C0u);
  c->r[3]=mfspr(c,920); // 801CA6C0
  return; // 801CA6C4
}

// PPCMthid2
void f_801CA6D0(Ctx* __restrict c) {
  trace_call(0x801CA6D0u);
  mtspr(c,920,c->r[3]); // 801CA6D0
  return; // 801CA6D4
}

// fn_801CA6E0
void f_801CA6E0(Ctx* __restrict c) {
  trace_call(0x801CA6E0u);
  /* sync */ // 801CA6E0
  c->r[3]=mfspr(c,921); // 801CA6E4
  return; // 801CA6E8
}

// PPCMtwpar
void f_801CA6F0(Ctx* __restrict c) {
  trace_call(0x801CA6F0u);
  mtspr(c,921,c->r[3]); // 801CA6F0
  return; // 801CA6F4
}

// PPCDisableSpeculation
void f_801CA700(Ctx* __restrict c) {
  trace_call(0x801CA700u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA700
  c->r[0]=c->lr; // 801CA704
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CA708
  c->lr=0x801CA710u; f_801CA590(c); // 801CA70C
  c->r[3]=c->r[3]|0x00000200u; // 801CA710
  c->lr=0x801CA718u; f_801CA5A0(c); // 801CA714
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CA718
  c->lr=c->r[0]; // 801CA71C
  c->r[1]=c->r[1]+0x00000010u; // 801CA720
  return; // 801CA724
}

// PPCSetFpNonIEEEMode
void f_801CA730(Ctx* __restrict c) {
  trace_call(0x801CA730u);
  c->fpscr|=0x00000004u; // 801CA730
  return; // 801CA734
}

// PPCMthid4
void f_801CA740(Ctx* __restrict c) {
  trace_call(0x801CA740u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA740
  c->r[0]=c->lr; // 801CA744
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CA748
  c->r[0]=rotl(c->r[3],0)&0x80000000u; cr0(c,c->r[0]); // 801CA74C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CA750
  c->r[31]=c->r[3]|c->r[3]; // 801CA754
  if (crb(c,2)) { goto L_801CA764; } // 801CA758
  mtspr(c,1011,c->r[3]); // 801CA75C
  goto L_801CA77C; // 801CA760
L_801CA764:;
  c->r[3]=0u+0x803A0000u; // 801CA764
  c->r[3]=c->r[3]+0xFFFFE170u; // 801CA768
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CA76C
  c->lr=0x801CA774u; f_80245CC0(c); // 801CA770
  c->r[31]=c->r[31]|0x80000000u; // 801CA774
  mtspr(c,1011,c->r[31]); // 801CA778
L_801CA77C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CA77C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CA780
  c->lr=c->r[0]; // 801CA784
  c->r[1]=c->r[1]+0x00000010u; // 801CA788
  return; // 801CA78C
}

// gki_init_free_queue
void f_801CA790(Ctx* __restrict c) {
  trace_call(0x801CA790u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA790
  c->r[0]=c->lr; // 801CA794
  W32(c->r[1]+0x00000044u,c->r[0]); // 801CA798
  c->r[11]=c->r[1]+0x00000040u; // 801CA79C
  c->lr=0x801CA7A4u; f_800C2E28(c); // 801CA7A0
  c->r[7]=c->r[4]+0x00000003u; // 801CA7A4
  c->r[4]=0u+0x80450000u; // 801CA7A8
  c->r[9]=rotl(c->r[7],0)&0xFFFFFFFCu; // 801CA7AC
  c->r[25]=rotl(c->r[3],2)&0x000003FCu; // 801CA7B0
  c->r[26]=c->r[9]+0x0000000Cu; // 801CA7B4
  c->r[4]=c->r[4]+0x00006C20u; // 801CA7B8
  c->r[8]=rotl(c->r[26],0)&0x0000FFFFu; // 801CA7BC
  c->r[12]=rotl(c->r[7],0)&0x0000FFFCu; // 801CA7C0
  c->r[10]=c->r[4]+0x00000054u; // 801CA7C4
  c->r[4]=rotl(c->r[3],1)&0x000001FEu; // 801CA7C8
  c->r[11]=c->r[10]+0x00030000u; // 801CA7CC
  c->r[0]=rotl(c->r[3],4)&0x00000FF0u; // 801CA7D0
  c->r[25]=c->r[11]+c->r[25]; // 801CA7D4
  cmps(c,0,(int32_t)c->r[5],0); // 801CA7D8
  c->r[24]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[5]); // 801CA7DC
  W32(c->r[25]+0xFFFF8A1Cu,c->r[6]); // 801CA7E0
  c->r[7]=c->r[11]+c->r[4]; // 801CA7E4
  c->r[11]=c->r[11]+c->r[0]; // 801CA7E8
  c->r[4]=c->r[6]+c->r[24]; // 801CA7EC
  W32(c->r[25]+0xFFFF8A40u,c->r[4]); // 801CA7F0
  c->r[4]=0u+0x00000000u; // 801CA7F4
  W16(c->r[7]+0xFFFF8A64u,c->r[26]); // 801CA7F8
  c->r[7]=0u+0x00000000u; // 801CA7FC
  W16(c->r[11]+0xFFFF8994u,c->r[12]); // 801CA800
  W16(c->r[11]+0xFFFF8996u,c->r[5]); // 801CA804
  W16(c->r[11]+0xFFFF8998u,c->r[4]); // 801CA808
  W16(c->r[11]+0xFFFF899Au,c->r[4]); // 801CA80C
  W32(c->r[11]+0xFFFF898Cu,c->r[6]); // 801CA810
  if (crb(c,2)) { goto L_801CA984; } // 801CA814
  cmpu(c,0,c->r[5],0x00000008u); // 801CA818
  c->r[11]=c->r[5]+0x00010000u; // 801CA81C
  c->r[11]=c->r[11]+0xFFFFFFF8u; // 801CA820
  if (!crb(c,1)) { goto L_801CA938; } // 801CA824
  c->r[12]=rotl(c->r[11],0)&0x0000FFFFu; // 801CA828
  c->r[27]=0u+0xDDBB0000u; // 801CA82C
  c->r[11]=c->r[12]+0x00000007u; // 801CA830
  c->r[24]=0u+0x000000F0u; // 801CA834
  c->r[11]=rotl(c->r[11],29)&0x1FFFFFFFu; // 801CA838
  c->r[26]=c->r[27]+0xFFFFDDBAu; // 801CA83C
  c->r[25]=0u+0x00000000u; // 801CA840
  c->ctr=c->r[11]; // 801CA844
  cmpu(c,0,c->r[12],0x00000000u); // 801CA848
  if (!crb(c,1)) { goto L_801CA938; } // 801CA84C
L_801CA850:;
  W8(c->r[6]+0x00000005u,c->r[24]); // 801CA850
  c->r[18]=c->r[6]+c->r[8]; // 801CA854
  c->r[19]=c->r[18]+c->r[8]; // 801CA858
  c->r[4]=c->r[6]+c->r[9]; // 801CA85C
  W8(c->r[6]+0x00000004u,c->r[3]); // 801CA860
  c->r[20]=c->r[19]+c->r[8]; // 801CA864
  c->r[21]=c->r[20]+c->r[8]; // 801CA868
  c->r[27]=c->r[18]+c->r[9]; // 801CA86C
  W8(c->r[6]+0x00000006u,c->r[25]); // 801CA870
  c->r[22]=c->r[21]+c->r[8]; // 801CA874
  c->r[23]=c->r[22]+c->r[8]; // 801CA878
  c->r[28]=c->r[19]+c->r[9]; // 801CA87C
  W32(c->r[4]+0x00000008u,c->r[26]); // 801CA880
  c->r[4]=c->r[23]+c->r[8]; // 801CA884
  c->r[31]=c->r[20]+c->r[9]; // 801CA888
  c->r[30]=c->r[21]+c->r[9]; // 801CA88C
  W32(c->r[6]+0x00000000u,c->r[18]); // 801CA890
  c->r[29]=c->r[22]+c->r[9]; // 801CA894
  c->r[12]=c->r[23]+c->r[9]; // 801CA898
  c->r[11]=c->r[4]+c->r[9]; // 801CA89C
  W8(c->r[18]+0x00000005u,c->r[24]); // 801CA8A0
  c->r[6]=c->r[4]+c->r[8]; // 801CA8A4
  c->r[7]=c->r[7]+0x00000008u; // 801CA8A8
  W8(c->r[18]+0x00000004u,c->r[3]); // 801CA8AC
  W8(c->r[18]+0x00000006u,c->r[25]); // 801CA8B0
  W32(c->r[27]+0x00000008u,c->r[26]); // 801CA8B4
  W32(c->r[18]+0x00000000u,c->r[19]); // 801CA8B8
  W8(c->r[19]+0x00000005u,c->r[24]); // 801CA8BC
  W8(c->r[19]+0x00000004u,c->r[3]); // 801CA8C0
  W8(c->r[19]+0x00000006u,c->r[25]); // 801CA8C4
  W32(c->r[28]+0x00000008u,c->r[26]); // 801CA8C8
  W32(c->r[18]+c->r[8],c->r[20]); // 801CA8CC
  W8(c->r[20]+0x00000005u,c->r[24]); // 801CA8D0
  W8(c->r[20]+0x00000004u,c->r[3]); // 801CA8D4
  W8(c->r[20]+0x00000006u,c->r[25]); // 801CA8D8
  W32(c->r[31]+0x00000008u,c->r[26]); // 801CA8DC
  W32(c->r[19]+c->r[8],c->r[21]); // 801CA8E0
  W8(c->r[21]+0x00000005u,c->r[24]); // 801CA8E4
  W8(c->r[21]+0x00000004u,c->r[3]); // 801CA8E8
  W8(c->r[21]+0x00000006u,c->r[25]); // 801CA8EC
  W32(c->r[30]+0x00000008u,c->r[26]); // 801CA8F0
  W32(c->r[20]+c->r[8],c->r[22]); // 801CA8F4
  W8(c->r[22]+0x00000005u,c->r[24]); // 801CA8F8
  W8(c->r[22]+0x00000004u,c->r[3]); // 801CA8FC
  W8(c->r[22]+0x00000006u,c->r[25]); // 801CA900
  W32(c->r[29]+0x00000008u,c->r[26]); // 801CA904
  W32(c->r[21]+c->r[8],c->r[23]); // 801CA908
  W8(c->r[23]+0x00000005u,c->r[24]); // 801CA90C
  W8(c->r[23]+0x00000004u,c->r[3]); // 801CA910
  W8(c->r[23]+0x00000006u,c->r[25]); // 801CA914
  W32(c->r[12]+0x00000008u,c->r[26]); // 801CA918
  W32(c->r[22]+c->r[8],c->r[4]); // 801CA91C
  W8(c->r[4]+0x00000005u,c->r[24]); // 801CA920
  W8(c->r[4]+0x00000004u,c->r[3]); // 801CA924
  W8(c->r[4]+0x00000006u,c->r[25]); // 801CA928
  W32(c->r[11]+0x00000008u,c->r[26]); // 801CA92C
  W32(c->r[23]+c->r[8],c->r[6]); // 801CA930
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CA850; } // 801CA934
L_801CA938:;
  c->r[12]=rotl(c->r[7],0)&0x0000FFFFu; // 801CA938
  c->r[31]=0u+0xDDBB0000u; // 801CA93C
  c->r[11]=c->r[5]-c->r[12]; // 801CA940
  c->r[29]=0u+0x000000F0u; // 801CA944
  c->r[31]=c->r[31]+0xFFFFDDBAu; // 801CA948
  c->r[30]=0u+0x00000000u; // 801CA94C
  c->ctr=c->r[11]; // 801CA950
  cmpu(c,0,c->r[12],c->r[5]); // 801CA954
  if (!crb(c,0)) { goto L_801CA984; } // 801CA958
L_801CA95C:;
  W8(c->r[6]+0x00000005u,c->r[29]); // 801CA95C
  c->r[5]=c->r[6]+c->r[9]; // 801CA960
  c->r[4]=c->r[6]|c->r[6]; // 801CA964
  c->r[7]=c->r[7]+0x00000001u; // 801CA968
  W8(c->r[6]+0x00000004u,c->r[3]); // 801CA96C
  W8(c->r[6]+0x00000006u,c->r[30]); // 801CA970
  c->r[6]=c->r[6]+c->r[8]; // 801CA974
  W32(c->r[5]+0x00000008u,c->r[31]); // 801CA978
  W32(c->r[4]+0x00000000u,c->r[6]); // 801CA97C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CA95C; } // 801CA980
L_801CA984:;
  c->r[3]=c->r[10]+0x00030000u; // 801CA984
  c->r[5]=0u+0x00000000u; // 801CA988
  W32(c->r[4]+0x00000000u,c->r[5]); // 801CA98C
  c->r[3]=c->r[3]+c->r[0]; // 801CA990
  c->r[11]=c->r[1]+0x00000040u; // 801CA994
  W32(c->r[3]+0xFFFF8990u,c->r[4]); // 801CA998
  c->lr=0x801CA9A0u; f_800C2E74(c); // 801CA99C
  c->r[0]=R32(c->r[1]+0x00000044u); // 801CA9A0
  c->lr=c->r[0]; // 801CA9A4
  c->r[1]=c->r[1]+0x00000040u; // 801CA9A8
  return; // 801CA9AC
}

// gki_buffer_init
void f_801CA9B0(Ctx* __restrict c) {
  trace_call(0x801CA9B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CA9B0
  c->r[0]=c->lr; // 801CA9B4
  c->r[3]=0u+0x80450000u; // 801CA9B8
  c->r[6]=0u+0x00000000u; // 801CA9BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CA9C0
  c->r[0]=0u+0x00000002u; // 801CA9C4
  c->r[3]=c->r[3]+0x00006C20u; // 801CA9C8
  c->r[4]=0u+0x00000000u; // 801CA9CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CA9D0
  c->r[31]=c->r[3]+0x00000054u; // 801CA9D4
  c->ctr=c->r[0]; // 801CA9D8
L_801CA9DC:;
  c->r[0]=rotl(c->r[6],4)&0x00000FF0u; // 801CA9DC
  c->r[6]=c->r[6]+0x00000001u; // 801CA9E0
  c->r[5]=c->r[31]+c->r[0]; // 801CA9E4
  c->r[3]=c->r[5]+0x00030000u; // 801CA9E8
  c->r[0]=rotl(c->r[6],4)&0x00000FF0u; // 801CA9EC
  W32(c->r[3]+0xFFFF888Cu,c->r[4]); // 801CA9F0
  c->r[5]=c->r[31]+c->r[0]; // 801CA9F4
  c->r[6]=c->r[6]+0x00000001u; // 801CA9F8
  W32(c->r[3]+0xFFFF890Cu,c->r[4]); // 801CA9FC
  c->r[0]=rotl(c->r[6],4)&0x00000FF0u; // 801CAA00
  c->r[6]=c->r[6]+0x00000001u; // 801CAA04
  W32(c->r[3]+0xFFFF8890u,c->r[4]); // 801CAA08
  W32(c->r[3]+0xFFFF8910u,c->r[4]); // 801CAA0C
  W32(c->r[3]+0xFFFF8894u,c->r[4]); // 801CAA10
  W32(c->r[3]+0xFFFF8914u,c->r[4]); // 801CAA14
  W32(c->r[3]+0xFFFF8898u,c->r[4]); // 801CAA18
  W32(c->r[3]+0xFFFF8918u,c->r[4]); // 801CAA1C
  c->r[3]=c->r[5]+0x00030000u; // 801CAA20
  c->r[5]=c->r[31]+c->r[0]; // 801CAA24
  c->r[0]=rotl(c->r[6],4)&0x00000FF0u; // 801CAA28
  W32(c->r[3]+0xFFFF888Cu,c->r[4]); // 801CAA2C
  c->r[6]=c->r[6]+0x00000001u; // 801CAA30
  W32(c->r[3]+0xFFFF890Cu,c->r[4]); // 801CAA34
  W32(c->r[3]+0xFFFF8890u,c->r[4]); // 801CAA38
  W32(c->r[3]+0xFFFF8910u,c->r[4]); // 801CAA3C
  W32(c->r[3]+0xFFFF8894u,c->r[4]); // 801CAA40
  W32(c->r[3]+0xFFFF8914u,c->r[4]); // 801CAA44
  W32(c->r[3]+0xFFFF8898u,c->r[4]); // 801CAA48
  W32(c->r[3]+0xFFFF8918u,c->r[4]); // 801CAA4C
  c->r[3]=c->r[5]+0x00030000u; // 801CAA50
  c->r[5]=c->r[31]+c->r[0]; // 801CAA54
  W32(c->r[3]+0xFFFF888Cu,c->r[4]); // 801CAA58
  W32(c->r[3]+0xFFFF890Cu,c->r[4]); // 801CAA5C
  W32(c->r[3]+0xFFFF8890u,c->r[4]); // 801CAA60
  W32(c->r[3]+0xFFFF8910u,c->r[4]); // 801CAA64
  W32(c->r[3]+0xFFFF8894u,c->r[4]); // 801CAA68
  W32(c->r[3]+0xFFFF8914u,c->r[4]); // 801CAA6C
  W32(c->r[3]+0xFFFF8898u,c->r[4]); // 801CAA70
  W32(c->r[3]+0xFFFF8918u,c->r[4]); // 801CAA74
  c->r[3]=c->r[5]+0x00030000u; // 801CAA78
  W32(c->r[3]+0xFFFF888Cu,c->r[4]); // 801CAA7C
  W32(c->r[3]+0xFFFF890Cu,c->r[4]); // 801CAA80
  W32(c->r[3]+0xFFFF8890u,c->r[4]); // 801CAA84
  W32(c->r[3]+0xFFFF8910u,c->r[4]); // 801CAA88
  W32(c->r[3]+0xFFFF8894u,c->r[4]); // 801CAA8C
  W32(c->r[3]+0xFFFF8914u,c->r[4]); // 801CAA90
  W32(c->r[3]+0xFFFF8898u,c->r[4]); // 801CAA94
  W32(c->r[3]+0xFFFF8918u,c->r[4]); // 801CAA98
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CA9DC; } // 801CAA9C
  c->r[0]=0u+0x00000003u; // 801CAAA0
  c->r[10]=0u+0x00000000u; // 801CAAA4
  c->r[7]=0u+0x00000000u; // 801CAAA8
  c->ctr=c->r[0]; // 801CAAAC
L_801CAAB0:;
  c->r[0]=rotl(c->r[10],2)&0x000003FCu; // 801CAAB0
  c->r[4]=rotl(c->r[10],1)&0x000001FEu; // 801CAAB4
  c->r[8]=c->r[31]+c->r[0]; // 801CAAB8
  c->r[6]=c->r[8]+0x00030000u; // 801CAABC
  c->r[0]=rotl(c->r[10],4)&0x00000FF0u; // 801CAAC0
  c->r[4]=c->r[4]+0x00030000u; // 801CAAC4
  W32(c->r[6]+0xFFFF8A1Cu,c->r[7]); // 801CAAC8
  c->r[9]=c->r[31]+c->r[0]; // 801CAACC
  c->r[10]=c->r[10]+0x00000001u; // 801CAAD0
  c->r[5]=c->r[4]+0xFFFF8A64u; // 801CAAD4
  W32(c->r[6]+0xFFFF8A40u,c->r[7]); // 801CAAD8
  c->r[3]=c->r[9]+0x00030000u; // 801CAADC
  c->r[0]=rotl(c->r[10],2)&0x000003FCu; // 801CAAE0
  W16(c->r[31]+c->r[5],c->r[7]); // 801CAAE4
  c->r[8]=c->r[31]+c->r[0]; // 801CAAE8
  c->r[4]=rotl(c->r[10],1)&0x000001FEu; // 801CAAEC
  c->r[0]=rotl(c->r[10],4)&0x00000FF0u; // 801CAAF0
  W32(c->r[3]+0xFFFF898Cu,c->r[7]); // 801CAAF4
  c->r[4]=c->r[4]+0x00030000u; // 801CAAF8
  c->r[6]=c->r[8]+0x00030000u; // 801CAAFC
  c->r[9]=c->r[31]+c->r[0]; // 801CAB00
  W32(c->r[3]+0xFFFF8990u,c->r[7]); // 801CAB04
  c->r[10]=c->r[10]+0x00000001u; // 801CAB08
  c->r[5]=c->r[4]+0xFFFF8A64u; // 801CAB0C
  W16(c->r[3]+0xFFFF8994u,c->r[7]); // 801CAB10
  c->r[0]=rotl(c->r[10],2)&0x000003FCu; // 801CAB14
  c->r[8]=c->r[31]+c->r[0]; // 801CAB18
  c->r[4]=rotl(c->r[10],1)&0x000001FEu; // 801CAB1C
  W16(c->r[3]+0xFFFF8996u,c->r[7]); // 801CAB20
  c->r[0]=rotl(c->r[10],4)&0x00000FF0u; // 801CAB24
  c->r[4]=c->r[4]+0x00030000u; // 801CAB28
  c->r[10]=c->r[10]+0x00000001u; // 801CAB2C
  W16(c->r[3]+0xFFFF8998u,c->r[7]); // 801CAB30
  W16(c->r[3]+0xFFFF899Au,c->r[7]); // 801CAB34
  c->r[3]=c->r[9]+0x00030000u; // 801CAB38
  c->r[9]=c->r[31]+c->r[0]; // 801CAB3C
  W32(c->r[6]+0xFFFF8A1Cu,c->r[7]); // 801CAB40
  W32(c->r[6]+0xFFFF8A40u,c->r[7]); // 801CAB44
  c->r[6]=c->r[8]+0x00030000u; // 801CAB48
  W16(c->r[31]+c->r[5],c->r[7]); // 801CAB4C
  c->r[5]=c->r[4]+0xFFFF8A64u; // 801CAB50
  W32(c->r[3]+0xFFFF898Cu,c->r[7]); // 801CAB54
  W32(c->r[3]+0xFFFF8990u,c->r[7]); // 801CAB58
  W16(c->r[3]+0xFFFF8994u,c->r[7]); // 801CAB5C
  W16(c->r[3]+0xFFFF8996u,c->r[7]); // 801CAB60
  W16(c->r[3]+0xFFFF8998u,c->r[7]); // 801CAB64
  W16(c->r[3]+0xFFFF899Au,c->r[7]); // 801CAB68
  c->r[3]=c->r[9]+0x00030000u; // 801CAB6C
  W32(c->r[6]+0xFFFF8A1Cu,c->r[7]); // 801CAB70
  W32(c->r[6]+0xFFFF8A40u,c->r[7]); // 801CAB74
  W16(c->r[31]+c->r[5],c->r[7]); // 801CAB78
  W32(c->r[3]+0xFFFF898Cu,c->r[7]); // 801CAB7C
  W32(c->r[3]+0xFFFF8990u,c->r[7]); // 801CAB80
  W16(c->r[3]+0xFFFF8994u,c->r[7]); // 801CAB84
  W16(c->r[3]+0xFFFF8996u,c->r[7]); // 801CAB88
  W16(c->r[3]+0xFFFF8998u,c->r[7]); // 801CAB8C
  W16(c->r[3]+0xFFFF899Au,c->r[7]); // 801CAB90
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CAAB0; } // 801CAB94
  c->r[4]=0u+0x00010000u; // 801CAB98
  c->r[3]=c->r[31]+0x00030000u; // 801CAB9C
  c->r[0]=c->r[4]+0xFFFFFFF0u; // 801CABA0
  W16(c->r[3]+0xFFFF8A7Cu,c->r[0]); // 801CABA4
  c->r[6]=c->r[31]|c->r[31]; // 801CABA8
  c->r[3]=0u+0x00000000u; // 801CABAC
  c->r[4]=0u+0x00000040u; // 801CABB0
  c->r[5]=0u+0x00000030u; // 801CABB4
  c->lr=0x801CABBCu; f_801CA790(c); // 801CABB8
  c->r[6]=c->r[31]+0x00000E40u; // 801CABBC
  c->r[3]=0u+0x00000001u; // 801CABC0
  c->r[4]=0u+0x00000080u; // 801CABC4
  c->r[5]=0u+0x0000001Au; // 801CABC8
  c->lr=0x801CABD0u; f_801CA790(c); // 801CABCC
  c->r[6]=c->r[31]+0x00001C78u; // 801CABD0
  c->r[3]=0u+0x00000002u; // 801CABD4
  c->r[4]=0u+0x00000294u; // 801CABD8
  c->r[5]=0u+0x0000002Du; // 801CABDC
  c->lr=0x801CABE4u; f_801CA790(c); // 801CABE0
  c->r[6]=c->r[31]+0x00010000u; // 801CABE4
  c->r[3]=0u+0x00000003u; // 801CABE8
  c->r[4]=0u+0x00000708u; // 801CABEC
  c->r[5]=0u+0x0000001Eu; // 801CABF0
  c->r[6]=c->r[6]+0xFFFF9298u; // 801CABF4
  c->lr=0x801CABFCu; f_801CA790(c); // 801CABF8
  c->r[6]=c->r[31]+0x00010000u; // 801CABFC
  c->r[3]=0u+0x00000004u; // 801CAC00
  c->r[4]=0u+0x00002000u; // 801CAC04
  c->r[5]=0u+0x00000009u; // 801CAC08
  c->r[6]=c->r[6]+0x000066F0u; // 801CAC0C
  c->lr=0x801CAC14u; f_801CA790(c); // 801CAC10
  c->r[6]=c->r[31]+0x00030000u; // 801CAC14
  c->r[0]=0u+0x00000000u; // 801CAC18
  W8(c->r[6]+0xFFFF8A7Eu,c->r[0]); // 801CAC1C
  c->r[0]=0u+0x00000001u; // 801CAC20
  c->r[5]=0u+0x00000002u; // 801CAC24
  c->r[4]=0u+0x00000003u; // 801CAC28
  W8(c->r[6]+0xFFFF8A7Fu,c->r[0]); // 801CAC2C
  c->r[3]=0u+0x00000004u; // 801CAC30
  c->r[0]=0u+0x00000005u; // 801CAC34
  W8(c->r[6]+0xFFFF8A80u,c->r[5]); // 801CAC38
  W8(c->r[6]+0xFFFF8A81u,c->r[4]); // 801CAC3C
  W8(c->r[6]+0xFFFF8A82u,c->r[3]); // 801CAC40
  W8(c->r[6]+0xFFFF8A87u,c->r[0]); // 801CAC44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CAC48
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CAC4C
  c->lr=c->r[0]; // 801CAC50
  c->r[1]=c->r[1]+0x00000010u; // 801CAC54
  return; // 801CAC58
}

// GKI_init_q
void f_801CAC60(Ctx* __restrict c) {
  trace_call(0x801CAC60u);
  c->r[0]=0u+0x00000000u; // 801CAC60
  W32(c->r[3]+0x00000004u,c->r[0]); // 801CAC64
  W32(c->r[3]+0x00000000u,c->r[0]); // 801CAC68
  W16(c->r[3]+0x00000008u,c->r[0]); // 801CAC6C
  return; // 801CAC70
}

// GKI_getbuf
void f_801CAC80(Ctx* __restrict c) {
  trace_call(0x801CAC80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CAC80
  c->r[0]=c->lr; // 801CAC84
  c->r[4]=0u+0x80450000u; // 801CAC88
  cmps(c,0,(int32_t)c->r[3],0); // 801CAC8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CAC90
  c->r[4]=c->r[4]+0x00006C20u; // 801CAC94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CAC98
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CAC9C
  c->r[30]=c->r[4]+0x00000054u; // 801CACA0
  if (!crb(c,2)) { goto L_801CACC8; } // 801CACA4
  c->r[3]=0u+0x00010000u; // 801CACA8
  c->r[4]=0u+0x803A0000u; // 801CACAC
  c->r[0]=c->r[3]+0xFFFFFFF6u; // 801CACB0
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801CACB4
  c->r[4]=c->r[4]+0xFFFFE1A8u; // 801CACB8
  c->lr=0x801CACC0u; f_801CC480(c); // 801CACBC
  c->r[3]=0u+0x00000000u; // 801CACC0
  goto L_801CAE08; // 801CACC4
L_801CACC8:;
  c->r[4]=c->r[30]+0x00030000u; // 801CACC8
  c->r[31]=0u+0x00000000u; // 801CACCC
  c->r[5]=R8(c->r[4]+0xFFFF8A87u); // 801CACD0
  goto L_801CAD04; // 801CACD4
L_801CACD8:;
  c->r[4]=rotl(c->r[31],0)&0x000000FFu; // 801CACD8
  c->r[4]=c->r[4]+0x00030000u; // 801CACDC
  c->r[0]=c->r[4]+0xFFFF8A7Eu; // 801CACE0
  c->r[0]=R8(c->r[30]+c->r[0]); // 801CACE4
  c->r[4]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801CACE8
  c->r[4]=c->r[4]+0x00030000u; // 801CACEC
  c->r[0]=c->r[4]+0xFFFF8994u; // 801CACF0
  c->r[0]=R16(c->r[30]+c->r[0]); // 801CACF4
  cmpu(c,0,c->r[3],c->r[0]); // 801CACF8
  if (!crb(c,1)) { goto L_801CAD10; } // 801CACFC
  c->r[31]=c->r[31]+0x00000001u; // 801CAD00
L_801CAD04:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801CAD04
  cmpu(c,0,c->r[0],c->r[5]); // 801CAD08
  if (crb(c,0)) { IRQCHK(c); goto L_801CACD8; } // 801CAD0C
L_801CAD10:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801CAD10
  cmpu(c,0,c->r[0],c->r[5]); // 801CAD14
  if (!crb(c,2)) { goto L_801CAD3C; } // 801CAD18
  c->r[3]=0u+0x00010000u; // 801CAD1C
  c->r[4]=0u+0x803A0000u; // 801CAD20
  c->r[0]=c->r[3]+0xFFFFFFF7u; // 801CAD24
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801CAD28
  c->r[4]=c->r[4]+0xFFFFE1C0u; // 801CAD2C
  c->lr=0x801CAD34u; f_801CC480(c); // 801CAD30
  c->r[3]=0u+0x00000000u; // 801CAD34
  goto L_801CAE08; // 801CAD38
L_801CAD3C:;
  c->lr=0x801CAD40u; f_801CC430(c); // 801CAD3C
  c->r[6]=c->r[30]+0x00030000u; // 801CAD40
  c->r[5]=0u+0x00000001u; // 801CAD44
  c->r[7]=R8(c->r[6]+0xFFFF8A87u); // 801CAD48
  goto L_801CADF4; // 801CAD4C
L_801CAD50:;
  c->r[4]=rotl(c->r[31],0)&0x000000FFu; // 801CAD50
  c->r[3]=R16(c->r[6]+0xFFFF8A7Cu); // 801CAD54
  c->r[4]=c->r[4]+0x00030000u; // 801CAD58
  c->r[0]=c->r[4]+0xFFFF8A7Eu; // 801CAD5C
  c->r[4]=R8(c->r[30]+c->r[0]); // 801CAD60
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[5]<<((c->r[4])&31)); // 801CAD64
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 801CAD68
  if (!crb(c,2)) { goto L_801CADF0; } // 801CAD6C
  c->r[0]=rotl(c->r[4],4)&0x00000FF0u; // 801CAD70
  c->r[4]=c->r[6]+c->r[0]; // 801CAD74
  c->r[3]=R16(c->r[4]+0xFFFF8998u); // 801CAD78
  c->r[0]=R16(c->r[4]+0xFFFF8996u); // 801CAD7C
  cmpu(c,0,c->r[3],c->r[0]); // 801CAD80
  if (!crb(c,0)) { goto L_801CADF0; } // 801CAD84
  c->r[30]=R32(c->r[4]+0xFFFF898Cu); // 801CAD88
  c->r[0]=R32(c->r[30]+0x00000000u); // 801CAD8C
  W32(c->r[4]+0xFFFF898Cu,c->r[0]); // 801CAD90
  cmps(c,0,(int32_t)c->r[0],0); // 801CAD94
  if (!crb(c,2)) { goto L_801CADA4; } // 801CAD98
  c->r[0]=0u+0x00000000u; // 801CAD9C
  W32(c->r[4]+0xFFFF8990u,c->r[0]); // 801CADA0
L_801CADA4:;
  c->r[3]=R16(c->r[4]+0xFFFF8998u); // 801CADA4
  c->r[0]=c->r[3]+0x00000001u; // 801CADA8
  W16(c->r[4]+0xFFFF8998u,c->r[0]); // 801CADAC
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801CADB0
  c->r[0]=R16(c->r[4]+0xFFFF899Au); // 801CADB4
  cmpu(c,0,c->r[3],c->r[0]); // 801CADB8
  if (!crb(c,1)) { goto L_801CADC8; } // 801CADBC
  c->r[0]=R16(c->r[4]+0xFFFF8998u); // 801CADC0
  W16(c->r[4]+0xFFFF899Au,c->r[0]); // 801CADC4
L_801CADC8:;
  c->lr=0x801CADCCu; f_801CC400(c); // 801CADC8
  c->lr=0x801CADD0u; f_801CC3F0(c); // 801CADCC
  W8(c->r[30]+0x00000005u,c->r[3]); // 801CADD0
  c->r[4]=0u+0x00000001u; // 801CADD4
  c->r[0]=0u+0x00000000u; // 801CADD8
  c->r[3]=c->r[30]+0x00000008u; // 801CADDC
  W8(c->r[30]+0x00000006u,c->r[4]); // 801CADE0
  W32(c->r[30]+0x00000000u,c->r[0]); // 801CADE4
  W8(c->r[30]+0x00000007u,c->r[0]); // 801CADE8
  goto L_801CAE08; // 801CADEC
L_801CADF0:;
  c->r[31]=c->r[31]+0x00000001u; // 801CADF0
L_801CADF4:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801CADF4
  cmpu(c,0,c->r[0],c->r[7]); // 801CADF8
  if (crb(c,0)) { IRQCHK(c); goto L_801CAD50; } // 801CADFC
  c->lr=0x801CAE04u; f_801CC400(c); // 801CAE00
  c->r[3]=0u+0x00000000u; // 801CAE04
L_801CAE08:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CAE08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CAE0C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CAE10
  c->lr=c->r[0]; // 801CAE14
  c->r[1]=c->r[1]+0x00000010u; // 801CAE18
  return; // 801CAE1C
}

// GKI_getpoolbuf
void f_801CAE20(Ctx* __restrict c) {
  trace_call(0x801CAE20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CAE20
  c->r[0]=c->lr; // 801CAE24
  c->r[4]=0u+0x80450000u; // 801CAE28
  cmpu(c,0,c->r[3],0x00000009u); // 801CAE2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CAE30
  c->r[4]=c->r[4]+0x00006C20u; // 801CAE34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CAE38
  c->r[31]=c->r[3]|c->r[3]; // 801CAE3C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CAE40
  c->r[30]=c->r[4]+0x00000054u; // 801CAE44
  if (crb(c,0)) { goto L_801CAE54; } // 801CAE48
  c->r[3]=0u+0x00000000u; // 801CAE4C
  goto L_801CAEF0; // 801CAE50
L_801CAE54:;
  c->lr=0x801CAE58u; f_801CC430(c); // 801CAE54
  c->r[31]=rotl(c->r[31],4)&0x00000FF0u; // 801CAE58
  c->r[0]=c->r[30]+0x00030000u; // 801CAE5C
  c->r[4]=c->r[0]+c->r[31]; // 801CAE60
  c->r[3]=R16(c->r[4]+0xFFFF8998u); // 801CAE64
  c->r[0]=R16(c->r[4]+0xFFFF8996u); // 801CAE68
  cmpu(c,0,c->r[3],c->r[0]); // 801CAE6C
  if (!crb(c,0)) { goto L_801CAEDC; } // 801CAE70
  c->r[31]=R32(c->r[4]+0xFFFF898Cu); // 801CAE74
  c->r[0]=R32(c->r[31]+0x00000000u); // 801CAE78
  W32(c->r[4]+0xFFFF898Cu,c->r[0]); // 801CAE7C
  cmps(c,0,(int32_t)c->r[0],0); // 801CAE80
  if (!crb(c,2)) { goto L_801CAE90; } // 801CAE84
  c->r[0]=0u+0x00000000u; // 801CAE88
  W32(c->r[4]+0xFFFF8990u,c->r[0]); // 801CAE8C
L_801CAE90:;
  c->r[3]=R16(c->r[4]+0xFFFF8998u); // 801CAE90
  c->r[0]=c->r[3]+0x00000001u; // 801CAE94
  W16(c->r[4]+0xFFFF8998u,c->r[0]); // 801CAE98
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801CAE9C
  c->r[0]=R16(c->r[4]+0xFFFF899Au); // 801CAEA0
  cmpu(c,0,c->r[3],c->r[0]); // 801CAEA4
  if (!crb(c,1)) { goto L_801CAEB4; } // 801CAEA8
  c->r[0]=R16(c->r[4]+0xFFFF8998u); // 801CAEAC
  W16(c->r[4]+0xFFFF899Au,c->r[0]); // 801CAEB0
L_801CAEB4:;
  c->lr=0x801CAEB8u; f_801CC400(c); // 801CAEB4
  c->lr=0x801CAEBCu; f_801CC3F0(c); // 801CAEB8
  W8(c->r[31]+0x00000005u,c->r[3]); // 801CAEBC
  c->r[4]=0u+0x00000001u; // 801CAEC0
  c->r[0]=0u+0x00000000u; // 801CAEC4
  c->r[3]=c->r[31]+0x00000008u; // 801CAEC8
  W8(c->r[31]+0x00000006u,c->r[4]); // 801CAECC
  W32(c->r[31]+0x00000000u,c->r[0]); // 801CAED0
  W8(c->r[31]+0x00000007u,c->r[0]); // 801CAED4
  goto L_801CAEF0; // 801CAED8
L_801CAEDC:;
  c->lr=0x801CAEE0u; f_801CC400(c); // 801CAEDC
  c->r[0]=c->r[30]+0x00030000u; // 801CAEE0
  c->r[3]=c->r[0]+c->r[31]; // 801CAEE4
  c->r[3]=R16(c->r[3]+0xFFFF8994u); // 801CAEE8
  c->lr=0x801CAEF0u; f_801CAC80(c); // 801CAEEC
L_801CAEF0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CAEF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CAEF4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CAEF8
  c->lr=c->r[0]; // 801CAEFC
  c->r[1]=c->r[1]+0x00000010u; // 801CAF00
  return; // 801CAF04
}

// GKI_freebuf
void f_801CAF10(Ctx* __restrict c) {
  trace_call(0x801CAF10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CAF10
  c->r[0]=c->lr; // 801CAF14
  c->r[5]=0u+0x803A0000u; // 801CAF18
  cmps(c,0,(int32_t)c->r[3],0); // 801CAF1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CAF20
  c->r[5]=c->r[5]+0xFFFFE1A8u; // 801CAF24
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CAF28
  if (crb(c,2)) { goto L_801CAFA8; } // 801CAF2C
  c->r[31]=c->r[3]+0xFFFFFFF8u; // 801CAF30
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 801CAF34
  if (crb(c,2)) { goto L_801CAF44; } // 801CAF38
  c->r[0]=0u+0x00000000u; // 801CAF3C
  goto L_801CAF70; // 801CAF40
L_801CAF44:;
  c->r[0]=R8(c->r[31]+0x00000004u); // 801CAF44
  cmpu(c,0,c->r[0],0x00000009u); // 801CAF48
  if (!crb(c,0)) { goto L_801CAF6C; } // 801CAF4C
  c->r[4]=0u+0x80450000u; // 801CAF50
  c->r[0]=rotl(c->r[0],4)&0x00000FF0u; // 801CAF54
  c->r[4]=c->r[4]+0x00006C20u; // 801CAF58
  c->r[4]=c->r[4]+0x00030000u; // 801CAF5C
  c->r[4]=c->r[4]+c->r[0]; // 801CAF60
  c->r[0]=R16(c->r[4]+0xFFFF89E8u); // 801CAF64
  goto L_801CAF70; // 801CAF68
L_801CAF6C:;
  c->r[0]=0u+0x00000000u; // 801CAF6C
L_801CAF70:;
  c->r[4]=c->r[3]+c->r[0]; // 801CAF70
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 801CAF74
  if (crb(c,2)) { goto L_801CAF84; } // 801CAF78
  c->r[0]=0u+0x00000001u; // 801CAF7C
  goto L_801CAFA0; // 801CAF80
L_801CAF84:;
  c->r[3]=0u+0xDDBB0000u; // 801CAF84
  c->r[4]=R32(c->r[4]+0x00000000u); // 801CAF88
  c->r[0]=c->r[3]+0xFFFFDDBAu; // 801CAF8C
  c->r[3]=c->r[0]-c->r[4]; // 801CAF90
  c->r[0]=c->r[4]-c->r[0]; // 801CAF94
  c->r[0]=c->r[3]|c->r[0]; // 801CAF98
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801CAF9C
L_801CAFA0:;
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; cr0(c,c->r[0]); // 801CAFA0
  if (crb(c,2)) { goto L_801CAFC0; } // 801CAFA4
L_801CAFA8:;
  c->r[3]=0u+0x00010000u; // 801CAFA8
  c->r[4]=c->r[5]+0x00000030u; // 801CAFAC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801CAFB0
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801CAFB4
  c->lr=0x801CAFBCu; f_801CC480(c); // 801CAFB8
  goto L_801CB06C; // 801CAFBC
L_801CAFC0:;
  c->r[0]=R8(c->r[31]+0x00000006u); // 801CAFC0
  cmpu(c,0,c->r[0],0x00000001u); // 801CAFC4
  if (crb(c,2)) { goto L_801CAFE4; } // 801CAFC8
  c->r[3]=0u+0x00010000u; // 801CAFCC
  c->r[4]=c->r[5]+0x00000048u; // 801CAFD0
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 801CAFD4
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801CAFD8
  c->lr=0x801CAFE0u; f_801CC480(c); // 801CAFDC
  goto L_801CB06C; // 801CAFE0
L_801CAFE4:;
  c->r[0]=R8(c->r[31]+0x00000004u); // 801CAFE4
  cmpu(c,0,c->r[0],0x00000009u); // 801CAFE8
  if (crb(c,0)) { goto L_801CB008; } // 801CAFEC
  c->r[3]=0u+0x00010000u; // 801CAFF0
  c->r[4]=c->r[5]+0x0000005Cu; // 801CAFF4
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 801CAFF8
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801CAFFC
  c->lr=0x801CB004u; f_801CC480(c); // 801CB000
  goto L_801CB06C; // 801CB004
L_801CB008:;
  c->lr=0x801CB00Cu; f_801CC430(c); // 801CB008
  c->r[0]=R8(c->r[31]+0x00000004u); // 801CB00C
  c->r[3]=0u+0x80450000u; // 801CB010
  c->r[3]=c->r[3]+0x00006C20u; // 801CB014
  c->r[3]=c->r[3]+0x00030000u; // 801CB018
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801CB01C
  c->r[4]=c->r[3]+c->r[0]; // 801CB020
  c->r[3]=R32(c->r[4]+0xFFFF89E4u); // 801CB024
  cmps(c,0,(int32_t)c->r[3],0); // 801CB028
  if (crb(c,2)) { goto L_801CB038; } // 801CB02C
  W32(c->r[3]+0x00000000u,c->r[31]); // 801CB030
  goto L_801CB03C; // 801CB034
L_801CB038:;
  W32(c->r[4]+0xFFFF89E0u,c->r[31]); // 801CB038
L_801CB03C:;
  W32(c->r[4]+0xFFFF89E4u,c->r[31]); // 801CB03C
  c->r[3]=0u+0x00000000u; // 801CB040
  c->r[0]=0u+0x000000F0u; // 801CB044
  W32(c->r[31]+0x00000000u,c->r[3]); // 801CB048
  W8(c->r[31]+0x00000006u,c->r[3]); // 801CB04C
  W8(c->r[31]+0x00000005u,c->r[0]); // 801CB050
  c->r[3]=R16(c->r[4]+0xFFFF89ECu); // 801CB054
  cmps(c,0,(int32_t)c->r[3],0); // 801CB058
  if (crb(c,2)) { goto L_801CB068; } // 801CB05C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801CB060
  W16(c->r[4]+0xFFFF89ECu,c->r[0]); // 801CB064
L_801CB068:;
  c->lr=0x801CB06Cu; f_801CC400(c); // 801CB068
L_801CB06C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CB06C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CB070
  c->lr=c->r[0]; // 801CB074
  c->r[1]=c->r[1]+0x00000010u; // 801CB078
  return; // 801CB07C
}

// GKI_get_buf_size
void f_801CB080(Ctx* __restrict c) {
  trace_call(0x801CB080u);
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 801CB080
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 801CB084
  if (crb(c,2)) { goto L_801CB094; } // 801CB088
  c->r[3]=0u+0x00000000u; // 801CB08C
  return; // 801CB090
L_801CB094:;
  c->r[0]=R8(c->r[3]+0x00000004u); // 801CB094
  cmpu(c,0,c->r[0],0x00000009u); // 801CB098
  if (!crb(c,0)) { goto L_801CB0BC; } // 801CB09C
  c->r[3]=0u+0x80450000u; // 801CB0A0
  c->r[0]=rotl(c->r[0],4)&0x00000FF0u; // 801CB0A4
  c->r[3]=c->r[3]+0x00006C20u; // 801CB0A8
  c->r[3]=c->r[3]+0x00030000u; // 801CB0AC
  c->r[3]=c->r[3]+c->r[0]; // 801CB0B0
  c->r[3]=R16(c->r[3]+0xFFFF89E8u); // 801CB0B4
  return; // 801CB0B8
L_801CB0BC:;
  c->r[3]=0u+0x00000000u; // 801CB0BC
  return; // 801CB0C0
}

// GKI_send_msg
void f_801CB0D0(Ctx* __restrict c) {
  trace_call(0x801CB0D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB0D0
  c->r[0]=c->lr; // 801CB0D4
  c->r[7]=0u+0x80450000u; // 801CB0D8
  c->r[6]=0u+0x803A0000u; // 801CB0DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CB0E0
  cmpu(c,0,c->r[3],0x00000008u); // 801CB0E4
  c->r[7]=c->r[7]+0x00006C20u; // 801CB0E8
  c->r[6]=c->r[6]+0xFFFFE1A8u; // 801CB0EC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CB0F0
  c->r[31]=c->r[5]|c->r[5]; // 801CB0F4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CB0F8
  c->r[30]=c->r[7]+0x00000054u; // 801CB0FC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CB100
  c->r[29]=c->r[4]|c->r[4]; // 801CB104
  W32(c->r[1]+0x00000010u,c->r[28]); // 801CB108
  c->r[28]=c->r[3]|c->r[3]; // 801CB10C
  if (!crb(c,0)) { goto L_801CB130; } // 801CB110
  cmpu(c,0,c->r[4],0x00000004u); // 801CB114
  if (!crb(c,0)) { goto L_801CB130; } // 801CB118
  c->r[0]=c->r[30]+0x00030000u; // 801CB11C
  c->r[3]=c->r[0]+c->r[3]; // 801CB120
  c->r[0]=R8(c->r[3]+0xFFFF87ACu); // 801CB124
  cmps(c,0,(int32_t)c->r[0],0); // 801CB128
  if (!crb(c,2)) { goto L_801CB150; } // 801CB12C
L_801CB130:;
  c->r[3]=0u+0x00010000u; // 801CB130
  c->r[4]=c->r[6]+0x00000068u; // 801CB134
  c->r[0]=c->r[3]+0xFFFFFFFBu; // 801CB138
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801CB13C
  c->lr=0x801CB144u; f_801CC480(c); // 801CB140
  c->r[3]=c->r[31]|c->r[31]; // 801CB144
  c->lr=0x801CB14Cu; f_801CAF10(c); // 801CB148
  goto L_801CB26C; // 801CB14C
L_801CB150:;
  c->r[31]=c->r[5]+0xFFFFFFF8u; // 801CB150
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 801CB154
  if (crb(c,2)) { goto L_801CB164; } // 801CB158
  c->r[0]=0u+0x00000000u; // 801CB15C
  goto L_801CB188; // 801CB160
L_801CB164:;
  c->r[0]=R8(c->r[31]+0x00000004u); // 801CB164
  cmpu(c,0,c->r[0],0x00000009u); // 801CB168
  if (!crb(c,0)) { goto L_801CB184; } // 801CB16C
  c->r[3]=c->r[7]+0x00030000u; // 801CB170
  c->r[0]=rotl(c->r[0],4)&0x00000FF0u; // 801CB174
  c->r[3]=c->r[3]+c->r[0]; // 801CB178
  c->r[0]=R16(c->r[3]+0xFFFF89E8u); // 801CB17C
  goto L_801CB188; // 801CB180
L_801CB184:;
  c->r[0]=0u+0x00000000u; // 801CB184
L_801CB188:;
  c->r[4]=c->r[5]+c->r[0]; // 801CB188
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 801CB18C
  if (crb(c,2)) { goto L_801CB19C; } // 801CB190
  c->r[0]=0u+0x00000001u; // 801CB194
  goto L_801CB1B8; // 801CB198
L_801CB19C:;
  c->r[3]=0u+0xDDBB0000u; // 801CB19C
  c->r[4]=R32(c->r[4]+0x00000000u); // 801CB1A0
  c->r[0]=c->r[3]+0xFFFFDDBAu; // 801CB1A4
  c->r[3]=c->r[0]-c->r[4]; // 801CB1A8
  c->r[0]=c->r[4]-c->r[0]; // 801CB1AC
  c->r[0]=c->r[3]|c->r[0]; // 801CB1B0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801CB1B4
L_801CB1B8:;
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; cr0(c,c->r[0]); // 801CB1B8
  if (crb(c,2)) { goto L_801CB1D8; } // 801CB1BC
  c->r[3]=0u+0x00010000u; // 801CB1C0
  c->r[4]=c->r[6]+0x00000080u; // 801CB1C4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801CB1C8
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801CB1CC
  c->lr=0x801CB1D4u; f_801CC480(c); // 801CB1D0
  goto L_801CB26C; // 801CB1D4
L_801CB1D8:;
  c->r[0]=R8(c->r[31]+0x00000006u); // 801CB1D8
  cmpu(c,0,c->r[0],0x00000001u); // 801CB1DC
  if (crb(c,2)) { goto L_801CB1FC; } // 801CB1E0
  c->r[3]=0u+0x00010000u; // 801CB1E4
  c->r[4]=c->r[6]+0x00000098u; // 801CB1E8
  c->r[0]=c->r[3]+0xFFFFFFFAu; // 801CB1EC
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801CB1F0
  c->lr=0x801CB1F8u; f_801CC480(c); // 801CB1F4
  goto L_801CB26C; // 801CB1F8
L_801CB1FC:;
  c->lr=0x801CB200u; f_801CC430(c); // 801CB1FC
  c->r[4]=rotl(c->r[28],4)&0x00000FF0u; // 801CB200
  c->r[0]=c->r[30]+0x00030000u; // 801CB204
  c->r[5]=rotl(c->r[29],2)&0x000003FCu; // 801CB208
  c->r[0]=c->r[0]+c->r[4]; // 801CB20C
  c->r[3]=c->r[0]+c->r[5]; // 801CB210
  c->r[0]=R32(c->r[3]+0xFFFF888Cu); // 801CB214
  cmps(c,0,(int32_t)c->r[0],0); // 801CB218
  if (crb(c,2)) { goto L_801CB22C; } // 801CB21C
  c->r[3]=R32(c->r[3]+0xFFFF890Cu); // 801CB220
  W32(c->r[3]+0x00000000u,c->r[31]); // 801CB224
  goto L_801CB230; // 801CB228
L_801CB22C:;
  W32(c->r[3]+0xFFFF888Cu,c->r[31]); // 801CB22C
L_801CB230:;
  c->r[0]=c->r[30]+0x00030000u; // 801CB230
  c->r[3]=0u+0x00000000u; // 801CB234
  c->r[4]=c->r[0]+c->r[4]; // 801CB238
  c->r[4]=c->r[4]+c->r[5]; // 801CB23C
  c->r[0]=0u+0x00000002u; // 801CB240
  W32(c->r[4]+0xFFFF890Cu,c->r[31]); // 801CB244
  W32(c->r[31]+0x00000000u,c->r[3]); // 801CB248
  W8(c->r[31]+0x00000006u,c->r[0]); // 801CB24C
  W8(c->r[31]+0x00000005u,c->r[28]); // 801CB250
  c->lr=0x801CB258u; f_801CC400(c); // 801CB254
  c->r[0]=0u+0x00000001u; // 801CB258
  c->r[3]=c->r[28]|c->r[28]; // 801CB25C
  c->r[0]=((c->r[29])&0x20)?0u:(c->r[0]<<((c->r[29])&31)); // 801CB260
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801CB264
  c->lr=0x801CB26Cu; f_801CC340(c); // 801CB268
L_801CB26C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CB26C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CB270
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CB274
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CB278
  c->r[28]=R32(c->r[1]+0x00000010u); // 801CB27C
  c->lr=c->r[0]; // 801CB280
  c->r[1]=c->r[1]+0x00000020u; // 801CB284
  return; // 801CB288
}

// GKI_read_mbox
void f_801CB290(Ctx* __restrict c) {
  trace_call(0x801CB290u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB290
  c->r[0]=c->lr; // 801CB294
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CB298
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CB29C
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CB2A0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CB2A4
  c->r[29]=c->r[3]|c->r[3]; // 801CB2A8
  c->lr=0x801CB2B0u; f_801CC3F0(c); // 801CB2AC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801CB2B0
  c->r[31]=c->r[3]|c->r[3]; // 801CB2B4
  cmpu(c,0,c->r[0],0x00000008u); // 801CB2B8
  c->r[30]=0u+0x00000000u; // 801CB2BC
  if (!crb(c,0)) { goto L_801CB2CC; } // 801CB2C0
  cmpu(c,0,c->r[29],0x00000004u); // 801CB2C4
  if (crb(c,0)) { goto L_801CB2D4; } // 801CB2C8
L_801CB2CC:;
  c->r[3]=0u+0x00000000u; // 801CB2CC
  goto L_801CB324; // 801CB2D0
L_801CB2D4:;
  c->lr=0x801CB2D8u; f_801CC430(c); // 801CB2D4
  c->r[3]=0u+0x80450000u; // 801CB2D8
  c->r[4]=rotl(c->r[31],4)&0x00000FF0u; // 801CB2DC
  c->r[3]=c->r[3]+0x00006C20u; // 801CB2E0
  c->r[5]=rotl(c->r[29],2)&0x000003FCu; // 801CB2E4
  c->r[0]=c->r[3]+0x00030000u; // 801CB2E8
  c->r[3]=c->r[0]+c->r[4]; // 801CB2EC
  c->r[6]=c->r[3]+0xFFFF88E0u; // 801CB2F0
  c->r[4]=R32(c->r[6]+c->r[5]); // 801CB2F4
  cmps(c,0,(int32_t)c->r[4],0); // 801CB2F8
  if (crb(c,2)) { goto L_801CB31C; } // 801CB2FC
  c->r[0]=R32(c->r[4]+0x00000000u); // 801CB300
  c->r[3]=0u+0x00000000u; // 801CB304
  W32(c->r[6]+c->r[5],c->r[0]); // 801CB308
  c->r[0]=0u+0x00000001u; // 801CB30C
  c->r[30]=c->r[4]+0x00000008u; // 801CB310
  W32(c->r[4]+0x00000000u,c->r[3]); // 801CB314
  W8(c->r[4]+0x00000006u,c->r[0]); // 801CB318
L_801CB31C:;
  c->lr=0x801CB320u; f_801CC400(c); // 801CB31C
  c->r[3]=c->r[30]|c->r[30]; // 801CB320
L_801CB324:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CB324
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CB328
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CB32C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CB330
  c->lr=c->r[0]; // 801CB334
  c->r[1]=c->r[1]+0x00000020u; // 801CB338
  return; // 801CB33C
}

// GKI_enqueue
void f_801CB340(Ctx* __restrict c) {
  trace_call(0x801CB340u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB340
  c->r[0]=c->lr; // 801CB344
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CB348
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CB34C
  c->r[31]=c->r[4]+0xFFFFFFF8u; // 801CB350
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 801CB354
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CB358
  c->r[30]=c->r[4]|c->r[4]; // 801CB35C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CB360
  c->r[29]=c->r[3]|c->r[3]; // 801CB364
  if (crb(c,2)) { goto L_801CB374; } // 801CB368
  c->r[0]=0u+0x00000000u; // 801CB36C
  goto L_801CB3A0; // 801CB370
L_801CB374:;
  c->r[0]=R8(c->r[31]+0x00000004u); // 801CB374
  cmpu(c,0,c->r[0],0x00000009u); // 801CB378
  if (!crb(c,0)) { goto L_801CB39C; } // 801CB37C
  c->r[3]=0u+0x80450000u; // 801CB380
  c->r[0]=rotl(c->r[0],4)&0x00000FF0u; // 801CB384
  c->r[3]=c->r[3]+0x00006C20u; // 801CB388
  c->r[3]=c->r[3]+0x00030000u; // 801CB38C
  c->r[3]=c->r[3]+c->r[0]; // 801CB390
  c->r[0]=R16(c->r[3]+0xFFFF89E8u); // 801CB394
  goto L_801CB3A0; // 801CB398
L_801CB39C:;
  c->r[0]=0u+0x00000000u; // 801CB39C
L_801CB3A0:;
  c->r[4]=c->r[4]+c->r[0]; // 801CB3A0
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 801CB3A4
  if (crb(c,2)) { goto L_801CB3B4; } // 801CB3A8
  c->r[0]=0u+0x00000001u; // 801CB3AC
  goto L_801CB3D0; // 801CB3B0
L_801CB3B4:;
  c->r[3]=0u+0xDDBB0000u; // 801CB3B4
  c->r[4]=R32(c->r[4]+0x00000000u); // 801CB3B8
  c->r[0]=c->r[3]+0xFFFFDDBAu; // 801CB3BC
  c->r[3]=c->r[0]-c->r[4]; // 801CB3C0
  c->r[0]=c->r[4]-c->r[0]; // 801CB3C4
  c->r[0]=c->r[3]|c->r[0]; // 801CB3C8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801CB3CC
L_801CB3D0:;
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; cr0(c,c->r[0]); // 801CB3D0
  if (crb(c,2)) { goto L_801CB3F4; } // 801CB3D4
  c->r[3]=0u+0x00010000u; // 801CB3D8
  c->r[4]=0u+0x803A0000u; // 801CB3DC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801CB3E0
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801CB3E4
  c->r[4]=c->r[4]+0xFFFFE258u; // 801CB3E8
  c->lr=0x801CB3F0u; f_801CC480(c); // 801CB3EC
  goto L_801CB460; // 801CB3F0
L_801CB3F4:;
  c->r[0]=R8(c->r[31]+0x00000006u); // 801CB3F4
  cmpu(c,0,c->r[0],0x00000001u); // 801CB3F8
  if (crb(c,2)) { goto L_801CB41C; } // 801CB3FC
  c->r[3]=0u+0x00010000u; // 801CB400
  c->r[4]=0u+0x803A0000u; // 801CB404
  c->r[0]=c->r[3]+0xFFFFFFF9u; // 801CB408
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801CB40C
  c->r[4]=c->r[4]+0xFFFFE274u; // 801CB410
  c->lr=0x801CB418u; f_801CC480(c); // 801CB414
  goto L_801CB460; // 801CB418
L_801CB41C:;
  c->lr=0x801CB420u; f_801CC430(c); // 801CB41C
  c->r[0]=R32(c->r[29]+0x00000000u); // 801CB420
  cmps(c,0,(int32_t)c->r[0],0); // 801CB424
  if (crb(c,2)) { goto L_801CB438; } // 801CB428
  c->r[3]=R32(c->r[29]+0x00000004u); // 801CB42C
  W32(c->r[3]+0xFFFFFFF8u,c->r[31]); // 801CB430
  goto L_801CB43C; // 801CB434
L_801CB438:;
  W32(c->r[29]+0x00000000u,c->r[30]); // 801CB438
L_801CB43C:;
  c->r[4]=R16(c->r[29]+0x00000008u); // 801CB43C
  c->r[3]=0u+0x00000000u; // 801CB440
  W32(c->r[29]+0x00000004u,c->r[30]); // 801CB444
  c->r[0]=0u+0x00000002u; // 801CB448
  c->r[4]=c->r[4]+0x00000001u; // 801CB44C
  W16(c->r[29]+0x00000008u,c->r[4]); // 801CB450
  W32(c->r[31]+0x00000000u,c->r[3]); // 801CB454
  W8(c->r[31]+0x00000006u,c->r[0]); // 801CB458
  c->lr=0x801CB460u; f_801CC400(c); // 801CB45C
L_801CB460:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CB460
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CB464
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CB468
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CB46C
  c->lr=c->r[0]; // 801CB470
  c->r[1]=c->r[1]+0x00000020u; // 801CB474
  return; // 801CB478
}

// GKI_enqueue_head
void f_801CB480(Ctx* __restrict c) {
  trace_call(0x801CB480u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB480
  c->r[0]=c->lr; // 801CB484
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CB488
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CB48C
  c->r[31]=c->r[4]+0xFFFFFFF8u; // 801CB490
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 801CB494
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CB498
  c->r[30]=c->r[4]|c->r[4]; // 801CB49C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CB4A0
  c->r[29]=c->r[3]|c->r[3]; // 801CB4A4
  if (crb(c,2)) { goto L_801CB4B4; } // 801CB4A8
  c->r[0]=0u+0x00000000u; // 801CB4AC
  goto L_801CB4E0; // 801CB4B0
L_801CB4B4:;
  c->r[0]=R8(c->r[31]+0x00000004u); // 801CB4B4
  cmpu(c,0,c->r[0],0x00000009u); // 801CB4B8
  if (!crb(c,0)) { goto L_801CB4DC; } // 801CB4BC
  c->r[3]=0u+0x80450000u; // 801CB4C0
  c->r[0]=rotl(c->r[0],4)&0x00000FF0u; // 801CB4C4
  c->r[3]=c->r[3]+0x00006C20u; // 801CB4C8
  c->r[3]=c->r[3]+0x00030000u; // 801CB4CC
  c->r[3]=c->r[3]+c->r[0]; // 801CB4D0
  c->r[0]=R16(c->r[3]+0xFFFF89E8u); // 801CB4D4
  goto L_801CB4E0; // 801CB4D8
L_801CB4DC:;
  c->r[0]=0u+0x00000000u; // 801CB4DC
L_801CB4E0:;
  c->r[4]=c->r[4]+c->r[0]; // 801CB4E0
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 801CB4E4
  if (crb(c,2)) { goto L_801CB4F4; } // 801CB4E8
  c->r[0]=0u+0x00000001u; // 801CB4EC
  goto L_801CB510; // 801CB4F0
L_801CB4F4:;
  c->r[3]=0u+0xDDBB0000u; // 801CB4F4
  c->r[4]=R32(c->r[4]+0x00000000u); // 801CB4F8
  c->r[0]=c->r[3]+0xFFFFDDBAu; // 801CB4FC
  c->r[3]=c->r[0]-c->r[4]; // 801CB500
  c->r[0]=c->r[4]-c->r[0]; // 801CB504
  c->r[0]=c->r[3]|c->r[0]; // 801CB508
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801CB50C
L_801CB510:;
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; cr0(c,c->r[0]); // 801CB510
  if (crb(c,2)) { goto L_801CB534; } // 801CB514
  c->r[3]=0u+0x00010000u; // 801CB518
  c->r[4]=0u+0x803A0000u; // 801CB51C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801CB520
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801CB524
  c->r[4]=c->r[4]+0xFFFFE258u; // 801CB528
  c->lr=0x801CB530u; f_801CC480(c); // 801CB52C
  goto L_801CB5A4; // 801CB530
L_801CB534:;
  c->r[0]=R8(c->r[31]+0x00000006u); // 801CB534
  cmpu(c,0,c->r[0],0x00000001u); // 801CB538
  if (crb(c,2)) { goto L_801CB55C; } // 801CB53C
  c->r[3]=0u+0x00010000u; // 801CB540
  c->r[4]=0u+0x803A0000u; // 801CB544
  c->r[0]=c->r[3]+0xFFFFFFF9u; // 801CB548
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801CB54C
  c->r[4]=c->r[4]+0xFFFFE294u; // 801CB550
  c->lr=0x801CB558u; f_801CC480(c); // 801CB554
  goto L_801CB5A4; // 801CB558
L_801CB55C:;
  c->lr=0x801CB560u; f_801CC430(c); // 801CB55C
  c->r[3]=R32(c->r[29]+0x00000000u); // 801CB560
  cmps(c,0,(int32_t)c->r[3],0); // 801CB564
  if (crb(c,2)) { goto L_801CB57C; } // 801CB568
  c->r[0]=c->r[3]+0xFFFFFFF8u; // 801CB56C
  W32(c->r[31]+0x00000000u,c->r[0]); // 801CB570
  W32(c->r[29]+0x00000000u,c->r[30]); // 801CB574
  goto L_801CB58C; // 801CB578
L_801CB57C:;
  W32(c->r[29]+0x00000000u,c->r[30]); // 801CB57C
  c->r[0]=0u+0x00000000u; // 801CB580
  W32(c->r[29]+0x00000004u,c->r[30]); // 801CB584
  W32(c->r[31]+0x00000000u,c->r[0]); // 801CB588
L_801CB58C:;
  c->r[3]=R16(c->r[29]+0x00000008u); // 801CB58C
  c->r[0]=0u+0x00000002u; // 801CB590
  c->r[3]=c->r[3]+0x00000001u; // 801CB594
  W16(c->r[29]+0x00000008u,c->r[3]); // 801CB598
  W8(c->r[31]+0x00000006u,c->r[0]); // 801CB59C
  c->lr=0x801CB5A4u; f_801CC400(c); // 801CB5A0
L_801CB5A4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CB5A4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CB5A8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CB5AC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CB5B0
  c->lr=c->r[0]; // 801CB5B4
  c->r[1]=c->r[1]+0x00000020u; // 801CB5B8
  return; // 801CB5BC
}

// GKI_dequeue
void f_801CB5C0(Ctx* __restrict c) {
  trace_call(0x801CB5C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB5C0
  c->r[0]=c->lr; // 801CB5C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CB5C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CB5CC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CB5D0
  c->r[30]=c->r[3]|c->r[3]; // 801CB5D4
  c->lr=0x801CB5DCu; f_801CC430(c); // 801CB5D8
  cmps(c,0,(int32_t)c->r[30],0); // 801CB5DC
  if (crb(c,2)) { goto L_801CB5F0; } // 801CB5E0
  c->r[0]=R16(c->r[30]+0x00000008u); // 801CB5E4
  cmps(c,0,(int32_t)c->r[0],0); // 801CB5E8
  if (!crb(c,2)) { goto L_801CB5FC; } // 801CB5EC
L_801CB5F0:;
  c->lr=0x801CB5F4u; f_801CC400(c); // 801CB5F0
  c->r[3]=0u+0x00000000u; // 801CB5F4
  goto L_801CB648; // 801CB5F8
L_801CB5FC:;
  c->r[31]=R32(c->r[30]+0x00000000u); // 801CB5FC
  c->r[3]=R32(c->r[31]+0xFFFFFFF8u); // 801CB600
  cmps(c,0,(int32_t)c->r[3],0); // 801CB604
  if (crb(c,2)) { goto L_801CB618; } // 801CB608
  c->r[0]=c->r[3]+0x00000008u; // 801CB60C
  W32(c->r[30]+0x00000000u,c->r[0]); // 801CB610
  goto L_801CB624; // 801CB614
L_801CB618:;
  c->r[0]=0u+0x00000000u; // 801CB618
  W32(c->r[30]+0x00000000u,c->r[0]); // 801CB61C
  W32(c->r[30]+0x00000004u,c->r[0]); // 801CB620
L_801CB624:;
  c->r[4]=R16(c->r[30]+0x00000008u); // 801CB624
  c->r[3]=0u+0x00000000u; // 801CB628
  c->r[0]=0u+0x00000001u; // 801CB62C
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801CB630
  W16(c->r[30]+0x00000008u,c->r[4]); // 801CB634
  W32(c->r[31]+0xFFFFFFF8u,c->r[3]); // 801CB638
  W8(c->r[31]+0xFFFFFFFEu,c->r[0]); // 801CB63C
  c->lr=0x801CB644u; f_801CC400(c); // 801CB640
  c->r[3]=c->r[31]|c->r[31]; // 801CB644
L_801CB648:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CB648
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CB64C
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CB650
  c->lr=c->r[0]; // 801CB654
  c->r[1]=c->r[1]+0x00000010u; // 801CB658
  return; // 801CB65C
}

// GKI_remove_from_queue
void f_801CB660(Ctx* __restrict c) {
  trace_call(0x801CB660u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB660
  c->r[0]=c->lr; // 801CB664
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CB668
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CB66C
  c->r[31]=c->r[4]|c->r[4]; // 801CB670
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CB674
  c->r[30]=c->r[3]|c->r[3]; // 801CB678
  c->lr=0x801CB680u; f_801CC430(c); // 801CB67C
  c->r[3]=R32(c->r[30]+0x00000000u); // 801CB680
  cmpu(c,0,c->r[31],c->r[3]); // 801CB684
  if (!crb(c,2)) { goto L_801CB69C; } // 801CB688
  c->lr=0x801CB690u; f_801CC400(c); // 801CB68C
  c->r[3]=c->r[30]|c->r[30]; // 801CB690
  c->lr=0x801CB698u; f_801CB5C0(c); // 801CB694
  goto L_801CB70C; // 801CB698
L_801CB69C:;
  c->r[5]=c->r[31]+0xFFFFFFF8u; // 801CB69C
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 801CB6A0
  goto L_801CB6FC; // 801CB6A4
L_801CB6A8:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801CB6A8
  cmpu(c,0,c->r[0],c->r[5]); // 801CB6AC
  if (!crb(c,2)) { goto L_801CB6F8; } // 801CB6B0
  c->r[0]=R32(c->r[5]+0x00000000u); // 801CB6B4
  W32(c->r[3]+0x00000000u,c->r[0]); // 801CB6B8
  c->r[0]=R32(c->r[30]+0x00000004u); // 801CB6BC
  cmpu(c,0,c->r[31],c->r[0]); // 801CB6C0
  if (!crb(c,2)) { goto L_801CB6D0; } // 801CB6C4
  c->r[0]=c->r[3]+0x00000008u; // 801CB6C8
  W32(c->r[30]+0x00000004u,c->r[0]); // 801CB6CC
L_801CB6D0:;
  c->r[4]=R16(c->r[30]+0x00000008u); // 801CB6D0
  c->r[3]=0u+0x00000000u; // 801CB6D4
  c->r[0]=0u+0x00000001u; // 801CB6D8
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 801CB6DC
  W16(c->r[30]+0x00000008u,c->r[4]); // 801CB6E0
  W32(c->r[5]+0x00000000u,c->r[3]); // 801CB6E4
  W8(c->r[5]+0x00000006u,c->r[0]); // 801CB6E8
  c->lr=0x801CB6F0u; f_801CC400(c); // 801CB6EC
  c->r[3]=c->r[31]|c->r[31]; // 801CB6F0
  goto L_801CB70C; // 801CB6F4
L_801CB6F8:;
  c->r[3]=c->r[0]|c->r[0]; // 801CB6F8
L_801CB6FC:;
  cmps(c,0,(int32_t)c->r[3],0); // 801CB6FC
  if (!crb(c,2)) { IRQCHK(c); goto L_801CB6A8; } // 801CB700
  c->lr=0x801CB708u; f_801CC400(c); // 801CB704
  c->r[3]=0u+0x00000000u; // 801CB708
L_801CB70C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CB70C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CB710
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CB714
  c->lr=c->r[0]; // 801CB718
  c->r[1]=c->r[1]+0x00000010u; // 801CB71C
  return; // 801CB720
}

// GKI_getfirst
void f_801CB730(Ctx* __restrict c) {
  trace_call(0x801CB730u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 801CB730
  return; // 801CB734
}

// GKI_getnext
void f_801CB740(Ctx* __restrict c) {
  trace_call(0x801CB740u);
  c->r[3]=R32(c->r[3]+0xFFFFFFF8u); // 801CB740
  cmps(c,0,(int32_t)c->r[3],0); // 801CB744
  if (crb(c,2)) { goto L_801CB754; } // 801CB748
  c->r[3]=c->r[3]+0x00000008u; // 801CB74C
  return; // 801CB750
L_801CB754:;
  c->r[3]=0u+0x00000000u; // 801CB754
  return; // 801CB758
}

// GKI_queue_is_empty
void f_801CB760(Ctx* __restrict c) {
  trace_call(0x801CB760u);
  c->r[0]=R16(c->r[3]+0x00000008u); // 801CB760
  c->r[0]=cntlz(c->r[0]); // 801CB764
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 801CB768
  return; // 801CB76C
}

// GKI_create_pool
void f_801CB770(Ctx* __restrict c) {
  trace_call(0x801CB770u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CB770
  c->r[0]=c->lr; // 801CB774
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CB778
  c->r[11]=c->r[1]+0x00000020u; // 801CB77C
  c->lr=0x801CB784u; f_800C2E4C(c); // 801CB780
  c->r[7]=0u+0x80450000u; // 801CB784
  cmpu(c,0,c->r[3],0x0000FFF3u); // 801CB788
  c->r[7]=c->r[7]+0x00006C20u; // 801CB78C
  c->r[27]=c->r[3]|c->r[3]; // 801CB790
  c->r[28]=c->r[4]|c->r[4]; // 801CB794
  c->r[29]=c->r[5]|c->r[5]; // 801CB798
  c->r[30]=c->r[7]+0x00000054u; // 801CB79C
  if (!crb(c,1)) { goto L_801CB7AC; } // 801CB7A0
  c->r[3]=0u+0x000000FFu; // 801CB7A4
  goto L_801CBAA0; // 801CB7A8
L_801CB7AC:;
  c->r[0]=0u+0x00000003u; // 801CB7AC
  c->r[31]=0u+0x00000000u; // 801CB7B0
  c->ctr=c->r[0]; // 801CB7B4
L_801CB7B8:;
  c->r[5]=rotl(c->r[31],2)&0x000003FCu; // 801CB7B8
  c->r[5]=c->r[5]+0x00030000u; // 801CB7BC
  c->r[0]=c->r[5]+0xFFFF8A1Cu; // 801CB7C0
  c->r[0]=R32(c->r[30]+c->r[0]); // 801CB7C4
  cmps(c,0,(int32_t)c->r[0],0); // 801CB7C8
  if (crb(c,2)) { goto L_801CB810; } // 801CB7CC
  c->r[31]=c->r[31]+0x00000001u; // 801CB7D0
  c->r[5]=rotl(c->r[31],2)&0x000003FCu; // 801CB7D4
  c->r[5]=c->r[5]+0x00030000u; // 801CB7D8
  c->r[0]=c->r[5]+0xFFFF8A1Cu; // 801CB7DC
  c->r[0]=R32(c->r[30]+c->r[0]); // 801CB7E0
  cmps(c,0,(int32_t)c->r[0],0); // 801CB7E4
  if (crb(c,2)) { goto L_801CB810; } // 801CB7E8
  c->r[31]=c->r[31]+0x00000001u; // 801CB7EC
  c->r[5]=rotl(c->r[31],2)&0x000003FCu; // 801CB7F0
  c->r[5]=c->r[5]+0x00030000u; // 801CB7F4
  c->r[0]=c->r[5]+0xFFFF8A1Cu; // 801CB7F8
  c->r[0]=R32(c->r[30]+c->r[0]); // 801CB7FC
  cmps(c,0,(int32_t)c->r[0],0); // 801CB800
  if (crb(c,2)) { goto L_801CB810; } // 801CB804
  c->r[31]=c->r[31]+0x00000001u; // 801CB808
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CB7B8; } // 801CB80C
L_801CB810:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 801CB810
  cmpu(c,0,c->r[0],0x00000009u); // 801CB814
  if (!crb(c,2)) { goto L_801CB824; } // 801CB818
  c->r[3]=0u+0x000000FFu; // 801CB81C
  goto L_801CBAA0; // 801CB820
L_801CB824:;
  c->r[0]=c->r[3]+0x00000003u; // 801CB824
  cmps(c,0,(int32_t)c->r[6],0); // 801CB828
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801CB82C
  c->r[0]=c->r[3]+0x0000000Cu; // 801CB830
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 801CB834
  if (!crb(c,2)) { goto L_801CB844; } // 801CB838
  c->lr=0x801CB840u; f_801CC490(c); // 801CB83C
  c->r[6]=c->r[3]|c->r[3]; // 801CB840
L_801CB844:;
  cmps(c,0,(int32_t)c->r[6],0); // 801CB844
  if (crb(c,2)) { goto L_801CBA9C; } // 801CB848
  c->r[4]=c->r[27]|c->r[27]; // 801CB84C
  c->r[5]=c->r[28]|c->r[28]; // 801CB850
  c->r[3]=rotl(c->r[31],0)&0x000000FFu; // 801CB854
  c->lr=0x801CB85Cu; f_801CA790(c); // 801CB858
  c->r[3]=0u+0x80450000u; // 801CB85C
  c->r[5]=rotl(c->r[31],4)&0x00000FF0u; // 801CB860
  c->r[3]=c->r[3]+0x00006C20u; // 801CB864
  c->r[4]=0u+0x00000000u; // 801CB868
  c->r[3]=c->r[3]+0x00000054u; // 801CB86C
  c->r[6]=c->r[5]+0x00030000u; // 801CB870
  c->r[5]=c->r[3]+0x00030000u; // 801CB874
  c->r[5]=R8(c->r[5]+0xFFFF8A87u); // 801CB878
  c->r[0]=c->r[6]+0xFFFF8994u; // 801CB87C
  c->r[7]=R16(c->r[3]+c->r[0]); // 801CB880
  c->ctr=c->r[5]; // 801CB884
  cmps(c,0,(int32_t)c->r[5],0); // 801CB888
  if (!crb(c,1)) { goto L_801CB8BC; } // 801CB88C
L_801CB890:;
  c->r[6]=c->r[4]+0x00030000u; // 801CB890
  c->r[0]=c->r[6]+0xFFFF8A7Eu; // 801CB894
  c->r[0]=R8(c->r[3]+c->r[0]); // 801CB898
  c->r[6]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801CB89C
  c->r[6]=c->r[6]+0x00030000u; // 801CB8A0
  c->r[0]=c->r[6]+0xFFFF8994u; // 801CB8A4
  c->r[0]=R16(c->r[3]+c->r[0]); // 801CB8A8
  cmpu(c,0,c->r[7],c->r[0]); // 801CB8AC
  if (!crb(c,1)) { goto L_801CB8BC; } // 801CB8B0
  c->r[4]=c->r[4]+0x00000001u; // 801CB8B4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CB890; } // 801CB8B8
L_801CB8BC:;
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[4]); // 801CB8BC
  if (!crb(c,1)) { goto L_801CBA24; } // 801CB8C0
  c->r[0]=c->r[5]-c->r[4]; // 801CB8C4
  c->r[8]=c->r[4]+0x00000008u; // 801CB8C8
  cmps(c,0,(int32_t)c->r[0],8); // 801CB8CC
  if (!crb(c,1)) { goto L_801CB9FC; } // 801CB8D0
  c->r[6]=c->r[3]+0x00030000u; // 801CB8D4
  c->r[9]=0u+0x00000000u; // 801CB8D8
  c->r[0]=R8(c->r[6]+0xFFFF8A87u); // 801CB8DC
  c->r[10]=0u+0x00000000u; // 801CB8E0
  c->r[11]=0u+0x00000000u; // 801CB8E4
  c->r[7]=0u+0x00000000u; // 801CB8E8
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801CB8EC
  if (crb(c,0)) { goto L_801CB908; } // 801CB8F0
  c->r[6]=0u+0x80000000u; // 801CB8F4
  c->r[0]=c->r[6]+0x00000001u; // 801CB8F8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801CB8FC
  if (crb(c,0)) { goto L_801CB908; } // 801CB900
  c->r[7]=0u+0x00000001u; // 801CB904
L_801CB908:;
  cmps(c,0,(int32_t)c->r[7],0); // 801CB908
  if (crb(c,2)) { goto L_801CB92C; } // 801CB90C
  c->r[7]=c->r[3]+0x00030000u; // 801CB910
  c->r[6]=0u+0x80000000u; // 801CB914
  c->r[7]=R8(c->r[7]+0xFFFF8A87u); // 801CB918
  c->r[0]=c->r[6]+0x00000001u; // 801CB91C
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 801CB920
  if (crb(c,0)) { goto L_801CB92C; } // 801CB924
  c->r[11]=0u+0x00000001u; // 801CB928
L_801CB92C:;
  cmps(c,0,(int32_t)c->r[11],0); // 801CB92C
  if (crb(c,2)) { goto L_801CB944; } // 801CB930
  c->r[0]=c->r[4]+0x80000000u; // 801CB934
  cmpu(c,0,c->r[0],0x00000000u); // 801CB938
  if (crb(c,2)) { goto L_801CB944; } // 801CB93C
  c->r[10]=0u+0x00000001u; // 801CB940
L_801CB944:;
  cmps(c,0,(int32_t)c->r[10],0); // 801CB944
  if (crb(c,2)) { goto L_801CB98C; } // 801CB948
  c->r[6]=c->r[3]+0x00030000u; // 801CB94C
  c->r[0]=0u-c->r[4]; // 801CB950
  c->r[10]=R8(c->r[6]+0xFFFF8A87u); // 801CB954
  c->r[0]=rotl(c->r[0],0)&0x80000000u; // 801CB958
  c->r[6]=0u+0x00000001u; // 801CB95C
  c->r[7]=rotl(c->r[10],0)&0x80000000u; // 801CB960
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 801CB964
  if (!crb(c,2)) { goto L_801CB980; } // 801CB968
  c->r[0]=c->r[10]-c->r[4]; // 801CB96C
  c->r[0]=rotl(c->r[0],0)&0x80000000u; // 801CB970
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 801CB974
  if (crb(c,2)) { goto L_801CB980; } // 801CB978
  c->r[6]=0u+0x00000000u; // 801CB97C
L_801CB980:;
  cmps(c,0,(int32_t)c->r[6],0); // 801CB980
  if (crb(c,2)) { goto L_801CB98C; } // 801CB984
  c->r[9]=0u+0x00000001u; // 801CB988
L_801CB98C:;
  cmps(c,0,(int32_t)c->r[9],0); // 801CB98C
  if (crb(c,2)) { goto L_801CB9FC; } // 801CB990
  c->r[0]=c->r[5]+0x00000007u; // 801CB994
  c->r[0]=c->r[0]-c->r[8]; // 801CB998
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801CB99C
  c->ctr=c->r[0]; // 801CB9A0
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[8]); // 801CB9A4
  if (!crb(c,1)) { goto L_801CB9FC; } // 801CB9A8
L_801CB9AC:;
  c->r[6]=c->r[3]+c->r[5]; // 801CB9AC
  c->r[5]=c->r[5]+0xFFFFFFF8u; // 801CB9B0
  c->r[6]=c->r[6]+0x00030000u; // 801CB9B4
  c->r[0]=R8(c->r[6]+0xFFFF8A7Du); // 801CB9B8
  W8(c->r[6]+0xFFFF8A7Eu,c->r[0]); // 801CB9BC
  c->r[0]=R8(c->r[6]+0xFFFF8A7Cu); // 801CB9C0
  W8(c->r[6]+0xFFFF8A7Du,c->r[0]); // 801CB9C4
  c->r[0]=R8(c->r[6]+0xFFFF8A7Bu); // 801CB9C8
  W8(c->r[6]+0xFFFF8A7Cu,c->r[0]); // 801CB9CC
  c->r[0]=R8(c->r[6]+0xFFFF8A7Au); // 801CB9D0
  W8(c->r[6]+0xFFFF8A7Bu,c->r[0]); // 801CB9D4
  c->r[0]=R8(c->r[6]+0xFFFF8A79u); // 801CB9D8
  W8(c->r[6]+0xFFFF8A7Au,c->r[0]); // 801CB9DC
  c->r[0]=R8(c->r[6]+0xFFFF8A78u); // 801CB9E0
  W8(c->r[6]+0xFFFF8A79u,c->r[0]); // 801CB9E4
  c->r[0]=R8(c->r[6]+0xFFFF8A77u); // 801CB9E8
  W8(c->r[6]+0xFFFF8A78u,c->r[0]); // 801CB9EC
  c->r[0]=R8(c->r[6]+0xFFFF8A76u); // 801CB9F0
  W8(c->r[6]+0xFFFF8A77u,c->r[0]); // 801CB9F4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CB9AC; } // 801CB9F8
L_801CB9FC:;
  c->r[0]=c->r[5]-c->r[4]; // 801CB9FC
  c->ctr=c->r[0]; // 801CBA00
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[4]); // 801CBA04
  if (!crb(c,1)) { goto L_801CBA24; } // 801CBA08
L_801CBA0C:;
  c->r[6]=c->r[3]+c->r[5]; // 801CBA0C
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 801CBA10
  c->r[6]=c->r[6]+0x00030000u; // 801CBA14
  c->r[0]=R8(c->r[6]+0xFFFF8A7Du); // 801CBA18
  W8(c->r[6]+0xFFFF8A7Eu,c->r[0]); // 801CBA1C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801CBA0C; } // 801CBA20
L_801CBA24:;
  c->r[0]=c->r[3]+0x00030000u; // 801CBA24
  c->r[5]=rotl(c->r[31],0)&0x000000FFu; // 801CBA28
  c->r[4]=c->r[0]+c->r[4]; // 801CBA2C
  c->r[3]=0u+0x80450000u; // 801CBA30
  c->r[3]=c->r[3]+0x00006C20u; // 801CBA34
  cmpu(c,0,c->r[5],0x00000009u); // 801CBA38
  W8(c->r[4]+0xFFFF8A7Eu,c->r[31]); // 801CBA3C
  c->r[3]=c->r[3]+0x00000054u; // 801CBA40
  if (!crb(c,0)) { goto L_801CBA84; } // 801CBA44
  cmpu(c,0,c->r[29],0x00000001u); // 801CBA48
  if (!crb(c,2)) { goto L_801CBA6C; } // 801CBA4C
  c->r[4]=c->r[3]+0x00030000u; // 801CBA50
  c->r[0]=0u+0x00000001u; // 801CBA54
  c->r[3]=R16(c->r[4]+0xFFFF8A7Cu); // 801CBA58
  c->r[0]=((c->r[5])&0x20)?0u:(c->r[0]<<((c->r[5])&31)); // 801CBA5C
  c->r[0]=c->r[3]|c->r[0]; // 801CBA60
  W16(c->r[4]+0xFFFF8A7Cu,c->r[0]); // 801CBA64
  goto L_801CBA84; // 801CBA68
L_801CBA6C:;
  c->r[4]=c->r[3]+0x00030000u; // 801CBA6C
  c->r[0]=0u+0x00000001u; // 801CBA70
  c->r[3]=R16(c->r[4]+0xFFFF8A7Cu); // 801CBA74
  c->r[0]=((c->r[5])&0x20)?0u:(c->r[0]<<((c->r[5])&31)); // 801CBA78
  c->r[0]=c->r[3]&~c->r[0]; // 801CBA7C
  W16(c->r[4]+0xFFFF8A7Cu,c->r[0]); // 801CBA80
L_801CBA84:;
  c->r[5]=c->r[30]+0x00030000u; // 801CBA84
  c->r[3]=c->r[31]|c->r[31]; // 801CBA88
  c->r[4]=R8(c->r[5]+0xFFFF8A87u); // 801CBA8C
  c->r[0]=c->r[4]+0x00000001u; // 801CBA90
  W8(c->r[5]+0xFFFF8A87u,c->r[0]); // 801CBA94
  goto L_801CBAA0; // 801CBA98
L_801CBA9C:;
  c->r[3]=0u+0x000000FFu; // 801CBA9C
L_801CBAA0:;
  c->r[11]=c->r[1]+0x00000020u; // 801CBAA0
  c->lr=0x801CBAA8u; f_800C2E98(c); // 801CBAA4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CBAA8
  c->lr=c->r[0]; // 801CBAAC
  c->r[1]=c->r[1]+0x00000020u; // 801CBAB0
  return; // 801CBAB4
}

// GKI_delete_pool
void f_801CBAC0(Ctx* __restrict c) {
  trace_call(0x801CBAC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CBAC0
  c->r[0]=c->lr; // 801CBAC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CBAC8
  c->r[11]=c->r[1]+0x00000020u; // 801CBACC
  c->lr=0x801CBAD4u; f_800C2E48(c); // 801CBAD0
  c->r[27]=0u+0x80450000u; // 801CBAD4
  cmpu(c,0,c->r[3],0x00000009u); // 801CBAD8
  c->r[27]=c->r[27]+0x00006C20u; // 801CBADC
  c->r[30]=c->r[3]|c->r[3]; // 801CBAE0
  c->r[31]=c->r[27]+0x00000054u; // 801CBAE4
  if (!crb(c,0)) { goto L_801CBC10; } // 801CBAE8
  c->r[26]=rotl(c->r[3],2)&0x000003FCu; // 801CBAEC
  c->r[0]=c->r[31]+0x00030000u; // 801CBAF0
  c->r[3]=c->r[0]+c->r[26]; // 801CBAF4
  c->r[0]=R32(c->r[3]+0xFFFF8A1Cu); // 801CBAF8
  cmps(c,0,(int32_t)c->r[0],0); // 801CBAFC
  if (!crb(c,2)) { goto L_801CBB08; } // 801CBB00
  goto L_801CBC10; // 801CBB04
L_801CBB08:;
  c->lr=0x801CBB0Cu; f_801CC430(c); // 801CBB08
  c->r[4]=c->r[31]+0x00030000u; // 801CBB0C
  c->r[0]=rotl(c->r[30],4)&0x00000FF0u; // 801CBB10
  c->r[3]=c->r[4]+c->r[0]; // 801CBB14
  c->r[0]=R16(c->r[3]+0xFFFF8998u); // 801CBB18
  cmps(c,0,(int32_t)c->r[0],0); // 801CBB1C
  if (!crb(c,2)) { goto L_801CBBF4; } // 801CBB20
  c->r[28]=0u+0x00000000u; // 801CBB24
  W16(c->r[3]+0xFFFF8994u,c->r[28]); // 801CBB28
  c->r[29]=c->r[4]+c->r[26]; // 801CBB2C
  W16(c->r[3]+0xFFFF8996u,c->r[28]); // 801CBB30
  W16(c->r[3]+0xFFFF8998u,c->r[28]); // 801CBB34
  W16(c->r[3]+0xFFFF899Au,c->r[28]); // 801CBB38
  W32(c->r[3]+0xFFFF898Cu,c->r[28]); // 801CBB3C
  W32(c->r[3]+0xFFFF8990u,c->r[28]); // 801CBB40
  c->r[3]=R32(c->r[29]+0xFFFF8A1Cu); // 801CBB44
  c->lr=0x801CBB4Cu; f_801CC4C0(c); // 801CBB48
  c->r[4]=c->r[31]+0x00030000u; // 801CBB4C
  c->r[0]=rotl(c->r[30],1)&0x000001FEu; // 801CBB50
  c->r[3]=c->r[4]+c->r[26]; // 801CBB54
  W32(c->r[29]+0xFFFF8A1Cu,c->r[28]); // 801CBB58
  c->r[4]=c->r[4]+c->r[0]; // 801CBB5C
  c->r[7]=c->r[31]|c->r[31]; // 801CBB60
  W32(c->r[3]+0xFFFF8A40u,c->r[28]); // 801CBB64
  c->r[3]=c->r[7]+0x00030000u; // 801CBB68
  c->r[6]=0u+0x00000000u; // 801CBB6C
  W16(c->r[4]+0xFFFF8A64u,c->r[28]); // 801CBB70
  c->r[4]=R8(c->r[3]+0xFFFF8A87u); // 801CBB74
  goto L_801CBB9C; // 801CBB78
  c->r[0]=c->r[0]|0x00000000u; // 801CBB7C
L_801CBB80:;
  c->r[3]=rotl(c->r[6],0)&0x000000FFu; // 801CBB80
  c->r[3]=c->r[3]+0x00030000u; // 801CBB84
  c->r[0]=c->r[3]+0xFFFF8A7Eu; // 801CBB88
  c->r[0]=R8(c->r[7]+c->r[0]); // 801CBB8C
  cmpu(c,0,c->r[30],c->r[0]); // 801CBB90
  if (crb(c,2)) { goto L_801CBBA8; } // 801CBB94
  c->r[6]=c->r[6]+0x00000001u; // 801CBB98
L_801CBB9C:;
  c->r[0]=rotl(c->r[6],0)&0x000000FFu; // 801CBB9C
  cmpu(c,0,c->r[0],c->r[4]); // 801CBBA0
  if (crb(c,0)) { IRQCHK(c); goto L_801CBB80; } // 801CBBA4
L_801CBBA8:;
  c->r[4]=c->r[7]+0x00030000u; // 801CBBA8
  goto L_801CBBCC; // 801CBBAC
L_801CBBB0:;
  c->r[3]=rotl(c->r[6],0)&0x000000FFu; // 801CBBB0
  c->r[6]=c->r[6]+0x00000001u; // 801CBBB4
  c->r[3]=c->r[3]+0x00030000u; // 801CBBB8
  c->r[3]=c->r[3]+0xFFFF8A7Eu; // 801CBBBC
  c->r[3]=c->r[7]+c->r[3]; // 801CBBC0
  c->r[0]=R8(c->r[3]+0x00000001u); // 801CBBC4
  W8(c->r[3]+0x00000000u,c->r[0]); // 801CBBC8
L_801CBBCC:;
  c->r[3]=R8(c->r[4]+0xFFFF8A87u); // 801CBBCC
  c->r[5]=rotl(c->r[6],0)&0x000000FFu; // 801CBBD0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801CBBD4
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801CBBD8
  if (crb(c,0)) { IRQCHK(c); goto L_801CBBB0; } // 801CBBDC
  c->r[4]=c->r[31]+0x00030000u; // 801CBBE0
  c->r[3]=R8(c->r[4]+0xFFFF8A87u); // 801CBBE4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801CBBE8
  W8(c->r[4]+0xFFFF8A87u,c->r[0]); // 801CBBEC
  goto L_801CBC0C; // 801CBBF0
L_801CBBF4:;
  c->r[3]=0u+0x00010000u; // 801CBBF4
  c->r[4]=0u+0x803A0000u; // 801CBBF8
  c->r[0]=c->r[3]+0xFFFFFFF8u; // 801CBBFC
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801CBC00
  c->r[4]=c->r[4]+0xFFFFE2D8u; // 801CBC04
  c->lr=0x801CBC0Cu; f_801CC480(c); // 801CBC08
L_801CBC0C:;
  c->lr=0x801CBC10u; f_801CC400(c); // 801CBC0C
L_801CBC10:;
  c->r[11]=c->r[1]+0x00000020u; // 801CBC10
  c->lr=0x801CBC18u; f_800C2E94(c); // 801CBC14
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CBC18
  c->lr=c->r[0]; // 801CBC1C
  c->r[1]=c->r[1]+0x00000020u; // 801CBC20
  return; // 801CBC24
}

// gki_timers_init
void f_801CBC30(Ctx* __restrict c) {
  trace_call(0x801CBC30u);
  c->r[3]=0u+0x80450000u; // 801CBC30
  c->r[0]=0u+0x00000000u; // 801CBC34
  c->r[3]=c->r[3]+0x00006C20u; // 801CBC38
  c->r[3]=c->r[3]+0x00030000u; // 801CBC3C
  W32(c->r[3]+0xFFFF8838u,c->r[0]); // 801CBC40
  W32(c->r[3]+0xFFFF883Cu,c->r[0]); // 801CBC44
  W32(c->r[3]+0xFFFF8840u,c->r[0]); // 801CBC48
  W32(c->r[3]+0xFFFF8860u,c->r[0]); // 801CBC4C
  W32(c->r[3]+0xFFFF8880u,c->r[0]); // 801CBC50
  W32(c->r[3]+0xFFFF88A0u,c->r[0]); // 801CBC54
  W32(c->r[3]+0xFFFF88C0u,c->r[0]); // 801CBC58
  W32(c->r[3]+0xFFFF8844u,c->r[0]); // 801CBC5C
  W32(c->r[3]+0xFFFF8864u,c->r[0]); // 801CBC60
  W32(c->r[3]+0xFFFF8884u,c->r[0]); // 801CBC64
  W32(c->r[3]+0xFFFF88A4u,c->r[0]); // 801CBC68
  W32(c->r[3]+0xFFFF88C4u,c->r[0]); // 801CBC6C
  W32(c->r[3]+0xFFFF8848u,c->r[0]); // 801CBC70
  W32(c->r[3]+0xFFFF8868u,c->r[0]); // 801CBC74
  W32(c->r[3]+0xFFFF8888u,c->r[0]); // 801CBC78
  W32(c->r[3]+0xFFFF88A8u,c->r[0]); // 801CBC7C
  W32(c->r[3]+0xFFFF88C8u,c->r[0]); // 801CBC80
  W32(c->r[3]+0xFFFF884Cu,c->r[0]); // 801CBC84
  W32(c->r[3]+0xFFFF886Cu,c->r[0]); // 801CBC88
  W32(c->r[3]+0xFFFF888Cu,c->r[0]); // 801CBC8C
  W32(c->r[3]+0xFFFF88ACu,c->r[0]); // 801CBC90
  W32(c->r[3]+0xFFFF88CCu,c->r[0]); // 801CBC94
  W32(c->r[3]+0xFFFF8850u,c->r[0]); // 801CBC98
  W32(c->r[3]+0xFFFF8870u,c->r[0]); // 801CBC9C
  W32(c->r[3]+0xFFFF8890u,c->r[0]); // 801CBCA0
  W32(c->r[3]+0xFFFF88B0u,c->r[0]); // 801CBCA4
  W32(c->r[3]+0xFFFF88D0u,c->r[0]); // 801CBCA8
  W32(c->r[3]+0xFFFF8854u,c->r[0]); // 801CBCAC
  W32(c->r[3]+0xFFFF8874u,c->r[0]); // 801CBCB0
  W32(c->r[3]+0xFFFF8894u,c->r[0]); // 801CBCB4
  W32(c->r[3]+0xFFFF88B4u,c->r[0]); // 801CBCB8
  W32(c->r[3]+0xFFFF88D4u,c->r[0]); // 801CBCBC
  W32(c->r[3]+0xFFFF8858u,c->r[0]); // 801CBCC0
  W32(c->r[3]+0xFFFF8878u,c->r[0]); // 801CBCC4
  W32(c->r[3]+0xFFFF8898u,c->r[0]); // 801CBCC8
  W32(c->r[3]+0xFFFF88B8u,c->r[0]); // 801CBCCC
  W32(c->r[3]+0xFFFF88D8u,c->r[0]); // 801CBCD0
  W32(c->r[3]+0xFFFF885Cu,c->r[0]); // 801CBCD4
  W32(c->r[3]+0xFFFF887Cu,c->r[0]); // 801CBCD8
  W32(c->r[3]+0xFFFF889Cu,c->r[0]); // 801CBCDC
  W32(c->r[3]+0xFFFF88BCu,c->r[0]); // 801CBCE0
  W32(c->r[3]+0xFFFF88DCu,c->r[0]); // 801CBCE4
  return; // 801CBCE8
}

// GKI_get_tick_count
void f_801CBCF0(Ctx* __restrict c) {
  trace_call(0x801CBCF0u);
  c->r[3]=0u+0x80450000u; // 801CBCF0
  c->r[3]=c->r[3]+0x00006C20u; // 801CBCF4
  c->r[3]=c->r[3]+0x00030000u; // 801CBCF8
  c->r[3]=R32(c->r[3]+0xFFFF8828u); // 801CBCFC
  return; // 801CBD00
}

// GKI_start_timer
void f_801CBD10(Ctx* __restrict c) {
  trace_call(0x801CBD10u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CBD10
  c->r[0]=c->lr; // 801CBD14
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CBD18
  c->r[11]=c->r[1]+0x00000020u; // 801CBD1C
  c->lr=0x801CBD24u; f_800C2E4C(c); // 801CBD20
  c->r[27]=c->r[3]|c->r[3]; // 801CBD24
  c->r[29]=c->r[4]|c->r[4]; // 801CBD28
  c->r[31]=c->r[5]|c->r[5]; // 801CBD2C
  c->lr=0x801CBD34u; f_801CC3F0(c); // 801CBD30
  cmps(c,0,(int32_t)c->r[29],0); // 801CBD34
  c->r[28]=c->r[3]|c->r[3]; // 801CBD38
  c->r[30]=0u+0x00000000u; // 801CBD3C
  if (crb(c,1)) { goto L_801CBD48; } // 801CBD40
  c->r[29]=0u+0x00000001u; // 801CBD44
L_801CBD48:;
  c->r[0]=0u-c->r[31]; // 801CBD48
  c->r[0]=c->r[0]|c->r[31]; // 801CBD4C
  c->r[0]=sraw(c,c->r[0],31); // 801CBD50
  c->r[31]=c->r[29]&c->r[0]; // 801CBD54
  c->lr=0x801CBD5Cu; f_801CC430(c); // 801CBD58
  c->r[4]=0u+0x80450000u; // 801CBD5C
  c->r[3]=0u+0x80000000u; // 801CBD60
  c->r[4]=c->r[4]+0x00006C20u; // 801CBD64
  c->r[5]=c->r[4]+0x00030000u; // 801CBD68
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 801CBD6C
  c->r[3]=R32(c->r[5]+0xFFFF8838u); // 801CBD70
  c->r[0]=R32(c->r[5]+0xFFFF883Cu); // 801CBD74
  c->r[3]=c->r[0]-c->r[3]; // 801CBD78
  c->r[0]=c->r[4]-c->r[3]; // 801CBD7C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[29]); // 801CBD80
  if (!crb(c,1)) { goto L_801CBD8C; } // 801CBD84
  c->r[4]=c->r[29]+c->r[3]; // 801CBD88
L_801CBD8C:;
  cmps(c,0,(int32_t)c->r[27],0); // 801CBD8C
  if (crb(c,2)) { goto L_801CBDA0; } // 801CBD90
  cmps(c,0,(int32_t)c->r[27],1); // 801CBD94
  if (crb(c,2)) { goto L_801CBDC0; } // 801CBD98
  goto L_801CBDE0; // 801CBD9C
L_801CBDA0:;
  c->r[3]=0u+0x80450000u; // 801CBDA0
  c->r[5]=rotl(c->r[28],2)&0x000003FCu; // 801CBDA4
  c->r[3]=c->r[3]+0x00006C20u; // 801CBDA8
  c->r[0]=c->r[3]+0x00030000u; // 801CBDAC
  c->r[3]=c->r[0]+c->r[5]; // 801CBDB0
  W32(c->r[3]+0xFFFF8880u,c->r[31]); // 801CBDB4
  W32(c->r[3]+0xFFFF8860u,c->r[4]); // 801CBDB8
  goto L_801CBDE4; // 801CBDBC
L_801CBDC0:;
  c->r[3]=0u+0x80450000u; // 801CBDC0
  c->r[5]=rotl(c->r[28],2)&0x000003FCu; // 801CBDC4
  c->r[3]=c->r[3]+0x00006C20u; // 801CBDC8
  c->r[0]=c->r[3]+0x00030000u; // 801CBDCC
  c->r[3]=c->r[0]+c->r[5]; // 801CBDD0
  W32(c->r[3]+0xFFFF88C0u,c->r[31]); // 801CBDD4
  W32(c->r[3]+0xFFFF88A0u,c->r[4]); // 801CBDD8
  goto L_801CBDE4; // 801CBDDC
L_801CBDE0:;
  c->r[30]=0u+0x00000001u; // 801CBDE0
L_801CBDE4:;
  cmps(c,0,(int32_t)c->r[30],0); // 801CBDE4
  if (!crb(c,2)) { goto L_801CBE40; } // 801CBDE8
  cmps(c,0,(int32_t)c->r[29],0); // 801CBDEC
  if (!crb(c,1)) { goto L_801CBE40; } // 801CBDF0
  c->r[3]=0u+0x80450000u; // 801CBDF4
  c->r[3]=c->r[3]+0x00006C20u; // 801CBDF8
  c->r[3]=c->r[3]+0x00030000u; // 801CBDFC
  c->r[4]=R32(c->r[3]+0xFFFF883Cu); // 801CBE00
  cmps(c,0,(int32_t)c->r[4],0); // 801CBE04
  if (crb(c,2)) { goto L_801CBE20; } // 801CBE08
  c->r[0]=R32(c->r[3]+0xFFFF8838u); // 801CBE0C
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 801CBE10
  if (!crb(c,0)) { goto L_801CBE40; } // 801CBE14
  cmps(c,0,(int32_t)c->r[0],0); // 801CBE18
  if (!crb(c,1)) { goto L_801CBE40; } // 801CBE1C
L_801CBE20:;
  c->r[3]=0u+0x80450000u; // 801CBE20
  c->r[3]=c->r[3]+0x00006C20u; // 801CBE24
  c->r[3]=c->r[3]+0x00030000u; // 801CBE28
  c->r[0]=R32(c->r[3]+0xFFFF8838u); // 801CBE2C
  c->r[0]=c->r[4]-c->r[0]; // 801CBE30
  c->r[0]=c->r[29]+c->r[0]; // 801CBE34
  W32(c->r[3]+0xFFFF883Cu,c->r[0]); // 801CBE38
  W32(c->r[3]+0xFFFF8838u,c->r[29]); // 801CBE3C
L_801CBE40:;
  c->lr=0x801CBE44u; f_801CC400(c); // 801CBE40
  c->r[11]=c->r[1]+0x00000020u; // 801CBE44
  c->lr=0x801CBE4Cu; f_800C2E98(c); // 801CBE48
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CBE4C
  c->lr=c->r[0]; // 801CBE50
  c->r[1]=c->r[1]+0x00000020u; // 801CBE54
  return; // 801CBE58
}

// GKI_stop_timer
void f_801CBE60(Ctx* __restrict c) {
  trace_call(0x801CBE60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CBE60
  c->r[0]=c->lr; // 801CBE64
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CBE68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CBE6C
  c->r[31]=c->r[3]|c->r[3]; // 801CBE70
  c->lr=0x801CBE78u; f_801CC3F0(c); // 801CBE74
  cmps(c,0,(int32_t)c->r[31],0); // 801CBE78
  if (crb(c,2)) { goto L_801CBE8C; } // 801CBE7C
  cmps(c,0,(int32_t)c->r[31],1); // 801CBE80
  if (crb(c,2)) { goto L_801CBEB0; } // 801CBE84
  goto L_801CBED0; // 801CBE88
L_801CBE8C:;
  c->r[4]=0u+0x80450000u; // 801CBE8C
  c->r[3]=rotl(c->r[3],2)&0x000003FCu; // 801CBE90
  c->r[4]=c->r[4]+0x00006C20u; // 801CBE94
  c->r[5]=0u+0x00000000u; // 801CBE98
  c->r[0]=c->r[4]+0x00030000u; // 801CBE9C
  c->r[3]=c->r[0]+c->r[3]; // 801CBEA0
  W32(c->r[3]+0xFFFF8880u,c->r[5]); // 801CBEA4
  W32(c->r[3]+0xFFFF8860u,c->r[5]); // 801CBEA8
  goto L_801CBED0; // 801CBEAC
L_801CBEB0:;
  c->r[4]=0u+0x80450000u; // 801CBEB0
  c->r[3]=rotl(c->r[3],2)&0x000003FCu; // 801CBEB4
  c->r[4]=c->r[4]+0x00006C20u; // 801CBEB8
  c->r[5]=0u+0x00000000u; // 801CBEBC
  c->r[0]=c->r[4]+0x00030000u; // 801CBEC0
  c->r[3]=c->r[0]+c->r[3]; // 801CBEC4
  W32(c->r[3]+0xFFFF88C0u,c->r[5]); // 801CBEC8
  W32(c->r[3]+0xFFFF88A0u,c->r[5]); // 801CBECC
L_801CBED0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CBED0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CBED4
  c->lr=c->r[0]; // 801CBED8
  c->r[1]=c->r[1]+0x00000010u; // 801CBEDC
  return; // 801CBEE0
}

// GKI_init_timer_list
void f_801CBEF0(Ctx* __restrict c) {
  trace_call(0x801CBEF0u);
  c->r[0]=0u+0x00000000u; // 801CBEF0
  W32(c->r[3]+0x00000000u,c->r[0]); // 801CBEF4
  W32(c->r[3]+0x00000004u,c->r[0]); // 801CBEF8
  W32(c->r[3]+0x00000008u,c->r[0]); // 801CBEFC
  return; // 801CBF00
}

// GKI_update_timer_list
void f_801CBF10(Ctx* __restrict c) {
  trace_call(0x801CBF10u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 801CBF10
  c->r[7]=0u+0x00000000u; // 801CBF14
  goto L_801CBF28; // 801CBF18
  c->r[0]=c->r[0]|0x00000000u; // 801CBF1C
L_801CBF20:;
  c->r[6]=R32(c->r[6]+0x00000000u); // 801CBF20
  c->r[7]=c->r[7]+0x00000001u; // 801CBF24
L_801CBF28:;
  cmps(c,0,(int32_t)c->r[6],0); // 801CBF28
  if (crb(c,2)) { goto L_801CBF3C; } // 801CBF2C
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 801CBF30
  cmps(c,0,(int32_t)c->r[0],0); // 801CBF34
  if (!crb(c,1)) { IRQCHK(c); goto L_801CBF20; } // 801CBF38
L_801CBF3C:;
  c->r[8]=c->r[4]|c->r[4]; // 801CBF3C
  c->r[0]=0u+0x00000000u; // 801CBF40
  goto L_801CBF68; // 801CBF44
L_801CBF48:;
  c->r[9]=R32(c->r[6]+0x0000000Cu); // 801CBF48
  c->r[5]=c->r[9]-c->r[8]; cr0(c,c->r[5]); // 801CBF4C
  W32(c->r[6]+0x0000000Cu,c->r[5]); // 801CBF50
  if (crb(c,1)) { goto L_801CBF60; } // 801CBF54
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 801CBF58
  c->r[7]=c->r[7]+0x00000001u; // 801CBF5C
L_801CBF60:;
  c->r[8]=c->r[8]-c->r[9]; // 801CBF60
  c->r[6]=R32(c->r[6]+0x00000000u); // 801CBF64
L_801CBF68:;
  cmps(c,0,(int32_t)c->r[6],0); // 801CBF68
  if (crb(c,2)) { goto L_801CBF78; } // 801CBF6C
  cmps(c,0,(int32_t)c->r[8],0); // 801CBF70
  if (crb(c,1)) { IRQCHK(c); goto L_801CBF48; } // 801CBF74
L_801CBF78:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 801CBF78
  cmps(c,0,(int32_t)c->r[0],0); // 801CBF7C
  if (!crb(c,1)) { goto L_801CBF98; } // 801CBF80
  c->r[0]=c->r[0]-c->r[4]; cr0(c,c->r[0]); // 801CBF84
  W32(c->r[3]+0x00000008u,c->r[0]); // 801CBF88
  if (!crb(c,0)) { goto L_801CBF98; } // 801CBF8C
  c->r[0]=0u+0x00000000u; // 801CBF90
  W32(c->r[3]+0x00000008u,c->r[0]); // 801CBF94
L_801CBF98:;
  c->r[3]=c->r[7]|c->r[7]; // 801CBF98
  return; // 801CBF9C
}

// GKI_add_to_timer_list
void f_801CBFA0(Ctx* __restrict c) {
  trace_call(0x801CBFA0u);
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 801CBFA0
  cmps(c,0,(int32_t)c->r[5],0); // 801CBFA4
  if (crb(c,0)) return; // 801CBFA8
  c->r[0]=R32(c->r[3]+0x00000008u); // 801CBFAC
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 801CBFB0
  if (crb(c,0)) { goto L_801CC008; } // 801CBFB4
  c->r[0]=R32(c->r[3]+0x00000000u); // 801CBFB8
  cmps(c,0,(int32_t)c->r[0],0); // 801CBFBC
  if (!crb(c,2)) { goto L_801CBFCC; } // 801CBFC0
  W32(c->r[3]+0x00000000u,c->r[4]); // 801CBFC4
  goto L_801CBFE4; // 801CBFC8
L_801CBFCC:;
  c->r[5]=R32(c->r[3]+0x00000004u); // 801CBFCC
  cmps(c,0,(int32_t)c->r[5],0); // 801CBFD0
  if (crb(c,2)) { goto L_801CBFDC; } // 801CBFD4
  W32(c->r[5]+0x00000000u,c->r[4]); // 801CBFD8
L_801CBFDC:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 801CBFDC
  W32(c->r[4]+0x00000004u,c->r[0]); // 801CBFE0
L_801CBFE4:;
  c->r[0]=0u+0x00000000u; // 801CBFE4
  W32(c->r[4]+0x00000000u,c->r[0]); // 801CBFE8
  W32(c->r[3]+0x00000004u,c->r[4]); // 801CBFEC
  c->r[0]=R32(c->r[3]+0x00000008u); // 801CBFF0
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 801CBFF4
  c->r[0]=c->r[5]-c->r[0]; // 801CBFF8
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801CBFFC
  W32(c->r[3]+0x00000008u,c->r[5]); // 801CC000
  goto L_801CC080; // 801CC004
L_801CC008:;
  c->r[6]=R32(c->r[3]+0x00000000u); // 801CC008
  goto L_801CC028; // 801CC00C
L_801CC010:;
  cmps(c,0,(int32_t)c->r[5],0); // 801CC010
  if (!crb(c,1)) { goto L_801CC024; } // 801CC014
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801CC018
  c->r[0]=c->r[0]-c->r[5]; // 801CC01C
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801CC020
L_801CC024:;
  c->r[6]=R32(c->r[6]+0x00000000u); // 801CC024
L_801CC028:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 801CC028
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801CC02C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 801CC030
  if (crb(c,1)) { IRQCHK(c); goto L_801CC010; } // 801CC034
  c->r[0]=R32(c->r[3]+0x00000000u); // 801CC038
  cmpu(c,0,c->r[6],c->r[0]); // 801CC03C
  if (!crb(c,2)) { goto L_801CC058; } // 801CC040
  W32(c->r[4]+0x00000000u,c->r[0]); // 801CC044
  c->r[5]=R32(c->r[3]+0x00000000u); // 801CC048
  W32(c->r[5]+0x00000004u,c->r[4]); // 801CC04C
  W32(c->r[3]+0x00000000u,c->r[4]); // 801CC050
  goto L_801CC070; // 801CC054
L_801CC058:;
  c->r[3]=R32(c->r[6]+0x00000004u); // 801CC058
  W32(c->r[3]+0x00000000u,c->r[4]); // 801CC05C
  c->r[0]=R32(c->r[6]+0x00000004u); // 801CC060
  W32(c->r[4]+0x00000004u,c->r[0]); // 801CC064
  W32(c->r[6]+0x00000004u,c->r[4]); // 801CC068
  W32(c->r[4]+0x00000000u,c->r[6]); // 801CC06C
L_801CC070:;
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 801CC070
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 801CC074
  c->r[0]=c->r[0]-c->r[3]; // 801CC078
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 801CC07C
L_801CC080:;
  c->r[0]=0u+0x00000001u; // 801CC080
  W8(c->r[4]+0x00000016u,c->r[0]); // 801CC084
  return; // 801CC088
}

// GKI_remove_from_timer_list
void f_801CC090(Ctx* __restrict c) {
  trace_call(0x801CC090u);
  cmps(c,0,(int32_t)c->r[4],0); // 801CC090
  if (crb(c,2)) return; // 801CC094
  c->r[0]=R8(c->r[4]+0x00000016u); // 801CC098
  cmps(c,0,(int32_t)c->r[0],0); // 801CC09C
  if (crb(c,2)) return; // 801CC0A0
  c->r[0]=R32(c->r[3]+0x00000000u); // 801CC0A4
  cmps(c,0,(int32_t)c->r[0],0); // 801CC0A8
  if (!crb(c,2)) { goto L_801CC0B4; } // 801CC0AC
  return; // 801CC0B0
L_801CC0B4:;
  c->r[6]=R32(c->r[4]+0x00000000u); // 801CC0B4
  cmps(c,0,(int32_t)c->r[6],0); // 801CC0B8
  if (crb(c,2)) { goto L_801CC0D4; } // 801CC0BC
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 801CC0C0
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 801CC0C4
  c->r[0]=c->r[5]+c->r[0]; // 801CC0C8
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 801CC0CC
  goto L_801CC0E4; // 801CC0D0
L_801CC0D4:;
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 801CC0D4
  c->r[0]=R32(c->r[3]+0x00000008u); // 801CC0D8
  c->r[0]=c->r[0]-c->r[5]; // 801CC0DC
  W32(c->r[3]+0x00000008u,c->r[0]); // 801CC0E0
L_801CC0E4:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801CC0E4
  cmpu(c,0,c->r[0],c->r[4]); // 801CC0E8
  if (!crb(c,2)) { goto L_801CC120; } // 801CC0EC
  c->r[5]=R32(c->r[4]+0x00000000u); // 801CC0F0
  W32(c->r[3]+0x00000000u,c->r[5]); // 801CC0F4
  cmps(c,0,(int32_t)c->r[5],0); // 801CC0F8
  if (crb(c,2)) { goto L_801CC108; } // 801CC0FC
  c->r[0]=0u+0x00000000u; // 801CC100
  W32(c->r[5]+0x00000004u,c->r[0]); // 801CC104
L_801CC108:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 801CC108
  cmpu(c,0,c->r[0],c->r[4]); // 801CC10C
  if (!crb(c,2)) { goto L_801CC198; } // 801CC110
  c->r[0]=0u+0x00000000u; // 801CC114
  W32(c->r[3]+0x00000004u,c->r[0]); // 801CC118
  goto L_801CC198; // 801CC11C
L_801CC120:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 801CC120
  cmpu(c,0,c->r[0],c->r[4]); // 801CC124
  if (!crb(c,2)) { goto L_801CC148; } // 801CC128
  c->r[5]=R32(c->r[4]+0x00000004u); // 801CC12C
  W32(c->r[3]+0x00000004u,c->r[5]); // 801CC130
  cmps(c,0,(int32_t)c->r[5],0); // 801CC134
  if (crb(c,2)) { goto L_801CC198; } // 801CC138
  c->r[0]=0u+0x00000000u; // 801CC13C
  W32(c->r[5]+0x00000000u,c->r[0]); // 801CC140
  goto L_801CC198; // 801CC144
L_801CC148:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 801CC148
  cmps(c,0,(int32_t)c->r[3],0); // 801CC14C
  if (crb(c,2)) return; // 801CC150
  c->r[0]=R32(c->r[3]+0x00000004u); // 801CC154
  cmpu(c,0,c->r[0],c->r[4]); // 801CC158
  if (!crb(c,2)) return; // 801CC15C
  c->r[0]=R32(c->r[4]+0x00000004u); // 801CC160
  W32(c->r[3]+0x00000004u,c->r[0]); // 801CC164
  goto L_801CC170; // 801CC168
  return; // 801CC16C
L_801CC170:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 801CC170
  cmps(c,0,(int32_t)c->r[3],0); // 801CC174
  if (crb(c,2)) return; // 801CC178
  c->r[0]=R32(c->r[3]+0x00000000u); // 801CC17C
  cmpu(c,0,c->r[0],c->r[4]); // 801CC180
  if (!crb(c,2)) return; // 801CC184
  c->r[0]=R32(c->r[4]+0x00000000u); // 801CC188
  W32(c->r[3]+0x00000000u,c->r[0]); // 801CC18C
  goto L_801CC198; // 801CC190
  return; // 801CC194
L_801CC198:;
  c->r[3]=0u+0x00000000u; // 801CC198
  c->r[0]=0u+0x80000000u; // 801CC19C
  W32(c->r[4]+0x00000004u,c->r[3]); // 801CC1A0
  W32(c->r[4]+0x00000000u,c->r[3]); // 801CC1A4
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801CC1A8
  W8(c->r[4]+0x00000016u,c->r[3]); // 801CC1AC
  return; // 801CC1B0
}

// GKI_init
void f_801CC1C0(Ctx* __restrict c) {
  trace_call(0x801CC1C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC1C0
  c->r[0]=c->lr; // 801CC1C4
  c->r[5]=0u+0x00030000u; // 801CC1C8
  c->r[4]=0u+0x00000000u; // 801CC1CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CC1D0
  c->r[5]=c->r[5]+0xFFFF8AE0u; // 801CC1D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CC1D8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CC1DC
  c->r[30]=0u+0x80450000u; // 801CC1E0
  c->r[3]=c->r[30]+0x00006C20u; // 801CC1E4
  c->lr=0x801CC1ECu; f_80004350(c); // 801CC1E8
  c->lr=0x801CC1F0u; f_801CA9B0(c); // 801CC1EC
  c->lr=0x801CC1F4u; f_801CBC30(c); // 801CC1F0
  c->r[31]=c->r[30]+0x00006C20u; // 801CC1F4
  c->r[4]=0u+0x00000001u; // 801CC1F8
  c->r[3]=c->r[31]+0x00030000u; // 801CC1FC
  c->r[0]=0u+0x00000000u; // 801CC200
  W8(c->r[3]+0xFFFF8802u,c->r[4]); // 801CC204
  W32(c->r[3]+0xFFFF87E8u,c->r[0]); // 801CC208
  W32(c->r[3]+0xFFFF8848u,c->r[0]); // 801CC20C
  W16(c->r[3]+0xFFFF880Cu,c->r[0]); // 801CC210
  W8(c->r[30]+0x00006C20u,c->r[0]); // 801CC214
  c->lr=0x801CC21Cu; f_802494E0(c); // 801CC218
  c->r[0]=R8(c->r[30]+0x00006C20u); // 801CC21C
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801CC220
  c->r[4]=c->r[31]+c->r[0]; // 801CC224
  W32(c->r[4]+0x00000004u,c->r[3]); // 801CC228
  c->r[3]=R8(c->r[30]+0x00006C20u); // 801CC22C
  c->r[0]=c->r[3]+0x00000001u; // 801CC230
  W8(c->r[30]+0x00006C20u,c->r[0]); // 801CC234
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CC238
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CC23C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CC240
  c->lr=c->r[0]; // 801CC244
  c->r[1]=c->r[1]+0x00000010u; // 801CC248
  return; // 801CC24C
}

// GKI_shutdown
void f_801CC250(Ctx* __restrict c) {
  trace_call(0x801CC250u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC250
  c->r[0]=c->lr; // 801CC254
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CC258
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CC25C
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CC260
  c->lr=0x801CC268u; f_802494C0(c); // 801CC264
  c->r[30]=0u+0x80450000u; // 801CC268
  c->r[0]=0u+0x00000000u; // 801CC26C
  c->r[5]=R8(c->r[30]+0x00006C20u); // 801CC270
  c->r[31]=c->r[30]+0x00006C20u; // 801CC274
  c->r[4]=c->r[31]+0x00030000u; // 801CC278
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801CC27C
  c->r[5]=c->r[31]+c->r[5]; // 801CC280
  W32(c->r[5]+0x00000004u,c->r[3]); // 801CC284
  c->r[3]=R8(c->r[30]+0x00006C20u); // 801CC288
  c->r[3]=c->r[3]+0x00000001u; // 801CC28C
  W8(c->r[30]+0x00006C20u,c->r[3]); // 801CC290
  W8(c->r[4]+0xFFFF8802u,c->r[0]); // 801CC294
  c->r[3]=R8(c->r[30]+0x00006C20u); // 801CC298
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801CC29C
  W8(c->r[30]+0x00006C20u,c->r[0]); // 801CC2A0
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 801CC2A4
  c->r[3]=c->r[31]+c->r[0]; // 801CC2A8
  c->r[3]=R32(c->r[3]+0x00000004u); // 801CC2AC
  c->lr=0x801CC2B4u; f_80249500(c); // 801CC2B0
  goto L_801CC2D4; // 801CC2B4
L_801CC2B8:;
  c->r[3]=R8(c->r[30]+0x00006C20u); // 801CC2B8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801CC2BC
  W8(c->r[30]+0x00006C20u,c->r[0]); // 801CC2C0
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 801CC2C4
  c->r[3]=c->r[31]+c->r[0]; // 801CC2C8
  c->r[3]=R32(c->r[3]+0x00000004u); // 801CC2CC
  c->lr=0x801CC2D4u; f_80249500(c); // 801CC2D0
L_801CC2D4:;
  c->r[0]=R8(c->r[30]+0x00006C20u); // 801CC2D4
  cmps(c,0,(int32_t)c->r[0],0); // 801CC2D8
  if (!crb(c,2)) { IRQCHK(c); goto L_801CC2B8; } // 801CC2DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CC2E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CC2E4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CC2E8
  c->lr=c->r[0]; // 801CC2EC
  c->r[1]=c->r[1]+0x00000010u; // 801CC2F0
  return; // 801CC2F4
}

// GKI_run
void f_801CC300(Ctx* __restrict c) {
  trace_call(0x801CC300u);
  return; // 801CC300
}

// GKI_sched_lock
void f_801CC310(Ctx* __restrict c) {
  trace_call(0x801CC310u);
  return; // 801CC310
}

// GKI_sched_unlock
void f_801CC320(Ctx* __restrict c) {
  trace_call(0x801CC320u);
  return; // 801CC320
}

// GKI_delay
void f_801CC330(Ctx* __restrict c) {
  trace_call(0x801CC330u);
  return; // 801CC330
}

// GKI_send_event
void f_801CC340(Ctx* __restrict c) {
  trace_call(0x801CC340u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC340
  c->r[0]=c->lr; // 801CC344
  cmpu(c,0,c->r[3],0x00000008u); // 801CC348
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CC34C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CC350
  c->r[31]=c->r[4]|c->r[4]; // 801CC354
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CC358
  c->r[30]=c->r[3]|c->r[3]; // 801CC35C
  if (crb(c,0)) { goto L_801CC36C; } // 801CC360
  c->r[3]=0u+0x00000001u; // 801CC364
  goto L_801CC3CC; // 801CC368
L_801CC36C:;
  c->lr=0x801CC370u; f_802494C0(c); // 801CC36C
  c->r[7]=0u+0x80450000u; // 801CC370
  c->r[0]=rotl(c->r[30],1)&0x000001FEu; // 801CC374
  c->r[5]=R8(c->r[7]+0x00006C20u); // 801CC378
  c->r[6]=c->r[7]+0x00006C20u; // 801CC37C
  c->r[4]=c->r[6]+0x00030000u; // 801CC380
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 801CC384
  c->r[5]=c->r[6]+c->r[5]; // 801CC388
  c->r[4]=c->r[4]+c->r[0]; // 801CC38C
  W32(c->r[5]+0x00000004u,c->r[3]); // 801CC390
  c->r[3]=R8(c->r[7]+0x00006C20u); // 801CC394
  c->r[0]=c->r[3]+0x00000001u; // 801CC398
  W8(c->r[7]+0x00006C20u,c->r[0]); // 801CC39C
  c->r[0]=R16(c->r[4]+0xFFFF8808u); // 801CC3A0
  c->r[0]=c->r[0]|c->r[31]; // 801CC3A4
  W16(c->r[4]+0xFFFF8808u,c->r[0]); // 801CC3A8
  c->r[3]=R8(c->r[7]+0x00006C20u); // 801CC3AC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801CC3B0
  W8(c->r[7]+0x00006C20u,c->r[0]); // 801CC3B4
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 801CC3B8
  c->r[3]=c->r[6]+c->r[0]; // 801CC3BC
  c->r[3]=R32(c->r[3]+0x00000004u); // 801CC3C0
  c->lr=0x801CC3C8u; f_80249500(c); // 801CC3C4
  c->r[3]=0u+0x00000000u; // 801CC3C8
L_801CC3CC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CC3CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CC3D0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CC3D4
  c->lr=c->r[0]; // 801CC3D8
  c->r[1]=c->r[1]+0x00000010u; // 801CC3DC
  return; // 801CC3E0
}

// GKI_get_taskid
void f_801CC3F0(Ctx* __restrict c) {
  trace_call(0x801CC3F0u);
  c->r[3]=0u+0x00000002u; // 801CC3F0
  return; // 801CC3F4
}

// GKI_enable
void f_801CC400(Ctx* __restrict c) {
  trace_call(0x801CC400u);
  c->r[5]=0u+0x80450000u; // 801CC400
  c->r[4]=R8(c->r[5]+0x00006C20u); // 801CC404
  c->r[3]=c->r[5]+0x00006C20u; // 801CC408
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801CC40C
  W8(c->r[5]+0x00006C20u,c->r[0]); // 801CC410
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 801CC414
  c->r[3]=c->r[3]+c->r[0]; // 801CC418
  c->r[3]=R32(c->r[3]+0x00000004u); // 801CC41C
  f_80249500(c); return; // 801CC420
}

// GKI_disable
void f_801CC430(Ctx* __restrict c) {
  trace_call(0x801CC430u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC430
  c->r[0]=c->lr; // 801CC434
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CC438
  c->lr=0x801CC440u; f_802494C0(c); // 801CC43C
  c->r[5]=0u+0x80450000u; // 801CC440
  c->r[0]=R8(c->r[5]+0x00006C20u); // 801CC444
  c->r[4]=c->r[5]+0x00006C20u; // 801CC448
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801CC44C
  c->r[4]=c->r[4]+c->r[0]; // 801CC450
  W32(c->r[4]+0x00000004u,c->r[3]); // 801CC454
  c->r[3]=R8(c->r[5]+0x00006C20u); // 801CC458
  c->r[0]=c->r[3]+0x00000001u; // 801CC45C
  W8(c->r[5]+0x00006C20u,c->r[0]); // 801CC460
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CC464
  c->lr=c->r[0]; // 801CC468
  c->r[1]=c->r[1]+0x00000010u; // 801CC46C
  return; // 801CC470
}

// GKI_exception
void f_801CC480(Ctx* __restrict c) {
  trace_call(0x801CC480u);
  return; // 801CC480
}

// GKI_os_malloc
void f_801CC490(Ctx* __restrict c) {
  trace_call(0x801CC490u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC490
  c->r[0]=c->lr; // 801CC494
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CC498
  c->lr=0x801CC4A0u; f_80271D50(c); // 801CC49C
  cmps(c,0,(int32_t)c->r[3],0); // 801CC4A0
  if (!crb(c,2)) { goto L_801CC4AC; } // 801CC4A4
  c->r[3]=0u+0x00000000u; // 801CC4A8
L_801CC4AC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CC4AC
  c->lr=c->r[0]; // 801CC4B0
  c->r[1]=c->r[1]+0x00000010u; // 801CC4B4
  return; // 801CC4B8
}

// GKI_os_free
void f_801CC4C0(Ctx* __restrict c) {
  trace_call(0x801CC4C0u);
  f_80271D70(c); return; // 801CC4C0
}

// fn_801CC4D0
void f_801CC4D0(Ctx* __restrict c) {
  trace_call(0x801CC4D0u);
  cmps(c,0,(int32_t)c->r[3],4); // 801CC4D0
  if (!crb(c,2)) return; // 801CC4D4
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 801CC4D8
  f_801CDBF0(c); return; // 801CC4DC
}

// fn_801CC4E0
void f_801CC4E0(Ctx* __restrict c) {
  trace_call(0x801CC4E0u);
  return; // 801CC4E0
}

// hcisu_h2_receive_msg
void f_801CC4F0(Ctx* __restrict c) {
  trace_call(0x801CC4F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC4F0
  c->r[0]=c->lr; // 801CC4F4
  W32(c->r[1]+0x00000064u,c->r[0]); // 801CC4F8
  c->r[11]=c->r[1]+0x00000060u; // 801CC4FC
  c->lr=0x801CC504u; f_800C2E18(c); // 801CC500
  c->r[0]=R8(c->r[4]+0x0000001Eu); // 801CC504
  c->r[15]=c->r[4]|c->r[4]; // 801CC508
  c->r[19]=0u+0x00000000u; // 801CC50C
  cmpu(c,0,c->r[0],0x00000002u); // 801CC510
  if (crb(c,2)) { goto L_801CC520; } // 801CC514
  c->r[3]=0u+0x00000000u; // 801CC518
  goto L_801CC870; // 801CC51C
L_801CC520:;
  c->r[20]=c->r[3]+0x00000001u; // 801CC520
  c->r[0]=rotl(c->r[3],1)&0x0001FFFEu; // 801CC524
  c->r[31]=0u+0x80480000u; // 801CC528
  c->r[22]=c->r[4]+c->r[3]; // 801CC52C
  c->r[16]=rotl(c->r[20],0)&0x0000FFFFu; // 801CC530
  c->r[23]=rotl(c->r[3],2)&0x0003FFFCu; // 801CC534
  c->r[21]=c->r[4]+c->r[0]; // 801CC538
  c->r[31]=c->r[31]+0xFFFFF700u; // 801CC53C
  c->r[29]=0u+0x00000000u; // 801CC540
  c->r[30]=0u+0x00000004u; // 801CC544
  c->r[28]=c->r[2]+0xFFFFB010u; // 801CC548
  c->r[25]=0u+0x00000003u; // 801CC54C
  c->r[24]=0u+0x00000002u; // 801CC550
  c->r[14]=0u+0x803A0000u; // 801CC554
  c->r[26]=c->r[2]+0xFFFFB018u; // 801CC558
  c->r[27]=0u+0x00000001u; // 801CC55C
L_801CC560:;
  c->r[3]=rotl(c->r[16],0)&0x000000FFu; // 801CC560
  c->r[4]=c->r[1]+0x00000008u; // 801CC564
  c->r[5]=0u+0x00000001u; // 801CC568
  c->lr=0x801CC570u; f_801CD4F0(c); // 801CC56C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801CC570
  if (crb(c,2)) { goto L_801CC86C; } // 801CC574
  c->r[0]=R8(c->r[22]+0x0000001Au); // 801CC578
  c->r[17]=0u+0x00000000u; // 801CC57C
  c->r[19]=c->r[19]+0x00000001u; // 801CC580
  cmps(c,0,(int32_t)c->r[0],0); // 801CC584
  if (crb(c,2)) { goto L_801CC5B0; } // 801CC588
  cmps(c,0,(int32_t)c->r[0],1); // 801CC58C
  if (crb(c,2)) { goto L_801CC658; } // 801CC590
  cmps(c,0,(int32_t)c->r[0],2); // 801CC594
  if (crb(c,2)) { goto L_801CC750; } // 801CC598
  cmps(c,0,(int32_t)c->r[0],3); // 801CC59C
  if (crb(c,2)) { goto L_801CC79C; } // 801CC5A0
  cmps(c,0,(int32_t)c->r[0],4); // 801CC5A4
  if (crb(c,2)) { goto L_801CC834; } // 801CC5A8
  goto L_801CC84C; // 801CC5AC
L_801CC5B0:;
  cmpu(c,0,c->r[16],0x00000001u); // 801CC5B0
  if (!crb(c,2)) { goto L_801CC5CC; } // 801CC5B4
  c->r[3]=0u+0x00000002u; // 801CC5B8
  c->lr=0x801CC5C0u; f_801CAE20(c); // 801CC5BC
  W32(c->r[15]+c->r[23],c->r[3]); // 801CC5C0
  W8(c->r[22]+0x00000014u,c->r[30]); // 801CC5C4
  goto L_801CC600; // 801CC5C8
L_801CC5CC:;
  cmpu(c,0,c->r[16],0x00000002u); // 801CC5CC
  if (!crb(c,2)) { goto L_801CC5E8; } // 801CC5D0
  c->r[3]=0u+0x00000003u; // 801CC5D4
  c->lr=0x801CC5DCu; f_801CAE20(c); // 801CC5D8
  W32(c->r[15]+c->r[23],c->r[3]); // 801CC5DC
  W8(c->r[22]+0x00000014u,c->r[24]); // 801CC5E0
  goto L_801CC600; // 801CC5E4
L_801CC5E8:;
  cmpu(c,0,c->r[16],0x00000003u); // 801CC5E8
  if (!crb(c,2)) { goto L_801CC84C; } // 801CC5EC
  c->r[3]=0u+0x00000001u; // 801CC5F0
  c->lr=0x801CC5F8u; f_801CAE20(c); // 801CC5F4
  W32(c->r[15]+c->r[23],c->r[3]); // 801CC5F8
  W8(c->r[22]+0x00000014u,c->r[25]); // 801CC5FC
L_801CC600:;
  c->r[3]=R32(c->r[15]+c->r[23]); // 801CC600
  cmps(c,0,(int32_t)c->r[3],0); // 801CC604
  if (crb(c,2)) { goto L_801CC638; } // 801CC608
  W16(c->r[3]+0x00000002u,c->r[29]); // 801CC60C
  c->r[0]=R8(c->r[22]+0x00000014u); // 801CC610
  c->r[3]=R32(c->r[15]+c->r[23]); // 801CC614
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 801CC618
  c->r[4]=c->r[26]+c->r[0]; // 801CC61C
  c->r[0]=R16(c->r[4]+0xFFFFFFFEu); // 801CC620
  W16(c->r[3]+0x00000000u,c->r[0]); // 801CC624
  c->r[3]=R32(c->r[15]+c->r[23]); // 801CC628
  W16(c->r[3]+0x00000004u,c->r[29]); // 801CC62C
  W8(c->r[22]+0x0000001Au,c->r[27]); // 801CC630
  goto L_801CC648; // 801CC634
L_801CC638:;
  c->r[4]=c->r[14]+0xFFFFE2F0u; // 801CC638
  c->r[3]=0u+0x00070000u; // 801CC63C
  c->lr=0x801CC644u; f_801CD9D0(c); // 801CC640
  W8(c->r[22]+0x0000001Au,c->r[24]); // 801CC644
L_801CC648:;
  c->r[0]=R8(c->r[22]+0x00000014u); // 801CC648
  c->r[3]=c->r[28]+c->r[0]; // 801CC64C
  c->r[0]=R8(c->r[3]+0xFFFFFFFFu); // 801CC650
  W16(c->r[21]+0x0000000Cu,c->r[0]); // 801CC654
L_801CC658:;
  c->r[6]=R32(c->r[15]+c->r[23]); // 801CC658
  c->r[5]=R8(c->r[1]+0x00000008u); // 801CC65C
  c->r[4]=R16(c->r[6]+0x00000002u); // 801CC660
  c->r[3]=c->r[6]+c->r[4]; // 801CC664
  c->r[0]=c->r[4]+0x00000001u; // 801CC668
  W8(c->r[3]+0x00000008u,c->r[5]); // 801CC66C
  W16(c->r[6]+0x00000002u,c->r[0]); // 801CC670
  c->r[3]=R16(c->r[21]+0x0000000Cu); // 801CC674
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801CC678
  W16(c->r[21]+0x0000000Cu,c->r[0]); // 801CC67C
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801CC680
  if (!crb(c,2)) { goto L_801CC744; } // 801CC684
  c->r[0]=R8(c->r[22]+0x00000014u); // 801CC688
  c->r[18]=R8(c->r[1]+0x00000008u); // 801CC68C
  cmpu(c,0,c->r[0],0x00000002u); // 801CC690
  if (!crb(c,2)) { goto L_801CC6D8; } // 801CC694
  c->r[0]=R8(c->r[22]+0x00000017u); // 801CC698
  c->r[4]=rotl(c->r[18],8)&0x00FFFF00u; // 801CC69C
  c->r[3]=R32(c->r[15]+c->r[23]); // 801CC6A0
  c->r[0]=c->r[4]+c->r[0]; // 801CC6A4
  c->r[18]=rotl(c->r[0],0)&0x0000FFFFu; // 801CC6A8
  c->lr=0x801CC6B0u; f_801E9120(c); // 801CC6AC
  cmps(c,0,(int32_t)c->r[3],0); // 801CC6B0
  W32(c->r[15]+c->r[23],c->r[3]); // 801CC6B4
  if (!crb(c,2)) { goto L_801CC6D8; } // 801CC6B8
  cmps(c,0,(int32_t)c->r[18],0); // 801CC6BC
  W16(c->r[21]+0x0000000Cu,c->r[18]); // 801CC6C0
  if (!crb(c,2)) { goto L_801CC6D0; } // 801CC6C4
  W8(c->r[22]+0x0000001Au,c->r[29]); // 801CC6C8
  goto L_801CC84C; // 801CC6CC
L_801CC6D0:;
  W8(c->r[22]+0x0000001Au,c->r[30]); // 801CC6D0
  goto L_801CC84C; // 801CC6D4
L_801CC6D8:;
  W16(c->r[21]+0x0000000Cu,c->r[18]); // 801CC6D8
  c->r[3]=R32(c->r[15]+c->r[23]); // 801CC6DC
  c->lr=0x801CC6E4u; f_801CB080(c); // 801CC6E0
  c->r[0]=R8(c->r[22]+0x00000014u); // 801CC6E4
  c->r[4]=rotl(c->r[3],0)&0x0000FFFFu; // 801CC6E8
  c->r[3]=c->r[28]+c->r[0]; // 801CC6EC
  c->r[0]=R8(c->r[3]+0xFFFFFFFFu); // 801CC6F0
  c->r[3]=c->r[18]+c->r[0]; // 801CC6F4
  c->r[0]=c->r[3]+0x00000008u; // 801CC6F8
  cmpu(c,0,c->r[0],c->r[4]); // 801CC6FC
  if (!crb(c,1)) { goto L_801CC728; } // 801CC700
  c->r[3]=R32(c->r[15]+c->r[23]); // 801CC704
  c->lr=0x801CC70Cu; f_801CAF10(c); // 801CC708
  W32(c->r[15]+c->r[23],c->r[29]); // 801CC70C
  c->r[3]=0u+0x803A0000u; // 801CC710
  c->r[4]=c->r[3]+0xFFFFE32Cu; // 801CC714
  W8(c->r[22]+0x0000001Au,c->r[30]); // 801CC718
  c->r[3]=0u+0x00070000u; // 801CC71C
  c->lr=0x801CC724u; f_801CD9D0(c); // 801CC720
  goto L_801CC84C; // 801CC724
L_801CC728:;
  cmps(c,0,(int32_t)c->r[18],0); // 801CC728
  if (crb(c,2)) { goto L_801CC738; } // 801CC72C
  W8(c->r[22]+0x0000001Au,c->r[25]); // 801CC730
  goto L_801CC84C; // 801CC734
L_801CC738:;
  W8(c->r[22]+0x0000001Au,c->r[29]); // 801CC738
  c->r[17]=0u+0x00000001u; // 801CC73C
  goto L_801CC84C; // 801CC740
L_801CC744:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 801CC744
  W8(c->r[22]+0x00000017u,c->r[0]); // 801CC748
  goto L_801CC84C; // 801CC74C
L_801CC750:;
  c->r[3]=R16(c->r[21]+0x0000000Cu); // 801CC750
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801CC754
  W16(c->r[21]+0x0000000Cu,c->r[0]); // 801CC758
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801CC75C
  if (!crb(c,2)) { goto L_801CC790; } // 801CC760
  c->r[0]=R8(c->r[22]+0x00000014u); // 801CC764
  c->r[3]=R8(c->r[1]+0x00000008u); // 801CC768
  cmpu(c,0,c->r[0],0x00000002u); // 801CC76C
  if (!crb(c,2)) { goto L_801CC784; } // 801CC770
  c->r[0]=R8(c->r[22]+0x00000017u); // 801CC774
  c->r[3]=rotl(c->r[3],8)&0x00FFFF00u; // 801CC778
  c->r[0]=c->r[3]+c->r[0]; // 801CC77C
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801CC780
L_801CC784:;
  W16(c->r[21]+0x0000000Cu,c->r[3]); // 801CC784
  W8(c->r[22]+0x0000001Au,c->r[30]); // 801CC788
  goto L_801CC84C; // 801CC78C
L_801CC790:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 801CC790
  W8(c->r[22]+0x00000017u,c->r[0]); // 801CC794
  goto L_801CC84C; // 801CC798
L_801CC79C:;
  c->r[7]=R32(c->r[15]+c->r[23]); // 801CC79C
  c->r[3]=rotl(c->r[20],0)&0x000000FFu; // 801CC7A0
  c->r[6]=R8(c->r[1]+0x00000008u); // 801CC7A4
  c->r[5]=R16(c->r[7]+0x00000002u); // 801CC7A8
  c->r[4]=c->r[7]+c->r[5]; // 801CC7AC
  c->r[0]=c->r[5]+0x00000001u; // 801CC7B0
  W8(c->r[4]+0x00000008u,c->r[6]); // 801CC7B4
  W16(c->r[7]+0x00000002u,c->r[0]); // 801CC7B8
  c->r[4]=R16(c->r[21]+0x0000000Cu); // 801CC7BC
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801CC7C0
  W16(c->r[21]+0x0000000Cu,c->r[0]); // 801CC7C4
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 801CC7C8
  c->r[4]=R32(c->r[15]+c->r[23]); // 801CC7CC
  c->r[0]=R16(c->r[4]+0x00000002u); // 801CC7D0
  c->r[4]=c->r[4]+c->r[0]; // 801CC7D4
  c->r[4]=c->r[4]+0x00000008u; // 801CC7D8
  c->lr=0x801CC7E0u; f_801CD4F0(c); // 801CC7DC
  c->r[4]=R32(c->r[15]+c->r[23]); // 801CC7E0
  c->r[19]=c->r[19]+c->r[3]; // 801CC7E4
  c->r[0]=R16(c->r[4]+0x00000002u); // 801CC7E8
  c->r[0]=c->r[0]+c->r[3]; // 801CC7EC
  W16(c->r[4]+0x00000002u,c->r[0]); // 801CC7F0
  c->r[0]=R16(c->r[21]+0x0000000Cu); // 801CC7F4
  c->r[0]=c->r[0]-c->r[3]; // 801CC7F8
  W16(c->r[21]+0x0000000Cu,c->r[0]); // 801CC7FC
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801CC800
  if (!crb(c,2)) { goto L_801CC84C; } // 801CC804
  c->r[0]=R8(c->r[22]+0x00000014u); // 801CC808
  cmpu(c,0,c->r[0],0x00000002u); // 801CC80C
  if (!crb(c,2)) { goto L_801CC828; } // 801CC810
  c->lr=0x801CC818u; f_801E92F0(c); // 801CC814
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801CC818
  if (!crb(c,2)) { goto L_801CC828; } // 801CC81C
  W8(c->r[22]+0x0000001Au,c->r[29]); // 801CC820
  goto L_801CC84C; // 801CC824
L_801CC828:;
  W8(c->r[22]+0x0000001Au,c->r[29]); // 801CC828
  c->r[17]=0u+0x00000001u; // 801CC82C
  goto L_801CC84C; // 801CC830
L_801CC834:;
  c->r[3]=R16(c->r[21]+0x0000000Cu); // 801CC834
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801CC838
  W16(c->r[21]+0x0000000Cu,c->r[0]); // 801CC83C
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801CC840
  if (!crb(c,2)) { goto L_801CC84C; } // 801CC844
  W8(c->r[22]+0x0000001Au,c->r[29]); // 801CC848
L_801CC84C:;
  cmps(c,0,(int32_t)c->r[17],0); // 801CC84C
  if (crb(c,2)) { IRQCHK(c); goto L_801CC560; } // 801CC850
  c->r[3]=R8(c->r[31]+0x0000001Fu); // 801CC854
  c->r[4]=0u+0x00000000u; // 801CC858
  c->r[5]=R32(c->r[15]+c->r[23]); // 801CC85C
  c->lr=0x801CC864u; f_801CB0D0(c); // 801CC860
  W32(c->r[15]+c->r[23],c->r[29]); // 801CC864
  IRQCHK(c); goto L_801CC560; // 801CC868
L_801CC86C:;
  c->r[3]=c->r[19]|c->r[19]; // 801CC86C
L_801CC870:;
  c->r[11]=c->r[1]+0x00000060u; // 801CC870
  c->lr=0x801CC878u; f_800C2E64(c); // 801CC874
  c->r[0]=R32(c->r[1]+0x00000064u); // 801CC878
  c->lr=c->r[0]; // 801CC87C
  c->r[1]=c->r[1]+0x00000060u; // 801CC880
  return; // 801CC884
}

// hcisu_h2_send_msg_now
void f_801CC890(Ctx* __restrict c) {
  trace_call(0x801CC890u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CC890
  c->r[0]=c->lr; // 801CC894
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CC898
  c->r[11]=c->r[1]+0x00000020u; // 801CC89C
  c->lr=0x801CC8A4u; f_800C2E4C(c); // 801CC8A0
  c->r[5]=R16(c->r[4]+0x00000000u); // 801CC8A4
  c->r[27]=c->r[4]|c->r[4]; // 801CC8A8
  c->r[0]=R16(c->r[4]+0x00000004u); // 801CC8AC
  cmpu(c,0,c->r[5],0x00002100u); // 801CC8B0
  c->r[3]=c->r[4]+c->r[0]; // 801CC8B4
  c->r[6]=c->r[3]+0x00000008u; // 801CC8B8
  if (!crb(c,2)) { goto L_801CC8C8; } // 801CC8BC
  c->r[28]=0u+0x00000002u; // 801CC8C0
  goto L_801CC8E4; // 801CC8C4
L_801CC8C8:;
  cmpu(c,0,c->r[5],0x00002200u); // 801CC8C8
  if (!crb(c,2)) { goto L_801CC8D8; } // 801CC8CC
  c->r[28]=0u+0x00000003u; // 801CC8D0
  goto L_801CC8E4; // 801CC8D4
L_801CC8D8:;
  cmpu(c,0,c->r[5],0x00002000u); // 801CC8D8
  if (!crb(c,2)) { goto L_801CC8E4; } // 801CC8DC
  c->r[28]=0u+0x00000000u; // 801CC8E0
L_801CC8E4:;
  cmpu(c,0,c->r[5],0x00002100u); // 801CC8E4
  if (!crb(c,2)) { goto L_801CCA08; } // 801CC8E8
  c->r[3]=0u+0x80480000u; // 801CC8EC
  c->r[4]=R16(c->r[4]+0x00000002u); // 801CC8F0
  c->r[30]=c->r[3]+0x00002FB0u; // 801CC8F4
  c->r[0]=R16(c->r[30]+0x0000007Eu); // 801CC8F8
  cmpu(c,0,c->r[4],c->r[0]); // 801CC8FC
  if (!crb(c,1)) { goto L_801CCA08; } // 801CC900
  c->r[0]=R8(c->r[6]+0x00000001u); // 801CC904
  c->r[3]=R8(c->r[6]+0x00000000u); // 801CC908
  c->r[6]=c->r[6]+0x00000002u; // 801CC90C
  c->r[0]=rotl(c->r[0],8)&0x0000FF00u; // 801CC910
  c->r[0]=c->r[3]+c->r[0]; // 801CC914
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801CC918
  c->r[0]=c->r[0]&0x0000CFFFu; cr0(c,c->r[0]); // 801CC91C
  c->r[31]=c->r[0]|0x00001000u; // 801CC920
  c->r[29]=sraw(c,c->r[31],8); // 801CC924
  goto L_801CC9F8; // 801CC928
L_801CC92C:;
  c->r[4]=c->r[6]|c->r[6]; // 801CC92C
  c->r[3]=c->r[28]|c->r[28]; // 801CC930
  c->r[6]=c->r[27]|c->r[27]; // 801CC934
  c->lr=0x801CC93Cu; f_801CD500(c); // 801CC938
  c->r[3]=R16(c->r[27]+0x00000004u); // 801CC93C
  c->r[0]=R16(c->r[30]+0x0000007Cu); // 801CC940
  c->r[4]=R16(c->r[27]+0x00000002u); // 801CC944
  c->r[0]=c->r[3]+c->r[0]; // 801CC948
  W16(c->r[27]+0x00000004u,c->r[0]); // 801CC94C
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801CC950
  c->r[5]=R16(c->r[30]+0x0000007Cu); // 801CC954
  c->r[3]=c->r[27]+c->r[0]; // 801CC958
  c->r[6]=c->r[3]+0x0000000Au; // 801CC95C
  c->r[0]=c->r[4]-c->r[5]; // 801CC960
  W16(c->r[27]+0x00000002u,c->r[0]); // 801CC964
  W8(c->r[3]+0x00000008u,c->r[31]); // 801CC968
  W8(c->r[3]+0x00000009u,c->r[29]); // 801CC96C
  c->r[3]=R16(c->r[27]+0x00000002u); // 801CC970
  c->r[0]=R16(c->r[30]+0x0000007Eu); // 801CC974
  cmpu(c,0,c->r[3],c->r[0]); // 801CC978
  if (!crb(c,1)) { goto L_801CC99C; } // 801CC97C
  c->r[0]=R16(c->r[30]+0x0000007Cu); // 801CC980
  W8(c->r[6]+0x00000000u,c->r[0]); // 801CC984
  c->r[0]=R16(c->r[30]+0x0000007Cu); // 801CC988
  c->r[0]=sraw(c,c->r[0],8); // 801CC98C
  W8(c->r[6]+0x00000001u,c->r[0]); // 801CC990
  c->r[6]=c->r[6]+0x00000002u; // 801CC994
  goto L_801CC9B8; // 801CC998
L_801CC99C:;
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 801CC99C
  W8(c->r[6]+0x00000000u,c->r[0]); // 801CC9A0
  c->r[3]=R16(c->r[27]+0x00000002u); // 801CC9A4
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 801CC9A8
  c->r[0]=sraw(c,c->r[0],8); // 801CC9AC
  W8(c->r[6]+0x00000001u,c->r[0]); // 801CC9B0
  c->r[6]=c->r[6]+0x00000002u; // 801CC9B4
L_801CC9B8:;
  c->r[3]=R16(c->r[27]+0x00000006u); // 801CC9B8
  cmps(c,0,(int32_t)c->r[3],0); // 801CC9BC
  if (crb(c,2)) { goto L_801CC9F8; } // 801CC9C0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801CC9C4
  W16(c->r[27]+0x00000006u,c->r[0]); // 801CC9C8
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; cr0(c,c->r[0]); // 801CC9CC
  if (!crb(c,2)) { goto L_801CC9F8; } // 801CC9D0
  c->r[0]=0u+0x00001900u; // 801CC9D4
  c->r[3]=0u+0x80480000u; // 801CC9D8
  W16(c->r[27]+0x00000000u,c->r[0]); // 801CC9DC
  c->r[3]=c->r[3]+0xFFFFF700u; // 801CC9E0
  c->r[5]=c->r[27]|c->r[27]; // 801CC9E4
  c->r[4]=0u+0x00000000u; // 801CC9E8
  c->r[3]=R8(c->r[3]+0x0000001Fu); // 801CC9EC
  c->lr=0x801CC9F4u; f_801CB0D0(c); // 801CC9F0
  goto L_801CCA24; // 801CC9F4
L_801CC9F8:;
  c->r[5]=R16(c->r[30]+0x0000007Eu); // 801CC9F8
  c->r[0]=R16(c->r[27]+0x00000002u); // 801CC9FC
  cmpu(c,0,c->r[0],c->r[5]); // 801CCA00
  if (crb(c,1)) { IRQCHK(c); goto L_801CC92C; } // 801CCA04
L_801CCA08:;
  c->r[5]=R16(c->r[27]+0x00000002u); // 801CCA08
  c->r[4]=c->r[6]|c->r[6]; // 801CCA0C
  c->r[3]=c->r[28]|c->r[28]; // 801CCA10
  c->r[6]=c->r[27]|c->r[27]; // 801CCA14
  c->lr=0x801CCA1Cu; f_801CD500(c); // 801CCA18
  c->r[3]=c->r[27]|c->r[27]; // 801CCA1C
  c->lr=0x801CCA24u; f_801CAF10(c); // 801CCA20
L_801CCA24:;
  c->r[11]=c->r[1]+0x00000020u; // 801CCA24
  c->lr=0x801CCA2Cu; f_800C2E98(c); // 801CCA28
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CCA2C
  c->lr=c->r[0]; // 801CCA30
  c->r[1]=c->r[1]+0x00000020u; // 801CCA34
  return; // 801CCA38
}

// hcisu_h2_init
void f_801CCA40(Ctx* __restrict c) {
  trace_call(0x801CCA40u);
  c->r[6]=0u+0x80480000u; // 801CCA40
  c->r[0]=0u+0x00000000u; // 801CCA44
  c->r[6]=c->r[6]+0xFFFFF700u; // 801CCA48
  W8(c->r[6]+0x0000001Eu,c->r[0]); // 801CCA4C
  W8(c->r[6]+0x0000001Au,c->r[0]); // 801CCA50
  W8(c->r[6]+0x0000001Bu,c->r[0]); // 801CCA54
  W8(c->r[6]+0x0000001Cu,c->r[0]); // 801CCA58
  W8(c->r[6]+0x0000001Fu,c->r[3]); // 801CCA5C
  W8(c->r[6]+0x00000020u,c->r[4]); // 801CCA60
  W16(c->r[6]+0x00000012u,c->r[5]); // 801CCA64
  return; // 801CCA68
}

// hcisu_h2_open
void f_801CCA70(Ctx* __restrict c) {
  trace_call(0x801CCA70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CCA70
  c->r[0]=c->lr; // 801CCA74
  c->r[5]=0u+0x80480000u; // 801CCA78
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CCA7C
  c->r[0]=0u+0x00000000u; // 801CCA80
  c->r[5]=c->r[5]+0xFFFFF700u; // 801CCA84
  W8(c->r[1]+0x00000013u,c->r[0]); // 801CCA88
  c->r[0]=0u+0x00000002u; // 801CCA8C
  c->r[4]=R16(c->r[3]+0x00000000u); // 801CCA90
  W16(c->r[1]+0x0000000Cu,c->r[4]); // 801CCA94
  c->r[4]=R8(c->r[5]+0x0000001Fu); // 801CCA98
  c->r[6]=R16(c->r[3]+0x00000002u); // 801CCA9C
  c->r[3]=c->r[1]+0x00000008u; // 801CCAA0
  W16(c->r[1]+0x0000000Eu,c->r[6]); // 801CCAA4
  W16(c->r[1]+0x00000010u,c->r[4]); // 801CCAA8
  W8(c->r[5]+0x0000001Eu,c->r[0]); // 801CCAAC
  c->lr=0x801CCAB4u; f_801CD150(c); // 801CCAB0
  c->r[4]=0u+0x801D0000u; // 801CCAB4
  c->r[3]=c->r[1]+0x00000008u; // 801CCAB8
  c->r[4]=c->r[4]+0xFFFFC4D0u; // 801CCABC
  c->lr=0x801CCAC4u; f_801CD360(c); // 801CCAC0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CCAC4
  c->r[3]=0u+0x00000001u; // 801CCAC8
  c->lr=c->r[0]; // 801CCACC
  c->r[1]=c->r[1]+0x00000020u; // 801CCAD0
  return; // 801CCAD4
}

// hcisu_h2_close
void f_801CCAE0(Ctx* __restrict c) {
  trace_call(0x801CCAE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CCAE0
  c->r[0]=c->lr; // 801CCAE4
  c->r[3]=0u+0x80480000u; // 801CCAE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CCAEC
  c->r[3]=c->r[3]+0xFFFFF700u; // 801CCAF0
  c->r[0]=0u+0x00000000u; // 801CCAF4
  W8(c->r[3]+0x0000001Eu,c->r[0]); // 801CCAF8
  c->lr=0x801CCB00u; f_801CD710(c); // 801CCAFC
  c->lr=0x801CCB04u; f_801CD7C0(c); // 801CCB00
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CCB04
  c->lr=c->r[0]; // 801CCB08
  c->r[1]=c->r[1]+0x00000010u; // 801CCB0C
  return; // 801CCB10
}

// hcisu_h2_send
void f_801CCB20(Ctx* __restrict c) {
  trace_call(0x801CCB20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CCB20
  c->r[0]=c->lr; // 801CCB24
  c->r[5]=0u+0x80480000u; // 801CCB28
  c->r[4]=c->r[3]|c->r[3]; // 801CCB2C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CCB30
  c->r[3]=c->r[5]+0xFFFFF700u; // 801CCB34
  c->lr=0x801CCB3Cu; f_801CC890(c); // 801CCB38
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CCB3C
  c->r[3]=0u+0x00000001u; // 801CCB40
  c->lr=c->r[0]; // 801CCB44
  c->r[1]=c->r[1]+0x00000010u; // 801CCB48
  return; // 801CCB4C
}

// hcisu_h2_handle_event
void f_801CCB50(Ctx* __restrict c) {
  trace_call(0x801CCB50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CCB50
  c->r[0]=c->lr; // 801CCB54
  c->r[4]=0u+0x80480000u; // 801CCB58
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CCB5C
  c->r[4]=c->r[4]+0xFFFFF700u; // 801CCB60
  c->r[0]=c->r[3]+0xFFFFFFF8u; // 801CCB64
  c->r[3]=R16(c->r[4]+0x00000012u); // 801CCB68
  c->r[0]=c->r[0]-c->r[3]; // 801CCB6C
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 801CCB70
  c->lr=0x801CCB78u; f_801CC4F0(c); // 801CCB74
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CCB78
  c->r[3]=0u+0x00000000u; // 801CCB7C
  c->lr=c->r[0]; // 801CCB80
  c->r[1]=c->r[1]+0x00000010u; // 801CCB84
  return; // 801CCB88
}

// uusb_CloseDeviceCB
void f_801CCB90(Ctx* __restrict c) {
  trace_call(0x801CCB90u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CCB90
  c->r[0]=c->lr; // 801CCB94
  c->r[4]=0u+0x80480000u; // 801CCB98
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CCB9C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CCBA0
  c->r[31]=c->r[4]+0xFFFFF740u; // 801CCBA4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CCBA8
  c->r[30]=0u+0x00000000u; // 801CCBAC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CCBB0
  c->r[29]=c->r[3]|c->r[3]; // 801CCBB4
  W32(c->r[4]+0xFFFFF740u,c->r[30]); // 801CCBB8
  W8(c->r[31]+0x00000010u,c->r[30]); // 801CCBBC
  W8(c->r[31]+0x00000011u,c->r[30]); // 801CCBC0
  W8(c->r[31]+0x00000012u,c->r[30]); // 801CCBC4
  W8(c->r[31]+0x00000013u,c->r[30]); // 801CCBC8
  W8(c->r[13]+0xFFFF9AC8u,c->r[30]); // 801CCBCC
  c->lr=0x801CCBD4u; f_8025A9D0(c); // 801CCBD0
  c->lr=0x801CCBD8u; f_801CC430(c); // 801CCBD4
  c->r[0]=0u+0x00000005u; // 801CCBD8
  W8(c->r[31]+0x00000029u,c->r[0]); // 801CCBDC
  W8(c->r[31]+0x00000028u,c->r[30]); // 801CCBE0
  W8(c->r[13]+0xFFFF9AC9u,c->r[30]); // 801CCBE4
  c->lr=0x801CCBECu; f_801CC400(c); // 801CCBE8
  c->r[12]=R32(c->r[31]+0x00000020u); // 801CCBEC
  cmps(c,0,(int32_t)c->r[12],0); // 801CCBF0
  if (crb(c,2)) { goto L_801CCC08; } // 801CCBF4
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[29]; // 801CCBF8
  c->r[3]=0u+0x00000004u; // 801CCBFC
  c->ctr=c->r[12]; // 801CCC00
  if (true) { c->lr=0x801CCC08u; dispatch(c,c->ctr); } // 801CCC04
L_801CCC08:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CCC08
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CCC0C
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CCC10
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CCC14
  c->lr=c->r[0]; // 801CCC18
  c->r[1]=c->r[1]+0x00000020u; // 801CCC1C
  return; // 801CCC20
}

// uusb_ReadIntrDataCB
void f_801CCC30(Ctx* __restrict c) {
  trace_call(0x801CCC30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CCC30
  c->r[0]=c->lr; // 801CCC34
  c->r[5]=0u+0x00000000u; // 801CCC38
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CCC3C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CCC40
  c->r[31]=c->r[3]|c->r[3]; // 801CCC44
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CCC48
  c->r[30]=0u+0x80480000u; // 801CCC4C
  c->r[30]=c->r[30]+0xFFFFF740u; // 801CCC50
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CCC54
  c->r[29]=c->r[4]|c->r[4]; // 801CCC58
  W32(c->r[1]+0x00000010u,c->r[28]); // 801CCC5C
  c->r[0]=R8(c->r[30]+0x00000029u); // 801CCC60
  W8(c->r[30]+0x0000002Bu,c->r[5]); // 801CCC64
  cmpu(c,0,c->r[0],0x00000002u); // 801CCC68
  if (crb(c,2)) { goto L_801CCC8C; } // 801CCC6C
  c->r[3]=c->r[29]|c->r[29]; // 801CCC70
  c->lr=0x801CCC78u; f_801CAF10(c); // 801CCC74
  c->r[3]=R8(c->r[30]+0x0000001Cu); // 801CCC78
  c->lr=0x801CCC80u; f_801CBAC0(c); // 801CCC7C
  c->r[0]=0u+0x000000FFu; // 801CCC80
  W8(c->r[30]+0x0000001Cu,c->r[0]); // 801CCC84
  goto L_801CCDB8; // 801CCC88
L_801CCC8C:;
  c->r[0]=0u+0x00000000u; // 801CCC8C
  cmpu(c,0,c->r[4],c->r[0]); // 801CCC90
  if (crb(c,2)) { goto L_801CCD28; } // 801CCC94
  cmps(c,0,(int32_t)c->r[3],0); // 801CCC98
  if (crb(c,1)) { goto L_801CCCAC; } // 801CCC9C
  c->r[3]=c->r[29]|c->r[29]; // 801CCCA0
  c->lr=0x801CCCA8u; f_801CAF10(c); // 801CCCA4
  goto L_801CCD28; // 801CCCA8
L_801CCCAC:;
  c->r[3]=0u+0x00000002u; // 801CCCAC
  c->lr=0x801CCCB4u; f_801CAE20(c); // 801CCCB0
  cmps(c,0,(int32_t)c->r[3],0); // 801CCCB4
  c->r[28]=c->r[3]|c->r[3]; // 801CCCB8
  if (!crb(c,2)) { goto L_801CCCCC; } // 801CCCBC
  c->r[3]=c->r[29]|c->r[29]; // 801CCCC0
  c->lr=0x801CCCC8u; f_801CAF10(c); // 801CCCC4
  goto L_801CCD28; // 801CCCC8
L_801CCCCC:;
  c->r[0]=R16(c->r[29]+0x00000004u); // 801CCCCC
  c->r[5]=0u+0x00001000u; // 801CCCD0
  c->r[4]=rotl(c->r[31],0)&0x0000FFFFu; // 801CCCD4
  W16(c->r[29]+0x00000000u,c->r[5]); // 801CCCD8
  c->r[5]=c->r[4]+c->r[0]; // 801CCCDC
  c->r[0]=c->r[5]+0x00000008u; // 801CCCE0
  W16(c->r[29]+0x00000002u,c->r[31]); // 801CCCE4
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801CCCE8
  c->r[4]=c->r[29]|c->r[29]; // 801CCCEC
  c->r[5]=c->r[5]+0x00000004u; // 801CCCF0
  c->lr=0x801CCCF8u; f_80004000(c); // 801CCCF4
  c->r[5]=0u+0x80480000u; // 801CCCF8
  c->r[7]=0u+0x801D0000u; // 801CCCFC
  c->r[5]=c->r[5]+0xFFFFF7A0u; // 801CCD00
  c->r[3]=c->r[28]|c->r[28]; // 801CCD04
  c->r[8]=c->r[5]+0x00001000u; // 801CCD08
  c->r[7]=c->r[7]+0xFFFFD8D0u; // 801CCD0C
  c->r[4]=0u+0x00000000u; // 801CCD10
  c->r[5]=0u+0x00000000u; // 801CCD14
  c->r[6]=0u+0x00000000u; // 801CCD18
  c->lr=0x801CCD20u; f_80245870(c); // 801CCD1C
  c->r[3]=c->r[29]|c->r[29]; // 801CCD20
  c->lr=0x801CCD28u; f_801CAF10(c); // 801CCD24
L_801CCD28:;
  c->r[30]=0u+0x80480000u; // 801CCD28
  c->r[31]=c->r[30]+0xFFFFF740u; // 801CCD2C
L_801CCD30:;
  c->r[3]=R8(c->r[31]+0x0000001Cu); // 801CCD30
  c->lr=0x801CCD38u; f_801CAE20(c); // 801CCD34
  cmps(c,0,(int32_t)c->r[3],0); // 801CCD38
  c->r[28]=c->r[3]|c->r[3]; // 801CCD3C
  if (crb(c,2)) { IRQCHK(c); goto L_801CCD30; } // 801CCD40
  c->r[0]=0u+0x00001000u; // 801CCD44
  W16(c->r[3]+0x00000000u,c->r[0]); // 801CCD48
  c->r[0]=c->r[3]+0x00000027u; // 801CCD4C
  c->r[4]=0u+0x00000000u; // 801CCD50
  W16(c->r[3]+0x00000002u,c->r[4]); // 801CCD54
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801CCD58
  c->r[0]=c->r[3]+0x00000008u; // 801CCD5C
  c->r[0]=c->r[29]-c->r[0]; // 801CCD60
  W16(c->r[3]+0x00000004u,c->r[0]); // 801CCD64
  c->lr=0x801CCD6Cu; f_801CB080(c); // 801CCD68
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 801CCD6C
  c->r[0]=R16(c->r[28]+0x00000004u); // 801CCD70
  c->r[5]=c->r[3]+0xFFFFFFD8u; // 801CCD74
  c->r[7]=0u+0x801D0000u; // 801CCD78
  c->r[3]=R32(c->r[30]+0xFFFFF740u); // 801CCD7C
  c->r[6]=c->r[29]|c->r[29]; // 801CCD80
  c->r[4]=R8(c->r[31]+0x00000012u); // 801CCD84
  c->r[8]=c->r[28]|c->r[28]; // 801CCD88
  c->r[5]=c->r[5]-c->r[0]; // 801CCD8C
  c->r[7]=c->r[7]+0xFFFFCC30u; // 801CCD90
  c->lr=0x801CCD98u; f_8025B4C0(c); // 801CCD94
  cmps(c,0,(int32_t)c->r[3],0); // 801CCD98
  if (crb(c,2)) { goto L_801CCDA8; } // 801CCD9C
  c->r[3]=c->r[28]|c->r[28]; // 801CCDA0
  c->lr=0x801CCDA8u; f_801CAF10(c); // 801CCDA4
L_801CCDA8:;
  c->r[3]=0u+0x80480000u; // 801CCDA8
  c->r[0]=0u+0x00000001u; // 801CCDAC
  c->r[3]=c->r[3]+0xFFFFF740u; // 801CCDB0
  W8(c->r[3]+0x0000002Bu,c->r[0]); // 801CCDB4
L_801CCDB8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CCDB8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CCDBC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CCDC0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CCDC4
  c->r[28]=R32(c->r[1]+0x00000010u); // 801CCDC8
  c->lr=c->r[0]; // 801CCDCC
  c->r[1]=c->r[1]+0x00000020u; // 801CCDD0
  return; // 801CCDD4
}

// uusb_ReadBulkDataCB
void f_801CCDE0(Ctx* __restrict c) {
  trace_call(0x801CCDE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CCDE0
  c->r[0]=c->lr; // 801CCDE4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CCDE8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CCDEC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CCDF0
  c->r[30]=0u+0x80480000u; // 801CCDF4
  c->r[30]=c->r[30]+0xFFFFF740u; // 801CCDF8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CCDFC
  c->r[29]=c->r[4]|c->r[4]; // 801CCE00
  W32(c->r[1]+0x00000010u,c->r[28]); // 801CCE04
  c->r[0]=R8(c->r[30]+0x00000029u); // 801CCE08
  cmpu(c,0,c->r[0],0x00000002u); // 801CCE0C
  if (crb(c,2)) { goto L_801CCE30; } // 801CCE10
  c->r[3]=c->r[29]|c->r[29]; // 801CCE14
  c->lr=0x801CCE1Cu; f_801CAF10(c); // 801CCE18
  c->r[3]=R8(c->r[30]+0x0000001Du); // 801CCE1C
  c->lr=0x801CCE24u; f_801CBAC0(c); // 801CCE20
  c->r[0]=0u+0x000000FFu; // 801CCE24
  W8(c->r[30]+0x0000001Du,c->r[0]); // 801CCE28
  goto L_801CCF5C; // 801CCE2C
L_801CCE30:;
  cmps(c,0,(int32_t)c->r[3],0); // 801CCE30
  if (crb(c,1)) { goto L_801CCE44; } // 801CCE34
  c->r[3]=c->r[29]|c->r[29]; // 801CCE38
  c->lr=0x801CCE40u; f_801CAF10(c); // 801CCE3C
  goto L_801CCEDC; // 801CCE40
L_801CCE44:;
  W16(c->r[4]+0x00000002u,c->r[3]); // 801CCE44
  c->r[3]=0u+0x00000003u; // 801CCE48
  c->lr=0x801CCE50u; f_801CAE20(c); // 801CCE4C
  cmps(c,0,(int32_t)c->r[3],0); // 801CCE50
  c->r[28]=c->r[3]|c->r[3]; // 801CCE54
  if (!crb(c,2)) { goto L_801CCE68; } // 801CCE58
  c->r[3]=c->r[29]|c->r[29]; // 801CCE5C
  c->lr=0x801CCE64u; f_801CAF10(c); // 801CCE60
  goto L_801CCEDC; // 801CCE64
L_801CCE68:;
  c->r[5]=R16(c->r[29]+0x00000002u); // 801CCE68
  c->r[4]=c->r[29]|c->r[29]; // 801CCE6C
  c->r[0]=R16(c->r[29]+0x00000004u); // 801CCE70
  c->r[5]=c->r[5]+c->r[0]; // 801CCE74
  c->r[0]=c->r[5]+0x00000008u; // 801CCE78
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFFCu; // 801CCE7C
  c->r[5]=c->r[5]+0x00000004u; // 801CCE80
  c->lr=0x801CCE88u; f_80004000(c); // 801CCE84
  c->r[3]=c->r[28]|c->r[28]; // 801CCE88
  c->lr=0x801CCE90u; f_801E9120(c); // 801CCE8C
  c->r[0]=0u+0x00000000u; // 801CCE90
  c->r[28]=c->r[3]|c->r[3]; // 801CCE94
  cmpu(c,0,c->r[3],c->r[0]); // 801CCE98
  if (crb(c,2)) { goto L_801CCED4; } // 801CCE9C
  c->lr=0x801CCEA4u; f_801E92F0(c); // 801CCEA0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801CCEA4
  if (crb(c,2)) { goto L_801CCED4; } // 801CCEA8
  c->r[5]=0u+0x80480000u; // 801CCEAC
  c->r[7]=0u+0x801D0000u; // 801CCEB0
  c->r[5]=c->r[5]+0x000007A0u; // 801CCEB4
  c->r[3]=c->r[28]|c->r[28]; // 801CCEB8
  c->r[8]=c->r[5]+0x00001000u; // 801CCEBC
  c->r[7]=c->r[7]+0xFFFFD8D0u; // 801CCEC0
  c->r[4]=0u+0x00000000u; // 801CCEC4
  c->r[5]=0u+0x00000000u; // 801CCEC8
  c->r[6]=0u+0x00000000u; // 801CCECC
  c->lr=0x801CCED4u; f_80245870(c); // 801CCED0
L_801CCED4:;
  c->r[3]=c->r[29]|c->r[29]; // 801CCED4
  c->lr=0x801CCEDCu; f_801CAF10(c); // 801CCED8
L_801CCEDC:;
  c->r[30]=0u+0x80480000u; // 801CCEDC
  c->r[31]=c->r[30]+0xFFFFF740u; // 801CCEE0
L_801CCEE4:;
  c->r[3]=R8(c->r[31]+0x0000001Du); // 801CCEE4
  c->lr=0x801CCEECu; f_801CAE20(c); // 801CCEE8
  cmps(c,0,(int32_t)c->r[3],0); // 801CCEEC
  c->r[28]=c->r[3]|c->r[3]; // 801CCEF0
  if (crb(c,2)) { IRQCHK(c); goto L_801CCEE4; } // 801CCEF4
  c->r[0]=0u+0x00001100u; // 801CCEF8
  W16(c->r[3]+0x00000000u,c->r[0]); // 801CCEFC
  c->r[0]=c->r[3]+0x00000027u; // 801CCF00
  c->r[4]=0u+0x00000000u; // 801CCF04
  W16(c->r[3]+0x00000002u,c->r[4]); // 801CCF08
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801CCF0C
  c->r[0]=c->r[3]+0x00000008u; // 801CCF10
  c->r[0]=c->r[29]-c->r[0]; // 801CCF14
  W16(c->r[3]+0x00000004u,c->r[0]); // 801CCF18
  c->lr=0x801CCF20u; f_801CB080(c); // 801CCF1C
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 801CCF20
  c->r[0]=R16(c->r[28]+0x00000004u); // 801CCF24
  c->r[5]=c->r[3]+0xFFFFFFD8u; // 801CCF28
  c->r[7]=0u+0x801D0000u; // 801CCF2C
  c->r[3]=R32(c->r[30]+0xFFFFF740u); // 801CCF30
  c->r[6]=c->r[29]|c->r[29]; // 801CCF34
  c->r[4]=R8(c->r[31]+0x00000011u); // 801CCF38
  c->r[8]=c->r[28]|c->r[28]; // 801CCF3C
  c->r[5]=c->r[5]-c->r[0]; // 801CCF40
  c->r[7]=c->r[7]+0xFFFFCDE0u; // 801CCF44
  c->lr=0x801CCF4Cu; f_8025B540(c); // 801CCF48
  cmps(c,0,(int32_t)c->r[3],0); // 801CCF4C
  if (crb(c,2)) { goto L_801CCF5C; } // 801CCF50
  c->r[3]=c->r[28]|c->r[28]; // 801CCF54
  c->lr=0x801CCF5Cu; f_801CAF10(c); // 801CCF58
L_801CCF5C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CCF5C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CCF60
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CCF64
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CCF68
  c->r[28]=R32(c->r[1]+0x00000010u); // 801CCF6C
  c->lr=c->r[0]; // 801CCF70
  c->r[1]=c->r[1]+0x00000020u; // 801CCF74
  return; // 801CCF78
}

// uusb_WriteCtrlDataCB
void f_801CCF80(Ctx* __restrict c) {
  trace_call(0x801CCF80u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CCF80
  c->r[0]=c->lr; // 801CCF84
  cmps(c,0,(int32_t)c->r[4],0); // 801CCF88
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CCF8C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CCF90
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CCF94
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CCF98
  if (crb(c,2)) { goto L_801CCFC4; } // 801CCF9C
  c->r[3]=c->r[4]|c->r[4]; // 801CCFA0
  c->lr=0x801CCFA8u; f_801CAF10(c); // 801CCFA4
  c->lr=0x801CCFACu; f_801CC430(c); // 801CCFA8
  c->r[4]=0u+0x80480000u; // 801CCFAC
  c->r[4]=c->r[4]+0xFFFFF740u; // 801CCFB0
  c->r[3]=R8(c->r[4]+0x00000048u); // 801CCFB4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801CCFB8
  W8(c->r[4]+0x00000048u,c->r[0]); // 801CCFBC
  c->lr=0x801CCFC4u; f_801CC400(c); // 801CCFC0
L_801CCFC4:;
  c->r[30]=0u+0x80480000u; // 801CCFC4
  c->r[31]=c->r[30]+0xFFFFF740u; // 801CCFC8
  c->r[0]=R8(c->r[31]+0x00000048u); // 801CCFCC
  cmpu(c,0,c->r[0],0x00000005u); // 801CCFD0
  if (!crb(c,0)) { goto L_801CD050; } // 801CCFD4
  c->r[0]=R16(c->r[31]+0x00000044u); // 801CCFD8
  cmps(c,0,(int32_t)c->r[0],0); // 801CCFDC
  if (crb(c,2)) { goto L_801CD050; } // 801CCFE0
  c->r[3]=c->r[31]+0x0000003Cu; // 801CCFE4
  c->lr=0x801CCFECu; f_801CB5C0(c); // 801CCFE8
  W32(c->r[1]+0x00000008u,c->r[3]); // 801CCFEC
  c->r[29]=c->r[3]|c->r[3]; // 801CCFF0
  c->r[10]=0u+0x801D0000u; // 801CCFF4
  c->r[4]=0u+0x00000020u; // 801CCFF8
  c->r[0]=R16(c->r[3]+0x00000004u); // 801CCFFC
  c->r[10]=c->r[10]+0xFFFFCF80u; // 801CD000
  c->r[3]=R32(c->r[30]+0xFFFFF740u); // 801CD004
  c->r[5]=0u+0x00000000u; // 801CD008
  c->r[6]=c->r[29]+c->r[0]; // 801CD00C
  c->r[8]=R16(c->r[29]+0x00000002u); // 801CD010
  c->r[9]=c->r[6]+0x00000008u; // 801CD014
  c->r[7]=0u+0x00000000u; // 801CD018
  c->r[6]=0u+0x00000000u; // 801CD01C
  c->lr=0x801CD024u; f_8025BC30(c); // 801CD020
  cmps(c,0,(int32_t)c->r[3],0); // 801CD024
  if (!crb(c,0)) { goto L_801CD03C; } // 801CD028
  c->r[4]=c->r[29]|c->r[29]; // 801CD02C
  c->r[3]=c->r[31]+0x0000003Cu; // 801CD030
  c->lr=0x801CD038u; f_801CB480(c); // 801CD034
  goto L_801CD050; // 801CD038
L_801CD03C:;
  c->lr=0x801CD040u; f_801CC430(c); // 801CD03C
  c->r[3]=R8(c->r[31]+0x00000048u); // 801CD040
  c->r[0]=c->r[3]+0x00000001u; // 801CD044
  W8(c->r[31]+0x00000048u,c->r[0]); // 801CD048
  c->lr=0x801CD050u; f_801CC400(c); // 801CD04C
L_801CD050:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CD050
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CD054
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CD058
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CD05C
  c->lr=c->r[0]; // 801CD060
  c->r[1]=c->r[1]+0x00000020u; // 801CD064
  return; // 801CD068
}

// uusb_WriteBulkDataCB
void f_801CD070(Ctx* __restrict c) {
  trace_call(0x801CD070u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD070
  c->r[0]=c->lr; // 801CD074
  cmps(c,0,(int32_t)c->r[4],0); // 801CD078
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CD07C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CD080
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CD084
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CD088
  if (crb(c,2)) { goto L_801CD0B4; } // 801CD08C
  c->r[3]=c->r[4]|c->r[4]; // 801CD090
  c->lr=0x801CD098u; f_801CAF10(c); // 801CD094
  c->lr=0x801CD09Cu; f_801CC430(c); // 801CD098
  c->r[4]=0u+0x80480000u; // 801CD09C
  c->r[4]=c->r[4]+0xFFFFF740u; // 801CD0A0
  c->r[3]=R8(c->r[4]+0x00000038u); // 801CD0A4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801CD0A8
  W8(c->r[4]+0x00000038u,c->r[0]); // 801CD0AC
  c->lr=0x801CD0B4u; f_801CC400(c); // 801CD0B0
L_801CD0B4:;
  c->r[30]=0u+0x80480000u; // 801CD0B4
  c->r[31]=c->r[30]+0xFFFFF740u; // 801CD0B8
  c->r[0]=R8(c->r[31]+0x00000038u); // 801CD0BC
  cmpu(c,0,c->r[0],0x00000005u); // 801CD0C0
  if (!crb(c,0)) { goto L_801CD134; } // 801CD0C4
  c->r[0]=R16(c->r[31]+0x00000034u); // 801CD0C8
  cmps(c,0,(int32_t)c->r[0],0); // 801CD0CC
  if (crb(c,2)) { goto L_801CD134; } // 801CD0D0
  c->r[3]=c->r[31]+0x0000002Cu; // 801CD0D4
  c->lr=0x801CD0DCu; f_801CB5C0(c); // 801CD0D8
  c->r[0]=R16(c->r[3]+0x00000004u); // 801CD0DC
  c->r[29]=c->r[3]|c->r[3]; // 801CD0E0
  c->r[7]=0u+0x801D0000u; // 801CD0E4
  c->r[3]=R32(c->r[30]+0xFFFFF740u); // 801CD0E8
  c->r[6]=c->r[29]+c->r[0]; // 801CD0EC
  c->r[4]=R8(c->r[31]+0x00000010u); // 801CD0F0
  c->r[5]=R16(c->r[29]+0x00000002u); // 801CD0F4
  c->r[8]=c->r[29]|c->r[29]; // 801CD0F8
  c->r[7]=c->r[7]+0xFFFFD070u; // 801CD0FC
  c->r[6]=c->r[6]+0x00000008u; // 801CD100
  c->lr=0x801CD108u; f_8025B5E0(c); // 801CD104
  cmps(c,0,(int32_t)c->r[3],0); // 801CD108
  if (!crb(c,0)) { goto L_801CD120; } // 801CD10C
  c->r[4]=c->r[29]|c->r[29]; // 801CD110
  c->r[3]=c->r[31]+0x0000002Cu; // 801CD114
  c->lr=0x801CD11Cu; f_801CB480(c); // 801CD118
  goto L_801CD134; // 801CD11C
L_801CD120:;
  c->lr=0x801CD124u; f_801CC430(c); // 801CD120
  c->r[3]=R8(c->r[31]+0x00000038u); // 801CD124
  c->r[0]=c->r[3]+0x00000001u; // 801CD128
  W8(c->r[31]+0x00000038u,c->r[0]); // 801CD12C
  c->lr=0x801CD134u; f_801CC400(c); // 801CD130
L_801CD134:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CD134
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CD138
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CD13C
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CD140
  c->lr=c->r[0]; // 801CD144
  c->r[1]=c->r[1]+0x00000020u; // 801CD148
  return; // 801CD14C
}

// UUSB_Register
void f_801CD150(Ctx* __restrict c) {
  trace_call(0x801CD150u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD150
  c->r[0]=c->lr; // 801CD154
  c->r[4]=0u+0x00000000u; // 801CD158
  c->r[5]=0u+0x0000004Cu; // 801CD15C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CD160
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CD164
  c->r[31]=c->r[3]|c->r[3]; // 801CD168
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CD16C
  c->r[30]=0u+0x80480000u; // 801CD170
  c->r[3]=c->r[30]+0xFFFFF740u; // 801CD174
  c->lr=0x801CD17Cu; f_80004350(c); // 801CD178
  c->lr=0x801CD180u; f_801CC430(c); // 801CD17C
  c->r[30]=c->r[30]+0xFFFFF740u; // 801CD180
  c->r[0]=0u+0x00000005u; // 801CD184
  W8(c->r[30]+0x00000029u,c->r[0]); // 801CD188
  c->lr=0x801CD190u; f_801CC400(c); // 801CD18C
  c->r[0]=R8(c->r[13]+0xFFFF9AC9u); // 801CD190
  cmps(c,0,(int32_t)c->r[0],0); // 801CD194
  if (!crb(c,2)) { goto L_801CD1AC; } // 801CD198
  c->r[3]=0u+0x00000000u; // 801CD19C
  c->r[0]=0u+0x00000001u; // 801CD1A0
  W8(c->r[30]+0x00000028u,c->r[3]); // 801CD1A4
  W8(c->r[13]+0xFFFF9AC9u,c->r[0]); // 801CD1A8
L_801CD1AC:;
  c->lr=0x801CD1B0u; f_80231230(c); // 801CD1AC
  cmps(c,0,(int32_t)c->r[3],0); // 801CD1B0
  if (!crb(c,2)) { goto L_801CD340; } // 801CD1B4
  c->lr=0x801CD1BCu; f_8025A8D0(c); // 801CD1B8
  cmps(c,0,(int32_t)c->r[3],0); // 801CD1BC
  if (!crb(c,2)) { goto L_801CD340; } // 801CD1C0
  c->r[0]=R8(c->r[13]+0xFFFF9AD4u); // 801CD1C4
  c->r[4]=0u+0x80480000u; // 801CD1C8
  c->r[4]=c->r[4]+0xFFFFF740u; // 801CD1CC
  cmpu(c,0,c->r[0],0x00000001u); // 801CD1D0
  W32(c->r[4]+0x00000024u,c->r[31]); // 801CD1D4
  if (!crb(c,2)) { goto L_801CD1F0; } // 801CD1D8
  c->r[3]=R32(c->r[13]+0xFFFF9AD8u); // 801CD1DC
  c->r[0]=R32(c->r[13]+0xFFFF9ADCu); // 801CD1E0
  W32(c->r[4]+0x00000014u,c->r[3]); // 801CD1E4
  W32(c->r[4]+0x00000018u,c->r[0]); // 801CD1E8
  goto L_801CD200; // 801CD1EC
L_801CD1F0:;
  c->r[3]=0u+0x0000057Eu; // 801CD1F0
  c->r[0]=0u+0x00000305u; // 801CD1F4
  W32(c->r[4]+0x00000014u,c->r[3]); // 801CD1F8
  W32(c->r[4]+0x00000018u,c->r[0]); // 801CD1FC
L_801CD200:;
  c->r[0]=R32(c->r[13]+0xFFFF9AD0u); // 801CD200
  c->r[6]=0u+0x80480000u; // 801CD204
  c->r[6]=c->r[6]+0xFFFFF740u; // 801CD208
  c->r[3]=0u+0x00000000u; // 801CD20C
  cmpu(c,0,c->r[0],0x00000001u); // 801CD210
  W8(c->r[6]+0x00000010u,c->r[3]); // 801CD214
  c->r[5]=R32(c->r[6]+0x00000018u); // 801CD218
  W8(c->r[6]+0x00000011u,c->r[3]); // 801CD21C
  c->r[0]=R32(c->r[6]+0x00000014u); // 801CD220
  W8(c->r[6]+0x00000012u,c->r[3]); // 801CD224
  W8(c->r[6]+0x00000013u,c->r[3]); // 801CD228
  if (!crb(c,2)) { goto L_801CD274; } // 801CD22C
  c->r[3]=R32(c->r[13]+0xFFFF9ACCu); // 801CD230
  cmps(c,0,(int32_t)c->r[3],0); // 801CD234
  if (!crb(c,2)) { goto L_801CD254; } // 801CD238
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801CD23C
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 801CD240
  c->r[3]=c->r[13]+0xFFFF8EB8u; // 801CD244
  c->lr=0x801CD24Cu; f_8025AB80(c); // 801CD248
  c->r[30]=c->r[3]|c->r[3]; // 801CD24C
  goto L_801CD288; // 801CD250
L_801CD254:;
  cmpu(c,0,c->r[3],0x00000001u); // 801CD254
  if (!crb(c,2)) { goto L_801CD288; } // 801CD258
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801CD25C
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 801CD260
  c->r[3]=c->r[13]+0xFFFF8EBCu; // 801CD264
  c->lr=0x801CD26Cu; f_8025AB80(c); // 801CD268
  c->r[30]=c->r[3]|c->r[3]; // 801CD26C
  goto L_801CD288; // 801CD270
L_801CD274:;
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 801CD274
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 801CD278
  c->r[3]=c->r[13]+0xFFFF8EBCu; // 801CD27C
  c->lr=0x801CD284u; f_8025AB80(c); // 801CD280
  c->r[30]=c->r[3]|c->r[3]; // 801CD284
L_801CD288:;
  cmps(c,0,(int32_t)c->r[30],0); // 801CD288
  if (crb(c,0)) { goto L_801CD294; } // 801CD28C
  W32(c->r[13]+0xFFFF8EB4u,c->r[30]); // 801CD290
L_801CD294:;
  cmps(c,0,(int32_t)c->r[30],0); // 801CD294
  if (crb(c,0)) { goto L_801CD340; } // 801CD298
  c->r[30]=0u+0x80480000u; // 801CD29C
  c->r[3]=0u+0x00000002u; // 801CD2A0
  c->r[30]=c->r[30]+0xFFFFF740u; // 801CD2A4
  c->r[4]=0u+0x00000082u; // 801CD2A8
  c->r[0]=0u+0x00000081u; // 801CD2AC
  c->r[31]=0u+0x00000000u; // 801CD2B0
  W8(c->r[30]+0x00000010u,c->r[3]); // 801CD2B4
  c->r[3]=c->r[30]+0x0000002Cu; // 801CD2B8
  W8(c->r[30]+0x00000011u,c->r[4]); // 801CD2BC
  W8(c->r[30]+0x00000012u,c->r[0]); // 801CD2C0
  W8(c->r[30]+0x00000013u,c->r[31]); // 801CD2C4
  c->lr=0x801CD2CCu; f_801CAC60(c); // 801CD2C8
  W8(c->r[30]+0x00000038u,c->r[31]); // 801CD2CC
  c->r[3]=c->r[30]+0x0000003Cu; // 801CD2D0
  c->lr=0x801CD2D8u; f_801CAC60(c); // 801CD2D4
  W8(c->r[30]+0x00000048u,c->r[31]); // 801CD2D8
  c->r[3]=0u+0x00000294u; // 801CD2DC
  c->r[4]=0u+0x0000002Du; // 801CD2E0
  c->r[5]=0u+0x00000001u; // 801CD2E4
  c->r[6]=0u+0x00000000u; // 801CD2E8
  c->lr=0x801CD2F0u; f_801CB770(c); // 801CD2EC
  W8(c->r[30]+0x0000001Cu,c->r[3]); // 801CD2F0
  c->r[3]=0u+0x00000708u; // 801CD2F4
  c->r[4]=0u+0x0000001Eu; // 801CD2F8
  c->r[5]=0u+0x00000001u; // 801CD2FC
  c->r[6]=0u+0x00000000u; // 801CD300
  c->lr=0x801CD308u; f_801CB770(c); // 801CD304
  c->r[0]=R8(c->r[30]+0x0000001Cu); // 801CD308
  W8(c->r[30]+0x0000001Du,c->r[3]); // 801CD30C
  cmpu(c,0,c->r[0],0x000000FFu); // 801CD310
  if (crb(c,2)) { goto L_801CD340; } // 801CD314
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801CD318
  cmpu(c,0,c->r[0],0x000000FFu); // 801CD31C
  if (!crb(c,2)) { goto L_801CD328; } // 801CD320
  goto L_801CD340; // 801CD324
L_801CD328:;
  c->lr=0x801CD32Cu; f_801CC430(c); // 801CD328
  c->r[0]=0u+0x00000004u; // 801CD32C
  W8(c->r[30]+0x00000029u,c->r[0]); // 801CD330
  c->lr=0x801CD338u; f_801CC400(c); // 801CD334
  c->r[0]=0u+0x00000001u; // 801CD338
  W32(c->r[13]+0xFFFF8EB0u,c->r[0]); // 801CD33C
L_801CD340:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CD340
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CD344
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CD348
  c->lr=c->r[0]; // 801CD34C
  c->r[1]=c->r[1]+0x00000010u; // 801CD350
  return; // 801CD354
}

// UUSB_Open
void f_801CD360(Ctx* __restrict c) {
  trace_call(0x801CD360u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD360
  c->r[0]=c->lr; // 801CD364
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CD368
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CD36C
  c->r[31]=0u+0x80480000u; // 801CD370
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CD374
  c->r[30]=c->r[31]+0xFFFFF740u; // 801CD378
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CD37C
  W32(c->r[1]+0x00000010u,c->r[28]); // 801CD380
  c->r[28]=c->r[4]|c->r[4]; // 801CD384
  c->r[0]=R8(c->r[30]+0x00000029u); // 801CD388
  cmpu(c,0,c->r[0],0x00000004u); // 801CD38C
  if (!crb(c,2)) { goto L_801CD4CC; } // 801CD390
  c->r[0]=R8(c->r[30]+0x0000001Cu); // 801CD394
  cmpu(c,0,c->r[0],0x000000FFu); // 801CD398
  if (crb(c,2)) { goto L_801CD4CC; } // 801CD39C
  c->r[0]=R8(c->r[30]+0x0000001Du); // 801CD3A0
  cmpu(c,0,c->r[0],0x000000FFu); // 801CD3A4
  if (!crb(c,2)) { goto L_801CD3B0; } // 801CD3A8
  goto L_801CD4CC; // 801CD3AC
L_801CD3B0:;
  c->lr=0x801CD3B4u; f_801CC430(c); // 801CD3B0
  c->r[0]=0u+0x00000002u; // 801CD3B4
  W32(c->r[30]+0x00000020u,c->r[28]); // 801CD3B8
  W8(c->r[30]+0x00000029u,c->r[0]); // 801CD3BC
  c->lr=0x801CD3C4u; f_801CC400(c); // 801CD3C0
L_801CD3C4:;
  c->r[3]=R8(c->r[30]+0x0000001Cu); // 801CD3C4
  c->lr=0x801CD3CCu; f_801CAE20(c); // 801CD3C8
  cmps(c,0,(int32_t)c->r[3],0); // 801CD3CC
  c->r[28]=c->r[3]|c->r[3]; // 801CD3D0
  if (crb(c,2)) { IRQCHK(c); goto L_801CD3C4; } // 801CD3D4
  c->r[0]=0u+0x00001000u; // 801CD3D8
  W16(c->r[3]+0x00000000u,c->r[0]); // 801CD3DC
  c->r[0]=c->r[3]+0x00000027u; // 801CD3E0
  c->r[4]=0u+0x00000000u; // 801CD3E4
  W16(c->r[3]+0x00000002u,c->r[4]); // 801CD3E8
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801CD3EC
  c->r[0]=c->r[3]+0x00000008u; // 801CD3F0
  c->r[0]=c->r[29]-c->r[0]; // 801CD3F4
  W16(c->r[3]+0x00000004u,c->r[0]); // 801CD3F8
  c->lr=0x801CD400u; f_801CB080(c); // 801CD3FC
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 801CD400
  c->r[0]=R16(c->r[28]+0x00000004u); // 801CD404
  c->r[5]=c->r[3]+0xFFFFFFD8u; // 801CD408
  c->r[7]=0u+0x801D0000u; // 801CD40C
  c->r[3]=R32(c->r[31]+0xFFFFF740u); // 801CD410
  c->r[6]=c->r[29]|c->r[29]; // 801CD414
  c->r[4]=R8(c->r[30]+0x00000012u); // 801CD418
  c->r[8]=c->r[28]|c->r[28]; // 801CD41C
  c->r[5]=c->r[5]-c->r[0]; // 801CD420
  c->r[7]=c->r[7]+0xFFFFCC30u; // 801CD424
  c->lr=0x801CD42Cu; f_8025B4C0(c); // 801CD428
  cmps(c,0,(int32_t)c->r[3],0); // 801CD42C
  if (crb(c,2)) { goto L_801CD43C; } // 801CD430
  c->r[3]=c->r[28]|c->r[28]; // 801CD434
  c->lr=0x801CD43Cu; f_801CAF10(c); // 801CD438
L_801CD43C:;
  c->r[30]=0u+0x80480000u; // 801CD43C
  c->r[0]=0u+0x00000001u; // 801CD440
  c->r[31]=c->r[30]+0xFFFFF740u; // 801CD444
  W8(c->r[31]+0x0000002Bu,c->r[0]); // 801CD448
L_801CD44C:;
  c->r[3]=R8(c->r[31]+0x0000001Du); // 801CD44C
  c->lr=0x801CD454u; f_801CAE20(c); // 801CD450
  cmps(c,0,(int32_t)c->r[3],0); // 801CD454
  c->r[29]=c->r[3]|c->r[3]; // 801CD458
  if (crb(c,2)) { IRQCHK(c); goto L_801CD44C; } // 801CD45C
  c->r[0]=0u+0x00001100u; // 801CD460
  W16(c->r[3]+0x00000000u,c->r[0]); // 801CD464
  c->r[0]=c->r[3]+0x00000027u; // 801CD468
  c->r[4]=0u+0x00000000u; // 801CD46C
  W16(c->r[3]+0x00000002u,c->r[4]); // 801CD470
  c->r[28]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801CD474
  c->r[0]=c->r[3]+0x00000008u; // 801CD478
  c->r[0]=c->r[28]-c->r[0]; // 801CD47C
  W16(c->r[3]+0x00000004u,c->r[0]); // 801CD480
  c->lr=0x801CD488u; f_801CB080(c); // 801CD484
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 801CD488
  c->r[0]=R16(c->r[29]+0x00000004u); // 801CD48C
  c->r[5]=c->r[3]+0xFFFFFFD8u; // 801CD490
  c->r[7]=0u+0x801D0000u; // 801CD494
  c->r[3]=R32(c->r[30]+0xFFFFF740u); // 801CD498
  c->r[6]=c->r[28]|c->r[28]; // 801CD49C
  c->r[4]=R8(c->r[31]+0x00000011u); // 801CD4A0
  c->r[8]=c->r[29]|c->r[29]; // 801CD4A4
  c->r[5]=c->r[5]-c->r[0]; // 801CD4A8
  c->r[7]=c->r[7]+0xFFFFCDE0u; // 801CD4AC
  c->lr=0x801CD4B4u; f_8025B540(c); // 801CD4B0
  cmps(c,0,(int32_t)c->r[3],0); // 801CD4B4
  if (crb(c,2)) { goto L_801CD4C4; } // 801CD4B8
  c->r[3]=c->r[29]|c->r[29]; // 801CD4BC
  c->lr=0x801CD4C4u; f_801CAF10(c); // 801CD4C0
L_801CD4C4:;
  c->r[0]=0u+0x00000000u; // 801CD4C4
  W32(c->r[13]+0xFFFF8EB0u,c->r[0]); // 801CD4C8
L_801CD4CC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CD4CC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CD4D0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CD4D4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CD4D8
  c->r[28]=R32(c->r[1]+0x00000010u); // 801CD4DC
  c->lr=c->r[0]; // 801CD4E0
  c->r[1]=c->r[1]+0x00000020u; // 801CD4E4
  return; // 801CD4E8
}

// UUSB_Read
void f_801CD4F0(Ctx* __restrict c) {
  trace_call(0x801CD4F0u);
  c->r[3]=0u+0x00000000u; // 801CD4F0
  return; // 801CD4F4
}

// UUSB_Write
void f_801CD500(Ctx* __restrict c) {
  trace_call(0x801CD500u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD500
  c->r[0]=c->lr; // 801CD504
  W32(c->r[1]+0x00000034u,c->r[0]); // 801CD508
  c->r[11]=c->r[1]+0x00000030u; // 801CD50C
  c->lr=0x801CD514u; f_800C2E44(c); // 801CD510
  c->r[29]=0u+0x80480000u; // 801CD514
  c->r[25]=c->r[4]|c->r[4]; // 801CD518
  c->r[30]=c->r[29]+0xFFFFF740u; // 801CD51C
  c->r[31]=c->r[5]|c->r[5]; // 801CD520
  c->r[0]=R8(c->r[30]+0x00000029u); // 801CD524
  c->r[28]=0u+0x00000000u; // 801CD528
  cmpu(c,0,c->r[0],0x00000002u); // 801CD52C
  if (crb(c,2)) { goto L_801CD53C; } // 801CD530
  c->r[3]=0u+0x00000000u; // 801CD534
  goto L_801CD6F4; // 801CD538
L_801CD53C:;
  cmps(c,0,(int32_t)c->r[3],0); // 801CD53C
  if (crb(c,2)) { goto L_801CD550; } // 801CD540
  cmps(c,0,(int32_t)c->r[3],2); // 801CD544
  if (crb(c,2)) { goto L_801CD628; } // 801CD548
  goto L_801CD6F0; // 801CD54C
L_801CD550:;
  c->r[3]=R8(c->r[30]+0x0000001Cu); // 801CD550
  c->lr=0x801CD558u; f_801CAE20(c); // 801CD554
  cmps(c,0,(int32_t)c->r[3],0); // 801CD558
  c->r[26]=c->r[3]|c->r[3]; // 801CD55C
  if (!crb(c,2)) { goto L_801CD56C; } // 801CD560
  c->r[3]=0u+0x00000000u; // 801CD564
  goto L_801CD6F4; // 801CD568
L_801CD56C:;
  c->r[0]=c->r[3]+0x00000027u; // 801CD56C
  W16(c->r[3]+0x00000002u,c->r[31]); // 801CD570
  c->r[27]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801CD574
  c->r[4]=c->r[25]|c->r[25]; // 801CD578
  c->r[0]=c->r[3]+0x00000008u; // 801CD57C
  c->r[5]=c->r[31]|c->r[31]; // 801CD580
  c->r[0]=c->r[27]-c->r[0]; // 801CD584
  W16(c->r[3]+0x00000004u,c->r[0]); // 801CD588
  c->r[3]=c->r[27]|c->r[27]; // 801CD58C
  c->lr=0x801CD594u; f_80004000(c); // 801CD590
  c->r[0]=R8(c->r[30]+0x00000048u); // 801CD594
  cmpu(c,0,c->r[0],0x00000005u); // 801CD598
  if (!crb(c,0)) { goto L_801CD5E0; } // 801CD59C
  c->r[0]=R16(c->r[30]+0x00000044u); // 801CD5A0
  cmps(c,0,(int32_t)c->r[0],0); // 801CD5A4
  if (!crb(c,2)) { goto L_801CD5E0; } // 801CD5A8
  W32(c->r[1]+0x00000008u,c->r[26]); // 801CD5AC
  c->r[10]=0u+0x801D0000u; // 801CD5B0
  c->r[8]=c->r[31]|c->r[31]; // 801CD5B4
  c->r[9]=c->r[27]|c->r[27]; // 801CD5B8
  c->r[3]=R32(c->r[29]+0xFFFFF740u); // 801CD5BC
  c->r[10]=c->r[10]+0xFFFFCF80u; // 801CD5C0
  c->r[4]=0u+0x00000020u; // 801CD5C4
  c->r[5]=0u+0x00000000u; // 801CD5C8
  c->r[6]=0u+0x00000000u; // 801CD5CC
  c->r[7]=0u+0x00000000u; // 801CD5D0
  c->lr=0x801CD5D8u; f_8025BC30(c); // 801CD5D4
  c->r[28]=c->r[3]|c->r[3]; // 801CD5D8
  goto L_801CD5FC; // 801CD5DC
L_801CD5E0:;
  c->r[3]=0u+0x80480000u; // 801CD5E0
  c->r[4]=c->r[26]|c->r[26]; // 801CD5E4
  c->r[3]=c->r[3]+0xFFFFF740u; // 801CD5E8
  c->r[3]=c->r[3]+0x0000003Cu; // 801CD5EC
  c->lr=0x801CD5F4u; f_801CB340(c); // 801CD5F0
  c->r[3]=0u+0x00000000u; // 801CD5F4
  goto L_801CD6F4; // 801CD5F8
L_801CD5FC:;
  cmps(c,0,(int32_t)c->r[3],0); // 801CD5FC
  if (crb(c,2)) { goto L_801CD610; } // 801CD600
  c->r[3]=c->r[26]|c->r[26]; // 801CD604
  c->lr=0x801CD60Cu; f_801CAF10(c); // 801CD608
  goto L_801CD6F0; // 801CD60C
L_801CD610:;
  c->lr=0x801CD614u; f_801CC430(c); // 801CD610
  c->r[3]=R8(c->r[30]+0x00000048u); // 801CD614
  c->r[0]=c->r[3]+0x00000001u; // 801CD618
  W8(c->r[30]+0x00000048u,c->r[0]); // 801CD61C
  c->lr=0x801CD624u; f_801CC400(c); // 801CD620
  goto L_801CD6F0; // 801CD624
L_801CD628:;
  c->r[3]=R8(c->r[30]+0x0000001Du); // 801CD628
  c->lr=0x801CD630u; f_801CAE20(c); // 801CD62C
  cmps(c,0,(int32_t)c->r[3],0); // 801CD630
  c->r[27]=c->r[3]|c->r[3]; // 801CD634
  if (!crb(c,2)) { goto L_801CD644; } // 801CD638
  c->r[3]=0u+0x00000000u; // 801CD63C
  goto L_801CD6F4; // 801CD640
L_801CD644:;
  c->r[0]=c->r[3]+0x00000027u; // 801CD644
  W16(c->r[3]+0x00000002u,c->r[31]); // 801CD648
  c->r[28]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801CD64C
  c->r[4]=c->r[25]|c->r[25]; // 801CD650
  c->r[0]=c->r[3]+0x00000008u; // 801CD654
  c->r[5]=c->r[31]|c->r[31]; // 801CD658
  c->r[0]=c->r[28]-c->r[0]; // 801CD65C
  W16(c->r[3]+0x00000004u,c->r[0]); // 801CD660
  c->r[3]=c->r[28]|c->r[28]; // 801CD664
  c->lr=0x801CD66Cu; f_80004000(c); // 801CD668
  c->r[0]=R8(c->r[30]+0x00000038u); // 801CD66C
  cmpu(c,0,c->r[0],0x00000005u); // 801CD670
  if (!crb(c,0)) { goto L_801CD6AC; } // 801CD674
  c->r[0]=R16(c->r[30]+0x00000034u); // 801CD678
  cmps(c,0,(int32_t)c->r[0],0); // 801CD67C
  if (!crb(c,2)) { goto L_801CD6AC; } // 801CD680
  c->r[7]=0u+0x801D0000u; // 801CD684
  c->r[3]=R32(c->r[29]+0xFFFFF740u); // 801CD688
  c->r[4]=R8(c->r[30]+0x00000010u); // 801CD68C
  c->r[5]=c->r[31]|c->r[31]; // 801CD690
  c->r[6]=c->r[28]|c->r[28]; // 801CD694
  c->r[8]=c->r[27]|c->r[27]; // 801CD698
  c->r[7]=c->r[7]+0xFFFFD070u; // 801CD69C
  c->lr=0x801CD6A4u; f_8025B5E0(c); // 801CD6A0
  c->r[28]=c->r[3]|c->r[3]; // 801CD6A4
  goto L_801CD6C8; // 801CD6A8
L_801CD6AC:;
  c->r[3]=0u+0x80480000u; // 801CD6AC
  c->r[4]=c->r[27]|c->r[27]; // 801CD6B0
  c->r[3]=c->r[3]+0xFFFFF740u; // 801CD6B4
  c->r[3]=c->r[3]+0x0000002Cu; // 801CD6B8
  c->lr=0x801CD6C0u; f_801CB340(c); // 801CD6BC
  c->r[3]=0u+0x00000000u; // 801CD6C0
  goto L_801CD6F4; // 801CD6C4
L_801CD6C8:;
  cmps(c,0,(int32_t)c->r[3],0); // 801CD6C8
  if (crb(c,2)) { goto L_801CD6DC; } // 801CD6CC
  c->r[3]=c->r[27]|c->r[27]; // 801CD6D0
  c->lr=0x801CD6D8u; f_801CAF10(c); // 801CD6D4
  goto L_801CD6F0; // 801CD6D8
L_801CD6DC:;
  c->lr=0x801CD6E0u; f_801CC430(c); // 801CD6DC
  c->r[3]=R8(c->r[30]+0x00000038u); // 801CD6E0
  c->r[0]=c->r[3]+0x00000001u; // 801CD6E4
  W8(c->r[30]+0x00000038u,c->r[0]); // 801CD6E8
  c->lr=0x801CD6F0u; f_801CC400(c); // 801CD6EC
L_801CD6F0:;
  c->r[3]=rotl(c->r[28],0)&0x0000FFFFu; // 801CD6F0
L_801CD6F4:;
  c->r[11]=c->r[1]+0x00000030u; // 801CD6F4
  c->lr=0x801CD6FCu; f_800C2E90(c); // 801CD6F8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801CD6FC
  c->lr=c->r[0]; // 801CD700
  c->r[1]=c->r[1]+0x00000030u; // 801CD704
  return; // 801CD708
}

// UUSB_Close
void f_801CD710(Ctx* __restrict c) {
  trace_call(0x801CD710u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD710
  c->r[0]=c->lr; // 801CD714
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CD718
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CD71C
  c->lr=0x801CD724u; f_801CC430(c); // 801CD720
  c->r[3]=0u+0x80480000u; // 801CD724
  c->r[0]=0u+0x00000000u; // 801CD728
  c->r[31]=c->r[3]+0xFFFFF740u; // 801CD72C
  W8(c->r[31]+0x00000029u,c->r[0]); // 801CD730
  c->lr=0x801CD738u; f_801CC400(c); // 801CD734
  c->r[0]=R16(c->r[31]+0x00000034u); // 801CD738
  cmps(c,0,(int32_t)c->r[0],0); // 801CD73C
  if (crb(c,2)) { goto L_801CD760; } // 801CD740
  goto L_801CD754; // 801CD744
L_801CD748:;
  c->r[3]=c->r[31]+0x0000002Cu; // 801CD748
  c->lr=0x801CD750u; f_801CB5C0(c); // 801CD74C
  c->lr=0x801CD754u; f_801CAF10(c); // 801CD750
L_801CD754:;
  c->r[0]=R16(c->r[31]+0x00000034u); // 801CD754
  cmps(c,0,(int32_t)c->r[0],0); // 801CD758
  if (!crb(c,2)) { IRQCHK(c); goto L_801CD748; } // 801CD75C
L_801CD760:;
  c->r[3]=0u+0x80480000u; // 801CD760
  c->r[31]=c->r[3]+0xFFFFF740u; // 801CD764
  c->r[0]=R16(c->r[31]+0x00000044u); // 801CD768
  cmps(c,0,(int32_t)c->r[0],0); // 801CD76C
  if (crb(c,2)) { goto L_801CD790; } // 801CD770
  goto L_801CD784; // 801CD774
L_801CD778:;
  c->r[3]=c->r[31]+0x0000003Cu; // 801CD778
  c->lr=0x801CD780u; f_801CB5C0(c); // 801CD77C
  c->lr=0x801CD784u; f_801CAF10(c); // 801CD780
L_801CD784:;
  c->r[0]=R16(c->r[31]+0x00000044u); // 801CD784
  cmps(c,0,(int32_t)c->r[0],0); // 801CD788
  if (!crb(c,2)) { IRQCHK(c); goto L_801CD778; } // 801CD78C
L_801CD790:;
  c->r[3]=0u+0x80480000u; // 801CD790
  c->r[4]=0u+0x801D0000u; // 801CD794
  c->r[3]=R32(c->r[3]+0xFFFFF740u); // 801CD798
  c->r[4]=c->r[4]+0xFFFFCB90u; // 801CD79C
  c->r[5]=0u+0x00000000u; // 801CD7A0
  c->lr=0x801CD7A8u; f_8025ACD0(c); // 801CD7A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CD7A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CD7AC
  c->lr=c->r[0]; // 801CD7B0
  c->r[1]=c->r[1]+0x00000010u; // 801CD7B4
  return; // 801CD7B8
}

// UUSB_Unregister
void f_801CD7C0(Ctx* __restrict c) {
  trace_call(0x801CD7C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD7C0
  c->r[0]=c->lr; // 801CD7C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CD7C8
  c->lr=0x801CD7D0u; f_8025A9D0(c); // 801CD7CC
  c->lr=0x801CD7D4u; f_801CC430(c); // 801CD7D0
  c->r[3]=0u+0x80480000u; // 801CD7D4
  c->r[0]=0u+0x00000000u; // 801CD7D8
  c->r[3]=c->r[3]+0xFFFFF740u; // 801CD7DC
  c->r[4]=0u+0x00000005u; // 801CD7E0
  W8(c->r[3]+0x00000029u,c->r[4]); // 801CD7E4
  W8(c->r[3]+0x00000028u,c->r[0]); // 801CD7E8
  W8(c->r[13]+0xFFFF9AC9u,c->r[0]); // 801CD7EC
  c->lr=0x801CD7F4u; f_801CC400(c); // 801CD7F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CD7F4
  c->lr=c->r[0]; // 801CD7F8
  c->r[1]=c->r[1]+0x00000010u; // 801CD7FC
  return; // 801CD800
}

// bte_hcisu_send
void f_801CD810(Ctx* __restrict c) {
  trace_call(0x801CD810u);
  W16(c->r[3]+0x00000000u,c->r[4]); // 801CD810
  c->r[4]=R32(c->r[13]+0xFFFF9AE0u); // 801CD814
  cmps(c,0,(int32_t)c->r[4],0); // 801CD818
  if (crb(c,2)) { goto L_801CD82C; } // 801CD81C
  c->r[12]=R32(c->r[4]+0x0000000Cu); // 801CD820
  c->ctr=c->r[12]; // 801CD824
  if (true) { dispatch(c,c->ctr); return; } // 801CD828
L_801CD82C:;
  f_801CAF10(c); return; // 801CD82C
}

// bte_hcisu_task
void f_801CD830(Ctx* __restrict c) {
  trace_call(0x801CD830u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD830
  c->r[0]=c->lr; // 801CD834
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CD838
  c->r[3]=R32(c->r[13]+0xFFFF9AE0u); // 801CD83C
  cmps(c,0,(int32_t)c->r[3],0); // 801CD840
  if (crb(c,2)) { goto L_801CD884; } // 801CD844
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CD848
  cmps(c,0,(int32_t)c->r[12],0); // 801CD84C
  if (crb(c,2)) { goto L_801CD868; } // 801CD850
  c->r[3]=0u+0x00000002u; // 801CD854
  c->r[4]=0u+0x00000001u; // 801CD858
  c->r[5]=0u+0x00000800u; // 801CD85C
  c->ctr=c->r[12]; // 801CD860
  if (true) { c->lr=0x801CD868u; dispatch(c,c->ctr); } // 801CD864
L_801CD868:;
  c->r[3]=R32(c->r[13]+0xFFFF9AE0u); // 801CD868
  c->r[12]=R32(c->r[3]+0x00000004u); // 801CD86C
  cmps(c,0,(int32_t)c->r[12],0); // 801CD870
  if (crb(c,2)) { goto L_801CD884; } // 801CD874
  c->r[3]=R32(c->r[13]+0xFFFF9AE4u); // 801CD878
  c->ctr=c->r[12]; // 801CD87C
  if (true) { c->lr=0x801CD884u; dispatch(c,c->ctr); } // 801CD880
L_801CD884:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CD884
  c->lr=c->r[0]; // 801CD888
  c->r[1]=c->r[1]+0x00000010u; // 801CD88C
  return; // 801CD890
}

// bte_hcisu_close
void f_801CD8A0(Ctx* __restrict c) {
  trace_call(0x801CD8A0u);
  c->r[3]=R32(c->r[13]+0xFFFF9AE0u); // 801CD8A0
  cmps(c,0,(int32_t)c->r[3],0); // 801CD8A4
  if (crb(c,2)) return; // 801CD8A8
  c->r[12]=R32(c->r[3]+0x00000008u); // 801CD8AC
  cmps(c,0,(int32_t)c->r[12],0); // 801CD8B0
  if (crb(c,2)) return; // 801CD8B4
  c->ctr=c->r[12]; // 801CD8B8
  if (true) { dispatch(c,c->ctr); return; } // 801CD8BC
}

// fn_801CD8C0
void f_801CD8C0(Ctx* __restrict c) {
  trace_call(0x801CD8C0u);
  return; // 801CD8C0
}

// bta_ci_hci_msg_handler
void f_801CD8D0(Ctx* __restrict c) {
  trace_call(0x801CD8D0u);
  c->r[5]=c->r[3]|c->r[3]; // 801CD8D0
  c->r[3]=0u+0x00000002u; // 801CD8D4
  c->r[4]=0u+0x00000000u; // 801CD8D8
  f_801CB0D0(c); return; // 801CD8DC
}

// BTE_InitStack
void f_801CD8E0(Ctx* __restrict c) {
  trace_call(0x801CD8E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD8E0
  c->r[0]=c->lr; // 801CD8E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CD8E8
  c->lr=0x801CD8F0u; f_801EC45C(c); // 801CD8EC
  c->lr=0x801CD8F4u; f_801DF734(c); // 801CD8F0
  c->lr=0x801CD8F8u; f_801E3008(c); // 801CD8F4
  c->lr=0x801CD8FCu; f_801E3A8C(c); // 801CD8F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CD8FC
  c->lr=c->r[0]; // 801CD900
  c->r[1]=c->r[1]+0x00000010u; // 801CD904
  return; // 801CD908
}

// LogMsg
void f_801CD910(Ctx* __restrict c) {
  trace_call(0x801CD910u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CD910
  c->r[0]=c->lr; // 801CD914
  W32(c->r[1]+0x00000084u,c->r[0]); // 801CD918
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 801CD91C
  if (!crb(c,6)) { goto L_801CD944; } // 801CD920
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 801CD924
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 801CD928
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 801CD92C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 801CD930
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 801CD934
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 801CD938
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 801CD93C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 801CD940
L_801CD944:;
  c->r[11]=c->r[1]+0x00000088u; // 801CD944
  c->r[0]=c->r[1]+0x00000008u; // 801CD948
  c->r[12]=0u+0x02000000u; // 801CD94C
  W32(c->r[1]+0x00000008u,c->r[3]); // 801CD950
  c->r[31]=0u+0x80480000u; // 801CD954
  c->r[3]=c->r[1]+0x00000068u; // 801CD958
  W32(c->r[1]+0x00000010u,c->r[5]); // 801CD95C
  c->r[5]=c->r[3]|c->r[3]; // 801CD960
  c->r[3]=c->r[31]+0x000017A0u; // 801CD964
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 801CD968
  W32(c->r[1]+0x00000014u,c->r[6]); // 801CD96C
  W32(c->r[1]+0x00000018u,c->r[7]); // 801CD970
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 801CD974
  W32(c->r[1]+0x00000020u,c->r[9]); // 801CD978
  W32(c->r[1]+0x00000024u,c->r[10]); // 801CD97C
  W32(c->r[1]+0x00000068u,c->r[12]); // 801CD980
  W32(c->r[1]+0x0000006Cu,c->r[11]); // 801CD984
  W32(c->r[1]+0x00000070u,c->r[0]); // 801CD988
  c->lr=0x801CD990u; f_800C8988(c); // 801CD98C
  c->r[3]=c->r[31]+0x000017A0u; // 801CD990
  c->r[4]=c->r[13]+0xFFFF8EF0u; // 801CD994
  c->r[5]=c->r[3]|c->r[3]; // 801CD998
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CD99C
  c->lr=0x801CD9A4u; f_800C8B00(c); // 801CD9A0
  c->r[3]=c->r[31]+0x000017A0u; // 801CD9A4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CD9A8
  c->lr=0x801CD9B0u; f_80245CC0(c); // 801CD9AC
  c->r[0]=R32(c->r[1]+0x00000084u); // 801CD9B0
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 801CD9B4
  c->lr=c->r[0]; // 801CD9B8
  c->r[1]=c->r[1]+0x00000080u; // 801CD9BC
  return; // 801CD9C0
}

// LogMsg_0
void f_801CD9D0(Ctx* __restrict c) {
  trace_call(0x801CD9D0u);
  c->r[0]=R8(c->r[13]+0xFFFF9AE8u); // 801CD9D0
  cmps(c,0,(int32_t)c->r[0],0); // 801CD9D4
  if (!crb(c,2)) return; // 801CD9D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CD9DC
  f_801CD910(c); return; // 801CD9E0
}

// fn_801CD9E4
void f_801CD9E4(Ctx* __restrict c) {
  trace_call(0x801CD9E4u);
  return; // 801CD9E4
}

// LogMsg_1
void f_801CD9F0(Ctx* __restrict c) {
  trace_call(0x801CD9F0u);
  c->r[0]=R8(c->r[13]+0xFFFF9AE8u); // 801CD9F0
  cmps(c,0,(int32_t)c->r[0],0); // 801CD9F4
  if (!crb(c,2)) return; // 801CD9F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CD9FC
  f_801CD910(c); return; // 801CDA00
}

// fn_801CDA04
void f_801CDA04(Ctx* __restrict c) {
  trace_call(0x801CDA04u);
  return; // 801CDA04
}

// LogMsg_2
void f_801CDA10(Ctx* __restrict c) {
  trace_call(0x801CDA10u);
  c->r[0]=R8(c->r[13]+0xFFFF9AE8u); // 801CDA10
  cmps(c,0,(int32_t)c->r[0],0); // 801CDA14
  if (!crb(c,2)) return; // 801CDA18
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CDA1C
  f_801CD910(c); return; // 801CDA20
}

// fn_801CDA24
void f_801CDA24(Ctx* __restrict c) {
  trace_call(0x801CDA24u);
  return; // 801CDA24
}

// LogMsg_3
void f_801CDA30(Ctx* __restrict c) {
  trace_call(0x801CDA30u);
  c->r[0]=R8(c->r[13]+0xFFFF9AE8u); // 801CDA30
  cmps(c,0,(int32_t)c->r[0],0); // 801CDA34
  if (!crb(c,2)) return; // 801CDA38
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CDA3C
  f_801CD910(c); return; // 801CDA40
}

// fn_801CDA44
void f_801CDA44(Ctx* __restrict c) {
  trace_call(0x801CDA44u);
  return; // 801CDA44
}

// LogMsg_4
void f_801CDA50(Ctx* __restrict c) {
  trace_call(0x801CDA50u);
  c->r[0]=R8(c->r[13]+0xFFFF9AE8u); // 801CDA50
  cmps(c,0,(int32_t)c->r[0],0); // 801CDA54
  if (!crb(c,2)) return; // 801CDA58
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CDA5C
  f_801CD910(c); return; // 801CDA60
}

// fn_801CDA64
void f_801CDA64(Ctx* __restrict c) {
  trace_call(0x801CDA64u);
  return; // 801CDA64
}

// fn_801CDA70
void f_801CDA70(Ctx* __restrict c) {
  trace_call(0x801CDA70u);
  c->r[0]=R8(c->r[13]+0xFFFF9AE8u); // 801CDA70
  cmps(c,0,(int32_t)c->r[0],0); // 801CDA74
  if (!crb(c,2)) return; // 801CDA78
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CDA7C
  f_801CD910(c); return; // 801CDA80
}

// fn_801CDA84
void f_801CDA84(Ctx* __restrict c) {
  trace_call(0x801CDA84u);
  return; // 801CDA84
}

// LogMsg_6
void f_801CDA90(Ctx* __restrict c) {
  trace_call(0x801CDA90u);
  c->r[0]=R8(c->r[13]+0xFFFF9AE8u); // 801CDA90
  cmps(c,0,(int32_t)c->r[0],0); // 801CDA94
  if (!crb(c,2)) return; // 801CDA98
  setcrb(c,6,crb(c,6)^crb(c,6)); // 801CDA9C
  f_801CD910(c); return; // 801CDAA0
}

// fn_801CDAA4
void f_801CDAA4(Ctx* __restrict c) {
  trace_call(0x801CDAA4u);
  return; // 801CDAA4
}

// BTUInterruptHandler
void f_801CDAB0(Ctx* __restrict c) {
  trace_call(0x801CDAB0u);
  c->r[4]=0u+0x80480000u; // 801CDAB0
  c->r[3]=0u+0x801D0000u; // 801CDAB4
  c->r[4]=c->r[4]+0x00001F80u; // 801CDAB8
  c->r[3]=c->r[3]+0xFFFFDC60u; // 801CDABC
  c->r[4]=c->r[4]+0x00001000u; // 801CDAC0
  f_80245840(c); return; // 801CDAC4
}

// BTA_Init
void f_801CDAD0(Ctx* __restrict c) {
  trace_call(0x801CDAD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CDAD0
  c->r[0]=c->lr; // 801CDAD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CDAD8
  c->r[0]=0u+0x00000000u; // 801CDADC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CDAE0
  W32(c->r[13]+0xFFFF9AECu,c->r[0]); // 801CDAE4
  c->lr=0x801CDAECu; f_801CC1C0(c); // 801CDAE8
  c->lr=0x801CDAF0u; f_801CC400(c); // 801CDAEC
  c->lr=0x801CDAF4u; f_801DF608(c); // 801CDAF0
  c->r[3]=0u+0x80380000u; // 801CDAF4
  c->r[0]=c->r[13]+0xFFFF8EF8u; // 801CDAF8
  c->r[3]=c->r[3]+0xFFFFEF50u; // 801CDAFC
  W32(c->r[13]+0xFFFF9AE0u,c->r[3]); // 801CDB00
  c->r[3]=0u+0x00000000u; // 801CDB04
  W32(c->r[13]+0xFFFF9AE4u,c->r[0]); // 801CDB08
  c->lr=0x801CDB10u; f_801CD830(c); // 801CDB0C
  goto L_801CDB1C; // 801CDB10
L_801CDB14:;
  c->r[3]=0u+0x00000064u; // 801CDB14
  c->lr=0x801CDB1Cu; f_801CC330(c); // 801CDB18
L_801CDB1C:;
  c->r[0]=R32(c->r[13]+0xFFFF8EB0u); // 801CDB1C
  cmps(c,0,(int32_t)c->r[0],0); // 801CDB20
  if (!crb(c,2)) { IRQCHK(c); goto L_801CDB14; } // 801CDB24
  c->lr=0x801CDB2Cu; f_801CDC20(c); // 801CDB28
  c->r[31]=0u+0x80480000u; // 801CDB2C
  c->r[3]=c->r[31]+0x00002F80u; // 801CDB30
  c->lr=0x801CDB38u; f_80243CB0(c); // 801CDB34
  c->lr=0x801CDB3Cu; f_8024EAD0(c); // 801CDB38
  c->r[5]=0u+0x80000000u; // 801CDB3C
  c->r[9]=0u+0x801D0000u; // 801CDB40
  c->r[0]=R32(c->r[5]+0x000000F8u); // 801CDB44
  c->r[6]=0u+0x10620000u; // 801CDB48
  c->r[5]=c->r[3]|c->r[3]; // 801CDB4C
  c->r[9]=c->r[9]+0xFFFFDAB0u; // 801CDB50
  c->r[3]=c->r[6]+0x00004DD3u; // 801CDB54
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801CDB58
  c->r[0]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[0])>>32); // 801CDB5C
  c->r[6]=c->r[4]|c->r[4]; // 801CDB60
  c->r[3]=c->r[31]+0x00002F80u; // 801CDB64
  c->r[7]=0u+0x00000000u; // 801CDB68
  c->r[8]=rotl(c->r[0],27)&0x07FFFFFEu; // 801CDB6C
  c->lr=0x801CDB74u; f_80243F80(c); // 801CDB70
  c->r[3]=0u+0x00000000u; // 801CDB74
  c->lr=0x801CDB7Cu; f_801CC300(c); // 801CDB78
  goto L_801CDB88; // 801CDB7C
L_801CDB80:;
  c->r[3]=0u+0x000007D0u; // 801CDB80
  c->lr=0x801CDB88u; f_801CC330(c); // 801CDB84
L_801CDB88:;
  c->lr=0x801CDB8Cu; f_801D0BF0(c); // 801CDB88
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801CDB8C
  if (crb(c,2)) { IRQCHK(c); goto L_801CDB80; } // 801CDB90
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CDB94
  c->r[3]=0u+0x00000000u; // 801CDB98
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CDB9C
  c->lr=c->r[0]; // 801CDBA0
  c->r[1]=c->r[1]+0x00000010u; // 801CDBA4
  return; // 801CDBA8
}

// BTA_CleanUp
void f_801CDBB0(Ctx* __restrict c) {
  trace_call(0x801CDBB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CDBB0
  c->r[0]=c->lr; // 801CDBB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CDBB8
  W32(c->r[13]+0xFFFF9AECu,c->r[3]); // 801CDBBC
  c->r[3]=0u+0x80480000u; // 801CDBC0
  c->r[3]=c->r[3]+0x00002F80u; // 801CDBC4
  c->lr=0x801CDBCCu; f_80244010(c); // 801CDBC8
  c->lr=0x801CDBD0u; f_801CD8A0(c); // 801CDBCC
  c->lr=0x801CDBD4u; f_801CC250(c); // 801CDBD0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CDBD4
  c->lr=c->r[0]; // 801CDBD8
  c->r[1]=c->r[1]+0x00000010u; // 801CDBDC
  return; // 801CDBE0
}

// fn_801CDBF0
void f_801CDBF0(Ctx* __restrict c) {
  trace_call(0x801CDBF0u);
  c->r[12]=R32(c->r[13]+0xFFFF9AECu); // 801CDBF0
  cmps(c,0,(int32_t)c->r[12],0); // 801CDBF4
  if (crb(c,2)) return; // 801CDBF8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 801CDBFC
  if (crb(c,0)) { goto L_801CDC10; } // 801CDC00
  c->r[3]=0u+0x00000000u; // 801CDC04
  c->ctr=c->r[12]; // 801CDC08
  if (true) { dispatch(c,c->ctr); return; } // 801CDC0C
L_801CDC10:;
  c->r[3]=0u+0x00000001u; // 801CDC10
  c->ctr=c->r[12]; // 801CDC14
  if (true) { dispatch(c,c->ctr); return; } // 801CDC18
}

// fn_801CDC1C
void f_801CDC1C(Ctx* __restrict c) {
  trace_call(0x801CDC1Cu);
  return; // 801CDC1C
}

// btu_task_init
void f_801CDC20(Ctx* __restrict c) {
  trace_call(0x801CDC20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CDC20
  c->r[0]=c->lr; // 801CDC24
  c->r[3]=0u+0x00000001u; // 801CDC28
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CDC2C
  c->r[0]=0u+0x00000000u; // 801CDC30
  W8(c->r[13]+0xFFFF8F00u,c->r[3]); // 801CDC34
  W32(c->r[13]+0xFFFF8F04u,c->r[3]); // 801CDC38
  W32(c->r[13]+0xFFFF9AF0u,c->r[0]); // 801CDC3C
  W32(c->r[13]+0xFFFF9AF4u,c->r[0]); // 801CDC40
  c->lr=0x801CDC48u; f_801DF5DC(c); // 801CDC44
  c->lr=0x801CDC4Cu; f_801CD8E0(c); // 801CDC48
  c->lr=0x801CDC50u; f_801CE38C(c); // 801CDC4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CDC50
  c->lr=c->r[0]; // 801CDC54
  c->r[1]=c->r[1]+0x00000010u; // 801CDC58
  return; // 801CDC5C
}

// btu_task_msg_handler
void f_801CDC60(Ctx* __restrict c) {
  trace_call(0x801CDC60u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CDC60
  c->r[0]=c->lr; // 801CDC64
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CDC68
  c->r[11]=c->r[1]+0x00000020u; // 801CDC6C
  c->lr=0x801CDC74u; f_800C2E48(c); // 801CDC70
  c->r[30]=0u+0x00000000u; // 801CDC74
  c->lr=0x801CDC7Cu; f_8024EAD0(c); // 801CDC78
  c->r[3]=R32(c->r[13]+0xFFFF9AF0u); // 801CDC7C
  c->r[0]=c->r[3]+0x00000001u; // 801CDC80
  W32(c->r[13]+0xFFFF9AF0u,c->r[0]); // 801CDC84
  c->lr=0x801CDC8Cu; f_801CC430(c); // 801CDC88
  c->r[0]=R32(c->r[13]+0xFFFF8F04u); // 801CDC8C
  cmps(c,0,(int32_t)c->r[0],0); // 801CDC90
  if (crb(c,2)) { goto L_801CDCAC; } // 801CDC94
  c->r[3]=0u+0x00000000u; // 801CDC98
  c->r[0]=0u+0x00000001u; // 801CDC9C
  W32(c->r[13]+0xFFFF8F04u,c->r[3]); // 801CDCA0
  W8(c->r[13]+0xFFFF8F00u,c->r[0]); // 801CDCA4
  goto L_801CDCC0; // 801CDCA8
L_801CDCAC:;
  c->r[3]=R8(c->r[13]+0xFFFF8F00u); // 801CDCAC
  c->r[0]=c->r[3]+0x00000001u; // 801CDCB0
  W8(c->r[13]+0xFFFF8F00u,c->r[0]); // 801CDCB4
  c->lr=0x801CDCBCu; f_801CC400(c); // 801CDCB8
  goto L_801CDFC4; // 801CDCBC
L_801CDCC0:;
  c->lr=0x801CDCC4u; f_801CC400(c); // 801CDCC0
  c->r[3]=R32(c->r[13]+0xFFFF9AF4u); // 801CDCC4
  c->r[31]=0u+0x00000005u; // 801CDCC8
  c->r[4]=R32(c->r[13]+0xFFFF9AF0u); // 801CDCCC
  c->r[0]=c->r[3]+0x000001F4u; // 801CDCD0
  cmpu(c,0,c->r[4],c->r[0]); // 801CDCD4
  if (!crb(c,1)) { goto L_801CDCE4; } // 801CDCD8
  W32(c->r[13]+0xFFFF9AF4u,c->r[4]); // 801CDCDC
  c->r[31]=c->r[31]|0x00000030u; // 801CDCE0
L_801CDCE4:;
  c->r[3]=0u+0x80480000u; // 801CDCE4
  c->r[29]=c->r[3]+0x00002FB0u; // 801CDCE8
  goto L_801CDFB4; // 801CDCEC
L_801CDCF0:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 801CDCF0
  c->r[30]=0u+0x00000001u; // 801CDCF4
  if (crb(c,2)) { goto L_801CDDF8; } // 801CDCF8
  goto L_801CDDE4; // 801CDCFC
L_801CDD00:;
  c->r[0]=R16(c->r[3]+0x00000000u); // 801CDD00
  c->r[30]=0u+0x00000000u; // 801CDD04
  c->r[28]=rotl(c->r[0],0)&0x0000FF00u; // 801CDD08
  cmps(c,0,(int32_t)c->r[28],4352); // 801CDD0C
  if (crb(c,2)) { goto L_801CDD38; } // 801CDD10
  cmps(c,0,(int32_t)c->r[28],6400); // 801CDD14
  if (crb(c,2)) { goto L_801CDD44; } // 801CDD18
  cmps(c,0,(int32_t)c->r[28],4608); // 801CDD1C
  if (crb(c,2)) { goto L_801CDD50; } // 801CDD20
  cmps(c,0,(int32_t)c->r[28],4096); // 801CDD24
  if (crb(c,2)) { goto L_801CDD5C; } // 801CDD28
  cmps(c,0,(int32_t)c->r[28],5632); // 801CDD2C
  if (crb(c,2)) { goto L_801CDD70; } // 801CDD30
  goto L_801CDD7C; // 801CDD34
L_801CDD38:;
  c->r[3]=c->r[27]|c->r[27]; // 801CDD38
  c->lr=0x801CDD40u; f_801E967C(c); // 801CDD3C
  goto L_801CDDE4; // 801CDD40
L_801CDD44:;
  c->r[3]=c->r[27]|c->r[27]; // 801CDD44
  c->lr=0x801CDD4Cu; f_801E9448(c); // 801CDD48
  goto L_801CDDE4; // 801CDD4C
L_801CDD50:;
  c->r[3]=c->r[27]|c->r[27]; // 801CDD50
  c->lr=0x801CDD58u; f_801DAFB4(c); // 801CDD54
  goto L_801CDDE4; // 801CDD58
L_801CDD5C:;
  c->r[3]=c->r[27]|c->r[27]; // 801CDD5C
  c->lr=0x801CDD64u; f_801DE380(c); // 801CDD60
  c->r[3]=c->r[27]|c->r[27]; // 801CDD64
  c->lr=0x801CDD6Cu; f_801CAF10(c); // 801CDD68
  goto L_801CDDE4; // 801CDD6C
L_801CDD70:;
  c->r[3]=c->r[27]|c->r[27]; // 801CDD70
  c->lr=0x801CDD78u; f_801DE938(c); // 801CDD74
  goto L_801CDDE4; // 801CDD78
L_801CDD7C:;
  c->r[26]=0u+0x00000000u; // 801CDD7C
  c->r[4]=0u+0x00000000u; // 801CDD80
  goto L_801CDDC0; // 801CDD84
L_801CDD88:;
  c->r[0]=rotl(c->r[26],3)&0x000007F8u; // 801CDD88
  c->r[3]=c->r[29]+c->r[0]; // 801CDD8C
  c->r[12]=R32(c->r[3]+0x00000014u); // 801CDD90
  cmps(c,1,(int32_t)c->r[12],0); // 801CDD94
  if (crb(c,6)) { goto L_801CDDBC; } // 801CDD98
  c->r[0]=R16(c->r[3]+0x00000010u); // 801CDD9C
  cmpu(c,0,c->r[28],c->r[0]); // 801CDDA0
  if (!crb(c,2)) { goto L_801CDDBC; } // 801CDDA4
  if (crb(c,6)) { goto L_801CDDBC; } // 801CDDA8
  c->r[3]=c->r[27]|c->r[27]; // 801CDDAC
  c->ctr=c->r[12]; // 801CDDB0
  if (true) { c->lr=0x801CDDB8u; dispatch(c,c->ctr); } // 801CDDB4
  c->r[4]=0u+0x00000001u; // 801CDDB8
L_801CDDBC:;
  c->r[26]=c->r[26]+0x00000001u; // 801CDDBC
L_801CDDC0:;
  cmps(c,0,(int32_t)c->r[4],0); // 801CDDC0
  if (!crb(c,2)) { goto L_801CDDD4; } // 801CDDC4
  c->r[0]=rotl(c->r[26],0)&0x000000FFu; // 801CDDC8
  cmpu(c,0,c->r[0],0x00000006u); // 801CDDCC
  if (crb(c,0)) { IRQCHK(c); goto L_801CDD88; } // 801CDDD0
L_801CDDD4:;
  cmps(c,0,(int32_t)c->r[4],0); // 801CDDD4
  if (!crb(c,2)) { goto L_801CDDE4; } // 801CDDD8
  c->r[3]=c->r[27]|c->r[27]; // 801CDDDC
  c->lr=0x801CDDE4u; f_801CAF10(c); // 801CDDE0
L_801CDDE4:;
  c->r[3]=0u+0x00000000u; // 801CDDE4
  c->lr=0x801CDDECu; f_801CB290(c); // 801CDDE8
  cmps(c,0,(int32_t)c->r[3],0); // 801CDDEC
  c->r[27]=c->r[3]|c->r[3]; // 801CDDF0
  if (!crb(c,2)) { IRQCHK(c); goto L_801CDD00; } // 801CDDF4
L_801CDDF8:;
  c->r[0]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[0]); // 801CDDF8
  if (crb(c,2)) { goto L_801CDF74; } // 801CDDFC
  c->r[3]=c->r[29]+0x00000040u; // 801CDE00
  c->r[4]=0u+0x00000001u; // 801CDE04
  c->lr=0x801CDE0Cu; f_801CBF10(c); // 801CDE08
  c->r[0]=rotl(c->r[31],0)&0xFFFFFFEFu; // 801CDE0C
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 801CDE10
  goto L_801CDF5C; // 801CDE14
L_801CDE18:;
  c->r[4]=c->r[28]|c->r[28]; // 801CDE18
  c->r[3]=c->r[29]+0x00000040u; // 801CDE1C
  c->r[30]=0u+0x00000000u; // 801CDE20
  c->lr=0x801CDE28u; f_801CC090(c); // 801CDE24
  c->r[0]=R16(c->r[28]+0x00000014u); // 801CDE28
  cmps(c,0,(int32_t)c->r[0],10); // 801CDE2C
  if (crb(c,2)) { goto L_801CDEC4; } // 801CDE30
  if (!crb(c,0)) { goto L_801CDE64; } // 801CDE34
  cmps(c,0,(int32_t)c->r[0],5); // 801CDE38
  if (crb(c,2)) { goto L_801CDEB8; } // 801CDE3C
  if (!crb(c,0)) { goto L_801CDE54; } // 801CDE40
  cmps(c,0,(int32_t)c->r[0],1); // 801CDE44
  if (crb(c,2)) { goto L_801CDE94; } // 801CDE48
  if (!crb(c,0)) { goto L_801CDEAC; } // 801CDE4C
  goto L_801CDF08; // 801CDE50
L_801CDE54:;
  cmps(c,0,(int32_t)c->r[0],8); // 801CDE54
  if (crb(c,2)) { goto L_801CDECC; } // 801CDE58
  if (!crb(c,0)) { goto L_801CDEA0; } // 801CDE5C
  goto L_801CDF08; // 801CDE60
L_801CDE64:;
  cmps(c,0,(int32_t)c->r[0],60); // 801CDE64
  if (crb(c,2)) { goto L_801CDEE0; } // 801CDE68
  if (!crb(c,0)) { goto L_801CDE88; } // 801CDE6C
  cmps(c,0,(int32_t)c->r[0],22); // 801CDE70
  if (crb(c,2)) { goto L_801CDEF4; } // 801CDE74
  if (!crb(c,0)) { goto L_801CDF08; } // 801CDE78
  cmps(c,0,(int32_t)c->r[0],13); // 801CDE7C
  if (!crb(c,0)) { goto L_801CDF08; } // 801CDE80
  goto L_801CDED4; // 801CDE84
L_801CDE88:;
  cmps(c,0,(int32_t)c->r[0],66); // 801CDE88
  if (crb(c,2)) { goto L_801CDEE8; } // 801CDE8C
  goto L_801CDF08; // 801CDE90
L_801CDE94:;
  c->r[3]=c->r[28]|c->r[28]; // 801CDE94
  c->lr=0x801CDE9Cu; f_801D66E0(c); // 801CDE98
  goto L_801CDF5C; // 801CDE9C
L_801CDEA0:;
  c->r[3]=c->r[28]|c->r[28]; // 801CDEA0
  c->lr=0x801CDEA8u; f_801D51D4(c); // 801CDEA4
  goto L_801CDF5C; // 801CDEA8
L_801CDEAC:;
  c->r[3]=c->r[28]|c->r[28]; // 801CDEAC
  c->lr=0x801CDEB4u; f_801EA41C(c); // 801CDEB0
  goto L_801CDF5C; // 801CDEB4
L_801CDEB8:;
  c->r[3]=R32(c->r[28]+0x00000010u); // 801CDEB8
  c->lr=0x801CDEC0u; f_801F617C(c); // 801CDEBC
  goto L_801CDF5C; // 801CDEC0
L_801CDEC4:;
  c->lr=0x801CDEC8u; f_801D9854(c); // 801CDEC4
  goto L_801CDF5C; // 801CDEC8
L_801CDECC:;
  c->lr=0x801CDED0u; f_801D7DF8(c); // 801CDECC
  goto L_801CDF5C; // 801CDED0
L_801CDED4:;
  c->r[3]=c->r[28]|c->r[28]; // 801CDED4
  c->lr=0x801CDEDCu; f_801F25D8(c); // 801CDED8
  goto L_801CDF5C; // 801CDEDC
L_801CDEE0:;
  c->lr=0x801CDEE4u; f_801DF3A4(c); // 801CDEE0
  goto L_801CDF5C; // 801CDEE4
L_801CDEE8:;
  c->r[3]=c->r[28]|c->r[28]; // 801CDEE8
  c->lr=0x801CDEF0u; f_801E4878(c); // 801CDEEC
  goto L_801CDF5C; // 801CDEF0
L_801CDEF4:;
  c->r[12]=R32(c->r[28]+0x00000010u); // 801CDEF4
  c->r[3]=c->r[28]|c->r[28]; // 801CDEF8
  c->ctr=c->r[12]; // 801CDEFC
  if (true) { c->lr=0x801CDF04u; dispatch(c,c->ctr); } // 801CDF00
  goto L_801CDF5C; // 801CDF04
L_801CDF08:;
  c->r[27]=0u+0x00000000u; // 801CDF08
  c->r[4]=0u+0x00000000u; // 801CDF0C
  goto L_801CDF48; // 801CDF10
L_801CDF14:;
  c->r[0]=rotl(c->r[27],3)&0x000007F8u; // 801CDF14
  c->r[3]=c->r[29]+c->r[0]; // 801CDF18
  c->r[12]=R32(c->r[3]+0x00000004u); // 801CDF1C
  cmps(c,0,(int32_t)c->r[12],0); // 801CDF20
  if (crb(c,2)) { goto L_801CDF44; } // 801CDF24
  c->r[0]=R32(c->r[3]+0x00000000u); // 801CDF28
  cmpu(c,0,c->r[0],c->r[28]); // 801CDF2C
  if (!crb(c,2)) { goto L_801CDF44; } // 801CDF30
  c->r[3]=c->r[28]|c->r[28]; // 801CDF34
  c->ctr=c->r[12]; // 801CDF38
  if (true) { c->lr=0x801CDF40u; dispatch(c,c->ctr); } // 801CDF3C
  c->r[4]=0u+0x00000001u; // 801CDF40
L_801CDF44:;
  c->r[27]=c->r[27]+0x00000001u; // 801CDF44
L_801CDF48:;
  cmps(c,0,(int32_t)c->r[4],0); // 801CDF48
  if (!crb(c,2)) { goto L_801CDF5C; } // 801CDF4C
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 801CDF50
  cmpu(c,0,c->r[0],0x00000002u); // 801CDF54
  if (crb(c,0)) { IRQCHK(c); goto L_801CDF14; } // 801CDF58
L_801CDF5C:;
  c->r[28]=R32(c->r[29]+0x00000040u); // 801CDF5C
  cmps(c,0,(int32_t)c->r[28],0); // 801CDF60
  if (crb(c,2)) { goto L_801CDF74; } // 801CDF64
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 801CDF68
  cmps(c,0,(int32_t)c->r[0],0); // 801CDF6C
  if (crb(c,2)) { IRQCHK(c); goto L_801CDE18; } // 801CDF70
L_801CDF74:;
  c->r[0]=rotl(c->r[31],0)&0x00000004u; cr0(c,c->r[0]); // 801CDF74
  if (crb(c,2)) { goto L_801CDF98; } // 801CDF78
  goto L_801CDF88; // 801CDF7C
L_801CDF80:;
  c->r[30]=0u+0x00000000u; // 801CDF80
  c->lr=0x801CDF88u; f_801CE3F0(c); // 801CDF84
L_801CDF88:;
  c->r[3]=0u+0x00000002u; // 801CDF88
  c->lr=0x801CDF90u; f_801CB290(c); // 801CDF8C
  cmps(c,0,(int32_t)c->r[3],0); // 801CDF90
  if (!crb(c,2)) { IRQCHK(c); goto L_801CDF80; } // 801CDF94
L_801CDF98:;
  c->r[0]=rotl(c->r[31],0)&0x00000020u; cr0(c,c->r[0]); // 801CDF98
  if (crb(c,2)) { goto L_801CDFAC; } // 801CDF9C
  c->r[0]=rotl(c->r[31],0)&0xFFFFFFDFu; // 801CDFA0
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 801CDFA4
  c->lr=0x801CDFACu; f_801CE4DC(c); // 801CDFA8
L_801CDFAC:;
  c->r[0]=rotl(c->r[31],0)&0x00008000u; cr0(c,c->r[0]); // 801CDFAC
  if (!crb(c,2)) { goto L_801CDFBC; } // 801CDFB0
L_801CDFB4:;
  cmps(c,0,(int32_t)c->r[30],0); // 801CDFB4
  if (crb(c,2)) { IRQCHK(c); goto L_801CDCF0; } // 801CDFB8
L_801CDFBC:;
  c->r[0]=0u+0x00000001u; // 801CDFBC
  W32(c->r[13]+0xFFFF8F04u,c->r[0]); // 801CDFC0
L_801CDFC4:;
  c->r[11]=c->r[1]+0x00000020u; // 801CDFC4
  c->lr=0x801CDFCCu; f_800C2E94(c); // 801CDFC8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CDFCC
  c->lr=c->r[0]; // 801CDFD0
  c->r[1]=c->r[1]+0x00000020u; // 801CDFD4
  return; // 801CDFD8
}

// btu_start_timer
void f_801CDFE0(Ctx* __restrict c) {
  trace_call(0x801CDFE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CDFE0
  c->r[0]=c->lr; // 801CDFE4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CDFE8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CDFEC
  c->r[31]=0u+0x80480000u; // 801CDFF0
  c->r[31]=c->r[31]+0x00002FB0u; // 801CDFF4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CDFF8
  c->r[30]=c->r[5]|c->r[5]; // 801CDFFC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CE000
  c->r[29]=c->r[4]|c->r[4]; // 801CE004
  W32(c->r[1]+0x00000010u,c->r[28]); // 801CE008
  c->r[28]=c->r[3]|c->r[3]; // 801CE00C
  c->r[4]=c->r[28]|c->r[28]; // 801CE010
  c->r[3]=c->r[31]+0x00000040u; // 801CE014
  c->lr=0x801CE01Cu; f_801CC090(c); // 801CE018
  W16(c->r[28]+0x00000014u,c->r[29]); // 801CE01C
  c->r[4]=c->r[28]|c->r[28]; // 801CE020
  c->r[3]=c->r[31]+0x00000040u; // 801CE024
  W32(c->r[28]+0x0000000Cu,c->r[30]); // 801CE028
  c->lr=0x801CE030u; f_801CBFA0(c); // 801CE02C
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CE030
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CE034
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CE038
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CE03C
  c->r[28]=R32(c->r[1]+0x00000010u); // 801CE040
  c->lr=c->r[0]; // 801CE044
  c->r[1]=c->r[1]+0x00000020u; // 801CE048
  return; // 801CE04C
}

// btu_stop_timer
void f_801CE050(Ctx* __restrict c) {
  trace_call(0x801CE050u);
  c->r[5]=0u+0x80480000u; // 801CE050
  c->r[4]=c->r[3]|c->r[3]; // 801CE054
  c->r[5]=c->r[5]+0x00002FB0u; // 801CE058
  c->r[3]=c->r[5]+0x00000040u; // 801CE05C
  f_801CC090(c); return; // 801CE060
}

// bdcpy
void f_801CE064(Ctx* __restrict c) {
  trace_call(0x801CE064u);
  c->r[9]=R8(c->r[4]+0x00000000u); // 801CE064
  c->r[8]=R8(c->r[4]+0x00000001u); // 801CE068
  c->r[7]=R8(c->r[4]+0x00000002u); // 801CE06C
  c->r[6]=R8(c->r[4]+0x00000003u); // 801CE070
  c->r[5]=R8(c->r[4]+0x00000004u); // 801CE074
  c->r[0]=R8(c->r[4]+0x00000005u); // 801CE078
  W8(c->r[3]+0x00000000u,c->r[9]); // 801CE07C
  W8(c->r[3]+0x00000001u,c->r[8]); // 801CE080
  W8(c->r[3]+0x00000002u,c->r[7]); // 801CE084
  W8(c->r[3]+0x00000003u,c->r[6]); // 801CE088
  W8(c->r[3]+0x00000004u,c->r[5]); // 801CE08C
  W8(c->r[3]+0x00000005u,c->r[0]); // 801CE090
  return; // 801CE094
}

// bdcmp
void f_801CE098(Ctx* __restrict c) {
  trace_call(0x801CE098u);
  c->r[5]=R8(c->r[3]+0x00000000u); // 801CE098
  c->r[0]=R8(c->r[4]+0x00000000u); // 801CE09C
  cmpu(c,0,c->r[5],c->r[0]); // 801CE0A0
  if (crb(c,2)) { goto L_801CE0B0; } // 801CE0A4
  c->r[3]=0u+0xFFFFFFFFu; // 801CE0A8
  return; // 801CE0AC
L_801CE0B0:;
  c->r[5]=R8(c->r[3]+0x00000001u); // 801CE0B0
  c->r[6]=c->r[3]+0x00000002u; // 801CE0B4
  c->r[0]=R8(c->r[4]+0x00000001u); // 801CE0B8
  c->r[3]=c->r[4]+0x00000002u; // 801CE0BC
  cmpu(c,0,c->r[5],c->r[0]); // 801CE0C0
  if (crb(c,2)) { goto L_801CE0D0; } // 801CE0C4
  c->r[3]=0u+0xFFFFFFFFu; // 801CE0C8
  return; // 801CE0CC
L_801CE0D0:;
  c->r[5]=R8(c->r[6]+0x00000000u); // 801CE0D0
  c->r[0]=R8(c->r[3]+0x00000000u); // 801CE0D4
  cmpu(c,0,c->r[5],c->r[0]); // 801CE0D8
  if (crb(c,2)) { goto L_801CE0E8; } // 801CE0DC
  c->r[3]=0u+0xFFFFFFFFu; // 801CE0E0
  return; // 801CE0E4
L_801CE0E8:;
  c->r[5]=R8(c->r[6]+0x00000001u); // 801CE0E8
  c->r[0]=R8(c->r[3]+0x00000001u); // 801CE0EC
  cmpu(c,0,c->r[5],c->r[0]); // 801CE0F0
  if (crb(c,2)) { goto L_801CE100; } // 801CE0F4
  c->r[3]=0u+0xFFFFFFFFu; // 801CE0F8
  return; // 801CE0FC
L_801CE100:;
  c->r[5]=R8(c->r[6]+0x00000002u); // 801CE100
  c->r[0]=R8(c->r[3]+0x00000002u); // 801CE104
  cmpu(c,0,c->r[5],c->r[0]); // 801CE108
  if (crb(c,2)) { goto L_801CE118; } // 801CE10C
  c->r[3]=0u+0xFFFFFFFFu; // 801CE110
  return; // 801CE114
L_801CE118:;
  c->r[5]=R8(c->r[6]+0x00000003u); // 801CE118
  c->r[0]=R8(c->r[3]+0x00000003u); // 801CE11C
  cmpu(c,0,c->r[5],c->r[0]); // 801CE120
  if (crb(c,2)) { goto L_801CE130; } // 801CE124
  c->r[3]=0u+0xFFFFFFFFu; // 801CE128
  return; // 801CE12C
L_801CE130:;
  c->r[3]=0u+0x00000000u; // 801CE130
  return; // 801CE134
}

// bta_sys_rm_register
void f_801CE138(Ctx* __restrict c) {
  trace_call(0x801CE138u);
  c->r[4]=0u+0x80480000u; // 801CE138
  c->r[4]=c->r[4]+0x00003038u; // 801CE13C
  W32(c->r[4]+0x00000080u,c->r[3]); // 801CE140
  return; // 801CE144
}

// bta_sys_compress_register
void f_801CE148(Ctx* __restrict c) {
  trace_call(0x801CE148u);
  c->r[4]=0u+0x80480000u; // 801CE148
  c->r[4]=c->r[4]+0x00003038u; // 801CE14C
  W32(c->r[4]+0x00000088u,c->r[3]); // 801CE150
  return; // 801CE154
}

// bta_sys_pm_register
void f_801CE158(Ctx* __restrict c) {
  trace_call(0x801CE158u);
  c->r[4]=0u+0x80480000u; // 801CE158
  c->r[4]=c->r[4]+0x00003038u; // 801CE15C
  W32(c->r[4]+0x00000084u,c->r[3]); // 801CE160
  return; // 801CE164
}

// bta_sys_conn_open
void f_801CE168(Ctx* __restrict c) {
  trace_call(0x801CE168u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE168
  c->r[0]=c->lr; // 801CE16C
  c->r[6]=0u+0x80480000u; // 801CE170
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CE174
  c->r[6]=c->r[6]+0x00003038u; // 801CE178
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CE17C
  c->r[31]=c->r[5]|c->r[5]; // 801CE180
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CE184
  c->r[30]=c->r[4]|c->r[4]; // 801CE188
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CE18C
  c->r[29]=c->r[3]|c->r[3]; // 801CE190
  c->r[12]=R32(c->r[6]+0x00000080u); // 801CE194
  cmps(c,0,(int32_t)c->r[12],0); // 801CE198
  if (crb(c,2)) { goto L_801CE1B8; } // 801CE19C
  c->r[4]=c->r[29]|c->r[29]; // 801CE1A0
  c->r[5]=c->r[30]|c->r[30]; // 801CE1A4
  c->r[6]=c->r[31]|c->r[31]; // 801CE1A8
  c->r[3]=0u+0x00000000u; // 801CE1AC
  c->ctr=c->r[12]; // 801CE1B0
  if (true) { c->lr=0x801CE1B8u; dispatch(c,c->ctr); } // 801CE1B4
L_801CE1B8:;
  c->r[3]=0u+0x80480000u; // 801CE1B8
  c->r[3]=c->r[3]+0x00003038u; // 801CE1BC
  c->r[12]=R32(c->r[3]+0x00000084u); // 801CE1C0
  cmps(c,0,(int32_t)c->r[12],0); // 801CE1C4
  if (crb(c,2)) { goto L_801CE1E4; } // 801CE1C8
  c->r[4]=c->r[29]|c->r[29]; // 801CE1CC
  c->r[5]=c->r[30]|c->r[30]; // 801CE1D0
  c->r[6]=c->r[31]|c->r[31]; // 801CE1D4
  c->r[3]=0u+0x00000000u; // 801CE1D8
  c->ctr=c->r[12]; // 801CE1DC
  if (true) { c->lr=0x801CE1E4u; dispatch(c,c->ctr); } // 801CE1E0
L_801CE1E4:;
  c->r[3]=0u+0x80480000u; // 801CE1E4
  c->r[3]=c->r[3]+0x00003038u; // 801CE1E8
  c->r[12]=R32(c->r[3]+0x00000088u); // 801CE1EC
  cmps(c,0,(int32_t)c->r[12],0); // 801CE1F0
  if (crb(c,2)) { goto L_801CE210; } // 801CE1F4
  c->r[4]=c->r[29]|c->r[29]; // 801CE1F8
  c->r[5]=c->r[30]|c->r[30]; // 801CE1FC
  c->r[6]=c->r[31]|c->r[31]; // 801CE200
  c->r[3]=0u+0x00000000u; // 801CE204
  c->ctr=c->r[12]; // 801CE208
  if (true) { c->lr=0x801CE210u; dispatch(c,c->ctr); } // 801CE20C
L_801CE210:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CE210
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CE214
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CE218
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CE21C
  c->lr=c->r[0]; // 801CE220
  c->r[1]=c->r[1]+0x00000020u; // 801CE224
  return; // 801CE228
}

// bta_sys_conn_close
void f_801CE22C(Ctx* __restrict c) {
  trace_call(0x801CE22Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE22C
  c->r[0]=c->lr; // 801CE230
  c->r[6]=0u+0x80480000u; // 801CE234
  W32(c->r[1]+0x00000024u,c->r[0]); // 801CE238
  c->r[6]=c->r[6]+0x00003038u; // 801CE23C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801CE240
  c->r[31]=c->r[5]|c->r[5]; // 801CE244
  W32(c->r[1]+0x00000018u,c->r[30]); // 801CE248
  c->r[30]=c->r[4]|c->r[4]; // 801CE24C
  W32(c->r[1]+0x00000014u,c->r[29]); // 801CE250
  c->r[29]=c->r[3]|c->r[3]; // 801CE254
  c->r[12]=R32(c->r[6]+0x00000080u); // 801CE258
  cmps(c,0,(int32_t)c->r[12],0); // 801CE25C
  if (crb(c,2)) { goto L_801CE27C; } // 801CE260
  c->r[4]=c->r[29]|c->r[29]; // 801CE264
  c->r[5]=c->r[30]|c->r[30]; // 801CE268
  c->r[6]=c->r[31]|c->r[31]; // 801CE26C
  c->r[3]=0u+0x00000001u; // 801CE270
  c->ctr=c->r[12]; // 801CE274
  if (true) { c->lr=0x801CE27Cu; dispatch(c,c->ctr); } // 801CE278
L_801CE27C:;
  c->r[3]=0u+0x80480000u; // 801CE27C
  c->r[3]=c->r[3]+0x00003038u; // 801CE280
  c->r[12]=R32(c->r[3]+0x00000084u); // 801CE284
  cmps(c,0,(int32_t)c->r[12],0); // 801CE288
  if (crb(c,2)) { goto L_801CE2A8; } // 801CE28C
  c->r[4]=c->r[29]|c->r[29]; // 801CE290
  c->r[5]=c->r[30]|c->r[30]; // 801CE294
  c->r[6]=c->r[31]|c->r[31]; // 801CE298
  c->r[3]=0u+0x00000001u; // 801CE29C
  c->ctr=c->r[12]; // 801CE2A0
  if (true) { c->lr=0x801CE2A8u; dispatch(c,c->ctr); } // 801CE2A4
L_801CE2A8:;
  c->r[3]=0u+0x80480000u; // 801CE2A8
  c->r[3]=c->r[3]+0x00003038u; // 801CE2AC
  c->r[12]=R32(c->r[3]+0x00000088u); // 801CE2B0
  cmps(c,0,(int32_t)c->r[12],0); // 801CE2B4
  if (crb(c,2)) { goto L_801CE2D4; } // 801CE2B8
  c->r[4]=c->r[29]|c->r[29]; // 801CE2BC
  c->r[5]=c->r[30]|c->r[30]; // 801CE2C0
  c->r[6]=c->r[31]|c->r[31]; // 801CE2C4
  c->r[3]=0u+0x00000001u; // 801CE2C8
  c->ctr=c->r[12]; // 801CE2CC
  if (true) { c->lr=0x801CE2D4u; dispatch(c,c->ctr); } // 801CE2D0
L_801CE2D4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801CE2D4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801CE2D8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801CE2DC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801CE2E0
  c->lr=c->r[0]; // 801CE2E4
  c->r[1]=c->r[1]+0x00000020u; // 801CE2E8
  return; // 801CE2EC
}

// bta_sys_sco_close
void f_801CE2F0(Ctx* __restrict c) {
  trace_call(0x801CE2F0u);
  c->r[6]=0u+0x80480000u; // 801CE2F0
  c->r[0]=c->r[4]|c->r[4]; // 801CE2F4
  c->r[6]=c->r[6]+0x00003038u; // 801CE2F8
  c->r[12]=R32(c->r[6]+0x00000084u); // 801CE2FC
  c->r[6]=c->r[5]|c->r[5]; // 801CE300
  cmps(c,0,(int32_t)c->r[12],0); // 801CE304
  if (crb(c,2)) return; // 801CE308
  c->r[4]=c->r[3]|c->r[3]; // 801CE30C
  c->r[5]=c->r[0]|c->r[0]; // 801CE310
  c->r[3]=0u+0x00000005u; // 801CE314
  c->ctr=c->r[12]; // 801CE318
  if (true) { dispatch(c,c->ctr); return; } // 801CE31C
}

// fn_801CE320
void f_801CE320(Ctx* __restrict c) {
  trace_call(0x801CE320u);
  return; // 801CE320
}

// bta_sys_idle
void f_801CE324(Ctx* __restrict c) {
  trace_call(0x801CE324u);
  c->r[6]=0u+0x80480000u; // 801CE324
  c->r[0]=c->r[4]|c->r[4]; // 801CE328
  c->r[6]=c->r[6]+0x00003038u; // 801CE32C
  c->r[12]=R32(c->r[6]+0x00000084u); // 801CE330
  c->r[6]=c->r[5]|c->r[5]; // 801CE334
  cmps(c,0,(int32_t)c->r[12],0); // 801CE338
  if (crb(c,2)) return; // 801CE33C
  c->r[4]=c->r[3]|c->r[3]; // 801CE340
  c->r[5]=c->r[0]|c->r[0]; // 801CE344
  c->r[3]=0u+0x00000006u; // 801CE348
  c->ctr=c->r[12]; // 801CE34C
  if (true) { dispatch(c,c->ctr); return; } // 801CE350
}

// fn_801CE354
void f_801CE354(Ctx* __restrict c) {
  trace_call(0x801CE354u);
  return; // 801CE354
}

// bta_sys_busy
void f_801CE358(Ctx* __restrict c) {
  trace_call(0x801CE358u);
  c->r[6]=0u+0x80480000u; // 801CE358
  c->r[0]=c->r[4]|c->r[4]; // 801CE35C
  c->r[6]=c->r[6]+0x00003038u; // 801CE360
  c->r[12]=R32(c->r[6]+0x00000084u); // 801CE364
  c->r[6]=c->r[5]|c->r[5]; // 801CE368
  cmps(c,0,(int32_t)c->r[12],0); // 801CE36C
  if (crb(c,2)) return; // 801CE370
  c->r[4]=c->r[3]|c->r[3]; // 801CE374
  c->r[5]=c->r[0]|c->r[0]; // 801CE378
  c->r[3]=0u+0x00000007u; // 801CE37C
  c->ctr=c->r[12]; // 801CE380
  if (true) { dispatch(c,c->ctr); return; } // 801CE384
}

// fn_801CE388
void f_801CE388(Ctx* __restrict c) {
  trace_call(0x801CE388u);
  return; // 801CE388
}

// bta_sys_init
void f_801CE38C(Ctx* __restrict c) {
  trace_call(0x801CE38Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE38C
  c->r[0]=c->lr; // 801CE390
  c->r[4]=0u+0x00000000u; // 801CE394
  c->r[5]=0u+0x0000008Cu; // 801CE398
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE39C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CE3A0
  c->r[31]=0u+0x80480000u; // 801CE3A4
  c->r[3]=c->r[31]+0x00003038u; // 801CE3A8
  c->lr=0x801CE3B0u; f_80004350(c); // 801CE3AC
  c->r[5]=R32(c->r[13]+0xFFFF8EE8u); // 801CE3B0
  c->r[31]=c->r[31]+0x00003038u; // 801CE3B4
  c->r[3]=c->r[31]+0x00000068u; // 801CE3B8
  c->r[4]=0u+0x000003E8u; // 801CE3BC
  c->r[5]=R8(c->r[5]+0x00000003u); // 801CE3C0
  c->lr=0x801CE3C8u; f_801CE5D0(c); // 801CE3C4
  c->lr=0x801CE3CCu; f_801CC3F0(c); // 801CE3C8
  W8(c->r[31]+0x0000007Du,c->r[3]); // 801CE3CC
  c->r[3]=R32(c->r[13]+0xFFFF8EE8u); // 801CE3D0
  c->r[0]=R8(c->r[3]+0x00000004u); // 801CE3D4
  W8(c->r[13]+0xFFFF9AF8u,c->r[0]); // 801CE3D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CE3DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE3E0
  c->lr=c->r[0]; // 801CE3E4
  c->r[1]=c->r[1]+0x00000010u; // 801CE3E8
  return; // 801CE3EC
}

// bta_sys_event
void f_801CE3F0(Ctx* __restrict c) {
  trace_call(0x801CE3F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE3F0
  c->r[0]=c->lr; // 801CE3F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE3F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CE3FC
  c->r[31]=0u+0x00000001u; // 801CE400
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CE404
  c->r[30]=c->r[3]|c->r[3]; // 801CE408
  c->r[0]=R8(c->r[13]+0xFFFF9AF8u); // 801CE40C
  cmpu(c,0,c->r[0],0x00000004u); // 801CE410
  if (crb(c,0)) { goto L_801CE42C; } // 801CE414
  c->r[4]=0u+0x803A0000u; // 801CE418
  c->r[5]=R16(c->r[30]+0x00000000u); // 801CE41C
  c->r[4]=c->r[4]+0xFFFFE360u; // 801CE420
  c->r[3]=0u+0x00000503u; // 801CE424
  c->lr=0x801CE42Cu; f_801CD9F0(c); // 801CE428
L_801CE42C:;
  c->r[3]=0u+0x80480000u; // 801CE42C
  c->r[4]=R16(c->r[30]+0x00000000u); // 801CE430
  c->r[3]=c->r[3]+0x00003038u; // 801CE434
  c->r[0]=R8(c->r[3]+0x0000007Eu); // 801CE438
  c->r[5]=sraw(c,c->r[4],8); // 801CE43C
  cmps(c,0,(int32_t)c->r[0],0); // 801CE440
  if (crb(c,2)) { goto L_801CE460; } // 801CE444
  cmpu(c,0,c->r[4],0x00000101u); // 801CE448
  if (!crb(c,2)) { goto L_801CE454; } // 801CE44C
  c->lr=0x801CE454u; f_801D0AC0(c); // 801CE450
L_801CE454:;
  c->r[3]=c->r[30]|c->r[30]; // 801CE454
  c->lr=0x801CE45Cu; f_801CAF10(c); // 801CE458
  goto L_801CE4C4; // 801CE45C
L_801CE460:;
  c->r[0]=rotl(c->r[5],0)&0x000000FFu; // 801CE460
  cmpu(c,0,c->r[0],0x0000001Au); // 801CE464
  if (!crb(c,0)) { goto L_801CE494; } // 801CE468
  c->r[0]=rotl(c->r[5],2)&0x000003FCu; // 801CE46C
  c->r[3]=R32(c->r[3]+c->r[0]); // 801CE470
  cmps(c,0,(int32_t)c->r[3],0); // 801CE474
  if (crb(c,2)) { goto L_801CE494; } // 801CE478
  c->r[12]=R32(c->r[3]+0x00000000u); // 801CE47C
  c->r[3]=c->r[30]|c->r[30]; // 801CE480
  c->ctr=c->r[12]; // 801CE484
  if (true) { c->lr=0x801CE48Cu; dispatch(c,c->ctr); } // 801CE488
  c->r[31]=c->r[3]|c->r[3]; // 801CE48C
  goto L_801CE4B4; // 801CE490
L_801CE494:;
  c->r[0]=R8(c->r[13]+0xFFFF9AF8u); // 801CE494
  cmpu(c,0,c->r[0],0x00000002u); // 801CE498
  if (crb(c,0)) { goto L_801CE4B4; } // 801CE49C
  c->r[4]=0u+0x803A0000u; // 801CE4A0
  c->r[5]=rotl(c->r[5],0)&0x000000FFu; // 801CE4A4
  c->r[4]=c->r[4]+0xFFFFE374u; // 801CE4A8
  c->r[3]=0u+0x00000501u; // 801CE4AC
  c->lr=0x801CE4B4u; f_801CD9F0(c); // 801CE4B0
L_801CE4B4:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; cr0(c,c->r[0]); // 801CE4B4
  if (crb(c,2)) { goto L_801CE4C4; } // 801CE4B8
  c->r[3]=c->r[30]|c->r[30]; // 801CE4BC
  c->lr=0x801CE4C4u; f_801CAF10(c); // 801CE4C0
L_801CE4C4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE4C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CE4C8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CE4CC
  c->lr=c->r[0]; // 801CE4D0
  c->r[1]=c->r[1]+0x00000010u; // 801CE4D4
  return; // 801CE4D8
}

// fn_801CE4DC
void f_801CE4DC(Ctx* __restrict c) {
  trace_call(0x801CE4DCu);
  c->r[3]=0u+0x80480000u; // 801CE4DC
  c->r[3]=c->r[3]+0x00003038u; // 801CE4E0
  c->r[0]=R8(c->r[3]+0x0000007Cu); // 801CE4E4
  cmps(c,0,(int32_t)c->r[0],0); // 801CE4E8
  if (!crb(c,2)) return; // 801CE4EC
  c->r[3]=c->r[3]+0x00000068u; // 801CE4F0
  f_801CE61C(c); return; // 801CE4F4
}

// fn_801CE4F8
void f_801CE4F8(Ctx* __restrict c) {
  trace_call(0x801CE4F8u);
  return; // 801CE4F8
}

// bta_sys_register
void f_801CE4FC(Ctx* __restrict c) {
  trace_call(0x801CE4FCu);
  c->r[5]=0u+0x80480000u; // 801CE4FC
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 801CE500
  c->r[5]=c->r[5]+0x00003038u; // 801CE504
  W32(c->r[5]+c->r[0],c->r[4]); // 801CE508
  return; // 801CE50C
}

// bta_sys_sendmsg
void f_801CE510(Ctx* __restrict c) {
  trace_call(0x801CE510u);
  c->r[4]=R32(c->r[13]+0xFFFF8EE8u); // 801CE510
  c->r[6]=0u+0x80480000u; // 801CE514
  c->r[6]=c->r[6]+0x00003038u; // 801CE518
  c->r[5]=c->r[3]|c->r[3]; // 801CE51C
  c->r[3]=R8(c->r[6]+0x0000007Du); // 801CE520
  c->r[4]=R8(c->r[4]+0x00000002u); // 801CE524
  f_801CB0D0(c); return; // 801CE528
}

// bta_sys_start_timer
void f_801CE52C(Ctx* __restrict c) {
  trace_call(0x801CE52Cu);
  c->r[7]=0u+0x80480000u; // 801CE52C
  c->r[0]=c->r[4]|c->r[4]; // 801CE530
  c->r[7]=c->r[7]+0x00003038u; // 801CE534
  c->r[6]=c->r[5]|c->r[5]; // 801CE538
  c->r[4]=c->r[3]|c->r[3]; // 801CE53C
  c->r[5]=c->r[0]|c->r[0]; // 801CE540
  c->r[3]=c->r[7]+0x00000068u; // 801CE544
  f_801CE6D0(c); return; // 801CE548
}

// bta_sys_stop_timer
void f_801CE54C(Ctx* __restrict c) {
  trace_call(0x801CE54Cu);
  c->r[5]=0u+0x80480000u; // 801CE54C
  c->r[4]=c->r[3]|c->r[3]; // 801CE550
  c->r[5]=c->r[5]+0x00003038u; // 801CE554
  c->r[3]=c->r[5]+0x00000068u; // 801CE558
  f_801CE770(c); return; // 801CE55C
}

// bta_sys_disable
void f_801CE560(Ctx* __restrict c) {
  trace_call(0x801CE560u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801CE560
  c->r[0]=c->lr; // 801CE564
  W32(c->r[1]+0x00000014u,c->r[0]); // 801CE568
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801CE56C
  c->r[31]=0u+0x80480000u; // 801CE570
  c->r[31]=c->r[31]+0x00003038u; // 801CE574
  W32(c->r[1]+0x00000008u,c->r[30]); // 801CE578
  c->r[30]=0u+0x00000000u; // 801CE57C
L_801CE580:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 801CE580
  cmps(c,0,(int32_t)c->r[3],0); // 801CE584
  if (crb(c,2)) { goto L_801CE5A0; } // 801CE588
  c->r[12]=R32(c->r[3]+0x00000004u); // 801CE58C
  cmps(c,0,(int32_t)c->r[12],0); // 801CE590
  if (crb(c,2)) { goto L_801CE5A0; } // 801CE594
  c->ctr=c->r[12]; // 801CE598
  if (true) { c->lr=0x801CE5A0u; dispatch(c,c->ctr); } // 801CE59C
L_801CE5A0:;
  c->r[30]=c->r[30]+0x00000001u; // 801CE5A0
  c->r[31]=c->r[31]+0x00000004u; // 801CE5A4
  cmps(c,0,(int32_t)c->r[30],26); // 801CE5A8
  if (crb(c,0)) { IRQCHK(c); goto L_801CE580; } // 801CE5AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801CE5B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801CE5B4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801CE5B8
  c->lr=c->r[0]; // 801CE5BC
  c->r[1]=c->r[1]+0x00000010u; // 801CE5C0
  return; // 801CE5C4
}

