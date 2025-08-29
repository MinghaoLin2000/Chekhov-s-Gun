_$s16EyeCandyGraphics9CGSWindowV10resolution04CoreC07CGFloatVSgvM
__int64 (__fastcall *__fastcall CGSWindow.resolution.modify(_QWORD *a1, __int64 a2))()
{
  _DWORD *v4; // x21
  int *v5; // x22
  char v6; // w1

  v4 = malloc(0x60uLL);
  *a1 = v4;
  v4[21] = a2;
  v5 = CGSConnection.defaultConnection.unsafeMutableAddressor();
  *((_QWORD *)v4 + 11) = v5;
  sub_10001B1D4(v5, v4);
  *((_QWORD *)v4 + 9) = CGSWindow.getResolution(connection:)((unsigned int)*v5, a2);
  *((_BYTE *)v4 + 80) = v6 & 1;
  return sub_10001A5DC;
}