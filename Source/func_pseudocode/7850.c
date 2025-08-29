_$s16EyeCandyGraphics9CGSWindowV5titleSSSgvM
__int64 (__fastcall *__fastcall CGSWindow.title.modify(_QWORD *a1, int a2))()
{
  char *v4; // x21
  EyeCandyGraphics::CGSConnection *v5; // x22

  v4 = (char *)malloc(0x2CuLL);
  *a1 = v4;
  *((_DWORD *)v4 + 10) = a2;
  v5 = (EyeCandyGraphics::CGSConnection *)CGSConnection.defaultConnection.unsafeMutableAddressor();
  sub_10001B1D4(v5, v4);
  *(Swift::String_optional *)(v4 + 24) = CGSWindow.getTitle(connection:)((EyeCandyGraphics::CGSConnection)v5->cid);
  return sub_10001A3CC;
}