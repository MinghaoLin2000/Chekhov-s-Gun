_$s16EyeCandyGraphics13CGSConnectionV17defaultConnectionACvsZ
__int64 __fastcall static CGSConnection.defaultConnection.setter(int a1)
{
  __int64 result; // x0
  _BYTE v3[24]; // [xsp+8h] [xbp-28h] BYREF

  if ( qword_10002A388 != -1 )
    swift_once(&qword_10002A388, sub_1000123F8);
  result = swift_beginAccess(&static CGSConnection.defaultConnection, v3, 1LL, 0LL);
  static CGSConnection.defaultConnection = a1;
  return result;
}