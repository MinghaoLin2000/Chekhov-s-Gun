_$s34AppleMediaServicesUIDynamicService14MetricsContextV11descriptionSSvg
ValueMetadata *__fastcall MetricsContext.description.getter(char a1, __int64 a2)
{
  __int64 v4; // x0
  __int64 v5; // x22
  unsigned __int64 v6; // x1
  unsigned __int64 v7; // x23
  __int64 v8; // x0
  unsigned __int64 v9; // x21
  __int64 v10; // x0
  __int64 v11; // x0
  unsigned __int64 v12; // x1
  unsigned __int64 v13; // x19
  __int64 v15; // [xsp+8h] [xbp-48h] BYREF
  ValueMetadata *v16; // [xsp+10h] [xbp-40h] BYREF
  unsigned __int64 v17; // [xsp+18h] [xbp-38h]

  v17 = 0xE000000000000000LL;
  sub_1000464B8(45LL);
  v16 = &type metadata for MetricsContext;
  v4 = sub_100003D44(&unk_10005DA48);
  v5 = sub_1000461A8(&v16, v4);
  v7 = v6;
  swift_bridgeObjectRelease(0xE000000000000000LL);
  v16 = (ValueMetadata *)v5;
  v17 = v7;
  sub_1000461C8(0xD000000000000016LL);
  if ( (a1 & 1) != 0 )
    v8 = 1702195828LL;
  else
    v8 = 0x65736C6166LL;
  if ( (a1 & 1) != 0 )
    v9 = 0xE400000000000000LL;
  else
    v9 = 0xE500000000000000LL;
  sub_1000461C8(v8);
  swift_bridgeObjectRelease(v9);
  sub_1000461C8(0x65766F202020200ALL);
  if ( a2 )
  {
    v15 = a2;
    swift_bridgeObjectRetain(a2);
    v10 = sub_100003D44(&unk_10005DA50);
    v11 = sub_1000461A8(&v15, v10);
    v13 = v12;
  }
  else
  {
    v13 = 0xE900000000000064LL;
    v11 = 0x656E696665646E75LL;
  }
  sub_1000461C8(v11);
  swift_bridgeObjectRelease(v13);
  sub_1000461C8(8194601LL);
  return v16;
}