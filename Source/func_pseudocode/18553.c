$s17ControlCenterCore25MockSampleBufferPublisherVwtk
__n128 __fastcall initializeWithTake for MockSampleBufferPublisher(_OWORD *a1, __int64 a2)
{
  __n128 result; // q0
  __int128 v3; // q1

  result = *(__n128 *)a2;
  v3 = *(_OWORD *)(a2 + 16);
  *a1 = *(_OWORD *)a2;
  a1[1] = v3;
  return result;
}