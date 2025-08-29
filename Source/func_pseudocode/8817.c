$s34AppleMediaServicesUIDynamicService9JSAccountVwta
__int64 __fastcall assignWithTake for JSAccount(__int64 a1, __int64 a2)
{
  __int128 v4; // q1

  _s34AppleMediaServicesUIDynamicService9JSAccountVwxx_0((_QWORD *)a1);
  v4 = *(_OWORD *)(a2 + 16);
  *(_OWORD *)a1 = *(_OWORD *)a2;
  *(_OWORD *)(a1 + 16) = v4;
  *(_QWORD *)(a1 + 32) = *(_QWORD *)(a2 + 32);
  return a1;
}