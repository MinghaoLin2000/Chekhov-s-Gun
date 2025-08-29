-[TSULogCatThreadSafeMutableSet init]
TSULogCatThreadSafeMutableSet *__cdecl -[TSULogCatThreadSafeMutableSet init](
        TSULogCatThreadSafeMutableSet *self,
        SEL a2)
{
  NSArray *v3; // x20
  TSULogCatThreadSafeMutableSet *v4; // x19

  v3 = objc_retainAutoreleasedReturnValue(+[NSArray array](&OBJC_CLASS___NSArray, "array"));
  v4 = -[TSULogCatThreadSafeMutableSet initWithArray:](self, "initWithArray:", v3);
  objc_release(v3);
  return v4;
}