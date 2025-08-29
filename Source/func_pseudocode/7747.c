_$s16EyeCandyGraphics15SystemEventMaskV11scrollWheelACvau
int *SystemEventMask.scrollWheel.unsafeMutableAddressor()
{
  if ( qword_10002A960 != -1 )
    swift_once(&qword_10002A960, sub_100016044);
  return &static SystemEventMask.scrollWheel;
}