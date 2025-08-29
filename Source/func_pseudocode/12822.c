+[TSUSystemInfo osVersion]
id __cdecl +[TSUSystemInfo osVersion](id a1, SEL a2)
{
  if ( qword_1001F7FA0 != -1 )
    dispatch_once(&qword_1001F7FA0, &stru_1001DD550);
  return (id)qword_1001F7F98;
}