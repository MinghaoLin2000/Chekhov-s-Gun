_$s16EyeCandyGraphics15SystemEventMaskV13mouseActivityACvau
int *SystemEventMask.mouseActivity.unsafeMutableAddressor()
{
  if ( qword_10002A670 != -1 )
    swift_once(&qword_10002A670, sub_100016D90);
  return &static SystemEventMask.mouseActivity;
}