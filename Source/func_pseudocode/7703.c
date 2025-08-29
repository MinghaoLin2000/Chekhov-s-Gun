_$sSo11CGRegionRefa16EyeCandyGraphicsE12makeIterators03AnyG0VySo6CGRectVGyF
__int64 CGRegionRef.makeIterator()()
{
  __int64 v0; // x20
  __int64 v1; // x0
  __int64 v2; // x19
  __int64 v3; // x0
  __int64 result; // x0

  v1 = _s16CGRegionIteratorCMa();
  v2 = swift_allocObject(v1, 24LL, 7LL);
  *(_QWORD *)(v2 + 16) = CGRegionEnumeratorCreate(v0);
  v3 = sub_100002BF4(&unk_100029CD8);
  result = swift_allocObject(v3, 32LL, 7LL);
  *(_QWORD *)(result + 16) = sub_100015164;
  *(_QWORD *)(result + 24) = v2;
  return result;
}