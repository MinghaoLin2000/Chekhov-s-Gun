_$sSo17OS_dispatch_queueC12EyeCandyCoreE5timer_8interval7closureSo0a1_b8_source_G0_pSd_SdyyctF
__int64 __fastcall OS_dispatch_queue.timer(_:interval:closure:)(double a1)
{
  __int64 (__fastcall *v1)(__int64); // x19
  __int64 v2; // x27
  __int64 v3; // x0
  __int64 v4; // x0
  __int64 v5; // x0
  __int64 v6; // x16
  __int64 v7; // x0
  __int64 v8; // x8
  __int64 v9; // x0
  __int64 v10; // x0
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x16
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x16
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x16
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // x16
  __int64 v28; // x25
  __int64 v29; // x0
  __int64 v30; // x28
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 v33; // x0
  void (__fastcall *v34)(__int64); // x8
  __int64 ObjectType; // x23
  __int64 v36; // x22
  void *v37; // x21
  __int64 v38; // x0
  __int64 v39; // x0
  __int64 v40; // x0
  __int64 (__fastcall *v41)(__int64); // x8
  __int64 v42; // x0
  __int64 v43; // x0
  void (__fastcall *v44)(__int64); // x8
  __int64 v45; // x0
  __int64 v46; // x22
  __int64 v47; // x0
  double v48; // d0
  __int64 v49; // x0
  __int64 v50; // x0
  __int64 v51; // x0
  __int64 v52; // x0
  __int64 v53; // x0
  void (__fastcall *v54)(__int64); // x21
  __int64 v55; // x0
  __int64 v56; // x0
  __int64 v57; // x0
  __int64 v58; // x0
  __int64 v59; // x0
  __int64 v60; // x0
  __int64 v62; // [xsp+0h] [xbp-B0h] BYREF
  __int64 v63; // [xsp+8h] [xbp-A8h]
  __int64 v64; // [xsp+10h] [xbp-A0h]
  __int64 v65; // [xsp+18h] [xbp-98h]
  __int64 v66; // [xsp+20h] [xbp-90h]
  __int64 v67; // [xsp+28h] [xbp-88h]
  __int64 v68; // [xsp+30h] [xbp-80h]
  __int64 v69; // [xsp+40h] [xbp-70h]
  __int64 v70; // [xsp+48h] [xbp-68h]
  __int64 v71; // [xsp+50h] [xbp-60h]
  char *v72; // [xsp+60h] [xbp-50h]
  __int64 v73; // [xsp+68h] [xbp-48h]
  __int64 v74; // [xsp+70h] [xbp-40h]
  _QWORD v75[5]; // [xsp+78h] [xbp-38h] BYREF
  __int64 v76; // [xsp+A0h] [xbp-10h]

  v3 = sub_10000DECC(a1);
  v4 = sub_10000E268(v3);
  v5 = sub_1000044E8(v4);
  v73 = v6;
  v74 = v5;
  v7 = __chkstk_darwin(v5);
  v72 = (char *)&v62 - ((v8 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v9 = sub_10000DF7C(v7);
  v10 = __chkstk_darwin(v9);
  v11 = sub_10000E220(v10);
  v12 = sub_10001CA00(v11);
  v13 = sub_1000044E8(v12);
  v70 = v14;
  v71 = v13;
  v15 = __chkstk_darwin(v13);
  v16 = sub_10000DEAC(v15);
  v17 = __chkstk_darwin(v16);
  v18 = sub_10000DF2C(v17);
  v19 = sub_1000044E8(v18);
  v64 = v20;
  v65 = v19;
  v21 = __chkstk_darwin(v19);
  v63 = sub_10000DF04(v21);
  v22 = sub_1000044E8(v63);
  v62 = v23;
  v24 = __chkstk_darwin(v22);
  v25 = sub_10000E148(v24);
  v26 = sub_1000044E8(v25);
  v28 = v27;
  v29 = __chkstk_darwin(v26);
  sub_10000DF50(v29);
  v30 = sub_10000B064(0LL, &unk_100029BB8, &OBJC_CLASS___OS_dispatch_source_ptr);
  v75[0] = &_swiftEmptyArrayStorage;
  sub_10000D048(
    &unk_100029BC0,
    &type metadata accessor for OS_dispatch_source.TimerFlags,
    &protocol conformance descriptor for OS_dispatch_source.TimerFlags);
  sub_100002BF4(&unk_100029BC8);
  v31 = sub_10000D090(&unk_100029BD0, &unk_100029BC8);
  sub_10000DFF4(v31);
  v32 = sub_10001CD00(v2, v66);
  v33 = sub_10000E18C(v32);
  v34(v33);
  ObjectType = swift_getObjectType(v30);
  v36 = v68;
  v75[4] = v67;
  v76 = v68;
  v75[0] = _NSConcreteStackBlock;
  v75[1] = 1107296256LL;
  v75[2] = sub_100004224;
  v75[3] = &unk_1000258F0;
  v37 = _Block_copy(v75);
  v38 = swift_retain(v36);
  sub_10001C9D0(v38);
  v39 = sub_10000D0E8(ObjectType);
  sub_10000E314(v39);
  _Block_release(v37);
  v40 = sub_10000DF68();
  v42 = v41(v40);
  v43 = sub_10000DFAC(v42);
  v44(v43);
  v45 = swift_release(v76);
  v46 = v69;
  v47 = sub_10001C9F0(v45);
  v48 = sub_10000E2EC(v47);
  v49 = sub_10001CA30(v48);
  v50 = sub_10000E0B0(v49);
  v51 = v1(v50);
  sub_10000E2CC(v51);
  v52 = sub_10000D5A0(ObjectType);
  v53 = sub_10000E1CC(v52);
  sub_10001CD80(v53);
  v54 = *(void (__fastcall **)(__int64))(v73 + 8);
  v55 = sub_10000E034(v46);
  v54(v55);
  v56 = sub_10000E034(v28);
  v57 = ((__int64 (__fastcall *)(__int64))v54)(v56);
  v58 = sub_10000E28C(v57);
  v1(v58);
  v59 = sub_10001CD50(ObjectType);
  v60 = sub_10000E2A0(v59);
  return sub_10000DEE8(v60);
}