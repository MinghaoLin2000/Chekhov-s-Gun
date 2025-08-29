-[lite_printer_t description]
id __cdecl -[lite_printer_t description](lite_printer_t *self, SEL a2)
{
  lite_job_t *v3; // x21
  lite_job_t *v4; // x22
  __CFString *v5; // x19
  id v6; // x21
  NSString *v7; // x20
  NSString *v8; // x22
  objc_super v10; // [xsp+20h] [xbp-30h] BYREF
  __int64 vars8; // [xsp+58h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[lite_printer_t currentJob](self, "currentJob"));
  if ( v3 )
  {
    v4 = objc_retainAutoreleasedReturnValue(-[lite_printer_t currentJob](self, "currentJob"));
    v5 = objc_retainAutoreleasedReturnValue(-[lite_job_t description](v4, "description"));
    objc_release(v4);
  }
  else
  {
    v5 = CFSTR("idle");
  }
  objc_release(v3);
  v10.receiver = self;
  v10.super_class = (Class)&OBJC_CLASS___lite_printer_t;
  v6 = objc_retainAutoreleasedReturnValue(-[lite_printer_t description](&v10, "description"));
  v7 = objc_retainAutoreleasedReturnValue(-[lite_printer_t displayName](self, "displayName"));
  v8 = objc_retainAutoreleasedReturnValue(
         +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("%@ { '%@', %@ }"),
           v6,
           v7,
           v5));
  objc_release(v7);
  objc_release(v6);
  objc_release(v5);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v8);
}