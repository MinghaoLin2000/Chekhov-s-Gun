-[ATXHeuristicJSEnv objectByEvaluatingJavaScript:]
id __cdecl -[ATXHeuristicJSEnv objectByEvaluatingJavaScript:](ATXHeuristicJSEnv *self, SEL a2, id a3)
{
  JSValue *v3; // x19
  id v4; // x20
  __int64 vars8; // [xsp+18h] [xbp+8h]

  v3 = objc_retainAutoreleasedReturnValue(-[JSContext evaluateScript:](self->_jsContext, "evaluateScript:", a3));
  v4 = objc_retainAutoreleasedReturnValue(-[JSValue toObject](v3, "toObject"));
  objc_release(v3);
  if ( ((vars8 ^ (2 * vars8)) & 0x4000000000000000LL) != 0 )
    __break(0xC471u);
  return objc_autoreleaseReturnValue(v4);
}