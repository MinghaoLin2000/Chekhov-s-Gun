-[AMRemoteActionRunner actionDidRun:error:]
void __cdecl -[AMRemoteActionRunner actionDidRun:error:](AMRemoteActionRunner *self, SEL a2, id a3, id a4)
{
  id v6; // x19
  id v7; // x20

  v6 = objc_retain(a3);
  v7 = objc_retain(a4);
  if ( -[AMRemoteActionRunner _isIncorrectRunnerForThread](self, "_isIncorrectRunnerForThread") )
  {
    if ( os_log_type_enabled((os_log_t)&_os_log_default, OS_LOG_TYPE_DEBUG) )
      sub_100012A98(self);
  }
  else
  {
    -[AMRemoteActionRunner _actionDidRun:error:fromException:](self, "_actionDidRun:error:fromException:", v6, v7, 0LL);
  }
  objc_release(v7);
  objc_release(v6);
}