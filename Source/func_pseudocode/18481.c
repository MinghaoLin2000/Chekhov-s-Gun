$s19ControlCenterHelper14ReferenceCountVwca
__int64 *__fastcall assignWithCopy for ReferenceCount(__int64 *a1, __int64 *a2)
{
  __int64 v4; // x0
  __int64 v5; // x21

  v4 = *a2;
  v5 = *a1;
  *a1 = *a2;
  swift_retain(v4);
  swift_release(v5);
  a1[1] = a2[1];
  return a1;
}