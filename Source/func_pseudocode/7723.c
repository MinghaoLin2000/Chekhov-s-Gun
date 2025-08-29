_$s16EyeCandyGraphics15SystemEventMaskV11mouseExitedACvau
int *SystemEventMask.mouseExited.unsafeMutableAddressor()
{
  if ( qword_10002A628 != -1 )
    swift_once(&qword_10002A628, sub_100015A44);
  return &static SystemEventMask.mouseExited;
}