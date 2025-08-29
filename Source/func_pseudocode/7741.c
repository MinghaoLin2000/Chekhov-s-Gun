_$s16EyeCandyGraphics15SystemEventMaskV7suspendACvau
int *SystemEventMask.suspend.unsafeMutableAddressor()
{
  if ( qword_10002A658 != -1 )
    swift_once(&qword_10002A658, sub_100015EC4);
  return &static SystemEventMask.suspend;
}