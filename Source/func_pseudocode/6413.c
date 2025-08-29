-[VideoTranscodingTask currentFractionCompleted]
double __cdecl -[VideoTranscodingTask currentFractionCompleted](VideoTranscodingTask *self, SEL a2)
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
  return NAN;
}