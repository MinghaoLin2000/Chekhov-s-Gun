_$s34AppleMediaServicesUIDynamicService20DynamicAccountsStoreC7accountSo9ACAccountCSgvg
void *DynamicAccountsStore.account.getter()
{
  __int64 v0; // x20
  __int64 v1; // x19
  __int64 v2; // x0
  void *v3; // x21
  __int64 v4; // x22
  __int64 v5; // x0
  __int64 v6; // x8
  __int64 v7; // x16
  __int64 v8; // x22
  __int64 v9; // x0
  id v10; // x0
  void *v11; // x26
  __int64 v12; // x24
  __int64 v13; // x1
  __int64 v14; // x25
  __int64 v15; // x0
  __int64 v16; // x26
  __int64 v17; // x0
  __int64 DynamicType; // x26
  __int64 v19; // x0
  __int64 v20; // x0
  __int64 v21; // x24
  __int64 v22; // x0
  __int64 v23; // x24
  void *v24; // x20
  id v25; // x0
  void *v26; // x19
  id v27; // x0
  _QWORD v29[3]; // [xsp+0h] [xbp-90h] BYREF
  void *MetatypeMetadata; // [xsp+18h] [xbp-78h]
  __int128 v31; // [xsp+20h] [xbp-70h] BYREF
  __int128 v32; // [xsp+30h] [xbp-60h]

  v1 = v0;
  sub_100045A28(0LL);
  v2 = __chkstk_darwin();
  sub_100006C58(v2);
  v3 = *(void **)(v0 + 16);
  objc_msgSend(v3, "lock");
  v4 = sub_100003D44(&unk_10005DE50);
  v5 = sub_100045A78(0LL);
  sub_100006C40(v5);
  v8 = swift_allocObject(
         v4,
         ((*(unsigned __int8 *)(v7 + 80) + 32LL) & ~(unsigned __int64)*(unsigned __int8 *)(v7 + 80))
       + 4LL * *(_QWORD *)(v6 + 72),
         *(unsigned __int8 *)(v7 + 80) | 7LL);
  *(_OWORD *)(v8 + 16) = xmmword_100047400;
  *((_QWORD *)&v32 + 1) = type metadata accessor for DynamicAccountsStore();
  *(_QWORD *)&v31 = v0;
  v9 = swift_retain(v0);
  v10 = objc_retainAutoreleasedReturnValue((id)AMSLogKey(v9));
  if ( v10 )
  {
    v11 = v10;
    v12 = sub_100046158();
    v14 = v13;
    objc_release(v11);
    v15 = sub_100045A18(4LL, 2LL);
    sub_100006C70(v15);
    v16 = *((_QWORD *)&v32 + 1);
    v17 = sub_10000487C(&v31, *((_QWORD *)&v32 + 1));
    DynamicType = swift_getDynamicType(v17, v16, 1LL);
    MetatypeMetadata = (void *)swift_getMetatypeMetadata();
    v29[0] = DynamicType;
    sub_1000459F8(v29);
    sub_100006BA0(v29);
    sub_100045A08(5972026LL, 0xE300000000000000LL);
    MetatypeMetadata = &type metadata for String;
    v29[0] = v12;
    v29[1] = v14;
    sub_1000459F8(v29);
    sub_100006BA0(v29);
    v19 = 93LL;
  }
  else
  {
    v20 = sub_100045A18(1LL, 1LL);
    sub_100006C70(v20);
    v21 = *((_QWORD *)&v32 + 1);
    v22 = sub_10000487C(&v31, *((_QWORD *)&v32 + 1));
    v23 = swift_getDynamicType(v22, v21, 1LL);
    MetatypeMetadata = (void *)swift_getMetatypeMetadata();
    v29[0] = v23;
    sub_1000459F8(v29);
    sub_100006BA0(v29);
    v19 = 58LL;
  }
  sub_100045A08(v19, 0xE100000000000000LL);
  sub_100045A38(v0);
  _s34AppleMediaServicesUIDynamicService9JSAccountVwxx_0(&v31);
  *((_QWORD *)&v32 + 1) = &type metadata for UnsafeMutableRawPointer;
  *(_QWORD *)&v31 = v0;
  sub_100045A48(&v31);
  sub_100006BA0(&v31);
  sub_1000459D8(0xD000000000000011LL, 0x80000001000491E0LL);
  v24 = *(void **)(v0 + 24);
  if ( v24 )
  {
    *((_QWORD *)&v32 + 1) = sub_100006C00(0LL);
    *(_QWORD *)&v31 = v24;
  }
  else
  {
    v31 = 0u;
    v32 = 0u;
  }
  type metadata accessor for Log(0LL);
  v25 = objc_retain(v24);
  sub_100045A48(&v31);
  sub_100006BA0(&v31);
  sub_100034B64(v8);
  swift_bridgeObjectRelease(v8);
  v26 = *(void **)(v1 + 24);
  v27 = objc_retain(v26);
  objc_msgSend(v3, "unlock");
  return v26;
}