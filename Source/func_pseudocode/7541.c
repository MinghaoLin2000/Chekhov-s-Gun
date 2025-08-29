_$s16EyeCandyGraphics13CGSConnectionV12versionedPid0aB4Core09VersionedF0Vvg
unsigned __int64 __fastcall CGSConnection.versionedPid.getter(__int64 a1)
{
  int PIDAndVersion; // w0
  int v2; // w20
  __int64 v3; // x0
  _DWORD *v4; // x1
  __int64 v6; // [xsp+0h] [xbp-20h] BYREF

  v6 = 0LL;
  PIDAndVersion = SLSConnectionGetPIDAndVersion(a1, (char *)&v6 + 4, &v6);
  if ( !PIDAndVersion )
    return HIDWORD(v6) | ((unsigned __int64)(unsigned int)v6 << 32);
  v2 = PIDAndVersion;
  type metadata accessor for CGError(0LL);
  v3 = sub_100012E6C();
  sub_100012FE0(v3);
  *v4 = v2;
  return swift_willThrow();
}