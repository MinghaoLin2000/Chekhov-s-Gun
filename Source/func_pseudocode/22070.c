+[FMMFileLogger sharedInstance]
id __cdecl +[FMMFileLogger sharedInstance](id a1, SEL a2)
{
  if ( qword_10000C2F8 != -1 )
    dispatch_once(&qword_10000C2F8, &stru_1000082F0);
  return (id)qword_10000C2F0;
}