+[LSRConnection captureProcessStartTime]
void __cdecl +[LSRConnection captureProcessStartTime](id a1, SEL a2)
{
  if ( qword_100065428 != -1 )
    dispatch_once(&qword_100065428, &stru_100059C00);
}