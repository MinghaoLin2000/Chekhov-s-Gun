_$s7Combine10PublishersO9SPIHelperE16CSCombineLatest7V7receive10subscriberyqd___tAA10SubscriberRd__7FailureQyd__AJRt4_6OutputQz_AMQy_AMQy0_AMQy1_AMQy2_AMQy3_AMQy4_t5InputRtd__lF
__int64 __fastcall Publishers.CSCombineLatest7.receive<A>(subscriber:)(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // x13
  __int64 v6; // x28
  __int64 v7; // x15
  __int64 v8; // x24
  __int64 v9; // x25
  __int64 v10; // x26
  __int64 v11; // x19
  __int64 v12; // x22
  __int64 v13; // x8
  __int64 v14; // x23
  __int64 v15; // x10
  __int64 v16; // x20
  __int64 v17; // x19
  __int64 v18; // x24
  __int64 v19; // x26
  __int64 v20; // x25
  __int64 v21; // x20
  __int64 v22; // x0
  __int64 v23; // x8
  __int64 v24; // x0
  __int64 v25; // x8
  __int64 v26; // x0
  __int64 v27; // x8
  __int64 v28; // x0
  __int64 v29; // x8
  __int64 v30; // x0
  __int64 v31; // x8
  __int64 v32; // x0
  __int64 v33; // x8
  __int64 v34; // x19
  __int64 v35; // x0
  __int64 v36; // x8
  char *v37; // x21
  __int64 v38; // x28
  __int64 v39; // x26
  __int64 v40; // x0
  __int64 v41; // x8
  char *v42; // x24
  __int64 v43; // x0
  __int64 v44; // x8
  char *v45; // x25
  __int64 v46; // x0
  __int64 v47; // x8
  __int64 v48; // x13
  char *v49; // x22
  __int64 v50; // x12
  __int64 v51; // x23
  __int64 v52; // x26
  char *v53; // x20
  __int64 v54; // x19
  __int64 v55; // x25
  char *v56; // x28
  __int64 v57; // x26
  char *v58; // x24
  __int64 v59; // x19
  __int64 v60; // x1
  char *v61; // x27
  __int64 v62; // x23
  __int64 v63; // x21
  __int64 v64; // x20
  __int64 v65; // x22
  char *v66; // x2
  __int64 v67; // x4
  __int64 v68; // x24
  __int64 v69; // x25
  _QWORD *v70; // x19
  __int64 v71; // x8
  __int64 v72; // x23
  __int64 v73; // x24
  __int64 v74; // x26
  __int64 v75; // x27
  __int64 v76; // x28
  __int64 v77; // x25
  __int64 v78; // x22
  _QWORD *v79; // x21
  __int64 v80; // x8
  __int64 v81; // x8
  char *v82; // x23
  __int64 v83; // x19
  char *v84; // x25
  __int64 v85; // x21
  __int64 v87; // [xsp+20h] [xbp-1D0h] BYREF
  char *v88; // [xsp+28h] [xbp-1C8h]
  char *v89; // [xsp+30h] [xbp-1C0h]
  char *v90; // [xsp+38h] [xbp-1B8h]
  __int64 v91; // [xsp+40h] [xbp-1B0h]
  char *v92; // [xsp+48h] [xbp-1A8h]
  __int64 v93; // [xsp+50h] [xbp-1A0h]
  char *v94; // [xsp+58h] [xbp-198h]
  __int64 v95; // [xsp+60h] [xbp-190h]
  __int64 v96; // [xsp+68h] [xbp-188h]
  __int64 v97; // [xsp+70h] [xbp-180h]
  char *v98; // [xsp+78h] [xbp-178h]
  __int64 v99; // [xsp+80h] [xbp-170h]
  __int64 v100; // [xsp+88h] [xbp-168h]
  __int64 TupleTypeMetadata; // [xsp+90h] [xbp-160h]
  __int64 v102; // [xsp+98h] [xbp-158h]
  __int64 v103; // [xsp+A0h] [xbp-150h]
  __int64 WitnessTable; // [xsp+A8h] [xbp-148h]
  __int64 v105; // [xsp+B0h] [xbp-140h]
  __int64 v106; // [xsp+B8h] [xbp-138h]
  __int64 v107; // [xsp+C0h] [xbp-130h]
  char *v108; // [xsp+C8h] [xbp-128h]
  __int64 v109; // [xsp+D0h] [xbp-120h]
  char *v110; // [xsp+D8h] [xbp-118h]
  __int64 v111; // [xsp+E0h] [xbp-110h]
  __int64 v112; // [xsp+E8h] [xbp-108h]
  __int64 v113; // [xsp+F0h] [xbp-100h]
  __int64 v114; // [xsp+F8h] [xbp-F8h]
  __int64 v115; // [xsp+100h] [xbp-F0h]
  __int64 v116; // [xsp+108h] [xbp-E8h]
  __int64 v117; // [xsp+110h] [xbp-E0h]
  __int64 v118; // [xsp+118h] [xbp-D8h]
  __int64 v119; // [xsp+120h] [xbp-D0h]
  __int64 v120; // [xsp+128h] [xbp-C8h]
  __int64 v121; // [xsp+130h] [xbp-C0h]
  __int64 v122; // [xsp+138h] [xbp-B8h]
  __int64 v123; // [xsp+140h] [xbp-B0h]
  __int64 v124; // [xsp+148h] [xbp-A8h]
  __int64 v125; // [xsp+150h] [xbp-A0h]
  __int64 AssociatedTypeWitness; // [xsp+158h] [xbp-98h] BYREF
  __int64 v127; // [xsp+160h] [xbp-90h]
  __int64 v128; // [xsp+168h] [xbp-88h]
  __int64 v129; // [xsp+170h] [xbp-80h]
  __int64 v130; // [xsp+178h] [xbp-78h]
  __int64 v131; // [xsp+180h] [xbp-70h]
  __int64 v132; // [xsp+188h] [xbp-68h]
  __int64 v133; // [xsp+190h] [xbp-60h]

  v106 = a4;
  v105 = a3;
  v107 = a1;
  v6 = *(_QWORD *)(a2 + 16);
  v5 = *(_QWORD *)(a2 + 24);
  v7 = *(_QWORD *)(a2 + 40);
  v123 = *(_QWORD *)(a2 + 32);
  v124 = v5;
  v8 = *(_QWORD *)(a2 + 72);
  v9 = *(_QWORD *)(a2 + 80);
  v10 = *(_QWORD *)(a2 + 88);
  v122 = *(_QWORD *)(a2 + 96);
  v125 = v6;
  AssociatedTypeWitness = v6;
  v127 = v5;
  v128 = v123;
  v129 = v7;
  v130 = v8;
  v116 = v8;
  v117 = v7;
  v131 = v9;
  v132 = v10;
  v114 = v10;
  v115 = v9;
  v133 = v122;
  v11 = sub_1000A4680(255LL, &AssociatedTypeWitness);
  v12 = *(_QWORD *)(a2 + 56);
  v118 = *(_QWORD *)(a2 + 48);
  v119 = v12;
  v120 = *(_QWORD *)(a2 + 64);
  v121 = v11;
  v110 = (char *)&protocol conformance descriptor for Publishers.CombineLatest4<A, B, C, D>;
  WitnessTable = swift_getWitnessTable(&protocol conformance descriptor for Publishers.CombineLatest4<A, B, C, D>, v11);
  v13 = *(_QWORD *)(a2 + 104);
  v14 = *(_QWORD *)(a2 + 112);
  v15 = *(_QWORD *)(a2 + 120);
  AssociatedTypeWitness = v11;
  v127 = v118;
  v128 = v12;
  v129 = v120;
  v130 = WitnessTable;
  v131 = v13;
  v16 = v13;
  v113 = v13;
  v132 = v14;
  v133 = v15;
  v97 = v14;
  v17 = v15;
  v112 = v15;
  v111 = sub_1000A4680(255LL, &AssociatedTypeWitness);
  AssociatedTypeWitness = swift_getAssociatedTypeWitness(
                            255LL,
                            v8,
                            v6,
                            &protocol requirements base descriptor for Publisher,
                            &associated type descriptor for Publisher.Output);
  v127 = swift_getAssociatedTypeWitness(
           255LL,
           v9,
           v124,
           &protocol requirements base descriptor for Publisher,
           &associated type descriptor for Publisher.Output);
  v18 = v123;
  v128 = swift_getAssociatedTypeWitness(
           255LL,
           v10,
           v123,
           &protocol requirements base descriptor for Publisher,
           &associated type descriptor for Publisher.Output);
  v19 = v117;
  v129 = swift_getAssociatedTypeWitness(
           255LL,
           v122,
           v117,
           &protocol requirements base descriptor for Publisher,
           &associated type descriptor for Publisher.Output);
  v20 = v118;
  v130 = swift_getAssociatedTypeWitness(
           255LL,
           v16,
           v118,
           &protocol requirements base descriptor for Publisher,
           &associated type descriptor for Publisher.Output);
  v131 = swift_getAssociatedTypeWitness(
           255LL,
           v14,
           v12,
           &protocol requirements base descriptor for Publisher,
           &associated type descriptor for Publisher.Output);
  v132 = swift_getAssociatedTypeWitness(
           255LL,
           v17,
           v120,
           &protocol requirements base descriptor for Publisher,
           &associated type descriptor for Publisher.Output);
  TupleTypeMetadata = swift_getTupleTypeMetadata(255LL, 7LL, &AssociatedTypeWitness, 0LL, 0LL);
  v21 = v111;
  v100 = swift_getWitnessTable(&protocol conformance descriptor for Publishers.CombineLatest4<A, B, C, D>, v111);
  v102 = sub_1000A46B0(0LL, v111, TupleTypeMetadata, v100);
  v103 = *(_QWORD *)(v102 - 8);
  v22 = __chkstk_darwin(v102);
  v98 = (char *)&v87 - v23;
  v95 = *(_QWORD *)(v120 - 8);
  v24 = __chkstk_darwin(v22);
  v94 = (char *)&v87 - ((v25 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v93 = *(_QWORD *)(v12 - 8);
  v26 = __chkstk_darwin(v24);
  v92 = (char *)&v87 - ((v27 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v91 = *(_QWORD *)(v20 - 8);
  v28 = __chkstk_darwin(v26);
  v90 = (char *)&v87 - ((v29 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v96 = *(_QWORD *)(v21 - 8);
  v30 = __chkstk_darwin(v28);
  v110 = (char *)&v87 - v31;
  v87 = *(_QWORD *)(v19 - 8);
  v32 = __chkstk_darwin(v30);
  v88 = (char *)&v87 - ((v33 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v34 = *(_QWORD *)(v18 - 8);
  v35 = __chkstk_darwin(v32);
  v37 = (char *)&v87 - ((v36 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v38 = v124;
  v39 = *(_QWORD *)(v124 - 8);
  v40 = __chkstk_darwin(v35);
  v42 = (char *)&v87 - ((v41 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v43 = __chkstk_darwin(v40);
  v45 = (char *)&v87 - ((v44 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v109 = *(_QWORD *)(v121 - 8);
  v46 = __chkstk_darwin(v43);
  v108 = (char *)&v87 - ((v47 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  __chkstk_darwin(v46);
  v49 = (char *)&v87 - v48;
  v51 = v99;
  (*(void (__fastcall **)(char *, __int64))(v50 + 16))(v45, v99);
  (*(void (__fastcall **)(char *, __int64, __int64))(v39 + 16))(v42, v51 + *(int *)(a2 + 132), v38);
  v52 = v123;
  (*(void (__fastcall **)(char *, __int64, __int64))(v34 + 16))(v37, v51 + *(int *)(a2 + 136), v123);
  v53 = v88;
  v54 = v117;
  (*(void (__fastcall **)(char *, __int64, __int64))(v87 + 16))(v88, v51 + *(int *)(a2 + 140), v117);
  v89 = v49;
  sub_1000A4690(v45, v42, v37, v53, v125, v38, v52, v54, v116, v115, v114, v122);
  v55 = v121;
  (*(void (__fastcall **)(char *, char *, __int64))(v109 + 16))(v108, v49, v121);
  v56 = v90;
  v57 = v118;
  (*(void (__fastcall **)(char *, __int64, __int64))(v91 + 16))(v90, v51 + *(int *)(a2 + 144), v118);
  v58 = v92;
  v59 = v119;
  (*(void (__fastcall **)(char *, __int64, __int64))(v93 + 16))(v92, v51 + *(int *)(a2 + 148), v119);
  v60 = v51 + *(int *)(a2 + 152);
  v61 = v94;
  v62 = v120;
  (*(void (__fastcall **)(char *, __int64, __int64))(v95 + 16))(v94, v60, v120);
  v63 = v112;
  v64 = v97;
  v65 = v113;
  v66 = v58;
  v67 = v55;
  v68 = v59;
  v69 = v62;
  sub_1000A4690(v108, v56, v66, v61, v67, v57, v59, v62, WitnessTable, v113, v97, v112);
  v70 = (_QWORD *)swift_allocObject(&unk_1000C2100, 144LL, 7LL);
  v71 = v124;
  v70[2] = v125;
  v70[3] = v71;
  v72 = v117;
  v70[4] = v123;
  v70[5] = v72;
  v70[6] = v57;
  v70[7] = v68;
  v73 = v105;
  v70[8] = v69;
  v70[9] = v73;
  v75 = v115;
  v74 = v116;
  v70[10] = v116;
  v70[11] = v75;
  v76 = v114;
  v77 = v122;
  v70[12] = v114;
  v70[13] = v77;
  v70[14] = v65;
  v70[15] = v64;
  v78 = v106;
  v70[16] = v63;
  v70[17] = v78;
  v79 = (_QWORD *)swift_allocObject(&unk_1000C2128, 160LL, 7LL);
  v80 = v124;
  v79[2] = v125;
  v79[3] = v80;
  v79[4] = v123;
  v79[5] = v72;
  v81 = v119;
  v79[6] = v118;
  v79[7] = v81;
  v79[8] = v120;
  v79[9] = v73;
  v79[10] = v74;
  v79[11] = v75;
  v79[12] = v76;
  v79[13] = v77;
  v79[14] = v113;
  v79[15] = v64;
  v79[16] = v112;
  v79[17] = v78;
  v79[18] = sub_100016234;
  v79[19] = v70;
  v82 = v98;
  v83 = v111;
  v84 = v110;
  sub_1000A4780(sub_100016534, v79, v111, TupleTypeMetadata, v100);
  swift_release(v79);
  v85 = v102;
  sub_1000A46A0(v107, v102, v73, v78);
  (*(void (__fastcall **)(char *, __int64))(v103 + 8))(v82, v85);
  (*(void (__fastcall **)(char *, __int64))(v96 + 8))(v84, v83);
  return (*(__int64 (__fastcall **)(char *, __int64))(v109 + 8))(v89, v121);
}