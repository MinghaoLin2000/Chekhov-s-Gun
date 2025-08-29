+[NSObject tsu_overridesClassSelector:ofBaseClass:]
bool __cdecl +[NSObject tsu_overridesClassSelector:ofBaseClass:](id a1, SEL a2, SEL a3, Class a4)
{
  Method ClassMethod; // x21

  ClassMethod = class_getClassMethod((Class)a1, a3);
  return ClassMethod != class_getClassMethod(a4, a3);
}