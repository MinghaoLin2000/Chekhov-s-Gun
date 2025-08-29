_$s16EyeCandyGraphics9CGDisplayV4uuidACSg0aB4Core4GUIDV_tcfC
unsigned __int64 __fastcall CGDisplay.init(uuid:)(CFUUIDBytes bytes)
{
  const __CFUUID *v1; // x0
  __int64 v2; // x0

  v1 = CFUUIDCreateFromUUIDBytes(0LL, bytes);
  if ( !v1 )
    __break(1u);
  *(EyeCandyGraphics::CGDisplay_optional *)&v2 = CGDisplay.init(uuid:)(v1);
  return (unsigned int)v2 | ((unsigned __int64)(BYTE4(v2) & 1) << 32);
}