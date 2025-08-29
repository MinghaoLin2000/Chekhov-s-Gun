-[NSString tsu_initUnRedactedWithFormat:arguments:]
id __cdecl -[NSString tsu_initUnRedactedWithFormat:arguments:](NSString *self, SEL a2, id a3, char *a4)
{
  void *v5; // x20
  NSString *v6; // x19

  v5 = objc_msgSend(a3, "mutableCopy");
  objc_msgSend(
    v5,
    "replaceOccurrencesOfString:withString:options:range:",
    CFSTR("%{public}"),
    CFSTR("%"),
    0LL,
    0LL,
    objc_msgSend(v5, "length"));
  v6 = -[NSString initWithFormat:arguments:](self, "initWithFormat:arguments:", v5, a4);
  objc_release(v5);
  return v6;
}