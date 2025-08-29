_$sSo17OS_dispatch_queueC12EyeCandyCoreE5after_7closureySd_yyctF
__int64 __fastcall OS_dispatch_queue.after(_:closure:)(double a1)
{
  __int64 v1; // x0
  __int64 v2; // x2
  __int64 v3; // x1
  __int64 v4; // x20
  __int64 v5; // x27
  double v6; // d0
  double v7; // d8
  __int64 v8; // x19
  __int64 v9; // x0
  __int64 v10; // x16
  __int64 v11; // x8
  char *v12; // x23
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x16
  __int64 v16; // x8
  char *v17; // x24
  __int64 v18; // x25
  __int64 v19; // x0
  __int64 v20; // x16
  __int64 v21; // x22
  __int64 v22; // x0
  __int64 v23; // x8
  char *v24; // x28
  __int64 v25; // x0
  __int64 v26; // x12
  char *v27; // x26
  void *v28; // x27
  __int64 v29; // x0
  __int64 v30; // x28
  __int64 v31; // x21
  __int64 v32; // x0
  void (__fastcall *v34)(char *, __int64); // [xsp-60h] [xbp-60h] BYREF
  __int64 v35; // [xsp-58h] [xbp-58h]
  __int64 v36; // [xsp-50h] [xbp-50h]
  __int64 v37; // [xsp-48h] [xbp-48h]
  void *v38; // [xsp-38h] [xbp-38h] BYREF
  _QWORD v39[5]; // [xsp-30h] [xbp-30h] BYREF
  __int64 v40; // [xsp-8h] [xbp-8h]
  __int64 v41; // [xsp+68h] [xbp+68h]

  v1 = sub_10000DECC(a1);
  v41 = v2;
  v4 = v3;
  v5 = v1;
  v7 = v6;
  v8 = sub_10001C9B0(0LL);
  v9 = ((__int64 (*)(void))sub_1000044E8)();
  v37 = v10;
  __chkstk_darwin(v9);
  v12 = (char *)&v34 - ((v11 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v13 = sub_10001C9E0(0LL);
  v14 = sub_1000044E8(v13);
  v35 = v15;
  v36 = v14;
  __chkstk_darwin(v14);
  v17 = (char *)&v34 - ((v16 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v18 = sub_10001CA00(0LL);
  v19 = sub_1000044E8(v18);
  v21 = v20;
  v22 = __chkstk_darwin(v19);
  v24 = (char *)&v34 - ((v23 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v25 = __chkstk_darwin(v22);
  v27 = (char *)&v34 - v26;
  sub_10001C9F0(v25);
  sub_10001CA30(v7);
  v34 = *(void (__fastcall **)(char *, __int64))(v21 + 8);
  v34(v24, v18);
  v39[4] = v5;
  v40 = v4;
  v39[0] = _NSConcreteStackBlock;
  v39[1] = 1107296256LL;
  v39[2] = sub_10000CCC0;
  v39[3] = &unk_100025828;
  v28 = _Block_copy(v39);
  v29 = swift_retain(v4);
  sub_10001C9D0(v29);
  v38 = &_swiftEmptyArrayStorage;
  v30 = sub_10000D048(
          &qword_100029AF0,
          &type metadata accessor for DispatchWorkItemFlags,
          &protocol conformance descriptor for DispatchWorkItemFlags);
  v31 = sub_100002BF4(&unk_100029920);
  v32 = sub_10000D090(&qword_100029B00, &unk_100029920);
  sub_10001CE70(&v38, v31, v32, v8, v30);
  sub_10001CCB0(v27, v17, v12, v28);
  _Block_release(v28);
  (*(void (__fastcall **)(char *, __int64))(v37 + 8))(v12, v8);
  (*(void (__fastcall **)(char *, __int64))(v35 + 8))(v17, v36);
  v34(v27, v18);
  swift_release(v40);
  return sub_10000DEE8(v41);
}