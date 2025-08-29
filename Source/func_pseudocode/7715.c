_$s16EyeCandyGraphics15SystemEventMaskV10mouseMovedACvau
int *SystemEventMask.mouseMoved.unsafeMutableAddressor()
{
  if ( qword_10002A930 != -1 )
    swift_once(&qword_10002A930, sub_100015844);
  return &static SystemEventMask.mouseMoved;
}