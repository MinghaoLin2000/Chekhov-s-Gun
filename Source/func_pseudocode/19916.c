-[lite_job_t description]
NSString *__cdecl -[lite_job_t description](lite_job_t *self, SEL a2)
{
  NSString *v3; // x19
  NSString *v4; // x21
  NSString *v5; // x21
  NSString *v6; // x20
  objc_super v8; // [xsp+20h] [xbp-40h] BYREF
  __int64 vars8; // [xsp+68h] [xbp+8h]

  v3 = (NSString *)objc_retainAutoreleasedReturnValue((id)jobStateString(self->_localJobState));
  if ( self->_localJobState == 5 )
  {
    v4 = objc_retainAutoreleasedReturnValue(
           +[NSString stringWithFormat:](
             &OBJC_CLASS___NSString,
             "stringWithFormat:",
             CFSTR("%@ %ld of %ld"),
             v3,
             -[lite_job_t payloadSent](self, "payloadSent"),
             -[lite_job_t payloadTotal](self, "payloadTotal")));
    objc_release(v3);
    v3 = v4;
  }
  v8.receiver = self;
  v8.super_class = (Class)&OBJC_CLASS___lite_job_t;
  v5 = objc_retainAutoreleasedReturnValue(-[lite_job_t description](&v8, "description"));
  v6 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("%@ { local %d / remote %d %@ }"),
           v5,
           (unsigned int)self->_printd_job_id,
           -[lite_job_t destination_job_id](self, "destination_job_id"),
           v3));
  objc_release(v5);
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v6);
}