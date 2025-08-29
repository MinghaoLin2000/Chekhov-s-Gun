_$s16EyeCandyGraphics15SystemEventMaskV16leftMouseDraggedACvau
int *SystemEventMask.leftMouseDragged.unsafeMutableAddressor()
{
  if ( qword_10002A938 != -1 )
    swift_once(&qword_10002A938, sub_1000158C4);
  return &static SystemEventMask.leftMouseDragged;
}