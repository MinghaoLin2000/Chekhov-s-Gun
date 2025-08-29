_$s16EyeCandyGraphics15SystemEventMaskV15anyMouseDraggedACvau
int *SystemEventMask.anyMouseDragged.unsafeMutableAddressor()
{
  if ( qword_10002A9C0 != -1 )
    swift_once(&qword_10002A9C0, sub_100016870);
  return &static SystemEventMask.anyMouseDragged;
}