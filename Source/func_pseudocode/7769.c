_$s16EyeCandyGraphics15SystemEventMaskV10anyMouseUpACvau
int *SystemEventMask.anyMouseUp.unsafeMutableAddressor()
{
  if ( qword_10002A9B8 != -1 )
    swift_once(&qword_10002A9B8, sub_100016704);
  return &static SystemEventMask.anyMouseUp;
}