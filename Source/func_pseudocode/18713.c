$s17ControlCenterCore8VibrancyOwca
__int64 *__fastcall assignWithCopy for Vibrancy(__int64 *a1, _QWORD *a2)
{
  __int64 v3; // x20
  __int64 v4; // x0

  v3 = *a2;
  sub_10004BF00(*a2);
  v4 = *a1;
  *a1 = v3;
  sub_10004C284(v4);
  return a1;
}