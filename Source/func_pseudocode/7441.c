_$sSo24OS_dispatch_source_timerP12EyeCandyCoreE5resetyySdF
Swift::Void __swiftcall OS_dispatch_source_timer.reset(_:)(Swift::Double a1)
{
  __int64 v1; // x23
  __int64 v2; // x0
  __int64 v3; // x1
  __int64 v4; // x20
  double v5; // d0
  double v6; // d8
  __int64 v7; // x19
  __int64 v8; // x0
  __int64 v9; // x16
  __int64 v10; // x27
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x16
  __int64 v16; // x28
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x0
  void (__fastcall *v20)(__int64); // x21
  __int64 v21; // x0
  __int64 v22; // x0
  void (__fastcall *v23)(__int64); // t1
  __int64 v24; // x0
  __int64 v25; // x0
  __int64 v26; // x0
  __int64 v27; // [xsp+68h] [xbp+68h]

  v2 = sub_10000DECC(a1);
  v27 = v3;
  v4 = v2;
  v6 = v5;
  v7 = sub_10001C9A0(0LL);
  v8 = sub_1000044E8();
  v10 = v9;
  v11 = __chkstk_darwin(v8);
  v12 = sub_10000E104(v11);
  v13 = __chkstk_darwin(v12);
  sub_10000E354(v13);
  v14 = sub_1000044E8();
  v16 = v15;
  v17 = __chkstk_darwin(v14);
  v18 = sub_10000E0E8(v17);
  v19 = __chkstk_darwin(v18);
  sub_10000E334(v19);
  sub_10001CA30(v6);
  v20 = *(void (__fastcall **)(__int64))(v16 + 8);
  v21 = sub_10000E044();
  v20(v21);
  (*(void (__fastcall **)(__int64, _QWORD, __int64))(v10 + 104))(v1, enum case for DispatchTimeInterval.never(_:), v7);
  v22 = sub_10000D5A0(v4);
  sub_10000E1A8(v22);
  v23 = *(void (__fastcall **)(__int64))(v10 + 8);
  v24 = sub_10000E0A0();
  v23(v24);
  v25 = sub_10000E0A0();
  v23(v25);
  v26 = sub_10000E044();
  v20(v26);
  sub_10000DEE8(v27);
}