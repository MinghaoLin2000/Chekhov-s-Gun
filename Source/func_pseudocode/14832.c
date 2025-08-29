-[WiFi3BarsResponse initWithCoder:]
WiFi3BarsResponse *__cdecl -[WiFi3BarsResponse initWithCoder:](WiFi3BarsResponse *self, SEL a2, id a3)
{
  id v3; // x20
  WiFi3BarsResponse *v4; // x19
  __int64 v5; // x22
  __int64 v6; // x23
  NSSet *v7; // x21
  NSDictionary *v8; // x22
  NSDictionary *results; // x0
  objc_super v11; // [xsp+20h] [xbp-40h] BYREF

  v11.receiver = self;
  v11.super_class = (Class)&OBJC_CLASS___WiFi3BarsResponse;
  v3 = objc_retain(a3);
  v4 = -[WiFi3BarsResponse init](&v11, "init");
  v5 = objc_opt_class(&OBJC_CLASS___NSString);
  v6 = objc_opt_class(&OBJC_CLASS___NSDictionary);
  v7 = objc_retainAutoreleasedReturnValue(
         +[NSSet setWithObjects:](
           &OBJC_CLASS___NSSet,
           "setWithObjects:",
           v5,
           v6,
           objc_opt_class(&OBJC_CLASS___WiFi3BarsNetwork),
           0LL));
  v8 = objc_retainAutoreleasedReturnValue(objc_msgSend(v3, "decodeObjectOfClasses:forKey:", v7, CFSTR("results")));
  objc_release(v3);
  results = v4->_results;
  v4->_results = v8;
  objc_release(results);
  objc_release(v7);
  return v4;
}