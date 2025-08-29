_$s7Combine10PublishersO9SPIHelperE16CSCombineLatest6V7receive10subscriberyqd___tAA10SubscriberRd__7FailureQyd__AJRt3_6OutputQz_AMQy_AMQy0_AMQy1_AMQy2_AMQy3_t5InputRtd__lF
__int64 __fastcall Publishers.CSCombineLatest6.receive<A>(subscriber:)(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // x20
  __int64 v6; // x27
  __int64 v7; // x13
  __int64 v8; // x24
  __int64 v9; // x26
  __int64 v10; // x19
  __int64 v11; // x23
  __int64 v12; // x8
  __int64 v13; // x28
  __int64 v14; // x10
  __int64 v15; // x21
  __int64 v16; // x19
  __int64 v17; // x27
  __int64 v18; // x26
  __int64 v19; // x19
  __int64 v20; // x0
  __int64 v21; // x8
  __int64 v22; // x0
  __int64 v23; // x8
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x0
  __int64 v27; // x8
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x21
  __int64 v31; // x0
  __int64 v32; // x8
  __int64 v33; // x23
  __int64 v34; // x0
  __int64 v35; // x8
  char *v36; // x24
  __int64 v37; // x20
  __int64 v38; // x0
  __int64 v39; // x8
  char *v40; // x26
  __int64 v41; // x0
  __int64 v42; // x8
  char *v43; // x28
  __int64 v44; // x13
  char *v45; // x27
  __int64 v46; // x12
  __int64 v47; // x19
  __int64 v48; // x1
  __int64 v49; // x22
  __int64 v50; // x19
  void (__fastcall *v51)(char *, __int64, __int64); // x8
  char *v52; // x21
  __int64 v53; // x23
  __int64 v54; // x26
  char *v55; // x28
  __int64 v56; // x20
  char *v57; // x27
  __int64 v58; // x19
  char *v59; // x23
  __int64 v60; // x21
  __int64 v61; // x24
  __int64 v62; // x22
  __int64 v63; // x5
  __int64 v64; // x25
  __int64 v65; // x20
  _QWORD *v66; // x23
  __int64 v67; // x19
  __int64 v68; // x8
  __int64 v69; // x26
  __int64 v70; // x25
  __int64 v71; // x27
  __int64 v72; // x28
  __int64 v73; // x20
  __int64 v74; // x21
  _QWORD *v75; // x24
  __int64 v76; // x8
  __int64 v77; // x8
  __int64 v78; // x8
  __int64 v79; // x19
  char *v80; // x23
  char *v81; // x26
  __int64 v82; // x22
  __int64 v84; // [xsp+20h] [xbp-1C0h] BYREF
  char *v85; // [xsp+28h] [xbp-1B8h]
  char *v86; // [xsp+30h] [xbp-1B0h]
  char *v87; // [xsp+38h] [xbp-1A8h]
  char *v88; // [xsp+40h] [xbp-1A0h]
  __int64 v89; // [xsp+48h] [xbp-198h]
  char *v90; // [xsp+50h] [xbp-190h]
  __int64 v91; // [xsp+58h] [xbp-188h]
  char *v92; // [xsp+60h] [xbp-180h]
  __int64 v93; // [xsp+68h] [xbp-178h]
  __int64 v94; // [xsp+70h] [xbp-170h]
  char *v95; // [xsp+78h] [xbp-168h]
  __int64 v96; // [xsp+80h] [xbp-160h]
  __int64 v97; // [xsp+88h] [xbp-158h]
  __int64 v98; // [xsp+90h] [xbp-150h]
  __int64 TupleTypeMetadata; // [xsp+98h] [xbp-148h]
  __int64 v100; // [xsp+A0h] [xbp-140h]
  __int64 v101; // [xsp+A8h] [xbp-138h]
  __int64 WitnessTable; // [xsp+B0h] [xbp-130h]
  __int64 v103; // [xsp+B8h] [xbp-128h]
  __int64 v104; // [xsp+C0h] [xbp-120h]
  __int64 v105; // [xsp+C8h] [xbp-118h]
  __int64 v106; // [xsp+D0h] [xbp-110h]
  __int64 v107; // [xsp+D8h] [xbp-108h]
  char *v108; // [xsp+E0h] [xbp-100h]
  __int64 v109; // [xsp+E8h] [xbp-F8h]
  __int64 v110; // [xsp+F0h] [xbp-F0h]
  __int64 v111; // [xsp+F8h] [xbp-E8h]
  __int64 v112; // [xsp+100h] [xbp-E0h]
  __int64 v113; // [xsp+108h] [xbp-D8h]
  __int64 v114; // [xsp+110h] [xbp-D0h]
  __int64 v115; // [xsp+118h] [xbp-C8h]
  __int64 v116; // [xsp+120h] [xbp-C0h]
  __int64 v117; // [xsp+128h] [xbp-B8h]
  __int64 v118; // [xsp+130h] [xbp-B0h]
  __int64 v119; // [xsp+138h] [xbp-A8h]
  __int64 v120; // [xsp+140h] [xbp-A0h]
  __int64 AssociatedTypeWitness; // [xsp+148h] [xbp-98h] BYREF
  __int64 v122; // [xsp+150h] [xbp-90h]
  __int64 v123; // [xsp+158h] [xbp-88h]
  __int64 v124; // [xsp+160h] [xbp-80h]
  __int64 v125; // [xsp+168h] [xbp-78h]
  __int64 v126; // [xsp+170h] [xbp-70h]
  __int64 v127; // [xsp+178h] [xbp-68h]
  __int64 v128; // [xsp+180h] [xbp-60h]

  v104 = a4;
  v103 = a3;
  v105 = a1;
  v5 = *(_QWORD *)(a2 + 16);
  v6 = *(_QWORD *)(a2 + 24);
  v7 = *(_QWORD *)(a2 + 32);
  v8 = *(_QWORD *)(a2 + 64);
  v9 = *(_QWORD *)(a2 + 72);
  v118 = *(_QWORD *)(a2 + 80);
  v119 = v7;
  AssociatedTypeWitness = v5;
  v122 = v6;
  v107 = v5;
  v120 = v6;
  v123 = v7;
  v124 = v8;
  v112 = v9;
  v113 = v8;
  v125 = v9;
  v126 = v118;
  v10 = sub_1000A4660(255LL, &AssociatedTypeWitness);
  v11 = *(_QWORD *)(a2 + 48);
  v114 = *(_QWORD *)(a2 + 40);
  v115 = v11;
  v116 = *(_QWORD *)(a2 + 56);
  v117 = v10;
  WitnessTable = swift_getWitnessTable(&protocol conformance descriptor for Publishers.CombineLatest3<A, B, C>, v10);
  v12 = *(_QWORD *)(a2 + 88);
  v13 = *(_QWORD *)(a2 + 96);
  v14 = *(_QWORD *)(a2 + 104);
  AssociatedTypeWitness = v10;
  v122 = v114;
  v123 = v11;
  v124 = v116;
  v125 = WitnessTable;
  v126 = v12;
  v15 = v12;
  v96 = v12;
  v127 = v13;
  v128 = v14;
  v110 = v14;
  v111 = v13;
  v16 = v14;
  v109 = sub_1000A4680(255LL, &AssociatedTypeWitness);
  AssociatedTypeWitness = swift_getAssociatedTypeWitness(
                            255LL,
                            v8,
                            v5,
                            &protocol requirements base descriptor for Publisher,
                            &associated type descriptor for Publisher.Output);
  v122 = swift_getAssociatedTypeWitness(
           255LL,
           v9,
           v6,
           &protocol requirements base descriptor for Publisher,
           &associated type descriptor for Publisher.Output);
  v17 = v119;
  v123 = swift_getAssociatedTypeWitness(
           255LL,
           v118,
           v119,
           &protocol requirements base descriptor for Publisher,
           &associated type descriptor for Publisher.Output);
  v18 = v114;
  v124 = swift_getAssociatedTypeWitness(
           255LL,
           v15,
           v114,
           &protocol requirements base descriptor for Publisher,
           &associated type descriptor for Publisher.Output);
  v125 = swift_getAssociatedTypeWitness(
           255LL,
           v13,
           v11,
           &protocol requirements base descriptor for Publisher,
           &associated type descriptor for Publisher.Output);
  v126 = swift_getAssociatedTypeWitness(
           255LL,
           v16,
           v116,
           &protocol requirements base descriptor for Publisher,
           &associated type descriptor for Publisher.Output);
  TupleTypeMetadata = swift_getTupleTypeMetadata(255LL, 6LL, &AssociatedTypeWitness, 0LL, 0LL);
  v19 = v109;
  v98 = swift_getWitnessTable(&protocol conformance descriptor for Publishers.CombineLatest4<A, B, C, D>, v109);
  v100 = sub_1000A46B0(0LL, v109, TupleTypeMetadata, v98);
  v101 = *(_QWORD *)(v100 - 8);
  v20 = __chkstk_darwin(v100);
  v95 = (char *)&v84 - v21;
  v93 = *(_QWORD *)(v116 - 8);
  v22 = __chkstk_darwin(v20);
  v92 = (char *)&v84 - ((v23 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v91 = *(_QWORD *)(v11 - 8);
  v24 = __chkstk_darwin(v22);
  v90 = (char *)&v84 - ((v25 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v89 = *(_QWORD *)(v18 - 8);
  v26 = __chkstk_darwin(v24);
  v87 = (char *)&v84 - ((v27 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v94 = *(_QWORD *)(v19 - 8);
  v28 = __chkstk_darwin(v26);
  v108 = (char *)&v84 - v29;
  v30 = *(_QWORD *)(v17 - 8);
  v31 = __chkstk_darwin(v28);
  v86 = (char *)&v84 - ((v32 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v33 = *(_QWORD *)(v120 - 8);
  v34 = __chkstk_darwin(v31);
  v36 = (char *)&v84 - ((v35 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v37 = v107;
  v38 = __chkstk_darwin(v34);
  v40 = (char *)&v84 - ((v39 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v106 = *(_QWORD *)(v117 - 8);
  v41 = __chkstk_darwin(v38);
  v43 = (char *)&v84 - ((v42 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v85 = v43;
  __chkstk_darwin(v41);
  v45 = (char *)&v84 - v44;
  v88 = (char *)&v84 - v44;
  v47 = v97;
  (*(void (__fastcall **)(char *, __int64, __int64))(v46 + 16))(v40, v97, v37);
  v48 = v47 + *(int *)(a2 + 116);
  v49 = v47;
  v50 = v120;
  (*(void (__fastcall **)(char *, __int64, __int64))(v33 + 16))(v36, v48, v120);
  v51 = *(void (__fastcall **)(char *, __int64, __int64))(v30 + 16);
  v52 = v86;
  v53 = v119;
  v51(v86, v49 + *(int *)(a2 + 120), v119);
  sub_1000A4670(v40, v36, v52, v37, v50, v53, v113, v112, v118);
  v54 = v117;
  (*(void (__fastcall **)(char *, char *, __int64))(v106 + 16))(v43, v45, v117);
  v55 = v87;
  v56 = v114;
  (*(void (__fastcall **)(char *, __int64, __int64))(v89 + 16))(v87, v49 + *(int *)(a2 + 124), v114);
  v57 = v90;
  v58 = v115;
  (*(void (__fastcall **)(char *, __int64, __int64))(v91 + 16))(v90, v49 + *(int *)(a2 + 128), v115);
  v59 = v92;
  v60 = v116;
  (*(void (__fastcall **)(char *, __int64, __int64))(v93 + 16))(v92, v49 + *(int *)(a2 + 132), v116);
  v61 = v110;
  v62 = v96;
  v63 = v56;
  v64 = v56;
  v65 = v58;
  sub_1000A4690(v85, v55, v57, v59, v54, v63, v58, v60, WitnessTable, v96, v111, v110);
  v66 = (_QWORD *)swift_allocObject(&unk_1000C20B0, 128LL, 7LL);
  v67 = v107;
  v68 = v120;
  v66[2] = v107;
  v66[3] = v68;
  v69 = v118;
  v66[4] = v119;
  v66[5] = v64;
  v66[6] = v65;
  v66[7] = v60;
  v70 = v103;
  v72 = v112;
  v71 = v113;
  v66[8] = v103;
  v66[9] = v71;
  v66[10] = v72;
  v66[11] = v69;
  v73 = v111;
  v66[12] = v62;
  v66[13] = v73;
  v74 = v104;
  v66[14] = v61;
  v66[15] = v74;
  v75 = (_QWORD *)swift_allocObject(&unk_1000C20D8, 144LL, 7LL);
  v76 = v120;
  v75[2] = v67;
  v75[3] = v76;
  v77 = v114;
  v75[4] = v119;
  v75[5] = v77;
  v78 = v116;
  v75[6] = v115;
  v75[7] = v78;
  v75[8] = v70;
  v75[9] = v71;
  v75[10] = v72;
  v75[11] = v69;
  v75[12] = v62;
  v75[13] = v73;
  v79 = v109;
  v75[14] = v110;
  v75[15] = v74;
  v75[16] = sub_1000145BC;
  v75[17] = v66;
  v80 = v95;
  v81 = v108;
  sub_1000A4780(sub_10001485C, v75, v79, TupleTypeMetadata, v98);
  swift_release(v75);
  v82 = v100;
  sub_1000A46A0(v105, v100, v70, v74);
  (*(void (__fastcall **)(char *, __int64))(v101 + 8))(v80, v82);
  (*(void (__fastcall **)(char *, __int64))(v94 + 8))(v81, v79);
  return (*(__int64 (__fastcall **)(char *, __int64))(v106 + 8))(v88, v117);
}