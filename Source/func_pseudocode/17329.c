-[AMRemoteActionRunner _isIncorrectRunnerForThread]
bool __cdecl -[AMRemoteActionRunner _isIncorrectRunnerForThread](AMRemoteActionRunner *self, SEL a2)
{
  NSThread *v3; // x20
  NSMutableDictionary *v4; // x21
  AMRemoteActionRunner *v5; // x22
  bool v6; // zf
  bool v7; // w19

  v3 = objc_retainAutoreleasedReturnValue(+[NSThread currentThread](&OBJC_CLASS___NSThread, "currentThread"));
  v4 = objc_retainAutoreleasedReturnValue(-[NSThread threadDictionary](v3, "threadDictionary"));
  v5 = objc_retainAutoreleasedReturnValue(-[NSMutableDictionary objectForKeyedSubscript:](v4, "objectForKeyedSubscript:", CFSTR("remoteActionRunner")));
  objc_release(v4);
  objc_release(v3);
  if ( v5 )
    v6 = v5 == self;
  else
    v6 = 1;
  v7 = !v6;
  objc_release(v5);
  return v7;
}