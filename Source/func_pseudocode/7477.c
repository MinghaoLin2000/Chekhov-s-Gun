_$s16EyeCandyGraphics8CGSSpaceV10connection7options4type4name6ownersAcA13CGSConnectionV_So0D7OptionsVSo24CGSPackagesWorkspaceTypeVSSSgSays5Int32VGtcfC
__int64 __fastcall CGSSpace.init(connection:options:type:name:owners:)(__int64 a1, __int64 a2)
{
  __int64 v2; // x0
  __int64 v3; // x6
  __int64 v4; // x5
  __int64 v5; // x22
  __int64 v6; // x4
  __int64 v7; // x24
  __int64 v8; // x3
  __int64 v9; // x25
  __int64 v10; // x1
  __int64 v11; // x19
  __int64 v12; // x21
  __int64 v13; // x2
  id v14; // x23
  __int64 isUniquelyReferenced_nonNull_native; // x0
  __int64 v16; // x25
  __int64 v17; // x0
  __int64 v18; // x24
  __int64 i; // x19
  id v20; // x25
  unsigned __int64 v21; // x8
  unsigned __int64 v22; // x21
  __int64 v23; // x0
  __int64 v24; // x22
  __int64 v25; // x0
  __int64 v26; // x20
  __int64 v27; // x0
  unsigned int v29; // [xsp+0h] [xbp+0h]
  unsigned int v30; // [xsp+4h] [xbp+4h]
  __int64 v31; // [xsp+68h] [xbp+68h]

  v2 = sub_1000120C4(a1, a2);
  v31 = v3;
  v5 = v4;
  v7 = v6;
  v9 = v8;
  v11 = v10;
  v12 = v2;
  v14 = objc_msgSend(objc_allocWithZone((Class)&OBJC_CLASS___NSNumber), "initWithInt:", v13);
  isUniquelyReferenced_nonNull_native = swift_isUniquelyReferenced_nonNull_native(&_swiftEmptyDictionarySingleton);
  sub_100011970(v14, 1701869940LL, 0xE400000000000000LL, isUniquelyReferenced_nonNull_native);
  swift_bridgeObjectRelease(0x8000000000000000LL);
  if ( v7 )
  {
    v16 = sub_10001CAC0(v9, v7);
    swift_bridgeObjectRelease(v7);
    v17 = swift_isUniquelyReferenced_nonNull_native(&_swiftEmptyDictionarySingleton);
    sub_100011970(v16, 1684632949LL, 0xE400000000000000LL, v17);
    swift_bridgeObjectRelease(0x8000000000000000LL);
  }
  v18 = *(_QWORD *)(v5 + 16);
  if ( v18 )
  {
    v29 = v12;
    v30 = v11;
    sub_10000A5B4(0LL, v18, 0LL);
    for ( i = 0LL; i != v18; ++i )
    {
      v20 = objc_msgSend(
              objc_allocWithZone((Class)&OBJC_CLASS___NSNumber),
              "initWithInt:",
              *(unsigned int *)(v5 + 4 * i + 32));
      v22 = _swiftEmptyArrayStorage[2];
      v21 = _swiftEmptyArrayStorage[3];
      if ( v22 >= v21 >> 1 )
        sub_10000A5B4(v21 > 1, v22 + 1, 1LL);
      _swiftEmptyArrayStorage[2] = v22 + 1;
      _swiftEmptyArrayStorage[v22 + 4] = v20;
    }
    swift_bridgeObjectRelease(v5);
    v23 = sub_100011930(0LL);
    v24 = sub_10001CB60(_swiftEmptyArrayStorage, v23);
    swift_release(_swiftEmptyArrayStorage);
    v25 = swift_isUniquelyReferenced_nonNull_native(&_swiftEmptyDictionarySingleton);
    sub_100011970(v24, 6580592LL, 0xE300000000000000LL, v25);
    swift_bridgeObjectRelease(0x8000000000000000LL);
    v12 = v29;
    v11 = v30;
  }
  else
  {
    swift_bridgeObjectRelease(v5);
  }
  v26 = sub_10001CA60(
          &_swiftEmptyDictionarySingleton,
          &type metadata for String,
          (char *)&type metadata for Swift.AnyObject + 8,
          &protocol witness table for String);
  swift_bridgeObjectRelease(&_swiftEmptyDictionarySingleton);
  v27 = CGSSpaceCreate(v12, v11, v26);
  sub_100012134(v27);
  return sub_1000120A8(v11, v31);
}