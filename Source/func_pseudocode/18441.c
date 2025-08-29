_$s19ControlCenterHelperAAC32closeBackgroundReplacementPicker8bundleIDySS_tF
Swift::Void __swiftcall ControlCenterHelper.closeBackgroundReplacementPicker(bundleID:)(Swift::String bundleID)
{
  char v1; // w20
  __int64 v2; // x0
  __int64 v3; // x2
  __int64 v4; // x1
  __int64 v5; // x24
  __int64 v6; // x26
  __int64 v7; // x0
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x0
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x20
  void *v14; // x26
  __int64 v15; // x0
  void *v16; // x25
  __int64 v17; // x20
  __int64 v18; // x0
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 (__fastcall *v23)(__int64); // x8
  __int64 v24; // x0
  __int64 v25; // x0
  void (__fastcall *v26)(__int64); // x8
  _QWORD v27[3]; // [xsp-30h] [xbp-30h] BYREF
  ValueMetadata *v28; // [xsp-18h] [xbp-18h]
  __int64 (__fastcall *v29)(); // [xsp-10h] [xbp-10h]
  __int64 v30; // [xsp-8h] [xbp-8h]
  __int64 v31; // [xsp+58h] [xbp+58h]

  v2 = sub_10000B3B0(bundleID._countAndFlagsBits, bundleID._object);
  v31 = v3;
  v5 = v4;
  v6 = v2;
  sub_10006FEF0(0LL);
  v7 = sub_10000B2FC();
  v8 = __chkstk_darwin(v7);
  sub_10000B318(v8);
  v9 = sub_10000B2FC();
  v10 = __chkstk_darwin(v9);
  v11 = sub_10000B36C(v10);
  v28 = &type metadata for ControlCenterFeature;
  v29 = (__int64 (__fastcall *)())sub_10000A3D8(v11);
  LOBYTE(v27[0]) = 2;
  v12 = sub_10006ED90(v27);
  sub_10000B424(v12);
  if ( (v1 & 1) != 0 )
  {
    sub_10000A424(0LL);
    v13 = v6;
    v14 = (void *)sub_1000703A0();
    v15 = swift_allocObject(&unk_10008AF20, 32LL, 7LL);
    *(_QWORD *)(v15 + 16) = v13;
    *(_QWORD *)(v15 + 24) = v5;
    v29 = sub_10000A974;
    v30 = v15;
    v27[0] = _NSConcreteStackBlock;
    v27[1] = 1107296256LL;
    v27[2] = sub_10000A148;
    v28 = (ValueMetadata *)&unk_10008AF38;
    v16 = _Block_copy(v27);
    v17 = v30;
    swift_bridgeObjectRetain(v5);
    v18 = swift_release(v17);
    v19 = sub_10006FF10(v18);
    v27[0] = &_swiftEmptyArrayStorage;
    sub_10000A5A4(v19);
    sub_1000071C4(&unk_100094900);
    v20 = sub_100009FCC();
    v21 = sub_10000B340(v20);
    sub_10000B3E0(v21);
    _Block_release(v16);
    objc_release(v14);
    v22 = sub_10000B384();
    v24 = v23(v22);
    v25 = sub_10000B39C(v24);
    v26(v25);
  }
  sub_10000B3C8(v31);
}