_$s16EyeCandyGraphics9CGDisplayV3mapySayxGxACXElFZ
__int64 __fastcall static CGDisplay.map<A>(_:)(void (__fastcall *a1)(__int64), __int64 a2, __int64 a3)
{
  __int64 v5; // x23
  __int64 v6; // x24
  __int64 WitnessTable; // x0
  __int64 v8; // x0
  __int64 v9; // x0
  __int64 v10; // x0
  _QWORD v12[6]; // [xsp+0h] [xbp-60h] BYREF

  v12[2] = a3;
  v12[3] = a1;
  v12[4] = a2;
  v5 = static CGDisplay._flatMap<A>(transform:)((__int64)sub_100019064, (__int64)v12, a3);
  v12[5] = v5;
  v6 = sub_10001CBF0(0LL, a3);
  WitnessTable = swift_getWitnessTable(&protocol conformance descriptor for [A], v6);
  if ( (sub_10001CC80(v6, WitnessTable) & 1) != 0 )
  {
    swift_bridgeObjectRelease(v5);
    v8 = sub_100019070(a3, a3);
    v9 = swift_allocObject(
           v8,
           ((*(unsigned __int8 *)(*(_QWORD *)(a3 - 8) + 80LL) + (unsigned __int64)*(unsigned int *)(v8 + 48)) & ~(unsigned __int64)*(unsigned __int8 *)(*(_QWORD *)(a3 - 8) + 80LL))
         + *(_QWORD *)(*(_QWORD *)(a3 - 8) + 72LL),
           *(unsigned __int8 *)(*(_QWORD *)(a3 - 8) + 80LL) | (unsigned __int64)*(unsigned __int16 *)(v8 + 52));
    v5 = sub_10001CBA0(v9, 1LL);
    v10 = CGSMainDisplayID();
    a1(v10);
  }
  return v5;
}