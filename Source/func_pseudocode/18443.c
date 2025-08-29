_$s19ControlCenterHelperAAC15useVerboseTitleyySbF
// local variable allocation has failed, the output may be wrong!
Swift::Void __swiftcall ControlCenterHelper.useVerboseTitle(_:)(Swift::Bool a1)
{
  char v1; // w20
  __int64 v2; // x23
  __int64 v3; // x30
  char v4; // w0
  __int64 v5; // x1
  char v6; // w24
  __int64 v7; // x19
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x0
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x0
  void *v14; // x25
  __int64 v15; // x0
  void *v16; // x24
  __int64 v17; // x0
  __int64 v18; // x0
  __int64 v19; // x26
  __int64 v20; // x20
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

  v4 = sub_10000B3B0(a1, v3);
  v31 = v5;
  v6 = v4;
  v7 = sub_10006FEF0(0LL);
  v8 = sub_10000B2FC();
  v9 = __chkstk_darwin(v8);
  sub_10000B318(v9);
  v10 = sub_10000B2FC();
  v11 = __chkstk_darwin(v10);
  v12 = sub_10000B36C(v11);
  v28 = &type metadata for ControlCenterFeature;
  v29 = (__int64 (__fastcall *)())sub_10000A3D8(v12);
  LOBYTE(v27[0]) = 2;
  v13 = sub_10006ED90(v27);
  sub_10000B424(v13);
  if ( (v1 & 1) != 0 )
  {
    sub_10000A424(0LL);
    v14 = (void *)sub_1000703A0();
    v15 = swift_allocObject(&unk_10008AF70, 17LL, 7LL);
    *(_BYTE *)(v15 + 16) = v6 & 1;
    v29 = sub_10000AC44;
    v30 = v15;
    v27[0] = _NSConcreteStackBlock;
    v27[1] = 1107296256LL;
    v27[2] = sub_10000A148;
    v28 = (ValueMetadata *)&unk_10008AF88;
    v16 = _Block_copy(v27);
    v17 = swift_release(v30);
    v18 = sub_10006FF10(v17);
    v27[0] = &_swiftEmptyArrayStorage;
    v19 = sub_10000A5A4(v18);
    v20 = sub_1000071C4(&unk_100094900);
    v21 = sub_100009FCC();
    sub_100070540(v27, v20, v21, v7, v19);
    sub_1000703B0(0LL, v2);
    _Block_release(v16);
    objc_release(v14);
    v22 = sub_10000B384();
    v24 = v23(v22);
    v25 = sub_10000B39C(v24);
    v26(v25);
  }
  sub_10000B3C8(v31);
}