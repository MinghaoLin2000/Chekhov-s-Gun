-[ATXHeuristicJSEnv intByEvaluatingJavaScript:]
int __cdecl -[ATXHeuristicJSEnv intByEvaluatingJavaScript:](ATXHeuristicJSEnv *self, SEL a2, id a3)
{
  JSValue *v3; // x19
  int v4; // w20

  v3 = objc_retainAutoreleasedReturnValue(-[JSContext evaluateScript:](self->_jsContext, "evaluateScript:", a3));
  v4 = -[JSValue toInt32](v3, "toInt32");
  objc_release(v3);
  return v4;
}