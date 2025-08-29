_$s16EyeCandyGraphics15SystemEventMaskV7keyDownACvau
int *SystemEventMask.keyDown.unsafeMutableAddressor()
{
  if ( qword_10002A948 != -1 )
    swift_once(&qword_10002A948, sub_100015AC4);
  return &static SystemEventMask.keyDown;
}