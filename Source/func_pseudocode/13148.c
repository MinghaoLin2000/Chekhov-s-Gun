+[NSUserDefaults tsu_registerDefaults]
void __cdecl +[NSUserDefaults tsu_registerDefaults](id a1, SEL a2)
{
  if ( qword_1001F7FD8 != -1 )
    dispatch_once(&qword_1001F7FD8, &stru_1001DE518);
}