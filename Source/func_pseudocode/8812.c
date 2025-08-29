$s34AppleMediaServicesUIDynamicService9JSAccountVwCP
__int64 __fastcall initializeBufferWithCopyOfBuffer for JSAccount(__int64 *a1, __int64 *a2)
{
  __int64 v2; // x8
  __int64 v3; // x19

  v2 = *a2;
  *a1 = *a2;
  v3 = v2 + 16;
  swift_retain(v2);
  return v3;
}