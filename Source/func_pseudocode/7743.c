_$s16EyeCandyGraphics15SystemEventMaskV6resumeACvau
int *SystemEventMask.resume.unsafeMutableAddressor()
{
  if ( qword_10002A660 != -1 )
    swift_once(&qword_10002A660, sub_100015F44);
  return &static SystemEventMask.resume;
}