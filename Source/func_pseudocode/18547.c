_$s19ControlCenterHelperAAC12dismissAlert9displayIDys6UInt32V_tF
Swift::Void __swiftcall ControlCenterHelper.dismissAlert(displayID:)(Swift::UInt32 displayID)
{
  __int64 v2; // x19
  __int64 v3; // x0
  __int64 v4; // x16
  __int64 v5; // x27
  __int64 v6; // x0
  __int64 v7; // x8
  __int64 v8; // x9
  __int64 v9; // x22
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x16
  __int64 v13; // x28
  __int64 v14; // x0
  __int64 v15; // x8
  __int64 v16; // x9
  __int64 v17; // x23
  void *v18; // x24
  __int64 v19; // x0
  void *v20; // x25
  __int64 v21; // x0
  __int64 v22; // x26
  __int64 v23; // x20
  __int64 v24; // x0
  _QWORD aBlock[5]; // [xsp+0h] [xbp-80h] BYREF
  __int64 v26; // [xsp+28h] [xbp-58h]

  v2 = sub_10006FEF0(0LL);
  v3 = sub_10000B2FC();
  v5 = v4;
  v6 = __chkstk_darwin(v3);
  sub_100014458(v6);
  v9 = v8 - v7;
  v10 = sub_10006FF30(0LL);
  v11 = sub_10000B2FC();
  v13 = v12;
  v14 = __chkstk_darwin(v11);
  sub_100014458(v14);
  v17 = v16 - v15;
  sub_10000A424(0LL);
  v18 = (void *)sub_1000703A0();
  v19 = swift_allocObject(&unk_10008B9F0, 20LL, 7LL);
  *(_DWORD *)(v19 + 16) = displayID;
  aBlock[4] = sub_100020298;
  v26 = v19;
  aBlock[0] = _NSConcreteStackBlock;
  aBlock[1] = 1107296256LL;
  aBlock[2] = sub_10000A148;
  aBlock[3] = &unk_10008BA08;
  v20 = _Block_copy(aBlock);
  v21 = swift_release(v26);
  sub_10006FF10(v21);
  aBlock[0] = &_swiftEmptyArrayStorage;
  v22 = sub_100020240(
          &qword_1000966F0,
          &type metadata accessor for DispatchWorkItemFlags,
          &protocol conformance descriptor for DispatchWorkItemFlags);
  v23 = sub_1000071C4(&unk_100094900);
  v24 = sub_100009FCC();
  sub_100070540(aBlock, v23, v24, v2, v22);
  sub_1000703B0(0LL, v17);
  _Block_release(v20);
  objc_release(v18);
  (*(void (__fastcall **)(__int64, __int64))(v5 + 8))(v9, v2);
  (*(void (__fastcall **)(__int64, __int64))(v13 + 8))(v17, v10);
}