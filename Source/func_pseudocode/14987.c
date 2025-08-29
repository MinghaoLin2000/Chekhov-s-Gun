-[ATXHeuristicJSEnv boolByEvaluatingJavaScript:]
bool __cdecl -[ATXHeuristicJSEnv boolByEvaluatingJavaScript:](ATXHeuristicJSEnv *self, SEL a2, id a3)
{
  JSValue *v3; // x19
  unsigned __int8 v4; // w20

  v3 = objc_retainAutoreleasedReturnValue(-[JSContext evaluateScript:](self->_jsContext, "evaluateScript:", a3));
  v4 = -[JSValue toBool](v3, "toBool");
  objc_release(v3);
  return v4;
}