$s34AppleMediaServicesUIDynamicService15JSSourcePackageVwcp
__int64 __fastcall initializeWithCopy for JSSourcePackage(__int64 a1, __int64 a2)
{
  __int128 v4; // q0
  __int64 v5; // x0

  v4 = *(_OWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 24) = v4;
  (**(void (***)(void))(v4 - 8))();
  v5 = *(_QWORD *)(a2 + 40);
  *(_QWORD *)(a1 + 40) = v5;
  swift_bridgeObjectRetain(v5);
  return a1;
}