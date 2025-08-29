_$s13EyeCandySwift26OptionSetStringConvertiblePAAE11descriptionSSvg
__int64 __fastcall OptionSetStringConvertible.description.getter(__int64 a1, __int64 a2)
{
  __int64 v2; // x20
  __int64 v3; // x19
  __int64 v6; // x0
  __int64 AssociatedTypeWitness; // x0
  __int64 TupleTypeMetadata2; // x0
  __int64 v9; // x19
  __int64 WitnessTable; // x0
  __int64 v11; // x19
  __int64 v12; // x21
  __int64 v13; // x0
  __int64 v14; // x21
  __int64 v15; // x1
  __int64 v16; // x22
  unsigned __int64 v17; // x19
  _QWORD v19[5]; // [xsp+0h] [xbp-60h] BYREF
  __int64 v20; // [xsp+28h] [xbp-38h]
  unsigned __int64 v21; // [xsp+30h] [xbp-30h]

  v3 = v2;
  v6 = (*(__int64 (**)(void))(a2 + 24))();
  v19[4] = v3;
  v20 = v6;
  v19[2] = a1;
  v19[3] = a2;
  AssociatedTypeWitness = swift_getAssociatedTypeWitness(
                            255LL,
                            *(_QWORD *)(*(_QWORD *)(a2 + 16) + 16LL),
                            a1,
                            &protocol requirements base descriptor for SetAlgebra,
                            &associated type descriptor for SetAlgebra.Element);
  TupleTypeMetadata2 = swift_getTupleTypeMetadata2(
                         255LL,
                         AssociatedTypeWitness,
                         &type metadata for StaticString,
                         0LL,
                         0LL);
  v9 = sub_10001CBF0(0LL, TupleTypeMetadata2);
  WitnessTable = swift_getWitnessTable(&protocol conformance descriptor for [A], v9);
  v11 = sub_10001CB20(sub_10001C644, v19, v9, &type metadata for String, WitnessTable);
  swift_bridgeObjectRelease(v20);
  v20 = v11;
  v12 = sub_100002BF4(&unk_100029E40);
  v13 = sub_10001BF80();
  v14 = sub_10001CAA0(8236LL, 0xE200000000000000LL, v12, v13);
  v16 = v15;
  swift_bridgeObjectRelease(v11);
  v20 = 91LL;
  v21 = 0xE100000000000000LL;
  sub_10001CB00(v14, v16);
  swift_bridgeObjectRelease(v16);
  v17 = v21;
  swift_bridgeObjectRetain(v21);
  sub_10001CB00(93LL, 0xE100000000000000LL);
  swift_bridgeObjectRelease(v17);
  return v20;
}