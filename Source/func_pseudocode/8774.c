_$s34AppleMediaServicesUIDynamicService20DynamicAccountsStoreC7accountSo9ACAccountCSgvs
void __fastcall DynamicAccountsStore.account.setter(void *a1)
{
  __int64 v1; // x20
  __int64 v2; // x19
  __int64 v4; // x0
  void *v5; // x22
  __int64 v6; // x23
  __int64 v7; // x0
  __int64 v8; // x8
  __int64 v9; // x16
  __int64 v10; // x23
  __int64 v11; // x0
  id v12; // x0
  void *v13; // x27
  __int64 v14; // x25
  __int64 v15; // x1
  __int64 v16; // x26
  __int64 v17; // x0
  __int64 v18; // x27
  __int64 v19; // x0
  __int64 DynamicType; // x27
  __int64 v21; // x0
  __int64 v22; // x0
  __int64 v23; // x25
  __int64 v24; // x0
  __int64 v25; // x25
  id v26; // x25
  void *v27; // x20
  id v28; // x19
  _QWORD v29[3]; // [xsp+0h] [xbp-90h] BYREF
  void *MetatypeMetadata; // [xsp+18h] [xbp-78h]
  __int128 v31; // [xsp+20h] [xbp-70h] BYREF
  __int128 v32; // [xsp+30h] [xbp-60h]

  v2 = v1;
  sub_100045A28(0LL);
  v4 = __chkstk_darwin();
  sub_100006C58(v4);
  v5 = *(void **)(v1 + 16);
  objc_msgSend(v5, "lock");
  v6 = sub_100003D44(&unk_10005DE50);
  v7 = sub_100045A78(0LL);
  sub_100006C40(v7);
  v10 = swift_allocObject(
          v6,
          ((*(unsigned __int8 *)(v9 + 80) + 32LL) & ~(unsigned __int64)*(unsigned __int8 *)(v9 + 80))
        + 4LL * *(_QWORD *)(v8 + 72),
          *(unsigned __int8 *)(v9 + 80) | 7LL);
  *(_OWORD *)(v10 + 16) = xmmword_100047400;
  *((_QWORD *)&v32 + 1) = type metadata accessor for DynamicAccountsStore();
  *(_QWORD *)&v31 = v1;
  v11 = swift_retain(v1);
  v12 = objc_retainAutoreleasedReturnValue((id)AMSLogKey(v11));
  if ( v12 )
  {
    v13 = v12;
    v14 = sub_100046158();
    v16 = v15;
    objc_release(v13);
    v17 = sub_100045A18(4LL, 2LL);
    sub_100006C70(v17);
    v18 = *((_QWORD *)&v32 + 1);
    v19 = sub_10000487C(&v31, *((_QWORD *)&v32 + 1));
    DynamicType = swift_getDynamicType(v19, v18, 1LL);
    MetatypeMetadata = (void *)swift_getMetatypeMetadata();
    v29[0] = DynamicType;
    sub_1000459F8(v29);
    sub_100006BA0(v29);
    sub_100045A08(5972026LL, 0xE300000000000000LL);
    MetatypeMetadata = &type metadata for String;
    v29[0] = v14;
    v29[1] = v16;
    sub_1000459F8(v29);
    sub_100006BA0(v29);
    v21 = 93LL;
  }
  else
  {
    v22 = sub_100045A18(1LL, 1LL);
    sub_100006C70(v22);
    v23 = *((_QWORD *)&v32 + 1);
    v24 = sub_10000487C(&v31, *((_QWORD *)&v32 + 1));
    v25 = swift_getDynamicType(v24, v23, 1LL);
    MetatypeMetadata = (void *)swift_getMetatypeMetadata();
    v29[0] = v25;
    sub_1000459F8(v29);
    sub_100006BA0(v29);
    v21 = 58LL;
  }
  sub_100045A08(v21, 0xE100000000000000LL);
  sub_100045A38(v1);
  _s34AppleMediaServicesUIDynamicService9JSAccountVwxx_0(&v31);
  *((_QWORD *)&v32 + 1) = &type metadata for UnsafeMutableRawPointer;
  *(_QWORD *)&v31 = v1;
  sub_100045A48(&v31);
  sub_100006BA0(&v31);
  sub_1000459D8(0xD000000000000010LL, 0x8000000100049200LL);
  if ( a1 )
  {
    *((_QWORD *)&v32 + 1) = sub_100006C00(0LL);
    *(_QWORD *)&v31 = a1;
  }
  else
  {
    v31 = 0u;
    v32 = 0u;
  }
  type metadata accessor for Log(0LL);
  v26 = objc_retain(a1);
  sub_100045A48(&v31);
  sub_100006BA0(&v31);
  sub_100034B64(v10);
  swift_bridgeObjectRelease(v10);
  v27 = *(void **)(v1 + 24);
  *(_QWORD *)(v2 + 24) = a1;
  v28 = objc_retain(v26);
  objc_release(v27);
  objc_msgSend(v5, "unlock");
  objc_release(v28);
}