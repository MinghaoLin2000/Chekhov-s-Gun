-[VideoTranscodingTask hasProgress]
bool __cdecl -[VideoTranscodingTask hasProgress](VideoTranscodingTask *self, SEL a2)
{
  NSString *v2; // x21

  v2 = objc_retainAutoreleasedReturnValue(NSStringFromSelector(a2));
  +[NSException raise:format:](
    &OBJC_CLASS___NSException,
    "raise:format:",
    NSInternalInconsistencyException,
    CFSTR("Subclasses must override %@"),
    v2);
  objc_release(v2);
  return 0;
}