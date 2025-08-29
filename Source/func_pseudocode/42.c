_$s7Combine10PublishersO9SPIHelperE16CSCombineLatest5V7receive10subscriberyqd___tAA10SubscriberRd__7FailureQyd__AJRt2_6OutputQz_AMQy_AMQy0_AMQy1_AMQy2_t5InputRtd__lF
__int64 __fastcall Publishers.CSCombineLatest5.receive<A>(subscriber:)(__int64 a1, __int64 a2, __int64 a3, __int64 a4)
{
  __int64 v5; // x12
  __int64 v6; // x20
  __int64 v7; // x13
  __int64 v8; // x21
  __int64 v9; // x25
  __int64 v10; // x27
  __int64 v11; // x23
  __int64 v12; // x9
  __int64 v13; // x28
  __int64 v14; // x24
  __int64 v15; // x20
  __int64 v16; // x1
  __int64 v17; // x27
  __int64 v18; // x19
  __int64 v19; // x0
  __int64 v20; // x8
  __int64 v21; // x0
  __int64 v22; // x8
  __int64 v23; // x0
  __int64 v24; // x8
  __int64 v25; // x0
  __int64 v26; // x8
  __int64 v27; // x22
  __int64 v28; // x0
  __int64 v29; // x8
  char *v30; // x21
  __int64 v31; // x27
  __int64 v32; // x20
  __int64 v33; // x0
  __int64 v34; // x8
  char *v35; // x23
  __int64 v36; // x0
  __int64 v37; // x8
  char *v38; // x19
  __int64 v39; // x0
  __int64 v40; // x8
  __int64 v41; // x13
  char *v42; // x25
  __int64 v43; // x12
  __int64 v44; // x28
  __int64 v45; // x2
  __int64 v46; // x24
  __int64 v47; // x20
  char *v48; // x2
  __int64 v49; // x21
  char *v50; // x26
  __int64 v51; // x23
  __int64 v52; // x19
  char *v53; // x22
  __int64 v54; // x24
  __int64 v55; // x1
  char *v56; // x19
  __int64 v57; // x20
  __int64 v58; // x25
  char *v59; // x1
  char *v60; // x2
  __int64 v61; // x19
  __int64 v62; // x4
  __int64 v63; // x24
  __int64 v64; // x22
  _QWORD *v65; // x20
  __int64 v66; // x26
  __int64 v67; // x28
  __int64 v68; // x21
  __int64 v69; // x23
  __int64 v70; // x27
  __int64 v71; // x19
  _QWORD *v72; // x22
  __int64 v73; // x8
  __int64 v74; // x8
  __int64 v75; // x8
  char *v76; // x24
  __int64 v77; // x23
  char *v78; // x25
  __int64 v79; // x22
  __int64 v81; // [xsp+10h] [xbp-190h] BYREF
  __int64 v82; // [xsp+18h] [xbp-188h]
  char *v83; // [xsp+20h] [xbp-180h]
  __int64 v84; // [xsp+28h] [xbp-178h]
  char *v85; // [xsp+30h] [xbp-170h]
  char *v86; // [xsp+38h] [xbp-168h]
  char *v87; // [xsp+40h] [xbp-160h]
  __int64 v88; // [xsp+48h] [xbp-158h]
  __int64 v89; // [xsp+50h] [xbp-150h]
  __int64 v90; // [xsp+58h] [xbp-148h]
  char *v91; // [xsp+60h] [xbp-140h]
  __int64 v92; // [xsp+68h] [xbp-138h]
  __int64 v93; // [xsp+70h] [xbp-130h]
  __int64 TupleTypeMetadata; // [xsp+78h] [xbp-128h]
  __int64 v95; // [xsp+80h] [xbp-120h]
  __int64 v96; // [xsp+88h] [xbp-118h]
  __int64 WitnessTable; // [xsp+90h] [xbp-110h]
  __int64 v98; // [xsp+98h] [xbp-108h]
  __int64 v99; // [xsp+A0h] [xbp-100h]
  __int64 v100; // [xsp+A8h] [xbp-F8h]
  __int64 v101; // [xsp+B0h] [xbp-F0h]
  __int64 v102; // [xsp+B8h] [xbp-E8h]
  __int64 v103; // [xsp+C0h] [xbp-E0h]
  __int64 v104; // [xsp+C8h] [xbp-D8h]
  __int64 v105; // [xsp+D0h] [xbp-D0h]
  char *v106; // [xsp+D8h] [xbp-C8h]
  __int64 v107; // [xsp+E0h] [xbp-C0h]
  __int64 v108; // [xsp+E8h] [xbp-B8h]
  __int64 v109; // [xsp+F0h] [xbp-B0h]
  __int64 v110; // [xsp+F8h] [xbp-A8h]
  __int64 v111; // [xsp+100h] [xbp-A0h]
  __int64 v112; // [xsp+108h] [xbp-98h]
  __int64 v113; // [xsp+110h] [xbp-90h]
  __int64 AssociatedTypeWitness; // [xsp+118h] [xbp-88h] BYREF
  __int64 v115; // [xsp+120h] [xbp-80h]
  __int64 v116; // [xsp+128h] [xbp-78h]
  __int64 v117; // [xsp+130h] [xbp-70h]
  __int64 v118; // [xsp+138h] [xbp-68h]
  __int64 v119; // [xsp+140h] [xbp-60h]

  v99 = a4;
  v98 = a3;
  v6 = *(_QWORD *)(a2 + 16);
  v5 = *(_QWORD *)(a2 + 24);
  v100 = a1;
  v101 = v5;
  v7 = *(_QWORD *)(a2 + 32);
  v8 = *(_QWORD *)(a2 + 56);
  v9 = *(_QWORD *)(a2 + 64);
  v10 = *(_QWORD *)(a2 + 72);
  AssociatedTypeWitness = v6;
  v115 = v5;
  v103 = v6;
  v116 = v7;
  v117 = v8;
  v111 = v8;
  v112 = v7;
  v118 = v9;
  v119 = v10;
  v109 = v10;
  v110 = v9;
  v113 = sub_1000A4660(255LL, &AssociatedTypeWitness);
  v11 = *(_QWORD *)(a2 + 40);
  v104 = *(_QWORD *)(a2 + 48);
  v106 = (char *)&protocol conformance descriptor for Publishers.CombineLatest3<A, B, C>;
  WitnessTable = swift_getWitnessTable(&protocol conformance descriptor for Publishers.CombineLatest3<A, B, C>, v113);
  v13 = *(_QWORD *)(a2 + 80);
  v12 = *(_QWORD *)(a2 + 88);
  AssociatedTypeWitness = v113;
  v115 = v11;
  v116 = v104;
  v117 = WitnessTable;
  v118 = v13;
  v119 = v12;
  v108 = v13;
  v14 = v12;
  v89 = v12;
  v107 = sub_1000A4660(255LL, &AssociatedTypeWitness);
  AssociatedTypeWitness = swift_getAssociatedTypeWitness(
                            255LL,
                            v8,
                            v6,
                            &protocol requirements base descriptor for Publisher,
                            &associated type descriptor for Publisher.Output);
  v15 = v101;
  v115 = swift_getAssociatedTypeWitness(
           255LL,
           v9,
           v101,
           &protocol requirements base descriptor for Publisher,
           &associated type descriptor for Publisher.Output);
  v16 = v10;
  v17 = v112;
  v116 = swift_getAssociatedTypeWitness(
           255LL,
           v16,
           v112,
           &protocol requirements base descriptor for Publisher,
           &associated type descriptor for Publisher.Output);
  v102 = v11;
  v117 = swift_getAssociatedTypeWitness(
           255LL,
           v13,
           v11,
           &protocol requirements base descriptor for Publisher,
           &associated type descriptor for Publisher.Output);
  v118 = swift_getAssociatedTypeWitness(
           255LL,
           v14,
           v104,
           &protocol requirements base descriptor for Publisher,
           &associated type descriptor for Publisher.Output);
  TupleTypeMetadata = swift_getTupleTypeMetadata(255LL, 5LL, &AssociatedTypeWitness, 0LL, 0LL);
  v18 = v107;
  v93 = swift_getWitnessTable(&protocol conformance descriptor for Publishers.CombineLatest3<A, B, C>, v107);
  v95 = sub_1000A46B0(0LL, v107, TupleTypeMetadata, v93);
  v96 = *(_QWORD *)(v95 - 8);
  v19 = __chkstk_darwin(v95);
  v91 = (char *)&v81 - v20;
  v88 = *(_QWORD *)(v104 - 8);
  v21 = __chkstk_darwin(v19);
  v87 = (char *)&v81 - ((v22 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v84 = *(_QWORD *)(v11 - 8);
  v23 = __chkstk_darwin(v21);
  v86 = (char *)&v81 - ((v24 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v90 = *(_QWORD *)(v18 - 8);
  v25 = __chkstk_darwin(v23);
  v106 = (char *)&v81 - v26;
  v27 = *(_QWORD *)(v17 - 8);
  v28 = __chkstk_darwin(v25);
  v30 = (char *)&v81 - ((v29 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v31 = v15;
  v32 = *(_QWORD *)(v15 - 8);
  v33 = __chkstk_darwin(v28);
  v35 = (char *)&v81 - ((v34 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v36 = __chkstk_darwin(v33);
  v38 = (char *)&v81 - ((v37 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v105 = *(_QWORD *)(v113 - 8);
  v39 = __chkstk_darwin(v36);
  v83 = (char *)&v81 - ((v40 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  __chkstk_darwin(v39);
  v42 = (char *)&v81 - v41;
  v44 = v92;
  v46 = v45;
  (*(void (__fastcall **)(char *, __int64))(v43 + 16))(v38, v92);
  v82 = a2;
  (*(void (__fastcall **)(char *, __int64, __int64))(v32 + 16))(v35, v44 + *(int *)(a2 + 100), v31);
  v47 = v112;
  (*(void (__fastcall **)(char *, __int64, __int64))(v27 + 16))(v30, v44 + *(int *)(a2 + 104), v112);
  v85 = v42;
  v48 = v30;
  v49 = v46;
  sub_1000A4670(v38, v35, v48, v46, v31, v47, v111, v110, v109);
  v50 = v83;
  v51 = v113;
  (*(void (__fastcall **)(char *, char *, __int64))(v105 + 16))(v83, v42, v113);
  v52 = v82;
  v53 = v86;
  v54 = v102;
  (*(void (__fastcall **)(char *, __int64, __int64))(v84 + 16))(v86, v44 + *(int *)(v82 + 108), v102);
  v55 = v44 + *(int *)(v52 + 112);
  v56 = v87;
  v57 = v104;
  (*(void (__fastcall **)(char *, __int64, __int64))(v88 + 16))(v87, v55, v104);
  v58 = v89;
  v59 = v53;
  v60 = v56;
  v61 = v54;
  v62 = v54;
  v63 = v57;
  v64 = v108;
  sub_1000A4670(v50, v59, v60, v51, v62, v57, WitnessTable, v108, v89);
  v65 = (_QWORD *)swift_allocObject(&unk_1000C2060, 112LL, 7LL);
  v65[2] = v49;
  v65[3] = v31;
  v66 = v111;
  v67 = v112;
  v65[4] = v112;
  v65[5] = v61;
  v68 = v98;
  v65[6] = v63;
  v65[7] = v68;
  v69 = v109;
  v70 = v110;
  v65[8] = v66;
  v65[9] = v70;
  v65[10] = v69;
  v65[11] = v64;
  v71 = v99;
  v65[12] = v58;
  v65[13] = v71;
  v72 = (_QWORD *)swift_allocObject(&unk_1000C2088, 128LL, 7LL);
  v73 = v101;
  v72[2] = v103;
  v72[3] = v73;
  v74 = v102;
  v72[4] = v67;
  v72[5] = v74;
  v72[6] = v63;
  v72[7] = v68;
  v72[8] = v66;
  v72[9] = v70;
  v75 = v108;
  v72[10] = v69;
  v72[11] = v75;
  v72[12] = v58;
  v72[13] = v71;
  v72[14] = sub_100012F5C;
  v72[15] = v65;
  v76 = v91;
  v78 = v106;
  v77 = v107;
  sub_1000A4780(sub_1000131A8, v72, v107, TupleTypeMetadata, v93);
  swift_release(v72);
  v79 = v95;
  sub_1000A46A0(v100, v95, v68, v71);
  (*(void (__fastcall **)(char *, __int64))(v96 + 8))(v76, v79);
  (*(void (__fastcall **)(char *, __int64))(v90 + 8))(v78, v77);
  return (*(__int64 (__fastcall **)(char *, __int64))(v105 + 8))(v85, v113);
}