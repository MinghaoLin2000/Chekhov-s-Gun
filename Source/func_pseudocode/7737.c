_$s16EyeCandyGraphics15SystemEventMaskV5timerACvau
int *SystemEventMask.timer.unsafeMutableAddressor()
{
  if ( qword_10002A648 != -1 )
    swift_once(&qword_10002A648, sub_100015DC4);
  return &static SystemEventMask.timer;
}