-[EAAccessoryUpdater trainName]
id __cdecl -[EAAccessoryUpdater trainName](EAAccessoryUpdater *self, SEL a2)
{
  if ( qword_100041F08 != -1 )
    dispatch_once(&qword_100041F08, &stru_100031AA0);
  if ( qword_100041F10 )
    return +[NSString stringWithFormat:](&OBJC_CLASS___NSString, "stringWithFormat:", CFSTR("%s"), qword_100041F10);
  else
    return 0LL;
}