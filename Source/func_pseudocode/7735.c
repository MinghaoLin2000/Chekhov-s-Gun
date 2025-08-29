_$s16EyeCandyGraphics15SystemEventMaskV18applicationDefinedACvau
int *SystemEventMask.applicationDefined.unsafeMutableAddressor()
{
  if ( qword_10002A640 != -1 )
    swift_once(&qword_10002A640, sub_100015D44);
  return &static SystemEventMask.applicationDefined;
}