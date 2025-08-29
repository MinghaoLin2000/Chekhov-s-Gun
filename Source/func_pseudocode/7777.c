_$s16EyeCandyGraphics15SystemEventMaskV12mouseButtonsACvau
int *SystemEventMask.mouseButtons.unsafeMutableAddressor()
{
  if ( qword_10002A9D8 != -1 )
    swift_once(&qword_10002A9D8, sub_100016C6C);
  return &static SystemEventMask.mouseButtons;
}