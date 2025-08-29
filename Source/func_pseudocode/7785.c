_$s16EyeCandyGraphics15SystemEventMaskV16keyboardActivityACvau
int *SystemEventMask.keyboardActivity.unsafeMutableAddressor()
{
  if ( qword_10002A688 != -1 )
    swift_once(&qword_10002A688, sub_100017274);
  return &static SystemEventMask.keyboardActivity;
}