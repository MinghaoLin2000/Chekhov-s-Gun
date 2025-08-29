$s19ControlCenterHelper14ReferenceCountVwCP
__int64 *__fastcall initializeBufferWithCopyOfBuffer for ReferenceCount(__int64 *a1, __int64 *a2)
{
  __int64 v3; // x0
  __int64 v4; // x8

  v3 = *a2;
  v4 = a2[1];
  *a1 = *a2;
  a1[1] = v4;
  swift_retain(v3);
  return a1;
}