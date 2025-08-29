_$s16EyeCandyGraphics15SystemEventMaskV5keyUpACvau
int *SystemEventMask.keyUp.unsafeMutableAddressor()
{
  if ( qword_10002A950 != -1 )
    swift_once(&qword_10002A950, sub_100015B44);
  return &static SystemEventMask.keyUp;
}