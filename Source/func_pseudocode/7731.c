_$s16EyeCandyGraphics15SystemEventMaskV10kitDefinedACvau
int *SystemEventMask.kitDefined.unsafeMutableAddressor()
{
  if ( qword_10002A630 != -1 )
    swift_once(&qword_10002A630, sub_100015C44);
  return &static SystemEventMask.kitDefined;
}