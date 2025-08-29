-[NSIndexSet tsu_nsIndexSetConcurrencyFactor]
unsigned __int64 __cdecl -[NSIndexSet tsu_nsIndexSetConcurrencyFactor](NSIndexSet *self, SEL a2)
{
  if ( qword_1001F7FC0 != -1 )
    dispatch_once(&qword_1001F7FC0, &stru_1001DE218);
  return qword_1001F7FB8;
}