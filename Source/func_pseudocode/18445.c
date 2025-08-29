_$s19ControlCenterHelperAAC36isShowingBackgroundReplacementPicker8responseyySbc_tF
__int64 __fastcall ControlCenterHelper.isShowingBackgroundReplacementPicker(response:)(__int64 a1, __int64 a2)
{
  char v2; // w20
  __int64 v3; // x0
  __int64 v4; // x2
  __int64 v5; // x1
  __int64 v6; // x24
  void (__fastcall *v7)(_QWORD); // x25
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x0
  __int64 v11; // x0
  __int64 v12; // x0
  __int64 v13; // x0
  __int64 v14; // x0
  void *v15; // x26
  __int64 v16; // x0
  void *v17; // x25
  __int64 v18; // x20
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x0
  __int64 (__fastcall *v24)(__int64); // x8
  __int64 v25; // x0
  __int64 v26; // x0
  void (__fastcall *v27)(__int64); // x8
  _QWORD v29[3]; // [xsp-30h] [xbp-30h] BYREF
  ValueMetadata *v30; // [xsp-18h] [xbp-18h]
  __int64 (__fastcall *v31)(); // [xsp-10h] [xbp-10h]
  __int64 v32; // [xsp-8h] [xbp-8h]
  __int64 v33; // [xsp+58h] [xbp+58h]

  v3 = sub_10000B3B0(a1, a2);
  v33 = v4;
  v6 = v5;
  v7 = (void (__fastcall *)(_QWORD))v3;
  sub_10006FEF0(0LL);
  v8 = sub_10000B2FC();
  v9 = __chkstk_darwin(v8);
  sub_10000B318(v9);
  v10 = sub_10000B2FC();
  v11 = __chkstk_darwin(v10);
  v12 = sub_10000B36C(v11);
  v30 = &type metadata for ControlCenterFeature;
  v13 = sub_10000A3D8(v12);
  v14 = sub_10000B404(v13);
  sub_10000B424(v14);
  if ( (v2 & 1) != 0 )
  {
    sub_10000A424(0LL);
    v15 = (void *)sub_1000703A0();
    v16 = swift_allocObject(&unk_10008AFC0, 32LL, 7LL);
    *(_QWORD *)(v16 + 16) = v7;
    *(_QWORD *)(v16 + 24) = v6;
    v31 = sub_10000B21C;
    v32 = v16;
    v29[0] = _NSConcreteStackBlock;
    v29[1] = 1107296256LL;
    v29[2] = sub_10000A148;
    v30 = (ValueMetadata *)&unk_10008AFD8;
    v17 = _Block_copy(v29);
    v18 = v32;
    swift_retain(v6);
    v19 = swift_release(v18);
    v20 = sub_10006FF10(v19);
    v29[0] = &_swiftEmptyArrayStorage;
    sub_10000A5A4(v20);
    sub_1000071C4(&unk_100094900);
    v21 = sub_100009FCC();
    v22 = sub_10000B340(v21);
    sub_10000B3E0(v22);
    _Block_release(v17);
    objc_release(v15);
    v23 = sub_10000B384();
    v25 = v24(v23);
    v26 = sub_10000B39C(v25);
    v27(v26);
  }
  else
  {
    v7(0LL);
  }
  return sub_10000B3C8(v33);
}