_$s16EyeCandyGraphics13CGSConnectionV17defaultConnectionACvMZ
__int64 (__fastcall *__fastcall static CGSConnection.defaultConnection.modify(__int64 a1))()
{
  if ( qword_10002A388 != -1 )
    swift_once(&qword_10002A388, sub_1000123F8);
  swift_beginAccess(&static CGSConnection.defaultConnection, a1, 33LL, 0LL);
  return j__swift_endAccess;
}