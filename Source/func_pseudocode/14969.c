-[ATXHeuristicJSEnv init]
ATXHeuristicJSEnv *__cdecl -[ATXHeuristicJSEnv init](ATXHeuristicJSEnv *self, SEL a2)
{
  NSBundle *v3; // x0
  NSBundle *v4; // x20
  NSBundle *v5; // x21
  ATXHeuristicJSEnv *v6; // x22

  v3 = (NSBundle *)objc_retainAutoreleasedReturnValue(
                     +[ATXHeuristicJSEnv defaultHeuristicBundlePath](
                       &OBJC_CLASS___ATXHeuristicJSEnv,
                       "defaultHeuristicBundlePath"));
  v4 = v3;
  if ( v3 )
  {
    v3 = objc_retainAutoreleasedReturnValue(+[NSBundle bundleWithPath:](&OBJC_CLASS___NSBundle, "bundleWithPath:", v3));
    v5 = v3;
    if ( v3 )
    {
      v3 = -[ATXHeuristicJSEnv initWithHeuristicBundle:dataProvider:](
             self,
             "initWithHeuristicBundle:dataProvider:",
             v3,
             0LL);
      self = (ATXHeuristicJSEnv *)v3;
    }
  }
  else
  {
    v5 = 0LL;
  }
  v6 = objc_retain(v3);
  objc_release(v5);
  objc_release(v4);
  objc_release(self);
  return v6;
}