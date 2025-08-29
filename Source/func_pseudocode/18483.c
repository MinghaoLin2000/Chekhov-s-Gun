$s19ControlCenterHelper14ReferenceCountVwta
__int64 *__fastcall assignWithTake for ReferenceCount(__int64 *a1, __int64 *a2)
{
  __int64 v4; // x0

  v4 = *a1;
  *a1 = *a2;
  swift_release(v4);
  a1[1] = a2[1];
  return a1;
}