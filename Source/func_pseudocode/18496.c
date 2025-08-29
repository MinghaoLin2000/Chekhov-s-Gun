_$s19ControlCenterHelper04WiFiC0C23createDiagnosticsReportyyF
Swift::Void __swiftcall WiFiHelper.createDiagnosticsReport()()
{
  __int64 v0; // x1
  __int64 v1; // x20
  __int64 v2; // x30
  __int64 v3; // x25
  __int64 v4; // x0
  __int64 v5; // x0
  __int64 v6; // x0
  __int64 v7; // x0
  void *v8; // x24
  void *v9; // x26
  __int64 v10; // x20
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0
  __int64 (__fastcall *v15)(__int64); // x8
  __int64 v16; // x0
  __int64 v17; // x0
  void (__fastcall *v18)(__int64); // x8
  _QWORD v19[5]; // [xsp-30h] [xbp-30h] BYREF
  __int64 v20; // [xsp-8h] [xbp-8h]
  __int64 v21; // [xsp+58h] [xbp+58h]

  v21 = sub_10000B3B0(v2, v0);
  v3 = v1;
  sub_10006FEF0(0LL);
  v4 = sub_10000B2FC();
  v5 = __chkstk_darwin(v4);
  sub_10000B318(v5);
  v6 = sub_10000B2FC();
  v7 = __chkstk_darwin(v6);
  sub_10000B36C(v7);
  sub_10000A108(0LL, &qword_1000948F0, &OBJC_CLASS___OS_dispatch_queue_ptr);
  v8 = (void *)sub_1000703A0();
  v19[4] = sub_1000162F0;
  v20 = v1;
  v19[0] = _NSConcreteStackBlock;
  sub_10001D078(COERCE_DOUBLE(1107296256LL));
  v19[2] = sub_10000A148;
  v19[3] = &unk_10008B508;
  v9 = _Block_copy(v19);
  v10 = v20;
  swift_retain(v3);
  v11 = swift_release(v10);
  sub_10006FF10(v11);
  v19[0] = &_swiftEmptyArrayStorage;
  sub_10001CB20(
    &qword_1000966F0,
    &type metadata accessor for DispatchWorkItemFlags,
    &protocol conformance descriptor for DispatchWorkItemFlags);
  sub_1000071C4(&unk_100094900);
  v12 = sub_10001CB68(&qword_100096700, &unk_100094900);
  v13 = sub_10001D024(v12);
  sub_10001D084(v13);
  _Block_release(v9);
  objc_release(v8);
  v14 = sub_10001CFF8();
  v16 = v15(v14);
  v17 = sub_10001D060(v16);
  v18(v17);
  sub_10000B3C8(v21);
}