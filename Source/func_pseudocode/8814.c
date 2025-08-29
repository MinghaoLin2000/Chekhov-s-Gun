$s34AppleMediaServicesUIDynamicService9JSAccountVwcp
__int64 __fastcall initializeWithCopy for JSAccount(__int64 a1, __int64 a2)
{
  __int128 v3; // q0

  v3 = *(_OWORD *)(a2 + 24);
  *(_OWORD *)(a1 + 24) = v3;
  (**(void (***)(void))(v3 - 8))();
  return a1;
}