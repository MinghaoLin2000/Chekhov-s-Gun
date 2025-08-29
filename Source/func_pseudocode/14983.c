-[ATXHeuristicJSEnv stringByEvaluatingJavaScript:]
id __cdecl -[ATXHeuristicJSEnv stringByEvaluatingJavaScript:](ATXHeuristicJSEnv *self, SEL a2, id a3)
{
  JSValue *v3; // x19
  NSString *v4; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[JSContext evaluateScript:](self->_jsContext, "evaluateScript:", a3));
  v4 = objc_retainAutoreleasedReturnValue(-[JSValue toString](v3, "toString"));
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}