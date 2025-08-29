_$s16EyeCandyGraphics9CGDisplayV11allDisplaysSayACGvgZ
__int64 static CGDisplay.allDisplays.getter()
{
  __int64 v0; // x0
  __int64 v1; // x19
  __int64 v2; // x0

  v0 = sub_10001834C(sub_100018FE4, 0LL);
  v1 = v0;
  if ( !*(_QWORD *)(v0 + 16) )
  {
    swift_bridgeObjectRelease(v0);
    v2 = sub_100002BF4(&unk_100029DF0);
    v1 = swift_allocObject(v2, 36LL, 7LL);
    *(_OWORD *)(v1 + 16) = xmmword_10001FC20;
    *(_DWORD *)(v1 + 32) = CGSMainDisplayID();
  }
  return v1;
}