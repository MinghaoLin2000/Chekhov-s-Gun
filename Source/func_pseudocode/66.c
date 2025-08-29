_$s9SPIHelper11shareStatus3urlSb8isShared_Sb8amIOwnerSb8hasErrort10Foundation3URLV_tF
__int64 shareStatus(url:)()
{
  __int64 v0; // x0
  __int64 v1; // x0
  __int64 v2; // x19
  __int64 v3; // x22
  __int64 v4; // x8
  char *v5; // x26
  __int64 v6; // x0
  __int64 inited; // x21
  NSString *v8; // x0
  NSString *v9; // x0
  __int64 v10; // x27
  __int64 v11; // x0
  __int64 v12; // x25
  __int64 v13; // x0
  __int64 v14; // x21
  NSString *v15; // x0
  NSString *v16; // x19
  __int64 v17; // x27
  unsigned int v18; // w23
  __int64 v19; // x22
  __int64 v20; // x1
  __int64 v21; // x20
  __int64 v22; // x1
  __int64 v23; // x2
  __int64 v24; // x21
  int v25; // w24
  _QWORD v27[5]; // [xsp+0h] [xbp-C0h] BYREF
  _BYTE v28[48]; // [xsp+40h] [xbp-80h] BYREF

  v0 = sub_1000A44B0(0LL);
  v27[4] = *(_QWORD *)(v0 - 8);
  __chkstk_darwin(v0);
  v1 = sub_1000A4640(0LL);
  v27[2] = *(_QWORD *)(v1 - 8);
  v27[3] = v1;
  __chkstk_darwin(v1);
  v2 = sub_1000A4350(0LL);
  v3 = *(_QWORD *)(v2 - 8);
  __chkstk_darwin(v2);
  v5 = (char *)v27 - ((v4 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  v6 = sub_1000081BC(&unk_1000CAF60);
  inited = swift_initStackObject(v6, v28);
  *(_OWORD *)(inited + 16) = xmmword_1000A6C70;
  *(_QWORD *)(inited + 32) = NSURLUbiquitousItemIsSharedKey;
  *(_QWORD *)(inited + 40) = NSURLUbiquitousSharedItemCurrentUserRoleKey;
  v8 = objc_retain(NSURLUbiquitousItemIsSharedKey);
  v9 = objc_retain(NSURLUbiquitousSharedItemCurrentUserRoleKey);
  v10 = sub_10004DB00(inited);
  swift_setDeallocating(inited);
  v11 = type metadata accessor for URLResourceKey(0LL);
  swift_arrayDestroy(inited + 32, 2LL, v11);
  URL.evictionSafeResourceValues(forKeys:)(v10, (__int64)v5);
  v12 = v2;
  v13 = swift_bridgeObjectRelease(v10);
  v14 = (unsigned __int8)sub_1000A4320(v13);
  v15 = (NSString *)sub_1000A4330();
  if ( !v15 )
    v15 = objc_retain(NSURLUbiquitousSharedItemRoleParticipant);
  v16 = v15;
  v17 = v3;
  v18 = v14 & 1;
  v19 = ((__int64 (*)(void))sub_1000A49E0)();
  v21 = v20;
  v23 = sub_1000A49E0(NSURLUbiquitousSharedItemRoleOwner);
  v24 = v22;
  v25 = 256;
  if ( v19 != v23 || v21 != v22 )
  {
    if ( (sub_1000A4F60(v19, v21, v23, v22, 0LL) & 1) != 0 )
      v25 = 256;
    else
      v25 = 0;
  }
  swift_bridgeObjectRelease(v21);
  swift_bridgeObjectRelease(v24);
  (*(void (__fastcall **)(char *, __int64))(v17 + 8))(v5, v12);
  objc_release(v16);
  return v25 | v18;
}