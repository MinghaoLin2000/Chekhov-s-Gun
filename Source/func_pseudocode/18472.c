_$s19ControlCenterHelperAAC19confirmItemDeletion8responseyySbc_tF
__int64 __fastcall ControlCenterHelper.confirmItemDeletion(response:)(__int64 a1, __int64 a2)
{
  __int64 v4; // x19
  __int64 v5; // x0
  __int64 v6; // x16
  __int64 v7; // x27
  __int64 v8; // x8
  char *v9; // x22
  __int64 v10; // x21
  __int64 v11; // x0
  __int64 v12; // x16
  __int64 v13; // x28
  __int64 v14; // x8
  char *v15; // x23
  void *v16; // x25
  __int64 v17; // x0
  void *v18; // x26
  __int64 v19; // x20
  __int64 v20; // x0
  __int64 v21; // x0
  __int64 v22; // x24
  __int64 v23; // x20
  __int64 v24; // x0
  _QWORD aBlock[5]; // [xsp+0h] [xbp-80h] BYREF
  __int64 v27; // [xsp+28h] [xbp-58h]

  v4 = sub_10006FEF0(0LL);
  v5 = sub_10000B2FC();
  v7 = v6;
  __chkstk_darwin(v5);
  v9 = (char *)aBlock - ((v8 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v10 = sub_10006FF30(0LL);
  v11 = sub_10000B2FC();
  v13 = v12;
  __chkstk_darwin(v11);
  v15 = (char *)aBlock - ((v14 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  sub_10000A108(0LL, &qword_1000948F0, &OBJC_CLASS___OS_dispatch_queue_ptr);
  v16 = (void *)sub_1000703A0();
  v17 = swift_allocObject(&unk_10008B3D0, 32LL, 7LL);
  *(_QWORD *)(v17 + 16) = a1;
  *(_QWORD *)(v17 + 24) = a2;
  aBlock[4] = sub_100014A90;
  v27 = v17;
  aBlock[0] = _NSConcreteStackBlock;
  aBlock[1] = 1107296256LL;
  aBlock[2] = sub_10000A148;
  aBlock[3] = &unk_10008B3E8;
  v18 = _Block_copy(aBlock);
  v19 = v27;
  swift_retain(a2);
  v20 = swift_release(v19);
  v21 = sub_10006FF10(v20);
  aBlock[0] = &_swiftEmptyArrayStorage;
  v22 = sub_10000A5A4(v21);
  v23 = sub_1000071C4(&unk_100094900);
  v24 = sub_100009FCC();
  sub_100070540(aBlock, v23, v24, v4, v22);
  sub_1000703B0(0LL, v15);
  _Block_release(v18);
  objc_release(v16);
  (*(void (__fastcall **)(char *, __int64))(v7 + 8))(v9, v4);
  return (*(__int64 (__fastcall **)(char *, __int64))(v13 + 8))(v15, v10);
}