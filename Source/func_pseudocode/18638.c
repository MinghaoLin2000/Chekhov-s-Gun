$s17ControlCenterCore16HoverCoordinatorC5EntryVwtk
__n128 __fastcall initializeWithTake for HoverCoordinator.Entry(__int64 a1, __int64 a2)
{
  __n128 result; // q0
  __int128 v3; // q1
  __int128 v4; // q2

  result = *(__n128 *)a2;
  v3 = *(_OWORD *)(a2 + 16);
  v4 = *(_OWORD *)(a2 + 32);
  *(_QWORD *)(a1 + 48) = *(_QWORD *)(a2 + 48);
  *(_OWORD *)(a1 + 16) = v3;
  *(_OWORD *)(a1 + 32) = v4;
  *(__n128 *)a1 = result;
  return result;
}