-[ATXHeuristicJSEnv doubleByEvaluatingJavaScript:]
double __cdecl -[ATXHeuristicJSEnv doubleByEvaluatingJavaScript:](ATXHeuristicJSEnv *self, SEL a2, id a3)
{
  JSValue *v3; // x19
  double v4; // d0
  double v5; // d8

  v3 = objc_retainAutoreleasedReturnValue(-[JSContext evaluateScript:](self->_jsContext, "evaluateScript:", a3));
  -[JSValue toDouble](v3, "toDouble");
  v5 = v4;
  objc_release(v3);
  return v5;
}