_$ss9OptionSetP13EyeCandySwiftE10intersectsySbxF
bool __fastcall OptionSet.intersects(_:)(__int64 a1, __int64 a2, __int64 a3)
{
  __int64 v3; // x20
  __int64 v7; // x25
  __int64 v8; // x0
  __int64 v9; // x8
  char *v10; // x21
  __int64 v11; // x12
  char *v12; // x22
  __int64 v13; // x23
  __int64 v14; // x24
  __int64 AssociatedTypeWitness; // x0
  __int64 v16; // x0
  char v17; // w20
  void (__fastcall *v18)(char *, __int64); // t1
  __int64 v20; // [xsp+0h] [xbp-40h] BYREF

  v7 = *(_QWORD *)(a2 - 8);
  v8 = __chkstk_darwin(a1);
  v10 = (char *)&v20 - ((v9 + 15) & 0xFFFFFFFFFFFFFFF0LL);
  __chkstk_darwin(v8);
  v12 = (char *)&v20 - v11;
  (*(void (__fastcall **)(char *, __int64, __int64))(v7 + 16))(v10, v3, a2);
  v13 = *(_QWORD *)(a3 + 16);
  sub_10001CE40(a1, a2, v13);
  v14 = *(_QWORD *)(v13 + 16);
  AssociatedTypeWitness = swift_getAssociatedTypeWitness(
                            0LL,
                            v14,
                            a2,
                            &protocol requirements base descriptor for ExpressibleByArrayLiteral,
                            &associated type descriptor for ExpressibleByArrayLiteral.ArrayLiteralElement);
  v16 = sub_10001CBC0(0LL, AssociatedTypeWitness);
  sub_10001D0B0(v16, a2, v14);
  v17 = sub_10001CAB0(v12, v10, a2, *(_QWORD *)(v13 + 8));
  v18 = *(void (__fastcall **)(char *, __int64))(v7 + 8);
  v18(v10, a2);
  v18(v12, a2);
  return (v17 & 1) == 0;
}