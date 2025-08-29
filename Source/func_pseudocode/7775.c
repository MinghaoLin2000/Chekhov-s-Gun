_$s16EyeCandyGraphics15SystemEventMaskV13mouseMovementACvau
int *SystemEventMask.mouseMovement.unsafeMutableAddressor()
{
  if ( qword_10002A9D0 != -1 )
    swift_once(&qword_10002A9D0, sub_100016B00);
  return &static SystemEventMask.mouseMovement;
}