_$s16EyeCandyGraphics13CGSConnectionV17defaultConnectionACvgZ
__int64 static CGSConnection.defaultConnection.getter()
{
  _BYTE v1[24]; // [xsp+8h] [xbp-28h] BYREF

  if ( qword_10002A388 != -1 )
    swift_once(&qword_10002A388, sub_1000123F8);
  swift_beginAccess(&static CGSConnection.defaultConnection, v1, 0LL, 0LL);
  return (unsigned int)static CGSConnection.defaultConnection;
}