$s34AppleMediaServicesUIDynamicService15JSSourcePackageVwta
__int64 __fastcall assignWithTake for JSSourcePackage(__int64 a1, __int64 a2)
{
  __int128 v4; // q1
  __int64 v5; // x9
  __int64 v6; // x0

  _s34AppleMediaServicesUIDynamicService9JSAccountVwxx_0((_QWORD *)a1);
  v4 = *(_OWORD *)(a2 + 16);
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = v4;
  v5 = *(_QWORD *)(a2 + 40);
  v6 = *(_QWORD *)(a1 + 40);
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 40) = v5;
  swift_bridgeObjectRelease(v6);
  return a1;
}