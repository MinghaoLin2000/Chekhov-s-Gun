_$s16EyeCandyGraphics15SystemEventMaskV11leftMouseUpACvau
int *SystemEventMask.leftMouseUp.unsafeMutableAddressor()
{
  if ( qword_10002A918 != -1 )
    swift_once(&qword_10002A918, sub_1000156C4);
  return &static SystemEventMask.leftMouseUp;
}