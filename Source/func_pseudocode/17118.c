-[AMActionLoaderServiceInstance enqueueOperation:]
void __cdecl -[AMActionLoaderServiceInstance enqueueOperation:](AMActionLoaderServiceInstance *self, SEL a2, id a3)
{
  id v5; // x19
  NSOperationQueue *v6; // x20
  __int64 vars8; // [xsp+38h] [xbp+8h]

  v5 = objc_retain(a3);
  if ( v5 )
  {
    v6 = objc_retainAutoreleasedReturnValue(-[AMActionLoaderServiceInstance _operationQueue](self, "_operationQueue"));
    -[NSOperationQueue addOperation:](v6, "addOperation:", v5);
  }
  else
  {
    v6 = objc_retainAutoreleasedReturnValue(+[NSAssertionHandler currentHandler](&OBJC_CLASS___NSAssertionHandler, "currentHandler"));
    -[NSOperationQueue handleFailureInMethod:object:file:lineNumber:description:](
      v6,
      "handleFailureInMethod:object:file:lineNumber:description:",
      a2,
      self,
      CFSTR("AMActionLoaderServiceInstance.m"),
      215LL,
      CFSTR("Invalid parameter not satisfying: %@"),
      CFSTR("operation"));
  }
  objc_release(v6);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  objc_release(v5);
}