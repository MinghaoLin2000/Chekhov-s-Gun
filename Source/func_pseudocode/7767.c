_$s16EyeCandyGraphics15SystemEventMaskV12anyMouseDownACvau
int *SystemEventMask.anyMouseDown.unsafeMutableAddressor()
{
  if ( qword_10002A9B0 != -1 )
    swift_once(&qword_10002A9B0, sub_100016544);
  return &static SystemEventMask.anyMouseDown;
}