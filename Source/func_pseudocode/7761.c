_$s16EyeCandyGraphics15SystemEventMaskV7gestureACvau
int *SystemEventMask.gesture.unsafeMutableAddressor()
{
  if ( qword_10002A998 != -1 )
    swift_once(&qword_10002A998, sub_1000163C4);
  return &static SystemEventMask.gesture;
}