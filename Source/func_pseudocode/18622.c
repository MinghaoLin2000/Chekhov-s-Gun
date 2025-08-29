$s17ControlCenterCore19NavigationAnchorKeyV5EntryVwtk
__n128 __fastcall initializeWithTake for NavigationAnchorKey.Entry(__int64 a1, __int64 a2)
{
  __n128 result; // q0

  result = *(__n128 *)a2;
  *(_OWORD *)(a1 + 9) = *(_OWORD *)(a2 + 9);
  *(__n128 *)a1 = result;
  return result;
}