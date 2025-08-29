-[NSString tsu_initRedactedWithFormat:arguments:]
id __cdecl -[NSString tsu_initRedactedWithFormat:arguments:](NSString *self, SEL a2, id a3, char *a4)
{
  void *v5; // x19
  void *v6; // x21
  void *v7; // x22

  v5 = objc_msgSend(a3, "mutableCopy");
  objc_msgSend(
    v5,
    "replaceOccurrencesOfString:withString:options:range:",
    CFSTR("%s"),
    CFSTR("<REDACT %s REDACT>"),
    0LL,
    0LL,
    objc_msgSend(v5, "length"));
  objc_msgSend(
    v5,
    "replaceOccurrencesOfString:withString:options:range:",
    CFSTR("%@"),
    CFSTR("<REDACT %@ REDACT>"),
    0LL,
    0LL,
    objc_msgSend(v5, "length"));
  objc_msgSend(
    v5,
    "replaceOccurrencesOfString:withString:options:range:",
    CFSTR("%{public}"),
    CFSTR("%"),
    0LL,
    0LL,
    objc_msgSend(v5, "length"));
  v6 = objc_msgSend(objc_alloc((Class)&OBJC_CLASS___NSString), "initWithFormat:arguments:", v5, a4);
  if ( qword_1001F8078 != -1 )
    dispatch_once(&qword_1001F8078, &stru_1001DF5A8);
  v7 = objc_retainAutoreleasedReturnValue(
         objc_msgSend(
           (id)qword_1001F8070,
           "stringByReplacingMatchesInString:options:range:withTemplate:",
           v6,
           0LL,
           0LL,
           objc_msgSend(v6, "length"),
           CFSTR("<redacted>")));
  objc_release(self);
  objc_release(v6);
  objc_release(v5);
  return v7;
}