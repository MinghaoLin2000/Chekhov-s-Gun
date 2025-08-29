_$s16EyeCandyGraphics9CGSWindowV5levels5Int32VSgvM
__int64 (__fastcall *__fastcall CGSWindow.level.modify(_QWORD *a1, int a2))()
{
  _DWORD *v4; // x21
  EyeCandyGraphics::CGSConnection *v5; // x22
  __int64 v6; // x0

  v4 = malloc(0x60uLL);
  *a1 = v4;
  v4[22] = a2;
  v5 = (EyeCandyGraphics::CGSConnection *)CGSConnection.defaultConnection.unsafeMutableAddressor();
  *((_QWORD *)v4 + 9) = v5;
  sub_10001B1D4();
  *(Swift::Int32_optional *)&v6 = CGSWindow.getLevel(connection:)((EyeCandyGraphics::CGSConnection)v5->cid);
  v4[20] = v6;
  *((_BYTE *)v4 + 84) = BYTE4(v6) & 1;
  return sub_10001A024;
}