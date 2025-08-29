_$s16EyeCandyGraphics15SystemEventMaskV12mouseEnteredACvau
int *SystemEventMask.mouseEntered.unsafeMutableAddressor()
{
  if ( qword_10002A620 != -1 )
    swift_once(&qword_10002A620, sub_1000159C4);
  return &static SystemEventMask.mouseEntered;
}