_$s19ControlCenterHelperAAC34presentBackgroundReplacementPicker8bundleID7appName06cameraI09onDisplay15useVerboseTitleySS_SSSgSSs6UInt32VSbtF
// local variable allocation has failed, the output may be wrong!
Swift::Void __swiftcall ControlCenterHelper.presentBackgroundReplacementPicker(bundleID:appName:cameraID:onDisplay:useVerboseTitle:)(
        Swift::String bundleID,
        Swift::String_optional appName,
        Swift::String cameraID,
        Swift::UInt32 onDisplay,
        Swift::Bool useVerboseTitle)
{
  char v5; // w20
  __int64 v6; // x22
  __int64 v7; // x23
  __int64 v8; // x0
  __int64 v9; // x8
  int v10; // w6
  char v11; // w7
  __int64 v12; // x5
  __int64 v13; // x4
  __int64 v14; // x3
  __int64 v15; // x26
  __int64 v16; // x2
  __int64 v17; // x27
  __int64 v18; // x1
  __int64 v19; // x24
  __int64 v20; // x28
  __int64 v21; // x19
  __int64 v22; // x0
  __int64 v23; // x16
  __int64 v24; // x0
  __int64 v25; // x21
  __int64 v26; // x0
  __int64 v27; // x16
  __int64 v28; // x25
  __int64 v29; // x0
  __int64 v30; // x0
  __int64 v31; // x0
  __int64 v32; // x0
  __int64 v33; // x0
  void *v34; // x27
  __int64 v35; // x20
  __int64 v36; // x0
  __int64 v37; // x0
  __int64 v38; // x0
  void *v39; // [xsp-58h] [xbp-58h]
  __int64 v40; // [xsp-50h] [xbp-50h]
  int v41; // [xsp-48h] [xbp-48h]
  char v42; // [xsp-44h] [xbp-44h]
  __int64 v43; // [xsp-40h] [xbp-40h]
  __int64 v44; // [xsp-38h] [xbp-38h]
  _QWORD v45[3]; // [xsp-30h] [xbp-30h] BYREF
  ValueMetadata *v46; // [xsp-18h] [xbp-18h]
  __int64 (__fastcall *v47)(); // [xsp-10h] [xbp-10h]
  __int64 v48; // [xsp-8h] [xbp-8h]
  __int64 v49; // [xsp+58h] [xbp+58h]

  v8 = sub_10000B3B0(
         bundleID._countAndFlagsBits,
         bundleID._object,
         appName.value._countAndFlagsBits,
         appName.value._object,
         cameraID._countAndFlagsBits,
         cameraID._object,
         *(_QWORD *)&onDisplay,
         useVerboseTitle);
  v49 = v9;
  v41 = v10;
  v42 = v11;
  v43 = v12;
  v40 = v13;
  v15 = v14;
  v17 = v16;
  v19 = v18;
  v20 = v8;
  v21 = sub_10006FEF0(0LL);
  v22 = sub_10000B2FC();
  v44 = v23;
  v24 = __chkstk_darwin(v22);
  v25 = sub_10000B318(v24);
  v26 = sub_10000B2FC();
  v28 = v27;
  v29 = __chkstk_darwin(v26);
  v30 = sub_10000B36C(v29);
  v46 = &type metadata for ControlCenterFeature;
  v31 = sub_10000A3D8(v30);
  v32 = sub_10000B404(v31);
  sub_10000B424(v32);
  if ( (v5 & 1) != 0 )
  {
    sub_10000A424(0LL);
    v39 = (void *)sub_1000703A0();
    v33 = swift_allocObject(&unk_10008AED0, 69LL, 7LL);
    *(_QWORD *)(v33 + 16) = v20;
    *(_QWORD *)(v33 + 24) = v19;
    *(_QWORD *)(v33 + 32) = v17;
    *(_QWORD *)(v33 + 40) = v15;
    *(_QWORD *)(v33 + 48) = v40;
    *(_QWORD *)(v33 + 56) = v43;
    *(_DWORD *)(v33 + 64) = v41;
    *(_BYTE *)(v33 + 68) = v42 & 1;
    v47 = sub_10000A574;
    v48 = v33;
    v45[0] = _NSConcreteStackBlock;
    v45[1] = 1107296256LL;
    v45[2] = sub_10000A148;
    v46 = (ValueMetadata *)&unk_10008AEE8;
    v34 = _Block_copy(v45);
    v35 = v48;
    swift_bridgeObjectRetain(v15);
    swift_bridgeObjectRetain(v43);
    swift_bridgeObjectRetain(v19);
    v36 = swift_release(v35);
    v37 = sub_10006FF10(v36);
    v45[0] = &_swiftEmptyArrayStorage;
    sub_10000A5A4(v37);
    sub_1000071C4(&unk_100094900);
    v38 = sub_100009FCC();
    sub_10000B340(v38);
    sub_1000703B0(0LL, v7, v6, v34);
    _Block_release(v34);
    objc_release(v39);
    (*(void (__fastcall **)(__int64, __int64))(v44 + 8))(v6, v21);
    (*(void (__fastcall **)(__int64, __int64))(v28 + 8))(v7, v25);
  }
  sub_10000B3C8(v49);
}