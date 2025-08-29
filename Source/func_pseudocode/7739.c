_$s16EyeCandyGraphics15SystemEventMaskV12cursorUpdateACvau
int *SystemEventMask.cursorUpdate.unsafeMutableAddressor()
{
  if ( qword_10002A650 != -1 )
    swift_once(&qword_10002A650, sub_100015E44);
  return &static SystemEventMask.cursorUpdate;
}