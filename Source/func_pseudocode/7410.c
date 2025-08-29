_$s13DisplayMarkup0B8DelegateC5setup4with9appStream8completeySo07SidecarG0C_AIyyctF
__int64 __fastcall MarkupDelegate.setup(with:appStream:complete:)(void *a1, void *a2, __int64 a3, __int64 a4)
{
  void *v4; // x20
  void *v5; // x28
  __int64 v10; // x19
  __int64 v11; // x0
  __int64 v12; // x16
  __int64 v13; // x8
  char *v14; // x22
  __int64 v15; // x0
  __int64 v16; // x16
  __int64 v17; // x25
  __int64 v18; // x8
  char *v19; // x23
  _QWORD *v20; // x0
  void *v21; // x21
  _QWORD *v22; // x20
  id v23; // x0
  id v24; // x0
  id v25; // x0
  __int64 v26; // x0
  __int64 v27; // x0
  __int64 v28; // x24
  __int64 v29; // x20
  __int64 v30; // x0
  void *v31; // x20
  __int64 v33; // [xsp+0h] [xbp-A0h] BYREF
  __int64 v34; // [xsp+8h] [xbp-98h]
  __int64 v35; // [xsp+10h] [xbp-90h]
  __int64 v36; // [xsp+18h] [xbp-88h]
  _QWORD aBlock[5]; // [xsp+20h] [xbp-80h] BYREF
  _QWORD *v38; // [xsp+48h] [xbp-58h]

  v5 = v4;
  v10 = sub_10001C9B0(0LL);
  v11 = sub_1000044E8();
  v36 = v12;
  __chkstk_darwin(v11);
  v14 = (char *)&v33 - ((v13 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v35 = sub_10001C9E0(0LL);
  v15 = sub_1000044E8();
  v17 = v16;
  __chkstk_darwin(v15);
  v19 = (char *)&v33 - ((v18 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  sub_100004134(0LL);
  v34 = sub_10001CCC0();
  v20 = (_QWORD *)swift_allocObject(&unk_100025478, 56LL, 7LL);
  v20[2] = v4;
  v20[3] = a2;
  v20[4] = a1;
  v20[5] = a3;
  v20[6] = a4;
  aBlock[4] = sub_100004214;
  v38 = v20;
  aBlock[0] = _NSConcreteStackBlock;
  aBlock[1] = 1107296256LL;
  aBlock[2] = sub_100004224;
  aBlock[3] = &unk_100025490;
  v21 = _Block_copy(aBlock);
  v22 = v38;
  v23 = objc_retain(v5);
  v24 = objc_retain(a2);
  v25 = objc_retain(a1);
  swift_retain(a4);
  v26 = swift_release(v22);
  v27 = sub_10001C9D0(v26);
  aBlock[0] = &_swiftEmptyArrayStorage;
  v28 = sub_100004280(v27);
  v29 = sub_100002BF4(&unk_100029920);
  v30 = sub_1000042D0();
  sub_10001CE70(aBlock, v29, v30, v10, v28);
  v31 = (void *)v34;
  sub_10001CCD0(0LL, v19, v14, v21);
  _Block_release(v21);
  objc_release(v31);
  (*(void (__fastcall **)(char *, __int64))(v36 + 8))(v14, v10);
  return (*(__int64 (__fastcall **)(char *, __int64))(v17 + 8))(v19, v35);
}