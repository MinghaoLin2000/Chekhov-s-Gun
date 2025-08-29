_$sSo24OS_dispatch_source_timerP12EyeCandyCoreE5reset_8intervalySd_SdtF
Swift::Void __swiftcall OS_dispatch_source_timer.reset(_:interval:)(Swift::Double _, Swift::Double interval)
{
  __int64 v2; // x23
  __int64 v3; // x0
  __int64 v4; // x1
  __int64 v5; // x20
  double v6; // d1
  double v7; // d8
  double v8; // d0
  double v9; // d9
  __int64 v10; // x0
  __int64 v11; // x16
  __int64 v12; // x27
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 v15; // x0
  __int64 v16; // x0
  __int64 v17; // x16
  __int64 v18; // x28
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 (__fastcall *v22)(__int64); // x21
  __int64 v23; // x0
  __int64 v24; // x0
  __int64 v25; // x0
  void (__fastcall *v26)(__int64); // t1
  __int64 v27; // x0
  __int64 v28; // x0
  __int64 v29; // x0
  __int64 v30; // [xsp+68h] [xbp+68h]

  v3 = sub_10000DECC(_);
  v30 = v4;
  v5 = v3;
  v7 = v6;
  v9 = v8;
  sub_10001C9A0(0LL);
  v10 = sub_1000044E8();
  v12 = v11;
  v13 = __chkstk_darwin(v10);
  v14 = sub_10000E104(v13);
  v15 = __chkstk_darwin(v14);
  sub_10000E354(v15);
  v16 = sub_1000044E8();
  v18 = v17;
  v19 = __chkstk_darwin(v16);
  v20 = sub_10000E0E8(v19);
  v21 = __chkstk_darwin(v20);
  sub_10000E334(v21);
  sub_10001CA30(v9);
  v22 = *(__int64 (__fastcall **)(__int64))(v18 + 8);
  v23 = sub_10000E044();
  v24 = v22(v23);
  static DispatchTimeInterval.seconds(_:)(v24, v2, v7);
  v25 = sub_10000D5A0(v5);
  sub_10000E1A8(v25);
  v26 = *(void (__fastcall **)(__int64))(v12 + 8);
  v27 = sub_10000E0A0();
  v26(v27);
  v28 = sub_10000E0A0();
  v26(v28);
  v29 = sub_10000E044();
  v22(v29);
  sub_10000DEE8(v30);
}