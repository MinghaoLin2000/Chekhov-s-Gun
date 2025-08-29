_$s10Foundation3URLV9SPIHelperE26evictionSafeResourceValues7forKeysAA011URLResourceG0VShySo16NSURLResourceKeyaG_tKF
void __usercall URL.evictionSafeResourceValues(forKeys:)(__int64 a1@<X0>, __int64 a2@<X8>)
{
  __int64 v3; // x0
  __int64 v4; // x8
  __int64 v5; // x12
  char *v6; // x22
  __int64 v7; // x25
  __int64 v8; // x19
  id v9; // x27
  void *v10; // x28
  _QWORD *v11; // x20
  __int64 v12; // x23
  void *v13; // x24
  __int64 v14; // x21
  id v15; // x26
  id v16; // x19
  char *v17; // x23
  __int64 v18; // [xsp+0h] [xbp-B0h] BYREF
  __int64 v19; // [xsp+8h] [xbp-A8h]
  char *v20; // [xsp+18h] [xbp-98h]
  id aBlock[5]; // [xsp+20h] [xbp-90h] BYREF
  __int64 v22; // [xsp+48h] [xbp-68h]
  id v23; // [xsp+50h] [xbp-60h] BYREF

  v19 = a2;
  sub_1000081BC(&unk_1000CA4B0);
  v3 = ((__int64 (*)(void))__chkstk_darwin)();
  v20 = (char *)&v18 - ((v4 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  __chkstk_darwin(v3);
  v6 = (char *)&v18 - v5;
  v23 = 0LL;
  v7 = sub_1000A4350(0LL);
  v8 = *(_QWORD *)(v7 - 8);
  (*(void (__fastcall **)(char *, __int64, __int64, __int64))(v8 + 56))(v6, 1LL, 1LL, v7);
  v9 = objc_msgSend(objc_allocWithZone((Class)&OBJC_CLASS___NSFileCoordinator), "init");
  v10 = (void *)sub_1000A4440();
  v11 = (_QWORD *)swift_allocObject(&unk_1000C1EE8, 40LL, 7LL);
  v11[2] = v6;
  v11[3] = a1;
  v11[4] = &v23;
  v12 = swift_allocObject(&unk_1000C1F10, 32LL, 7LL);
  *(_QWORD *)(v12 + 16) = sub_100008AC4;
  *(_QWORD *)(v12 + 24) = v11;
  aBlock[4] = sub_100008AE0;
  v22 = v12;
  aBlock[0] = _NSConcreteStackBlock;
  aBlock[1] = (id)1107296256;
  aBlock[2] = sub_100008B08;
  aBlock[3] = &unk_1000C1F28;
  v13 = _Block_copy(aBlock);
  v14 = v22;
  swift_bridgeObjectRetain(a1);
  swift_retain(v12);
  swift_release(v14);
  aBlock[0] = 0LL;
  objc_msgSend(v9, "coordinateReadingItemAtURL:options:error:byAccessor:", v10, 4LL, aBlock, v13);
  _Block_release(v13);
  objc_release(v9);
  objc_release(v10);
  v15 = objc_retain(aBlock[0]);
  LOBYTE(v13) = swift_isEscapingClosureAtFileLocation(v12, "", 171LL, 12LL, 126LL, 1LL);
  swift_release(v12);
  if ( ((unsigned __int8)v13 & 1) != 0 )
    __break(1u);
  if ( v15 )
  {
    v16 = objc_retain(v15);
    swift_willThrow();
    sub_100008C6C(v6);
    objc_release(v23);
    swift_release(v11);
    objc_release(v16);
  }
  else if ( v23 )
  {
    objc_retain(v23);
    swift_willThrow();
    sub_100008C6C(v6);
    objc_release(v23);
    swift_release(v11);
  }
  else
  {
    v17 = v20;
    sub_100008C04(v6, v20);
    if ( (*(unsigned int (__fastcall **)(char *, __int64, __int64))(v8 + 48))(v17, 1LL, v7) == 1 )
    {
      __break(1u);
    }
    else
    {
      (*(void (__fastcall **)(__int64, char *, __int64))(v8 + 32))(v19, v17, v7);
      sub_100008C6C(v6);
      objc_release(v23);
      swift_release(v11);
    }
  }
}