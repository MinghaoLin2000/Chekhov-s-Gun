_$s16EyeCandyGraphics15SystemEventMaskV13systemDefinedACvau
int *SystemEventMask.systemDefined.unsafeMutableAddressor()
{
  if ( qword_10002A638 != -1 )
    swift_once(&qword_10002A638, sub_100015CC4);
  return &static SystemEventMask.systemDefined;
}