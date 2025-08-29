+[TSUSystemInfo hwModel]
id __cdecl +[TSUSystemInfo hwModel](id a1, SEL a2)
{
  if ( qword_1001F7FB0 != -1 )
    dispatch_once(&qword_1001F7FB0, &stru_1001DD570);
  return (id)qword_1001F7FA8;
}