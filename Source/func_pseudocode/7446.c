_$sSo17OS_dispatch_queueC12EyeCandyCoreE4once_7closureSo0a1_B13_source_timer_pSd_yyctF
__int64 __fastcall OS_dispatch_queue.once(_:closure:)(double a1)
{
  __int64 v1; // x23
  __int64 v2; // x0
  __int64 v3; // x0
  __int64 v4; // x0
  __int64 v5; // x16
  __int64 v6; // x0
  __int64 v7; // x8
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x0
  __int64 v11; // x0
  __int64 v12; // x16
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x16
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x16
  __int64 v22; // x24
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x16
  __int64 v27; // x25
  __int64 v28; // x0
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 v31; // x0
  __int64 v32; // x0
  void (__fastcall *v33)(__int64); // x8
  __int64 ObjectType; // x28
  _QWORD *v35; // x0
  __int64 v36; // x21
  void *v37; // x19
  __int64 v38; // x0
  __int64 v39; // x0
  __int64 v40; // x0
  __int64 (__fastcall *v41)(__int64); // x8
  __int64 v42; // x0
  __int64 v43; // x0
  void (__fastcall *v44)(__int64); // x8
  __int64 v45; // x0
  __int64 v46; // x0
  double v47; // d0
  __int64 v48; // x0
  __int64 v49; // x0
  __int64 v50; // x0
  __int64 v51; // x0
  void (__fastcall *v52)(__int64); // x9
  __int64 v53; // x0
  __int64 v54; // x0
  void (__fastcall *v55)(__int64); // t1
  __int64 v56; // x0
  __int64 v57; // x0
  __int64 v58; // x0
  __int64 v59; // x0
  __int64 v60; // x0
  __int64 v61; // x0
  __int64 v63; // [xsp+0h] [xbp-B0h] BYREF
  __int64 v64; // [xsp+10h] [xbp-A0h]
  __int64 v65; // [xsp+18h] [xbp-98h]
  __int64 v66; // [xsp+20h] [xbp-90h]
  __int64 v67; // [xsp+28h] [xbp-88h]
  __int64 v68; // [xsp+30h] [xbp-80h]
  __int64 v69; // [xsp+48h] [xbp-68h]
  char *v70; // [xsp+58h] [xbp-58h]
  __int64 v71; // [xsp+60h] [xbp-50h]
  __int64 v72; // [xsp+68h] [xbp-48h]
  __int64 v73; // [xsp+70h] [xbp-40h]
  _QWORD v74[5]; // [xsp+78h] [xbp-38h] BYREF
  _QWORD *v75; // [xsp+A0h] [xbp-10h]

  v2 = sub_10000DECC(a1);
  v3 = sub_10000E1E4(v2);
  v4 = sub_1000044E8(v3);
  v71 = v5;
  v72 = v4;
  v6 = __chkstk_darwin(v4);
  v70 = (char *)&v63 - ((v7 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v8 = sub_10000DF7C(v6);
  v9 = __chkstk_darwin(v8);
  v10 = sub_10000E238(v9);
  v69 = sub_10001CA00(v10);
  v11 = sub_1000044E8(v69);
  v73 = v12;
  v13 = __chkstk_darwin(v11);
  v14 = sub_10000DEAC(v13);
  v15 = __chkstk_darwin(v14);
  v16 = sub_10000DF2C(v15);
  v17 = sub_1000044E8(v16);
  v65 = v18;
  v66 = v17;
  v19 = __chkstk_darwin(v17);
  v64 = sub_10000DF04(v19);
  v20 = sub_1000044E8(v64);
  v22 = v21;
  v23 = __chkstk_darwin(v20);
  v24 = sub_10000E120(v23);
  v25 = sub_1000044E8(v24);
  v27 = v26;
  v28 = __chkstk_darwin(v25);
  sub_10000DF50(v28);
  sub_10000B064(0LL, &unk_100029BB8, &OBJC_CLASS___OS_dispatch_source_ptr);
  v74[0] = &_swiftEmptyArrayStorage;
  sub_10000D048(
    &unk_100029BC0,
    &type metadata accessor for OS_dispatch_source.TimerFlags,
    &protocol conformance descriptor for OS_dispatch_source.TimerFlags);
  sub_100002BF4(&unk_100029BC8);
  v29 = sub_10000D090(&unk_100029BD0, &unk_100029BC8);
  v30 = sub_10000E054(v29);
  v31 = sub_10000E374(v30);
  v32 = sub_10000E170(v31);
  v33(v32);
  ObjectType = swift_getObjectType(&unk_100029BC8);
  v35 = (_QWORD *)swift_allocObject(&unk_100025860, 40LL, 7LL);
  v36 = v68;
  v35[2] = v67;
  v35[3] = v36;
  v35[4] = &unk_100029BC8;
  v74[4] = sub_10000D0E4;
  v75 = v35;
  v74[0] = _NSConcreteStackBlock;
  v74[1] = 1107296256LL;
  v74[2] = sub_100004224;
  v74[3] = &unk_100025878;
  v37 = _Block_copy(v74);
  swift_retain(v36);
  v38 = swift_unknownObjectRetain(&unk_100029BC8);
  sub_10001C9D0(v38);
  v39 = sub_10000D0E8(ObjectType);
  sub_10000E2AC(v39);
  _Block_release(v37);
  v40 = sub_10000DF68();
  v42 = v41(v40);
  v43 = sub_10000E208(v42);
  v44(v43);
  v45 = swift_release(v75);
  v46 = sub_10001C9F0(v45);
  v47 = sub_10000E300(v46);
  v48 = sub_10001CA30(v47);
  v49 = sub_10000DFD0(v48);
  v50 = ((__int64 (__fastcall *)(__int64))v37)(v49);
  v51 = sub_10000DF88(v50, enum case for DispatchTimeInterval.never(_:));
  v52(v51);
  v53 = sub_10000D5A0(ObjectType);
  v54 = sub_10000E0CC(v53);
  sub_10001CD80(v54);
  v55 = *(void (__fastcall **)(__int64))(v1 + 8);
  v56 = sub_10000E024(v22);
  v55(v56);
  v57 = sub_10000E024(v27);
  v58 = ((__int64 (__fastcall *)(__int64))v55)(v57);
  v59 = sub_10000E250(v58);
  ((void (__fastcall *)(__int64))v37)(v59);
  v60 = sub_10001CD50(ObjectType);
  v61 = sub_10000E2A0(v60);
  return sub_10000DEE8(v61);
}