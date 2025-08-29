-[PKSecTrustWrapper description]
id __cdecl -[PKSecTrustWrapper description](PKSecTrustWrapper *self, SEL a2)
{
  __int64 v3; // x21

  v3 = objc_opt_class(self, a2);
  return +[NSString stringWithFormat:](
           &OBJC_CLASS___NSString,
           "stringWithFormat:",
           CFSTR("<%@@%p> { unretained trust %p (%d) }"),
           v3,
           self,
           -[PKSecTrustWrapper trustRef](self, "trustRef"),
           CFGetRetainCount(-[PKSecTrustWrapper trustRef](self, "trustRef")));
}