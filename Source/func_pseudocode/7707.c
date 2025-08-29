_$s16EyeCandyGraphics15SystemEventMaskV13leftMouseDownACvau
int *SystemEventMask.leftMouseDown.unsafeMutableAddressor()
{
  if ( qword_10002A910 != -1 )
    swift_once(&qword_10002A910, sub_100015630);
  return &static SystemEventMask.leftMouseDown;
}