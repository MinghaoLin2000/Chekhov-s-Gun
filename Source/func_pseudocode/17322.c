-[AMRemoteActionRunner startTime]
double __cdecl -[AMRemoteActionRunner startTime](AMRemoteActionRunner *self, SEL a2)
{
  NSAssertionHandler *v4; // x21

  v4 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
  -[NSAssertionHandler handleFailureInMethod:object:file:lineNumber:description:](
    v4,
    "handleFailureInMethod:object:file:lineNumber:description:",
    a2,
    self,
    CFSTR("AMRemoteActionRunner.m"),
    299LL,
    CFSTR("Loop support not implemented here!"));
  objc_release(v4);
  return 0.0;
}