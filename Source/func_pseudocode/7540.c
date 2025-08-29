_$s16EyeCandyGraphics13CGSConnectionV3pids5Int32Vvg
__int64 CGSConnection.pid.getter()
{
  __int64 v0; // x0
  int PID; // w0
  int v2; // w20
  __int64 v3; // x0
  _DWORD *v4; // x1
  unsigned int v6; // [xsp+4h] [xbp-1Ch]

  v0 = sub_100012FD0();
  PID = CGSConnectionGetPID(v0);
  if ( !PID )
    return v6;
  v2 = PID;
  type metadata accessor for CGError(0LL);
  v3 = sub_100012E6C();
  sub_100012FE0(v3);
  *v4 = v2;
  return swift_willThrow();
}