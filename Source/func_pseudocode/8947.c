$s34AppleMediaServicesUIDynamicService15JSSourcePackageVwca
__int64 __fastcall assignWithCopy for JSSourcePackage(__int64 a1, __int64 a2)
{
  __int64 v4; // x0
  __int64 v5; // x19

  sub_10000EE60();
  v4 = *(_QWORD *)(a2 + 40);
  v5 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 40) = v4;
  swift_bridgeObjectRetain(v4);
  swift_bridgeObjectRelease(v5);
  return a1;
}