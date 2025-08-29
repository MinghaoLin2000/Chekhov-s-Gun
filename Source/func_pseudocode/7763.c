_$s16EyeCandyGraphics15SystemEventMaskV11dockControlACvau
int *SystemEventMask.dockControl.unsafeMutableAddressor()
{
  if ( qword_10002A9A0 != -1 )
    swift_once(&qword_10002A9A0, sub_100016444);
  return &static SystemEventMask.dockControl;
}